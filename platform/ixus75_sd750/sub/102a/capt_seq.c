#include "lolevel.h"
#include "platform.h"
#include "core.h"

#define RAWDATA_AVAILABLE (1)
#define RAWDATA_SAVED (2)

#define NR_ON (2)
#define NR_OFF (1)

static long raw_save_stage;

void capt_seq_hook_raw_here()
{
    raw_save_stage = RAWDATA_AVAILABLE;
    core_rawdata_available();
    while (raw_save_stage != RAWDATA_SAVED){
	_SleepTask(10);
    }
}

void hook_raw_save_complete()
{
    raw_save_stage = RAWDATA_SAVED;
}


void capt_seq_hook_set_nr()
{
    long *nrflag = (long*)0xCF74;

    switch (core_get_noise_reduction_value()){
    case NOISE_REDUCTION_AUTO_CANON:
	// leave it alone
	break;
    case NOISE_REDUCTION_OFF:
	*nrflag = 1;
	break;
    case NOISE_REDUCTION_ON:
	*nrflag = 2;
	break;
    };
}

// Checked for the SD750 v1.02A
void __attribute__((naked,noinline)) sub_FFB0D94C_my(long p)
{
    asm volatile (
                
							"STMFD   SP!, {R4,LR}\n"
							"MOV     R4, R0\n"
							"SUB     SP, SP, #0xC\n"
							"BL      sub_FFB0E3BC\n"
							"MVN     R1, #0\n"
							"BL      sub_FFB1EB2C\n"		// ClearEventFlag
							"MOV     R0, #0x8A\n"
							"ADD     R1, SP, #4\n"
							"MOV     R2, #4\n"
							"BL      sub_FF81BCAC\n"
							"TST     R0, #1\n"
							"BEQ     loc_FFB0D98C\n"
							"MOV     R1, #0x1D0\n"
							"LDR     R0, =0xFFB0D7D0\n"		// aSscaptureseq_c
							"ADD     R1, R1, #2\n"
							"BL      sub_FFB2C1B8\n"		// DebugAssert
"loc_FFB0D98C:\n"
							"LDR     R3, =0xBE160\n"
							"LDR     R2, =0xBE220\n"
							"LDR     R0, [R3,#0x7C]\n"
							"LDRSH   R1, [R2,#0xE]\n"
							"BL      sub_FFA44DE0\n"
							"MOV     R0, R4\n"
							"BL      sub_FFB0D754\n"
							"BL      capt_seq_hook_set_nr\n"  // +
							"LDR     R3, =0xCF78\n"
							"LDR     R0, [R3]\n"
							"B       sub_FFB0D9B0\n"
    );
}

