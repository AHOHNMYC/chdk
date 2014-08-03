/*
 * capt_seq.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define NR_ON (1)
#define NR_OFF (0)

#define USE_STUBS_NRFLAG 1          // see stubs_entry.S

#include "../../../generic/capt_seq.c"

/*************************************************************/
//** capt_seq_task @ 0xFF952C7C - 0xFF952E44, length=115
void __attribute__((naked,noinline)) capt_seq_task() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    SUB     SP, SP, #4 \n"
"    MOV     R4, SP \n"
"    B       loc_FF952E10 \n"

"loc_FF952C8C:\n"
"    LDR     R0, [SP] \n"
"    LDR     R3, [R0] \n"
"    CMP     R3, #0xF \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF952DF8 \n"
"    .long   loc_FF952CE0 \n"
"    .long   loc_FF952CF0 \n"
"    .long   loc_FF952D04 \n"
"    .long   loc_FF952D14 \n"
"    .long   loc_FF952D24 \n"
"    .long   loc_FF952D34 \n"
"    .long   loc_FF952D48 \n"
"    .long   loc_FF952D58 \n"
"    .long   loc_FF952D6C \n"
"    .long   loc_FF952D7C \n"
"    .long   loc_FF952D8C \n"
"    .long   loc_FF952D9C \n"
"    .long   loc_FF952DAC \n"
"    .long   loc_FF952DC0 \n"
"    .long   loc_FF952DD0 \n"
"    .long   loc_FF952DE0 \n"

"loc_FF952CE0:\n"
"    BL      sub_FF95346C \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #8 \n"
"    B       loc_FF952DEC \n"

"loc_FF952CF0:\n"
"    BL      sub_FF953BFC \n"
"    BL      shooting_expo_param_override\n"   // +
"    BL      sub_FF9511F4 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x10 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D04:\n"
"    BL      sub_FF9523D4_my \n"  // --> Patched. Old value = 0xFF9523D4.
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #2 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D14:\n"
"    BL      sub_FF9541F4 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #1 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D24:\n"
"    BL      sub_FF953C9C \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x20 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D34:\n"
"    BL      sub_FF953D8C \n"
"    BL      sub_FF9511F4 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x40 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D48:\n"
"    BL      sub_FF952588 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x80 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D58:\n"
"    BL      sub_FF953F08 \n"
"    BL      sub_FF9511F4 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x400 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D6C:\n"
"    BL      sub_FF953C9C \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x800 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D7C:\n"
"    BL      sub_FF9549BC \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x8000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D8C:\n"
"    BL      sub_FF954D70 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x10000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952D9C:\n"
"    BL      sub_FF954C8C \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x20000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952DAC:\n"
"    MOV     R0, #0 \n"
"    BL      sub_FF954E24 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x40000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952DC0:\n"
"    BL      sub_FF955088 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x80000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952DD0:\n"
"    BL      sub_FF955100 \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x100000 \n"
"    B       loc_FF952DEC \n"

"loc_FF952DE0:\n"
"    BL      sub_FF95514C \n"
"    LDR     R3, =0x6FC94 \n"
"    MOV     R1, #0x200000 \n"

"loc_FF952DEC:\n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FDA0 /*_SetEventFlag*/ \n"
"    B       loc_FF952E08 \n"

"loc_FF952DF8:\n"
"    MOV     R1, #0x370 \n"
"    LDR     R0, =0xFF952084 \n"
"    ADD     R1, R1, #1 \n"
"    BL      _DebugAssert \n"

"loc_FF952E08:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF952104 \n"

"loc_FF952E10:\n"
"    LDR     R3, =0x6FC98 \n"
"    MOV     R1, R4 \n"
"    LDR     R0, [R3] \n"
"    MOV     R2, #0 \n"
"    BL      sub_FF8205A8 /*_ReceiveMessageQueue*/ \n"
"    TST     R0, #1 \n"
"    BEQ     loc_FF952C8C \n"
"    MOV     R1, #0x2E4 \n"
"    LDR     R0, =0xFF952084 \n"
"    ADD     R1, R1, #3 \n"
"    BL      _DebugAssert \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #4 \n"
"    LDMFD   SP!, {R4,PC} \n"
);
}

