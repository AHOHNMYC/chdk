/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define USE_STUBS_NRFLAG 1

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF866BFC - 0xFF866F44, length=211
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R3-R9,LR} \n"
"    LDR     R6, =0x551C \n"
"    LDR     R4, =0x1BBD8 \n"
"    MOV     R9, #1 \n"
"    MOV     R7, #0 \n"

"loc_FF866C10:\n"
"    LDR     R0, [R6, #0x14] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, SP \n"
"    BL      sub_FF827D30 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF866C3C \n"
"    LDR     R1, =0x539 \n"
"    LDR     R0, =0xFF8663C4 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R3-R9,PC} \n"

"loc_FF866C3C:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x24 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF866F0C \n"
"    B       loc_FF866CE4 \n"
"    B       loc_FF866D50 \n"
"    B       loc_FF866D58 \n"
"    B       loc_FF866D70 \n"
"    B       loc_FF866D64 \n"
"    B       loc_FF866D78 \n"
"    B       loc_FF866D80 \n"
"    B       loc_FF866D88 \n"
"    B       loc_FF866DE0 \n"
"    B       loc_FF866E08 \n"
"    B       loc_FF866DEC \n"
"    B       loc_FF866DF8 \n"
"    B       loc_FF866E00 \n"
"    B       loc_FF866E10 \n"
"    B       loc_FF866E18 \n"
"    B       loc_FF866E20 \n"
"    B       loc_FF866E28 \n"
"    B       loc_FF866E30 \n"
"    B       loc_FF866E38 \n"
"    B       loc_FF866E40 \n"
"    B       loc_FF866E48 \n"
"    B       loc_FF866E50 \n"
"    B       loc_FF866E58 \n"
"    B       loc_FF866E60 \n"
"    B       loc_FF866E68 \n"
"    B       loc_FF866E74 \n"
"    B       loc_FF866E7C \n"
"    B       loc_FF866E88 \n"
"    B       loc_FF866E90 \n"
"    B       loc_FF866EC0 \n"
"    B       loc_FF866EC8 \n"
"    B       loc_FF866ED0 \n"
"    B       loc_FF866ED8 \n"
"    B       loc_FF866EE0 \n"
"    B       loc_FF866EE8 \n"
"    B       loc_FF866EF4 \n"
"    B       loc_FF866F18 \n"

"loc_FF866CE4:\n"
"    BL      sub_FF867518 \n"
"    BL      shooting_expo_param_override\n"      // added
"    BL      sub_FF864874 \n"
"    MOV     R0, #0\n"                          // added
"    STR     R0, [R4,#0x24]\n"                  // added, fixes overrides behavior at short shutter press (from S95)
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF866F18 \n"
"    BL      sub_FF866094 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4, #0x24] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF866D2C \n"
"    MOV     R0, #0xC \n"
"    BL      sub_FF86B23C \n"
"    TST     R0, #1 \n"
"    STRNE   R9, [R6, #4] \n"
"    LDRNE   R0, [R5, #8] \n"
"    ORRNE   R0, R0, #0x40000000 \n"
"    STRNE   R0, [R5, #8] \n"
"    BNE     loc_FF866F18 \n"

"loc_FF866D2C:\n"
"    MOV     R0, R5 \n"
"    BL      sub_FF948AF8 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF866474 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF9491D0_my \n"  // --> Patched. Old value = 0xFF9491D0.
"    BL      capt_seq_hook_raw_here\n"
"    TST     R0, #1 \n"
"    STRNE   R9, [R6, #4] \n"
"    B       loc_FF866F18 \n"

"loc_FF866D50:\n"
"    BL      sub_FF8664EC_my \n"  // --> Patched. Old value = 0xFF8664EC.
"    B       loc_FF866D68 \n"

"loc_FF866D58:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF86778C \n"
"    B       loc_FF866F18 \n"

"loc_FF866D64:\n"
"    BL      sub_FF8671E4 \n"

"loc_FF866D68:\n"
"    STR     R7, [R4, #0x24] \n"
"    B       loc_FF866F18 \n"

