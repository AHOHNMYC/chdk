#include "platform.h"
#include "keyboard.h"
#include "math.h"
#include "stdlib.h"
#include "conf.h"
#include "histogram.h"
#include "usb_remote.h"
#include "autoiso.h"
#include "levent.h"

// Shooting function that don't need to be ARM code
// ARM code shooting functions are in platform/generic/shooting.c

// This file needs more comments / documentation !!!!

//-------------------------------------------------------------------
// Forward references

// returns 0 if in play, nonzero if rec
int rec_mode_active(void); 

//-------------------------------------------------------------------
// From lolevel.h
extern volatile long focus_busy;
extern long playrec_mode;

// Array & sizes stored in platform/generic/shooting.c
extern const ShutterSpeed shutter_speeds_table[];
extern const unsigned int SS_SIZE;
extern const ApertureSize aperture_sizes_table[];
extern const unsigned int AS_SIZE;
extern const CapturemodeMap modemap[];
extern const unsigned int MODESCNT;

#define AV96_MIN (aperture_sizes_table[0].prop_id)
#define AV96_MAX (aperture_sizes_table[AS_SIZE-1].prop_id)

static short *min_av96_zoom_point_tbl = NULL;

DOF_TYPE dof_values;

// Storage for delayed shooting overrides
#define PHOTO_PARAM_TV_NONE 32767 // ~ 1/(2^341) seconds, safe marker for "no value"

typedef struct {
    short av96;
    short tv96;
    short sv96;
    short subj_dist;
    short nd_filter;
} PHOTO_PARAM;

static PHOTO_PARAM photo_param_put_off;

//-------------------------------------------------------------------
// Convert values to/from APEX 96

static const double sqrt2 = 1.4142135623731;        //square root from 2
//static const double log_2 = 0.6931471805599;        //natural logarithm of 2
static const double inv_log_2 = 1.44269504088906;   // 1 / log_2
static const double k=12.5;                         //K is the reflected-light meter calibration constant

//-------------------------------------------------------------------
// Functions to access Canon properties

int shooting_get_prop(int id)
{
    short vv;
    get_property_case(id, &vv, sizeof(vv));
    return vv;
}

static int shooting_get_prop_int(int id)
{
    int vv;
    get_property_case(id, &vv, sizeof(vv));
    return vv;
}

void shooting_set_prop(int id, int v)
{
    short vv = v;
    set_property_case(id, &vv, sizeof(vv));
    return;
}

short shooting_get_is_mode()                    { return shooting_get_prop(PROPCASE_IS_MODE); }
short shooting_get_bv96()                       { return shooting_get_prop(PROPCASE_BV); }
short shooting_get_canon_overexposure_value()   { return shooting_get_prop(PROPCASE_OVEREXPOSURE); }
short shooting_get_flash_mode()                 { return shooting_get_prop(PROPCASE_FLASH_MODE); }
short shooting_get_tv96()                       { return shooting_get_prop(PROPCASE_TV); }
short shooting_get_av96()                       { return shooting_get_prop(PROPCASE_AV); }
short shooting_get_focus_mode()                 { return shooting_get_prop(PROPCASE_FOCUS_MODE); }
short shooting_get_ev_correction1()             { return shooting_get_prop(PROPCASE_EV_CORRECTION_1); }
short shooting_get_ev_correction2()             { return shooting_get_prop(PROPCASE_EV_CORRECTION_2); }
short shooting_get_resolution()                 { return shooting_get_prop(PROPCASE_RESOLUTION); }
short shooting_get_display_mode()               { return shooting_get_prop(PROPCASE_DISPLAY_MODE); }

int   shooting_get_exif_subject_dist()          { return shooting_get_prop_int(PROPCASE_SUBJECT_DIST1); }
int   shooting_is_flash()                       { return shooting_get_prop_int(PROPCASE_IS_FLASH_READY); }
int   shooting_in_progress()                    { return shooting_get_prop_int(PROPCASE_SHOOTING); }

short shooting_get_real_focus_mode()
{
    short f = shooting_get_focus_mode();
    short m = shooting_get_prop(PROPCASE_REAL_FOCUS_MODE);
    if (f==0 && m!=0) f=(m==1)?4:m;
    return f;
}

short shooting_get_focus_state()
{
    if (shooting_get_focus_mode()==1) return -1;
    int m = shooting_get_prop_int(PROPCASE_FOCUS_STATE);
    return (short) m;
}
 
short shooting_get_focus_ok()
{
    return ((shooting_get_focus_state()!=0) && shooting_in_progress());
}

short shooting_get_user_tv96()
{
#if CAM_HAS_USER_TV_MODES
    return shooting_get_prop(PROPCASE_USER_TV);
#else
    return 0;
#endif
}

short shooting_get_user_av96()
{
#if CAM_HAS_IRIS_DIAPHRAGM
    return shooting_get_prop(PROPCASE_USER_AV);
#else
    return 0;
#endif
}

short shooting_get_drive_mode()
{
    // these cameras do not set PROPCASE_DRIVE_MODE when in custom timer mode
    // SX 200 IS 0,1,2,3,4=Off, 2 Second, Custom, Face Detection
#if defined (CAM_DRIVE_MODE_FROM_TIMER_MODE)
    short m = shooting_get_prop(PROPCASE_TIMER_MODE);
    // note we return this only in custom mode.
    // Other cameras would return 3 if any timer mode is set (?) even if it doesn't do multiple exposures
    // note that face detect does multiple exposure
    if (m == 3)
        return m;
#endif

    return shooting_get_prop(PROPCASE_DRIVE_MODE);
}

int shooting_get_zoom()
{
    return lens_get_zoom_point();
}

short shooting_get_aperture_sizes_table_size()
{
    return AS_SIZE;
}

//-------------------------------------------------------------------
// ISO section - start
//-------------------------------------------------------------------

/*
    Notes on Canon ISO & CHDK ISO overrides.
    ========================================
    (philmoz Aug 2013)

    Canon P&S cameras use two different values for ISO in the firmware.
        - the ISO value displayed on screen & stored in the image EXIF, generally referred to as the 'market' ISO
        - the value used to program the sensitivity of the sensor and/or set the image tone curve, the 'real' ISO

    The firmware uses the APEX system for ISO (as well as aperture, shutter speed and luminance).
    See - http://dougkerr.net/pumpkin/#Optics - APEX - The Additive System of Photographic Exposure.
    The Canon firmware scales the Sv (speed value) by multiplying values by 96 - referred to as Sv96 below.

    Conversion of ISO to/from Sv96 (from the above linked PDF)
    ----------------------------------------------------------
        Sv = log2(ISO / 3.125)      ==>     Sv96 = log2(ISO / 3.125) * 96
        ISO = pow(2, Sv * 3.125)    ==>     ISO = pow(2, Sv96 / 96 * 3.125)

    In the implementation below 3.125 is represented as 100/32, 
    and log2(x) is calculated as log(x)/log(2), where log is the natural log function found in the firmware.

    Relationship of 'real' to 'market' values.
    ------------------------------------------
    In most cases the following equation holds:
        Sv96_real = Sv96_market - 69
    In other words the 'real' value is approx. 1/3 stop lower than the market value.
    On some cameras, when the lowest ISO is set manually on the camera, the equation is:
        Sv96_real = Sv96_market - 78
    The difference is less than 1/10th of a stop, so the value 69 is used in the CHDK override code.

    Based on the above equations we can determine that:
        ISO_real = ISO_market * pow(2, -69/96) ~= ISO_market * 1.65
    and ISO_market = ISO_real * pow(2,  69/96) ~= ISO_real * 0.61
    The derivation of this equation is left as an exercise for the reader :)

    Setting ISO on the camera.
    --------------------------
    Four PROPCASES are used for ISO settings
        PROPCASE_ISO_MODE       = ISO value when ISO set manually, 0 for AUTO ISO
        PROPCASE_SV             = 'real' Sv96 value for ISO
        PROPCASE_SV_MARKET      = 'market' Sv96 value when ISO set manually
                                = Sv96 value for camera 'base' ISO (50,100 or 200) when using AUTO ISO
        PROPCASE_DELTA_SV       = 0 when ISO set manually
                                = 'market' Sv96 - PROPCASE_SV_MARKET when using AUTO ISO

    From the above:
        'market' Sv96 = PROPCASE_SV_MARKET + PROPCASE_DELTA_SV
 */