// Checked for the SD750 v1.02A
void __attribute__((naked,noinline)) sub_FFB0A774_my(long p)
{
    asm volatile (

							"STMFD   SP!, {R4,R5,LR}\n"
							"LDR     R3, =0xBE160\n"
							"LDR     R5, [R0,#0xC]\n"
							"LDR     R1, [R3,#0x24]\n"
							"LDR     R2, [R5,#8]\n"
							"CMP     R1, #0\n"
							"ORR     R2, R2, #1\n"
							"STR     R2, [R5,#8]\n"
							"BNE     loc_FFB0A7C8\n"
							"MOV     R0, #0xC\n"
							"BL      sub_FFB14CC4\n"
							"TST     R0, #1\n"
							"BEQ     loc_FFB0A7C8\n"
							"LDR     R3, [R5,#8]\n"
							"MOV     R0, #1\n"
							"ORR     R3, R3, #0x40000000\n"
							"STR     R3, [R5,#8]\n"
"loc_FFB0A7B8:\n"
							"MOV     R2, R5\n"
							"MOV     R1, #1\n"
							"LDMFD   SP!, {R4,R5,LR}\n"
							"B       sub_FFB08F1C\n"
"loc_FFB0A7C8:\n"
							"LDR     R4, =0xBE160\n"
							"BL      sub_FFB0B26C\n"		// Set_CMD25Write_62
							"LDR     R3, [R4,#0x24]\n"
							"CMP     R3, #0\n"
							"BNE     loc_FFB0A810\n"
							"MOV     R0, R5\n"
							"BL      sub_FFB0C450\n"
							"TST     R0, #1\n"
							"BNE     loc_FFB0A7B8\n"
							"BL      sub_FF82668C\n"
							"BL      sub_FF81BEA8\n"
							"STR     R0, [R5,#0x14]\n"
							"MOV     R0, R5\n"
							"BL      sub_FFB0D834\n"
							"BL      sub_FFB0E228\n"
							"MOV     R0, R5\n"
							"BL      sub_FFB0D94C_my\n"	  //------------>							
              "BL      capt_seq_hook_raw_here\n"  // +							
							"B       loc_FFB0A824\n"
"loc_FFB0A810:\n"
							"LDR     R3, =0xCF60\n"
							"LDR     R2, [R3]\n"
							"CMP     R2, #0\n"
							"MOVNE   R0, #0x1D\n"
							"MOVEQ   R0, #0\n"
"loc_FFB0A824:\n"
							"MOV     R1, #1\n"
							"MOV     R2, R5\n"
							"BL      sub_FFB08F1C\n"
							"BL      sub_FFB0DCC8\n"
							"CMP     R0, #0\n"
							"LDRNE   R3, [R5,#8]\n"
							"ORRNE   R3, R3, #0x2000\n"
							"STRNE   R3, [R5,#8]\n"
							"LDMFD   SP!, {R4,R5,PC}\n"
    );
}

