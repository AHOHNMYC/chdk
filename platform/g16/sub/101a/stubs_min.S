// G16 1.01a
#include "stubs_asm.h"
  
DEF(active_raw_buffer             ,0x0000bd9c)           // 0x0000bd90 (@fc155240 + #0xc(@fc15525e)
DEF(raw_buffers                   ,0xfc5981bc)           // Found @fc1863f0, after 4th "DevelopAddress.c" assert (1st with ldr)
DEF(raw_buffers_jpeg              ,0xfc5b530c)           // near DevelopPipeline.c at 0xfc1929fa

DEF(current_fb_d                  ,0x0000fbe4+0x24)      // found @fc1b420e similiar to sx280 102b @0xfc186624 and g7x 100d 0xfc1ba452
DEF(current_viewport_buffer       ,0x8858+0x38)          // GetMovieJpegVRAMVPixelsSize_FW 0xfc1449d1
DEF(viewport_buffers              ,0xfc570fb8)           // multiple refs like @ 0xfc144232 - add 0x010 like sx280 & g7x

DEF(simple_movie_status           ,0x0000bae8+0x80+0x0c) // found @fc14ef7e sub_fc14ef64 via task_MovieRecord. 1 when recording or busy after, 0 otherwise
DEF(full_screen_refresh           ,0x00013bc4)           // Found @0xfc30a9a4
DEF(zoom_status                   ,0x0000f88c)           // after "TerminateDeliverToZoomController" 0xfc1af3dc = 0xf8ac - 0x20
DEF(dial_positions                ,0x0000fdd4)           // 0xfc06befe: matches g7x 

//******* values below need to be checked *************
DEF(recreview_hold                ,0x00008f18 )           // G16  - found @fc2fdc88 ( *"StartRecReviewTimer" )
                                                         //      - NOTE : this is just review mode - recreview_hold is true when (0x8f18 == 1) && (0x8f1C == 0) 

//******* values below not found yet *************
FAKEDEF(canon_shoot_menu_active   ,1)                    // not found for any DIGIC6 camera


