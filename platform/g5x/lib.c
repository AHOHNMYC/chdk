
#include "platform.h"
#include "lolevel.h"
#include "live_view.h"
#include "levent.h"

// Dummy variable - actual zoom_status not found
int zoom_status;

extern int active_bitmap_buffer;
extern char* bitmap_buffer[];

void vid_bitmap_refresh()
{
    extern void _transfer_src_overlay(int);
    int n = active_bitmap_buffer;
    _transfer_src_overlay(n);
    _transfer_src_overlay(n^1);
}

void *vid_get_bitmap_fb()
{
    // For live view send YUV instead of RGBA
    return bitmap_buffer[0];
}

void *vid_get_bitmap_active_buffer()
{
    // For live view send YUV instead of RGBA
    return bitmap_buffer[active_bitmap_buffer];
}

// the opacity buffer defines opacity for the bitmap overlay's pixels
extern void *opacity_buffer[];

void *vid_get_opacity_active_buffer()
{
    return opacity_buffer[active_bitmap_buffer];
}

char *camera_jpeg_count_str()
{
    extern char jpeg_count_str[];
    return jpeg_count_str;
}

void shutdown()
{
    debug_led(1);
    PostLogicalEventForNotPowerType(levent_id_for_name("PressPowerButton"),0);
    while(1) msleep(100);
}

void _Restart(__attribute__ ((unused))unsigned option)
{
    // Firmware _Restart() function does not work; but forcing camera to 'boot' our PS.FI2 seems to work, although it takes around 10 seconds to restart.
    _reboot_fw_update("A/PS.FI2");
}

#define LED_PR 0xd20b0994 // green LED on the back

void debug_led(int state) {
    volatile long *p = (void*) LED_PR;
    *p = ((state) ? 0x4d0002 : 0x4c0003);
}

// Power Led = first entry in table (led 0)
// AF Assist Lamp = second entry in table (led 1)
void camera_set_led(int led, int state, __attribute__ ((unused))int bright) {
    static char led_table[2] = { 0, 4 };
    _LEDDrive(led_table[led % sizeof(led_table)], state <= 1 ? !state : state);
}

//TODO:
void shutdown_soft()
{
    _PostLogicalEventForNotPowerType(0x1005, 0);
}

//TODO:
int get_flash_params_count(void)
{
    return 241;
}

//TODO:
void JogDial_CW(void)
{
    _PostLogicalEventToUI(0x872, 1);    //RotateJogDialRight
}

//TODO:
void JogDial_CCW(void)
{
    _PostLogicalEventToUI(0x873, 1);    //RotateJogDialLeft
}

// updated by using function in capt_seq, valid between shot start and raw hook end
extern  char*   current_raw_addr;

char *hook_raw_image_addr()
{
    /*
     43dbfca0   - RAW & RAW + JPEG
     43e4a000   - JPEG only
     */
    return current_raw_addr;
}

// TODO:
//char *hook_alt_raw_image_addr()
//{
//}

extern void* _GetActiveViewportBuffer();

void *vid_get_viewport_fb_d()
{
    return _GetActiveViewportBuffer();
}

void *vid_get_viewport_fb()
{
    return _GetActiveViewportBuffer();
}

void *vid_get_viewport_live_fb()
{
    return _GetActiveViewportBuffer();
}

extern int displaytype;
#define evf_out     (displaytype == 11)
#define hdmi_out    ((displaytype == 6) || (displaytype == 7))

int vid_get_viewport_width()
{
    if (camera_info.state.mode_play)
    {
        if (hdmi_out) return 1920;
        if (evf_out) return 1024;
        return 720;
    }
    extern int _GetVRAMHPixelsSize();
    return _GetVRAMHPixelsSize();
}

long vid_get_viewport_height()
{
    if (camera_info.state.mode_play)
    {
        if (hdmi_out) return 1080;
        if (evf_out) return 768;
        return 480;
    }
    extern int _GetVRAMVPixelsSize();
    return _GetVRAMVPixelsSize();
}

int vid_get_viewport_byte_width()
{
    return vid_get_viewport_buffer_width_proper()*2;
}

