#include "platform.h"
#include "keyboard.h"

void *hook_raw_fptr()
{
    return (void*)0; 
}

void *hook_raw_ret_addr()
{
    return (void*)0; 
}

char *hook_raw_image_addr()
{
    return (char*)0x10E706A0; 
}

long hook_raw_size()
{
    return 0x8CAE10; 
}

void *vid_get_viewport_live_fb()
{
//    return (void*)0; 
    void **fb=(void **)0x6F8C;
    unsigned char buff = *((unsigned char*)0x6F9C);
    if (buff == 0) {
        buff = 2;
    }
    else {
        buff--;
    }
    return fb[buff];
}

void *vid_get_bitmap_fb()
{
    return (void*)0x10361000; 
}

void *vid_get_viewport_fb()
{
    return (void*)(0x1065BA50); 
}

void *vid_get_viewport_fb_d()
{
    return (void*)(*(int*)0x94408); 
}

long vid_get_viewport_height()
{
    return ((mode_get()&MODE_MASK) == MODE_PLAY)?240:230;
}
char *camera_jpeg_count_str()
{
    return (char*)0x12298;
}
