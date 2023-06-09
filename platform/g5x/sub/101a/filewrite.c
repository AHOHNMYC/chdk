/*
 * filewrite.c - auto-generated by CHDK code_gen2.
 */

#include "lolevel.h"
#include "platform.h"

typedef struct {
    unsigned int address;
    unsigned int length;
} cam_ptp_data_chunk; //camera specific structure

#define MAX_CHUNKS_FOR_FWT 7 // filewritetask is prepared for this many chunks
                              // corresponds to filewritetask() jump table entries 0-6

/*
 * fwt_data_struct: defined here as it's camera dependent
 * unneeded members are designated with unkn
 * file_offset, full_size, seek_flag only needs to be defined for cameras with CAM_FILEWRITETASK_SEEK/CAM_FILEWRITETASK_MULTIPASS
 * pdc is always required
 * name is not currently used
 */
// Copied from G7X port - appears to be the same
typedef struct
{
    int unkn1;
    int file_offset;
    int maybe_full_size;
    int unkn2, unkn3;
    int unkn4;
    cam_ptp_data_chunk pdc[MAX_CHUNKS_FOR_FWT];
    int maybe_seek_flag;
    int unkn5, unkn6;
    char name[32];
} fwt_data_struct;

#include "../../../generic/filewrite.c"

/*************************************************************/
//** filewritetask @ 0xFC4E8441, length=43 
void __attribute__((naked,noinline)) filewritetask() {
asm volatile (
            "    push    {r3, r4, r5, r6, r7, lr}\n"
            "    ldr     r6, =0x09200001\n"
            "    movw    r7, #0x476\n"
            "    ldr     r5, =0x000264c0\n"
            "    adds    r6, #0x12\n"
            "loc_fc4e844c:\n"
            "    mov     r1, sp\n"
            "    movs    r2, #0\n"
            "    ldr     r0, [r5, #0x14]\n"
            "    blx     sub_fc34d054\n" // j_ReceiveMessageQueue
            "    cbz     r0, loc_fc4e8462\n"
            "    movs    r0, #0\n"
            "    mov     r2, r7\n"
            "    ldr     r1, =0xfc4e850c\n" //  *"dwFWrite.c"
            "    blx     sub_fc34d264\n" // j_DebugAssert
            "loc_fc4e8462:\n"
            "    ldr     r0, [sp]\n"
            "    ldr     r1, [r0]\n"
            "    cmp     r1, #0xd\n"
            "    bhs     loc_fc4e844c\n"
            "    tbb     [pc, r1]\n" // (jumptable r1 13 elements)
            "branchtable_fc4e846e:\n"
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 0)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 1)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 2)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 3)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 4)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 5)
            "    .byte((loc_fc4e84b0 - branchtable_fc4e846e) / 2)\n" // (case 6)
            "    .byte((loc_fc4e84b6 - branchtable_fc4e846e) / 2)\n" // (case 7)
            "    .byte((loc_fc4e847c - branchtable_fc4e846e) / 2)\n" // (case 8)
            "    .byte((loc_fc4e848e - branchtable_fc4e846e) / 2)\n" // (case 9)
            "    .byte((loc_fc4e84aa - branchtable_fc4e846e) / 2)\n" // (case 10)
            "    .byte((loc_fc4e8482 - branchtable_fc4e846e) / 2)\n" // (case 11)
            "    .byte((loc_fc4e8488 - branchtable_fc4e846e) / 2)\n" // (case 12)
            ".align 1\n"
            "loc_fc4e847c:\n"
            "    bl      sub_fc4e862e\n"
            "    b       loc_fc4e844c\n"
            "loc_fc4e8482:\n"
            "    bl      sub_fc4e867a\n"
            "    b       loc_fc4e844c\n"
            "loc_fc4e8488:\n"
            "    bl      sub_fc4e81c4_my\n" // Patched (was sub_fc4e81c4)
            "    b       loc_fc4e844c\n"
            "loc_fc4e848e:\n"
            "    ldr     r1, [r0, #4]\n"
            "    movs    r2, #0\n"
            "    mov     r4, r0\n"
            "    ldr     r0, [r5, #8]\n"
            "    bl      _lseek\n"
            "    adds    r0, r0, #1\n"
            "    bne     loc_fc4e844c\n"
            "    movs    r0, #7\n"
            "    mov     r1, r4\n"
            "    str     r6, [r4, #0x14]\n"
            "    bl      sub_fc4e814a\n"
            "    b       loc_fc4e844c\n"
            "loc_fc4e84aa:\n"
            "    bl      sub_fc4e86d8\n"
            "    b       loc_fc4e844c\n"
            "loc_fc4e84b0:\n"
            "    bl      sub_fc4e874a_my\n" // Patched (was sub_fc4e874a)
            "    b       loc_fc4e844c\n"
            "loc_fc4e84b6:\n"
            "    bl      sub_fc4e82f6_my\n" // Patched (was sub_fc4e82f6)
            "    b       loc_fc4e844c\n"
);
}