// Checked for the SD750 v1.02A
void __attribute__((naked,noinline)) capt_seq_task()
{
	asm volatile (
	
							"STMFD   SP!, {R4,LR}\n"
							"SUB     SP, SP, #4\n"
							"MOV     R4, SP\n"
							"B       loc_FFB0ADAC\n"
"loc_FFB0AC30:\n"
							"LDR     R2, [SP]\n"		// ,#0xC+var_C
							"LDR     R3, [R2]\n"
							"MOV     R0, R2\n"
							"CMP     R3, #0x15\n"
							"LDRLS   PC, [PC,R3,LSL#2]\n"
							"B       loc_FFB0AD80\n"
							".long 	 loc_FFB0ACA0\n"
							".long 	 loc_FFB0ACC0\n"
							".long 	 loc_FFB0ACD4\n"
							".long 	 loc_FFB0ACE8\n"
							".long 	 loc_FFB0ACE0\n"
							".long 	 loc_FFB0ACF0\n"
							".long 	 loc_FFB0ACF8\n"
							".long 	 loc_FFB0AD04\n"
							".long 	 loc_FFB0AD0C\n"
							".long 	 loc_FFB0AD18\n"
							".long 	 loc_FFB0AD20\n"
							".long 	 loc_FFB0AD28\n"
							".long 	 loc_FFB0AD30\n"
							".long 	 loc_FFB0AD38\n"
							".long 	 loc_FFB0AD40\n"
							".long 	 loc_FFB0AD4C\n"
							".long 	 loc_FFB0AD54\n"
							".long 	 loc_FFB0AD5C\n"
							".long 	 loc_FFB0AD64\n"
							".long 	 loc_FFB0AD70\n"
							".long 	 loc_FFB0AD78\n"
							".long 	 loc_FFB0AD94\n"
"loc_FFB0ACA0:\n"
							"BL      sub_FFB0B294\n"
              "BL      shooting_expo_param_override\n" // +							
							"BL      sub_FFB089A4\n"
							"LDR     R3, =0xBE160\n"
							"LDR     R2, [R3,#0x24]\n"
							"CMP     R2, #0\n"
							"BEQ     loc_FFB0AD90\n"
							"BL      sub_FFB0A850\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0ACC0:\n"
							"BL      sub_FFB0A774_my\n" //------------>
"loc_FFB0ACC4:\n"
							"LDR     R2, =0xBE160\n"
							"MOV     R3, #0\n"
							"STR     R3, [R2,#0x24]\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0ACD4:\n"
							"MOV     R0, #1\n"
							"BL      sub_FFB0B4B4\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0ACE0:\n"
							"BL      sub_FFB0AE94\n"
							"B       loc_FFB0ACC4\n"
"loc_FFB0ACE8:\n"
							"BL      sub_FFB0B24C\n" 		// BackLightDrv_LcdBackLightOff_15 ; jumptable FFB0AC40 case 3
							"B       loc_FFB0ACC4\n"
"loc_FFB0ACF0:\n"
							"BL      sub_FFB0B25C\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0ACF8:\n"
							"BL      sub_FFB0B3AC\n"
							"BL      sub_FFB089A4\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD04:\n"
							"BL      sub_FFB0A92C\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD0C:\n"
							"BL      sub_FFB0B41C\n"
							"BL      sub_FFB089A4\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD18:\n"
							"BL      sub_FFB0B24C\n"		// BackLightDrv_LcdBackLightOff_15 ; jumptable FFB0AC40 case 9
							"B       loc_FFB0AD90\n"
"loc_FFB0AD20:\n"
							"BL      sub_FFB0CB84\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD28:\n"
							"BL      sub_FFB0CD58\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD30:\n"
							"BL      sub_FFB0CDEC\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD38:\n"
							"BL      sub_FFB0CEE8\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD40:\n"
							"MOV     R0, #0\n"
							"BL      sub_FFB0D154\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD4C:\n"
							"BL      sub_FFB0D328\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD54:\n"
							"BL      sub_FFB0D3C4\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD5C:\n"
							"BL      sub_FFB0D484\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD64:\n"
							"BL      sub_FFB0B608\n"
							"BL      sub_FFB0A698\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD70:\n"
							"BL      sub_FFB0D028\n"
							"B       loc_FFB0AD90\n"
"loc_FFB0AD78:\n"
							"BL      sub_FFB0D084\n" 	//    ; jumptable FFB0AC40 case 20
							"B       loc_FFB0AD90\n"
"loc_FFB0AD80:\n"
							"MOV     R1, #0x4C0\n"
							"LDR     R0, =0xFFB0A4F4\n"		// =aSsshoottask_c
							"ADD     R1, R1, #0xE\n"
							"BL      sub_FFB2C1B8\n"		// DebugAssert
"loc_FFB0AD90:\n"
							"LDR     R2, [SP]\n"		// ,#0xC+var_C
"loc_FFB0AD94:\n"
							"LDR     R3, =0x97A30\n"	//    ; jumptable FFB0AC40 case 21
							"LDR     R1, [R2,#4]\n"
							"LDR     R0, [R3]\n"
							"BL      sub_FFB1E990\n"		// SetEventFlag
							"LDR     R0, [SP]\n"		// ,#0xC+var_C
							"BL      sub_FFB0A574\n"
"loc_FFB0ADAC:\n"
							"LDR     R3, =0x97A34\n"
							"MOV     R1, R4\n"
							"LDR     R0, [R3]\n"
							"MOV     R2, #0\n"
							"BL      sub_FFB1F0A8\n"		// ReceiveMessageQueue
							"TST     R0, #1\n"
							"BEQ     loc_FFB0AC30\n"
							"LDR     R0, =0xFFB0A4F4\n"		// =aSsshoottask_c
							"MOV     R1, #0x400\n"
							"BL      sub_FFB2C1B8\n"		// DebugAssert
							"BL      sub_FFB2066C\n"
							"ADD     SP, SP, #4\n"
							"LDMFD   SP!, {R4,PC}\n"							
	);
}

