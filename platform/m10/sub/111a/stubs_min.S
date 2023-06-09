#include "stubs_asm.h"

// Camera has 6(?) RAW buffers (@0xfc6361b0, obviously overlapping):
// 43CC8A00 45BE18E0 47AFA7C0 459AFF80 478C8E60 497E1D40
DEF(raw_buffers                                 ,0xfc6361b0) // Found @0xfc151cf4
DEF(active_raw_buffer                           ,0x0000B254) // 0xb248+0xc, 0xffffffff when uninited...

//DEF(error_table                               ,) // around ExxTbl.c

FAKEDEF(video_compression_rate, 1)

FAKEDEF(canon_shoot_menu_active, 1) // todo

FAKEDEF(zoom_status ,1)

DEF(recreview_hold                              ,0x000095a0) // 0x9550 + 0x50
FAKEDEF(zoom_busy ,1)
FAKEDEF(focus_busy ,1)

// FAKEDEF(active_viewport_buffer, 1) // ?
DEF(current_viewport_buffer                     ,0x00008810) // found @fc12a516, 0x8754 + 0x80 + 0x3c
// 42CF6A00 430EB200 434DFA00 438D4200, 720x480 in 736x480 buffer when using LCD, there's space for 1920x1080 uyvy
DEF(viewport_buffers                            ,0xfc6231f0) // ref to fc6231e0 + 8 + 8 @ fc1296c2

//FAKEDEF(enabled_refresh_physical_screen, 1)

DEF(disptype_changing                           ,0x8c54) // see FC35FE94 in 101d
DEF(current_fb_d                                ,0xF564) // @fc177872, 0xf53c + 0x28

DEF(simple_movie_status                         ,0xb000) // 0xaf10 + 0x80 + 0x70 @FC0FDA32

DEF(jog_position                                ,0xf6dc)
DEF(jog_hw_pos                                  ,0xd9855004) // see GetRotaryEncPulseCounter_FW

DEF(canon_gui_started_flag                      ,0xb918) // see GUISrv_StartGUISystem_FW
