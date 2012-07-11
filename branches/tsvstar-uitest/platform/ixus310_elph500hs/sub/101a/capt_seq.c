#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)(0x7514+0x8);  // FF18775C & FF1877C8
#define NR_AUTO (0)							// have to explictly reset value back to 0 to enable auto
#define PAUSE_FOR_FILE_COUNTER 100          // Enable delay in capt_seq_hook_raw_here to ensure file counter is updated

#include "../../../generic/capt_seq.c"

//void __attribute__((naked,noinline)) hangdebug() {
//	debug_led(1);
//	while(1);
//}

//@ 0xff074f1c
void __attribute__((naked,noinline)) capt_seq_task() {

asm volatile (

	"STMFD SP!, {R3-R9,LR}\n"
	"LDR	R5, =0x3E1F4\n"
	"LDR	R7, =0x2F1C\n"
	"MOV	R6, #0\n"

"loc_FF074F2C:\n"
	"LDR	R0, [R7,#4]\n"
	"MOV	R2, #0\n"
	"MOV	R1, SP\n"
	"BL		sub_FF02ADD8\n"
	"TST	R0, #1\n"
	"BEQ	loc_FF074F58\n"
	"LDR	R1, =0x47A\n"
	"LDR	R0, =0xFF074A44\n"	// aSsshoottask_c
	"BL		_DebugAssert\n"
	"BL		_ExitTask\n"
	"LDMFD SP!, {R3-R9,PC}\n"

"loc_FF074F58:\n"
	"LDR	R0, [SP]\n"
	"LDR	R1, [R0]\n"
	"CMP	R1, #0x23\n"
	"ADDCC	PC, PC, R1,LSL#2\n"

"                 B       loc_FF0751A8\n"
"                 B       loc_FF074FF8\n"
"                 B       loc_FF075010\n"
"                 B       loc_FF075048\n"
"                 B       loc_FF07505C\n"
"                 B       loc_FF075054\n"
"                 B       loc_FF075068\n"
"                 B       loc_FF075070\n"
"                 B       loc_FF075078\n"
"                 B       loc_FF075094\n"
"                 B       loc_FF0750D4\n"
"                 B       loc_FF0750A0\n"
"                 B       loc_FF0750AC\n"
"                 B       loc_FF0750B4\n"
"                 B       loc_FF0750BC\n"
"                 B       loc_FF0750C4\n"
"                 B       loc_FF0750CC\n"
"                 B       loc_FF0750DC\n"
"                 B       loc_FF0750E4\n"
"                 B       loc_FF0750EC\n"
"                 B       loc_FF0750F4\n"
"                 B       loc_FF0750FC\n"
"                 B       loc_FF075108\n"
"                 B       loc_FF075110\n"
"                 B       loc_FF075118\n"
"                 B       loc_FF075120\n"
"                 B       loc_FF075128\n"
"                 B       loc_FF075134\n"
"                 B       loc_FF07513C\n"
"                 B       loc_FF075144\n"
"                 B       loc_FF07514C\n"
"                 B       loc_FF075154\n"
"                 B       loc_FF07515C\n"
"                 B       loc_FF075164\n"
"                 B       loc_FF075170\n"
"                 B       loc_FF0751B4\n"

// jump table entry 0
"loc_FF074FF8:\n"

"		BL	shooting_expo_iso_override\n"  		    // added

"		BL	sub_FF0756E8 \n"

"		BL	shooting_expo_param_override\n"  		// added

"		BL	sub_FF072758 \n"

"		MOV     R0, #0\n"							// added
"		STR     R0, [R5,#0x28]\n"					// added, fixes overrides  behavior at short shutter press (from S95)

//"		LDR	R0, [R5,#0x28] \n"						// above two lines make this code redundant
//"		CMP	R0, #0 \n"								// above two lines make this code redundant
//"		BLNE	sub_FF184F18 \n"					// above two lines make this code redundant

"		B	loc_FF0751B4 \n"

// jump table entry 1
"loc_FF075010: \n"

"       BL      wait_until_remote_button_is_released\n"	// +++
"       BL      capt_seq_hook_set_nr\n"           		// +++

"		LDR		R8, [R0,#0xC] \n"
"       MOV     R0, R8 \n"
"       BL      sub_FF184DA8 \n"

"       BL      capt_seq_hook_raw_here\n"           // added					 

"       MOV     R4, R0 \n"
"       MOV     R2, R8 \n"
"       MOV     R1, #1 \n"
"       BL      sub_FF0730E8 \n"
"       TST     R4, #1 \n"
"       BNE     loc_FF075040 \n"
"       MOV     R0, R8 \n"
"       BL      sub_FF1847F0 \n"
"       B       loc_FF0751B4 \n"

"loc_FF075040: \n"
"		BL		sub_FF1847C0 \n"
"		B		loc_FF0751B4 \n"

// jump table entry 2
"loc_FF075048: \n"
"		MOV	R0, #1 \n"
"		BL	sub_FF0759C8 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 4
"loc_FF075054: \n"
"		BL	sub_FF075368 \n"
"		B	loc_FF075060 \n"

// jump table entry 3
"loc_FF07505C: \n"
"		BL	sub_FF0756C8 \n"
"loc_FF075060: \n"
"		STR	R6, [R5,#0x28] \n"
"		B	loc_FF0751B4 \n"

// jump table entry 5
"loc_FF075068: \n"
"		BL	sub_FF0756D0 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 6
"loc_FF075070: \n"
"		BL	sub_FF0758BC \n"
"		B	loc_FF075098 \n"

// jump table entry 7
"loc_FF075078: \n"
"		LDR	R4, [R0,#0xC] \n"
"       MOV R0, R4 \n"
"		BL	sub_FF184F6C \n"
"       MOV R2, R4 \n"
"       MOV R1, #9 \n"
"       BL  sub_FF0730E8 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 8
"loc_FF075094: \n"
"		BL	sub_FF075930 \n"
"loc_FF075098: \n"
"		BL	sub_FF072758 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 10
"loc_FF0750A0: \n"
"		LDR	R0, [R5,#0x58] \n"
"		BL	sub_FF0760B0 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 11
"loc_FF0750AC: \n"
"		BL	sub_FF076384 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 12
"loc_FF0750B4: \n"
"		BL	sub_FF0763E8 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 13
"loc_FF0750BC: \n"
"		BL	sub_FF0765E4 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 14
"loc_FF0750C4: \n"
"		BL	sub_FF076A34 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 15
"loc_FF0750CC: \n"
"		BL	sub_FF076AE4 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 9
"loc_FF0750D4: \n"
"		BL	sub_FF0756C8 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 16
"loc_FF0750DC: \n"
"		BL	sub_FF183B04 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 17
"loc_FF0750E4: \n"
"		BL	sub_FF183D18 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 18
"loc_FF0750EC: \n"
"		BL	sub_FF183DBC \n"
"		B	loc_FF0751B4 \n"

// jump table entry 19
"loc_FF0750F4: \n"
"		BL	sub_FF183E8C \n"
"		B	loc_FF0751B4 \n"

// jump table entry 20
"loc_FF0750FC: \n"
"       MOV R0, #0 \n"
"		BL	sub_FF18409C \n"
"		B	loc_FF0751B4 \n"

// jump table entry 21
"loc_FF075108: \n"
"		BL	sub_FF184204 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 22
"loc_FF075110:\n"
"		BL	sub_FF18429C \n"
"		B	loc_FF0751B4 \n"

// jump table entry 23
"loc_FF075118: \n"
"		BL	sub_FF18437C \n"
"		B	loc_FF0751B4 \n"

// jump table entry 24
"loc_FF075120: \n"
"		BL	sub_FF075B38 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 25
"loc_FF075128: \n"
"		BL	sub_FF075BCC \n"
"		BL	sub_FF028484 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 26
"loc_FF075134: \n"
"		BL	sub_FF183F58 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 27
"loc_FF07513C: \n"
"		BL	sub_FF183F98 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 28
"loc_FF075144: \n"
"		BL	sub_FF078EF0 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 29
"loc_FF07514C: \n"
"		BL	sub_FF078F6C \n"
"		B	loc_FF0751B4 \n"

// jump table entry 30
"loc_FF075154: \n"
"		BL	sub_FF1844B4 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 31
"loc_FF07515C: \n"
"		BL	sub_FF184518 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 32
"loc_FF075164: \n"
"		BL	sub_FF078FC8 \n"
"		BL	sub_FF078F88 \n"
"		B	loc_FF0751B4 \n"

// jump table entry 33
"loc_FF075170: \n"
"		MOV	R0, #1 \n"
"		BL	sub_FF185744 \n"
"		MOV	R0, #1 \n"
"		BL	sub_FF18586C \n"
"		LDRH	R0, [R5,#0x98] \n"
"		CMP	R0, #4 \n"
"		LDRNEH	R0, [R5] \n"
"		SUBNE	R1, R0, #0x8200 \n"
"		SUBNES	R1, R1, #0x2A \n"
"		BNE	loc_FF0751B4 \n"
"		BL	sub_FF078F6C \n"
"		BL	sub_FF079584 \n"
"		BL	sub_FF0793EC \n"
"		B	loc_FF0751B4 \n"

// jump table default entry
"loc_FF0751A8: \n"
"		LDR	R1, =0x5DB \n"
"		LDR	R0, =0xFF074A44 \n"	// aSsshoottask_c
"		BL	_DebugAssert \n"

// jump table entry 34
"loc_FF0751B4: \n"
"		LDR	R0, [SP] \n"
"		LDR	R1, [R0,#4] \n"
"		LDR	R0, [R7] \n"
"		BL	sub_FF07FAC8 \n"
"		LDR	R4, [SP] \n"
"		LDR	R0, [R4,#8] \n"
"		CMP	R0, #0 \n"
"		LDREQ	R0, =0xFF074A44 \n"	// aSsshoottask_c
"		MOVEQ	R1, #0x118 \n"
"		BLEQ	_DebugAssert \n"
"		STR	R6, [R4,#8] \n"
"		B	loc_FF074F2C \n"
	);
}