/*************************************************************/
//** sub_fc4e81c4_my @ 0xFC4E81C5, length=126 
void __attribute__((naked,noinline)) sub_fc4e81c4_my() {
asm volatile (
            "    push.w  {r4, r5, r6, r7, r8, sb, lr}\n"
            "    mov     r4, r0\n"

            //hook placed here to avoid conditional branch a few instructions below (watch out for registers!)
            //"  mov   r0, r4\n"      //data block start, commented out as R0 is already holding what we need
            "    bl filewrite_main_hook\n"
            "    mov     r0, r4\n"      //restore register(s)

            "    ldr     r0, [r0, #0x50]\n"
            "    sub     sp, #0x3c\n"
            "    lsls    r1, r0, #0x1f\n"
            "    bne     loc_fc4e81d6\n"
            "    lsls    r0, r0, #0x1d\n"
            "    bpl     loc_fc4e82d2\n"
            "loc_fc4e81d6:\n"
            "    ldr     r7, =0x000264c0\n"
            "    ldr     r0, [r7, #0x1c]\n"
            "    cbz     r0, loc_fc4e81de\n"
            "    blx     r0\n"
            "loc_fc4e81de:\n"
            "    add.w   r0, r4, #0x5c\n"
            "    mov     r8, r0\n"
            "    bl      sub_fc3b7620\n"
            "    movs    r1, #0\n"
            "    bl      sub_fc07dd36\n"
            "    movs    r1, #0\n"
            "    movs    r0, #0x47\n"
            "    bl      sub_fc3b5a60\n"
            "    ldr     r0, [r4, #0x50]\n"
            "    lsls    r0, r0, #0x1f\n"
            "    beq     loc_fc4e82d2\n"
            "    ldr     r0, [r4, #0x10]\n"
            "    bl      sub_fc1c8962\n"
            "    ldr     r0, [r4, #0x50]\n"
            "    movw    r5, #0x301\n"
            "    lsls    r1, r0, #0x1b\n"
            "    bpl     loc_fc4e8210\n"
            "    movs    r5, #9\n"
            "    b       loc_fc4e8216\n"
            "loc_fc4e8210:\n"
            "    lsls    r1, r0, #0x19\n"
            "    bpl     loc_fc4e8216\n"
            "    movs    r5, #1\n"
            "loc_fc4e8216:\n"
            "    lsls    r0, r0, #0x1a\n"
            "    bmi     loc_fc4e8220\n"
            "    ldr     r0, [r4, #0x58]\n"
            "    cmp     r0, #1\n"
            "    bne     loc_fc4e8224\n"
            "loc_fc4e8220:\n"
            "    orr     r5, r5, #0x8000\n"
            "loc_fc4e8224:\n"
            "    movw    sb, #0x1b6\n"
            "    ldr     r6, [r4, #0x10]\n"
            "    mov     r2, sb\n"
            "    mov     r1, r5\n"
            "    mov     r0, r8\n"
            "    bl      fwt_open\n" // Patched (was _Open)
            "    adds    r1, r0, #1\n"
            "    bne     loc_fc4e8272\n"
            "    mov     r0, r8\n"
            "    bl      sub_fc3b60be\n" // PrepareDirectory_0
            "    movs    r2, #0xf\n"
            "    mov     r1, r8\n"
            "    add     r0, sp, #4\n"
            "    blx     sub_fc34d21c\n" // -> dry_memcpy_bytes
            "    movs    r0, #0\n"
            "    strb.w  r0, [sp, #0x13]\n"
            "    movw    r1, #0x41ff\n"
            "    str     r1, [sp, #0x24]\n"
            "    strd    r0, r6, [sp, #0x2c]\n"
            "    movs    r1, #0x10\n"
            "    str     r6, [sp, #0x34]\n"
            "    add     r0, sp, #4\n"
            "    str     r6, [sp, #0x38]\n"
            "    str     r1, [sp, #0x28]\n"
            "    add     r1, sp, #0x24\n"
            "    bl      sub_fc1c8eb6\n"
            "    mov     r2, sb\n"
            "    mov     r1, r5\n"
            "    mov     r0, r8\n"
            "    bl      _Open\n"
            "loc_fc4e8272:\n"
            "    mov     r5, r0\n"
            "    str     r0, [r7, #8]\n"
            "    adds    r0, r0, #1\n"
            "    bne     loc_fc4e82aa\n"
            "    movs    r1, #0\n"
            "    movs    r0, #0x48\n"
            "    bl      sub_fc3b5a60\n"
            "    mov     r0, r8\n"
            "    bl      sub_fc3b7620\n"
            "    ldr     r1, [r7, #0x20]\n"
            "    bl      sub_fc07dd94\n"
            "    ldr     r0, [r7, #0x18]\n"
            "    cmp     r0, #0\n"
            "    beq     loc_fc4e82f0\n"
            "    ldr     r5, =0x09200001\n"
            "    mov     r0, r4\n"
            "    mov     r1, r5\n"
            "    bl      sub_fc4e8110\n"
            "    ldr     r1, [r7, #0x18]\n"
            "    add     sp, #0x3c\n"
            "    mov     r0, r5\n"
            "    pop.w   {r4, r5, r6, r7, r8, sb, lr}\n"
            "    bx      r1\n"
            "loc_fc4e82aa:\n"
            "    ldr     r0, =0x001d2ae4\n"
            "    movs    r2, #0x20\n"
            "    mov     r1, r8\n"
            "    blx     sub_fc34d26c\n" // j_dry_memcpy

            // TODO looks equivalent to G7X, not verified that it's required
            //mod start
            "    LDR     r3, =current_write_ignored\n"
            "    LDR     r3, [r3]\n"
            "    cbnz    r3,loc_C\n" // jump over the next block
            //mod end

            "    ldr     r0, [r4, #0x50]\n"
            "    lsls    r0, r0, #0x18\n"
            "    bpl     loc_fc4e82d2\n"
            "    ldr     r1, [r4, #0xc]\n"
            "    mov     r0, r5\n"
            "    bl      sub_fc3b5ec6\n"
            "    cbnz    r0, loc_fc4e82d0\n"
            "    ldr     r0, =0x09200001\n"
            "    mov     r1, r4\n"
            "    adds    r0, #0x16\n"
            "    str     r0, [r4, #0x14]\n"
            "    movs    r0, #7\n"
            "    b       loc_fc4e82e8\n"
            "loc_fc4e82d0:\n"
            "    b       loc_fc4e82d2\n"
            "loc_fc4e82d2:\n"
            "loc_C:\n"  // +
            "    ldr     r0, [r4, #0x50]\n"
            "    lsls    r0, r0, #0x19\n"
            "    bmi     loc_fc4e82dc\n"
            "    ldr     r0, [r4, #4]\n"
            "    cbz     r0, loc_fc4e82e4\n"
            "loc_fc4e82dc:\n"
            "    movs    r0, #9\n"
            "    mov     r1, r4\n"
            "    bl      sub_fc4e814a\n"
            "loc_fc4e82e4:\n"
            "    movs    r0, #0\n"
            "    mov     r1, r4\n"
            "loc_fc4e82e8:\n"
            "    add     sp, #0x3c\n"
            "    pop.w   {r4, r5, r6, r7, r8, sb, lr}\n"
            "    b       sub_fc4e814a\n" // jump to FW
            "loc_fc4e82f0:\n"
            "    add     sp, #0x3c\n"
            "    pop.w   {r4, r5, r6, r7, r8, sb, pc}\n"
);
}

