/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1          // see stubs_entry.S
#define NR_AUTO (0)                 // have to explictly reset value back to 0 to enable auto
#define PAUSE_FOR_FILE_COUNTER 100  // Enable delay in capt_seq_hook_raw_here to ensure file counter is updated

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF87AA8C - 0xFF87AD20, length=166
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R9,LR} \n"
"    LDR     R5, =0x3A27C \n"
"    LDR     R7, =0x2B90 \n"
"    MOV     R6, #0 \n"

"loc_FF87AA9C:\n"
"    LDR     R0, [R7, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_FF839B84 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF87AAC8 \n"
"    LDR     R1, =0x476 \n"
"    LDR     R0, =0xFF87A62C \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R9,PC} \n"

"loc_FF87AAC8:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x20 \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF87ACE8 \n"
"    B       loc_FF87AB5C \n"
"    B       loc_FF87AB74 \n"
"    B       loc_FF87ABA0 \n"
"    B       loc_FF87ABB4 \n"
"    B       loc_FF87ABAC \n"
"    B       loc_FF87ABC0 \n"
"    B       loc_FF87ABC8 \n"
"    B       loc_FF87ABD0 \n"
"    B       loc_FF87ABEC \n"
"    B       loc_FF87AC14 \n"
"    B       loc_FF87ABF8 \n"
"    B       loc_FF87AC04 \n"
"    B       loc_FF87AC0C \n"
"    B       loc_FF87AC1C \n"
"    B       loc_FF87AC24 \n"
"    B       loc_FF87AC2C \n"
"    B       loc_FF87AC34 \n"
"    B       loc_FF87AC3C \n"
"    B       loc_FF87AC48 \n"
"    B       loc_FF87AC50 \n"
"    B       loc_FF87AC58 \n"
"    B       loc_FF87AC60 \n"
"    B       loc_FF87AC68 \n"
"    B       loc_FF87AC74 \n"
"    B       loc_FF87AC7C \n"
"    B       loc_FF87AC84 \n"
"    B       loc_FF87AC8C \n"
"    B       loc_FF87AC94 \n"
"    B       loc_FF87AC9C \n"
"    B       loc_FF87ACA4 \n"
"    B       loc_FF87ACB0 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AB5C:\n"
"    BL      shooting_expo_iso_override\n"      // added
"    BL      sub_FF87B26C \n"
"    BL      shooting_expo_param_override\n"    // added
"    BL      sub_FF8786B8 \n"
"    LDR     R0, [R5, #0x28] \n"
"    CMP     R0, #0 \n"
"    BLNE    sub_FF96E9FC \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AB74:\n"
"    LDR     R8, [R0, #0xC] \n"
"    MOV     R0, R8 \n"
"    BL      sub_FF96E91C_my \n"  // --> Patched. Old value = 0xFF96E91C.
"    BL      capt_seq_hook_raw_here \n"         // added
"    MOV     R4, R0 \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF878CAC \n"
"    TST     R4, #1 \n"
"    MOVEQ   R0, R8 \n"
"    BLEQ    sub_FF96E3BC \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABA0:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF87B50C \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABAC:\n"
"    BL      sub_FF87AF00 \n"
"    B       loc_FF87ABB8 \n"

"loc_FF87ABB4:\n"
"    BL      sub_FF87B24C \n"

"loc_FF87ABB8:\n"
"    STR     R6, [R5, #0x28] \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABC0:\n"
"    BL      sub_FF87B254 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABC8:\n"
"    BL      sub_FF87B420 \n"
"    B       loc_FF87ABF0 \n"

"loc_FF87ABD0:\n"
"    LDR     R4, [R0, #0xC] \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF96EA50 \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #9 \n"
"    BL      sub_FF878CAC \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABEC:\n"
"    BL      sub_FF87B484 \n"