/*************************************************************/
//** sub_FF9523D4_my @ 0xFF9523D4 - 0xFF95245C, length=35
void __attribute__((naked,noinline)) sub_FF9523D4_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R5, [R0, #8] \n"
"    BL      sub_FF95FA78 \n"
"    CMP     R0, #0 \n"
"    LDR     R0, =0xFF9523B0 \n"
"    BNE     loc_FF9523F4 \n"
"    BL      sub_FFAB78A8 \n"
"    BL      sub_FF95FA84 \n"

"loc_FF9523F4:\n"
"    MOV     R0, R5 \n"
"    BL      sub_FF954294 \n"
"    TST     R0, #1 \n"
"    MOV     R2, R5 \n"
"    MOV     R1, #1 \n"
"    BEQ     loc_FF952414 \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF9515C0 \n"

"loc_FF952414:\n"
"    BL      sub_FF98D194 \n"
"    BL      sub_FF950C60 \n"
"    MOV     R4, R0 \n"
"    BL      sub_FF825E98 \n"
"    ADD     R3, R5, R5, LSL#2 \n"
"    ADD     R3, R5, R3, LSL#1 \n"
"    ADD     R4, R4, R3, LSL#3 \n"
"    STR     R0, [R4, #4] \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF955D54 \n"
"    BL      sub_FF954878 \n"
"    BL      sub_FF9547E4 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF9554C4_my \n"  // --> Patched. Old value = 0xFF9554C4.
"    BL      capt_seq_hook_raw_here\n"   // +
"    MOV     R2, R5 \n"
"    MOV     R1, #1 \n"
"    BL      sub_FF9515C0 \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF95570C \n"
);
}

/*************************************************************/
//** sub_FF9554C4_my @ 0xFF9554C4 - 0xFF955508, length=18
void __attribute__((naked,noinline)) sub_FF9554C4_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    LDR     R3, =0x53E4 \n"
"    SUB     SP, SP, #4 \n"
"    LDR     R2, [R3] \n"
"    LDR     R4, =0x53E8 \n"
"    CMP     R2, #0 \n"
"    STR     R0, [R4] \n"
"    MOV     R8, #0 \n"
"    LDR     R6, =0xFF9553FC \n"
"    BNE     loc_FF9554F8 \n"
"    LDR     R0, =0xFF9554B8 \n"
"    MOV     R1, #0xDB \n"
"    BL      _DebugAssert \n"

"loc_FF9554F8:\n"
"    LDR     R3, =0x6FCFC \n"
"    MVN     R1, #0 \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF3C /*_ClearEventFlag*/ \n"
"    BL      sub_FF955434 \n"
//"    BL      wait_until_remote_button_is_released\n"
"    BL      capt_seq_hook_set_nr\n"
"    LDR     PC, =0xFF95550C \n"  // Continue in firmware
);
}

/*************************************************************/
//** exp_drv_task @ 0xFF8FF820 - 0xFF8FFAF8, length=183
void __attribute__((naked,noinline)) exp_drv_task() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    SUB     SP, SP, #0x14 \n"
"    MOV     R7, SP \n"
"    B       loc_FF8FFAB4 \n"

"loc_FF8FF830:\n"
"    CMP     R3, #0x17 \n"
"    BNE     loc_FF8FF848 \n"
"    LDR     R0, [R2, #0x30] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R2, #0x2C] \n"
"    B       loc_FF8FF878 \n"

"loc_FF8FF848:\n"
"    CMP     R3, #0x15 \n"
"    BNE     loc_FF8FF858 \n"
"    BL      sub_FFA5D7E4 \n"
"    B       loc_FF8FF868 \n"

"loc_FF8FF858:\n"
"    CMP     R3, #0x16 \n"
"    BNE     loc_FF8FF884 \n"
"    BL      sub_FF8ACE08 \n"
"    BL      sub_FF8AEF64 \n"

"loc_FF8FF868:\n"
"    LDR     R3, [SP] \n"
"    LDR     R0, [R3, #0x30] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x2C] \n"

"loc_FF8FF878:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF8FDFAC \n"
"    B       loc_FF8FFAB4 \n"

"loc_FF8FF884:\n"
"    CMP     R3, #0xC \n"
"    MOV     R8, #1 \n"
"    BNE     loc_FF8FF8F4 \n"
"    LDR     R1, [R2, #0x24] \n"
"    ADD     R1, R1, R1, LSL#1 \n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R1, R2, R1, LSL#1 \n"
"    SUB     R1, R1, #2 \n"
"    MOV     R2, #6 \n"
"    MOV     R0, R6 \n"
"    BL      _memcpy \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF8FEF18 \n"
"    LDR     R3, [SP] \n"
"    LDR     R1, [R3, #0x24] \n"
"    LDR     R2, [R3, #0x30] \n"
"    ADD     R0, R3, #4 \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x2C] \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF8FF09C \n"
"    LDR     R3, [SP] \n"
"    ADD     R0, R3, #4 \n"
"    LDR     R1, [R3, #0x24] \n"
"    LDR     R2, [R3, #0x38] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R3, #0x34] \n"
"    B       loc_FF8FFA64 \n"