"loc_FF866D70:\n"
"    BL      sub_FF8674F8 \n"
"    B       loc_FF866D68 \n"

"loc_FF866D78:\n"
"    BL      sub_FF867500 \n"
"    B       loc_FF866F18 \n"

"loc_FF866D80:\n"
"    BL      sub_FF86767C \n"
"    B       loc_FF866DE4 \n"

"loc_FF866D88:\n"
"    LDR     R5, [R0, #0xC] \n"
"    BL      sub_FF867508 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF947B20 \n"
"    TST     R0, #1 \n"
"    MOV     R8, R0 \n"
"    BNE     loc_FF866DC8 \n"
"    BL      sub_FF87795C \n"
"    STR     R0, [R5, #0x18] \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF94908C \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF949498 \n"
"    MOV     R8, R0 \n"
"    LDR     R0, [R5, #0x18] \n"
"    BL      sub_FF877B70 \n"

"loc_FF866DC8:\n"
"    BL      sub_FF8674F8 \n"
"    MOV     R2, R5 \n"
"    MOV     R1, #9 \n"
"    MOV     R0, R8 \n"
"    BL      sub_FF864D30 \n"
"    B       loc_FF866F18 \n"

"loc_FF866DE0:\n"
"    BL      sub_FF86770C \n"

"loc_FF866DE4:\n"
"    BL      sub_FF864874 \n"
"    B       loc_FF866F18 \n"

"loc_FF866DEC:\n"
"    LDR     R0, [R4, #0x54] \n"
"    BL      sub_FF867DA4 \n"
"    B       loc_FF866F18 \n"

"loc_FF866DF8:\n"
"    BL      sub_FF868054 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E00:\n"
"    BL      sub_FF8680E4 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E08:\n"
"    BL      sub_FF8674F8 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E10:\n"
"    BL      sub_FF947D58 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E18:\n"
"    BL      sub_FF947F84 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E20:\n"
"    BL      sub_FF948018 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E28:\n"
"    BL      sub_FF948140 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E30:\n"
"    BL      sub_FF948218 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E38:\n"
"    BL      sub_FF94863C \n"
"    B       loc_FF866F18 \n"

"loc_FF866E40:\n"
"    BL      sub_FF948694 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E48:\n"
"    MOV     R0, #0 \n"
"    B       loc_FF866E6C \n"

"loc_FF866E50:\n"
"    BL      sub_FF94883C \n"
"    B       loc_FF866F18 \n"

"loc_FF866E58:\n"
"    BL      sub_FF9488CC \n"
"    B       loc_FF866F18 \n"

"loc_FF866E60:\n"
"    BL      sub_FF94898C \n"
"    B       loc_FF866F18 \n"

"loc_FF866E68:\n"
"    MOV     R0, #1 \n"

"loc_FF866E6C:\n"
"    BL      sub_FF948704 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E74:\n"
"    BL      sub_FF8679C4 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E7C:\n"
"    BL      sub_FF867A64 \n"
"    BL      sub_FF867040 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E88:\n"
"    BL      sub_FF9484C8 \n"
"    B       loc_FF866F18 \n"

"loc_FF866E90:\n"
"    MOV     R2, #2 \n"
"    ADD     R1, R4, #0x60 \n"
"    MOV     R0, #0x6F \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x61C \n"
"    LDRNE   R0, =0xFF8663C4 /*'SsShootTask.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDRH    R0, [R4, #0x60] \n"
"    CMP     R0, #1 \n"
"    BLEQ    sub_FF9484BC \n"
"    B       loc_FF866F18 \n"

"loc_FF866EC0:\n"
"    BL      sub_FF948590 \n"
"    B       loc_FF866F18 \n"

"loc_FF866EC8:\n"
"    BL      sub_FF866354 \n"
"    B       loc_FF866F18 \n"

"loc_FF866ED0:\n"
"    BL      sub_FF824FB0 \n"
"    B       loc_FF866F18 \n"

