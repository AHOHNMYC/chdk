/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x61B0;

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF95ECEC - 0xFF95EE98, length=108
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    SUB     SP, SP, #4 \n"
"    MOV     R4, SP \n"
"    B       loc_FF95EE64 \n"

"loc_FF95ECFC:\n"
"    LDR     R2, [SP] \n"
"    LDR     R3, [R2] \n"
"    MOV     R0, R2 \n"
"    CMP     R3, #0x14 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF95EE38 \n"
"    .long   loc_FF95ED68 \n"
"    .long   loc_FF95ED88 \n"
"    .long   loc_FF95ED9C \n"
"    .long   loc_FF95EDAC \n"
"    .long   loc_FF95EDA4 \n"
"    .long   loc_FF95EDB4 \n"
"    .long   loc_FF95EDBC \n"
"    .long   loc_FF95EDC8 \n"
"    .long   loc_FF95EDD0 \n"
"    .long   loc_FF95EDDC \n"
"    .long   loc_FF95EDE4 \n"
"    .long   loc_FF95EDEC \n"
"    .long   loc_FF95EDF4 \n"
"    .long   loc_FF95EDFC \n"
"    .long   loc_FF95EE04 \n"
"    .long   loc_FF95EE10 \n"
"    .long   loc_FF95EE18 \n"
"    .long   loc_FF95EE20 \n"
"    .long   loc_FF95EE28 \n"
"    .long   loc_FF95EE30 \n"
"    .long   loc_FF95EE4C \n"

"loc_FF95ED68:\n"
"    BL      sub_FF960740 \n"

// only do quick press hack if overrides are active
"    BL      captseq_hack_override_active\n" // returns 1 if tv or sv override in effect
"    STR     R2, [SP,#-4]!\n" // push return value
"    BL      shooting_expo_param_override\n"   // +

"    BL      sub_FF95CA6C \n"
"    LDR     R3, =0x99F00 \n"

"    LDR     R2, [SP], #4\n" // pop override hack
"    CMP     R2, #1\n"     // +
"    MOVEQ   R2, #0\n"     // +
"    STREQ   R2, [R3, #0x24]\n"  // fixes overrides behavior at short shutter press
"    LDRNE   R2, [R3, #0x24]\n" // modified NE
"    CMPNE   R2, #0\n"         // modified NE

//"  LDR     R2, [R3, #0x24] \n"  // above patch makes these lines redundant
//"  CMP     R2, #0 \n"
"    BEQ     loc_FF95EE48 \n"
"    BL      sub_FF95E948_my \n"  // --> Patched. Old value = 0xFF95E948.
"    B       loc_FF95EE48 \n"

"loc_FF95ED88:\n"
"    BL      sub_FF95E864_my \n"  // --> Patched. Old value = 0xFF95E864.

"loc_FF95ED8C:\n"
"    LDR     R2, =0x99F00 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2, #0x24] \n"
"    B       loc_FF95EE48 \n"

"loc_FF95ED9C:\n"
"    BL      sub_FF960AD0 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDA4:\n"
"    BL      sub_FF95F938 \n"
"    B       loc_FF95ED8C \n"

"loc_FF95EDAC:\n"
"    BL      sub_FF95FCD4 \n"
"    B       loc_FF95ED8C \n"

"loc_FF95EDB4:\n"
"    BL      sub_FF95FCE4 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDBC:\n"
"    BL      sub_FF960824 \n"
"    BL      sub_FF95CA6C \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDC8:\n"
"    BL      sub_FF95EA1C \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDD0:\n"
"    BL      sub_FF96088C \n"
"    BL      sub_FF95CA6C \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDDC:\n"
"    BL      sub_FF95FCD4 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDE4:\n"
"    BL      sub_FF961024 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDEC:\n"
"    BL      sub_FF961368 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDF4:\n"
"    BL      sub_FF9613EC \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EDFC:\n"
"    BL      sub_FF9614DC \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE04:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF9615A4 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE10:\n"
"    BL      sub_FF961710 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE18:\n"
"    BL      sub_FF9617A4 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE20:\n"
"    BL      sub_FF961860 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE28:\n"
"    BL      sub_FF96194C \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE30:\n"
"    BL      sub_FF9619A0 \n"
"    B       loc_FF95EE48 \n"