"loc_FF8FF8F4:\n"
"    SUB     R3, R3, #0xD \n"
"    CMP     R3, #1 \n"
"    BHI     loc_FF8FF974 \n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R5, SP, #4 \n"
"    MOV     R0, R2 \n"
"    MOV     R1, R6 \n"
"    MOV     R2, R5 \n"
"    BL      sub_FF8FF118 \n"
"    MOV     R4, R0 \n"
"    CMP     R4, #3 \n"
"    CMPNE   R4, #1 \n"
"    BNE     loc_FF8FF954 \n"
"    LDR     R12, [SP] \n"
"    MOV     R0, R5 \n"
"    LDR     R1, [R12, #0x24] \n"
"    MOV     R2, R4 \n"
"    LDR     R3, [R12, #0x30] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x2C] \n"
"    MOV     R1, R4 \n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF8FF800 \n"
"    B       loc_FF8FFA64 \n"

"loc_FF8FF954:\n"
"    LDR     R12, [SP] \n"
"    MOV     R2, R4 \n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x24] \n"
"    LDR     R3, [R12, #0x30] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x2C] \n"
"    B       loc_FF8FFA64 \n"

"loc_FF8FF974:\n"
"    ADD     R6, SP, #0xC \n"
"    ADD     R1, R2, #4 \n"
"    MOV     R0, R6 \n"
"    MOV     R2, #6 \n"
"    BL      _memcpy \n"
"    LDR     R12, [SP] \n"
"    LDR     R3, [R12] \n"
"    MOV     R0, R12 \n"
"    CMP     R3, #0x14 \n"
"    LDRLS   PC, [PC, R3, LSL#2] \n"
"    B       loc_FF8FFA50 \n"
"    .long   loc_FF8FF9F4 \n"
"    .long   loc_FF8FF9FC \n"
"    .long   loc_FF8FFA04 \n"
"    .long   loc_FF8FFA04 \n"
"    .long   loc_FF8FF9F4 \n"
"    .long   loc_FF8FF9FC \n"
"    .long   loc_FF8FFA04 \n"
"    .long   loc_FF8FFA04 \n"
"    .long   loc_FF8FFA1C \n"
"    .long   loc_FF8FFA1C \n"
"    .long   loc_FF8FFA40 \n"
"    .long   loc_FF8FFA48 \n"
"    .long   loc_FF8FFA50 \n"
"    .long   loc_FF8FFA50 \n"
"    .long   loc_FF8FFA50 \n"
"    .long   loc_FF8FFA0C \n"
"    .long   loc_FF8FFA14 \n"
"    .long   loc_FF8FFA28 \n"
"    .long   loc_FF8FFA30 \n"
"    .long   loc_FF8FFA30 \n"
"    .long   loc_FF8FFA38 \n"

"loc_FF8FF9F4:\n"
"    BL      sub_FF8FE46C \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FF9FC:\n"
"    BL      sub_FF8FE5A8 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA04:\n"
"    BL      sub_FF8FE6D8 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA0C:\n"
"    BL      sub_FF8FE8AC \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA14:\n"
"    BL      sub_FF8FE970 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA1C:\n"
"    BL      sub_FF8FEA34_my \n"  // --> Patched. Old value = 0xFF8FEA34.
"    MOV     R8, #0 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA28:\n"
"    BL      sub_FF8FEAF8 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA30:\n"
"    BL      sub_FF8FEBE0 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA38:\n"
"    BL      sub_FF8FECD8 \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA40:\n"
"    BL      sub_FF8FEDAC \n"
"    B       loc_FF8FFA4C \n"

"loc_FF8FFA48:\n"
"    BL      sub_FF8FEE98 \n"

"loc_FF8FFA4C:\n"
"    LDR     R12, [SP] \n"

"loc_FF8FFA50:\n"
"    ADD     R0, R12, #4 \n"
"    LDR     R1, [R12, #0x24] \n"
"    LDR     R2, [R12, #0x30] \n"
"    MOV     LR, PC \n"
"    LDR     PC, [R12, #0x2C] \n"

"loc_FF8FFA64:\n"
"    CMP     R8, #1 \n"
"    BNE     loc_FF8FFA8C \n"
"    LDR     R1, [SP] \n"
"    LDR     R3, [R1, #0x24] \n"
"    ADD     R3, R3, R3, LSL#1 \n"
"    ADD     R1, R1, R3, LSL#1 \n"
"    MOV     R0, R6 \n"
"    SUB     R1, R1, #2 \n"
"    BL      sub_FF8FE324 \n"
"    B       loc_FF8FFAAC \n"

"loc_FF8FFA8C:\n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF8FE2C8 \n"
"    MOV     R0, #1 \n"
"    MOV     R1, R0 \n"
"    MOV     R2, R0 \n"
"    BL      sub_FF8FE3E4 \n"