extern const ISOTable iso_table[];
extern const unsigned int ISO_SIZE;

short shooting_get_canon_iso_mode()             { return shooting_get_prop(PROPCASE_ISO_MODE); }
short shooting_get_sv96_market()                { return shooting_get_prop(PROPCASE_SV_MARKET); }
short shooting_get_sv96_real()                  { return shooting_get_prop(PROPCASE_SV); }
short shooting_get_sv96_delta()                 { return shooting_get_prop(PROPCASE_DELTA_SV); }

// Local shooting calculation variables
static short canon_iso_base=0;
static short canon_sv96_base=0;

// "real" to "market" conversion definitions
#define SV96_MARKET_OFFSET          69          // market-real sv96 conversion value

// Conversion values for pow(2,-69/96) 'market' to 'real', and pow(2,69/96) 'real' to 'market'
// Uses integer arithmetic to avoid floating point calculations. Values choses to get as close
// to the desired multiplication factor as possible within normal ISO range.
#define ISO_MARKET_TO_REAL_MULT     9955
#define ISO_MARKET_TO_REAL_SHIFT    14
#define ISO_MARKET_TO_REAL_ROUND    8192
#define ISO_REAL_TO_MARKET_MULT     3371
#define ISO_REAL_TO_MARKET_SHIFT    11
#define ISO_REAL_TO_MARKET_ROUND    1024

#define ISO_MARKET_TO_REAL(x)       ((x * ISO_MARKET_TO_REAL_MULT + ISO_MARKET_TO_REAL_ROUND) >> ISO_MARKET_TO_REAL_SHIFT)
#define ISO_REAL_TO_MARKET(x)       ((x * ISO_REAL_TO_MARKET_MULT + ISO_REAL_TO_MARKET_ROUND) >> ISO_REAL_TO_MARKET_SHIFT)

short shooting_get_sv96_from_iso(short iso)
{
    // Equivalent to (short)(log2(iso/3.125)*96+0.5) [APEX equation]
    if (iso > 0)
        return (short)( log((double)(iso)*32.0/100.0)*96.0*(inv_log_2)+0.5 );
    return 0;
}

short shooting_get_iso_from_sv96(short sv96)
{
    // APEX equation --> (int)(POWER(2,(iso/96)) * 3.125) + 0.5)
    return (short)( (double)pow(2, (((double)sv96)/96.0))*100.0/32.0 + 0.5 );
}

int shooting_iso_market_to_real(int isom)
{
   return ISO_MARKET_TO_REAL(isom);
}

int shooting_iso_real_to_market(int isor)
{
   return ISO_REAL_TO_MARKET(isor);
}

short shooting_get_iso_override_value()
{
    short iso = conf.iso_override_value;        // Start with market value
    // Apply limits if needed
#ifdef CAM_ISO_LIMIT_IN_HQ_BURST
    // Limit max ISO in HQ burst mode (also done in shooting_set_iso_real; but done here so OSD display value is correct)
    if ((mode_get() & MODE_SHOOTING_MASK) == MODE_SCN_HIGHSPEED_BURST)
        if (iso > CAM_ISO_LIMIT_IN_HQ_BURST) iso = CAM_ISO_LIMIT_IN_HQ_BURST;
#endif
#ifdef CAM_MIN_ISO_OVERRIDE
    // Limit min (non-zero) ISO
    // Some cameras will crash if flash used and ISO set lower than this value (most easily tested in AUTO mode)
    if ((iso > 0) && (iso < CAM_MIN_ISO_OVERRIDE)) iso = CAM_MIN_ISO_OVERRIDE;
#endif
    return shooting_iso_market_to_real(iso);    // return real value (after limits applied)
}

int shooting_get_iso_mode()
{
    short isov = shooting_get_canon_iso_mode();
    long i;
    for (i=0;i<ISO_SIZE;i++)
    {
        if (iso_table[i].prop_id == isov)
            return iso_table[i].id;
    }
    return 0;
}

short shooting_get_iso_real()
{
    short sv = shooting_get_sv96_real();
    if (sv == 0)
        return 0;
    return shooting_get_iso_from_sv96(sv);
}

// AUTOISO:EXIF
short shooting_get_iso_market()
{
    short sv = shooting_get_sv96_market() + shooting_get_sv96_delta();
    if (sv == 0)
        return 0;
    return shooting_get_iso_from_sv96(sv);
}

static void set_iso_mode(int i)
{
    short vv = iso_table[i].prop_id;
    set_property_case(PROPCASE_ISO_MODE, &vv, sizeof(vv));
}

void shooting_set_iso_mode(int v)
{
    int i;
    if (v < 50) // CHDK ID
    {
        for (i=0; i<ISO_SIZE; i++)
        {
            if (iso_table[i].id == v)
            {
                set_iso_mode(i);
                return;
            }
        }
    }
    else        // ISO value - find nearest entry in iso_table and set iso mode to that value
    {
        if (v <= iso_table[0].prop_id)    // In case no AUTO (0) entry
        {
            set_iso_mode(0);
            return;
        }
        for (i=0; i<ISO_SIZE-1; i++)
        {
            if ((v > iso_table[i].prop_id) && (v <= iso_table[i+1].prop_id))
            {
                if ((v - iso_table[i].prop_id) < (iso_table[i+1].prop_id - v))
                    set_iso_mode(i);
                else
                    set_iso_mode(i+1);
                return;
            }
        }
        set_iso_mode(ISO_SIZE-1);
    }
}

void shooting_set_sv96(short sv96, short is_now)
{
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if (is_now)
        {
            while ((shooting_is_flash_ready()!=1) || (focus_busy)) msleep(10);

            short iso_mode = shooting_get_canon_iso_mode();
            if (iso_mode >= 50)
                shooting_set_iso_mode(0);   // Force AUTO mode on camera

            short dsv96 = sv96 + SV96_MARKET_OFFSET - canon_sv96_base;

            set_property_case(PROPCASE_SV_MARKET, &canon_sv96_base, sizeof(canon_sv96_base));
            set_property_case(PROPCASE_SV,        &sv96, sizeof(sv96));
            set_property_case(PROPCASE_DELTA_SV,  &dsv96, sizeof(dsv96));
        }
        else   
            photo_param_put_off.sv96 = sv96;
    }
}