/*************************************************************/
//** sub_fc4e874a_my @ 0xFC4E874B, length=65 
void __attribute__((naked,noinline)) sub_fc4e874a_my() {
asm volatile (
            "    push.w  {r4, r5, r6, r7, r8, sb, sl, lr}\n"
            "    mov     r5, r0\n"
            "    ldr     r0, [r0]\n"
            "    cmp     r0, #6\n"
            "    bhi     loc_fc4e8762\n"
            "    add.w   r0, r5, r0, lsl #3\n"
            "    ldrd    r7, r6, [r0, #0x18]\n"
            "    cbnz    r6, loc_fc4e8776\n"
            "    b       loc_fc4e8770\n"
            "loc_fc4e8762:\n"
            "    movw    r2, #0x3b5\n"
            "    ldr     r1, =0xfc4e850c\n" //  *"dwFWrite.c"
            "    movs    r0, #0\n"
            "    blx     sub_fc34d264\n" // j_DebugAssert
            "loc_fc4e8770:\n"
            "    movs    r0, #7\n"
            "    mov     r1, r5\n"
            "    b       loc_fc4e87e6\n"
            "loc_fc4e8776:\n"
            "    ldr.w   sl, =0x000264c0\n"
            "    mov.w   sb, #0x1000000\n"
            "    mov     r4, r6\n"
            "loc_fc4e8780:\n"
            "    ldr     r0, [r5, #4]\n"
            "    cmp     r4, sb\n"
            "    mov     r1, sb\n"
            "    bhi     loc_fc4e878a\n"
            "    mov     r1, r4\n"
            "loc_fc4e878a:\n"
            "    lsls    r2, r0, #8\n"
            "    beq     loc_fc4e879c\n"
            "    bic     r0, r0, #0xff000000\n"
            "    rsb.w   r0, r0, #0x1000000\n"
            "    cmp     r1, r0\n"
            "    bls     loc_fc4e879c\n"
            "    mov     r1, r0\n"
            "loc_fc4e879c:\n"
            "    ldr.w   r0, [sl, #8]\n"
            "    mov     r8, r1\n"
            "    mov     r2, r1\n"
            "    mov     r1, r7\n"
            "    bl      fwt_write\n" // j_Write_FW // Patched (was sub_fc3b5db4)
            "    ldr     r1, [r5, #4]\n"
            "    cmp     r8, r0\n"
            "    add     r1, r0\n"
            "    str     r1, [r5, #4]\n"
            "    beq     loc_fc4e87c6\n"
            "    adds    r0, r0, #1\n"
            "    bne     loc_fc4e87be\n"
            "    ldr     r0, =0x09200006\n"
            "    subs    r0, r0, #1\n"
            "    b       loc_fc4e87c2\n"
            "loc_fc4e87be:\n"
            "    ldr     r0, =0x09200006\n"
            "    adds    r0, #0xf\n"
            "loc_fc4e87c2:\n"
            "    str     r0, [r5, #0x14]\n"
            "    b       loc_fc4e8770\n"
            "loc_fc4e87c6:\n"
            "    subs    r4, r4, r0\n"
            "    cmp     r4, r6\n"
            "    add     r7, r0\n"
            "    blo     loc_fc4e87dc\n"
            "    movw    r2, #0x3df\n"
            "    ldr     r1, =0xfc4e850c\n" //  *"dwFWrite.c"
            "    movs    r0, #0\n"
            "    blx     sub_fc34d264\n" // j_DebugAssert
            "loc_fc4e87dc:\n"
            "    cmp     r4, #0\n"
            "    bne     loc_fc4e8780\n"
            "    ldr     r0, [r5]\n"
            "    mov     r1, r5\n"
            "    adds    r0, r0, #1\n"
            "loc_fc4e87e6:\n"
            "    pop.w   {r4, r5, r6, r7, r8, sb, sl, lr}\n"
            "    b       sub_fc4e814a\n" // jump to FW
);
}

