#include "conf.h"

void change_video_tables(int a, int b){
}


void  set_quality(int *x){ // -17 highest; +12 lowest
 if (conf.video_mode) *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}

// @ FF883348
void __attribute__((naked,noinline)) movie_record_task(){ 

 asm volatile(
"                STMFD   SP!, {R2-R10,LR} \n"
"                LDR     R9, =0x5AA \n"
"                LDR     R8, =0x2710 \n"
"                LDR     R4, =0x34E0 \n"
"                LDR     R7, =0xFF882FC4 \n"
"                MOV     R6, #0 \n"
"                MOV     R5, #1 \n"
"                ADD     R10, R9, #0x44 \n"

"loc_FF883368: \n"
"                LDR     R0, [R4,#0x24] \n"
"                MOV     R2, #0 \n"
"                ADD     R1, SP, #4 \n"
"                BL      sub_FF83A4C8 \n"
"                LDR     R2, =0xFF881594 \n"	// aMovierecorder_
"                LDR     R0, [R4,#0xD0] \n"
"                MOV     R3, R9 \n"
"                MOV     R1, R8 \n"
"                BL      _takeSemaphore \n"
"                LDR     R0, [R4,#0x2C] \n"
"                CMP     R0, #0 \n"
"                LDRNE   R0, [R4,#0xC] \n"
"                CMPNE   R0, #2 \n"
"                LDRNE   R0, [R4,#0x44] \n"
"                CMPNE   R0, #6 \n"
"                BNE     loc_FF8834B0 \n"
"                LDR     R0, [SP,#4] \n"
"                LDR     R1, [R0] \n"
"                SUB     R1, R1, #2 \n"
"                CMP     R1, #0xC \n"
"                ADDLS   PC, PC, R1,LSL#2 \n"
"                B       loc_FF8834B0 \n"
"loc_FF8833C0: \n"
"                B       loc_FF883458 \n"
"loc_FF8833C4: \n"
"                B       loc_FF883470 \n"
"loc_FF8833C8: \n"
"                B       loc_FF883480 \n"
"loc_FF8833CC: \n"
"                B       loc_FF883488 \n"
"loc_FF8833D0: \n"
"                B       loc_FF883460 \n"
"loc_FF8833D4: \n"
"                B       loc_FF883490 \n"
"loc_FF8833D8: \n"
"                B       loc_FF883468 \n"
"loc_FF8833DC: \n"
"                B       loc_FF8834B0 \n"
"loc_FF8833E0: \n"
"                B       loc_FF8834A0 \n"
"loc_FF8833E4: \n"
"                B       loc_FF8834A8 \n"
"loc_FF8833E8: \n"
"                B       loc_FF883498 \n"
"loc_FF8833EC: \n"
"                B       loc_FF883420 \n"
"loc_FF8833F0: \n"
"                B       loc_FF8833F4 \n"

"loc_FF8833F4: \n"
//"; jumptable FF8833B8 entry 12 \n"
"                STR     R6, [R4,#0x40] \n"
"                STR     R6, [R4,#0x30] \n"
"                STR     R6, [R4,#0x34] \n"
"                STRH    R6, [R4,#6] \n"
"                STR     R7, [R4,#0xB4] \n"
"                LDR     R0, [R4,#0xC] \n"
"                ADD     R0, R0, #1 \n"
"                STR     R0, [R4,#0xC] \n"
"                MOV     R0, #6 \n"
"                STR     R0, [R4,#0x44] \n"
"                B       loc_FF883444 \n"

"loc_FF883420: \n"
//"; jumptable FF8833B8 entry 11 \n"
"                LDR     R0, =0xFF882FC4 \n"
"                STR     R6, [R4,#0x40] \n"
"                STR     R0, [R4,#0xBC] \n"
"                STR     R6, [R4,#0x30] \n"
"                STR     R7, [R4,#0xB4] \n"
"                LDR     R0, [R4,#0xC] \n"
"                ADD     R0, R0, #1 \n"
"                STR     R0, [R4,#0xC] \n"
"                STR     R5, [R4,#0x44] \n"

"loc_FF883444: \n"
"                LDR     R2, =0xFF881ADC \n"
"                LDR     R1, =0x3B7E8 \n"
"                LDR     R0, =0xFF881C04 \n"
"                BL      sub_FF852E4C \n"
"                B       loc_FF8834B0 \n"

"loc_FF883458: \n"
//"; jumptable FF8833B8 entry 0            ; LOCATION: MovieRecorder.c:0 \n"
"                BL      sub_FF883104 \n"
"                B       loc_FF8834B0 \n"

"loc_FF883460: \n"
//"; jumptable FF8833B8 entry 4            ; LOCATION: MovieRecorder.c:2032 \n"
//"                BL      sub_FF8829D4 \n"
"                BL      sub_FF8829D4_my \n"
"                B       loc_FF8834B0 \n"

"loc_FF883468: \n"
//"; jumptable FF8833B8 entry 6 \n"
"                BL      sub_FF8839C0 \n"
"                B       loc_FF8834B0 \n"

"loc_FF883470: \n"
//"; jumptable FF8833B8 entry 1 \n"
"                LDR     R0, [R4,#0x44] \n"
"                CMP     R0, #5 \n"
"                STRNE   R5, [R4,#0x34] \n"
"                B       loc_FF8834B0 \n"

"loc_FF883480: \n"
//"; jumptable FF8833B8 entry 2            ; LOCATION: MovieRecorder.c:1000 \n"
"                BL      sub_FF882670 \n"
"                B       loc_FF8834B0 \n"

"loc_FF883488: \n"
//"; jumptable FF8833B8 entry 3            ; LOCATION: MovieRecorder.c:0 \n"
"                BL      sub_FF8822E4 \n"
"                B       loc_FF8834B0 \n"

"loc_FF883490: \n"
//"; jumptable FF8833B8 entry 5            ; LOCATION: MovieRecorder.c:100 \n"
"                BL      sub_FF881A64 \n"
"                B       loc_FF8834B0 \n"

"loc_FF883498: \n"
//"; jumptable FF8833B8 entry 10           ; LOCATION: MovieRecorder.c:100 \n"
"                BL      sub_FF883914 \n"
"                B       loc_FF8834B0 \n"

"loc_FF8834A0: \n"
//"; jumptable FF8833B8 entry 8            ; LOCATION: MovieRecorder.c:0 \n"
"                BL      sub_FF8821A8 \n"
"                B       loc_FF8834B0 \n"

"loc_FF8834A8: \n"
//"; jumptable FF8833B8 entry 9            ; LOCATION: MovieRecorder.c:0 \n"
"                BL      sub_FF88208C \n"
"                STR     R5, [R4,#0xF8] \n"

"loc_FF8834B0: \n"
//"; jumptable FF8833B8 default entry \n"
//"; jumptable FF8833B8 entry 7 \n"
"                LDR     R1, [SP,#4] \n"
"                LDR     R3, =0xFF881594 \n" //;aMovierecorder_
"                STR     R6, [R1] \n"
"                STR     R10, [SP] \n"
"                LDR     R0, [R4,#0x28] \n"
"                MOV     R2, R8 \n"
"                BL      sub_FF83AE1C \n"
"                LDR     R0, [R4,#0xD0] \n"
"                BL      _eventproc_export_GiveSemaphore \n" // ; LOCATION: KerSem.c:0 \n"
"                B       loc_FF883368 \n"
 );
}