"loc_FF87ABF0:\n"
"    BL      sub_FF8786B8 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ABF8:\n"
"    LDR     R0, [R5, #0x58] \n"
"    BL      sub_FF87B950 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC04:\n"
"    BL      sub_FF87BCC8 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC0C:\n"
"    BL      sub_FF87BD2C \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC14:\n"
"    BL      sub_FF87B24C \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC1C:\n"
"    BL      sub_FF96D7C4 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC24:\n"
"    BL      sub_FF96D9D0 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC2C:\n"
"    BL      sub_FF96DA74 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC34:\n"
"    BL      sub_FF96DB44 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC3C:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF96DD4C \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC48:\n"
"    BL      sub_FF96DEC4 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC50:\n"
"    BL      sub_FF96DF68 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC58:\n"
"    BL      sub_FF96E048 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC60:\n"
"    BL      sub_FF87B678 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC68:\n"
"    BL      sub_FF87B6A4 \n"
"    BL      sub_FF837A54 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC74:\n"
"    BL      sub_FF96DC08 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC7C:\n"
"    BL      sub_FF96DC48 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC84:\n"
"    BL      sub_FF87E034 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC8C:\n"
"    BL      sub_FF87E0A4 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC94:\n"
"    BL      sub_FF96E180 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87AC9C:\n"
"    BL      sub_FF96E1E4 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ACA4:\n"
"    BL      sub_FF87E100 \n"
"    BL      sub_FF87E0C0 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ACB0:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF96F1C8 \n"
"    MOV     R0, #1 \n"
"    BL      sub_FF96F2F0 \n"
"    LDRH    R0, [R5, #0x98] \n"
"    CMP     R0, #4 \n"
"    LDRNEH  R0, [R5] \n"
"    SUBNE   R1, R0, #0x4200 \n"
"    SUBNES  R1, R1, #0x2A \n"
"    BNE     loc_FF87ACF4 \n"
"    BL      sub_FF87E0A4 \n"
"    BL      sub_FF87E6A4 \n"
"    BL      sub_FF87E524 \n"
"    B       loc_FF87ACF4 \n"

"loc_FF87ACE8:\n"
"    LDR     R1, =0x5D7 \n"
"    LDR     R0, =0xFF87A62C \n"
"    BL      _DebugAssert \n"

"loc_FF87ACF4:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R7] \n"
"    BL      sub_FF884CD0 /*_SetEventFlag*/ \n"
"    LDR     R4, [SP] \n"
"    LDR     R0, [R4, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R0, =0xFF87A62C \n"
"    MOVEQ   R1, #0x118 \n"
"    BLEQ    _DebugAssert \n"
"    STR     R6, [R4, #8] \n"
"    B       loc_FF87AA9C \n"
);
}

/*************************************************************/
//** sub_FF96E91C_my @ 0xFF96E91C - 0xFF96E9F8, length=56
void __attribute__((naked,noinline)) sub_FF96E91C_my() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    LDR     R6, =0x3A27C \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R6, #0x28] \n"
"    MOV     R4, #0 \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF96E94C \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF87FBB8 \n"
"    TST     R0, #1 \n"
"    MOVNE   R0, #1 \n"
"    BNE     loc_FF96E9F8 \n"

"loc_FF96E94C:\n"
"    BL      sub_FF87B25C \n"
"    LDR     R0, [R6, #0x28] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF96E9E0 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF96E2D0 \n"
"    TST     R0, #1 \n"
"    BNE     loc_FF96E9F8 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF96E644 \n"
"    BL      sub_FF96EFA4 \n"
"    MOV     R4, #1 \n"
"    MOV     R0, #2 \n"
"    BL      sub_FF881378 \n"
"    BL      wait_until_remote_button_is_released\n" // added
"    BL      capt_seq_hook_set_nr\n"                 // added
"    LDRH    R0, [R6] \n"
"    SUB     R1, R0, #0x8200 \n"
"    SUBS    R1, R1, #0x2D \n"
"    BNE     loc_FF96E9D0 \n"
"    MOV     R2, #2 \n"
"    MOV     R1, SP \n"
"    ADD     R0, R2, #0x15C \n"
"    STR     R4, [SP] \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    MOVNE   R1, #0xBC \n"
"    LDRNE   R0, =0xFF96EAA8 \n"
"    BLNE    _DebugAssert \n"
"    LDRH    R0, [SP] \n"
"    CMP     R0, #1 \n"
"    STRHI   R4, [R5, #0xD4] \n"
"    BHI     loc_FF96E9F0 \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R5, #0xD4] \n"