"loc_FF866ED8:\n"
"    BL      sub_FF869A4C \n"
"    B       loc_FF866F18 \n"

"loc_FF866EE0:\n"
"    BL      sub_FF869AC0 \n"
"    B       loc_FF866F18 \n"

"loc_FF866EE8:\n"
"    BL      sub_FF869B1C \n"
"    BL      sub_FF869ADC \n"
"    B       loc_FF866F18 \n"

"loc_FF866EF4:\n"
"    MOV     R0, #1 \n"
"    BL      sub_FF949C9C \n"
"    LDRH    R0, [R4, #0x8C] \n"
"    CMP     R0, #3 \n"
"    BLNE    sub_FF869CD8 \n"
"    B       loc_FF866F18 \n"

"loc_FF866F0C:\n"
"    LDR     R1, =0x65E \n"
"    LDR     R0, =0xFF8663C4 /*'SsShootTask.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FF866F18:\n"
"    LDR     R0, [SP] \n"
"    LDR     R1, [R0, #4] \n"
"    LDR     R0, [R6, #0x10] \n"
"    BL      sub_FF86F4F8 /*_SetEventFlag*/ \n"
"    LDR     R5, [SP] \n"
"    LDR     R0, [R5, #8] \n"
"    CMP     R0, #0 \n"
"    LDREQ   R1, =0x11D \n"
"    LDREQ   R0, =0xFF8663C4 /*'SsShootTask.c'*/ \n"
"    BLEQ    _DebugAssert \n"
"    STR     R7, [R5, #8] \n"
"    B       loc_FF866C10 \n"
);
}

