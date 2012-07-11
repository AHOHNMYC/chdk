#include "lolevel.h"
#include "platform.h"
#include "core.h"

static long *nrflag = (long*)0x5A80;

#include "../../../generic/capt_seq.c"


void __attribute__((naked,noinline)) sub_FFD17F00_my() {
 asm volatile (

        "STMFD   SP!, {R0-R8,LR}\n"
        "MOV     R4, R0\n"
        "BL      sub_FFD189F8    \n"
				"MOV     R1, #0xFFFFFFFF\n"
        "BL      sub_FFC28C18\n"
        "LDR     R5, =0x5A80\n"
        "LDR     R0, [R5,#0xC]\n"
        "CMP     R0, #0\n"
        "BNE     loc_FFD17F50\n"
        "MOV     R1, #1\n"
        "MOV     R0, #0\n"
        "BL      sub_FFC0F41C    \n"
        "STR     R0, [R5,#0xC]\n"
        "MOV     R3, #0\n"
        "STR     R3, [SP]\n"
        "LDR     R3, =0xFFD1793C \n"
        "LDR     R0, =0xFFD18164\n"
        "MOV     R2, #0x400\n"
        "MOV     R1, #0x17\n"
        "BL      sub_FFC0F3E8    \n"
"loc_FFD17F50:\n"
        "MOV     R2, #4\n"
        "ADD     R1, SP, #8\n"
        "MOV     R0, #0x8A\n"
        "BL      sub_FFC6C664    \n"
        "TST     R0, #1\n"
        "LDRNE   R1, =0x3BA\n"
        "LDRNE   R0, =0xFFD17BC0\n"
        "BLNE    sub_FFC0F5E8\n"
        "LDR     R6, =0x34720\n"
        "LDR     R7, =0x3465C\n"
        "LDR     R3, [R6]\n"
        "LDRSH   R2, [R6,#0xC]\n"
        "LDRSH   R1, [R6,#0xE]\n"
        "LDR     R0, [R7,#0x88]\n"
        "BL      sub_FFCE9E5C\n"
        "BL      sub_FFC4660C    \n"
        "LDR     R3, =0x5A88\n"
        "STRH    R0, [R4,#0xA4]\n"
        "SUB     R2, R3, #4\n"
        "STRD    R2, [SP]\n"
        "MOV     R1, R0\n"
        "LDRH    R0, [R7,#0x5C]\n"
        "LDRSH   R2, [R6,#0xC]\n"
        "SUB     R3, R3, #8\n"
        "BL      sub_FFD1905C\n"
		"BL      wait_until_remote_button_is_released\n" // untested!
		"BL      capt_seq_hook_set_nr\n"
		"B       sub_FFD17FB4\n" // -> continue in firmware
 );
}
void __attribute__((naked,noinline)) sub_FFC5C5D8_my() {
 asm volatile (
        "STMFD   SP!, {R4-R6,LR}\n"
        "LDR     R4, [R0,#0xC]\n"
        "LDR     R6, =0x3465C\n"
        "LDR     R0, [R4,#8]\n"
        "MOV     R5, #0\n"
        "ORR     R0, R0, #1\n"
        "STR     R0, [R4,#8]\n"
        "LDR     R0, [R6,#0x24]\n"
        "CMP     R0, #0\n"
        "MOVEQ   R0, #2\n"
        "BLEQ    sub_FFC58AEC\n"
        "BL      sub_FFC5CAD4\n"
        "LDR     R0, [R6,#0x24]\n"
        "CMP     R0, #0\n"
        "BNE     loc_FFC5C674\n"
        "MOV     R0, R4\n"
        "BL      sub_FFC5CE74\n"
        "MOV     R0, R4\n"
        "BL      sub_FFD16AA8\n"
        "CMP     R0, #0\n"
        "MOV     R0, R4\n"
        "BEQ     loc_FFC5C64C\n"
        "BL      sub_FFD16B34    \n"
        "TST     R0, #1\n"
        "MOVNE   R2, R4\n"
        "LDMNEFD SP!, {R4-R6,LR}\n"
        "MOVNE   R1, #1\n"
        "BNE     sub_FFC5A76C    \n"
        "B       loc_FFC5C650\n"
"loc_FFC5C64C:\n"
        "BL      sub_FFD16AF8\n"
"loc_FFC5C650:\n"
        "MOV     R0, R4\n"
        "BL      sub_FFC5BD24\n"
        "MOV     R0, R4\n"
        "BL      sub_FFD17E38    \n"
        "BL      sub_FFD18864    \n"
        "MOV     R0, R4\n"
        //"BL      sub_FFD17F00    \n"
        "BL      sub_FFD17F00_my    \n"  // ---> nr setup
        "MOV     R5, R0\n"
        "B       loc_FFC5C684\n"
"loc_FFC5C674:\n"
        "LDR     R0, =0x27FC\n"
        "LDR     R0, [R0,#0x10]\n"
        "CMP     R0, #0\n"
        "MOVNE   R5, #0x1D\n"
"loc_FFC5C684:\n"
				"BL      capt_seq_hook_raw_here\n" // ++++->
        "BL      sub_FFC5F144\n"
        "BL      sub_FFC5F18C\n"
        "BL      sub_FFC5F1CC\n"
        "MOV     R2, R4\n"
        "MOV     R1, #1\n"
        "MOV     R0, R5\n"
        "BL      sub_FFC5A76C    \n"
        "BL      sub_FFD18198\n"
        "CMP     R0, #0\n"
        "LDRNE   R0, [R4,#8]\n"
        "ORRNE   R0, R0, #0x2000\n"
        "STRNE   R0, [R4,#8]\n"
        "LDMFD   SP!, {R4-R6,PC}\n"
  );
}

