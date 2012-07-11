#include "platform.h"

/*
sensor size from code at sub_FFB7861C = (3744*2784)*(12/8) = 0xEE9200 = 15634944

@FFB78650 = 0xea0 = 3744	// raw sensor size
@FFB78658 = 0xae0 = 2784
@FFB78660 = 0xe40 = 3648	// cropped size ??
@FFB78668 = 0xab0 = 2736
*/

char *hook_raw_image_addr()
{
	// Appears to be two raw buffers (this returns active buffer)
	// Addresses below found in table at FFBBAD50, ref at FF8843F4
	// used in _sub_FF8841BC__SsImgProcBuf.c__0 
	// checks [0x2E88 + 0xc] --> defines which buffer is active

	if (*((int*)0x2E94) != 0)
		return (char*) 0x46000000;
	else
		return (char*) 0x41269150;	// found at (0xFFB789C8) [search CRAW BUF]
}

char *hook_alt_raw_image_addr()
{
	// Appears to be two raw buffers (this returns inactive buffer)
	// Addresses below found in table at FFBBAD50, ref at FF8843F4
	// used in _sub_FF8841BC__SsImgProcBuf.c__0 
	// checks [0x2E88 + 0xc] --> defines which buffer is active

	if (*((int*)0x2E94) == 0)
		return (char*) 0x46000000;
	else
		return (char*) 0x41269150;	// found at (0xFFB789C8) [search CRAW BUF]
}

long hook_raw_size()
{
	return 0xEE9200; // search CRAW BUF SIZE
}


char *camera_jpeg_count_str()
{
	return (char*)0xBB618; // loc_FFA435FC (search for "9999", passed to sprintf)
}


void *vid_get_viewport_fb_d()
{
	return (void*)(*(int*)(0x2C10+0x58)); // @FF8781AC & FF8781E4 (comp S95)
}