/*************************************************************/
//** sub_FF8664EC_my @ 0xFF8664EC - 0xFF8666F4, length=131
void __attribute__((naked,noinline)) sub_FF8664EC_my() {
asm volatile (
"    STMFD   SP!, {R3-R9,LR} \n"
"    LDR     R4, [R0, #0xC] \n"
"    LDR     R5, =0x1BBD8 \n"
"    LDR     R0, [R4, #8] \n"
"    LDR     R6, =0x820A \n"
"    ORR     R0, R0, #1 \n"
"    STR     R0, [R4, #8] \n"
"    LDRH    R0, [R5] \n"
"    LDR     R8, =0x551C \n"
"    MOV     R7, #0 \n"
"    CMP     R0, R6 \n"
"    BEQ     loc_FF866590 \n"
"    LDRH    R0, [R5, #0x92] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF8665F0 \n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF86659C \n"
"    LDRH    R0, [R5, #0x90] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF8665F0 \n"
"    LDRH    R0, [R5, #0x8C] \n"
"    CMP     R0, #2 \n"
"    BNE     loc_FF8665A8 \n"
"    BL      sub_FF867B14 \n"
"    LDRH    R0, [R5] \n"
"    CMP     R0, R6 \n"
"    BEQ     loc_FF866590 \n"
"    LDRH    R0, [R5, #0x92] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF8665F0 \n"
"    LDR     R0, [R4, #0xC] \n"
"    CMP     R0, #1 \n"
"    BLS     loc_FF86659C \n"
"    LDRH    R0, [R5, #0x90] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF8665F0 \n"
"    LDRH    R0, [R5, #0x8C] \n"
"    CMP     R0, #2 \n"
"    BEQ     loc_FF8665D4 \n"
"    B       loc_FF8665A8 \n"

"loc_FF866590:\n"
"    LDRH    R0, [R5, #0x92] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF8665F0 \n"

"loc_FF86659C:\n"
"    LDRH    R0, [R5, #0x90] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF8665F0 \n"

"loc_FF8665A8:\n"
"    LDRH    R0, [R5, #0x8C] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8665F0 \n"
"    LDRH    R0, [R5] \n"
"    CMP     R0, R6 \n"
"    LDRNE   R0, [R4, #0xC] \n"
"    CMPNE   R0, #1 \n"
"    BLS     loc_FF8665F0 \n"
"    LDR     R0, [R4, #0x10] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8665F0 \n"

"loc_FF8665D4:\n"
"    LDR     R3, =0x24D \n"
"    LDR     R2, =0xEA60 \n"
"    STR     R3, [SP] \n"
"    LDR     R0, [R8, #0x10] \n"
"    LDR     R3, =0xFF8663C4 /*'SsShootTask.c'*/ \n"
"    MOV     R1, #0x40000000 \n"
"    BL      sub_FF86B5BC \n"

"loc_FF8665F0:\n"
"    BL      sub_FF866354 \n"
"    LDR     R0, [R5, #0x24] \n"
"    CMP     R0, #0 \n"
"    MOVEQ   R0, #2 \n"
"    BLEQ    sub_FF860BA0 \n"
"    BL      sub_FF867508 \n"
"    LDR     R0, [R5, #0x24] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF866690 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF949C9C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF948AF8 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF86792C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF94766C \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF866660 \n"
"    BL      sub_FF949CDC \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF94780C \n"
"    TST     R0, #1 \n"
"    MOVNE   R2, R4 \n"
"    LDMNEFD SP!, {R3-R9,LR} \n"
"    MOVNE   R1, #1 \n"
"    BNE     sub_FF864D30 \n"
"    B       loc_FF86666C \n"

"loc_FF866660:\n"
"    MOV     R0, R4 \n"
"    BL      sub_FF947764 \n"
"    BL      sub_FF949CDC \n"

"loc_FF86666C:\n"
"    MOV     R0, R4 \n"
"    BL      sub_FF866474 \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF94908C \n"
"    BL      sub_FF949B2C \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF9491D0_my \n"  // --> Patched. Old value = 0xFF9491D0.
"    MOV     R7, R0 \n"
"    BL      capt_seq_hook_raw_here\n"
"    B       loc_FF86669C \n"

"loc_FF866690:\n"
"    LDR     R0, [R8, #4] \n"
"    CMP     R0, #0 \n"
"    MOVNE   R7, #0x1D \n"

"loc_FF86669C:\n"
"    BL      sub_FF869AC0 \n"
"    BL      sub_FF869B08 \n"
"    BL      sub_FF869B48 \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, R7 \n"
"    BL      sub_FF864D30 \n"
"    BL      sub_FF949428 \n"
"    CMP     R0, #0 \n"
"    LDRNE   R0, [R4, #8] \n"
"    ORRNE   R0, R0, #0x2000 \n"
"    STRNE   R0, [R4, #8] \n"
"    LDRH    R0, [R5, #0x92] \n"
"    CMP     R0, #3 \n"
"    BEQ     loc_FF8666F4 \n"
"    LDRH    R0, [R5, #0x90] \n"
"    CMP     R0, #0 \n"
"    LDREQH  R0, [R5, #0x8C] \n"
"    CMPEQ   R0, #2 \n"
"    MOVEQ   R0, R4 \n"
"    LDMEQFD SP!, {R3-R9,LR} \n"
"    BEQ     sub_FF867B68 \n"

"loc_FF8666F4:\n"
"    LDMFD   SP!, {R3-R9,PC} \n"
);
}