"loc_FF96E9D0:\n"
"    MOV     R0, R5 \n"
"    BL      sub_FFAB5158 \n"
"    MOV     R4, R0 \n"
"    B       loc_FF96E9F4 \n"

"loc_FF96E9E0:\n"
"    LDR     R0, =0x6ADC \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF96E9F4 \n"

"loc_FF96E9F0:\n"
"    MOV     R4, #0x1D \n"

"loc_FF96E9F4:\n"
"    MOV     R0, R4 \n"

"loc_FF96E9F8:\n"
"    LDMFD   SP!, {R3-R7,PC} \n"
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF8BE348 - 0xFF8BEA0C, length=434
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R9,LR} \n"
"    SUB     SP, SP, #0x24 \n"
"    LDR     R6, =0x3EB0 \n"
"    LDR     R7, =0xBB8 \n"
"    LDR     R4, =0x55774 \n"
"    MOV     R0, #0 \n"
"    ADD     R5, SP, #0x14 \n"
"    STR     R0, [SP, #0x10] \n"

"loc_FF8BE368:\n"
"    LDR     R0, [R6, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x20 \n"
"    BL      sub_FF839B84 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [SP, #0x10] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8BE3B4 \n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    CMPNE   R0, #0x16 \n"
"    CMPNE   R0, #0x17 \n"
"    BEQ     loc_FF8BE514 \n"
"    CMP     R0, #0x29 \n"
"    BEQ     loc_FF8BE49C \n"
"    ADD     R1, SP, #0x10 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8BE2F8 \n"

"loc_FF8BE3B4:\n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2F \n"
"    BNE     loc_FF8BE3E0 \n"
"    BL      sub_FF8BF7E4 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF884CD0 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x24 \n"
"    LDMFD   SP!, {R4-R9,PC} \n"

"loc_FF8BE3E0:\n"
"    CMP     R1, #0x2E \n"
"    BNE     loc_FF8BE3FC \n"
"    LDR     R2, [R0, #0x8C]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FF8BEA04 \n"

"loc_FF8BE3FC:\n"
"    CMP     R1, #0x27 \n"
"    BNE     loc_FF8BE44C \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF884D04 /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8B9EDC \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF9613D0 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF884C10 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x174E \n"
"    BNE     loc_FF8BE508 \n"

"loc_FF8BE438:\n"
"    LDR     R1, [SP, #0x20] \n"
"    LDR     R0, [R1, #0x90] \n"
"    LDR     R1, [R1, #0x8C] \n"
"    BLX     R1 \n"
"    B       loc_FF8BEA04 \n"

"loc_FF8BE44C:\n"
"    CMP     R1, #0x28 \n"
"    BNE     loc_FF8BE494 \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8BE2F8 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF884D04 /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8B9EEC \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF961670 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF884C10 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8BE438 \n"
"    LDR     R1, =0x1758 \n"
"    B       loc_FF8BE508 \n"

"loc_FF8BE494:\n"
"    CMP     R1, #0x29 \n"
"    BNE     loc_FF8BE4AC \n"

"loc_FF8BE49C:\n"
"    LDR     R0, [SP, #0x20] \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8BE2F8 \n"
"    B       loc_FF8BE438 \n"

"loc_FF8BE4AC:\n"
"    CMP     R1, #0x2C \n"
"    BNE     loc_FF8BE4C4 \n"
"    BL      sub_FF8AC30C \n"
"    BL      sub_FF8ACF88 \n"
"    BL      sub_FF8ACB00 \n"
"    B       loc_FF8BE438 \n"