void __attribute__((naked,noinline)) sub_FF8829D4_my(){ 
 asm volatile(
"                STMFD   SP!, {R4-R11,LR} \n"
"                SUB     SP, SP, #0x64 \n"
"                MOV     R8, #0 \n"
"                LDR     R7, =0x34E0 \n"
"                MOV     R4, R0 \n"
"                STR     R8, [SP,#0x54] \n"
"                STR     R8, [SP,#0x4C] \n"
"                LDR     R0, [R7,#0x44] \n"
"                MOV     R9, #0 \n"
"                CMP     R0, #3 \n"
"                MOVEQ   R0, #4 \n"
"                STREQ   R0, [R7,#0x44] \n"
"                LDR     R0, [R7,#0xB4] \n"
"                MOV     R6, #0 \n"
"                MOV     R5, #1 \n"
"                BLX     R0 \n"
"                LDR     R0, [R7,#0x44] \n"
"                CMP     R0, #6 \n"
"                BEQ     loc_FF882A34 \n"
"                LDR     R1, [R7,#0xC] \n"
"                CMP     R1, #2 \n"
"                BNE     loc_FF882A54 \n"
"                CMP     R0, #5 \n"
"                BEQ     loc_FF882ACC \n"

"loc_FF882A34: \n"
"                LDR     R0, =0xFF881594 \n" //;aMovierecorder_
"                MOV     R6, #1 \n"
"                MOV     R1, #0x7F0 \n"
"                BL      _DebugAssert \n"
"                LDR     R0, [R7,#0x44] \n"
"                CMP     R0, #4 \n"
"                MOVNE   R5, #0 \n"
"                B       loc_FF882A5C \n"

"loc_FF882A54: \n"
"                CMP     R0, #4 \n"
"                BNE     loc_FF882ACC \n"

"loc_FF882A5C: \n"
"                LDRH    R0, [R7,#6] \n"
"                CMP     R0, #1 \n"
"                LDREQ   R1, =0x807 \n"
"                LDREQ   R0, =0xFF881594 \n" //;aMovierecorder_
"                BLEQ    _DebugAssert \n"
"                LDRH    R0, [R7,#6] \n"
"                CMP     R0, #3 \n"
"                BNE     loc_FF882A90 \n"
"                LDR     R0, [R7,#0x6C] \n"
"                LDR     R1, [R7,#0xB8] \n"
"                BL      sub_FFB94040 \n"
"                CMP     R1, #0 \n"
"                MOVNE   R5, #0 \n"

"loc_FF882A90: \n"
"                LDR     R0, [R7,#0x44] \n"
"                CMP     R0, #6 \n"
"                CMPNE   R0, #1 \n"
"                CMPNE   R0, #3 \n"
"                BNE     loc_FF882AD4 \n"
"                CMP     R6, #1 \n"
"                CMPEQ   R5, #0 \n"
"                BNE     loc_FF882AD4 \n"
"                LDR     R0, [R7,#0x18] \n"
"                MOV     R1, #0x3E8 \n"
"                BL      _eventproc_export_TakeSemaphore \n"
"                CMP     R0, #9 \n"
"                BNE     loc_FF882F4C \n"
"                MOV     R0, #0x90000 \n"
"                BL      _eventproc_export_HardwareDefect \n"

"loc_FF882ACC: \n"
"                ADD     SP, SP, #0x64 \n"
"                LDMFD   SP!, {R4-R11,PC} \n"

"loc_FF882AD4: \n"
"                CMP     R5, #1 \n"
"                MOV     R10, #1 \n"
"                BNE     loc_FF882AFC \n"
"                ADD     R3, SP, #0x4c \n"
"                ADD     R2, SP, #0x50 \n"
"                ADD     R1, SP, #0x54 \n"
"                ADD     R0, SP, #0x58 \n"
"                BL      sub_FF98D3D0 \n"
"                MOVS    R9, R0 \n"
"                BNE     loc_FF882B18 \n"

"loc_FF882AFC: \n"
"                LDR     R0, [R7,#0x34] \n"
"                CMP     R0, #1 \n"
"                BNE     loc_FF882C44 \n"
"                LDR     R0, [R7,#0x6C] \n"
"                LDR     R1, [R7,#0x48] \n"
"                CMP     R0, R1 \n"
"                BCC     loc_FF882C44 \n"

"loc_FF882B18: \n"
"                MOV     R0, R9 \n"
"                BL      sub_FF881CA4 \n"
"                LDR     R0, [R7,#0xC] \n"
"                CMP     R0, #2 \n"
"                BNE     loc_FF882B88 \n"
"                MOV     R1, #0 \n"
"                LDR     R0, =0xFF8829C8 \n"
"                BL      sub_FF9470BC \n"
"                LDR     R2, [R7,#0x64] \n"
"                ADD     R3, SP, #0x5c \n"
"                STRD    R2, [SP,#0x28] \n"
"                MOV     R2, #0x18 \n"
"                ADD     R1, SP, #0x30 \n"
"                ADD     R0, SP, #0x10 \n"
"                BL      sub_FFB923F4 \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                MVN     R3, #1 \n"	//MOVL	r3, 0xFFFFFFFE \n"
"                ADD     R0, SP, #0x60 \n"
"                STMEA   SP, {R0-R3} \n"
"                LDR     R0, =0x3B870 \n"
"                MOV     R3, #0 \n"
"                MOV     R2, #0 \n"
"                MOV     R1, #0x40 \n"
"                BL      sub_FF947014 \n"
"                B       loc_FF882BDC \n"

"loc_FF882B80: \n"
"                MOV     R1, #1 \n"
"                B       loc_FF882E50 \n"

"loc_FF882B88: \n"
"                BL      sub_FF883900 \n"
"                LDR     R2, [R7,#0x64] \n"
"                ADD     R3, SP, #0x5c \n"
"                MVN     R1, #1 \n"	//MOVL	R1, 0xFFFFFFFE \n"
"                MOV     R0, #0 \n"
"                ADD     R5, SP, #0x1c \n"
"                STMIA   R5, {R0-R3} \n"
"                LDR     R3, [R4,#0x1C] \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                ADD     R4, SP, #0x0c \n"
"                ADD     R0, SP, #0x60 \n"
"                STMIA   R4, {R0-R3} \n"
"                MOV     R3, #0 \n"
"                MOV     R1, #0x40 \n"
"                MOV     R2, #0 \n"
"                STMEA   SP, {R1-R3} \n"
"                LDR     R3, =0x3B870 \n"
"                MOV     R1, #0 \n"
"                MOV     R0, #0 \n"
"                BL      sub_FF945E84 \n"

"loc_FF882BDC: \n"
"                LDR     R0, [R7,#0x18] \n"
"                LDR     R1, [R7,#0x60] \n"
"                BL      _eventproc_export_TakeSemaphore \n"
"                CMP     R0, #9 \n"
"                BEQ     loc_FF882B80 \n"
"                LDR     R0, [SP,#0x5c] \n"
"                CMP     R0, #0 \n"
"                BEQ     loc_FF882C04 \n"

"loc_FF882BFC: \n"
"                MOV     R1, #1 \n"
"                B       loc_FF882E68 \n"

"loc_FF882C04: \n"
"                LDR     R0, [R7,#0xC] \n"
"                MOV     R4, #5 \n"
"                CMP     R0, #2 \n"
"                MOV     R0, #1 \n"
"                BNE     loc_FF882C30 \n"
"                BL      sub_FF94707C \n"
"                BL      sub_FF9470A4 \n"
"                STR     R4, [R7,#0x44] \n"
"                BL      sub_FF883900 \n"
"                STR     R10, [R7,#0x44] \n"
"                B       loc_FF882C3C \n"

"loc_FF882C30: \n"
"                BL      sub_FF945F38 \n"
"                BL      sub_FF945F98 \n"
"                STR     R4, [R7,#0x44] \n"

"loc_FF882C3C: \n"
"                STR     R8, [R7,#0x34] \n"
"                B       loc_FF882ACC \n"

"loc_FF882C44: \n"
"                CMP     R5, #1 \n"
"                BNE     loc_FF882F4C \n"
"                STR     R10, [R7,#0x38] \n"
"                LDR     R0, [R7,#0x6C] \n"
"                LDR     R11, [R4,#0xC] \n"
"                CMP     R0, #0 \n"
"                LDRNE   R9, [SP,#0x58] \n"
"                LDRNE   R10, [SP,#0x54] \n"
"                BNE     loc_FF882D8C \n"
"                LDR     R0, [R7,#0xC] \n"
"                CMP     R0, #2 \n"
"                BNE     loc_FF882CE8 \n"
"                MOV     R1, #0 \n"
"                LDR     R0, =0xFF8829C8 \n"
"                BL      sub_FF9470BC \n"
"                LDR     R2, [R7,#0x64] \n"
"                ADD     R3, SP, #0x5c \n"
"                STRD    R2, [SP,#0x28] \n"
"                MOV     R2, #0x18 \n"
"                ADD     R1, SP, #0x30 \n"
"                ADD     R0, SP, #0x10 \n"
"                BL      sub_FFB923F4 \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                MVN     R3, #0 \n"	//MOVL	R3, 0xFFFFFFFF \n"
"                ADD     R0, SP, #0x60 \n"
"                STMEA   SP, {R0-R3} \n"
"                LDR     R0, [SP,#0x58] \n"
"                LDR     R1, [SP,#0x54] \n"
"                LDR     R2, [SP,#0x50] \n"
"                LDR     R3, [SP,#0x4c] \n"
"                BL      sub_FF947014 \n"
"                LDR     R0, [R7,#0x18] \n"
"                LDR     R1, [R7,#0x60] \n"
"                BL      _eventproc_export_TakeSemaphore \n"
"                CMP     R0, #9 \n"
"                BEQ     loc_FF882B80 \n"
"                MOV     R1, #0 \n"
"                LDR     R0, =0xFF8829BC \n"
"                BL      sub_FF9470BC \n"
"                B       loc_FF882D50 \n"

"loc_FF882CE8: \n"
"                LDR     R0, [R4,#0x20] \n"
"                LDR     R2, [R7,#0x64] \n"
"                ADD     R3, SP, #0x5c \n"
"                MVN     R1, #0 \n"	//MOVL	R1, 0xFFFFFFFF \n"
"                ADD     R9, SP, #0x1c \n"
"                STMIA   R9, {R0-R3} \n"
"                LDR     R3, [R4,#0x1C] \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                ADD     R0, SP, #0x60 \n"
"                ADD     R9, SP, #0x0c \n"
"                STMIA   R9, {R0-R3} \n"
"                LDR     R1, [SP,#0x50] \n"
"                LDR     R2, [SP,#0x54] \n"
"                LDR     R3, [SP,#0x4c] \n"
"                STMFA   SP, {R1,R3} \n"
"                STR     R2, [SP] \n"
"                LDMIB   R4, {R0,R1} \n"
"                LDR     R3, [SP,#0x58] \n"
"                MOV     R2, R11 \n"
"                BL      sub_FF945E84 \n"
"                LDR     R0, [R7,#0x18] \n"
"                LDR     R1, [R7,#0x60] \n"
"                BL      _eventproc_export_TakeSemaphore \n"
"                CMP     R0, #9 \n"
"                BEQ     loc_FF882B80 \n"

"loc_FF882D50: \n"
"                LDR     R0, [SP,#0x5c] \n"
"                CMP     R0, #0 \n"
"                BNE     loc_FF882BFC \n"
"                LDR     R0, [R7,#0xC] \n"
"                CMP     R0, #2 \n"
"                MOV     R0, #1 \n"
"                BNE     loc_FF882D74 \n"
"                BL      sub_FF94707C \n"
"                B       loc_FF882D78 \n"

"loc_FF882D74: \n"
"                BL      sub_FF945F38 \n"

"loc_FF882D78: \n"
"                LDR     R0, [SP,#0x60] \n"
"                LDR     R1, [SP,#0x58] \n"
"                ADD     R9, R1, R0 \n"
"                LDR     R1, [SP,#0x54] \n"
"                SUB     R10, R1, R0 \n"

"loc_FF882D8C: \n"
"                LDR     R0, [R7,#0xC] \n"
"                LDR     R2, [R7,#0x64] \n"
"                CMP     R0, #2 \n"
"                ADD     R3, SP, #0x5c \n"
"                BNE     loc_FF882DE0 \n"
"                STRD    R2, [SP,#0x28] \n"
"                MOV     R2, #0x18 \n"
"                ADD     R1, SP, #0x30 \n"
"                ADD     R0, SP, #0x10 \n"
"                BL      sub_FFB923F4 \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                LDR     R3, [R7,#0x68] \n"
"                ADD     R0, SP, #0x60 \n"
"                STMEA   SP, {R0-R3} \n"
"                LDR     R2, [SP,#0x50] \n"
"                LDR     R3, [SP,#0x4c] \n"
"                MOV     R1, R10 \n"
"                MOV     R0, R9 \n"
"                BL      sub_FF947014 \n"
"                B       loc_FF882E38 \n"

"loc_FF882DE0: \n"
"                LDR     R1, [R7,#0x68] \n"
"                LDR     R0, [R4,#0x20] \n"
"                STR     R1, [SP,#0x20] \n"
"                STR     R0, [SP,#0x1c] \n"
"                STR     R2, [SP,#0x24] \n"
"                STR     R3, [SP,#0x28] \n"
"                LDR     R3, [R4,#0x1C] \n"
"                LDR     R1, [R7,#0x84] \n"
"                LDR     R2, [R7,#0x88] \n"
"                ADD     R0, SP, #0x60 \n"
"                STR     R2, [SP,#0x14] \n"
"                LDR     R2, [SP,#0x50] \n"
"                STR     R1, [SP,#0x10] \n"
"                STR     R3, [SP,#0x18] \n"
"                LDR     R3, [SP,#0x4c] \n"
"                STR     R0, [SP,#0x0c] \n"
"                STMFA   SP, {R2,R3} \n"
"                STR     R10, [SP] \n"
"                LDMIB   R4, {R0,R1} \n"
"                MOV     R3, R9 \n"
"                MOV     R2, R11 \n"
"                BL      sub_FF945E84 \n"

"loc_FF882E38: \n"
"                LDR     R0, [R7,#0x18] \n"
"                LDR     R1, [R7,#0x60] \n"
"                BL      _eventproc_export_TakeSemaphore \n"
"                CMP     R0, #9 \n"
"                BNE     loc_FF882E58 \n"
"                MOV     R1, #0 \n"

"loc_FF882E50: \n"
"                MOV     R0, #0x90000 \n"
"                B       loc_FF882E6C \n"

"loc_FF882E58: \n"
"                LDR     R0, [SP,#0x5c] \n"
"                CMP     R0, #0 \n"
"                BEQ     loc_FF882E74 \n"
"                MOV     R1, #0 \n"

"loc_FF882E68: \n"
"                MOV     R0, #0xA0000 \n"

"loc_FF882E6C: \n"
"                BL      sub_FF881C44 \n"
"                B       loc_FF882ACC \n"

"loc_FF882E74: \n"
"                LDR     R0, [R7,#0xC] \n"
"                CMP     R0, #2 \n"
"                MOV     R0, #0 \n"
"                BNE     loc_FF882E8C \n"
"                BL      sub_FF94707C \n"
"                B       loc_FF882E90 \n"

"loc_FF882E8C: \n"
"                BL      sub_FF945F38 \n"

"loc_FF882E90: \n"
"                LDR     R0, [R7,#0xF8] \n"
"                CMP     R0, #1 \n"
"                BNE     loc_FF882F18 \n"
"                LDR     R0, [R7,#0x68] \n"
"                LDR     R1, [R7,#0x64] \n"
"                BL      sub_FFB94040 \n"
"                MOVS    R4, R1 \n"
"                STREQ   R8, [R7,#0xF8] \n"
"                BEQ     loc_FF882F18 \n"
"                LDR     R9, [SP,#0x58] \n"
"                MOV     R2, #4 \n"
"                ADD     R0, SP, #0x48 \n"
"                ADD     R1, R9, #4 \n"
"                BL      sub_FFB9228C \n"
"                LDR     R0, [SP,#0x48] \n"
"                MOV     R1, R0,LSR#24 \n"
"                AND     R2, R0, #0xFF0000 \n"
"                ORR     R1, R1, R2,LSR#8 \n"
"                AND     R2, R0, #0xFF00 \n"
"                ORR     R1, R1, R2,LSL#8 \n"
"                ORR     R0, R1, R0,LSL#24 \n"
"                BIC     R0, R0, #0x1E000 \n"
"                ORR     R0, R0, R4,LSL#13 \n"
"                MOV     R1, R0,LSR#24 \n"
"                AND     R2, R0, #0xFF0000 \n"
"                ORR     R1, R1, R2,LSR#8 \n"
"                AND     R2, R0, #0xFF00 \n"
"                ORR     R1, R1, R2,LSL#8 \n"
"                ORR     R0, R1, R0,LSL#24 \n"
"                STR     R0, [SP,#0x48] \n"
"                ADD     R0, R9, #4 \n"
"                ADD     R1, SP, #0x48 \n"
"                MOV     R2, #4 \n"
"                BL      sub_FFB9228C \n"

"loc_FF882F18: \n"
"                LDR     R0, [SP,#0x58] \n"
"                LDR     R1, [SP,#0x60] \n"
"                BL      sub_FF98D608 \n"
"                LDR     R0, [R7,#0x68] \n"
"                LDR     R3, =0x3568 \n"
"                ADD     R1, R0, #1 \n"
"                STR     R1, [R7,#0x68] \n"
"                STR     R3, [SP] \n"
"                LDR     R0, [R7,#0x64] \n"
"                SUB     R3, R3, #4 \n"
"                AND     R2, R0, #0xFF \n"
"                LDR     R0, [SP,#0x60] \n"
"                BL      sub_FF98B1E4 \n"

                "LDR     R0, =0x3568-4\n" // <----   -4 //+
                "BL      set_quality\n"                 //+

"loc_FF882F4C: \n"
"                CMP     R5, #1 \n"
"                LDRNEH  R0, [R7,#6] \n"
"                CMPNE   R0, #3 \n"
"                BNE     loc_FF882ACC \n"
"                LDR     R0, [R7,#0x6C] \n"
"                ADD     R0, R0, #1 \n"
"                STR     R0, [R7,#0x6C] \n"
"                LDRH    R1, [R7,#6] \n"
"                CMP     R1, #3 \n"
"                LDRNE   R1, [R7,#0x54] \n"
"                LDREQ   R1, =0x3E9 \n"
"                MUL     R0, R1, R0 \n"
"                LDREQ   R1, =0x1770 \n"
"                LDRNE   R1, [R7,#0x50] \n"
"                BL      sub_FFB94040 \n"
"                MOV     R4, R0 \n"
"                BL      sub_FF98D988 \n"
"                LDR     R0, [R7,#0x8C] \n"
"                CMP     R0, R4 \n"
"                BNE     loc_FF882FA8 \n"
"                LDR     R0, [R7,#0x3C] \n"
"                CMP     R0, #1 \n"
"                BNE     loc_FF882FBC \n"

"loc_FF882FA8: \n"
"                LDR     R1, [R7,#0x98] \n"
"                MOV     R0, R4 \n"
"                BLX     R1 \n"
"                STR     R4, [R7,#0x8C] \n"
"                STR     R8, [R7,#0x3C] \n"

"loc_FF882FBC: \n"
"                STR     R8, [R7,#0x38] \n"
"                B       loc_FF882ACC \n"
	);
}