void shooting_set_iso_real(short iso, short is_now)
{
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if (iso > 0)
        {
#ifdef CAM_ISO_LIMIT_IN_HQ_BURST
            // Limit max ISO in HQ burst mode
            if ((mode_get() & MODE_SHOOTING_MASK) == MODE_SCN_HIGHSPEED_BURST)
                if (iso > ISO_MARKET_TO_REAL(CAM_ISO_LIMIT_IN_HQ_BURST)) iso = ISO_MARKET_TO_REAL(CAM_ISO_LIMIT_IN_HQ_BURST);
#endif
#ifdef CAM_MIN_ISO_OVERRIDE
            // Limit min (non-zero) ISO
            if ((iso > 0) && (iso < ISO_MARKET_TO_REAL(CAM_MIN_ISO_OVERRIDE))) iso = ISO_MARKET_TO_REAL(CAM_MIN_ISO_OVERRIDE);
#endif
            shooting_set_sv96(shooting_get_sv96_from_iso(iso), is_now);
        }
    }
}

static void iso_init()
{
    // Get the camera ISO base value, store in global variable 'canon_iso_base'
    if (iso_table[1-iso_table[0].id].prop_id == 50)
        canon_iso_base = 50;
    else
        canon_iso_base = CAM_MARKET_ISO_BASE;

    // Get the SV96 value corresponding to the base Canon ISO for the camera
    // Store in global variable 'canon_sv96_base'
    canon_sv96_base = shooting_get_sv96_from_iso(canon_iso_base);
}
//-------------------------------------------------------------------
// ISO section - end
//-------------------------------------------------------------------

//-------------------------------------------------------------------
// Init

void shooting_init()
{
    photo_param_put_off.tv96 = PHOTO_PARAM_TV_NONE;
    iso_init();
}

//-------------------------------------------------------------------
// Get file related info

extern const unsigned int param_file_counter;

long get_file_counter()
{
    long v = 0;
    get_parameter_data(param_file_counter, &v, 4);
    return v;
}

long get_exposure_counter()
{
    long v = 0;
    get_parameter_data(param_file_counter, &v, 4);
    v = ((v>>4)&0x3FFF);
    return v;
}

#ifndef CAM_DATE_FOLDER_NAMING
void get_target_dir_name(char *dir) {
    extern long get_target_dir_num();
    sprintf(dir,"A/DCIM/%03dCANON",get_target_dir_num());
}
#endif

//-------------------------------------------------------------------
// Convert values to/from APEX 96

short shooting_get_aperture_from_av96(short av96)
{
    if (av96)
        return (short)((pow(sqrt2, ((double)av96)/96.0))*100.0);
    return -1;
}

short shooting_get_tv96_from_shutter_speed(float t)
{
    if (t > 0)
    {
        t = ((96.0 * log(1.0/t)) * inv_log_2);
        if (t < 0)
            return (short)(t - 0.5);
        return (short)(t + 0.5);
    }
    return -10000;
}

float shooting_get_shutter_speed_from_tv96(short tv)
{
    return pow(2,(float)((-1)*tv)/96.0 );
}

int shooting_get_luminance()// http://en.wikipedia.org/wiki/APEX_system
{
    short bv = shooting_get_bv96();
    int b=(int)(100*k*pow(2.0,((double)(bv-168)/96.0)));
    return b;
}

//-------------------------------------------------------------------
// Get override values

// Index of '0' entry in the tv_override array (1 sec) (see gui.c for tv_override array)
#if CAM_EXT_TV_RANGE
#define tv_override_zero_shift  (18+15)
#else
#define tv_override_zero_shift  18
#endif

static int shooting_get_tv96_override_value()
{
    // Calculate the tv96 value for the tv override
    if (conf.tv_enum_type==TV_OVERRIDE_EV_STEP)
        return 32*(conf.tv_override_value-tv_override_zero_shift);
    else if (conf.tv_enum_type==TV_OVERRIDE_SHORT_EXP)
        return shooting_get_tv96_from_shutter_speed(((float)conf.tv_override_short_exp)/100000.0);
    else
        return shooting_get_tv96_from_shutter_speed((float)conf.tv_override_long_exp);
}

int shooting_get_subject_distance_override_value()
{
    if (conf.subj_dist_override_koef != SD_OVERRIDE_INFINITY)
        return (conf.subj_dist_override_value < shooting_get_lens_to_focal_plane_width()?0:(conf.subj_dist_override_value - shooting_get_lens_to_focal_plane_width()));
    else
        return INFINITY_DIST;
}

short shooting_get_av96_override_value()
{
    if (conf.av_override_value<AS_SIZE)
        return (short) aperture_sizes_table[conf.av_override_value].prop_id;
    return (short) (AV96_MAX+32*(conf.av_override_value-AS_SIZE+1));
}

//-------------------------------------------------------------------
// Get shooting value, with conversion / calculation

int shooting_mode_canon2chdk(int canonmode)
{
	int i;
	for (i=0; i < MODESCNT; i++)
    {
		if (modemap[i].canonmode == canonmode)
			return modemap[i].hackmode;
	}
	return 0;
}

int shooting_mode_chdk2canon(int hackmode)
{
	int i;
	for (i=0; i < MODESCNT; i++)
    {
		if (modemap[i].hackmode == hackmode)
			return modemap[i].canonmode;
	}
	return -1; // 0 is a valid mode on old cameras!
}

int shooting_get_user_tv_id()
{
#if CAM_HAS_USER_TV_MODES
    short tvv;
    long i;
    get_property_case(PROPCASE_USER_TV, &tvv, sizeof(tvv));
    for (i=0;i<SS_SIZE;i++)
    {
	    if (shutter_speeds_table[i].prop_id == tvv)
	        return shutter_speeds_table[i].id;
    }
#endif
    return 0;
}

//const ShutterSpeed *shooting_get_tv_line()
//{
//    short tvv;
//    long i;
//    get_property_case(PROPCASE_USER_TV, &tvv, sizeof(tvv));
//    for (i=0;i<SS_SIZE;i++)
//    {
//        if (shutter_speeds_table[i].prop_id == tvv)
//            return &shutter_speeds_table[i];
//    }
//    return 0;
//}

int shooting_get_user_av_id()
{
#if CAM_HAS_IRIS_DIAPHRAGM
    short avv;
    long i;
    get_property_case(PROPCASE_USER_AV, &avv, sizeof(avv));
    for (i=0;i<AS_SIZE;i++)
    {
        if (aperture_sizes_table[i].prop_id == avv)
            return aperture_sizes_table[i].id;
    }
#endif
    return 0;
}

short shooting_get_min_real_aperture()
{
    short av96;
    get_property_case(PROPCASE_MIN_AV, &av96, sizeof(av96));
    if (av96)
        return shooting_get_aperture_from_av96(av96);
    return shooting_get_real_aperture();
}

short shooting_get_real_aperture()
{
    return shooting_get_aperture_from_av96(GetCurrentAvValue());
}