void __attribute__((naked,noinline)) task_CaptSeqTask_my() {
	asm volatile (
        "STMFD   SP!, {R3-R9,LR}\n"
        "LDR     R6, =0x27FC\n"
        "LDR     R4, =0x3465C\n"
        "MOV     R9, #1\n"
        "MOV     R7, #0\n"
"loc_FFC5C1FC:\n"
        "LDR     R0, [R6,#4]\n"
        "MOV     R2, #0\n"
        "MOV     R1, SP\n"
        "BL      sub_FFC28E74    \n"
        "TST     R0, #1\n"
        "BEQ     loc_FFC5C228\n"
        "LDR     R1, =0x5B4\n"
        "LDR     R0, =0xFFC5BDA0\n"
        "BL      sub_FFC0F5E8\n"
        "BL      sub_FFC0F3A0    \n"
        "LDMFD   SP!, {R3-R9,PC}\n"
"loc_FFC5C228:\n"
        "LDR     R0, [SP]\n"
        "LDR     R1, [R0]\n"
        "CMP     R1, #0x1D\n"
        "ADDLS   PC, PC, R1,LSL#2\n"
        "B       loc_FFC5C4B0\n"
"loc_FFC5C23C:\n"
        "B       loc_FFC5C2B4\n"
"loc_FFC5C240:\n"
        "B       loc_FFC5C318\n"
"loc_FFC5C244:\n"
        "B       loc_FFC5C354\n"
"loc_FFC5C248:\n"
        "B       loc_FFC5C368\n"
"loc_FFC5C24C:\n"
        "B       loc_FFC5C360\n"
"loc_FFC5C250:\n"
        "B       loc_FFC5C370\n"
"loc_FFC5C254:\n"
        "B       loc_FFC5C378\n"
"loc_FFC5C258:\n"
        "B       loc_FFC5C380\n"
"loc_FFC5C25C:\n"
        "B       loc_FFC5C3D8\n"
"loc_FFC5C260:\n"
        "B       loc_FFC5C400\n"
"loc_FFC5C264:\n"
        "B       loc_FFC5C3E4\n"
"loc_FFC5C268:\n"
        "B       loc_FFC5C3F0\n"
"loc_FFC5C26C:\n"
        "B       loc_FFC5C3F8\n"
"loc_FFC5C270:\n"
        "B       loc_FFC5C408\n"
"loc_FFC5C274:\n"
        "B       loc_FFC5C410\n"
"loc_FFC5C278:\n"
        "B       loc_FFC5C418\n"
"loc_FFC5C27C:\n"
        "B       loc_FFC5C420\n"
"loc_FFC5C280:\n"
        "B       loc_FFC5C428\n"
"loc_FFC5C284:\n"
        "B       loc_FFC5C434\n"
"loc_FFC5C288:\n"
        "B       loc_FFC5C43C\n"
"loc_FFC5C28C:\n"
        "B       loc_FFC5C444\n"
"loc_FFC5C290:\n"
        "B       loc_FFC5C44C\n"
"loc_FFC5C294:\n"
        "B       loc_FFC5C454\n"
"loc_FFC5C298:\n"
        "B       loc_FFC5C460\n"
"loc_FFC5C29C:\n"
        "B       loc_FFC5C468\n"
"loc_FFC5C2A0:\n"
        "B       loc_FFC5C470\n"
"loc_FFC5C2A4:\n"
        "B       loc_FFC5C478\n"
"loc_FFC5C2A8:\n"
        "B       loc_FFC5C480\n"
"loc_FFC5C2AC:\n"
        "B       loc_FFC5C48C\n"
"loc_FFC5C2B0:\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C2B4:\n"
        "BL      sub_FFC5CAE4\n"
		// TODO do we need the short press hack ?
		"BL      shooting_expo_param_override\n"  // +        
        "BL      sub_FFC5A2F8\n"
        "LDR     R0, [R4,#0x24]\n"
        "CMP     R0, #0\n"
        "BEQ     loc_FFC5C4BC\n"
        "BL      sub_FFC5BA80\n"
        "MOV     R5, R0\n"
        "LDR     R0, [R4,#0x24]\n"
        "CMP     R0, #0\n"
        "BEQ     loc_FFC5C2FC\n"
        "MOV     R0, #0xC\n"
        "BL      sub_FFC60874\n"
        "TST     R0, #1\n"
        "STRNE   R9, [R6,#0x10]\n"
        "LDRNE   R0, [R5,#8]\n"
        "ORRNE   R0, R0, #0x40000000\n"
        "STRNE   R0, [R5,#8]\n"
        "BNE     loc_FFC5C4BC\n"
"loc_FFC5C2FC:\n"
        "MOV     R0, R5\n"
        "BL      sub_FFC5BD24\n"
        "MOV     R0, R5\n"
        //"BL      sub_FFD17F00    \n"
        "BL      sub_FFD17F00_my\n" // ----> nr setup (quick press)
        "TST     R0, #1\n"
        "STRNE   R9, [R6,#0x10]\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C318:\n"
        "LDR     R0, [R4,#0x24]\n"
        "CMP     R0, #0\n"
        "BNE     loc_FFC5C344\n"
        "MOV     R0, #0xC\n"
        "BL      sub_FFC60874\n"
        "TST     R0, #1\n"
        "LDRNE   R0, [SP]\n"
        "MOVNE   R1, #1\n"
        "LDRNE   R2, [R0,#0xC]\n"
        "MOVNE   R0, #1\n"
        "BNE     loc_FFC5C3D0\n"
"loc_FFC5C344:\n"
        "LDR     R0, [SP]\n"
        //"BL      sub_FFC5C5D8\n"
        "BL      sub_FFC5C5D8_my\n" // ------------->
"loc_FFC5C34C:\n"
        "STR     R7, [R4,#0x24]\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C354:\n"
        "MOV     R0, #1\n"
        "BL      sub_FFC5CD6C    \n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C360:\n"
        "BL      sub_FFC5C750\n"
        "B       loc_FFC5C34C\n"
"loc_FFC5C368:\n"
        "BL      sub_FFC5CAC4\n"
        "B       loc_FFC5C34C\n"
"loc_FFC5C370:\n"
        "BL      sub_FFC5CACC\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C378:\n"
        "BL      sub_FFC5CC7C\n"
        "B       loc_FFC5C3DC\n"
"loc_FFC5C380:\n"
        "LDR     R5, [R0,#0xC]\n"
        "BL      sub_FFC5CAD4\n"
        "MOV     R0, R5\n"
        "BL      sub_FFD16E3C    \n"
        "TST     R0, #1\n"
        "MOV     R8, R0\n"
        "BNE     loc_FFC5C3C0\n"
        "BL      sub_FFC6C7F4    \n"
        "STR     R0, [R5,#0x18]\n"
        "MOV     R0, R5\n"
        "BL      sub_FFD17E38    \n"
        "MOV     R0, R5\n"
        "BL      sub_FFD181E4    \n"
        "MOV     R8, R0\n"
        "LDR     R0, [R5,#0x18]\n"
        "BL      sub_FFC6CA2C    \n"
"loc_FFC5C3C0:\n"
        "BL      sub_FFC5CAC4\n"
        "MOV     R2, R5\n"
        "MOV     R1, #9\n"
        "MOV     R0, R8\n"
"loc_FFC5C3D0:\n"
        "BL      sub_FFC5A76C    \n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C3D8:\n"
        "BL      sub_FFC5CCE4\n"
"loc_FFC5C3DC:\n"
        "BL      sub_FFC5A2F8\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C3E4:\n"
        "LDR     R0, [R4,#0x54]\n"
        "BL      sub_FFC5D0CC    \n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C3F0:\n"
        "BL      sub_FFC5D37C\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C3F8:\n"
        "BL      sub_FFC5D410\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C400:\n"
        "BL      sub_FFC5CAC4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C408:\n"
        "BL      sub_FFD17068\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C410:\n"
        "BL      sub_FFD17260\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C418:\n"
        "BL      sub_FFD172F4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C420:\n"
        "BL      sub_FFD173B4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C428:\n"
        "MOV     R0, #0\n"
        "BL      sub_FFD175AC\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C434:\n"
        "BL      sub_FFD176FC\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C43C:\n"
        "BL      sub_FFD1778C\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C444:\n"
        "BL      sub_FFD1784C\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C44C:\n"
        "BL      sub_FFC5CEC0\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C454:\n"
        "BL      sub_FFC5CF54\n"
        "BL      sub_FFC26E20\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C460:\n"
        "BL      sub_FFD17480\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C468:\n"
        "BL      sub_FFD174C4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C470:\n"
        "BL      sub_FFC5F0C4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C478:\n"
        "BL      sub_FFC5F144\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C480:\n"
        "BL      sub_FFC5F1A0\n"
        "BL      sub_FFC5F160\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C48C:\n"
        "LDRH    R0, [R4,#0x94]\n"
        "CMP     R0, #4\n"
        "LDRNEH  R0, [R4]\n"
        "SUBNE   R12, R0, #0x8200\n"
        "SUBNES  R12, R12, #0x2A\n"
        "BNE     loc_FFC5C4BC\n"
        "BL      sub_FFC5F144\n"
        "BL      sub_FFC5F4E4\n"
        "B       loc_FFC5C4BC\n"
"loc_FFC5C4B0:\n"
        "LDR     R1, =0x70B\n"
        "LDR     R0, =0xFFC5BDA0\n"
        "BL      sub_FFC0F5E8\n"
"loc_FFC5C4BC:\n"
        "LDR     R0, [SP]\n"
        "LDR     R1, [R0,#4]\n"
        "LDR     R0, [R6]\n"
        "BL      sub_FFC28BE4\n"
        "LDR     R5, [SP]\n"
        "LDR     R0, [R5,#8]\n"
        "CMP     R0, #0\n"
        "LDREQ   R1, =0x132\n"
        "LDREQ   R0, =0xFFC5BDA0\n"
        "BLEQ    sub_FFC0F5E8\n"
        "STR     R7, [R5,#8]\n"
        "B       loc_FFC5C1FC\n"
    );
}
void __attribute__((naked,noinline)) exp_drv_task(){
 asm volatile(
        "STMFD   SP!, {R4-R8,LR}\n"
        "SUB     SP, SP, #0x20\n"
        "LDR     R8, =0xBB8\n"
        "LDR     R7, =0x3A24\n"
        "LDR     R5, =0x3DA50\n"
        "MOV     R0, #0\n"
        "ADD     R6, SP, #0x10\n"
        "STR     R0, [SP,#0xC]\n"
"loc_FFC95068:\n"
        "LDR     R0, [R7,#0x20]\n"
        "MOV     R2, #0\n"
        "ADD     R1, SP, #0x1C\n"
        "BL      sub_FFC28E74    \n"
        "LDR     R0, [SP,#0xC]\n"
        "CMP     R0, #1\n"
        "BNE     loc_FFC950B4\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R0, [R0]\n"
        "CMP     R0, #0x13\n"
        "CMPNE   R0, #0x14\n"
        "CMPNE   R0, #0x15\n"
        "CMPNE   R0, #0x16\n"
        "BEQ     loc_FFC95218\n"
        "CMP     R0, #0x28\n"
        "BEQ     loc_FFC951A0\n"
        "ADD     R1, SP, #0xC\n"
        "MOV     R0, #0\n"
        "BL      sub_FFC94FF8    \n"
"loc_FFC950B4:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R1, [R0]\n"
        "CMP     R1, #0x2E\n"
        "BNE     loc_FFC950E4\n"
        "LDR     R0, [SP,#0x1C]\n"
        "BL      sub_FFC96350    \n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R1, #1\n"
        "BL      sub_FFC28BE4\n"
        "BL      sub_FFC0F3A0    \n"
        "ADD     SP, SP, #0x20\n"
        "LDMFD   SP!, {R4-R8,PC}\n"
"loc_FFC950E4:\n"
        "CMP     R1, #0x2D\n"
        "BNE     loc_FFC95100\n"
        "LDR     R2, [R0,#0x8C]!\n"
        "LDR     R1, [R0,#4]\n"
        "MOV     R0, R1\n"
        "BLX     R2\n"
        "B       loc_FFC95640\n"
"loc_FFC95100:\n"
        "CMP     R1, #0x26\n"
        "BNE     loc_FFC95150\n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R1, #0x80\n"
        "BL      sub_FFC28C18\n"
        "LDR     R0, =0xFFC917C4\n"
        "MOV     R1, #0x80\n"
        "BL      sub_FFD0C72C    \n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R2, R8\n"
        "MOV     R1, #0x80\n"
        "BL      sub_FFC28B24    \n"
        "TST     R0, #1\n"
        "LDRNE   R1, =0xE5F\n"
        "BNE     loc_FFC9520C\n"
"loc_FFC9513C:\n"
        "LDR     R1, [SP,#0x1C]\n"
        "LDR     R0, [R1,#0x90]\n"
        "LDR     R1, [R1,#0x8C]\n"
        "BLX     R1\n"
        "B       loc_FFC95640\n"
"loc_FFC95150:\n"
        "CMP     R1, #0x27\n"
        "BNE     loc_FFC95198\n"
        "ADD     R1, SP, #0xC\n"
        "BL      sub_FFC94FF8    \n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R1, #0x100\n"
        "BL      sub_FFC28C18\n"
        "LDR     R0, =0xFFC917D4\n"
        "MOV     R1, #0x100\n"
        "BL      sub_FFD0C9B4    \n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R2, R8\n"
        "MOV     R1, #0x100\n"
        "BL      sub_FFC28B24    \n"
        "TST     R0, #1\n"
        "BEQ     loc_FFC9513C\n"
        "LDR     R1, =0xE69\n"
        "B       loc_FFC9520C\n"
"loc_FFC95198:\n"
        "CMP     R1, #0x28\n"
        "BNE     loc_FFC951B0\n"
"loc_FFC951A0:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "ADD     R1, SP, #0xC\n"
        "BL      sub_FFC94FF8    \n"
        "B       loc_FFC9513C\n"
"loc_FFC951B0:\n"
        "CMP     R1, #0x2B\n"
        "BNE     loc_FFC951C8\n"
        "BL      sub_FFC84B1C    \n"
        "BL      sub_FFC85760    \n"
        "BL      sub_FFC852B0    \n"
        "B       loc_FFC9513C\n"
"loc_FFC951C8:\n"
        "CMP     R1, #0x2C\n"
        "BNE     loc_FFC95218\n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R1, #4\n"
        "BL      sub_FFC28C18\n"
        "LDR     R1, =0xFFC917F4\n"
        "LDR     R0, =0xFFFFF400\n"
        "MOV     R2, #4\n"
        "BL      sub_FFC84598\n"
        "BL      sub_FFC84820    \n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R2, R8\n"
        "MOV     R1, #4\n"
        "BL      sub_FFC28A40    \n"
        "TST     R0, #1\n"
        "BEQ     loc_FFC9513C\n"
        "LDR     R1, =0xE91\n"
"loc_FFC9520C:\n"
        "LDR     R0, =0xFFC91E34\n"
        "BL      sub_FFC0F5E8\n"
        "B       loc_FFC9513C\n"
"loc_FFC95218:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "MOV     R4, #1\n"
        "LDR     R1, [R0]\n"
        "CMP     R1, #0x11\n"
        "CMPNE   R1, #0x12\n"
        "BNE     loc_FFC95288\n"
        "LDR     R1, [R0,#0x7C]\n"
        "ADD     R1, R1, R1,LSL#1\n"
        "ADD     R1, R0, R1,LSL#2\n"
        "SUB     R1, R1, #8\n"
        "LDMIA   R1, {R2-R4}\n"
        "STMIA   R6, {R2-R4}\n"
        "BL      sub_FFC93984\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R1, [R0,#0x7C]\n"
        "LDR     R3, [R0,#0x8C]\n"
        "LDR     R2, [R0,#0x90]\n"
        "ADD     R0, R0, #4\n"
        "BLX     R3\n"
        "LDR     R0, [SP,#0x1C]\n"
        "BL      sub_FFC96718    \n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R1, [R0,#0x7C]\n"
        "LDR     R3, [R0,#0x94]\n"
        "LDR     R2, [R0,#0x98]\n"
        "ADD     R0, R0, #4\n"
        "BLX     R3\n"
        "B       loc_FFC95580\n"
"loc_FFC95288:\n"
        "CMP     R1, #0x13\n"
        "CMPNE   R1, #0x14\n"
        "CMPNE   R1, #0x15\n"
        "CMPNE   R1, #0x16\n"
        "BNE     loc_FFC95340\n"
        "ADD     R3, SP, #0xC\n"
        "MOV     R2, SP\n"
        "ADD     R1, SP, #0x10\n"
        "BL      sub_FFC93C60    \n"
        "CMP     R0, #1\n"
        "MOV     R4, R0\n"
        "CMPNE   R4, #5\n"
        "BNE     loc_FFC952DC\n"
        "LDR     R0, [SP,#0x1C]\n"
        "MOV     R2, R4\n"
        "LDR     R1, [R0,#0x7C]!\n"
        "LDR     R12, [R0,#0x10]!\n"
        "LDR     R3, [R0,#4]\n"
        "MOV     R0, SP\n"
        "BLX     R12\n"
        "B       loc_FFC95314\n"
"loc_FFC952DC:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "CMP     R4, #2\n"
        "LDR     R3, [R0,#0x90]\n"
        "CMPNE   R4, #6\n"
        "BNE     loc_FFC95328\n"
        "LDR     R12, [R0,#0x8C]\n"
        "MOV     R0, SP\n"
        "MOV     R2, R4\n"
        "MOV     R1, #1\n"
        "BLX     R12\n"
        "LDR     R0, [SP,#0x1C]\n"
        "MOV     R2, SP\n"
        "ADD     R1, SP, #0x10\n"
        "BL      sub_FFC94D00    \n"
"loc_FFC95314:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R2, [SP,#0xC]\n"
        "MOV     R1, R4\n"
        "BL      sub_FFC94F98    \n"
        "B       loc_FFC95580\n"
"loc_FFC95328:\n"
        "LDR     R1, [R0,#0x7C]\n"
        "LDR     R12, [R0,#0x8C]\n"
        "ADD     R0, R0, #4\n"
        "MOV     R2, R4\n"
        "BLX     R12\n"
        "B       loc_FFC95580\n"
"loc_FFC95340:\n"
        "CMP     R1, #0x22\n"
        "CMPNE   R1, #0x23\n"
        "BNE     loc_FFC9538C\n"
        "LDR     R1, [R0,#0x7C]\n"
        "ADD     R1, R1, R1,LSL#1\n"
        "ADD     R1, R0, R1,LSL#2\n"
        "SUB     R1, R1, #8\n"
        "LDMIA   R1, {R2-R4}\n"
        "STMIA   R6, {R2-R4}\n"
        "BL      sub_FFC92ED4    \n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R1, [R0,#0x7C]\n"
        "LDR     R3, [R0,#0x8C]\n"
        "LDR     R2, [R0,#0x90]\n"
        "ADD     R0, R0, #4\n"
        "BLX     R3\n"
        "LDR     R0, [SP,#0x1C]\n"
        "BL      sub_FFC931C8    \n"
        "B       loc_FFC95580\n"
"loc_FFC9538C:\n"
        "ADD     R1, R0, #4\n"
        "LDMIA   R1, {R2,R3,R12}\n"
        "STMIA   R6, {R2,R3,R12}\n"
        "LDR     R1, [R0]\n"
        "CMP     R1, #0x25\n"
        "ADDLS   PC, PC, R1,LSL#2\n"
        "B       loc_FFC95560\n"
"loc_FFC953A8:\n"
        "B       loc_FFC95440\n"
"loc_FFC953AC:\n"
        "B       loc_FFC95440\n"
"loc_FFC953B0:\n"
        "B       loc_FFC95448\n"
"loc_FFC953B4:\n"
        "B       loc_FFC95450\n"
"loc_FFC953B8:\n"
        "B       loc_FFC95450\n"
"loc_FFC953BC:\n"
        "B       loc_FFC95450\n"
"loc_FFC953C0:\n"
        "B       loc_FFC95440\n"
"loc_FFC953C4:\n"
        "B       loc_FFC95448\n"
"loc_FFC953C8:\n"
        "B       loc_FFC95450\n"
"loc_FFC953CC:\n"
        "B       loc_FFC95450\n"
"loc_FFC953D0:\n"
        "B       loc_FFC95468\n"
"loc_FFC953D4:\n"
        "B       loc_FFC95468\n"
"loc_FFC953D8:\n"
        "B       loc_FFC95554\n"
"loc_FFC953DC:\n"
        "B       loc_FFC9555C\n"
"loc_FFC953E0:\n"
        "B       loc_FFC9555C\n"
"loc_FFC953E4:\n"
        "B       loc_FFC9555C\n"
"loc_FFC953E8:\n"
        "B       loc_FFC9555C\n"
"loc_FFC953EC:\n"
        "B       loc_FFC95560\n"
"loc_FFC953F0:\n"
        "B       loc_FFC95560\n"
"loc_FFC953F4:\n"
        "B       loc_FFC95560\n"
"loc_FFC953F8:\n"
        "B       loc_FFC95560\n"
"loc_FFC953FC:\n"
        "B       loc_FFC95560\n"
"loc_FFC95400:\n"
        "B       loc_FFC95560\n"
"loc_FFC95404:\n"
        "B       loc_FFC95458\n"
"loc_FFC95408:\n"
        "B       loc_FFC95460\n"
"loc_FFC9540C:\n"
        "B       loc_FFC95460\n"
"loc_FFC95410:\n"
        "B       loc_FFC95474\n"
"loc_FFC95414:\n"
        "B       loc_FFC95474\n"
"loc_FFC95418:\n"
        "B       loc_FFC9547C\n"
"loc_FFC9541C:\n"
        "B       loc_FFC954AC\n"
"loc_FFC95420:\n"
        "B       loc_FFC954DC\n"
"loc_FFC95424:\n"
        "B       loc_FFC9550C\n"
"loc_FFC95428:\n"
        "B       loc_FFC9553C\n"
"loc_FFC9542C:\n"
        "B       loc_FFC9553C\n"
"loc_FFC95430:\n"
        "B       loc_FFC95560\n"
"loc_FFC95434:\n"
        "B       loc_FFC95560\n"
"loc_FFC95438:\n"
        "B       loc_FFC95544\n"
"loc_FFC9543C:\n"
        "B       loc_FFC9554C\n"
"loc_FFC95440:\n"
        "BL      sub_FFC91CDC\n"
        "B       loc_FFC95560\n"
"loc_FFC95448:\n"
        "BL      sub_FFC91F60\n"
        "B       loc_FFC95560\n"
"loc_FFC95450:\n"
        "BL      sub_FFC92168\n"
        "B       loc_FFC95560\n"
"loc_FFC95458:\n"
        "BL      sub_FFC923E0\n"
        "B       loc_FFC95560\n"
"loc_FFC95460:\n"
        "BL      sub_FFC925D8\n"
        "B       loc_FFC95560\n"
"loc_FFC95468:\n" //10,11
        //"BL      sub_FFC92894\n"
		"BL      sub_FFC92894_my\n" // ----------------------->
        "MOV     R4, #0\n"
        "B       loc_FFC95560\n"
"loc_FFC95474:\n"
        "BL      sub_FFC929D4\n"
        "B       loc_FFC95560\n"
"loc_FFC9547C:\n"
        "LDRH    R1, [R0,#4]\n"
        "STRH    R1, [SP,#0x10]\n"
        "LDRH    R1, [R5,#2]\n"
        "STRH    R1, [SP,#0x12]\n"
        "LDRH    R1, [R5,#4]\n"
        "STRH    R1, [SP,#0x14]\n"
        "LDRH    R1, [R5,#6]\n"
        "STRH    R1, [SP,#0x16]\n"
        "LDRH    R1, [R0,#0xC]\n"
        "STRH    R1, [SP,#0x18]\n"
        "BL      sub_FFC963C4    \n"
        "B       loc_FFC95560\n"
"loc_FFC954AC:\n"
        "LDRH    R1, [R0,#4]\n"
        "STRH    R1, [SP,#0x10]\n"
        "LDRH    R1, [R5,#2]\n"
        "STRH    R1, [SP,#0x12]\n"
        "LDRH    R1, [R5,#4]\n"
        "STRH    R1, [SP,#0x14]\n"
        "LDRH    R1, [R5,#6]\n"
        "STRH    R1, [SP,#0x16]\n"
        "LDRH    R1, [R5,#8]\n"
        "STRH    R1, [SP,#0x18]\n"
        "BL      sub_FFC96530    \n"
        "B       loc_FFC95560\n"
"loc_FFC954DC:\n"
        "LDRH    R1, [R5]\n"
        "STRH    R1, [SP,#0x10]\n"
        "LDRH    R1, [R0,#6]\n"
        "STRH    R1, [SP,#0x12]\n"
        "LDRH    R1, [R5,#4]\n"
        "STRH    R1, [SP,#0x14]\n"
        "LDRH    R1, [R5,#6]\n"
        "STRH    R1, [SP,#0x16]\n"
        "LDRH    R1, [R5,#8]\n"
        "STRH    R1, [SP,#0x18]\n"
        "BL      sub_FFC965DC    \n"
        "B       loc_FFC95560\n"
"loc_FFC9550C:\n"
        "LDRH    R1, [R5]\n"
        "STRH    R1, [SP,#0x10]\n"
        "LDRH    R1, [R5,#2]\n"
        "STRH    R1, [SP,#0x12]\n"
        "LDRH    R1, [R5,#4]\n"
        "STRH    R1, [SP,#0x14]\n"
        "LDRH    R1, [R5,#6]\n"
        "STRH    R1, [SP,#0x16]\n"
        "LDRH    R1, [R0,#0xC]\n"
        "STRH    R1, [SP,#0x18]\n"
        "BL      sub_FFC9667C    \n"
        "B       loc_FFC95560\n"
"loc_FFC9553C:\n"
        "BL      sub_FFC92D2C\n"
        "B       loc_FFC95560\n"
"loc_FFC95544:\n"
        "BL      sub_FFC932CC\n"
        "B       loc_FFC95560\n"
"loc_FFC9554C:\n"
        "BL      sub_FFC93508\n"
        "B       loc_FFC95560\n"
"loc_FFC95554:\n"
        "BL      sub_FFC93684\n"
        "B       loc_FFC95560\n"
"loc_FFC9555C:\n"
        "BL      sub_FFC93820\n"
"loc_FFC95560:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R1, [R0,#0x7C]\n"
        "LDR     R3, [R0,#0x8C]\n"
        "LDR     R2, [R0,#0x90]\n"
        "ADD     R0, R0, #4\n"
        "BLX     R3\n"
        "CMP     R4, #1\n"
        "BNE     loc_FFC955C8\n"
"loc_FFC95580:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "MOV     R2, #0xC\n"
        "LDR     R1, [R0,#0x7C]\n"
        "ADD     R1, R1, R1,LSL#1\n"
        "ADD     R0, R0, R1,LSL#2\n"
        "SUB     R4, R0, #8\n"
        "LDR     R0, =0x3DA50\n"
        "ADD     R1, SP, #0x10\n"
        "BL      sub_FFE8D5DC\n"
        "LDR     R0, =0x3DA5C\n"
        "MOV     R2, #0xC\n"
        "ADD     R1, SP, #0x10\n"
        "BL      sub_FFE8D5DC\n"
        "LDR     R0, =0x3DA68\n"
        "MOV     R2, #0xC\n"
        "MOV     R1, R4\n"
        "BL      sub_FFE8D5DC\n"
        "B       loc_FFC95640\n"
"loc_FFC955C8:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "LDR     R0, [R0]\n"
        "CMP     R0, #0xB\n"
        "BNE     loc_FFC95610\n"
        "MOV     R3, #0\n"
        "STR     R3, [SP]\n"
        "MOV     R3, #1\n"
        "MOV     R2, #1\n"
        "MOV     R1, #1\n"
        "MOV     R0, #0\n"
        "BL      sub_FFC91AE4\n"
        "MOV     R3, #0\n"
        "STR     R3, [SP]\n"
        "MOV     R3, #1\n"
        "MOV     R2, #1\n"
        "MOV     R1, #1\n"
        "MOV     R0, #0\n"
        "B       loc_FFC9563C\n"
"loc_FFC95610:\n"
        "MOV     R3, #1\n"
        "MOV     R2, #1\n"
        "MOV     R1, #1\n"
        "MOV     R0, #1\n"
        "STR     R3, [SP]\n"
        "BL      sub_FFC91AE4\n"
        "MOV     R3, #1\n"
        "MOV     R2, #1\n"
        "MOV     R1, #1\n"
        "MOV     R0, #1\n"
        "STR     R3, [SP]\n"
"loc_FFC9563C:\n"
        "BL      sub_FFC91C24\n"
"loc_FFC95640:\n"
        "LDR     R0, [SP,#0x1C]\n"
        "BL      sub_FFC96350    \n"
        "B       loc_FFC95068\n"
  );
}