/*************************************************************/
// @ 0xff0bdd18
void __attribute__((naked,noinline)) exp_drv_task(){

 asm volatile(
"               STMFD   SP!, {R4-R9,LR} \n"
"               SUB     SP, SP, #0x24 \n"
"               LDR     R6, =0x4348 \n"
"               LDR     R7, =0xBB8 \n"
"               LDR     R4, =0x59ADC \n"
"               MOV     R0, #0 \n"
"               ADD     R5, SP, #0x14 \n"
"               STR     R0, [SP,#0x10] \n"
"loc_FF0BDD38: \n"
"               LDR     R0, [R6,#0x20] \n"
"               MOV     R2, #0 \n"
"               ADD     R1, SP, #0x20 \n"
"               BL      sub_FF02ADD8 \n"
"               LDR     R0, [SP,#0x10] \n"
"               CMP     R0, #1 \n"
"               BNE     loc_FF0BDD84 \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R0, [R0] \n"
"               CMP     R0, #0x14 \n"
"               CMPNE   R0, #0x15 \n"
"               CMPNE   R0, #0x16 \n"
"               CMPNE   R0, #0x17 \n"
"               BEQ     loc_FF0BDEE4 \n"
"               CMP     R0, #0x29 \n"
"               BEQ     loc_FF0BDE6C \n"
"               ADD     R1, SP, #0x10 \n"
"               MOV     R0, #0 \n"
"               BL      sub_FF0BDCC8 \n"
"loc_FF0BDD84: \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R1, [R0] \n"
"               CMP     R1, #0x2F \n"
"               BNE     loc_FF0BDDB0 \n"
"               BL      sub_FF0BF144 \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R1, #1 \n"
"               BL      sub_FF07FAC8 \n"
"               BL      _ExitTask \n"
"               ADD     SP, SP, #0x24 \n"
"               LDMFD   SP!, {R4-R9,PC} \n"
"loc_FF0BDDB0: \n"
"               CMP     R1, #0x2E \n"
"               BNE     loc_FF0BDDCC \n"
"               LDR     R2, [R0,#0x8C]! \n"
"               LDR     R1, [R0,#4] \n"
"               MOV     R0, R1 \n"
"               BLX     R2 \n"
"               B       loc_FF0BE374 \n"
"loc_FF0BDDCC: \n"
"               CMP     R1, #0x27 \n"
"               BNE     loc_FF0BDE1C \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R1, #0x80 \n"
"               BL      sub_FF07FAFC \n"
"               LDR     R0, =0xFF0B8FAC \n" // sub_FF0B8FAC
"               MOV     R1, #0x80 \n"
"               BL      sub_FF17581C \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R2, R7 \n"
"               MOV     R1, #0x80 \n"
"               BL      sub_FF07FA08 \n"
"               TST     R0, #1 \n"
"               LDRNE   R1, =0x1756 \n"
"               BNE     loc_FF0BDED8 \n"
"loc_FF0BDE08: \n"
"               LDR     R1, [SP,#0x20] \n"
"               LDR     R0, [R1,#0x90] \n"
"               LDR     R1, [R1,#0x8C] \n"
"               BLX     R1 \n"
"               B       loc_FF0BE374 \n"
"loc_FF0BDE1C: \n"
"               CMP     R1, #0x28 \n"
"               BNE     loc_FF0BDE64 \n"
"               ADD     R1, SP, #0x10 \n"
"               BL      sub_FF0BDCC8 \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R1, #0x100 \n"
"               BL      sub_FF07FAFC \n"
"               LDR     R0, =0xFF0B8FBC \n" // sub_FF0B8FBC
"               MOV     R1, #0x100 \n"
"               BL      sub_FF176224 \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R2, R7 \n"
"               MOV     R1, #0x100 \n"
"               BL      sub_FF07FA08 \n"
"               TST     R0, #1 \n"
"               BEQ     loc_FF0BDE08 \n"
"               LDR     R1, =0x1760 \n"
"               B       loc_FF0BDED8 \n"
"loc_FF0BDE64: \n"
"               CMP     R1, #0x29 \n"
"               BNE     loc_FF0BDE7C \n"
"loc_FF0BDE6C: \n"
"               LDR     R0, [SP,#0x20] \n"
"               ADD     R1, SP, #0x10 \n"
"               BL      sub_FF0BDCC8 \n"
"               B       loc_FF0BDE08 \n"
"loc_FF0BDE7C: \n"
"               CMP     R1, #0x2C \n"
"               BNE     loc_FF0BDE94 \n"
"               BL      sub_FF0AA8EC \n"
"               BL      sub_FF0AB55C \n"
"               BL      sub_FF0AB0D4 \n"
"               B       loc_FF0BDE08 \n"
"loc_FF0BDE94: \n"
"               CMP     R1, #0x2D \n"
"               BNE     loc_FF0BDEE4 \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R1, #4 \n"
"               BL      sub_FF07FAFC \n"
"               LDR     R1, =0xFF0B8FDC \n" //sub_FF0B8FDC
"               LDR     R0, =0xFFFFF400 \n"
"               MOV     R2, #4 \n"
"               BL      sub_FF0AA360 \n"
"               BL      sub_FF0AA5F0 \n"
"               LDR     R0, [R6,#0x1C] \n"
"               MOV     R2, R7 \n"
"               MOV     R1, #4 \n"
"               BL      sub_FF07F924 \n"
"               TST     R0, #1 \n"
"               BEQ     loc_FF0BDE08 \n"
"               LDR     R1, =0x1788 \n"
"loc_FF0BDED8: \n"
"               LDR     R0, =0xFF0B976C \n" //"ExpDrv.c"
"               BL      _DebugAssert \n"
"               B       loc_FF0BDE08 \n"
"loc_FF0BDEE4: \n"
"               LDR     R0, [SP,#0x20] \n"
"               MOV     R8, #1 \n"
"               LDR     R1, [R0] \n"
"               CMP     R1, #0x12 \n"
"               CMPNE   R1, #0x13 \n"
"               BNE     loc_FF0BDF4C \n"
"               LDR     R1, [R0,#0x7C] \n"
"               ADD     R1, R1, R1,LSL#1 \n"
"               ADD     R1, R0, R1,LSL#2 \n"
"               SUB     R1, R1, #8 \n"
"               LDMIA   R1, {R2,R3,R9} \n"
"               STMIA   R5, {R2,R3,R9} \n"
"               BL      sub_FF0BC020 \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R1, [R0,#0x7C] \n"
"               LDR     R3, [R0,#0x8C] \n"
"               LDR     R2, [R0,#0x90] \n"
"               ADD     R0, R0, #4 \n"
"               BLX     R3 \n"
"               LDR     R0, [SP,#0x20] \n"
"               BL      sub_FF0BF558 \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R1, [R0,#0x7C] \n"
"               LDR     R2, [R0,#0x98] \n"
"               LDR     R3, [R0,#0x94] \n"
"               B       loc_FF0BE260 \n"
"loc_FF0BDF4C: \n"
"               CMP     R1, #0x14 \n"
"               CMPNE   R1, #0x15 \n"
"               CMPNE   R1, #0x16 \n"
"               CMPNE   R1, #0x17 \n"
"               BNE     loc_FF0BE004 \n"
"               ADD     R3, SP, #0x10 \n"
"               ADD     R2, SP, #0x4 \n"
"               ADD     R1, SP, #0x14 \n"
"               BL      sub_FF0BC288 \n"
"               CMP     R0, #1 \n"
"               MOV     R9, R0 \n"
"               CMPNE   R9, #5 \n"
"               BNE     loc_FF0BDFA0 \n"
"               LDR     R0, [SP,#0x20] \n"
"               MOV     R2, R9 \n"
"               LDR     R1, [R0,#0x7C]! \n"
"               LDR     R12, [R0,#0x10]! \n"
"               LDR     R3, [R0,#4] \n"
"               ADD     R0, SP, #0x4 \n"
"               BLX     R12 \n"
"               B       loc_FF0BDFD8 \n"
"loc_FF0BDFA0: \n"
"               LDR     R0, [SP,#0x20] \n"
"               CMP     R9, #2 \n"
"               LDR     R3, [R0,#0x90] \n"
"               CMPNE   R9, #6 \n"
"               BNE     loc_FF0BDFEC \n"
"               LDR     R12, [R0,#0x8C] \n"
"               MOV     R2, R9 \n"
"               MOV     R1, #1 \n"
"               ADD     R0, SP, #0x4 \n"
"               BLX     R12 \n"
"               LDR     R0, [SP,#0x20] \n"
"               ADD     R2, SP, #0x4 \n"
"               ADD     R1, SP, #0x14 \n"
"               BL      sub_FF0BDA14 \n"
"loc_FF0BDFD8: \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R2, [SP,#0x10] \n"
"               MOV     R1, R9 \n"
"               BL      sub_FF0BDC68 \n"
"               B       loc_FF0BE268 \n"
"loc_FF0BDFEC: \n"
"               LDR     R1, [R0,#0x7C] \n"
"               LDR     R12, [R0,#0x8C] \n"
"               MOV     R2, R9 \n"
"               ADD     R0, R0, #4 \n"
"               BLX     R12 \n"
"               B       loc_FF0BE268 \n"
"loc_FF0BE004: \n"
"               CMP     R1, #0x23 \n"
"               CMPNE   R1, #0x24 \n"
"               BNE     loc_FF0BE050 \n"
"               LDR     R1, [R0,#0x7C] \n"
"               ADD     R1, R1, R1,LSL#1 \n"
"               ADD     R1, R0, R1,LSL#2 \n"
"               SUB     R1, R1, #8 \n"
"               LDMIA   R1, {R2,R3,R9} \n"
"               STMIA   R5, {R2,R3,R9} \n"
"               BL      sub_FF0BAE10 \n"
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R1, [R0,#0x7C] \n"
"               LDR     R3, [R0,#0x8C] \n"
"               LDR     R2, [R0,#0x90] \n"
"               ADD     R0, R0, #4 \n"
"               BLX     R3 \n"
"               LDR     R0, [SP,#0x20] \n"
"               BL      sub_FF0BB2FC \n"
"               B       loc_FF0BE268 \n"
"loc_FF0BE050: \n"
"               ADD     R1, R0, #4 \n"
"               LDMIA   R1, {R2,R3,R9} \n"
"               STMIA   R5, {R2,R3,R9} \n"
"               LDR     R1, [R0] \n"
"               CMP     R1, #0x27 \n"
"               ADDCC   PC, PC, R1,LSL#2 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE108 \n"
"               B       loc_FF0BE108 \n"
"               B       loc_FF0BE110 \n"
"               B       loc_FF0BE118 \n"
"               B       loc_FF0BE118 \n"
"               B       loc_FF0BE118 \n"
"               B       loc_FF0BE108 \n"
"               B       loc_FF0BE110 \n"
"               B       loc_FF0BE118 \n"
"               B       loc_FF0BE118 \n"
"               B       loc_FF0BE130 \n"
"               B       loc_FF0BE130 \n"
"               B       loc_FF0BE23C \n"
"               B       loc_FF0BE244 \n"
"               B       loc_FF0BE244 \n"
"               B       loc_FF0BE244 \n"
"               B       loc_FF0BE244 \n"
"               B       loc_FF0BE24C \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE120 \n"
"               B       loc_FF0BE128 \n"
"               B       loc_FF0BE128 \n"
"               B       loc_FF0BE13C \n"
"               B       loc_FF0BE13C \n"
"               B       loc_FF0BE144 \n"
"               B       loc_FF0BE17C \n"
"               B       loc_FF0BE1B4 \n"
"               B       loc_FF0BE1EC \n"
"               B       loc_FF0BE224 \n"
"               B       loc_FF0BE224 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE250 \n"
"               B       loc_FF0BE22C \n"
"               B       loc_FF0BE234 \n"
"loc_FF0BE108: \n"
// jumptable FF0BE064 entries 0,1,6
"               BL      sub_FF0B95A0 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE110: \n"
// jumptable FF0BE064 entries 2,7
"               BL      sub_FF0B9898 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE118: \n"
// jumptable FF0BE064 entries 3-5,8,9
"               BL      sub_FF0B9B00 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE120: \n"
// jumptable FF0BE064 entry 24
"               BL      sub_FF0B9DB4 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE128: \n"
// jumptable FF0BE064 entries 25,26
"               BL      sub_FF0B9FCC \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE130: \n"
// jumptable FF0BE064 entries 10,11
//"               BL      sub_FF0BA488 \n"
"               BL      sub_FF0BA488_my \n"     // patched
"               MOV     R8, #0 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE13C: \n"
// jumptable FF0BE064 entries 27,28
"               BL      sub_FF0BA66C \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE144: \n"
// jumptable FF0BE064 entry 29
"               LDRH    R1, [R0,#4] \n"
"               STRH    R1, [SP,#0x14] \n"
"               LDRH    R1, [R4,#2] \n"
"               STRH    R1, [SP,#0x16] \n"
"               LDRH    R1, [R4,#4] \n"
"               STRH    R1, [SP,#0x18] \n"
"               LDRH    R1, [R4,#6] \n"
"               STRH    R1, [SP,#0x1A] \n"
"               LDRH    R1, [R0,#0xC] \n"
"               STRH    R1, [SP,#0x1C] \n"
"               LDRH    R1, [R4,#0xA] \n"
"               STRH    R1, [SP,#0x1E] \n"
"               BL      sub_FF0BF1D8 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE17C: \n"
//; jumptable FF0BE064 entry 30
"               LDRH    R1, [R0,#4] \n"
"               STRH    R1, [SP,#0x14] \n"
"               LDRH    R1, [R4,#2] \n"
"               STRH    R1, [SP,#0x16] \n"
"               LDRH    R1, [R4,#4] \n"
"               STRH    R1, [SP,#0x18] \n"
"               LDRH    R1, [R4,#6] \n"
"               STRH    R1, [SP,#0x1A] \n"
"               LDRH    R1, [R4,#8] \n"
"               STRH    R1, [SP,#0x1C] \n"
"               LDRH    R1, [R4,#0xA] \n"
"               STRH    R1, [SP,#0x1E] \n"
"               BL      sub_FF0BF358 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE1B4: \n"
//; jumptable FF0BE064 entry 31
"               LDRH    R1, [R4] \n"
"               STRH    R1, [SP,#0x14] \n"
"               LDRH    R1, [R0,#6] \n"
"               STRH    R1, [SP,#0x16] \n"
"               LDRH    R1, [R4,#4] \n"
"               STRH    R1, [SP,#0x18] \n"
"               LDRH    R1, [R4,#6] \n"
"               STRH    R1, [SP,#0x1A] \n"
"               LDRH    R1, [R4,#8] \n"
"               STRH    R1, [SP,#0x1C] \n"
"               LDRH    R1, [R4,#0xA] \n"
"               STRH    R1, [SP,#0x1E] \n"
"               BL      sub_FF0BF40C \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE1EC: \n"
//; jumptable FF0BE064 entry 32
"               LDRH    R1, [R4] \n"
"               STRH    R1, [SP,#0x14] \n"
"               LDRH    R1, [R4,#2] \n"
"               STRH    R1, [SP,#0x16] \n"
"               LDRH    R1, [R4,#4] \n"
"               STRH    R1, [SP,#0x18] \n"
"               LDRH    R1, [R4,#6] \n"
"               STRH    R1, [SP,#0x1A] \n"
"               LDRH    R1, [R0,#0xC] \n"
"               STRH    R1, [SP,#0x1C] \n"
"               LDRH    R1, [R4,#0xA] \n"
"               STRH    R1, [SP,#0x1E] \n"
"               BL      sub_FF0BF4B4 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE224: \n"
//; jumptable FF0BE064 entries 33,34
"               BL      sub_FF0BABE8 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE22C: \n"
//; jumptable FF0BE064 entry 37
"               BL      sub_FF0BB400 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE234: \n"
//; jumptable FF0BE064 entry 38
"               BL      sub_FF0BB90C \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE23C: \n"
//; jumptable FF0BE064 entry 12
"               BL      sub_FF0BBAEC \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE244: \n"
//; jumptable FF0BE064 entries 13-16
"               BL      sub_FF0BBCA8 \n"
"               B       loc_FF0BE250 \n"
"loc_FF0BE24C: \n"
//; jumptable FF0BE064 entry 17
"               BL      sub_FF0BBE18 \n"
"loc_FF0BE250: \n"
//; jumptable FF0BE064 default entry
//; jumptable FF0BE064 entries 18-23,35,36
"               LDR     R0, [SP,#0x20] \n"
"               LDR     R1, [R0,#0x7C] \n"
"               LDR     R2, [R0,#0x90] \n"
"               LDR     R3, [R0,#0x8C] \n"
"loc_FF0BE260: \n"
"               ADD     R0, R0, #4 \n"
"               BLX     R3 \n"
"loc_FF0BE268: \n"
"               LDR     R1, [SP,#0x20] \n"
"               LDR     R0, [R1] \n"
"               CMP     R0, #0x10 \n"
"               BEQ     loc_FF0BE2A0 \n"
"               BGT     loc_FF0BE290 \n"
"               CMP     R0, #1 \n"
"               CMPNE   R0, #4 \n"
"               CMPNE   R0, #0xE \n"
"               BNE     loc_FF0BE2B0 \n"
"               B       loc_FF0BE2A0 \n"
"loc_FF0BE290: \n"
"               CMP     R0, #0x13 \n"
"               CMPNE   R0, #0x17 \n"
"               CMPNE   R0, #0x1A \n"
"               BNE     loc_FF0BE2B0 \n"
"loc_FF0BE2A0: \n"
"               LDRH    R0, [R4] \n"
"               STRH    R0, [SP,#0x14] \n"
"               LDRH    R0, [R4,#8] \n"
"               STRH    R0, [SP,#0x1C] \n"
"loc_FF0BE2B0: \n"
"               CMP     R8, #1 \n"
"               BNE     loc_FF0BE2FC \n"
"               LDR     R0, [R1,#0x7C] \n"
"               MOV     R2, #0xC \n"
"               ADD     R0, R0, R0,LSL#1 \n"
"               ADD     R0, R1, R0,LSL#2 \n"
"               SUB     R8, R0, #8 \n"
"               LDR     R0, =0x59ADC \n"
"               ADD     R1, SP, #0x14 \n"
"               BL      sub_FF3CA090 \n"
"               LDR     R0, =0x59AE8 \n"
"               MOV     R2, #0xC \n"
"               ADD     R1, SP, #0x14 \n"
"               BL      sub_FF3CA090 \n"
"               LDR     R0, =0x59AF4 \n"
"               MOV     R2, #0xC \n"
"               MOV     R1, R8 \n"
"               BL      sub_FF3CA090 \n"
"               B       loc_FF0BE374 \n"
"loc_FF0BE2FC: \n"
"               LDR     R0, [R1] \n"
"               MOV     R3, #1 \n"
"               CMP     R0, #0xB \n"
"               BNE     loc_FF0BE340 \n"
"               MOV     R2, #0 \n"
"               STRD    R2, [SP] \n"
"               MOV     R2, R3 \n"
"               MOV     R1, R3 \n"
"               MOV     R0, #0 \n"
"               BL      sub_FF0B9374 \n"
"               MOV     R3, #1 \n"
"               MOV     R2, #0 \n"
"               STRD    R2, [SP] \n"
"               MOV     R2, R3 \n"
"               MOV     R1, R3 \n"
"               MOV     R0, #0 \n"
"               B       loc_FF0BE370 \n"
"loc_FF0BE340: \n"
"               MOV     R2, #1 \n"
"               STRD    R2, [SP] \n"
"               MOV     R3, R2 \n"
"               MOV     R1, R2 \n"
"               MOV     R0, R2 \n"
"               BL      sub_FF0B9374 \n"
"               MOV     R3, #1 \n"
"               MOV     R2, R3 \n"
"               MOV     R1, R3 \n"
"               MOV     R0, R3 \n"
"               STR     R3, [SP] \n"
"               STR     R3, [SP,#0x4] \n"
"loc_FF0BE370: \n"
"               BL      sub_FF0B94EC \n"
"loc_FF0BE374: \n"
"               LDR     R0, [SP,#0x20] \n"
"               BL      sub_FF0BF144 \n"
"               B       loc_FF0BDD38 \n"
 );
}

void __attribute__((naked,noinline)) sub_FF0BA488_my() {
	asm volatile (
"                STMFD   SP!, {R4-R8,LR} \n"
"                LDR     R7, =0x4348 \n"
"                MOV     R4, R0 \n"
"                LDR     R0, [R7,#0x1C] \n"
"                MOV     R1, #0x3E \n"
"                BL      sub_FF07FAFC \n"
"                MOV     R2, #0 \n"
"                LDRSH   R0, [R4,#4] \n"
"                MOV     R1, R2 \n"
"                BL      sub_FF0B903C \n"
"                MOV     R5, R0 \n"
"                LDRSH   R0, [R4,#6] \n"
"                BL      sub_FF0B918C \n"
"                LDRSH   R0, [R4,#8] \n"
"                BL      sub_FF0B91E4 \n"
"                LDRSH   R0, [R4,#0xA] \n"
"                BL      sub_FF0B923C \n"
"                LDRSH   R0, [R4,#0xC] \n"
"                MOV     R1, #0 \n"
"                BL      sub_FF0B9294 \n"
"                MOV     R6, R0 \n"
"                LDRSH   R0, [R4,#0xE] \n"
"                BL      sub_FF0BF174 \n"
"                LDR     R0, [R4] \n"
"                LDR     R8, =0x59AF4 \n"
"                CMP     R0, #0xB \n"
"                MOVEQ   R5, #0 \n"
"                MOVEQ   R6, R5 \n"
"                BEQ     loc_FF0BA524 \n"
"                CMP     R5, #1 \n"
"                BNE     loc_FF0BA524 \n"
"                LDRSH   R0, [R4,#4] \n"
"                LDR     R1, =0xFF0B8F9C \n"    // sub_FF0B8F9C
"                MOV     R2, #2 \n"
"                BL      sub_FF175B40 \n"
"                STRH    R0, [R4,#4] \n"
"                MOV     R0, #0 \n"
"                STR     R0, [R7,#0x28] \n"
"                B       loc_FF0BA52C \n"

"loc_FF0BA524: \n"
"                LDRH    R0, [R8] \n"
"                STRH    R0, [R4,#4] \n"

"loc_FF0BA52C: \n"
"                CMP     R6, #1 \n"
"                LDRNEH  R0, [R8,#8] \n"
"                BNE     loc_FF0BA548 \n"
"                LDRSH   R0, [R4,#0xC] \n"
"                LDR     R1, =0xFF0B9020 \n"    // sub_FF0B9020
"                MOV     R2, #0x20 \n"
"                BL      sub_FF0BF194 \n"

"loc_FF0BA548: \n"
"                STRH    R0, [R4,#0xC] \n"
"                LDRSH   R0, [R4,#6] \n"
//"                BL      sub_FF0AA65C \n"
"                BL      sub_FF0AA65C_my \n"    // patched
"				 B		 sub_FF0BA554 \n"	    // continue in firmware
	);
}

void __attribute__((naked,noinline)) sub_FF0AA65C_my() {
	asm volatile (
"                STMFD   SP!, {R4-R6,LR} \n"
"                LDR     R5, =0x3FF0 \n"
"                MOV     R4, R0 \n"
"                LDR     R0, [R5,#4] \n"
"                CMP     R0, #1 \n"
"                LDRNE   R1, =0x146 \n"
"                LDRNE   R0, =0xFF0AA494 \n" //aShutter_c
"                BLNE    _DebugAssert \n"
"                CMN     R4, #0xC00 \n"
"                LDREQSH R4, [R5,#2] \n"
"                CMN     R4, #0xC00 \n"
"                MOVEQ   R1, #0x14C \n"
"                LDRNE   R0, =0xFF0AA494 \n" //aShutter_c
"                STRH    R4, [R5,#2] \n"
"                BLEQ    _DebugAssert \n"
"                MOV     R0, R4 \n"
"                BL      apex2us \n"	    // patched
"				 B		 sub_FF0AA6A0 \n"	// continue in firmware
);
}
