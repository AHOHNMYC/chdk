#include "lolevel.h"
#include "platform.h"
#include "core.h"


#include "stdlib.h"

static long *nrflag = (long*)0x6164;

#include "../../../generic/capt_seq.c"

void __attribute__((naked,noinline)) capt_seq_task(){
	asm volatile (
		"STMFD   SP!, {R4,LR}\n"
		"SUB     SP, SP, #4\n"
		"MOV     R4, SP\n"
		"B       loc_FFD34C78\n"
	"loc_FFD34B20:\n"
		"LDR     R2, [SP,#0xC-0xC]\n"
		"LDR     R3, [R2]\n"
		"MOV     R0, R2\n"
		"CMP     R3, #0x15\n"
		"LDRLS   PC, [PC,R3,LSL#2]\n"
		"B       loc_FFD34C4C\n"
		".long loc_FFD34B90\n"
		".long loc_FFD34B9C\n"
		".long loc_FFD34BA4\n"
		".long loc_FFD34BB4\n"
		".long loc_FFD34BAC\n"
		".long loc_FFD34BBC\n"
		".long loc_FFD34BC4\n"
		".long loc_FFD34BD0\n"
		".long loc_FFD34BD8\n"
		".long loc_FFD34BE4\n"
		".long loc_FFD34BEC\n"
		".long loc_FFD34BF4\n"
		".long loc_FFD34BFC\n"
		".long loc_FFD34C04\n"
		".long loc_FFD34C0C\n"
		".long loc_FFD34C18\n"
		".long loc_FFD34C20\n"
		".long loc_FFD34C28\n"
		".long loc_FFD34C30\n"
		".long loc_FFD34C3C\n"
		".long loc_FFD34C44\n"
		".long loc_FFD34C60\n"
	"loc_FFD34B90:\n"
		"BL      sub_FFD3646C\n"
		"BL      shooting_expo_param_override\n"   // +
		"BL      sub_FFD3279C\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34B9C:\n"
         //       "BL      sub_FFD34704\n"
		"BL      sub_FFD34704_my\n"	//-------->
		"B       loc_FFD34C5C\n"
	"loc_FFD34BA4:\n"
		"BL      sub_FFD36804\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BAC:\n"
		"BL      sub_FFD356C0\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BB4:\n"
		"BL      sub_FFD35AF8\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BBC:\n"
		"BL      sub_FFD35B08\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BC4:\n"
		"BL      sub_FFD36550\n"
		"BL      sub_FFD3279C\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BD0:\n"
		"BL      sub_FFD34810\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BD8:\n"
		"BL      sub_FFD365B8\n"
		"BL      sub_FFD3279C\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BE4:\n"
		"BL      sub_FFD35AF8\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BEC:\n"
		"BL      sub_FFD36D94\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BF4:\n"
		"BL      sub_FFD370D8\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34BFC:\n"
		"BL      sub_FFD3715C\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C04:\n"
		"BL      sub_FFD3724C\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C0C:\n"
		"MOV     R0, #0\n"
		"BL      sub_FFD37314\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C18:\n"
		"BL      sub_FFD37480\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C20:\n"
		"BL      sub_FFD37514\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C28:\n"
		"BL      sub_FFD375D4\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C30:\n"
		"MOV     R0, #1\n"
		"BL      sub_FFD37314\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C3C:\n"
		"BL      sub_FFD376C0\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C44:\n"
		"BL      sub_FFD37714\n"
		"B       loc_FFD34C5C\n"
	"loc_FFD34C4C:\n"
		"MOV     R1, #0x36C\n"
		"LDR     R0, =0xFFD34490\n"
		"ADD     R1, R1, #1\n"
		"BL      sub_FFC03AE8\n"
	"loc_FFD34C5C:\n"
		"LDR     R2, [SP,#0xC-0xC]\n"
	"loc_FFD34C60:\n"
		"LDR     R3, =0x64CD4\n"
		"LDR     R1, [R2,#4]\n"
		"LDR     R0, [R3]\n"
		"BL      sub_FFC0F9A8\n"
		"LDR     R0, [SP,#0xC-0xC]\n"
		"BL      sub_FFD3450C\n"
	"loc_FFD34C78:\n"
		"LDR     R3, =0x64CD8\n"
		"MOV     R1, R4\n"
		"LDR     R0, [R3]\n"
		"MOV     R2, #0\n"
		"BL      sub_FFC100C0\n"
		"TST     R0, #1\n"
		"BEQ     loc_FFD34B20\n"
		"MOV     R1, #0x2A4\n"
		"LDR     R0, =0xFFD34490\n"
		"ADD     R1, R1, #3\n"
		"BL      sub_FFC03AE8\n"
		"BL      sub_FFC1161C\n"
		"ADD     SP, SP, #4\n"
		"LDMFD   SP!, {R4,PC}\n"
	);
}