/*************************************************************/
//** sub_FF9491D0_my @ 0xFF9491D0 - 0xFF949238, length=27
void __attribute__((naked,noinline)) sub_FF9491D0_my() {
asm volatile (
"    STMFD   SP!, {R1-R7,LR} \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF949E0C \n"
"    MVN     R1, #0 \n"
"    BL      sub_FF86F52C /*_ClearEventFlag*/ \n"
"    MOV     R2, #4 \n"
"    ADD     R1, SP, #4 \n"
"    MOV     R0, #0x8A \n"
"    BL      _GetPropertyCase \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x373 \n"
"    LDRNE   R0, =0xFF94919C /*'SsCaptureSeq.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R7, =0x1BC98 \n"
"    LDR     R6, =0x1BBD8 \n"
"    LDRSH   R1, [R7, #0xE] \n"
"    LDR     R0, [R6, #0x88] \n"
"    BL      sub_FF90A7E0 \n"
"    BL      _GetCCDTemperature \n"
"    LDR     R3, =0x96E4 \n"
"    STRH    R0, [R4, #0x94] \n"
"    STR     R3, [SP] \n"
"    MOV     R1, R0 \n"
"    LDRH    R0, [R6, #0x5C] \n"
"    LDRSH   R2, [R7, #0xC] \n"
"    SUB     R3, R3, #4 \n"
"    BL      sub_FF94A430 \n"
"    BL      wait_until_remote_button_is_released\n"
"    BL      capt_seq_hook_set_nr\n"
"    LDR     PC, =0xFF94923C \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF8AB0E0 - 0xFF8AB6D4, length=382
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x20 \n"
"    LDR     R8, =0xBB8 \n"
"    LDR     R7, =0x6D08 \n"
"    LDR     R5, =0x20F00 \n"
"    MOV     R0, #0 \n"
"    ADD     R6, SP, #0x10 \n"
"    STR     R0, [SP, #0xC] \n"

"loc_FF8AB100:\n"
"    LDR     R0, [R7, #0x20] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #0x1C \n"
"    BL      sub_FF827D30 /*_ReceiveMessageQueue*/ \n"
"    LDR     R0, [SP, #0xC] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF8AB148 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0x13 \n"
"    CMPNE   R0, #0x14 \n"
"    CMPNE   R0, #0x15 \n"
"    BEQ     loc_FF8AB264 \n"
"    CMP     R0, #0x27 \n"
"    BEQ     loc_FF8AB23C \n"
"    ADD     R1, SP, #0xC \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8AB090 \n"

"loc_FF8AB148:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x2C \n"
"    BNE     loc_FF8AB178 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8AC348 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF86F4F8 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x20 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"

"loc_FF8AB178:\n"
"    CMP     R1, #0x2B \n"
"    BNE     loc_FF8AB194 \n"
"    LDR     R2, [R0, #0x88]! \n"
"    LDR     R1, [R0, #4] \n"
"    MOV     R0, R1 \n"
"    BLX     R2 \n"
"    B       loc_FF8AB6CC \n"

"loc_FF8AB194:\n"
"    CMP     R1, #0x25 \n"
"    BNE     loc_FF8AB1E4 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF86F52C /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8A7B58 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF93A56C \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x80 \n"
"    BL      sub_FF86F438 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0xD36 \n"
"    BNE     loc_FF8AB228 \n"

"loc_FF8AB1D0:\n"
"    LDR     R1, [SP, #0x1C] \n"
"    LDR     R0, [R1, #0x8C] \n"
"    LDR     R1, [R1, #0x88] \n"
"    BLX     R1 \n"
"    B       loc_FF8AB6CC \n"

"loc_FF8AB1E4:\n"
"    CMP     R1, #0x26 \n"
"    BNE     loc_FF8AB234 \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8AB090 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF86F52C /*_ClearEventFlag*/ \n"
"    LDR     R0, =0xFF8A7B68 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF93AED8 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, #0x100 \n"
"    BL      sub_FF86F438 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF8AB1D0 \n"
"    MOV     R1, #0xD40 \n"

"loc_FF8AB228:\n"
"    LDR     R0, =0xFF8A8258 /*'ExpDrv.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FF8AB1D0 \n"

"loc_FF8AB234:\n"
"    CMP     R1, #0x27 \n"
"    BNE     loc_FF8AB24C \n"

"loc_FF8AB23C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    ADD     R1, SP, #0xC \n"
"    BL      sub_FF8AB090 \n"
"    B       loc_FF8AB1D0 \n"

"loc_FF8AB24C:\n"
"    CMP     R1, #0x2A \n"
"    BNE     loc_FF8AB264 \n"
"    BL      sub_FF89ABF8 \n"
"    BL      sub_FF89B884 \n"
"    BL      sub_FF89B3BC \n"
"    B       loc_FF8AB1D0 \n"

"loc_FF8AB264:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R4, #1 \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x11 \n"
"    CMPNE   R1, #0x12 \n"
"    BNE     loc_FF8AB2D4 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8A9C00 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8AC720 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x90] \n"
"    LDR     R2, [R0, #0x94] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    B       loc_FF8AB60C \n"

"loc_FF8AB2D4:\n"
"    CMP     R1, #0x13 \n"
"    CMPNE   R1, #0x14 \n"
"    CMPNE   R1, #0x15 \n"
"    BNE     loc_FF8AB388 \n"
"    ADD     R3, SP, #0xC \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8A9E48 \n"
"    CMP     R0, #1 \n"
"    MOV     R4, R0 \n"
"    CMPNE   R4, #5 \n"
"    BNE     loc_FF8AB324 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, R4 \n"
"    LDR     R1, [R0, #0x7C]! \n"
"    LDR     R12, [R0, #0xC]! \n"
"    LDR     R3, [R0, #4] \n"
"    MOV     R0, SP \n"
"    BLX     R12 \n"
"    B       loc_FF8AB35C \n"

"loc_FF8AB324:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    CMP     R4, #2 \n"
"    LDR     R3, [R0, #0x8C] \n"
"    CMPNE   R4, #6 \n"
"    BNE     loc_FF8AB370 \n"
"    LDR     R12, [R0, #0x88] \n"
"    MOV     R0, SP \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #1 \n"
"    BLX     R12 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, SP \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FF8AADDC \n"

"loc_FF8AB35C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R2, [SP, #0xC] \n"
"    MOV     R1, R4 \n"
"    BL      sub_FF8AB030 \n"
"    B       loc_FF8AB60C \n"

"loc_FF8AB370:\n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R12, [R0, #0x88] \n"
"    ADD     R0, R0, #4 \n"
"    MOV     R2, R4 \n"
"    BLX     R12 \n"
"    B       loc_FF8AB60C \n"

"loc_FF8AB388:\n"
"    CMP     R1, #0x21 \n"
"    CMPNE   R1, #0x22 \n"
"    BNE     loc_FF8AB3D4 \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R1, R0, R1, LSL#2 \n"
"    SUB     R1, R1, #8 \n"
"    LDMIA   R1, {R2-R4} \n"
"    STMIA   R6, {R2-R4} \n"
"    BL      sub_FF8A9180 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8A947C \n"
"    B       loc_FF8AB60C \n"

"loc_FF8AB3D4:\n"
"    ADD     R1, R0, #4 \n"
"    LDMIA   R1, {R2,R3,R12} \n"
"    STMIA   R6, {R2,R3,R12} \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #0x24 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB484 \n"
"    B       loc_FF8AB484 \n"
"    B       loc_FF8AB48C \n"
"    B       loc_FF8AB494 \n"
"    B       loc_FF8AB494 \n"
"    B       loc_FF8AB494 \n"
"    B       loc_FF8AB484 \n"
"    B       loc_FF8AB48C \n"
"    B       loc_FF8AB494 \n"
"    B       loc_FF8AB494 \n"
"    B       loc_FF8AB4F4 \n"
"    B       loc_FF8AB4F4 \n"
"    B       loc_FF8AB5E0 \n"
"    B       loc_FF8AB5E8 \n"
"    B       loc_FF8AB5E8 \n"
"    B       loc_FF8AB5E8 \n"
"    B       loc_FF8AB5E8 \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB49C \n"
"    B       loc_FF8AB4A4 \n"
"    B       loc_FF8AB4A4 \n"
"    B       loc_FF8AB500 \n"
"    B       loc_FF8AB500 \n"
"    B       loc_FF8AB508 \n"
"    B       loc_FF8AB538 \n"
"    B       loc_FF8AB568 \n"
"    B       loc_FF8AB598 \n"
"    B       loc_FF8AB5C8 \n"
"    B       loc_FF8AB5C8 \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5EC \n"
"    B       loc_FF8AB5D0 \n"
"    B       loc_FF8AB5D8 \n"

"loc_FF8AB484:\n"
"    BL      sub_FF8A8044 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB48C:\n"
"    BL      sub_FF8A82CC \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB494:\n"
"    BL      sub_FF8A84D0 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB49C:\n"
"    BL      sub_FF8A8738 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB4A4:\n"
"    BL      sub_FF8A892C \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB4F4:\n"
"    BL      sub_FF8A8B94_my \n"  // --> Patched. Old value = 0xFF8A8B94.
"    MOV     R4, #0 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB500:\n"
"    BL      sub_FF8A8CD0 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB508:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FF8AC3BC \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB538:\n"
"    LDRH    R1, [R0, #4] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R5, #8] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FF8AC53C \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB568:\n"
"    LDRH    R1, [R5] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R0, #6] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R5, #8] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FF8AC5E8 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB598:\n"
"    LDRH    R1, [R5] \n"
"    STRH    R1, [SP, #0x10] \n"
"    LDRH    R1, [R5, #2] \n"
"    STRH    R1, [SP, #0x12] \n"
"    LDRH    R1, [R5, #4] \n"
"    STRH    R1, [SP, #0x14] \n"
"    LDRH    R1, [R5, #6] \n"
"    STRH    R1, [SP, #0x16] \n"
"    LDRH    R1, [R0, #0xC] \n"
"    STRH    R1, [SP, #0x18] \n"
"    BL      sub_FF8AC688 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB5C8:\n"
"    BL      sub_FF8A8F44 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB5D0:\n"
"    BL      sub_FF8A9580 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB5D8:\n"
"    BL      sub_FF8A97B8 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB5E0:\n"
"    BL      sub_FF8A9930 \n"
"    B       loc_FF8AB5EC \n"

"loc_FF8AB5E8:\n"
"    BL      sub_FF8A9AC8 \n"

"loc_FF8AB5EC:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R1, [R0, #0x7C] \n"
"    LDR     R3, [R0, #0x88] \n"
"    LDR     R2, [R0, #0x8C] \n"
"    ADD     R0, R0, #4 \n"
"    BLX     R3 \n"
"    CMP     R4, #1 \n"
"    BNE     loc_FF8AB654 \n"

"loc_FF8AB60C:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    MOV     R2, #0xC \n"
"    LDR     R1, [R0, #0x7C] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R0, R0, R1, LSL#2 \n"
"    SUB     R4, R0, #8 \n"
"    LDR     R0, =0x20F00 \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFB05014 \n"
"    LDR     R0, =0x20F0C \n"
"    MOV     R2, #0xC \n"
"    ADD     R1, SP, #0x10 \n"
"    BL      sub_FFB05014 \n"
"    LDR     R0, =0x20F18 \n"
"    MOV     R2, #0xC \n"
"    MOV     R1, R4 \n"
"    BL      sub_FFB05014 \n"
"    B       loc_FF8AB6CC \n"

"loc_FF8AB654:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #0xB \n"
"    BNE     loc_FF8AB69C \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF8A7E4C \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #0 \n"
"    B       loc_FF8AB6C8 \n"

"loc_FF8AB69C:\n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"
"    BL      sub_FF8A7E4C \n"
"    MOV     R3, #1 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #1 \n"
"    MOV     R0, #1 \n"
"    STR     R3, [SP] \n"

"loc_FF8AB6C8:\n"
"    BL      sub_FF8A7F8C \n"

"loc_FF8AB6CC:\n"
"    LDR     R0, [SP, #0x1C] \n"
"    BL      sub_FF8AC348 \n"
"    B       loc_FF8AB100 \n"
);
}

