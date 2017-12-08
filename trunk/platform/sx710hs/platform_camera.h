// Camera - sx710hs - platform_camera.h

// This file contains the various settings values specific to the sx710hs camera.
// This file is referenced via the 'include/camera.h' file and should not be loaded directly.

// If adding a new settings value put a suitable default in 'include/camera.h',
// along with documentation on what the setting does and how to determine the correct value.
// If the setting should not have a default value then add it in 'include/camera.h'
// using the '#undef' directive along with appropriate documentation.

// Override any default values with your camera specific values in this file. Try and avoid
// having override values that are the same as the default value.

// When overriding a setting value there are two cases:
// 1. If removing the value, because it does not apply to your camera, use the '#undef' directive.
// 2. If changing the value it is best to use an '#undef' directive to remove the default value
//    followed by a '#define' to set the new value.

// When porting CHDK to a new camera, check the documentation in 'include/camera.h'
// for information on each setting. If the default values are correct for your camera then
// don't override them again in here.

    #define CAM_PROPSET                         9 // TODO may not be a complete match

    // g7x RAW in hybrid auto actually works if you enable "unsafe IO", otherwise hangs
    #define CAM_DISABLE_RAW_IN_HYBRID_AUTO      1
    #define CAM_DISABLE_RAW_IN_HANDHELD_NIGHT_SCN   1 // probably doesn't make sense

    #define CAM_AV_OVERRIDE_IRIS_FIX            1  // for cameras that require _MoveIrisWithAv function to override Av (for bracketing).

    #define CAM_HAS_ND_FILTER                   1  // Camera has a "hidden" built-in ND filter (in addition to iris)

    // TODO not checked
    #undef  CAM_KEY_PRESS_DELAY
    #define CAM_KEY_PRESS_DELAY                 60          // delay after a press

    #define CAM_ADJUSTABLE_ALT_BUTTON           1

    #define CAM_ALT_BUTTON_NAMES                { "Playback", "Video", "Wifi" }
    #define CAM_ALT_BUTTON_OPTIONS              { KEY_PLAYBACK, KEY_VIDEO, KEY_WIFI}
    #define CAM_DRIVE_MODE_FROM_TIMER_MODE      1

    // default zebra shortcut (left) conflicts with canon AF lock
    #define SHORTCUT_TOGGLE_ZEBRA               KEY_MENU

    #define CAM_DRYOS                           1
    #define CAM_DRYOS_2_3_R39                   1
    #define CAM_DRYOS_2_3_R47                   1

    #define CAM_HAS_CMOS                        1

    // unlocked by default, not needed
    #undef  CAM_CAN_UNLOCK_OPTICAL_ZOOM_IN_VIDEO
    #define CAM_HAS_VIDEO_BUTTON                1

// has disp
//    #undef  CAM_HAS_DISP_BUTTON
// no dedicated erase
    #undef  CAM_HAS_ERASE_BUTTON
    #undef  CAM_USE_ZOOM_FOR_MF

// not implemented
    #undef  CAM_CHDK_HAS_EXT_VIDEO_MENU
    #undef  CAM_VIDEO_CONTROL

// minimal recording or not only
    #define CAM_SIMPLE_MOVIE_STATUS             1

    #define  CAM_IS_VID_REC_WORKS               1 // Define if the 'is_video_recording()' function works

    #define CAM_HAS_JOGDIAL                     1
    #undef  CAM_USE_ZOOM_FOR_MF

    #undef  CAM_UNCACHED_BIT
    #define CAM_UNCACHED_BIT                    0x40000000

// default
//    #define CAM_CIRCLE_OF_CONFUSION             5  // CoC value for camera/sensor (see http://www.dofmaster.com/digital_coc.html)

// SX710 OK
    #define CAM_DNG_LENS_INFO                   { 45,10,7500,10,32,10,69,10 }
// OK
    #define cam_CFAPattern                      0x02010100

// TODO DNG c&p from G7x
    #define cam_CalibrationIlluminant1          17

// TODO DNG c&p from G7x
    #define CAM_COLORMATRIX1 \
    11125, 10000, -5937, 10000,  355, 10000, \
    -2979, 10000, 10926, 10000, 2360, 10000, \
     -116, 10000,   835, 10000, 6064, 10000

/*
    #define cam_CalibrationIlluminant2          21      // D65

    #define CAM_COLORMATRIX2 \
     9602, 10000, -3823, 10000, -937, 10000, \
    -2984, 10000, 11495, 10000, 1675, 10000, \
     -407, 10000,  1415, 10000, 5049, 10000,

    #define CAM_FORWARDMATRIX1 \
     4264, 10000, 4193, 10000, 1187, 10000, \
     1832, 10000, 7811, 10000,  357, 10000, \
      854, 10000,   16, 10000, 7381, 10000

    #define CAM_FORWARDMATRIX2 \
	 4036, 10000, 4056, 10000, 1551, 10000, \
     1780, 10000, 7757, 10000,  463, 10000, \
      764, 10000,    1, 10000, 7487, 10000
*/

    #define CAM_RAW_ROWPIX                      5344
    #define CAM_RAW_ROWS                        3950