void __attribute__((naked,noinline)) sub_FFD37A98_my(long p)
{
	asm volatile (
		"STMFD   SP!, {R4-R6,LR}\n"
		"LDR     R3, =0x64D4C\n"
		"LDR     R5, =0x6160\n"		// nrflag - 4
		"SUB     SP, SP, #4\n"
		//"LDR     R1, =0xFFFFFFFF\n"       //MOVL
                "MVN     R1, #0\n"                      //MOVL
		"STR     R0, [R5]\n"
		"LDR     R0, [R3]\n"
		"BL      sub_FFC0FB44\n"
		"LDR     R3, =0x8F360\n"
		"LDR     R0, [R3,#0x74]\n"
		"BL      sub_FFC8C01C\n"
		"BL      sub_FFD379EC\n"
        //    "BL      wait_until_remote_button_is_released\n"
		"BL      capt_seq_hook_set_nr\n" // +
		"LDR     R3, =0x6168\n"
		"LDR     R0, [R3]\n"

		"B       sub_FFD37AD0\n"
	);
}



void __attribute__((naked,noinline)) sub_FFD34704_my(long p)
{
	asm volatile (
		"STMFD   SP!, {R4,LR}\n"
		"LDR     R4, [R0,#0xC]\n"
		"BL      sub_FFD3CE2C\n"
		"CMP     R0, #0\n"
		"BNE     sub_FFD3471C\n"
		"BL      sub_FFD3CE38\n"
	"sub_FFD3471C:\n"
		"MOV     R0, #0xC\n"
		"BL      sub_FFD3CE4C\n"
		"TST     R0, #1\n"
		"MOV     R2, R4\n"
		"MOV     R0, R4\n"
		"BEQ     sub_FFD34744\n"
		"MOV     R0, #1\n"
		"MOV     R1, R0\n"
		"LDMFD   SP!, {R4,LR}\n"
		"B       sub_FFD32BF8\n"
	"sub_FFD34744:\n"
		"BL      sub_FFD36814\n"
		"TST     R0, #1\n"
		"MOV     R2, R4\n"
		"MOV     R1, #1\n"
		"BEQ     sub_FFD34760\n"
		"LDMFD   SP!, {R4,LR}\n"
		"B       sub_FFD32BF8\n"
	"sub_FFD34760:\n"
		"BL      sub_FFD74E34\n"
		"BL      sub_FFC146EC\n"
		"LDR     R2, =0x8F2A4\n"
		"ADD     R3, R4, R4,LSL#1\n"
		"STR     R0, [R2,R3,LSL#5]\n"
		"MOV     R0, R4\n"
		"BL      sub_FFD38204\n"
		"BL      sub_FFD36D54\n"
		"BL      sub_FFD36CDC\n"
		"MOV     R0, R4\n"
		"BL      sub_FFD37A98_my\n"  //---------->
        //        "BL      sub_FFD37A98\n"
                "BL      capt_seq_hook_raw_here\n"  // +
		"MOV     R2, R4\n"
		"MOV     R1, #1\n"
		"BL      sub_FFD32BF8\n"
		"LDMFD   SP!, {R4,LR}\n"
		"B       sub_FFD37C90\n"

	);
}

/***************************************************************************/