"loc_FF95EE38:\n"
"    MOV     R1, #0x36C \n"
"    LDR     R0, =0xFF95E5F0 \n"
"    ADD     R1, R1, #1 \n"
"    BL      _DebugAssert \n"

"loc_FF95EE48:\n"
"    LDR     R2, [SP] \n"

"loc_FF95EE4C:\n"
"    LDR     R3, =0x6F274 \n"
"    LDR     R1, [R2, #4] \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FD6C /*_SetEventFlag*/ \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF95E66C \n"

"loc_FF95EE64:\n"
"    LDR     R3, =0x6F278 \n"
"    MOV     R1, R4 \n"
"    LDR     R0, [R3] \n"
"    MOV     R2, #0 \n"
"    BL      sub_FF820484 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF95ECFC \n"
"    MOV     R1, #0x2A4 \n"
"    LDR     R0, =0xFF95E5F0 \n"
"    ADD     R1, R1, #3 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #4 \n"
"    LDMFD   SP!, {R4,PC} \n"
);
}

/*************************************************************/
//** sub_FF95E948_my @ 0xFF95E948 - 0xFF95EA14, length=52
void __attribute__((naked,noinline)) sub_FF95E948_my() {
asm volatile (
"    STR     LR, [SP, #-4]! \n"
"    LDR     R3, =0x99F00 \n"
"    LDR     R2, [R3, #0x24] \n"
"    CMP     R2, #0 \n"
"    MOV     R0, #0xC \n"
"    BEQ     loc_FF95E96C \n"
"    BL      sub_FF96704C \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF95E994 \n"

"loc_FF95E96C:\n"
"    BL      sub_FF99FE3C \n"
"    BL      sub_FF824AE0 \n"
"    LDR     R3, =0x99E40 \n"
"    STR     R0, [R3, #4] \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF962490 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF961D24_my \n"  // --> Patched. Old value = 0xFF961D24.
"    BL      capt_seq_hook_raw_here\n"   // +
"    TST     R0, #1 \n"
"    LDREQ   PC, [SP], #4 \n"

"loc_FF95E994:\n"
"    LDR     R3, =0x619C \n"
"    MOV     R2, #1 \n"
"    STR     R2, [R3] \n"
"    LDR     PC, [SP], #4 \n"

"loc_FF95E9DC:\n"
"    MOV     R0, #0 \n"
"    LDR     PC, [SP], #4 \n"

"loc_FF95EA10:\n"
"    MOV     R0, #0 \n"
"    LDR     PC, [SP], #4 \n"
);
}

/*************************************************************/
//** sub_FF95E864_my @ 0xFF95E864 - 0xFF95E938, length=54
void __attribute__((naked,noinline)) sub_FF95E864_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    BL      sub_FF96702C \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF95E87C \n"
"    BL      sub_FF967038 \n"

"loc_FF95E87C:\n"
"    LDR     R3, =0x99F00 \n"
"    LDR     R2, [R3, #0x24] \n"
"    CMP     R2, #0 \n"
"    BNE     loc_FF95E8B0 \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF96704C \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF95E8B0 \n"
"    MOV     R0, #1 \n"

"loc_FF95E8A0:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF95CF4C \n"

"loc_FF95E8B0:\n"
"    LDR     R5, =0x99F00 \n"
"    LDR     R3, [R5, #0x24] \n"
"    CMP     R3, #0 \n"
"    BNE     loc_FF95E8CC \n"
"    MOV     R0, #2 \n"
"    BL      sub_FFAB8A88 \n"
"    LDR     R3, [R5, #0x24] \n"

"loc_FF95E8CC:\n"
"    CMP     R3, #0 \n"
"    BNE     loc_FF95E914 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF960AE0 \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF95E8A0 \n"
"    BL      sub_FF99FE3C \n"
"    BL      sub_FF824AE0 \n"
"    LDR     R2, =0x99E44 \n"
"    ADD     R3, R4, R4, LSL#1 \n"
"    STR     R0, [R2, R3, LSL#5] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF962490 \n"
"    BL      sub_FF960FE4 \n"
"    BL      sub_FF960F80 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF961D24_my \n"  // --> Patched. Old value = 0xFF961D24.
"    BL      capt_seq_hook_raw_here\n"   // +
"    B       loc_FF95E928 \n"

