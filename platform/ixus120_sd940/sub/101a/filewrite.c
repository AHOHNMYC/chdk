/*
 * filewrite.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"

typedef struct {
    unsigned int address;
    unsigned int length;
} cam_ptp_data_chunk; //camera specific structure

#define MAX_CHUNKS_FOR_JPEG 4 // filewritetask is prepared for this many chunks
/*
 * fwt_data_struct: defined here as it's camera dependent
 * unneeded members are designated with unkn
 * file_offset, full_size, seek_flag only needs to be defined for DryOS>=r50 generation cameras
 * pdc is always required
 * name is not currently used
 */
typedef struct
{
    int unkn1[5];
    cam_ptp_data_chunk pdc[MAX_CHUNKS_FOR_JPEG];
    int unkn6;
    char name[32];
} fwt_data_struct;

#include "../../../generic/filewrite.c"

/*************************************************************/
//** filewritetask @ 0xFFA48930 - 0xFFA48A14, length=58
void __attribute__((naked,noinline)) filewritetask() {
asm volatile (
"    STMFD   SP!, {R1-R5,LR} \n"
"    LDR     R4, =0x9C40 \n"

"loc_FFA48938:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #8 \n"
"    BL      sub_FF837DC8 /*_ReceiveMessageQueue*/ \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFA48968 \n"
"    LDR     R0, [SP, #8] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #1 \n"
"    BNE     loc_FFA48970 \n"
"    LDR     R0, [R4, #8] \n"
"    BL      _GiveSemaphore \n"

"loc_FFA48968:\n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R1-R5,PC} \n"

"loc_FFA48970:\n"
"    SUB     R1, R1, #2 \n"
"    CMP     R1, #6 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FFA48938 \n"
"    B       loc_FFA4899C \n"
"    B       loc_FFA48A00 \n"
"    B       loc_FFA48A08 \n"
"    B       loc_FFA48A08 \n"
"    B       loc_FFA48A08 \n"
"    B       loc_FFA48A08 \n"
"    B       loc_FFA48A10 \n"

"loc_FFA4899C:\n"
"    MOV     R0, #0 \n"
"    STR     R0, [SP] \n"

"loc_FFA489A4:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R1, SP \n"
"    BL      sub_FF83800C /*_GetNumberOfPostedMessages*/ \n"
"    LDR     R0, [SP] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFA489D0 \n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FF837DC8 /*_ReceiveMessageQueue*/ \n"
"    B       loc_FFA489A4 \n"

"loc_FFA489D0:\n"
"    LDR     R0, [R4] \n"
"    CMN     R0, #1 \n"
"    BEQ     loc_FFA489F4 \n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    MVN     R0, #0 \n"
"    STR     R0, [R4] \n"
"    LDR     R0, =0xC151C \n"
"    BL      sub_FF868934 \n"
"    BL      sub_FF866D18 \n"

"loc_FFA489F4:\n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      _GiveSemaphore \n"
"    B       loc_FFA48938 \n"

"loc_FFA48A00:\n"
"    BL      sub_FFA48C1C_my \n"  // --> Patched. Old value = 0xFFA48C1C. Open stage
"    B       loc_FFA48938 \n"

"loc_FFA48A08:\n"
"    BL      sub_FFA48D50_my \n"  // --> Patched. Old value = 0xFFA48D50. Write stage
"    B       loc_FFA48938 \n"

"loc_FFA48A10:\n"
"    BL      sub_FFA487C8_my \n"  // --> Patched. Old value = 0xFFA487C8. Close stage
"    B       loc_FFA48938 \n"
);
}