"loc_FF8BE4C4:\n"
"    CMP     R1, #0x2D \n"
"    BNE     loc_FF8BE514 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R1, #4 \n"
"    BL      sub_FF884D04 /*_ClearEventFlag*/ \n"
"    LDR     R1, =0xFF8B9F0C \n"
"    LDR     R0, =0xFFFFF400 \n"
"    MOV     R2, #4 \n"
"    BL      sub_FF8ABD80 \n"
"    BL      sub_FF8AC010 \n"
"    LDR     R0, [R6, #0x1C] \n"
"    MOV     R2, R7 \n"
"    MOV     R1, #4 \n"
"    BL      sub_FF884B2C /*_WaitForAnyEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8BE438 \n"
"    MOV     R1, #0x1780 \n"

"loc_FF8BE508:\n"
"    LDR     R0, =0xFF8BA600 \n"
"    BL      _DebugAssert \n"
"    B       loc_FF8BE438 \n"

"loc_FF8BE514:\n"
"    LDR     R0, [SP, #0x20] \n"
"    MOV     R8, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x12 \n"
"    CMPNE   R1, #0x13 \n"
"    BNE     loc_FF8BE5DC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    BL      sub_FF8BC968 \n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x8C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x20] \n"
"    BL      sub_FF8BFB80 \n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R2, [R0, #0x98] \n"
"    LDR     R3, [R0, #0x94] \n"
"    B       loc_FF8BE8F0 \n"

"loc_FF8BE5DC:\n"
"    CMP     R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    CMPNE   R1, #0x16 \n"
"    CMPNE   R1, #0x17 \n"
"    BNE     loc_FF8BE694 \n"
"    ADD     R3, SP, #0x10 \n"
"    ADD     R2, SP, #4 \n"
"    ADD     R1, SP, #0x14 \n"
"    BL      sub_FF8BCBD0 \n"
"    CMP     R0, #1 \n"
"    MOV     R9, R0 \n"
"    CMPNE   R9, #5 \n"
"    BNE     loc_FF8BE630 \n"
"    LDR     R0, [SP, #0x20] \n"
"    MOV     R2, R9 \n"
"    LDR     R1, [R0, #0x7C]! \n"
"    LDR     R12, [R0, #0x10]! \n"
"    LDR     R3, [R0, #4] \n"
"    ADD     R0, SP, #4 \n"
"    BLX     R12 \n"
"    B       loc_FF8BE668 \n"

"loc_FF8BE630:\n"
"    LDR     R0, [SP, #0x20] \n"
"    CMP     R9, #2 \n"
"    LDR     R3, [R0, #0x90] \n"
"    CMPNE   R9, #6 \n"
"    BNE     loc_FF8BE67C \n"
"    LDR     R12, [R0, #0x8C] \n"
"    MOV     R2, R9 \n"
"    MOV     R1, #1 \n"
"    ADD     R0, SP, #4 \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x20] \n"
"    ADD     R2, SP, #4 \n"
"    ADD     R1, SP, #0x14 \n"
"    BL      sub_FF8BE044 \n"

"loc_FF8BE668:\n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R2, [SP, #0x10] \n"
"    MOV     R1, R9 \n"
"    BL      sub_FF8BE298 \n"
"    B       loc_FF8BE8F8 \n"

"loc_FF8BE67C:\n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R12, [R0, #0x8C] \n"
"    MOV     R2, R9 \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R12 \n"
"    B       loc_FF8BE8F8 \n"

"loc_FF8BE694:\n"
"    CMP     R1, #0x23 \n"
"    CMPNE   R1, #0x24 \n"
"    BNE     loc_FF8BE6E0 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    BL      sub_FF8BB9E4 \n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x8C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x20] \n"
"    BL      sub_FF8BBE20 \n"
"    B       loc_FF8BE8F8 \n"