/*************************************************************/
//** sub_FF8A8B94_my @ 0xFF8A8B94 - 0xFF8A8CCC, length=79
void __attribute__((naked,noinline)) sub_FF8A8B94_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R7, =0x6D08 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R1, #0x3E \n"
"    BL      sub_FF86F52C /*_ClearEventFlag*/ \n"
"    LDRSH   R0, [R4, #4] \n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8A7BDC \n"
"    MOV     R6, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8A7CEC \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8A7D44 \n"
"    LDRSH   R0, [R4, #0xA] \n"
"    BL      sub_FF8A7D9C \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    BL      sub_FF8A7DF4 \n"
"    MOV     R5, R0 \n"
"    LDR     R0, [R4] \n"
"    LDR     R8, =0x20F18 \n"
"    CMP     R0, #0xB \n"
"    MOVEQ   R6, #0 \n"
"    MOVEQ   R5, #0 \n"
"    BEQ     loc_FF8A8C24 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF8A8C24 \n"
"    LDRSH   R0, [R4, #4] \n"
"    LDR     R1, =0xFF8A7B48 \n"
"    MOV     R2, #2 \n"
"    BL      sub_FF93A894 \n"
"    STRH    R0, [R4, #4] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R7, #0x28] \n"
"    B       loc_FF8A8C2C \n"