int shooting_get_lens_to_focal_plane_width()
{
    return (int)(lens_get_focus_pos()-lens_get_focus_pos_from_lens());
}

short shooting_get_aperture_from_av96_1e3(short av96) {
	if (av96) return (short)(pow(sqrt2, (((double)av96)/96.0))*1000.0 + 0.5);
	else return -1;
}

int shooting_get_hyperfocal_distance_1e3_f2(int av_1e3, int fl)
{
  if ((av_1e3>0) && (fl>0) && (circle_of_confusion>0)) 
    return (int)(((((double)fl*fl)/(av_1e3*circle_of_confusion)*1000)+fl)+0.5);
  else return (-1);
}

int shooting_get_hyperfocal_distance_1e3_f(int av, int fl)
{
  if ((av>0) && (fl>0) && (circle_of_confusion>0)) 
    return (int)(((((double)fl*fl)/(av*circle_of_confusion)*100)+fl)+0.5);
  else return (-1);
}

int shooting_get_near_limit_f(int s, int av, int fl)
{
  if (shooting_is_infinity_distance()) return (-1);
  int h_1e3 = shooting_get_hyperfocal_distance_1e3_f(av, fl);
  double m = ((double)(h_1e3 - fl)+500)/1000*s;
  int v = ((h_1e3 - 2*fl + 1000*s)+500)/1000;
  if ((m>0) && (v>0)) return (int)((2*m/v+1)/2);
  else return (-1);
}

int shooting_get_far_limit_f(int s, int av, int fl)
{
  if (shooting_is_infinity_distance()) return (-1);
  int h_1e3 = shooting_get_hyperfocal_distance_1e3_f(av, fl);
  double m = ((double)(h_1e3 - fl)+500)/1000*s;
  int v = ((h_1e3 - 1000*s)+500)/1000;
  if ((m>0) && (v>0)) return (int)((2*m/v+1)/2);
  else return (-1); 
}

short shooting_is_infinity_distance()
{
  return (shooting_get_lens_to_focal_plane_width() == 0)?1:0;
}

int shooting_get_canon_subject_distance()
{
	if (conf.dof_use_exif_subj_dist) 
	  return shooting_get_exif_subject_dist();
	else
	  return (lens_get_focus_pos_from_lens());
}

int shooting_get_subject_distance_()
{
   if (!conf.dof_subj_dist_as_near_limit) return shooting_get_canon_subject_distance();
   else return shooting_get_far_limit_f(shooting_get_canon_subject_distance(),
                                         shooting_get_min_real_aperture(), 
                                         get_focal_length(lens_get_zoom_point()));
}

void shooting_update_dof_values()
{
  int hyp, hyp_1e3, av_1e3, v, m;
  int dist = shooting_get_subject_distance_();
  int zoom_point = lens_get_zoom_point();
  int fl = get_focal_length(zoom_point);
  short f_focus_ok = shooting_get_focus_ok();
  short f_hyp_calc = 0, f_dist_calc = 0;
  short min_av96_zoom_point = min_av96_zoom_point_tbl[zoom_point];
  short av96 = shooting_get_user_av96();
  short curr_av96 = GetCurrentAvValue();
  short prop_av96 = shooting_get_av96();
  short min_av96;

  if (!min_av96_zoom_point_tbl) {
    min_av96_zoom_point_tbl = (short *) malloc(zoom_points * sizeof(short));
    if (min_av96_zoom_point_tbl) {
      memset(min_av96_zoom_point_tbl, 0, zoom_points * sizeof(short));
      min_av96_zoom_point = 0;
    }
  } else min_av96_zoom_point = min_av96_zoom_point_tbl[zoom_point]; 

  if (min_av96_zoom_point==0 && shooting_in_progress()) { 
    get_property_case(PROPCASE_MIN_AV, &min_av96, sizeof(min_av96));
    min_av96_zoom_point_tbl[zoom_point] = min_av96;
  }

  m = mode_get()&MODE_SHOOTING_MASK;
  if ((m==MODE_M || m==MODE_AV) && (av96>0) && !f_focus_ok) { 
    if (av96 < min_av96_zoom_point) av96 = min_av96_zoom_point;
  }
  else av96 = (abs(curr_av96-prop_av96)<2)?prop_av96:curr_av96;

  av_1e3 = shooting_get_aperture_from_av96_1e3(av96);
  hyp_1e3 = dof_values.hyperfocal_distance_1e3;
  hyp = dof_values.hyperfocal_distance;
  
  if (dof_values.aperture_value!=av_1e3 || dof_values.focal_length!=fl || (hyp_1e3<0)) { 
    //calc new hyperfocal distance and min stack distance
    f_hyp_calc = 1;
    hyp_1e3 = -1;
    hyp = -1;
    dof_values.aperture_value = av_1e3;
    dof_values.focal_length = fl;
    hyp_1e3 = shooting_get_hyperfocal_distance_1e3_f2(av_1e3, fl);
    if (hyp_1e3>0) {
      hyp = (hyp_1e3+500)/1000;
      dof_values.min_stack_distance = MAX_DIST;
      v = ((hyp_1e3 - fl)/250 + 2 + 1)/2;
      if (v>0) {
        int m = ((fl*((fl - hyp_1e3)/1000 - 1)/500)/v + 1)/2;
        int m2 = (int)((((double)hyp*(2*fl - hyp_1e3)/1000))/v + 0.5);
        dof_values.min_stack_distance = sqrt(m*m - m2) - m;
      }  
    }
  }

  if ((dof_values.subject_distance!=dist || (dof_values.hyperfocal_distance_1e3!=hyp_1e3)) && (hyp_1e3>0)) {
    //calc new NEAR, FAR, DOF values
    f_dist_calc = 1;
    dof_values.subject_distance = dist;
    dof_values.near_limit = -1;
    dof_values.far_limit = -1;
    dof_values.depth_of_field = -1;
    if ((av_1e3>0) && (fl>0) && (dist>0) && (shooting_is_infinity_distance()==0) && (hyp_1e3>0)) {
      double m = ((double)(hyp_1e3 - fl)/1000 * dist) + 0.5;
      if (conf.dof_subj_dist_as_near_limit) { 
         dof_values.near_limit = dist;
      } else {
        int v = ((((hyp_1e3 - 2*fl + 1000*dist)/500) + 1)/2);
   	    if (v>0) dof_values.near_limit = (int)(m/v);
   	  }
      int v = ((((hyp_1e3 - 1000*dist)/500) + 1)/2);
      if (v>0) dof_values.far_limit = (int)(m/v);
      if ((dof_values.near_limit>0) && (dof_values.far_limit>0)) {
        dof_values.depth_of_field = dof_values.far_limit - dof_values.near_limit;
      }
    }
  }
  dof_values.hyperfocal_distance_1e3 = hyp_1e3;
  dof_values.hyperfocal_distance = hyp; 
  f_focus_ok = (f_focus_ok && shooting_get_focus_ok());
  dof_values.hyperfocal_valid = (f_focus_ok || (dof_values.hyperfocal_valid && !f_hyp_calc));
  dof_values.distance_valid = (f_focus_ok || (dof_values.distance_valid && !f_dist_calc)||(dof_values.hyperfocal_valid && shooting_get_focus_mode()));
  return;
}