void __attribute__((naked,noinline)) sub_FFC92894_my(){
 asm volatile(
        "STMFD   SP!, {R4-R8,LR}\n"
        "LDR     R7, =0x3A24\n"
        "MOV     R4, R0\n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R1, #0x3E\n"
        "BL      sub_FFC28C18\n"
        "LDRSH   R0, [R4,#4]\n"
        "MOV     R2, #0\n"
        "MOV     R1, #0\n"
        "BL      sub_FFC91848\n"
        "MOV     R6, R0\n"
        "LDRSH   R0, [R4,#6]\n"
        "BL      sub_FFC91958\n"
        "LDRSH   R0, [R4,#8]\n"
        "BL      sub_FFC919B0\n"
        "LDRSH   R0, [R4,#0xA]\n"
        "BL      sub_FFC91A08\n"
        "LDRSH   R0, [R4,#0xC]\n"
        "MOV     R1, #0\n"
        "BL      sub_FFC91A60\n"
        "MOV     R5, R0\n"
        "LDR     R0, [R4]\n"
        "LDR     R8, =0x3DA68\n"
        "CMP     R0, #0xB\n"
        "MOVEQ   R6, #0\n"
        "MOVEQ   R5, #0\n"
        "BEQ     loc_FFC92928\n"
        "CMP     R6, #1\n"
        "BNE     loc_FFC92928\n"
        "LDRSH   R0, [R4,#4]\n"
        "LDR     R1, =0xFFC917B4\n"
        "MOV     R2, #2\n"
        "BL      sub_FFD0C880    \n"
        "STRH    R0, [R4,#4]\n"
        "MOV     R0, #0\n"
        "STR     R0, [R7,#0x28]\n"
        "B       loc_FFC92930\n"
"loc_FFC92928:\n"
        "LDRH    R0, [R8]\n"
        "STRH    R0, [R4,#4]\n"
"loc_FFC92930:\n"
        "CMP     R5, #1\n"
        "LDRNEH  R0, [R8,#8]\n"
        "BNE     loc_FFC9294C\n"
        "LDRSH   R0, [R4,#0xC]\n"
        "LDR     R1, =0xFFC91838\n"
        "MOV     R2, #0x20\n"
        "BL      sub_FFC96380\n"
"loc_FFC9294C:\n"
        "STRH    R0, [R4,#0xC]\n"
        "LDRSH   R0, [R4,#6]\n"
        //"BL      sub_FFC8488C    \n" 
				"BL      sub_FFC8488C_my    \n" // ------------->
        "LDRSH   R0, [R4,#8]\n"
        "MOV     R1, #1\n"
        "BL      sub_FFC84FF8    \n"
        "MOV     R1, #0\n"
        "ADD     R0, R4, #8\n"
        "BL      sub_FFC85080    \n"
        "LDRSH   R0, [R4,#0xE]\n"
        "BL      sub_FFC8CB40    \n"
        "LDR     R4, =0xBB8\n"
        "CMP     R6, #1\n"
        "BNE     loc_FFC929A4\n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R2, R4\n"
        "MOV     R1, #2\n"
        "BL      sub_FFC28B24    \n"
        "TST     R0, #1\n"
        "LDRNE   R1, =0x5A3\n"
        "LDRNE   R0, =0xFFC91E34\n"
        "BLNE    sub_FFC0F5E8\n"
"loc_FFC929A4:\n"
        "CMP     R5, #1\n"
        "LDMNEFD SP!, {R4-R8,PC}\n"
        "LDR     R0, [R7,#0x1C]\n"
        "MOV     R2, R4\n"
        "MOV     R1, #0x20\n"
        "BL      sub_FFC28B24    \n"
        "TST     R0, #1\n"
        "LDRNE   R1, =0x5A8\n"
        "LDRNE   R0, =0xFFC91E34\n"
        "LDMNEFD SP!, {R4-R8,LR}\n"
        "BNE     sub_FFC0F5E8\n"
        "LDMFD   SP!, {R4-R8,PC}\n"

  );
}

