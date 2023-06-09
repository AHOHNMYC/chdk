#ifndef PLATFORM_KBD_H
#define PLATFORM_KBD_H

#define KEYS_MASK0          0x0000FE00
#define KEYS_MASK1          0x00000000
#define KEYS_MASK2          0x0000F2E0

#define SD_READONLY_FLAG    0x02000000 // Found @0xff5fa0ec, levent 0x20a
#define SD_READONLY_IDX     2
#define USB_MASK            0x10000000 // Found @0xff5fa0fc, levent 0x202
#define USB_IDX             2
#define BATTCOVER_FLAG      0x04000000 // Found @0xff5fa0f4, levent 0x205
#define BATTCOVER_IDX       2
#define ANALOG_AV_FLAG      0x00000100 // Found @0xff5fa024, levent 0x200 (non-inverted logic)
#define ANALOG_AV_IDX       0


#endif