"loc_FF8BE6E0:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R9} \n"
"    STMIA   R5, {R2,R3,R9} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x27 \n"
"    ADDCC   PC, PC, R1, LSL#2 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE798 \n"
"    B       loc_FF8BE798 \n"
"    B       loc_FF8BE7A0 \n"
"    B       loc_FF8BE7A8 \n"
"    B       loc_FF8BE7A8 \n"
"    B       loc_FF8BE7A8 \n"
"    B       loc_FF8BE798 \n"
"    B       loc_FF8BE7A0 \n"
"    B       loc_FF8BE7A8 \n"
"    B       loc_FF8BE7A8 \n"
"    B       loc_FF8BE7C0 \n"
"    B       loc_FF8BE7C0 \n"
"    B       loc_FF8BE8CC \n"
"    B       loc_FF8BE8D4 \n"
"    B       loc_FF8BE8D4 \n"
"    B       loc_FF8BE8D4 \n"
"    B       loc_FF8BE8D4 \n"
"    B       loc_FF8BE8DC \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE7B0 \n"
"    B       loc_FF8BE7B8 \n"
"    B       loc_FF8BE7B8 \n"
"    B       loc_FF8BE7CC \n"
"    B       loc_FF8BE7CC \n"
"    B       loc_FF8BE7D4 \n"
"    B       loc_FF8BE80C \n"
"    B       loc_FF8BE844 \n"
"    B       loc_FF8BE87C \n"
"    B       loc_FF8BE8B4 \n"
"    B       loc_FF8BE8B4 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8E0 \n"
"    B       loc_FF8BE8BC \n"
"    B       loc_FF8BE8C4 \n"

"loc_FF8BE798:\n"
"    BL      sub_FF8BA484 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7A0:\n"
"    BL      sub_FF8BA728 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7A8:\n"
"    BL      sub_FF8BA950 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7B0:\n"
"    BL      sub_FF8BAC28 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7B8:\n"
"    BL      sub_FF8BAE40 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7C0:\n"
"    BL      sub_FF8BB1C0_my \n"  // --> Patched. Old value = 0xFF8BB1C0.
"    MOV     R8, #0 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7CC:\n"
"    BL      sub_FF8BB308 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE7D4:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x18] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    BL      sub_FF8BF878 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE80C:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x18] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R4, #8] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    BL      sub_FF8BF980 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE844:\n"
"    LDRH    R1, [R4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R0, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x18] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R4, #8] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    BL      sub_FF8BFA34 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE87C:\n"
"    LDRH    R1, [R4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R4, #2] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R4, #4] \n"
"    STRH    R1, [SP, #0x18] \n"
"    LDRH    R1, [R4, #6] \n"
"    STRH    R1, [SP, #0x1A] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x1C] \n"
"    LDRH    R1, [R4, #0xA] \n"
"    STRH    R1, [SP, #0x1E] \n"
"    BL      sub_FF8BFADC \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8B4:\n"
"    BL      sub_FF8BB7D8 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8BC:\n"
"    BL      sub_FF8BBF24 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8C4:\n"
"    BL      sub_FF8BC1CC \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8CC:\n"
"    BL      sub_FF8BC3AC \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8D4:\n"
"    BL      sub_FF8BC5F0 \n"
"    B       loc_FF8BE8E0 \n"

"loc_FF8BE8DC:\n"
"    BL      sub_FF8BC760 \n"

"loc_FF8BE8E0:\n"
"    LDR     R0, [SP, #0x20] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R2, [R0, #0x90] \n"
"    LDR     R3, [R0, #0x8C] \n"

"loc_FF8BE8F0:\n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"

"loc_FF8BE8F8:\n"
"    LDR     R1, [SP, #0x20] \n"
"    LDR     R0, [R1] \n"
"    CMP     R0, #0x10 \n"
"    BEQ     loc_FF8BE930 \n"
"    BGT     loc_FF8BE920 \n"
"    CMP     R0, #1 \n"
"    CMPNE   R0, #4 \n"
"    CMPNE   R0, #0xE \n"
"    BNE     loc_FF8BE940 \n"
"    B       loc_FF8BE930 \n"

"loc_FF8BE920:\n"
"    CMP     R0, #0x13 \n"
"    CMPNE   R0, #0x17 \n"
"    CMPNE   R0, #0x1A \n"
"    BNE     loc_FF8BE940 \n"

"loc_FF8BE930:\n"
"    LDRH    R0, [R4] \n"
"    STRH    R0, [SP, #0x14] \n"
"    LDRH    R0, [R4, #8] \n"
"    STRH    R0, [SP, #0x1C] \n"

