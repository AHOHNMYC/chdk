/*
 * filewrite.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"

typedef struct {
    unsigned int address;
    unsigned int length;
} cam_ptp_data_chunk; //camera specific structure

#define MAX_CHUNKS_FOR_JPEG 7   // filewritetask is prepared for this many chunks
/*
 * fwt_data_struct: defined here as it's camera dependent
 * unneeded members are designated with unkn
 * pdc is required, everything after that is optional (DryOS < R50)
 * file_offset, full_size, seek_flag only needs to be defined for DryOS>=r50 generation cameras
 */
typedef struct
{
    int unkn1[5];
    cam_ptp_data_chunk pdc[MAX_CHUNKS_FOR_JPEG];
    int unkn2;
    char name[32];
} fwt_data_struct;

#include "../../../generic/filewrite.c"

/*************************************************************/
//** filewritetask @ 0xFF34A198 - 0xFF34A27C, length=58
void __attribute__((naked,noinline)) filewritetask() {
asm volatile (
"    STMFD   SP!, {R1-R5,LR} \n"
"    LDR     R5, =0xFEA4 \n"

"loc_FF34A1A0:\n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R5, #0x10] \n"
"    ADD     R1, SP, #8 \n"
"    BL      sub_FF029EA8 /*_ReceiveMessageQueue*/ \n"
"    CMP     R0, #0 \n"
"    LDRNE   R1, =0x35B \n"
"    LDRNE   R0, =0xFF34A290 \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP, #8] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0xA \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF34A1A0 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A270 \n"
"    B       loc_FF34A278 \n"
"    B       loc_FF34A1FC \n"
"    B       loc_FF34A268 \n"

"loc_FF34A1FC:\n"
"    MOV     R0, #0 \n"
"    MOV     R4, R5 \n"
"    STR     R0, [SP] \n"

"loc_FF34A208:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R1, SP \n"
"    BL      sub_FF02A0EC /*_GetNumberOfPostedMessages*/ \n"
"    LDR     R0, [SP] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF34A234 \n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FF029EA8 /*_ReceiveMessageQueue*/ \n"
"    B       loc_FF34A208 \n"

"loc_FF34A234:\n"
"    LDR     R0, [R4, #4] \n"
"    CMN     R0, #1 \n"
"    BEQ     loc_FF34A25C \n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    MVN     R0, #0 \n"
"    STR     R0, [R4, #4] \n"
"    LDR     R0, =0x162874 \n"
"    BL      sub_FF06CD84 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF06B000 \n"

"loc_FF34A25C:\n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      _GiveSemaphore \n"
"    B       loc_FF34A1A0 \n"

"loc_FF34A268:\n"
"    BL      sub_FF34A47C_my \n"  // --> Patched. Old value = 0xFF34A47C.
"    B       loc_FF34A1A0 \n"

"loc_FF34A270:\n"
"    BL      sub_FF34A53C_my \n"  // --> Patched. Old value = 0xFF34A53C.
"    B       loc_FF34A1A0 \n"

"loc_FF34A278:\n"
"    BL      sub_FF34A02C_my \n"  // --> Patched. Old value = 0xFF34A02C.
"    B       loc_FF34A1A0 \n"
);
}