int shooting_get_subject_distance()
{
  shooting_update_dof_values();
  return dof_values.subject_distance;
}

int shooting_get_hyperfocal_distance()
{
  shooting_update_dof_values();
  return dof_values.hyperfocal_distance;
}

short shooting_can_focus()
{
    int m=mode_get()&MODE_SHOOTING_MASK;
#if !CAM_CAN_SD_OVER_NOT_IN_MF && CAM_CAN_SD_OVERRIDE
#if CAM_CAN_SD_OVER_IN_AF_LOCK_ONLY
    if (shooting_get_prop(PROPCASE_AF_LOCK))
        return 1;
    else if (!MODE_IS_VIDEO(m))
        return 0;
#elif CAM_CAN_SD_OVER_IN_AF_LOCK
    if (shooting_get_prop(PROPCASE_AF_LOCK))
        return 1;
#elif CAM_HAS_VIDEO_BUTTON
	return shooting_get_common_focus_mode();
#endif
    return (shooting_get_common_focus_mode() || MODE_IS_VIDEO(m));
#elif !CAM_CAN_SD_OVERRIDE
    return MODE_IS_VIDEO(m);
#elif defined (CAMERA_ixus800_sd700)
    // TODO whats the reason for this ?!?
    return (shooting_get_zoom()<8) && (m!=MODE_AUTO) && (m!=MODE_SCN_UNDERWATER);
#else
#ifdef PROPCASE_CONTINUOUS_AF
    if (shooting_get_prop(PROPCASE_CONTINUOUS_AF))
        return 0;
#endif
#ifdef PROPCASE_SERVO_AF
    if (shooting_get_prop(PROPCASE_SERVO_AF))
        return 0;
#endif
    return 1;
#endif
}

short shooting_get_common_focus_mode()
{
#if !CAM_HAS_MANUAL_FOCUS && CAM_CAN_SD_OVERRIDE
    return conf.subj_dist_override_koef;
#elif !CAM_CAN_SD_OVERRIDE
    return 0;
#else
    return shooting_get_focus_mode();
#endif
}

int shooting_is_flash_ready()
{
    int t = shooting_get_flash_mode();
    if ((t != 2) && (shooting_in_progress()))
        if (shooting_is_flash()) 
            return IsStrobeChargeCompleted();
    return 1;
}

// Only needed on VxWorks
#if CAM_DRAW_EXPOSITION

// compare PROPCASE_TV with shutter_speeds_table
char* shooting_get_tv_str()
{
    short int tvv;
    long i;
    get_property_case(PROPCASE_TV, &tvv, sizeof(tvv));
    for(i=0; i<SS_SIZE; i++)
    {
        if(shutter_speeds_table[i].prop_id >= tvv)
            return (char*)shutter_speeds_table[i].name;
    }
    return (void*)"?";
}

// compare PROPCASE_AV with aperture_sizes_table
char* shooting_get_av_str()
{
    short int avv;
    long i;
    get_property_case(PROPCASE_AV, &avv, sizeof(avv));
    for(i=0; i<AS_SIZE; i++)
    {
        if(aperture_sizes_table[i].prop_id == avv)
            return (char*)aperture_sizes_table[i].name;
    }
    return (char*) "?";
}

#endif

//-------------------------------------------------------------------
// Overrides for camera settings

void shooting_set_user_tv_by_id(int v)
{
#if CAM_HAS_USER_TV_MODES
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        long i;
        for (i=0;i<SS_SIZE;i++)
        {
            if (shutter_speeds_table[i].id == v)
            {
                short vv = shutter_speeds_table[i].prop_id;
                set_property_case(PROPCASE_USER_TV, &vv, sizeof(vv));
                //set_property_case(PROPCASE_TV, &vv, sizeof(vv));
                return;
            }
        }
    }
#endif
}

void shooting_set_user_tv96(short v)
{
#if CAM_HAS_USER_TV_MODES
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        long i;
        for (i=0;i<SS_SIZE;i++)
        {
            if (shutter_speeds_table[i].prop_id == v)
            {
                set_property_case(PROPCASE_USER_TV, &v, sizeof(v));
                //set_property_case(PROPCASE_TV, &v, sizeof(v));
                return;
            }
        }
    }
#endif
}

void shooting_set_tv96(short v, short is_now)
{
    long i;
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        for (i=0;i<SS_SIZE;i++)
        {
            if (shutter_speeds_table[i].prop_id == v)
            {
                shooting_set_tv96_direct(v, is_now);
                return;
            }
        }
    }
}

void shooting_set_user_tv_by_id_rel(int v)
{
#if CAM_HAS_USER_TV_MODES
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        int cv = shooting_get_user_tv_id();
        shooting_set_user_tv_by_id(cv+v);
    }
#endif
}

void shooting_set_shutter_speed(float t, short ev_correction, short is_now)
{
	if (t>0) shooting_set_tv96_direct( shooting_get_tv96_from_shutter_speed(t) + ev_correction, is_now);
}

// No longer used - 'set_shutter_speed' function disabled in uBasic
//void shooting_set_shutter_speed_ubasic(int t, short is_now)
//{
//    if ((mode_get()&MODE_MASK) != MODE_PLAY)
//    {
//        if (t>0)
//            shooting_set_tv96_direct(shooting_get_tv96_from_shutter_speed(((double)t)/100000), is_now);
//    }
//}

void shooting_set_av96(short v, short is_now)
{
#if CAM_HAS_IRIS_DIAPHRAGM
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        long i;
        for (i=0;i<AS_SIZE;i++)
        {
            if (aperture_sizes_table[i].prop_id == v)
            {
                shooting_set_av96_direct(v, is_now);
                return;
            }
        }
    }
#endif
}

void shooting_set_user_av96(short v)
{
#if CAM_HAS_IRIS_DIAPHRAGM
    long i;
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        for (i=0;i<AS_SIZE;i++)
        {
            if (aperture_sizes_table[i].prop_id == v)
            {
                set_property_case(PROPCASE_USER_AV, &v, sizeof(v));
                //set_property_case(PROPCASE_AV, &v, sizeof(v));
                return;
            }
        }
    }
#endif
}

void shooting_set_user_av_by_id(int v)
{
#if CAM_HAS_IRIS_DIAPHRAGM
    long i;
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        for (i=0;i<AS_SIZE;i++)
        {
            if (aperture_sizes_table[i].id == v)
            {
                short vv = aperture_sizes_table[i].prop_id;
                set_property_case(PROPCASE_USER_AV, &vv, sizeof(vv));
                //set_property_case(PROPCASE_AV, &vv, sizeof(vv));
                return;
            }
        }
    }
#endif
}

void shooting_set_tv96_direct(short v, short is_now)
{
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if(is_now)
        {
            set_property_case(PROPCASE_TV, &v, sizeof(v));
#ifdef PROPCASE_TV2
            set_property_case(PROPCASE_TV2, &v, sizeof(v));   // Save override to property that will update JPEG header & Canon OSD
#endif
        }
        else
            photo_param_put_off.tv96=v;
    }
}

