#include "conf.h"

void change_video_tables(int a, int b){}

void  set_quality(int *x){ // -17 highest; +12 lowest
    if (conf.video_mode) 
        *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}

//** movie_record_task  @ 0xFF193D4C 

void __attribute__((naked,noinline)) movie_record_task() {
asm volatile (
      "STMFD   SP!, {R2-R10,LR} \n"
      "LDR     R6, =0xFF1929D4 \n"
      "LDR     R7, =0xFF193740 \n" //This function was used to take values for set_quality -->
      "LDR     R4, =0xA180 \n"
      "LDR     R9, =0x69B \n"
      "LDR     R10, =0x2710 \n"
      "MOV     R8, #1 \n"
      "MOV     R5, #0 \n"
"loc_FF193D6C:\n"
      "LDR     R0, [R4, #0x24] \n"
      "MOV     R2, #0 \n"
      "ADD     R1, SP, #4 \n"
      "BL      sub_0068BBE4 \n" //RAM
      "LDR     R0, [R4, #0x2C] \n"
      "CMP     R0, #0 \n"
      "LDRNE   R0, [R4, #0xC] \n"
      "CMPNE   R0, #2 \n"
      "LDRNE   R0, [R4, #0x44] \n"
      "CMPNE   R0, #6 \n"
      "BNE     loc_FF193EA8 \n"
      "LDR     R0, [SP, #4] \n"
      "LDR     R1, [R0] \n"
      "SUB     R1, R1, #2 \n"
      "CMP     R1, #0xD \n"
      "ADDCC   PC, PC, R1, LSL #2 \n"
      "B       loc_FF193EA8 \n"
      "B       loc_FF193E48 \n" //(01)
      "B       loc_FF193E6C \n" //(02)
      "B       loc_FF193E7C \n" //(03)
      "B       loc_FF193E84 \n" //(04)
      "B       loc_FF193E8C \n" //(05)
      "B       loc_FF193E94 \n" //(06)
      "B       loc_FF193E50 \n" //(07)
      "B       loc_FF193E9C \n" //(08)
      "B       loc_FF193E5C \n" //(09)
      "B       loc_FF193EA8 \n" //(10)
      "B       loc_FF193EA4 \n" //(11)
      "B       loc_FF193E14 \n" //(12)
      "B       loc_FF193DE4 \n" //(13)
"loc_FF193DE4:\n" //Jump Table entry (13)
      "STR     R5, [R4, #0x40] \n"
      "STR     R5, [R4, #0x30] \n"
      "STR     R5, [R4, #0x34] \n"
      "STRH    R5, [R4, #6] \n"
      "STR     R6, [R4, #0xD4] \n"
      "STR     R7, [R4, #0xF0] \n"
      "LDR     R0, [R4, #0xC] \n"
      "ADD     R0, R0, #1 \n"
      "STR     R0, [R4, #0xC] \n"
      "MOV     R0, #6 \n"
      "STR     R0, [R4, #0x44] \n"
      "B       loc_FF193E34 \n"
"loc_FF193E14:\n" //Jump Table entry (12)
      "STR     R5, [R4, #0x40] \n"
      "STR     R5, [R4, #0x30] \n"
      "STR     R6, [R4, #0xD4] \n"
      "STR     R7, [R4, #0xF0] \n"
      "LDR     R0, [R4, #0xC] \n"
      "ADD     R0, R0, #1 \n"
      "STR     R0, [R4, #0xC] \n"
      "STR     R8, [R4, #0x44] \n"
"loc_FF193E34:\n"
      "LDR     R2, =0xFF191EAC \n"
      "LDR     R1, =0xBE25C \n"
      "LDR     R0, =0xFF191FC0 \n"
      "BL      sub_FF03C868 \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E48:\n" //Jump Table entry (01)
      "BL      unlock_optical_zoom \n" //added
      "BL      sub_FF1932CC \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E50:\n" //Jump Table entry (07)
      "LDR     R1, [R4, #0xF0] \n"
      "BLX     R1 \n"
//begin patch
      "LDR	   R0, =0xA204 \n"		// added, 0xA208-0x4 taken from  "loc_:" see commented function below.
      "BL      set_quality \n"		// added
//end patch      
      "B       loc_FF193EA8 \n"
"loc_FF193E5C:\n" //Jump Table entry (09)
      "LDR     R1, [R0, #0x18] \n"
      "LDR     R0, [R0, #4] \n"
      "BL      sub_FF318C3C \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E6C:\n" //Jump Table entry (02)
      "LDR     R0, [R4, #0x44] \n"
      "CMP     R0, #5 \n"
      "STRNE   R8, [R4, #0x34] \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E7C:\n" //Jump Table entry (03)
      "BL      sub_FF19263C \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E84:\n" //Jump Table entry (04)
      "BL      sub_FF192320 \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E8C:\n" //Jump Table entry (05)
      "BL      sub_FF192024 \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E94:\n" //Jump Table entry (06)
      "BL      sub_FF191BD4 \n"
      "B       loc_FF193EA8 \n"
"loc_FF193E9C:\n" //Jump Table entry (08)
      "BL      sub_FF191B54 \n"
      "B       loc_FF193EA8 \n"
"loc_FF193EA4:\n" //Jump Table entry (11)
      "BL      sub_FF194480 \n"
"loc_FF193EA8:\n" //Jump Table entry (10)
      "LDR     R1, [SP, #4] \n"
      "LDR     R3, =0xFF1917EC \n"
      "STR     R5, [R1] \n"
      "STR     R9, [SP] \n"
      "LDR     R0, [R4, #0x28] \n"
      "MOV     R2, R10 \n"
      "BL      sub_0068AF18 \n"
      "B       loc_FF193D6C \n"
	);
}