/*************************************************************/
//** sub_fc4e82f6_my @ 0xFC4E82F7, length=141 
void __attribute__((naked,noinline)) sub_fc4e82f6_my() {
asm volatile (
            "    push    {r4, r5, r6, r7, lr}\n"
            "    mov     r4, r0\n"
            "    ldr     r0, [r0, #0x50]\n"
            "    ldr     r5, =0x000264c0\n"
            "    sub     sp, #0x3c\n"
            "    add.w   r7, r4, #0x5c\n"
            "    lsls    r1, r0, #0x1e\n"
            "    bmi     loc_fc4e830e\n"
            "    lsls    r0, r0, #0x1c\n"
            "    bpl     loc_fc4e8408\n"
            "    b       loc_fc4e8362\n"
            "loc_fc4e830e:\n"
            "    lsls    r0, r0, #0x18\n"
            "    bpl     loc_fc4e833e\n"
            "    ldrd    r1, r0, [r4, #8]\n"
            "    cmp     r1, r0\n"
            "    beq     loc_fc4e833e\n"
            "    ldr     r0, [r5, #8]\n"
            "    bl      sub_fc3b5ec6\n"
            "    cbnz    r0, loc_fc4e832a\n"
            "    ldr     r0, =0x09200001\n"
            "    adds    r0, #0x16\n"
            "    str     r0, [r4, #0x14]\n"
            "    b       loc_fc4e833e\n"
            "loc_fc4e832a:\n"
            "    ldr     r0, [r4, #8]\n"
            "    add     r1, sp, #0x24\n"
            "    str     r0, [r4, #4]\n"
            "    mov     r0, r7\n"
            "    bl      sub_fc1c8e40\n"
            "    cmp     r0, #1\n"
            "    bne     loc_fc4e833e\n"
            "    ldr     r0, [r4, #4]\n"
            "    str     r0, [sp, #0x2c]\n"
            "loc_fc4e833e:\n"
            "    ldr     r0, [r5, #8]\n"
            "    adds    r1, r0, #1\n"
            "    beq     loc_fc4e8362\n"
            "    ldr     r6, =0x09200001\n"
            "    ldr     r1, [r4, #0x58]\n"
            "    adds    r6, r6, #2\n"
            "    cmp     r1, #1\n"
            "    bne     loc_fc4e8354\n"

            //mod start
            "    LDR R3, =current_write_ignored\n"
            "    LDR R3, [R3]\n"
            "    cbnz R3,loc_D\n" // jump over the next block
            //mod end

            "    bl      sub_fc3b5c48\n"
            "    b       loc_fc4e8358\n"
            "loc_fc4e8354:\n"
            "loc_D:\n"
            "    bl      fwt_close\n" // Patched (was _Close)
            "loc_fc4e8358:\n"
            "    cbz     r0, loc_fc4e835c\n"
            "    str     r6, [r4, #0x14]\n"
            "loc_fc4e835c:\n"
            "    mov.w   r0, #-1\n"
            "    str     r0, [r5, #8]\n"
            "loc_fc4e8362:\n"
            "    ldr     r0, [r4, #0x14]\n"
            "    lsls    r0, r0, #0x1f\n"
            "    bne     loc_fc4e840e\n"
            "    ldr     r0, [r4, #0x50]\n"
            "    lsls    r1, r0, #0x1f\n"
            "    beq     loc_fc4e838a\n"
            "    movw    r0, #0x81ff\n"
            "    str     r0, [sp, #0x24]\n"
            "    movs    r0, #0x20\n"
            "    str     r0, [sp, #0x28]\n"
            "    ldr     r0, [r4, #4]\n"
            "    str     r0, [sp, #0x2c]\n"
            "    ldr     r0, [r4, #0x10]\n"
            "    str     r0, [sp, #0x30]\n"
            "    ldr     r0, [r4, #0x10]\n"
            "    str     r0, [sp, #0x34]\n"
            "    ldr     r0, [r4, #0x10]\n"
            "    str     r0, [sp, #0x38]\n"
            "    b       loc_fc4e83ac\n"
            "loc_fc4e838a:\n"
            "    lsls    r0, r0, #0x1b\n"
            "    bpl     loc_fc4e83ac\n"
            "    add     r1, sp, #0x24\n"
            "    mov     r0, r7\n"
            "    bl      sub_fc1c8e40\n"
            "    cbnz    r0, loc_fc4e83a4\n"
            "    movs    r0, #0\n"
            "    movw    r2, #0x43b\n"
            "    ldr     r1, =0xfc4e850c\n" //  *"dwFWrite.c"
            "    blx     sub_fc34d264\n" // j_DebugAssert
            "loc_fc4e83a4:\n"
            "    ldr     r0, [sp, #0x2c]\n"
            "    ldr     r1, [r4, #4]\n"
            "    add     r0, r1\n"
            "    str     r0, [sp, #0x2c]\n"
            "loc_fc4e83ac:\n"
            "    ldr     r0, [r4, #0x50]\n"
            "    mvns    r0, r0\n"
            "    lsls    r0, r0, #0x19\n"
            "    bpl     loc_fc4e83bc\n"
            "    add     r1, sp, #0x24\n"
            "    mov     r0, r7\n"
            "    bl      sub_fc1c8eb6\n"
            "loc_fc4e83bc:\n"
            "    ldr     r0, [r4, #0x50]\n"
            "    lsls    r1, r0, #0x1e\n"
            "    bpl     loc_fc4e840e\n"
            "    lsls    r0, r0, #0x1a\n"
            "    bpl     loc_fc4e840e\n"
            "    movs    r2, #0x20\n"
            "    mov     r1, r7\n"
            "    add     r0, sp, #4\n"
            "    blx     sub_fc34d26c\n" // j_dry_memcpy
            "    add     r0, sp, #4\n"
            "    bl      _strlen\n"
            "    add     r2, sp, #4\n"
            "    add     r0, r2\n"
            "    movs    r1, #0x54\n"
            "    strb    r1, [r0, #-0x3]!\n"
            "    movs    r1, #0x4d\n"
            "    strb    r1, [r0, #1]\n"
            "    movs    r1, #0x50\n"
            "    strb    r1, [r0, #2]\n"
            "    add     r1, sp, #4\n"
            "    mov     r0, r7\n"
            "    bl      sub_fc1c8b3a\n"
            "    cbnz    r0, loc_fc4e83fe\n"
            "    movs    r0, #0\n"
            "    movw    r2, #0x1be\n"
            "    ldr     r1, =0xfc4e850c\n" //  *"dwFWrite.c"
            "    blx     sub_fc34d264\n" // j_DebugAssert
            "loc_fc4e83fe:\n"
            "    add     r0, sp, #4\n"
            "    bl      sub_fc1c91a8\n"
            "    mov     r0, r7\n"
            "    b       loc_fc4e840a\n"
            "loc_fc4e8408:\n"
            "    b       loc_fc4e8424\n"
            "loc_fc4e840a:\n"
            "    bl      sub_fc1c91a8\n"
            "loc_fc4e840e:\n"
            "    movs    r1, #0\n"
            "    movs    r0, #0x48\n"
            "    bl      sub_fc3b5a60\n"
            "    mov     r0, r7\n"
            "    bl      sub_fc3b7620\n"
            "    ldr     r1, [r5, #0x20]\n"
            "    bl      sub_fc07dd94\n"
            "    b       loc_fc4e8428\n"
            "loc_fc4e8424:\n"
            "    ldr     r0, [r5, #0x20]\n"
            "    blx     r0\n"
            "loc_fc4e8428:\n"
            "    ldr     r0, [r5, #0x18]\n"
            "    cmp     r0, #0\n"
            "    beq     loc_fc4e843c\n"
            "    ldr     r1, [r4, #0x14]\n"
            "    mov     r0, r4\n"
            "    bl      sub_fc4e8110\n"
            "    ldr     r1, [r5, #0x18]\n"
            "    ldr     r0, [r4, #0x14]\n"
            "    blx     r1\n"
            "loc_fc4e843c:\n"
            "    add     sp, #0x3c\n"
            "    pop     {r4, r5, r6, r7, pc}\n"
);
}