void shooting_set_av96_direct(short v, short is_now)
{
#if CAM_HAS_IRIS_DIAPHRAGM
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if(is_now)
        {
            set_property_case(PROPCASE_AV, &v, sizeof(v));
#ifdef PROPCASE_AV2
            set_property_case(PROPCASE_AV2, &v, sizeof(v));   // Save override to property that will update JPEG header & Canon OSD
#endif
        }
        else
            photo_param_put_off.av96=v;
    }
#endif
}

void shooting_set_user_av_by_id_rel(int v)
{
#if CAM_HAS_IRIS_DIAPHRAGM
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        int cv = shooting_get_user_av_id();
        shooting_set_user_av_by_id(cv+v);
    }
#endif
}

#if CAM_QUALITY_OVERRIDE
void shooting_set_image_quality(int imq)
{
    if (imq != 3)
    {
        set_property_case(PROPCASE_QUALITY, &imq, sizeof(imq));
    }
}
#endif

void shooting_set_zoom(int v)
{
    int dist;
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        dist = shooting_get_subject_distance();
        lens_set_zoom_point(v);
#if defined(CAM_NEED_SET_ZOOM_DELAY)
        msleep(CAM_NEED_SET_ZOOM_DELAY);
#endif
        shooting_set_focus(dist, SET_NOW);
    }
}

void shooting_set_zoom_rel(int v)
{
    int cv = shooting_get_zoom();
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        shooting_set_zoom(cv+v);
    }
}

void shooting_set_zoom_speed(int v) {
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        lens_set_zoom_speed(v);
    }
}

void shooting_set_focus(int v, short is_now)
{
    int s=v;
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if ((is_now) && shooting_can_focus())
        {
            if (conf.dof_subj_dist_as_near_limit)
            {
                s=shooting_get_near_limit_f(v,shooting_get_min_real_aperture(),get_focal_length(lens_get_zoom_point()));
            }
            if (!conf.dof_use_exif_subj_dist && (s != INFINITY_DIST)) 
                s+=shooting_get_lens_to_focal_plane_width();
            lens_set_focus_pos(s); 
        }
        else
            photo_param_put_off.subj_dist=v;
    }
}

void shooting_video_bitrate_change(int v)
{
#if CAM_CHDK_HAS_EXT_VIDEO_MENU
    int m[]={1,2,3,4,5,6,7,8,10,12};  // m[v]/4 = bitrate*1x
    if (v>=(sizeof(m)/sizeof(m[0])))
        v=(sizeof(m)/sizeof(m[0]))-1;
    change_video_tables(m[v],4);
#endif
}

//-------------------------------------------------------------------

#if CAM_REAR_CURTAIN
void shooting_set_flash_sync_curtain(int curtain)
{
    set_property_case(PROPCASE_FLASH_SYNC_CURTAIN, &curtain, sizeof(curtain));
}
#endif

void shooting_set_nd_filter_state(short v, short is_now)
{
#if CAM_HAS_ND_FILTER
    if ((mode_get()&MODE_MASK) != MODE_PLAY)
    {
        if (is_now)
        {
            if (v==1)
                PutInNdFilter();
            else if (v==2)
                PutOutNdFilter();
#if defined(CAM_HAS_NATIVE_ND_FILTER) && defined(PROPCASE_ND_FILTER_STATE)
            int n = (v==1) ? 1 : 0;
            set_property_case(PROPCASE_ND_FILTER_STATE, &n, sizeof(n));
#endif
        }
        else
            photo_param_put_off.nd_filter=v;
    }
#endif
}

void unlock_optical_zoom(void)
{
#if CAM_CAN_UNLOCK_OPTICAL_ZOOM_IN_VIDEO
    extern void UnsetZoomForMovie();
    if (conf.unlock_optical_zoom_for_video)
        UnsetZoomForMovie();
#endif

#if CAM_EV_IN_VIDEO
    set_ev_video_avail(0);
#endif
}

int shooting_set_mode_canon(int canonmode)
{
    if (canonmode == -1 || !rec_mode_active())
        return 0;
    SetCurrentCaptureModeType(canonmode);
    return 1;
}

int shooting_set_mode_chdk(int mode)
{
    return shooting_set_mode_canon(shooting_mode_chdk2canon(mode));
}

//-------------------------------------------------------------------
// Bracketing functions

EXPO_BRACKETING_VALUES bracketing;

// Adjustment multipliers for bracketing types
static int bracket_steps[4][2] = {
    {  1, -1 },     // +/- option - shoot at 0, +1, -1
    { -1, -1 },     // -   option - shoot at 0, -1, -2
    {  1,  1 },     // +   option - shoot at 0, +1, +2
    { -1,  1 },     // -/+ option - shoot at 0, -1, +1
};
static int bracket_delta[4][2] = {
    {  1,  0 },     // +/- option - shoot at 0, +1, -1
    {  1,  1 },     // -   option - shoot at 0, -1, -2
    {  1,  1 },     // +   option - shoot at 0, +1, +2
    {  1,  0 },     // -/+ option - shoot at 0, -1, +1
};

static void shooting_tv_bracketing(int when)
{
    // first shot? (actually this is called just after the first shot has been taken)
    if (bracketing.shoot_counter == 0)
    {
        int m = mode_get()&MODE_SHOOTING_MASK;
        // if Tv override is enabled... (this was adapted from function shooting_expo_param_override() )
        if (is_tv_override_enabled)
        {
            // ...use Tv override value as seed for bracketing:
            bracketing.tv96 = shooting_get_tv96_override_value();
        }
        // Tv override is disabled, use camera's opinion of Tv for bracketing seed value.
        else 
        {
            if (!(m==MODE_M || m==MODE_TV || m==MODE_LONG_SHUTTER)) bracketing.tv96=shooting_get_tv96();
            else bracketing.tv96=shooting_get_user_tv96();
        }
        bracketing.tv96_step = 32*conf.tv_bracket_value;
    }

    // Adjust delta TV value for shot based on shot number
    bracketing.dtv96 += (bracketing.tv96_step * bracket_delta[conf.bracket_type][bracketing.shoot_counter&1]);
    // Calculate new TV (note, need to subtract delta because higher values are shorter shutter speeds / darker images)
    short value = bracketing.tv96 - (bracketing.dtv96 * bracket_steps[conf.bracket_type][bracketing.shoot_counter&1]);

    // Inc for next shot
    bracketing.shoot_counter++;

    // Apply value for next shot to be taken
    shooting_set_tv96_direct(value, when);
}

static void shooting_av_bracketing(int when)
{
    // first shot? (actually this is called just after the first shot has been taken)
    if (bracketing.shoot_counter == 0)
    {
        int m = mode_get()&MODE_SHOOTING_MASK;
        if (!(m==MODE_M || m==MODE_AV))
            bracketing.av96 = shooting_get_av96();
        else
            bracketing.av96 = shooting_get_user_av96();
        bracketing.av96_step = 32*conf.av_bracket_value;
    }

    // Adjust delta AV value for shot based on shot number
    bracketing.dav96 += (bracketing.av96_step * bracket_delta[conf.bracket_type][bracketing.shoot_counter&1]);
    // Calculate new AV (note, need to subtract delta because higher values are smaller apertures / darker images)
    short value = bracketing.av96 - (bracketing.dav96 * bracket_steps[conf.bracket_type][bracketing.shoot_counter&1]);

    // Inc for next shot
    bracketing.shoot_counter++;

    // Apply value for next shot to be taken
    if (value != bracketing.av96)
    {
        shooting_set_av96_direct(value, when);
#ifdef CAM_AV_OVERRIDE_IRIS_FIX
        extern int MoveIrisWithAv(short*);
        MoveIrisWithAv(&value);
#endif
    }
}