"loc_FF95E914:\n"
"    LDR     R3, =0x619C \n"
"    LDR     R2, [R3] \n"
"    CMP     R2, #0 \n"
"    MOVNE   R0, #0x1D \n"
"    MOVEQ   R0, #0 \n"

"loc_FF95E928:\n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF95CF4C \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF961F1C \n"
);
}

/*************************************************************/
//** sub_FF961D24_my @ 0xFF961D24 - 0xFF961D50, length=12
void __attribute__((naked,noinline)) sub_FF961D24_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R3, =0x6F2EC \n"
"    LDR     R5, =0x61AC \n"
"    SUB     SP, SP, #4 \n"
"    MVN     R1, #0 \n"
"    STR     R0, [R5] \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF08 /*_ClearEventFlag*/ \n"
"    LDR     R3, =0x99F00 \n"
"    LDR     R0, [R3, #0x7C] \n"
"    BL      sub_FF89E02C \n"
"    BL      sub_FF961C78 \n"
"    BL      wait_until_remote_button_is_released\n"
"    BL      capt_seq_hook_set_nr\n"
"    LDR     PC, =0xFF961D54 \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF9064D0 - 0xFF906910, length=273
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x14 \n"
"    MOV     R7, SP \n"
"    B       loc_FF9068CC \n"

"loc_FF9064E0:\n"
"    CMP     R2, #0x1F \n"
"    BNE     loc_FF9064F8 \n"
"    LDR     R0, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF906558 \n"

"loc_FF9064F8:\n"
"    CMP     R2, #0x1A \n"
"    BNE     loc_FF90650C \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF906400 \n"
"    B       loc_FF906548 \n"

"loc_FF90650C:\n"
"    CMP     R2, #0x1B \n"
"    BNE     loc_FF906520 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF90643C \n"
"    B       loc_FF906548 \n"

"loc_FF906520:\n"
"    SUB     R3, R2, #0x1C \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF906538 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF906478 \n"
"    B       loc_FF906548 \n"

"loc_FF906538:\n"
"    CMP     R2, #0x1E \n"
"    BNE     loc_FF906564 \n"
"    BL      sub_FF8B1030 \n"
"    BL      sub_FF8B2E20 \n"

"loc_FF906548:\n"
"    LDR     R3, [SP] \n"
"    LDR     R0, [R3, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"

"loc_FF906558:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9041C0 \n"
"    B       loc_FF9068CC \n"

"loc_FF906564:\n"
"    CMP     R2, #0xD \n"
"    MOV     R8, #1 \n"
"    BNE     loc_FF9065D4 \n"
"    LDR     R1, [R12, #0x40] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#1 \n"
"    ADD     R6, SP, #0xC \n"
"    SUB     R1, R1, #2 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF905690 \n"
"    LDR     R3, [SP] \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x50] \n"
"    ADD     R0, R3, #4 \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF905814 \n"
"    LDR     R3, [SP] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x58] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x54] \n"
"    B       loc_FF90687C \n"

"loc_FF9065D4:\n"
"    SUB     R3, R2, #0xE \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF906690 \n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R5, SP, #4 \n"
"    MOV     R0, R12 \n"
"    MOV     R1, R6 \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF905890 \n"
"    MOV     R4, R0 \n"
"    CMP     R4, #5 \n"
"    CMPNE   R4, #1 \n"
"    BNE     loc_FF906628 \n"
"    LDR     R12, [SP] \n"
"    MOV     R0, R5 \n"
"    LDR     R1, [R12, #0x40] \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF906660 \n"

"loc_FF906628:\n"
"    CMP     R4, #6 \n"
"    CMPNE   R4, #2 \n"
"    BNE     loc_FF906670 \n"
"    LDR     R12, [SP] \n"
"    MOV     R0, R5 \n"
"    MOV     R1, R8 \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    MOV     R1, R6 \n"
"    LDR     R0, [SP] \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF90623C \n"

"loc_FF906660:\n"
"    MOV     R1, R4 \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9063E0 \n"
"    B       loc_FF90687C \n"

"loc_FF906670:\n"
"    LDR     R12, [SP] \n"
"    MOV     R2, R4 \n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x40] \n"
"    LDR     R3, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"
"    B       loc_FF90687C \n"