int vid_get_viewport_display_xoffset()
{
    // viewport width offset table for each image size
    // 0 = 4:3, 1 = 16:9, 2 = 3:2, 3 = 1:1
    static long vp_xo[5] = { 40, 0, 0, 120};    // should all be even values for edge overlay
    static long vp_xo_hdmi[5] = { 240, 0, 150, 420};   // should all be even values for edge overlay

    if (camera_info.state.mode_play)
    {
        return 0;
    }
    else if (camera_info.state.mode_video)
    {
        if (shooting_get_prop(PROPCASE_VIDEO_RESOLUTION) == 2)  // VGA
            return 40;
        return 0;
    }
    else
    {
        if (hdmi_out)
            return vp_xo_hdmi[shooting_get_prop(PROPCASE_ASPECT_RATIO)];
        return vp_xo[shooting_get_prop(PROPCASE_ASPECT_RATIO)];
    }
}

int vid_get_viewport_display_yoffset()
{
    // viewport height offset table for each image size
    // 0 = 4:3, 1 = 16:9, 2 = 3:2, 3 = 1:1
    static long vp_yo[5] = { 0, 38, 0, 0 };

    if (camera_info.state.mode_play)
    {
        return 0;
    }
    else if (camera_info.state.mode_video)
    {
        if (shooting_get_prop(PROPCASE_VIDEO_RESOLUTION) == 2) // VGA
            return 0;
        return 38;
    }
    else
    {
        if (hdmi_out)
            return 0;
        return vp_yo[shooting_get_prop(PROPCASE_ASPECT_RATIO)];
    }
}

// Functions for PTP Live View system
int vid_get_viewport_display_xoffset_proper()   { return vid_get_viewport_display_xoffset(); }
int vid_get_viewport_display_yoffset_proper()   { return vid_get_viewport_display_yoffset(); }
int vid_get_viewport_fullscreen_width()
{
    if (hdmi_out) return 1920;
    if (evf_out) return 1024;
    return 720;
}
int vid_get_viewport_fullscreen_height()
{
    if (hdmi_out) return 1080;
    if (evf_out) return 768;
    return 480;
}
int vid_get_viewport_buffer_width_proper()
{
    if (hdmi_out) return 1920;
    if (evf_out) return 1024;
    return 736;
}
int vid_get_viewport_type()                     { return LV_FB_YUV8B; }
int vid_get_aspect_ratio()
{
    if (hdmi_out) return LV_ASPECT_16_9;
    if (evf_out) return LV_ASPECT_4_3;
    return LV_ASPECT_3_2;
}

// Ximr layer
typedef struct {
    unsigned char   unk1[7];
    unsigned char   scale;
    unsigned int    unk2;
    unsigned short  color_type;
    unsigned short  visibility;
    unsigned short  unk3;
    unsigned short  src_y;
    unsigned short  src_x;
    unsigned short  src_h;
    unsigned short  src_w;
    unsigned short  dst_y;
    unsigned short  dst_x;
    unsigned short  enabled;
    unsigned int    marv_sig;
    unsigned int    bitmap;
    unsigned int    opacity;
    unsigned int    color;
    unsigned int    width;
    unsigned int    height;
    unsigned int    unk4;
} ximr_layer;

// Ximr context
typedef struct {
    unsigned short  unk1;
    unsigned short  width1;
    unsigned short  height1;
    unsigned short  unk2[17];
    unsigned int    output_marv_sig;
    unsigned int    output_buf;
    unsigned int    output_opacitybuf;
    unsigned int    output_color;
    int             buffer_width;
    int             buffer_height;
    unsigned int    unk3[2];
    ximr_layer      layers[8];
    unsigned int    unk4[24];
    unsigned char   denomx;
    unsigned char   numerx;
    unsigned char   denomy;
    unsigned char   numery;
    unsigned int    unk5;
    short           width;
    short           height;
    unsigned int    unk6[27];
} ximr_context;

int display_needs_refresh = 0;

extern unsigned int fw_yuv_layer_buf;
#define FW_YUV_LAYER_SIZE   (960*270*2)

// Max size required
#define CB_W    480
#define CB_H    270

unsigned char* chdk_rgba = NULL;
int chdk_rgba_init = 0;
int bm_w = CB_W;
int bm_h = CB_H;