void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
                 "STMFD   SP!, {R4-R8,LR}\n"
                 "SUB     SP, SP, #0x14\n"
                 "MOV     R7, SP\n"
                 "B       loc_FFCE3DD0\n"
 "loc_FFCE39E4:\n"
                 "CMP     R2, #0x1F\n"
                 "BNE     loc_FFCE39FC\n"
                 "LDR     R0, [R12,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R12,#0x4C]\n"
                 "B       loc_FFCE3A5C\n"
 "loc_FFCE39FC:\n"
                 "CMP     R2, #0x1A\n"
                 "BNE     loc_FFCE3A10\n"
                 "MOV     R0, R12\n"
                 "BL      sub_FFCE3904\n"
                 "B       loc_FFCE3A4C\n"
 "loc_FFCE3A10:\n"
                 "CMP     R2, #0x1B\n"
                 "BNE     loc_FFCE3A24\n"
                 "MOV     R0, R12\n"
                 "BL      sub_FFCE3940\n"
                 "B       loc_FFCE3A4C\n"
 "loc_FFCE3A24:\n"
                 "SUB     R3, R2, #0x1C\n"
                 "CMP     R3, #1\n"
                 "BHI     loc_FFCE3A3C\n"
                 "MOV     R0, R12\n"
                 "BL      sub_FFCE397C\n"
                 "B       loc_FFCE3A4C\n"
 "loc_FFCE3A3C:\n"
                 "CMP     R2, #0x1E\n"
                 "BNE     loc_FFCE3A68\n"
                 "BL      sub_FFC97868\n"
                 "BL      sub_FFC99658\n"
 "loc_FFCE3A4C:\n"
                 "LDR     R3, [SP]\n"
                 "LDR     R0, [R3,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R3,#0x4C]\n"
 "loc_FFCE3A5C:\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE16C4\n"
                 "B       loc_FFCE3DD0\n"
 "loc_FFCE3A68:\n"
                 "CMP     R2, #0xD\n"
                 "MOV     R8, #1\n"
                 "BNE     loc_FFCE3AD8\n"
                 "LDR     R1, [R12,#0x40]\n"
                 "ADD     R1, R1, R1,LSL#1\n"
                 "ADD     R1, R12, R1,LSL#1\n"
                 "ADD     R6, SP, #0xC\n"
                 "SUB     R1, R1, #2\n"
                 "MOV     R2, #6\n"
                 "MOV     R0, R6\n"
                 "BL      sub_FFEC3588\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE2B94\n"
                 "LDR     R3, [SP]\n"
                 "LDR     R1, [R3,#0x40]\n"
                 "LDR     R2, [R3,#0x50]\n"
                 "ADD     R0, R3, #4\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R3,#0x4C]\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE2D18\n"
                 "LDR     R3, [SP]\n"
                 "ADD     R0, R3, #4\n"
                 "LDR     R1, [R3,#0x40]\n"
                 "LDR     R2, [R3,#0x58]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R3,#0x54]\n"
                 "B       loc_FFCE3D80\n"
 "loc_FFCE3AD8:\n"
                 "SUB     R3, R2, #0xE\n"
                 "CMP     R3, #1\n"
                 "BHI     loc_FFCE3B94\n"
                 "ADD     R6, SP, #0xC\n"
                 "ADD     R5, SP, #4\n"
                 "MOV     R0, R12\n"
                 "MOV     R1, R6\n"
                 "MOV     R2, R5\n"
                 "BL      sub_FFCE2D94\n"
                 "MOV     R4, R0\n"
                 "CMP     R4, #5\n"
                 "CMPNE   R4, #1\n"
                 "BNE     loc_FFCE3B2C\n"
                 "LDR     R12, [SP]\n"
                 "MOV     R0, R5\n"
                 "LDR     R1, [R12,#0x40]\n"
                 "MOV     R2, R4\n"
                 "LDR     R3, [R12,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R12,#0x4C]\n"
                 "B       loc_FFCE3B64\n"
 "loc_FFCE3B2C:\n"
                 "CMP     R4, #6\n"
                 "CMPNE   R4, #2\n"
                 "BNE     loc_FFCE3B74\n"
                 "LDR     R12, [SP]\n"
                 "MOV     R0, R5\n"
                 "MOV     R1, R8\n"
                 "MOV     R2, R4\n"
                 "LDR     R3, [R12,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R12,#0x4C]\n"
                 "MOV     R1, R6\n"
                 "LDR     R0, [SP]\n"
                 "MOV     R2, R5\n"
                 "BL      sub_FFCE3740\n"
 "loc_FFCE3B64:\n"
                 "MOV     R1, R4\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE38E4\n"
                 "B       loc_FFCE3D80\n"
 "loc_FFCE3B74:\n"
                 "LDR     R12, [SP]\n"
                 "MOV     R2, R4\n"
                 "ADD     R0, R12, #4\n"
                 "LDR     R1, [R12,#0x40]\n"
                 "LDR     R3, [R12,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R12,#0x4C]\n"
                 "B       loc_FFCE3D80\n"
 "loc_FFCE3B94:\n"
                 "SUB     R3, R2, #0x17\n"
                 "CMP     R3, #1\n"
                 "BHI     loc_FFCE3BEC\n"
                 "LDR     R1, [R12,#0x40]\n"
                 "ADD     R1, R1, R1,LSL#1\n"
                 "ADD     R1, R12, R1,LSL#1\n"
                 "ADD     R6, SP, #0xC\n"
                 "SUB     R1, R1, #2\n"
                 "MOV     R2, #6\n"
                 "MOV     R0, R6\n"
                 "BL      sub_FFEC3588\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE26C8\n"
                 "LDR     R3, [SP]\n"
                 "ADD     R0, R3, #4\n"
                 "LDR     R1, [R3,#0x40]\n"
                 "LDR     R2, [R3,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R3,#0x4C]\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE2898\n"
                 "B       loc_FFCE3D80\n"
 "loc_FFCE3BEC:\n"
                 "ADD     R6, SP, #0xC\n"
                 "ADD     R1, R12, #4\n"
                 "MOV     R2, #6\n"
                 "MOV     R0, R6\n"
                 "BL      sub_FFEC3588\n"
                 "LDR     R12, [SP]\n"
                 "LDR     R3, [R12]\n"
                 "MOV     R2, R12\n"
                 "CMP     R3, #0x19\n"
                 "LDRLS   PC, [PC,R3,LSL#2]\n"
                 "B       loc_FFCE3D6C\n"
                 ".long loc_FFCE3C80\n"
                 ".long loc_FFCE3C8C\n"
                 ".long loc_FFCE3C98\n"
                 ".long loc_FFCE3C98\n"
                 ".long loc_FFCE3C80\n"
                 ".long loc_FFCE3C8C\n"
                 ".long loc_FFCE3C98\n"
                 ".long loc_FFCE3C98\n"
                 ".long loc_FFCE3CBC\n"
                 ".long loc_FFCE3CBC\n"
                 ".long loc_FFCE3D40\n"
                 ".long loc_FFCE3D4C\n"
                 ".long loc_FFCE3D5C\n"
                 ".long loc_FFCE3D6C\n"
                 ".long loc_FFCE3D6C\n"
                 ".long loc_FFCE3D6C\n"
                 ".long loc_FFCE3CA4\n"
                 ".long loc_FFCE3CB0\n"
                 ".long loc_FFCE3CCC\n"
                 ".long loc_FFCE3CD8\n"
                 ".long loc_FFCE3D00\n"
                 ".long loc_FFCE3D28\n"
                 ".long loc_FFCE3D28\n"
                 ".long loc_FFCE3D6C\n"
                 ".long loc_FFCE3D6C\n"
                 ".long loc_FFCE3D34\n"
 "loc_FFCE3C80:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE1C68\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3C8C:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE1DA4\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3C98:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE1ED4\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3CA4:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE20A8\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3CB0:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE21B0\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3CBC:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE2274_my\n"   //------------->
                 "MOV     R8, #0\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3CCC:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE2334\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3CD8:\n"
                 "MOV     R0, R2\n"
                 "LDRH    R2, [R2,#4]\n"
                 "LDR     R3, =0x401A4\n"
                 "STRH    R2, [SP,#0xC]\n"
                 "LDRH    R1, [R3,#4]\n"
                 "STRH    R1, [SP,#0x10]\n"
                 "LDRH    R3, [R3,#2]\n"
                 "STRH    R3, [SP,#0xE]\n"
                 "BL      sub_FFCE24BC\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D00:\n"
                 "LDR     R3, =0x401A4\n"
                 "LDRH    R1, [R3]\n"
                 "STRH    R1, [SP,#0xC]\n"
                 "MOV     R0, R2\n"
                 "LDRH    R2, [R2,#6]\n"
                 "STRH    R2, [SP,#0xE]\n"
                 "LDRH    R3, [R3,#4]\n"
                 "STRH    R3, [SP,#0x10]\n"
                 "BL      sub_FFCE2550\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D28:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE25D0\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D34:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE2928\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D40:\n"
                 "MOV     R0, R2\n"
                 "BL      sub_FFCE29FC\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D4C:\n"
                 "MOV     R0, R2\n"
                 "MOV     R1, #0\n"
                 "BL      sub_FFCE2AE8\n"
                 "B       loc_FFCE3D68\n"
 "loc_FFCE3D5C:\n"
                 "MOV     R0, R2\n"
                 "MOV     R1, #1\n"
                 "BL      sub_FFCE2AE8\n"
 "loc_FFCE3D68:\n"
                 "LDR     R12, [SP]\n"
 "loc_FFCE3D6C:\n"
                 "ADD     R0, R12, #4\n"
                 "LDR     R1, [R12,#0x40]\n"
                 "LDR     R2, [R12,#0x50]\n"
                 "MOV     LR, PC\n"
                 "LDR     PC, [R12,#0x4C]\n"
 "loc_FFCE3D80:\n"
                 "CMP     R8, #1\n"
                 "BNE     loc_FFCE3DA8\n"
                 "LDR     R1, [SP]\n"
                 "LDR     R3, [R1,#0x40]\n"
                 "ADD     R3, R3, R3,LSL#1\n"
                 "ADD     R1, R1, R3,LSL#1\n"
                 "MOV     R0, R6\n"
                 "SUB     R1, R1, #2\n"
                 "BL      sub_FFCE1AD8\n"
                 "B       loc_FFCE3DC8\n"
 "loc_FFCE3DA8:\n"
                 "MOV     R0, #1\n"
                 "MOV     R1, R0\n"
                 "MOV     R2, R0\n"
                 "BL      sub_FFCE1A7C\n"
                 "MOV     R0, #1\n"
                 "MOV     R1, R0\n"
                 "MOV     R2, R0\n"
                 "BL      sub_FFCE1B94\n"
 "loc_FFCE3DC8:\n"
                 "LDR     R0, [SP]\n"
                 "BL      sub_FFCE16C4\n"
 "loc_FFCE3DD0:\n"
                 "LDR     R3, =0x4019C\n"
                 "MOV     R2, #0\n"
                 "LDR     R0, [R3]\n"
                 "MOV     R1, R7\n"
                 "BL      sub_FFC100C0\n"
                 "LDR     R12, [SP]\n"
                 "LDR     R2, [R12]\n"
                 "CMP     R2, #0x20\n"
                 "BNE     loc_FFCE39E4\n"
                 "MOV     R0, R12\n"
                 "BL      sub_FFCE16C4\n"
                 "LDR     R3, =0x40198\n"
                 "MOV     R1, #1\n"
                 "LDR     R0, [R3]\n"
                 "BL      sub_FFC0F9A8\n"
                 "BL      sub_FFC1161C\n"
                 "ADD     SP, SP, #0x14\n"
                 "LDMFD   SP!, {R4-R8,PC}\n"
  );
}