"loc_FF8BE940:\n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF8BE98C \n"
"    LDR     R0, [R1, #0x7C] \n"
"    MOV     R2, #0xC \n"
"    ADD     R0, R0, R0, LSL#1 \n"
"    ADD     R0, R1, R0, LSL#2 \n"
"    SUB     R8, R0, #8 \n"
"    LDR     R0, =0x55774 \n"
"    ADD     R1, SP, #0x14 \n"
"    BL      sub_FFB580C8 \n"
"    LDR     R0, =0x55780 \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x14 \n"
"    BL      sub_FFB580C8 \n"
"    LDR     R0, =0x5578C \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R8 \n"
"    BL      sub_FFB580C8 \n"
"    B       loc_FF8BEA04 \n"

"loc_FF8BE98C:\n"
"    LDR     R0, [R1] \n"
"    MOV     R3, #1 \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FF8BE9D0 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8BA264 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #0 \n"
"    STRD    R2, [SP] \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, #0 \n"
"    B       loc_FF8BEA00 \n"

"loc_FF8BE9D0:\n"
"    MOV     R2, #1 \n"
"    STRD    R2, [SP] \n"
"    MOV     R3, R2 \n"
"    MOV     R1, R2 \n"
"    MOV     R0, R2 \n"
"    BL      sub_FF8BA264 \n"
"    MOV     R3, #1 \n"
"    MOV     R2, R3 \n"
"    MOV     R1, R3 \n"
"    MOV     R0, R3 \n"
"    STR     R3, [SP] \n"
"    STR     R3, [SP, #4] \n"

"loc_FF8BEA00:\n"
"    BL      sub_FF8BA3D0 \n"

"loc_FF8BEA04:\n"
"    LDR     R0, [SP, #0x20] \n"
"    BL      sub_FF8BF7E4 \n"
"    B       loc_FF8BE368 \n"
);
}

/*************************************************************/
//** sub_FF8BB1C0_my @ 0xFF8BB1C0 - 0xFF8BB288, length=51
void __attribute__((naked,noinline)) sub_FF8BB1C0_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x3EB0 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_FF884D04 /*_ClearEventFlag*/ \n"
"    MOV     R2, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R1, R2 \n"
"    BL      sub_FF8B9F6C \n"
"    MOV     R5, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8BA0BC \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8BA114 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF8BA16C \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8BA1C4 \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #0xE] \n"
"    BL      sub_FF8BF814 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0x5578C \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R5, #0 \n"
"    MOVEQ   R6, R5 \n"
"    BEQ     loc_FF8BB25C \n"
"    CMP     R5, #1 \n"
"    BNE     loc_FF8BB25C \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF8B9ECC \n"
"    MOV     R2, #2 \n"
"    BL      sub_FF961524 \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FF8BB264 \n"

"loc_FF8BB25C:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FF8BB264:\n"
"    CMP     R6, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FF8BB280 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFF8B9F50 \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FF8BF834 \n"

"loc_FF8BB280:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8AC07C_my \n"  // --> Patched. Old value = 0xFF8AC07C.
"    LDR     PC, =0xFF8BB28C \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF8AC07C_my @ 0xFF8AC07C - 0xFF8AC0E4, length=27
void __attribute__((naked,noinline)) sub_FF8AC07C_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x3B74 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    LDRNE   R1, =0x146 \n"
"    LDRNE   R0, =0xFF8ABEB4 \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    MOVEQ   R1, #0x14C \n"
"    LDREQ   R0, =0xFF8ABEB4 \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    MOV     R4, R0 \n"
//"  BL      _sub_FF8F7D40 \n"  // --> Nullsub call removed.
"    MOV     R0, R4 \n"
"    BL      sub_FF900BC8 \n"
"    TST     R0, #1 \n"
"    LDMEQFD SP!, {R4-R6,PC} \n"
"    LDMFD   SP!, {R4-R6,LR} \n"
"    LDR     R1, =0x151 \n"
"    LDR     R0, =0xFF8ABEB4 \n"
"    B       _DebugAssert \n"
);
}