void vid_bitmap_erase()
{
    extern void _bzero(unsigned char *s, int n);
    _bzero(chdk_rgba, CB_W * bm_h * 4);
}

int last_displaytype;

/*
 * Called when Canon is updating UI, via dry_memcpy patch.
 * Sets flag for CHDK to update it's UI.
 * Also needed because bitmap buffer resolution changes when using the EVF or HDMI
 * LCD = 720 x 480
 * EVF = 1024 x 768
 * HDMI = 960 x 540
 * TODO: This does not reset the OSD positions of things on screen
 *       If user has customised OSD layout how should this be handled?
 */
void update_ui(ximr_context* ximr)
{
    // Init RGBA buffer
    if (chdk_rgba_init == 0)
    {
        chdk_rgba = (unsigned char*)(fw_yuv_layer_buf + FW_YUV_LAYER_SIZE);
        chdk_rgba_init = 1;
        vid_bitmap_erase();
        // Force update
        last_displaytype = -1;
    }

    // Make sure we are updating the correct layer - skip redundant updates for HDMI out
    if (ximr->output_buf != fw_yuv_layer_buf)
    {
        // Update screen dimensions
        if (last_displaytype != displaytype)
        {
            last_displaytype = displaytype;

            if (hdmi_out) {
                bm_w = 480;
                bm_h = 270;
            } else if (evf_out) {
                bm_w = 344;         // ????? display is clipped to 347 - used nearest multiple of 8
                bm_h = 270;
            } else {
                bm_w = 360;
                bm_h = 240;
            }

            camera_screen.width = bm_w;
            camera_screen.height = bm_h;
            camera_screen.buffer_width = CB_W;
            camera_screen.buffer_height = bm_h;

            // Reset OSD offset and width
            camera_screen.disp_right = camera_screen.width - 1;
            camera_screen.disp_width = camera_screen.width;

            // Update other values
            camera_screen.physical_width = camera_screen.width;
            camera_screen.size = camera_screen.width * camera_screen.height;
            camera_screen.buffer_size = camera_screen.buffer_width * camera_screen.buffer_height;

            // Values for chdkptp live view
            camera_screen.yuvbm_width = ximr->width;
            camera_screen.yuvbm_height = ximr->height;
            camera_screen.yuvbm_buffer_width = ximr->buffer_width;
            camera_screen.yuvbm_buffer_size = camera_screen.yuvbm_buffer_width * camera_screen.yuvbm_height;

            // Clear buffer if size changed
            extern void gui_set_need_redraw();
            gui_set_need_redraw();
            vid_bitmap_erase();

            // Tell CHDK UI that display needs update
            display_needs_refresh = 1;
        }

        if (ximr->layers[0].bitmap == fw_yuv_layer_buf) {
            // HDMI out sets width to 1024 - reset to 960 so our RGBA buffer is not overwritten
            ximr->layers[0].src_w = ximr->layers[0].width = 960;
            ximr->layers[0].src_h = ximr->layers[0].height = 270;
            ximr->layers[0].scale = 4;      // x2 scaling vertically for the canon yuv layer
        }

        if (chdk_rgba != 0)
        {
            // Copy canon layer
            memcpy(&ximr->layers[3], &ximr->layers[1], sizeof(ximr_layer));

            // Remove offset
            ximr->layers[3].scale = 6;      // x2 scaling in both directions
            ximr->layers[3].src_w = bm_w;
            ximr->layers[3].src_h = bm_h;
            ximr->layers[3].dst_x = 0;
            ximr->layers[3].dst_y = 0;

            // Set our buffer
            ximr->layers[3].bitmap = (unsigned int)chdk_rgba;
            ximr->layers[3].width = CB_W;
            ximr->layers[3].height = bm_h;

            // Fix for video recording - https://chdk.setepontos.com/index.php?topic=12788.msg146378#msg146378
            ximr->unk2[0] = 0x500;
        }
    }
    else
    {
        // HDMI out sets width to 1024 - reset to 960 so our RGBA buffer is not overwritten
        ximr->width = ximr->buffer_width = 960;
        ximr->height = ximr->buffer_height = 270;
        ximr->denomy = 0x6c;
    }
}