"loc_FF8A8C24:\n"
"    LDRH    R0, [R8] \n"
"    STRH    R0, [R4, #4] \n"

"loc_FF8A8C2C:\n"
"    CMP     R5, #1 \n"
"    LDRNEH  R0, [R8, #8] \n"
"    BNE     loc_FF8A8C48 \n"
"    LDRSH   R0, [R4, #0xC] \n"
"    LDR     R1, =0xFF8A7BCC \n"
"    MOV     R2, #0x20 \n"
"    BL      sub_FF8AC378 \n"

"loc_FF8A8C48:\n"
"    STRH    R0, [R4, #0xC] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF89A968_my \n"  // --> Patched. Old value = 0xFF89A968.
"    LDRSH   R0, [R4, #8] \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF89B0B4 \n"
"    MOV     R1, #0 \n"
"    ADD     R0, R4, #8 \n"
"    BL      sub_FF89B13C \n"
"    LDRSH   R0, [R4, #0xE] \n"
"    BL      sub_FF8A385C \n"
"    LDR     R4, =0xBB8 \n"
"    CMP     R6, #1 \n"
"    BNE     loc_FF8A8CA0 \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #2 \n"
"    BL      sub_FF86F438 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x54D \n"
"    LDRNE   R0, =0xFF8A8258 /*'ExpDrv.c'*/ \n"
"    BLNE    _DebugAssert \n"