"loc_FF906690:\n"
"    SUB     R3, R2, #0x17 \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF9066E8 \n"
"    LDR     R1, [R12, #0x40] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R12, R1, LSL#1 \n"
"    ADD     R6, SP, #0xC \n"
"    SUB     R1, R1, #2 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9051C4 \n"
"    LDR     R3, [SP] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x40] \n"
"    LDR     R2, [R3, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x4C] \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF905394 \n"
"    B       loc_FF90687C \n"

"loc_FF9066E8:\n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R1, R12, #4 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R12, [SP] \n"
"    LDR     R3, [R12] \n"
"    MOV     R2, R12 \n"
"    CMP     R3, #0x19 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF906868 \n"
"    .long   loc_FF90677C \n"
"    .long   loc_FF906788 \n"
"    .long   loc_FF906794 \n"
"    .long   loc_FF906794 \n"
"    .long   loc_FF90677C \n"
"    .long   loc_FF906788 \n"
"    .long   loc_FF906794 \n"
"    .long   loc_FF906794 \n"
"    .long   loc_FF9067B8 \n"
"    .long   loc_FF9067B8 \n"
"    .long   loc_FF90683C \n"
"    .long   loc_FF906848 \n"
"    .long   loc_FF906858 \n"
"    .long   loc_FF906868 \n"
"    .long   loc_FF906868 \n"
"    .long   loc_FF906868 \n"
"    .long   loc_FF9067A0 \n"
"    .long   loc_FF9067AC \n"
"    .long   loc_FF9067C8 \n"
"    .long   loc_FF9067D4 \n"
"    .long   loc_FF9067FC \n"
"    .long   loc_FF906824 \n"
"    .long   loc_FF906824 \n"
"    .long   loc_FF906868 \n"
"    .long   loc_FF906868 \n"
"    .long   loc_FF906830 \n"

"loc_FF90677C:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF904764 \n"
"    B       loc_FF906864 \n"

"loc_FF906788:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9048A0 \n"
"    B       loc_FF906864 \n"

"loc_FF906794:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9049D0 \n"
"    B       loc_FF906864 \n"

"loc_FF9067A0:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF904BA4 \n"
"    B       loc_FF906864 \n"

"loc_FF9067AC:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF904CAC \n"
"    B       loc_FF906864 \n"

"loc_FF9067B8:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF904D70_my \n"  // --> Patched. Old value = 0xFF904D70.
"    MOV     R8, #0 \n"
"    B       loc_FF906864 \n"

"loc_FF9067C8:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF904E30 \n"
"    B       loc_FF906864 \n"

"loc_FF9067D4:\n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #4] \n"
"    LDR     R3, =0x4A344 \n"
"    STRH    R2, [SP, #0xC] \n"
"    LDRH    R1, [R3, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R3, [R3, #2] \n"
"    STRH    R3, [SP, #0xE] \n"
"    BL      sub_FF904FB8 \n"
"    B       loc_FF906864 \n"

"loc_FF9067FC:\n"
"    LDR     R3, =0x4A344 \n"
"    LDRH    R1, [R3] \n"
"    STRH    R1, [SP, #0xC] \n"
"    MOV     R0, R2 \n"
"    LDRH    R2, [R2, #6] \n"
"    STRH    R2, [SP, #0xE] \n"
"    LDRH    R3, [R3, #4] \n"
"    STRH    R3, [SP, #0x10] \n"
"    BL      sub_FF90504C \n"
"    B       loc_FF906864 \n"

"loc_FF906824:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9050CC \n"
"    B       loc_FF906864 \n"

"loc_FF906830:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF905424 \n"
"    B       loc_FF906864 \n"

"loc_FF90683C:\n"
"    MOV     R0, R2 \n"
"    BL      sub_FF9054F8 \n"
"    B       loc_FF906864 \n"

"loc_FF906848:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF9055E4 \n"
"    B       loc_FF906864 \n"

"loc_FF906858:\n"
"    MOV     R0, R2 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF9055E4 \n"

"loc_FF906864:\n"
"    LDR     R12, [SP] \n"

"loc_FF906868:\n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x40] \n"
"    LDR     R2, [R12, #0x50] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x4C] \n"