void __attribute__((naked,noinline)) sub_FFC8488C_my(){
 asm volatile(
        "STMFD   SP!, {R4-R6,LR}\n"
        "LDR     R5, =0x3718\n"
        "MOV     R4, R0\n"
        "LDR     R0, [R5,#4]\n"
        "CMP     R0, #1\n"
        "LDRNE   R1, =0x146\n"
        "LDRNE   R0, =0xFFC84690\n"
        "BLNE    sub_FFC0F5E8\n"
        "CMN     R4, #0xC00\n"
        "LDREQSH R4, [R5,#2]\n"
        "CMN     R4, #0xC00\n"
        "MOVEQ   R1, #0x14C\n"
        "LDREQ   R0, =0xFFC84690\n"
        "STRH    R4, [R5,#2]\n"
        "BLEQ    sub_FFC0F5E8\n"
        "MOV     R0, R4\n"
        //"BL      sub_FFD880EC \n"
        "BL      apex2us\n" // +
        "MOV     R4, R0\n"
        "BL      sub_FFCB7570\n"
        "MOV     R0, R4\n"
        "BL      sub_FFCBBC00\n"
        "TST     R0, #1\n"
        "LDRNE   R1, =0x151\n"
        "LDMNEFD SP!, {R4-R6,LR}\n"
        "LDRNE   R0, =0xFFC84690\n"
        "BNE     sub_FFC0F5E8\n"
        "LDMFD   SP!, {R4-R6,PC}\n"
  );
}