"loc_FF8A8CA0:\n"
"    CMP     R5, #1 \n"
"    LDMNEFD SP!, {R4-R8,PC} \n"
"    LDR     R0, [R7, #0x1C] \n"
"    MOV     R2, R4 \n"
"    MOV     R1, #0x20 \n"
"    BL      sub_FF86F438 /*_WaitForAllEventFlag*/ \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x552 \n"
"    LDRNE   R0, =0xFF8A8258 /*'ExpDrv.c'*/ \n"
"    LDMNEFD SP!, {R4-R8,LR} \n"
"    BNE     _DebugAssert \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF89A968_my @ 0xFF89A968 - 0xFF89A9D0, length=27
void __attribute__((naked,noinline)) sub_FF89A968_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    LDR     R5, =0x6A30 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5, #4] \n"
"    CMP     R0, #1 \n"
"    MOVNE   R1, #0x140 \n"
"    LDRNE   R0, =0xFF89A76C /*'Shutter.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    CMN     R4, #0xC00 \n"
"    LDREQSH R4, [R5, #2] \n"
"    CMN     R4, #0xC00 \n"
"    LDREQ   R1, =0x146 \n"
"    LDREQ   R0, =0xFF89A76C /*'Shutter.c'*/ \n"
"    STRH    R4, [R5, #2] \n"
"    BLEQ    _DebugAssert \n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    MOV     R4, R0 \n"
//"  BL      _sub_FF8CE638 \n"  // --> Nullsub call removed.
"    MOV     R0, R4 \n"
"    BL      sub_FF8D33E4 \n"
"    TST     R0, #1 \n"
"    LDRNE   R1, =0x14B \n"
"    LDMNEFD SP!, {R4-R6,LR} \n"
"    LDRNE   R0, =0xFF89A76C /*'Shutter.c'*/ \n"
"    BNE     _DebugAssert \n"
"    LDMFD   SP!, {R4-R6,PC} \n"
);
}