/*************************************************************/
//** sub_FFA48C1C_my @ 0xFFA48C1C - 0xFFA48C5C, length=17
void __attribute__((naked,noinline)) sub_FFA48C1C_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    MOV     R4, R0 \n"
"    ADD     R0, R0, #0x38 \n"
"    SUB     SP, SP, #0x38 \n"
"    BL      sub_FF868934 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF866CC8 \n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      sub_FF810338 \n"
"    LDR     R7, [R4, #8] \n"
"    LDR     R8, =0x1B6 \n"
"    ADD     R6, R4, #0x38 \n"
"    LDR     R5, [R4, #0xC] \n"
//hook start
"    MOV R0, R4\n"
"    BL filewrite_main_hook\n"
//hook end
"    MOV     R0, R6 \n"
"    MOV     R1, R7 \n"
"    MOV     R2, R8 \n"
"    BL      fwt_open \n"  // --> Patched. Old value = _Open.
"    LDR     PC, =0xFFA48C60 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FFA48D50_my @ 0xFFA48D50 - 0xFFA48E58, length=67
void __attribute__((naked,noinline)) sub_FFA48D50_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #4 \n"
"    LDREQ   R6, [R4, #0x18] \n"
"    LDREQ   R7, [R4, #0x14] \n"
"    BEQ     loc_FFA48D9C \n"
"    CMP     R0, #5 \n"
"    LDREQ   R6, [R4, #0x20] \n"
"    LDREQ   R7, [R4, #0x1C] \n"
"    BEQ     loc_FFA48D9C \n"
"    CMP     R0, #6 \n"
"    LDREQ   R6, [R4, #0x28] \n"
"    LDREQ   R7, [R4, #0x24] \n"
"    BEQ     loc_FFA48D9C \n"
"    CMP     R0, #7 \n"
"    BNE     loc_FFA48DB0 \n"
"    LDR     R6, [R4, #0x30] \n"
"    LDR     R7, [R4, #0x2C] \n"

"loc_FFA48D9C:\n"
"    CMP     R6, #0 \n"
"    BNE     loc_FFA48DC0 \n"

"loc_FFA48DA4:\n"
"    MOV     R1, R4 \n"
"    MOV     R0, #8 \n"
"    B       loc_FFA48E54 \n"

"loc_FFA48DB0:\n"
"    LDR     R1, =0x297 \n"
"    LDR     R0, =0xFFA48A24 /*'dwFWrite.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FFA48DA4 \n"

"loc_FFA48DC0:\n"
"    LDR     R9, =0x9C40 \n"
"    MOV     R5, R6 \n"

"loc_FFA48DC8:\n"
"    LDR     R0, [R4, #4] \n"
"    CMP     R5, #0x1000000 \n"
"    MOVLS   R8, R5 \n"
"    MOVHI   R8, #0x1000000 \n"
"    BIC     R1, R0, #0xFF000000 \n"
"    CMP     R1, #0 \n"
"    BICNE   R0, R0, #0xFF000000 \n"
"    RSBNE   R0, R0, #0x1000000 \n"
"    CMPNE   R8, R0 \n"
"    MOVHI   R8, R0 \n"
"    LDR     R0, [R9] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, R7 \n"
"    BL      fwt_write \n"  // --> Patched. Old value = _Write.
"    LDR     R1, [R4, #4] \n"
"    CMP     R8, R0 \n"
"    ADD     R1, R1, R0 \n"
"    STR     R1, [R4, #4] \n"
"    BEQ     loc_FFA48E28 \n"
"    CMN     R0, #1 \n"
"    LDRNE   R0, =0x9200015 \n"
"    LDREQ   R0, =0x9200005 \n"
"    STR     R0, [R4, #0x10] \n"
"    B       loc_FFA48DA4 \n"

"loc_FFA48E28:\n"
"    SUB     R5, R5, R0 \n"
"    CMP     R5, R6 \n"
"    ADD     R7, R7, R0 \n"
"    LDRCS   R0, =0xFFA48A24 /*'dwFWrite.c'*/ \n"
"    LDRCS   R1, =0x2C2 \n"
"    BLCS    _DebugAssert \n"
"    CMP     R5, #0 \n"
"    BNE     loc_FFA48DC8 \n"
"    LDR     R0, [R4] \n"
"    MOV     R1, R4 \n"
"    ADD     R0, R0, #1 \n"

"loc_FFA48E54:\n"
"    LDMFD   SP!, {R4-R10,LR} \n"
"    B       sub_FFA48708 \n"
);
}

/*************************************************************/
//** sub_FFA487C8_my @ 0xFFA487C8 - 0xFFA487FC, length=14
void __attribute__((naked,noinline)) sub_FFA487C8_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x9C40 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5] \n"
"    SUB     SP, SP, #0x38 \n"
"    CMN     R0, #1 \n"
"    BEQ     sub_FFA48810 \n"
"    LDR     R1, [R4, #8] \n"
"    LDR     R6, =0x9200003 \n"
"    TST     R1, #0x8000 \n"
"    BEQ     loc_FFA487FC \n"
//mod start
"    LDR R3, =current_write_ignored\n"
"    LDR R3, [R3]\n"
"    CMP R3, #0\n"
"    BNE loc_D\n" // jump over the next block
//mod end

"    BL      sub_FF865D78 \n"
"    B       sub_FFA48800 \n"

"loc_FFA487FC:\n"
"loc_D:\n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    LDR     PC, =0xFFA48800 \n"  // Continue in firmware
);
}