void __attribute__((naked,noinline)) sub_FFCE2274_my(){
 asm volatile(
                 "STMFD   SP!, {R4,R5,LR}\n"
                 "LDR     R3, =0x40198\n"
                 "MOV     R4, R0\n"
                 "MOV     R1, #0xE\n"
                 "LDR     R0, [R3]\n"
                 "BL      sub_FFC0FB44\n"
                 "MOV     R1, #0\n"
                 "LDRSH   R0, [R4,#4]\n"
                 "BL      sub_FFCE17A0\n"
                 "MOV     R5, R0\n"
                 "LDRSH   R0, [R4,#6]\n"
                 "BL      sub_FFCE1914\n"
                 "LDRSH   R0, [R4,#8]\n"
                 "BL      sub_FFCE19B0\n"
                 "LDR     R3, [R4]\n"
                 "CMP     R3, #9\n"
                 "MOVEQ   R5, #0\n"
                 "CMP     R5, #1\n"
                 "LDR     R1, =0xFFCE16F8\n"
                 "MOV     R2, #2\n"
                 "BNE     loc_FFCE22E0\n"
                 "LDRSH   R0, [R4,#4]\n"
                 "BL      sub_FFE6D32C\n"
                 "LDR     R2, =0x401C4\n"
                 "MOV     R3, #0\n"
                 "STR     R3, [R2]\n"
                 "B       loc_FFCE22E4\n"
 "loc_FFCE22E0:\n"
                 "BL      sub_FFCE1A4C\n"
 "loc_FFCE22E4:\n"
                 "STRH    R0, [R4,#4]\n"
                 "LDRSH   R0, [R4,#6]\n"
                 "BL      sub_FFC974F0_my\n"  //------------>
                 "LDRSH   R0, [R4,#8]\n"
                 "MOV     R1, #1\n"
                 "BL      sub_FFC99218\n"
                 "MOV     R1, #0\n"
                 "ADD     R0, R4, #8\n"
                 "BL      sub_FFC992D8\n"
                 "CMP     R5, #1\n"
                 "MOV     R1, #2\n"
                 "MOV     R2, #0\n"
                 "LDMNEFD SP!, {R4,R5,PC}\n"
                 "LDR     R3, =0x40198\n"
                 "LDR     R0, [R3]\n"
                 "LDMFD   SP!, {R4,R5,LR}\n"
                 "B       sub_FFC0F998\n"
 );
}