//This function was used to take values for set_quality
//** sub_FF1B7CB4_my  @ 0xFF193740 
/*
void __attribute__((naked,noinline)) sub_FF1B7CB4_my(  ) { 
asm volatile (
      "STMFD   SP!, {R4-R11,LR} \n"
      "SUB     SP, SP, #0x64 \n"
      "MOV     R9, #0 \n"
      "LDR     R8, =0xA180 \n"
      "STR     R9, [SP, #0x54] \n"
      "STR     R9, [SP, #0x4C] \n"
      "STR     R9, [R8, #0xD8] \n"
      "STR     R9, [R8, #0xDC] \n"
      "STR     R9, [R8, #0xE0] \n"
      "STR     R9, [R8, #0xE4] \n"
      "MOV     R4, R0 \n"
      "STR     R9, [R8, #0xE8] \n"
      "LDR     R0, [R8, #0x44] \n"
      "MOV     R6, R9 \n"
      "CMP     R0, #3 \n"
      "MOVEQ   R0, #4 \n"
      "STREQ   R0, [R8, #0x44] \n"
      "LDR     R0, [R8, #0xD4] \n"
      "MOV     R5, #1 \n"
      "MOV     R7, R9 \n"
      "BLX     R0 \n"
      "LDR     R0, [R8, #0x44] \n"
      "CMP     R0, #6 \n"
      "BEQ     loc_FF1937B4 \n"
      "LDR     R1, [R8, #0xC] \n"
      "CMP     R1, #2 \n"
      "BNE     loc_FF1937DC \n"
      "CMP     R0, #5 \n"
      "BEQ     loc_FF1937EC \n"
"loc_FF1937B4:\n"
      "LDR     R2, =0xFF193614 \n"
      "LDR     R1, =0xFF193678 \n"
      "LDR     R0, =0xFF1936DC \n"
      "MOV     R7, #1 \n"
      "ADD     R3, SP, #0x30 \n"
      "BL      sub_FF03D37C \n"
      "LDR     R0, [R8, #0x44] \n"
      "CMP     R0, #4 \n"
      "MOVNE   R5, #0 \n"
      "B       loc_FF1937FC \n"
"loc_FF1937DC:\n"
      "CMP     R0, #4 \n"
      "BEQ     loc_FF1937FC \n"
      "CMP     R1, #2 \n"
      "BNE     loc_FF1937F4 \n"
"loc_FF1937EC:\n"
      "MOV     R0, #0 \n"
      "BL      sub_FF03D388 \n"
"loc_FF1937F4:\n"
      "ADD     SP, SP, #0x64 \n"
      "LDMFD   SP!, {R4-R11,PC} \n"
"loc_FF1937FC:\n"
      "LDRH    R0, [R8, #6] \n"
      "CMP     R0, #3 \n"
      "BNE     loc_FF193830 \n"
      "LDR     R0, [R8, #0xEC] \n"
      "CMP     R0, #0 \n"
      "LDREQ   R1, =0x8E8 \n"
      "LDREQ   R0, =0xFF1917EC \n"
      "BLEQ    _DebugAssert \n"
      "LDR     R0, [R8, #0x6C] \n"
      "LDR     R1, [R8, #0xEC] \n"
      "BL      sub_00690934 \n"
      "CMP     R1, #0 \n"
      "MOVNE   R5, #0 \n"
"loc_FF193830:\n"
      "LDR     R0, [R8, #0x44] \n"
      "CMP     R0, #6 \n"
      "CMPNE   R0, #1 \n"
      "CMPNE   R0, #3 \n"
      "BNE     loc_FF193874 \n"
      "CMP     R7, #1 \n"
      "CMPEQ   R5, #0 \n"
      "BNE     loc_FF193874 \n"
      "BL      sub_FF03D380 \n"
      "LDR     R0, [R8, #0x18] \n"
      "MOV     R1, #0x3E8 \n"
      "BL      _TakeSemaphore \n"
      "CMP     R0, #9 \n"
      "BNE     loc_FF193CB0 \n"
      "MOV     R0, #0x90000 \n"
      "BL      sub_FF026354 \n"
      "B       loc_FF1937F4 \n"
"loc_FF193874:\n"
      "CMP     R5, #1 \n"
      "MOV     R10, #1 \n"
      "BNE     loc_FF19389C \n"
      "ADD     R3, SP, #0x4C \n"
      "ADD     R2, SP, #0x50 \n"
      "ADD     R1, SP, #0x54 \n"
      "ADD     R0, SP, #0x58 \n"
      "BL      sub_FF318DE0 \n"
      "MOVS    R9, R0 \n"
      "BNE     loc_FF1938B8 \n"
"loc_FF19389C:\n"
      "LDR     R0, [R8, #0x34] \n"
      "CMP     R0, #1 \n"
      "BNE     loc_FF193A04 \n"
      "LDR     R0, [R8, #0x6C] \n"
      "LDR     R1, [R8, #0x48] \n"
      "CMP     R0, R1 \n"
      "BCC     loc_FF193A04 \n"
"loc_FF1938B8:\n"
      "MOV     R0, R9 \n"
      "BL      sub_FF192B00 \n"
      "LDR     R0, [R8, #0xC] \n"
      "CMP     R0, #2 \n"
      "BNE     loc_FF193924 \n"
      "LDR     R0, =0xFF193608 \n"
      "MOV     R1, #0 \n"
      "BL      sub_FF2D00C0 \n"
      "LDR     R1, [R8, #0x64] \n"
      "LDR     R2, =0xBE2A8 \n"
      "ADD     R3, SP, #0x5C \n"
      "ADD     R0, SP, #0x30 \n"
      "STRD    R0, [SP, #0x10] \n"
      "STRD    R2, [SP, #0x18] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "MVN     R3, #1 \n"
      "ADD     R0, SP, #0x60 \n"
      "STMEA   SP, {R0-R3} \n"
      "MOV     R3, #0 \n"
      "LDR     R0, =0xBE308 \n"
      "MOV     R2, R3 \n"
      "MOV     R1, #0x40 \n"
      "BL      sub_FF2CFFFC \n"
      "B       loc_FF19397C \n"
"loc_FF19391C:\n"
      "MOV     R1, #1 \n"
      "B       loc_FF193BF4 \n"
"loc_FF193924:\n"
      "BL      sub_FF194598 \n"
      "LDR     R2, [R8, #0x64] \n"
      "ADD     R3, SP, #0x5C \n"
      "MVN     R1, #1 \n"
      "MOV     R0, #0 \n"
      "ADD     R5, SP, #0x1C \n"
      "STMIA   R5, {R0-R3} \n"
      "LDR     R3, [R4, #0x1C] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "ADD     R0, SP, #0x60 \n"
      "ADD     R4, SP, #0xC \n"
      "STMIA   R4, {R0-R3} \n"
      "MOV     R3, #0 \n"
      "MOV     R1, #0x40 \n"
      "STMEA   SP, {R1,R3} \n"
      "MOV     R2, #0 \n"
      "STR     R3, [SP, #8] \n"
      "LDR     R3, =0xBE308 \n"
      "MOV     R1, R2 \n"
      "MOV     R0, R2 \n"
      "BL      sub_FF2CE3BC \n"
"loc_FF19397C:\n"
      "LDR     R0, [R8, #0x18] \n"
      "LDR     R1, [R8, #0x60] \n"
      "BL      _TakeSemaphore \n"
      "CMP     R0, #9 \n"
      "BEQ     loc_FF19391C \n"
      "LDR     R0, [SP, #0x5C] \n"
      "CMP     R0, #0 \n"
      "BEQ     loc_FF1939A4 \n"
"loc_FF19399C:\n"
      "MOV     R1, #1 \n"
      "B       loc_FF193C0C \n"
"loc_FF1939A4:\n"
      "LDR     R0, [R8, #0xC] \n"
      "MOV     R4, #5 \n"
      "CMP     R0, #2 \n"
      "MOV     R0, #1 \n"
      "BNE     loc_FF1939F0 \n"
      "BL      sub_FF2D0070 \n"
      "BL      sub_FF2D0098 \n"
      "BL      sub_FF03D384 \n"
      "MOV     R0, #0 \n"
      "BL      sub_FF03D388 \n"
      "BL      sub_FF03D398 \n"
      "STR     R4, [R8, #0x44] \n"
      "LDR     R0, [R8, #0x64] \n"
      "CMP     R0, #1 \n"
      "BLEQ    sub_FF2D0DB8 \n"
      "BL      sub_FF194598 \n"
      "BL      sub_FF03D3F4 \n"
      "STR     R10, [R8, #0x44] \n"
      "B       loc_FF1939FC \n"
"loc_FF1939F0:\n"
      "BL      sub_FF2CE468 \n"
      "BL      sub_FF2CE514 \n"
      "STR     R4, [R8, #0x44] \n"
"loc_FF1939FC:\n"
      "STR     R6, [R8, #0x34] \n"
      "B       loc_FF1937F4 \n"
"loc_FF193A04:\n"
      "CMP     R5, #1 \n"
      "BNE     loc_FF193CA8 \n"
      "STR     R10, [R8, #0x38] \n"
      "LDR     R0, [R8, #0x6C] \n"
      "LDR     R11, [R4, #0xC] \n"
      "CMP     R0, #0 \n"
      "LDRNE   R9, [SP, #0x58] \n"
      "LDRNE   R10, [SP, #0x54] \n"
      "BNE     loc_FF193B2C \n"
      "LDR     R0, [R8, #0xC] \n"
      "CMP     R0, #2 \n"
      "BNE     loc_FF193A84 \n"
      "LDR     R0, =0xFF193608 \n"
      "MOV     R1, #0 \n"
      "BL      sub_FF2D00C0 \n"
      "LDR     R1, [R8, #0x64] \n"
      "LDR     R2, =0xBE2A8 \n"
      "ADD     R3, SP, #0x5C \n"
      "ADD     R0, SP, #0x30 \n"
      "STRD    R0, [SP, #0x10] \n"
      "STRD    R2, [SP, #0x18] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "MVN     R3, #0 \n"
      "ADD     R0, SP, #0x60 \n"
      "STMEA   SP, {R0-R3} \n"
      "LDR     R0, [SP, #0x58] \n"
      "LDR     R1, [SP, #0x54] \n"
      "LDR     R2, [SP, #0x50] \n"
      "LDR     R3, [SP, #0x4C] \n"
      "BL      sub_FF2CFFFC \n"
      "B       loc_FF193AD8 \n"
"loc_FF193A84:\n"
      "LDR     R0, [R4, #0x20] \n"
      "LDR     R2, [R8, #0x64] \n"
      "ADD     R3, SP, #0x5C \n"
      "MVN     R1, #0 \n"
      "ADD     R9, SP, #0x1C \n"
      "STMIA   R9, {R0-R3} \n"
      "LDR     R3, [R4, #0x1C] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "ADD     R0, SP, #0x60 \n"
      "ADD     R9, SP, #0xC \n"
      "STMIA   R9, {R0-R3} \n"
      "LDR     R1, [SP, #0x50] \n"
      "LDR     R2, [SP, #0x54] \n"
      "LDR     R3, [SP, #0x4C] \n"
      "STMFA   SP, {R1,R3} \n"
      "STR     R2, [SP] \n"
      "LDMIB   R4, {R0,R1} \n"
      "LDR     R3, [SP, #0x58] \n"
      "MOV     R2, R11 \n"
      "BL      sub_FF2CE3BC \n"
"loc_FF193AD8:\n"
      "LDR     R0, [R8, #0x18] \n"
      "LDR     R1, [R8, #0x60] \n"
      "BL      _TakeSemaphore \n"
      "CMP     R0, #9 \n"
      "BEQ     loc_FF19391C \n"
      "LDR     R0, [SP, #0x5C] \n"
      "CMP     R0, #0 \n"
      "BNE     loc_FF19399C \n"
      "LDR     R0, [R8, #0xC] \n"
      "CMP     R0, #2 \n"
      "MOV     R0, #1 \n"
      "BNE     loc_FF193B10 \n"
      "BL      sub_FF2D0070 \n"
      "B       loc_FF193B14 \n"
"loc_FF193B10:\n"
      "BL      sub_FF2CE468 \n"
"loc_FF193B14:\n"
      "STR     R6, [R8, #0xE4] \n"
      "LDR     R0, [SP, #0x60] \n"
      "LDR     R1, [SP, #0x58] \n"
      "ADD     R9, R1, R0 \n"
      "LDR     R1, [SP, #0x54] \n"
      "SUB     R10, R1, R0 \n"
"loc_FF193B2C:\n"
      "LDR     R0, [R8, #0xC] \n"
      "CMP     R0, #2 \n"
      "BNE     loc_FF193B8C \n"
      "LDR     R0, =0xFF192AB0 \n"
      "MOV     R1, #0 \n"
      "BL      sub_FF2D00C0 \n"
      "LDR     R1, [R8, #0x64] \n"
      "LDR     R2, =0xBE2A8 \n"
      "ADD     R0, SP, #0x30 \n"
      "ADD     R3, SP, #0x5C \n"
      "STRD    R0, [SP, #0x10] \n"
      "STRD    R2, [SP, #0x18] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "LDR     R3, [R8, #0x68] \n"
      "ADD     R0, SP, #0x60 \n"
      "STMEA   SP, {R0-R3} \n"
      "LDR     R2, [SP, #0x50] \n"
      "LDR     R3, [SP, #0x4C] \n"
      "MOV     R1, R10 \n"
      "MOV     R0, R9 \n"
      "BL      sub_FF2CFFFC \n"
      "BL      sub_FF03D380 \n"
      "B       loc_FF193BDC \n"
"loc_FF193B8C:\n"
      "LDR     R0, [R4, #0x20] \n"
      "LDR     R1, [R8, #0x68] \n"
      "LDR     R2, [R8, #0x64] \n"
      "ADD     R3, SP, #0x5C \n"
      "ADD     R12, SP, #0x1C \n"
      "STMIA   R12, {R0-R3} \n"
      "LDR     R3, [R4, #0x1C] \n"
      "LDR     R1, [R8, #0x84] \n"
      "LDR     R2, [R8, #0x88] \n"
      "ADD     R0, SP, #0x60 \n"
      "ADD     R12, SP, #0xC \n"
      "STMIA   R12, {R0-R3} \n"
      "LDR     R2, [SP, #0x50] \n"
      "LDR     R3, [SP, #0x4C] \n"
      "STMFA   SP, {R2,R3} \n"
      "STR     R10, [SP] \n"
      "LDMIB   R4, {R0,R1} \n"
      "MOV     R3, R9 \n"
      "MOV     R2, R11 \n"
      "BL      sub_FF2CE3BC \n"
"loc_FF193BDC:\n"
      "LDR     R0, [R8, #0x18] \n"
      "LDR     R1, [R8, #0x60] \n"
      "BL      _TakeSemaphore \n"
      "CMP     R0, #9 \n"
      "BNE     loc_FF193BFC \n"
      "MOV     R1, #0 \n"
"loc_FF193BF4:\n"
      "MOV     R0, #0x90000 \n"
      "B       loc_FF193C10 \n"
"loc_FF193BFC:\n"
      "LDR     R0, [SP, #0x5C] \n"
      "CMP     R0, #0 \n"
      "BEQ     loc_FF193C18 \n"
      "MOV     R1, #0 \n"
"loc_FF193C0C:\n"
      "MOV     R0, #0xA0000 \n"
"loc_FF193C10:\n"
      "BL      sub_FF192EE0 \n"
      "B       loc_FF1937F4 \n"
"loc_FF193C18:\n"
      "LDR     R0, [R8, #0xC] \n"
      "CMP     R0, #2 \n"
      "MOV     R0, #0 \n"
      "BNE     loc_FF193C30 \n"
      "BL      sub_FF2D0070 \n"
      "B       loc_FF193C34 \n"
"loc_FF193C30:\n"
      "BL      sub_FF2CE468 \n"
"loc_FF193C34:\n"
      "LDR     R0, [SP, #0x58] \n"
      "LDR     R1, [SP, #0x60] \n"
      "BL      sub_FF319058 \n"
      "LDR     R0, [R8, #0x68] \n"
      "LDR     R3, =0xA208 \n"        // <- 0xA208
      "ADD     R1, R0, #1 \n"
      "STR     R1, [R8, #0x68] \n"
      "LDR     R0, [SP, #0x60] \n"
      "SUB     R2, R3, #4 \n"         // <- -4
      "BL      sub_FF314DA8 \n"
#if 0
      "LDR	   R0, =0xA204 \n"		// added, 0xA208-0x4
      "BL      set_quality \n"		// added
#endif
      "LDR     R0, [R8, #0x64] \n"
      "CMP     R0, #1 \n"
      "BNE     loc_FF193CA8 \n"
      "ADD     R0, SP, #0x48 \n"
      "BL      sub_FF2D0E18 \n"
      "LDR     R1, =0xBE278 \n"
      "LDR     R0, [R1, #4] \n"
      "LDR     R1, [R1] \n"
      "SUB     R2, R0, #0x400 \n"
      "SUBS    R2, R2, #0x38 \n"
      "ADDEQ   R0, R0, #8 \n"
      "MOV     R1, R1, LSR #4 \n"
      "MOV     R0, R0, LSR #4 \n"
      "MUL     R1, R0, R1 \n"
      "LDR     R0, [SP, #0x48] \n"
      "BL      sub_00690934 \n"
      "LDR     R1, =0xBE2A8 \n"
      "STR     R0, [SP, #0x48] \n"
      "BL      sub_FF3150E0 \n"
"loc_FF193CA8:\n"
      "CMP     R7, #1 \n"
      "BNE     loc_FF193CBC \n"
"loc_FF193CB0:\n"
      "BL      sub_FF03D384 \n"
      "MOV     R0, #1 \n"
      "BL      sub_FF03D388 \n"
"loc_FF193CBC:\n"
      "CMP     R5, #1 \n"
      "LDRNEH  R0, [R8, #6] \n"
      "CMPNE   R0, #3 \n"
      "BNE     loc_FF1937F4 \n"
      "LDR     R0, [R8, #0x6C] \n"
      "ADD     R0, R0, #1 \n"
      "STR     R0, [R8, #0x6C] \n"
      "LDRH    R1, [R8, #6] \n"
      "CMP     R1, #3 \n"
      "LDRNE   R1, [R8, #0x54] \n"
      "MULNE   R0, R1, R0 \n"
      "LDRNE   R1, [R8, #0x50] \n"
      "BNE     loc_FF193D0C \n"
      "LDR     R1, [R8, #0x58] \n"
      "CMP     R1, #0x19 \n"
      "LDRNE   R1, =0x3E9 \n"
      "MOVEQ   R1, #0x3E8 \n"
      "MUL     R0, R1, R0 \n"
      "LDRNE   R1, =0x1770 \n"
      "LDREQ   R1, =0x1388 \n"
"loc_FF193D0C:\n"
      "BL      sub_00690934 \n"
      "MOV     R4, R0 \n"
      "BL      sub_FF31971C \n"
      "LDR     R0, [R8, #0x8C] \n"
      "CMP     R0, R4 \n"
      "BNE     loc_FF193D30 \n"
      "LDR     R0, [R8, #0x3C] \n"
      "CMP     R0, #1 \n"
      "BNE     loc_FF193D44 \n"
"loc_FF193D30:\n"
      "LDR     R1, [R8, #0xB8] \n"
      "MOV     R0, R4 \n"
      "BLX     R1 \n"
      "STR     R4, [R8, #0x8C] \n"
      "STR     R6, [R8, #0x3C] \n"
"loc_FF193D44:\n"
      "STR     R6, [R8, #0x38] \n"
      "B       loc_FF1937F4 \n"
	);
}
*/