static void shooting_iso_bracketing(int when)
{
    // first shot? (actually this is called just after the first shot has been taken)
    if (bracketing.shoot_counter == 0)
    {
        bracketing.iso = shooting_get_iso_real();
        bracketing.iso_step = shooting_iso_market_to_real(conf.iso_bracket_value);
    }

    // Adjust delta ISO value for shot based on shot number
    bracketing.diso += (bracketing.iso_step * bracket_delta[conf.bracket_type][bracketing.shoot_counter&1]);
    // Calculate new ISO (higher ISO = brighter image)
    short value = bracketing.iso + (bracketing.diso * bracket_steps[conf.bracket_type][bracketing.shoot_counter&1]);
    if (value <= 0) value = 50;

    // Inc for next shot
    bracketing.shoot_counter++;

    // Apply value for next shot to be taken
    shooting_set_iso_real(value, when);
}

static void shooting_subject_distance_bracketing(int when)
{
    // first shot? (actually this is called just after the first shot has been taken)
    if (bracketing.shoot_counter == 0)
    {
        bracketing.subj_dist = shooting_get_subject_distance();
        bracketing.subj_dist_step = conf.subj_dist_bracket_value;
    }

    // Adjust delta SD value for shot based on shot number
    bracketing.dsubj_dist += (bracketing.subj_dist_step * bracket_delta[conf.bracket_type][bracketing.shoot_counter&1]);
    // Calculate new SD
    int value = bracketing.subj_dist + (bracketing.dsubj_dist * bracket_steps[conf.bracket_type][bracketing.shoot_counter&1]);
    if (value < MIN_DIST) value = MIN_DIST;
    else if (value > MAX_DIST) value = MAX_DIST;

    // Inc for next shot
    bracketing.shoot_counter++;

    // Apply value for next shot to be taken
    shooting_set_focus(value, when);
}

void bracketing_reset()
{
    memset(&bracketing,0,sizeof(bracketing));
    memset(&photo_param_put_off,0,sizeof(photo_param_put_off));
    photo_param_put_off.tv96=PHOTO_PARAM_TV_NONE;
}

void bracketing_step(int when)
{
    if (is_tv_bracketing_enabled)       shooting_tv_bracketing(when);
    else if (is_av_bracketing_enabled)  shooting_av_bracketing(when);
    else if (is_iso_bracketing_enabled) shooting_iso_bracketing(when);
    else if (is_sd_bracketing_enabled)  shooting_subject_distance_bracketing(when);   	      
}

void shooting_bracketing(void)
{  
    if (shooting_get_drive_mode()!=0)  
    {
        int m=mode_get()&MODE_SHOOTING_MASK;
        if (m!=MODE_STITCH && m!=MODE_SCN_BEST_IMAGE) 
        {
            if (camera_info.state.state_shooting_progress != SHOOTING_PROGRESS_PROCESSING)
                bracketing_reset() ;
            bracketing_step(SET_NOW) ;
        }
    }

}

//-------------------------------------------------------------------
// Other state test functions. 
// Not strictly shooting related; but somehow ended up here.

// TODO sd990 hack for overrides
// caller must save regs
int captseq_hack_override_active()
{
    if (camera_info.state.state_kbd_script_run)
        if ( photo_param_put_off.tv96 != PHOTO_PARAM_TV_NONE || photo_param_put_off.sv96 )
            return 1;
    if(conf.override_disable==1)
        return 0;
    if(is_iso_override_enabled)
        return 1;
    if(is_tv_override_enabled)
        return 1;
    return 0;
}

// Return whether video is being recorded
int is_video_recording()
{
#if defined(CAM_HAS_MOVIE_DIGEST_MODE)
    // If camera has movie digest mode then movie_status values are different than previous models
    // 'movie_status' values
    //      0 - after startup
    //      1 - movie recording stopped
    //      4 - movie recording in progress, or in 'movie digest' scene mode
    //      5 - movie recording stopping
    //      6 - in video mode, not recording
    return ((movie_status == VIDEO_RECORD_IN_PROGRESS) && ((mode_get() & MODE_SHOOTING_MASK) != MODE_VIDEO_MOVIE_DIGEST));
#else
    // 'movie_status' values
    //      0 - after startup
    //      1 - movie recording stopped
    //      4 - movie recording in progress
    //      5 - movie recording stopping
    return (movie_status > 1);
#endif
}

// Converted from MODE_IS_VIDEO macro (philmoz July 2011)
int mode_is_video(int m)
{
    m = m & MODE_SHOOTING_MASK;
    return (m==MODE_VIDEO_STD ||
            m==MODE_VIDEO_SPEED ||
            m==MODE_VIDEO_COMPACT ||
            m==MODE_VIDEO_MY_COLORS ||
            m==MODE_VIDEO_COLOR_ACCENT ||
            m==MODE_VIDEO_COLOR_SWAP ||
            m==MODE_VIDEO_MINIATURE ||
            m==MODE_VIDEO_TIME_LAPSE ||
            m==MODE_VIDEO_PORTRAIT ||
            m==MODE_VIDEO_NIGHT ||
            m==MODE_VIDEO_INDOOR ||
            m==MODE_VIDEO_FOLIAGE ||
            m==MODE_VIDEO_SNOW  ||
            m==MODE_VIDEO_BEACH ||
            m==MODE_VIDEO_AQUARIUM ||
            m==MODE_VIDEO_SUPER_MACRO ||
            m==MODE_VIDEO_STITCH ||
            m==MODE_VIDEO_MANUAL ||
            m==MODE_VIDEO_IFRAME_MOVIE
        // not clear if this should be considered a video mode ?
        //  m==MODE_VIDEO_MOVIE_DIGEST
        );
}

// override in platform/<cam>/main.c if playrec_mode is not found or different
int __attribute__((weak)) rec_mode_active(void)
{
    return (playrec_mode==2 || playrec_mode==4 || playrec_mode==5);
}

int mode_get(void)
{
    int mode, t=0xFF;

    mode = (rec_mode_active())?MODE_REC:MODE_PLAY;

#ifdef CAM_SWIVEL_SCREEN
    extern int screen_opened(void);     // 0 not open, non-zero open
    extern int screen_rotated(void);    // 0 not rotated, non-zero rotated

    mode |= (screen_opened())?MODE_SCREEN_OPENED:0;
    mode |= (screen_rotated())?MODE_SCREEN_ROTATED:0;
#endif

    get_property_case(PROPCASE_SHOOTING_MODE, &t, 4);
    mode |= shooting_mode_canon2chdk(t);

    return (mode);
}

//-------------------------------------------------------------------
// Exposure control in video

#if CAM_EV_IN_VIDEO

int ev_video_avail;
int ev_video;
int save_tv_video;
int tv_min_video;