void __attribute__((naked,noinline)) sub_FFC974F0_my(){
 asm volatile(
                 "STMFD   SP!, {R4,LR}\n"
                 "LDR     R3, =0x5334\n"
                 "LDR     R2, [R3]\n"
                 "MOV     R1, #0x114\n"
                 "MOV     R3, R0,LSL#16\n"
                 "CMP     R2, #1\n"
                 "ADD     R1, R1, #1\n"
                 "LDR     R0, =0xFFC96F6C\n"
                 "MOV     R4, R3,ASR#16\n"
                 "BEQ     loc_FFC9751C\n"
                 "BL      sub_FFC03AE8\n"
 "loc_FFC9751C:\n"
                 "MOV     R1, #0x118\n"
                 "CMN     R4, #0xC00\n"
                 "LDR     R3, =0x32DAE\n"
                 "LDR     R0, =0xFFC96F6C\n"
                 "ADD     R1, R1, #3\n"
                 "LDREQSH R4, [R3]\n"
                 "LDRNE   R3, =0x32DAE\n"
                 "CMN     R4, #0xC00\n"
                 "STRH    R4, [R3]\n"
                 "BNE     loc_FFC97548\n"
                 "BL      sub_FFC03AE8\n"
 "loc_FFC97548:\n"
                 "MOV     R0, R4\n"
                 "BL      apex2us\n"
                 "MOV     R4, R0\n"
         //      "BL      nullsub_47\n"
                 "MOV     R0, R4\n"
                 "BL      sub_FFC96B24\n"
                 "TST     R0, #1\n"
                 "MOV     R1, #0x120\n"
                 "LDR     R0, =0xFFC96F6C\n"
                 "LDMEQFD SP!, {R4,PC}\n"
                 "LDMFD   SP!, {R4,LR}\n"
                 "B       sub_FFC03AE8\n"
 );
}