// SX710 OK
    #define CAM_JPEG_WIDTH                      5184
    #define CAM_JPEG_HEIGHT                     3456

// TODO
    #define CAM_ACTIVE_AREA_X1                  96 // normal level at 120
    #define CAM_ACTIVE_AREA_Y1                  18 // visible pixels start at 17, 18 to keep even, normal level at 22
    #define CAM_ACTIVE_AREA_X2                  5344 // active area extends to right
    #define CAM_ACTIVE_AREA_Y2                  3950 // active area extends to bottom of image

// SX710 OK
    #define PARAM_CAMERA_NAME                   3

// found by calling GetImageFolder with single bits sets
    #define CAM_DATE_FOLDER_NAMING              0x80

    #define CAM_FILE_COUNTER_IS_VAR             1     // file counter is variable file_counter_var in stubs, not a param

    #undef  CAM_SENSOR_BITS_PER_PIXEL
    #define CAM_SENSOR_BITS_PER_PIXEL           12

// TODO expdrv not implemented
//    #define CAM_EXT_TV_RANGE                    1

    // TODO actual range untested
    // #undef CAM_EXT_AV_RANGE
    // #define CAM_EXT_AV_RANGE                    ?   // Number of 1/3 stop increments to extend the Av range beyond the Canon default smallest aperture

    #define CAM_SHOW_OSD_IN_SHOOT_MENU          1

    #define DRAW_ON_ACTIVE_BITMAP_BUFFER_ONLY   1           // Draw pixels on active bitmap buffer only.
   
    // seems to be 640x480
    #undef  CAM_BITMAP_WIDTH
    #undef  CAM_BITMAP_HEIGHT
    #undef  CAM_SCREEN_WIDTH
    #undef  CAM_SCREEN_HEIGHT
    #define CAM_BITMAP_WIDTH                    640 // Actual width of bitmap screen in <s>bytes</s> pixels
    #define CAM_BITMAP_HEIGHT                   480 // Actual height of bitmap screen in rows
    #define CAM_SCREEN_WIDTH                    640 // Width of bitmap screen in CHDK co-ordinates (360 or 480)
    #define CAM_SCREEN_HEIGHT                   480 // Height of bitmap screen in CHDK co-ordinates (always 240 on all cameras so far)
// TODO
//    #define CAM_SUPPORT_BITMAP_RES_CHANGE       1
    

// TODO
    #undef  EDGE_HMARGIN
    #define EDGE_HMARGIN                        10

// TODO filewrite not implemented
    // doesn't appear to use complicated multi pass or seek in normal cases
//    #define CAM_HAS_FILEWRITETASK_HOOK          1
    //#define CAM_FILEWRITETASK_SEEKS             1

    #undef  CAM_BITMAP_PALETTE
    #define CAM_BITMAP_PALETTE                  100

    #define CAM_ZEBRA_NOBUF                     1

// TODO
/*
    #undef  CAMERA_MIN_DIST
    #define CAMERA_MIN_DIST                     50         // Override min subject distance, min get_focus() value using MF
    #undef  CAMERA_MAX_DIST
    #define CAMERA_MAX_DIST                     177552     // Override max subject distance, max get_focus() value at max zoom using MF before it goes to -1
*/

    //#define CAM_CHDK_HAS_EXT_VIDEO_TIME         1

// SX710 OK
    #undef  CAM_USB_EVENTID
    #define CAM_USB_EVENTID                     0x202       // Levent ID for USB control. Changed in DryOS R49, R50 so needs to be overridable.

//    #define CAM_HAS_MOVIE_DIGEST_MODE           1 

// TODO - haven't checked default values
    #define CAM_USE_ALT_SET_ZOOM_POINT          1           // Define to use the alternate code in lens_set_zoom_point()
    #define CAM_USE_ALT_PT_MoveOpticalZoomAt    1           // Define to use the PT_MoveOpticalZoomAt() function in lens_set_zoom_point()
    #define CAM_NEED_SET_ZOOM_DELAY             300

    #define MKDIR_RETURN_ONE_ON_SUCCESS         1    // mkdir() return 1 on success, 0 on fail.

    #undef  REMOTE_SYNC_STATUS_LED
    // #define REMOTE_SYNC_STATUS_LED              0xC022C30C  // TODO specifies an LED that turns on while camera waits for USB remote to sync
 
// camera crashes if sd override used in AF
//    #define CAM_SD_OVER_IN_AF                   1
    #define CAM_SD_OVER_IN_AFL                  1
    #define CAM_SD_OVER_IN_MF                   1
 
// AF led, for MD test code
    #undef CAM_AF_LED
    #define CAM_AF_LED                      1

//--------------------------------------------------