/*************************************************************/
//** sub_FF34A47C_my @ 0xFF34A47C - 0xFF34A4C0, length=18
void __attribute__((naked,noinline)) sub_FF34A47C_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    MOV     R4, R0 \n"
"    ADD     R0, R0, #0x50 \n"
"    BL      sub_FF06CD84 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF06AEC4 \n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      sub_FF000348 \n"
"    LDR     R0, [R4, #0x4C] \n"
"    LDR     R2, =0x1B6 \n"
"    CMP     R0, #1 \n"
"    LDREQ   R0, [R4, #8] \n"
"    ORREQ   R0, R0, #0x8000 \n"
"    STREQ   R0, [R4, #8] \n"
//hook start
"    STMFD   SP!, {R2-R12,LR} \n"
"    MOV     R0, R4 \n"
"    BL      filewrite_main_hook \n"
"    LDMFD   SP!, {R2-R12,LR} \n"
//hook end
"    LDR     R1, [R4, #8] \n"
"    LDR     R3, [R4, #0xC] \n"
"    ADD     R0, R4, #0x50 \n"
"    BL      sub_FF34A61C_my \n"  // --> Patched. Old value = 0xFF34A61C.
"    LDR     PC, =0xFF34A4C4 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF34A61C_my @ 0xFF34A61C - 0xFF34A6F4, length=55
void __attribute__((naked,noinline)) sub_FF34A61C_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    SUB     SP, SP, #0x38 \n"
"    MOV     R7, R0 \n"
"    MOV     R8, R1 \n"
"    MOV     R9, R2 \n"
"    MOV     R5, R3 \n"
"    BL      sub_FF205A78 \n"
"    AND     R0, R0, #0x7F \n"
"    CMP     R0, #8 \n"
"    CMPNE   R0, #0x22 \n"
"    MOV     R6, #0 \n"
"    MOVEQ   R4, #1 \n"
"    MOVNE   R4, R6 \n"
"    CMP     R4, #1 \n"
"    BLEQ    sub_FF1D0BAC \n"
"    MOV     R2, R9 \n"
"    MOV     R1, R8 \n"
"    MOV     R0, R7 \n"
"    BL      fwt_open \n"  // --> Patched. Old value = _Open.
"    CMP     R4, #1 \n"
"    MOV     R10, R0 \n"
"    BLEQ    sub_FF1D0BFC \n"
"    CMN     R10, #1 \n"
"    MOVNE   R0, R10 \n"
"    BNE     loc_FF34A6F0 \n"
"    CMP     R4, #1 \n"
"    BLEQ    sub_FF1D0BAC \n"
"    MOV     R0, R7 \n"
"    BL      sub_FF026AE4 \n"
"    MOV     R2, #0xF \n"
"    MOV     R1, R7 \n"
"    MOV     R0, SP \n"
"    BL      sub_FF45EA8C \n"
"    LDR     R0, =0x41FF \n"
"    STRB    R6, [SP, #0xF] \n"
"    STR     R0, [SP, #0x20] \n"
"    MOV     R0, #0x10 \n"
"    STR     R0, [SP, #0x24] \n"
"    ADD     R1, SP, #0x20 \n"
"    MOV     R0, SP \n"
"    STR     R6, [SP, #0x28] \n"
"    STR     R5, [SP, #0x2C] \n"
"    STR     R5, [SP, #0x30] \n"
"    STR     R5, [SP, #0x34] \n"
"    BL      sub_FF06A838 \n"
"    MOV     R2, R9 \n"
"    MOV     R1, R8 \n"
"    MOV     R0, R7 \n"
"    BL      fwt_open \n"  // --> Patched. Old value = _Open.
"    CMP     R4, #1 \n"
"    MOV     R5, R0 \n"
"    BLEQ    sub_FF1D0BFC \n"
"    MOV     R0, R5 \n"

"loc_FF34A6F0:\n"
"    ADD     SP, SP, #0x38 \n"
"    LDMFD   SP!, {R4-R10,PC} \n"
);
}

/*************************************************************/
//** sub_FF34A53C_my @ 0xFF34A53C - 0xFF34A5BC, length=33
void __attribute__((naked,noinline)) sub_FF34A53C_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #6 \n"
"    BHI     loc_FF34A568 \n"
"    ADD     R0, R5, R0, LSL#3 \n"
"    LDR     R8, [R0, #0x14]! \n"
"    LDR     R7, [R0, #4] \n"
"    CMP     R7, #0 \n"
"    BNE     loc_FF34A580 \n"
"    B       loc_FF34A574 \n"

"loc_FF34A568:\n"
"    LDR     R1, =0x2BB \n"
"    LDR     R0, =0xFF34A290 \n"
"    BL      _DebugAssert \n"

"loc_FF34A574:\n"
"    MOV     R1, R5 \n"
"    MOV     R0, #7 \n"
"    B       sub_FF34A614 \n"

"loc_FF34A580:\n"
"    LDR     R9, =0xFEA4 \n"
"    MOV     R4, R7 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R4, #0x1000000 \n"
"    MOVLS   R6, R4 \n"
"    MOVHI   R6, #0x1000000 \n"
"    BIC     R1, R0, #0xFF000000 \n"
"    CMP     R1, #0 \n"
"    BICNE   R0, R0, #0xFF000000 \n"
"    RSBNE   R0, R0, #0x1000000 \n"
"    CMPNE   R6, R0 \n"
"    MOVHI   R6, R0 \n"
"    LDR     R0, [R9, #4] \n"
"    MOV     R2, R6 \n"
"    MOV     R1, R8 \n"
"    BL      fwt_write \n"  // --> Patched. Old value = _write.
"    LDR     PC, =0xFF34A5C0 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF34A02C_my @ 0xFF34A02C - 0xFF34A060, length=14
void __attribute__((naked,noinline)) sub_FF34A02C_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0xFEA4 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    SUB     SP, SP, #0x38 \n"
"    CMN     R0, #1 \n"
"    BEQ     sub_FF34A074 \n"
"    LDR     R1, [R4, #8] \n"
"    LDR     R6, =0x9200003 \n"
"    TST     R1, #0x8000 \n"
"    BEQ     loc_FF34A060 \n"
"    BL      sub_FF026508 \n"
"    B       sub_FF34A064 \n"

"loc_FF34A060:\n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    LDR     PC, =0xFF34A064 \n"  // Continue in firmware
);
}
