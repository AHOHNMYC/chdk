#include "stubs_asm.h"

DEF(opacity_buffer                  ,0xfc108c18)    // OK Found after BmpDDev.c string

DEF(dial_positions                  ,0x000e9880)    // OK keyboard code @fc0a3ee4 after call to get_dial_hw_position

// Does not behave like other cameras - set to 4 when reviewing. Value calculated in kbd.c to simulate expected behaviour.
DEF(_recreview_hold                 ,0x000095F0)    // OK found @FC38F854 search for "ShootCon_NotifyComplete"

DEF(simple_movie_status             ,0x0000c180)    // 0x0000c088 + 0x80 + 0x78 found @fc0b3eb0 sub_fc0b3e80 via task_MovieRecord. 1 when recording or busy after, 0 otherwise

DEF(playback_image_number           ,0x002a3ea8)    // Image number of current image shown in play mode

// TODO:

FAKEDEF(video_compression_rate, 1)
FAKEDEF(canon_shoot_menu_active, 1) // ??? not found