"loc_FF8FFAAC:\n"
"    LDR     R0, [SP] \n"
"    BL      sub_FF8FDFAC \n"

"loc_FF8FFAB4:\n"
"    LDR     R3, =0x4B86C \n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R3] \n"
"    MOV     R1, R7 \n"
"    BL      sub_FF8205A8 /*_ReceiveMessageQueue*/ \n"
"    LDR     R2, [SP] \n"
"    LDR     R3, [R2] \n"
"    CMP     R3, #0x18 \n"
"    BNE     loc_FF8FF830 \n"
"    MOV     R0, R2 \n"
"    BL      sub_FF8FDFAC \n"
"    LDR     R3, =0x4B868 \n"
"    MOV     R1, #1 \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FDA0 /*_SetEventFlag*/ \n"
"    BL      _ExitTask \n"
"    ADD     SP, SP, #0x14 \n"
"    LDMFD   SP!, {R4-R8,PC} \n"
);
}

/*************************************************************/
//** sub_FF8FEA34_my @ 0xFF8FEA34 - 0xFF8FEAE8, length=46
void __attribute__((naked,noinline)) sub_FF8FEA34_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R3, =0x4B868 \n"
"    MOV     R4, R0 \n"
"    MOV     R1, #0xE \n"
"    LDR     R0, [R3] \n"
"    BL      sub_FF81FF3C /*_ClearEventFlag*/ \n"
"    MOV     R1, #0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FF8FE030 \n"
"    MOV     R5, R0 \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8FE160 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8FE1FC \n"
"    LDR     R3, [R4] \n"
"    CMP     R3, #9 \n"
"    MOVEQ   R5, #0 \n"
"    CMP     R5, #1 \n"
"    LDR     R1, =0xFF8FDFDC \n"
"    MOV     R2, #2 \n"
"    BNE     loc_FF8FEAA0 \n"
"    LDRSH   R0, [R4, #4] \n"
"    BL      sub_FFA5D4EC \n"
"    LDR     R2, =0x4B894 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [R2] \n"
"    B       loc_FF8FEAA4 \n"

"loc_FF8FEAA0:\n"
"    BL      sub_FF8FE298 \n"

"loc_FF8FEAA4:\n"
"    STRH    R0, [R4, #4] \n"
"    LDRSH   R0, [R4, #6] \n"
"    BL      sub_FF8ACAA0_my \n"  // --> Patched. Old value = 0xFF8ACAA0.
"    BL      sub_FF8AED08 \n"
"    MOV     R1, R0 \n"
"    LDRSH   R0, [R4, #8] \n"
"    BL      sub_FF8AEB24 \n"
"    MOV     R1, #0 \n"
"    ADD     R0, R4, #8 \n"
"    BL      sub_FF8AEBE8 \n"
"    CMP     R5, #1 \n"
"    MOV     R1, #2 \n"
"    MOV     R2, #0 \n"
"    LDMNEFD SP!, {R4,R5,PC} \n"
"    LDR     R3, =0x4B868 \n"
"    LDR     R0, [R3] \n"
"    LDMFD   SP!, {R4,R5,LR} \n"
"    B       sub_FF81FD90 /*_WaitForAllEventFlag*/ \n"
);
}

/*************************************************************/
//** sub_FF8ACAA0_my @ 0xFF8ACAA0 - 0xFF8ACAF8, length=23
void __attribute__((naked,noinline)) sub_FF8ACAA0_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R3, =0x31FC \n"
"    LDR     R2, [R3] \n"
"    MOV     R3, R0, LSL#16 \n"
"    CMP     R2, #1 \n"
"    MOV     R1, #0x10C \n"
"    LDR     R0, =0xFF8AC440 \n"
"    MOV     R4, R3, ASR#16 \n"
"    BEQ     loc_FF8ACAC8 \n"
"    BL      _DebugAssert \n"

"loc_FF8ACAC8:\n"
"    MOV     R1, #0x110 \n"
"    CMN     R4, #0xC00 \n"
"    LDR     R3, =0x2E2B6 \n"
"    LDR     R0, =0xFF8AC440 \n"
"    ADD     R1, R1, #2 \n"
"    LDREQSH R4, [R3] \n"
"    LDRNE   R3, =0x2E2B6 \n"
"    CMN     R4, #0xC00 \n"
"    STRH    R4, [R3] \n"
"    BNE     loc_FF8ACAF4 \n"
"    BL      _DebugAssert \n"

"loc_FF8ACAF4:\n"
"    MOV     R0, R4 \n"
"    BL      apex2us \n"  // --> Patched. Old value = _apex2us.
"    LDR     PC, =0xFF8ACAFC \n"  // Continue in firmware
);
}