int get_ev_video_avail(void)
{
    return ev_video_avail;
}

int get_ev_video(void)
{
    return ev_video;
}

void set_ev_video_avail(int x)
{
    extern void ExpCtrlTool_StartContiAE(int, int);
    extern void ExpCtrlTool_StopContiAE(int, int);

    if (ev_video_avail==x) return;
    ev_video_avail=x;
    if (x)
    {
        ev_video=0;
        ExpCtrlTool_StopContiAE(0,0);
        get_property_case(PROPCASE_TV,&save_tv_video,2);
        if ((mode_get()&MODE_SHOOTING_MASK)==MODE_VIDEO_SPEED)
            tv_min_video=577;   // 1/60
        else
            tv_min_video=480;   //1/30
    }
    else
        ExpCtrlTool_StartContiAE(0,0);
}

void set_ev_video(int x)
{
    short ev, tv;
    if ((x<-4)||(x>4))
        return;

    ev=48*x;
    tv=save_tv_video-ev;
    if (tv>=tv_min_video)
    {
        ev_video=x;
        extern short SetAE_ShutterSpeed(short* tv);
        SetAE_ShutterSpeed(&tv);
    }
}

#endif

//-------------------------------------------------------------------
// Main exposure override function called from capt_seq_task()

static void shooting_set_flash_override()
{
    int mode, flash, power;
    flash = 1;

    // Set flash mode & override
    if ((conf.flash_video_override && is_video_recording()) || (!conf.flash_video_override))
    {
        if (conf.flash_manual_override)
        {
            mode = 1;   // Manual flash
            power = conf.flash_video_override_power;
            set_property_case(PROPCASE_FLASH_ADJUST_MODE, &mode, sizeof(mode));
            set_property_case(PROPCASE_FLASH_FIRE, &flash, sizeof(flash));
            set_property_case(PROPCASE_FLASH_MANUAL_OUTPUT, &power, sizeof(power));
        }
        else if (conf.flash_enable_exp_comp)
        {
            mode = 0;   // Auto flash
            power = (conf.flash_exp_comp - 9) * 32;
            set_property_case(PROPCASE_FLASH_ADJUST_MODE, &mode, sizeof(mode));
            set_property_case(PROPCASE_FLASH_FIRE, &flash, sizeof(flash));
#if defined(PROPCASE_FLASH_EXP_COMP)
            set_property_case(PROPCASE_FLASH_EXP_COMP, &power, sizeof(power));
#endif
#if defined(PROPCASE_EXT_FLASH_EXP_COMP)
            set_property_case(PROPCASE_EXT_FLASH_EXP_COMP, &power, sizeof(power));
#endif
        }
    }
}

void shooting_expo_param_override_thumb(void)
{
    if (((camera_info.state.state_kbd_script_run) || (usb_remote_active)) && (photo_param_put_off.tv96 != PHOTO_PARAM_TV_NONE))
    {
        shooting_set_tv96_direct(photo_param_put_off.tv96, SET_NOW);
        photo_param_put_off.tv96=PHOTO_PARAM_TV_NONE;
    }
    else if (is_tv_override_enabled)
    {
        shooting_set_tv96_direct(shooting_get_tv96_override_value(),SET_NOW);
    }

    if (((camera_info.state.state_kbd_script_run) || (usb_remote_active)) && (photo_param_put_off.sv96))
    {
        shooting_set_sv96(photo_param_put_off.sv96, SET_NOW);
        photo_param_put_off.sv96=0;
    }
    else if (is_iso_override_enabled)
        shooting_set_iso_real(shooting_get_iso_override_value(), SET_NOW);
    else if (conf.autoiso_enable && shooting_get_flash_mode()/*NOT FOR FLASH AUTO MODE*/ && autoiso_and_bracketing_overrides_are_enabled)
        shooting_set_autoiso(shooting_get_iso_mode());

    if (((camera_info.state.state_kbd_script_run) || (usb_remote_active)) && (photo_param_put_off.av96))
    {
        shooting_set_av96_direct(photo_param_put_off.av96, SET_NOW);
        photo_param_put_off.av96=0;
    }
    else if (is_av_override_enabled)
        shooting_set_av96_direct(shooting_get_av96_override_value(), SET_NOW);

    if (((camera_info.state.state_kbd_script_run) || (usb_remote_active)) && (photo_param_put_off.subj_dist))
    {
        shooting_set_focus(photo_param_put_off.subj_dist, SET_NOW);
        photo_param_put_off.subj_dist=0;
    }
    else if (is_sd_override_enabled)
        shooting_set_focus(shooting_get_subject_distance_override_value(), SET_NOW);

#if CAM_HAS_ND_FILTER
    if ((camera_info.state.state_kbd_script_run) && (photo_param_put_off.nd_filter))
    {
        shooting_set_nd_filter_state(photo_param_put_off.nd_filter, SET_NOW);
        photo_param_put_off.nd_filter=0;
    }
    else if (conf.nd_filter_state && !(conf.override_disable==1))
        shooting_set_nd_filter_state(conf.nd_filter_state, SET_NOW);
#endif

#if CAM_REAR_CURTAIN
    shooting_set_flash_sync_curtain(conf.flash_sync_curtain);
#endif

    // Set flash mode & override
    shooting_set_flash_override();

#if CAM_QUALITY_OVERRIDE
    // this doesn't really need to be set in the override hook.
    // should only need to be set once if the users doesn't change back, but doing it here ensures it is set
    shooting_set_image_quality(conf.fast_image_quality);
#endif
}

// Override ISO settings only
// need to do this before exposure calc for ISO, as well as after on some cameras
void shooting_expo_iso_override_thumb(void)
{
    if ((camera_info.state.state_kbd_script_run) && (photo_param_put_off.sv96))
    {
        shooting_set_sv96(photo_param_put_off.sv96, SET_NOW);
        // photo_param_put_off.sv96 is not reset here, it will be reset in next call to shooting_expo_param_override
    }
    else if (is_iso_override_enabled)
        shooting_set_iso_real(shooting_get_iso_override_value(), SET_NOW);
    else if (conf.autoiso_enable && shooting_get_flash_mode()/*NOT FOR FLASH AUTO MODE*/ && autoiso_and_bracketing_overrides_are_enabled)
        shooting_set_autoiso(shooting_get_iso_mode());

#if defined(CAM_HAS_ND_FILTER) && defined(CAM_HAS_NATIVE_ND_FILTER)
    if ((camera_info.state.state_kbd_script_run) && (photo_param_put_off.nd_filter))
    {
        shooting_set_nd_filter_state(photo_param_put_off.nd_filter, SET_NOW);
        //photo_param_put_off.nd_filter=0;
    }
    else if (conf.nd_filter_state && !(conf.override_disable==1))
        shooting_set_nd_filter_state(conf.nd_filter_state, SET_NOW);
#endif

    // Set flash mode & override
    shooting_set_flash_override();
}

/*
switch camera between playback (0) and record(1)
uses switch_mode_usb if a usb connection is present
*/
void shooting_set_playrec_mode(int mode)
{
    if (get_usb_bit_physw()) 
    {
        switch_mode_usb(mode);
        return;
    }
    if(mode)
        levent_set_record();
    else
        levent_set_play();
}