"loc_FF90687C:\n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF9068A4 \n"
"    LDR     R1, [SP] \n"
"    LDR     R3, [R1, #0x40] \n"
"    ADD     R3, R3, R3, LSL#1 \n"
"    ADD     R1, R1, R3, LSL#1 \n"
"    MOV     R0, R6 \n"
"    SUB     R1, R1, #2 \n"
"    BL      sub_FF9045D4 \n"
"    B       loc_FF9068C4 \n"

"loc_FF9068A4:\n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF904578 \n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF904690 \n"

"loc_FF9068C4:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF9041C0 \n"

"loc_FF9068CC:\n"
"    LDR     R3, =0x4A33C \n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, R7 \n"
"    BL      sub_FF820484 /*_ReceiveMessageQueue*/ \n"
"    LDR     R12, [SP] \n"
"    LDR     R2, [R12] \n"
"    CMP     R2, #0x20 \n"
"    BNE     loc_FF9064E0 \n"
"    MOV     R0, R12 \n"
"    BL      sub_FF9041C0 \n"
"    LDR     R3, =0x4A338 \n"
"    MOV     R1, #1 \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FD6C /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x14 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF904D70_my @ 0xFF904D70 - 0xFF904E20, length=45
void __attribute__((naked,noinline)) sub_FF904D70_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R3, =0x4A338 \n"
"    MOV     R4, R0 \n"
"    MOV     R1, #0xE \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF08 /*_ClearEventFlag*/ \n"
"    MOV     R1, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FF90429C \n"
"    MOV     R5, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF904410 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF9044AC \n"
"    LDR     R3, [R4] \n"
"    CMP     R3, #9 \n"
"    MOVEQ   R5, #0 \n"
"    CMP     R5, #1 \n"
"    LDR     R1, =0xFF9041F4 \n"
"    MOV     R2, #2 \n"
"    BNE     loc_FF904DDC \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FFAAC280 \n"
"    LDR     R2, =0x4A364 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2] \n"
"    B       loc_FF904DE0 \n"

"loc_FF904DDC:\n"
"    BL      sub_FF904548 \n"

"loc_FF904DE0:\n"
"    STRH    R0, [R4, #4] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8B0CB8_my \n"  // --> Patched. Old value = 0xFF8B0CB8.
"    LDRSH   R0, [R4, #8] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF8B29E0 \n"
"    MOV     R1, #0 \n"
"    ADD     R0, R4, #8 \n"
"    BL      sub_FF8B2AA0 \n"
"    CMP     R5, #1 \n"
"    MOV     R1, #2 \n"
"    MOV     R2, #0 \n"
"    LDMNEFD SP!, {R4,R5,PC} \n"
"    LDR     R3, =0x4A338 \n"
"    LDR     R0, [R3] \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF81FD5C /*_WaitForAllEventFlag*/ \n"
);
}

/*************************************************************/
//** sub_FF8B0CB8_my @ 0xFF8B0CB8 - 0xFF8B0D14, length=24
void __attribute__((naked,noinline)) sub_FF8B0CB8_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R3, =0x531C \n"
"    LDR     R2, [R3] \n"
"    MOV     R1, #0x114 \n"
"    MOV     R3, R0, LSL#16 \n"
"    CMP     R2, #1 \n"
"    ADD     R1, R1, #1 \n"
"    LDR     R0, =0xFF8B0734 \n"
"    MOV     R4, R3, ASR#16 \n"
"    BEQ     loc_FF8B0CE4 \n"
"    BL      _DebugAssert \n"

"loc_FF8B0CE4:\n"
"    MOV     R1, #0x118 \n"
"    CMN     R4, #0xC00 \n"
"    LDR     R3, =0x3D19E \n"
"    LDR     R0, =0xFF8B0734 \n"
"    ADD     R1, R1, #3 \n"
"    LDREQSH R4, [R3] \n"
"    LDRNE   R3, =0x3D19E \n"
"    CMN     R4, #0xC00 \n"
"    STRH    R4, [R3] \n"
"    BNE     loc_FF8B0D10 \n"
"    BL      _DebugAssert \n"

"loc_FF8B0D10:\n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    LDR     PC, =0xFF8B0D18 \n"  // Continue in firmware
);
}
