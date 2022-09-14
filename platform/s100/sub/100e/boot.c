/*
 * boot.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"
#include "dryos31.h"

#define offsetof(TYPE, MEMBER) ((int) &((TYPE *)0)->MEMBER)

const char * const new_sa = &_end;

// Forward declarations
void CreateTask_PhySw();
void CreateTask_spytask();
extern volatile int jogdial_stopped;
void JogDial_task_my(void);

extern void task_CaptSeq();
extern void task_InitFileModules();
extern void task_RotaryEncoder();
extern void task_MovieRecord();
extern void task_ExpDrv();

void taskHook(context_t **context)
{ 
	task_t *tcb=(task_t*)((char*)context-offsetof(task_t, context));

	// Replace firmware task addresses with ours
	if(tcb->entry == (void*)task_CaptSeq)			tcb->entry = (void*)capt_seq_task; 
	if(tcb->entry == (void*)task_InitFileModules)   tcb->entry = (void*)init_file_modules_task;
	if(tcb->entry == (void*)task_RotaryEncoder)     tcb->entry = (void*)JogDial_task_my;
	if(tcb->entry == (void*)task_MovieRecord)		tcb->entry = (void*)movie_record_task;
	if(tcb->entry == (void*)task_ExpDrv)			tcb->entry = (void*)exp_drv_task;
}

/*----------------------------------------------------------------------
	spytask
-----------------------------------------------------------------------*/
void spytask(long ua, long ub, long uc, long ud, long ue, long uf)
{
    (void)ua; (void)ub; (void)uc; (void)ud; (void)ue; (void)uf;
    core_spytask();
}

/*----------------------------------------------------------------------
	CreateTask_spytask
-----------------------------------------------------------------------*/
void CreateTask_spytask() {
	_CreateTask("SpyTask", 0x19, 0x2000, spytask, 0);
}

/*----------------------------------------------------------------------*/
// Pointer to stack location where jogdial task records previous and current
// jogdial positions
short *jog_position;

/*----------------------------------------------------------------------
	boot()

	Main entry point for the CHDK code
-----------------------------------------------------------------------*/

/*************************************************************/
//** boot @ 0xFF00000C - 0xFF000168, length=88
void __attribute__((naked,noinline)) boot() {
asm volatile (
"    LDR     R1, =0xC0410000 \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R1] \n"
"    MOV     R1, #0x78 \n"
"    MCR     p15, 0, R1, c1, c0 \n"
"    MOV     R1, #0 \n"
"    MCR     p15, 0, R1, c7, c10, 4 \n"
"    MCR     p15, 0, R1, c7, c5 \n"
"    MCR     p15, 0, R1, c7, c6 \n"
"    MOV     R0, #0x3D \n"
"    MCR     p15, 0, R0, c6, c0 \n"
"    MOV     R0, #0xC000002F \n"
"    MCR     p15, 0, R0, c6, c1 \n"
"    MOV     R0, #0x37 \n"
"    MCR     p15, 0, R0, c6, c2 \n"
"    MOV     R0, #0x40000037 \n"
"    MCR     p15, 0, R0, c6, c3 \n"
"    MOV     R0, #0x80000017 \n"
"    MCR     p15, 0, R0, c6, c4 \n"
"    LDR     R0, =0xFF00002F \n"
"    MCR     p15, 0, R0, c6, c5 \n"
"    LDR     R0, =0xD000002B \n"
"    MCR     p15, 0, R0, c6, c7 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0, 1 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c3, c0 \n"
"    LDR     R0, =0x33333330 \n"
"    MCR     p15, 0, R0, c5, c0, 2 \n"
"    LDR     R0, =0x33333330 \n"
"    MCR     p15, 0, R0, c5, c0, 3 \n"
"    MRC     p15, 0, R0, c1, c0 \n"
"    ORR     R0, R0, #0x1000 \n"
"    ORR     R0, R0, #4 \n"
"    ORR     R0, R0, #1 \n"
"    MCR     p15, 0, R0, c1, c0 \n"
"    MOV     R1, #0x80000006 \n"
"    MCR     p15, 0, R1, c9, c1 \n"
"    MOV     R1, #6 \n"
"    MCR     p15, 0, R1, c9, c1, 1 \n"
"    MRC     p15, 0, R1, c1, c0 \n"
"    ORR     R1, R1, #0x50000 \n"
"    MCR     p15, 0, R1, c1, c0 \n"
"    LDR     R2, =0xC0200000 \n"
"    MOV     R1, #1 \n"
"    STR     R1, [R2, #0x10C] \n"
"    MOV     R1, #0xFF \n"
"    STR     R1, [R2, #0xC] \n"
"    STR     R1, [R2, #0x1C] \n"
"    STR     R1, [R2, #0x2C] \n"
"    STR     R1, [R2, #0x3C] \n"
"    STR     R1, [R2, #0x4C] \n"
"    STR     R1, [R2, #0x5C] \n"
"    STR     R1, [R2, #0x6C] \n"
"    STR     R1, [R2, #0x7C] \n"
"    STR     R1, [R2, #0x8C] \n"
"    STR     R1, [R2, #0x9C] \n"
"    STR     R1, [R2, #0xAC] \n"
"    STR     R1, [R2, #0xBC] \n"
"    STR     R1, [R2, #0xCC] \n"
"    STR     R1, [R2, #0xDC] \n"
"    STR     R1, [R2, #0xEC] \n"
"    STR     R1, [R2, #0xFC] \n"
"    LDR     R1, =0xC0400008 \n"
"    LDR     R2, =0x430005 \n"
"    STR     R2, [R1] \n"
"    MOV     R1, #1 \n"
"    LDR     R2, =0xC0243100 \n"
"    STR     R2, [R1] \n"
"    LDR     R2, =0xC0242010 \n"
"    LDR     R1, [R2] \n"
"    ORR     R1, R1, #1 \n"
"    STR     R1, [R2] \n"
"    LDR     R0, =0xFF64BE64 \n"
"    LDR     R1, =0x1900 \n"
"    LDR     R3, =0x148A8 \n"

"loc_FF000144:\n"
"    CMP     R1, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF000144 \n"
"    LDR     R1, =0x195D34 \n"
"    MOV     R2, #0 \n"

"loc_FF00015C:\n"
"    CMP     R3, R1 \n"
"    STRCC   R2, [R3], #4 \n"
"    BCC     loc_FF00015C \n"
"    B       sub_FF000364_my \n"  // --> Patched. Old value = 0xFF000364.
);
}

/*************************************************************/
//** sub_FF000364_my @ 0xFF000364 - 0xFF0003CC, length=27
void __attribute__((naked,noinline)) sub_FF000364_my() {

    //http://chdk.setepontos.com/index.php/topic,4194.0.html
    *(int*)0x1938=(int)taskHook;
    *(int*)0x193C=(int)taskHook; // need this for startup in Playback mode (otherwise init_file_modules_task doesn't hook properly)

    *(int*)(0x26E0+0x4) = (*(int*)0xC022F48C)&4 ? 0x200000 : 0x100000;

asm volatile (
"    LDR     R0, =0xFF0003DC \n"
"    MOV     R1, #0 \n"
"    LDR     R3, =0xFF000414 \n"

"loc_FF000370:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF000370 \n"
"    LDR     R0, =0xFF000414 \n"
"    MOV     R1, #0x4B0 \n"
"    LDR     R3, =0xFF000628 \n"

"loc_FF00038C:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF00038C \n"
"    MOV     R0, #0xD2 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    MOV     R0, #0xD3 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    LDR     R0, =0x6C4 \n"
"    LDR     R2, =0xEEEEEEEE \n"
"    MOV     R3, #0x1000 \n"

"loc_FF0003C0:\n"
"    CMP     R0, R3 \n"
"    STRCC   R2, [R0], #4 \n"
"    BCC     loc_FF0003C0 \n"
"    BL      sub_FF0011BC_my \n"  // --> Patched. Old value = 0xFF0011BC.
);
}

/*************************************************************/
//** sub_FF0011BC_my @ 0xFF0011BC - 0xFF001268, length=44
void __attribute__((naked,noinline)) sub_FF0011BC_my() {
asm volatile (
"    STR     LR, [SP, #-4]! \n"
"    SUB     SP, SP, #0x74 \n"
"    MOV     R1, #0x74 \n"
"    MOV     R0, SP \n"
"    BL      sub_FF44E0E8 /*_bzero*/ \n"
"    MOV     R0, #0x67000 \n"
"    STR     R0, [SP, #4] \n"

#if defined(CHDK_NOT_IN_CANON_HEAP) // use original heap offset if CHDK is loaded in high memory
"    LDR     R0, =0x195D34 \n"
#else
"    LDR     R0, =new_sa\n"   // otherwise use patched value
"    LDR     R0, [R0]\n"      // 
#endif

"    LDR     R2, =0x55D788 \n"
"    STR     R0, [SP, #8] \n"
"    SUB     R0, R2, R0 \n"
"    STR     R0, [SP, #0xC] \n"
"    MOV     R0, #0x22 \n"
"    STR     R0, [SP, #0x18] \n"
"    MOV     R0, #0x72 \n"
"    STR     R0, [SP, #0x1C] \n"
"    LDR     R1, =0x565C00 \n"
"    LDR     R0, =0x1CD \n"
"    STR     R1, [SP] \n"
"    STR     R0, [SP, #0x20] \n"
"    MOV     R0, #0x96 \n"
"    STR     R2, [SP, #0x10] \n"
"    STR     R1, [SP, #0x14] \n"
"    STR     R0, [SP, #0x24] \n"
"    STR     R0, [SP, #0x28] \n"
"    MOV     R0, #0x64 \n"
"    STR     R0, [SP, #0x2C] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [SP, #0x30] \n"
"    STR     R0, [SP, #0x34] \n"
"    MOV     R0, #0x10 \n"
"    STR     R0, [SP, #0x5C] \n"
"    MOV     R0, #0x800 \n"
"    STR     R0, [SP, #0x60] \n"
"    MOV     R0, #0xA0 \n"
"    STR     R0, [SP, #0x64] \n"
"    MOV     R0, #0x280 \n"
"    STR     R0, [SP, #0x68] \n"
"    LDR     R1, =sub_FF005F38_my \n"  // --> Patched. Old value = 0xFF005F38.
"    MOV     R2, #0 \n"
"    MOV     R0, SP \n"
"    BL      sub_FF0034D0 \n"
"    ADD     SP, SP, #0x74 \n"
"    LDR     PC, [SP], #4 \n"
);
}

/*************************************************************/
//** sub_FF005F38_my @ 0xFF005F38 - 0xFF005FAC, length=30
void __attribute__((naked,noinline)) sub_FF005F38_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    BL      sub_FF000B34 \n"
"    BL      sub_FF00A390 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00604C /*'dmSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF005B70 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF006054 /*'termDriverInit'*/ \n"
"    BLLT    _err_init_task \n"
"    LDR     R0, =0xFF006064 /*'/_term'*/ \n"
"    BL      sub_FF005C58 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00606C /*'termDeviceCreate'*/ \n"
"    BLLT    _err_init_task \n"
"    LDR     R0, =0xFF006064 /*'/_term'*/ \n"
"    BL      sub_FF003CB4 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF006080 /*'stdioSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF009CF8 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF00608C /*'stdlibSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF00169C \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF006098 /*'armlib_setup'*/ \n"
"    BLLT    _err_init_task \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       taskcreate_Startup_my \n"  // --> Patched. Old value = 0xFF00FDAC.
);
}

/*************************************************************/
//** taskcreate_Startup_my @ 0xFF00FDAC - 0xFF00FDD8, length=12
void __attribute__((naked,noinline)) taskcreate_Startup_my() {
asm volatile (
"    STMFD   SP!, {R3,LR} \n"
"    BL      sub_FF02B598 \n"
"    BL      sub_FF02B7B0 /*_EnableDispatch*/ \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =sub_FF00FD84_my \n"  // --> Patched. Old value = 0xFF00FD84.
"    MOV     R2, #0x200 \n"
"    MOV     R1, #0x19 \n"
"    LDR     R0, =0xFF00FEBC /*'Booting'*/ \n"
"    BL      _CreateTask \n"
"    MOV     R0, #0 \n"
"    LDMFD   SP!, {R3,PC} \n"
);
}

/*************************************************************/
//** sub_FF00FD84_my @ 0xFF00FD84 - 0xFF00FDA8, length=10
void __attribute__((naked,noinline)) sub_FF00FD84_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
//"  BL      _sub_FF058674 \n"  // --> Nullsub call removed.
"    BL      sub_FF025C00 \n"
"    BL      sub_FF023768 \n"
"    BL      sub_FF02D9CC \n"
"    BL      sub_FF023EDC \n"
"    BL      sub_FF022C24 \n"
"    BL      sub_FF022BB0 \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF00FDDC_my \n"  // --> Patched. Old value = 0xFF00FDDC.
);
}

/*************************************************************/
//** sub_FF00FDDC_my @ 0xFF00FDDC - 0xFF00FEB4, length=55
void __attribute__((naked,noinline)) sub_FF00FDDC_my() {
asm volatile (
"    STMFD   SP!, {R3-R7,LR} \n"
"    MOV     R6, #0 \n"
"    BL      sub_FF02D73C \n"
"    MOVS    R7, R0 \n"
"    BNE     loc_FF00FE48 \n"
"    BL      sub_FF0264BC /*_IsNormalCameraMode_FW*/ \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF00FE48 \n"
"    MOV     R0, #0x37 \n"
"    BL      sub_FF02BC18 \n"
"    RSBS    R5, R0, #1 \n"
"    MOVCC   R5, #0 \n"
"    MOV     R0, #0x36 \n"
"    BL      sub_FF02BC18 \n"
"    RSBS    R4, R0, #1 \n"
"    MOVCC   R4, #0 \n"
"    BL      sub_FF022BD8 \n"
"    CMP     R0, #1 \n"
"    MOVEQ   R6, #1 \n"
"    ORR     R0, R4, R5 \n"
"    ORRS    R0, R0, R6 \n"
"    BNE     loc_FF00FE68 \n"
"    BL      sub_FF0238F0 \n"
"    LDR     R1, =0x83DC00 \n"
"    MOV     R0, #0x54 \n"
"    BL      sub_FF02BC08 \n"

"loc_FF00FE44:\n"
"    B       loc_FF00FE44 \n"

"loc_FF00FE48:\n"
"    MOV     R0, #0x36 \n"
"    BL      sub_FF02BC18 \n"
"    RSBS    R4, R0, #1 \n"
"    MOVCC   R4, #0 \n"
"    MOV     R0, #0x37 \n"
"    BL      sub_FF02BC18 \n"
"    RSBS    R5, R0, #1 \n"
"    MOVCC   R5, #0 \n"

"loc_FF00FE68:\n"
"    MOV     R3, R6 \n"
"    MOV     R2, R7 \n"
"    MOV     R1, R5 \n"
"    MOV     R0, R4 \n"
//"  BL      _sub_FF05867C \n"  // power button & startup, see sub_FF000364_my
//"  BL      _sub_FF058678 \n"  // --> Nullsub call removed.
"    BL      sub_FF02B598 \n"
"    LDR     R1, =0x5CE000 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF02BA08 \n"
"    BL      sub_FF02B7B0 /*_EnableDispatch*/ \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =task_Startup_my \n"  // --> Patched. Old value = 0xFF00FD34.
"    MOV     R2, #0 \n"
"    MOV     R1, #0x19 \n"
"    LDR     R0, =0xFF00FED0 /*'Startup'*/ \n"
"    BL      _CreateTask \n"
"    MOV     R0, #0 \n"
"    LDMFD   SP!, {R3-R7,PC} \n"
);
}

/*************************************************************/
//** task_Startup_my @ 0xFF00FD34 - 0xFF00FD80, length=20
void __attribute__((naked,noinline)) task_Startup_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    BL      sub_FF0065E8 \n"
//"  BL      _sub_FF05915C \n"  // --> Nullsub call removed.
//"  BL      _sub_FF02D874 \n"  // don't start DISKBOOT.BIN again
"    BL      sub_FF099040 \n"
"    BL      sub_FF02D9FC \n"
"    BL      sub_FF02AD3C \n"
"    BL      sub_FF02DB8C \n"
"    BL      CreateTask_spytask \n" // added
// we do this here rather than hook so we don't waste the original stack
"    BL      taskcreatePhySw_my \n"  // --> Patched. Old value = 0xFF02496C.
"    BL      sub_FF028504 \n"
"    BL      sub_FF0B495C \n"
"    BL      sub_FF04DA80 \n"
"    BL      sub_FF02250C \n"
"    BL      sub_FF02D40C \n"
"    BL      sub_FF022B64 \n"
"    BL      sub_FF0224A8 \n"
"    BL      sub_FF02E830 \n"
"    BL      sub_FF02246C \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF006708 \n"
);
}

/*************************************************************/
//** taskcreatePhySw_my @ 0xFF02496C - 0xFF0249C0, length=22
void __attribute__((naked,noinline)) taskcreatePhySw_my() {
asm volatile (
"    STMFD   SP!, {R3-R5,LR} \n"
"    LDR     R4, =0x1C3C \n"
"    LDR     R0, [R4, #4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF0249A0 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =mykbd_task \n"  // --> Patched. Old value = 0xFF024938.
"    MOV     R2, #0x2000 \n"  // --> Patched. Old value = 0x800. stack size for new task_PhySw so we don't have to do stack switch
"    MOV     R1, #0x17 \n"
"    LDR     R0, =0xFF024BEC /*'PhySw'*/ \n"
"    BL      sub_FF02B808 /*_CreateTaskStrictly*/ \n"
"    STR     R0, [R4, #4] \n"

"loc_FF0249A0:\n"
"    BL      sub_FF0595A4 \n"
"    BL      sub_FF08FBB8 \n"
"    BL      sub_FF02640C /*_IsFactoryMode_FW*/ \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF0249C0 \n"
"    LDR     R1, =0x386C8 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF08FB28 /*_OpLog.Start_FW*/ \n"

"loc_FF0249C0:\n"
"    LDMFD   SP!, {R3-R5,PC} \n"
);
}

/*************************************************************/
//** init_file_modules_task @ 0xFF09CDF8 - 0xFF09CE2C, length=14
void __attribute__((naked,noinline)) init_file_modules_task() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    BL      sub_FF092164 \n"
"    LDR     R5, =0x5006 \n"
"    MOVS    R4, R0 \n"
"    MOVNE   R1, #0 \n"
"    MOVNE   R0, R5 \n"
"    BLNE    _PostLogicalEventToUI \n"
"    BL      sub_FF092190_my \n"  // --> Patched. Old value = 0xFF092190.
"    BL      core_spytask_can_start\n"  // CHDK: Set "it's-safe-to-start" flag for spytask
"    CMP     R4, #0 \n"
"    LDMNEFD SP!, {R4-R6,PC} \n"
"    MOV     R0, R5 \n"
"    LDMFD   SP!, {R4-R6,LR} \n"
"    MOV     R1, #0 \n"
"    B       _PostLogicalEventToUI \n"
);
}

/*************************************************************/
//** sub_FF092190_my @ 0xFF092190 - 0xFF0921A0, length=5
void __attribute__((naked,noinline)) sub_FF092190_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    MOV     R0, #1 \n"
"    BL      sub_FF06E998 \n"
"    MOV     R0, #3 \n"
"    BL      sub_FF06E354_my \n"  // --> Patched. Old value = 0xFF06E354.
"    LDR     PC, =0xFF0921A4 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF06E354_my @ 0xFF06E354 - 0xFF06E3A8, length=22
void __attribute__((naked,noinline)) sub_FF06E354_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R6, R0 \n"
"    BL      sub_FF06E304 \n"
"    LDR     R1, =0x3F000 \n"
"    MOV     R5, R0 \n"
"    ADD     R4, R1, R0, LSL#7 \n"
"    LDR     R0, [R4, #0x6C] \n"
"    TST     R0, #4 \n"
"    LDRNE   R1, =0x9DD \n"
"    LDRNE   R0, =0xFF06DD48 /*'Mounter.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    MOV     R1, R6 \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF06DABC \n"
"    LDR     R0, [R4, #0x38] \n"
"    BL      sub_FF06D5B4 \n"
"    CMP     R0, #0 \n"
"    STREQ   R0, [R4, #0x6C] \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF06DB4C \n"
"    MOV     R0, R5 \n"
"    BL      sub_FF06DEA8_my \n"  // --> Patched. Old value = 0xFF06DEA8.
"    LDR     PC, =0xFF06E3AC \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF06DEA8_my @ 0xFF06DEA8 - 0xFF06DED0, length=11
void __attribute__((naked,noinline)) sub_FF06DEA8_my() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    MOV     R5, R0 \n"
"    LDR     R0, =0x3F000 \n"
"    ADD     R4, R0, R5, LSL#7 \n"
"    LDR     R0, [R4, #0x6C] \n"
"    TST     R0, #2 \n"
"    MOVNE   R0, #1 \n"
"    LDMNEFD SP!, {R4-R6,PC} \n"
"    LDR     R0, [R4, #0x38] \n"
"    MOV     R1, R5 \n"
"    BL      sub_FF06DBD0_my \n"  // --> Patched. Old value = 0xFF06DBD0.
"    LDR     PC, =0xFF06DED4 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF06DBD0_my @ 0xFF06DBD0 - 0xFF06DD40, length=93
void __attribute__((naked,noinline)) sub_FF06DBD0_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R9, R0 \n"
"    LDR     R0, =0x3F000 \n"
"    MOV     R6, #0 \n"
"    ADD     R5, R0, R1, LSL#7 \n"
"    LDR     R0, [R5, #0x3C] \n"
"    MOV     R7, R6 \n"
"    CMP     R0, #7 \n"
"    MOV     R8, R6 \n"
"    ADDCC   PC, PC, R0, LSL#2 \n"
"    B       loc_FF06DD28 \n"
"    B       loc_FF06DC30 \n"
"    B       loc_FF06DC18 \n"
"    B       loc_FF06DC18 \n"
"    B       loc_FF06DC18 \n"
"    B       loc_FF06DC18 \n"
"    B       loc_FF06DD20 \n"
"    B       loc_FF06DC18 \n"

"loc_FF06DC18:\n"
"    MOV     R2, #0 \n"
"    MOV     R1, #0x200 \n"
"    MOV     R0, #2 \n"
"    BL      _exmem_ualloc \n"
"    MOVS    R4, R0 \n"
"    BNE     loc_FF06DC38 \n"

"loc_FF06DC30:\n"
"    MOV     R0, #0 \n"
"    LDMFD   SP!, {R4-R10,PC} \n"

"loc_FF06DC38:\n"
"    LDR     R12, [R5, #0x50] \n"
"    MOV     R3, R4 \n"
"    MOV     R2, #1 \n"
"    MOV     R1, #0 \n"
"    MOV     R0, R9 \n"
"    BLX     R12 \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF06DC64 \n"
"    MOV     R0, #2 \n"
"    BL      _exmem_ufree \n"
"    B       loc_FF06DC30 \n"

"loc_FF06DC64:\n"
"    LDR     R1, [R5, #0x64] \n"
"    MOV     R0, R9 \n"
"    BLX     R1 \n"

"    MOV     R1, R4\n"              //  pointer to MBR in R1
"    BL      mbr_read_dryos\n"      //  total sectors count in R0 before and after call

// Start of DataGhost's FAT32 autodetection code
// Policy: If there is a partition which has type FAT32 or exFat, use the first one of those for image storage
// According to the code below, we can use R1, R2, R3 and R12.
// LR wasn't really used anywhere but for storing a part of the partition signature. This is the only thing
// that won't work with an offset, but since we can load from LR+offset into LR, we can use this to do that :)
"    MOV     R12, R4\n"             // Copy the MBR start address so we have something to work with
"    MOV     LR, R4\n"              // Save old offset for MBR signature
"    MOV     R1, #1\n"              // Note the current partition number
"    B       dg_sd_fat32_enter\n"   // We actually need to check the first partition as well, no increments yet!
"dg_sd_fat32:\n"
"    CMP     R1, #4\n"              // Did we already see the 4th partition?
"    BEQ     dg_sd_fat32_end\n"     // Yes, break. We didn't find anything, so don't change anything.
"    ADD     R12, R12, #0x10\n"     // Second partition
"    ADD     R1, R1, #1\n"          // Second partition for the loop
"dg_sd_fat32_enter:\n"
"    LDRB    R2, [R12, #0x1BE]\n"   // Partition status
"    LDRB    R3, [R12, #0x1C2]\n"   // Partition type (FAT32 = 0xB)
"    CMP     R3, #0xB\n"            // Is this a FAT32 partition?
"    CMPNE   R3, #0xC\n"            // Not 0xB, is it 0xC (FAT32 LBA) then?
"    CMPNE   R3, #0x7\n"            // exFat?
"    BNE     dg_sd_fat32\n"         // No, it isn't. Loop again.
"    CMP     R2, #0x00\n"           // It is, check the validity of the partition type
"    CMPNE   R2, #0x80\n"
"    BNE     dg_sd_fat32\n"         // Invalid, go to next partition
                                    // This partition is valid, it's the first one, bingo!
"    MOV     R4, R12\n"             // Move the new MBR offset for the partition detection.

"dg_sd_fat32_end:\n"
// End of DataGhost's FAT32 autodetection code

"    MOV     R1, R0 \n"
"    LDRB    R0, [R4, #0x1C9] \n"
"    LDRB    R2, [R4, #0x1C8] \n"
"    LDRB    R12, [R4, #0x1CC] \n"
"    MOV     R0, R0, LSL#24 \n"
"    ORR     R0, R0, R2, LSL#16 \n"
"    LDRB    R2, [R4, #0x1C7] \n"
"    LDRB    R3, [R4, #0x1BE] \n"
"    ORR     R0, R0, R2, LSL#8 \n"
"    LDRB    R2, [R4, #0x1C6] \n"
"    CMP     R3, #0 \n"
"    CMPNE   R3, #0x80 \n"
"    ORR     R0, R0, R2 \n"
"    LDRB    R2, [R4, #0x1CD] \n"
"    MOV     R2, R2, LSL#24 \n"
"    ORR     R2, R2, R12, LSL#16 \n"
"    LDRB    R12, [R4, #0x1CB] \n"
"    ORR     R2, R2, R12, LSL#8 \n"
"    LDRB    R12, [R4, #0x1CA] \n"
"    ORR     R2, R2, R12 \n"
//"  LDRB    R12, [R4, #0x1FE] \n"  // replaced below
//"  LDRB    R4, [R4, #0x1FF] \n"  // replaced below
"    LDRB    R12, [LR,#0x1FE]\n"    // replace instructions above
"    LDRB    R4, [LR,#0x1FF]\n"     // replace instructions above
"    BNE     loc_FF06DCF4 \n"
"    CMP     R1, R0 \n"
"    BCC     loc_FF06DCF4 \n"
"    ADD     R3, R0, R2 \n"
"    CMP     R3, R1 \n"
"    CMPLS   R12, #0x55 \n"
"    CMPEQ   R4, #0xAA \n"
"    MOVEQ   R6, R0 \n"
"    MOVEQ   R7, R2 \n"
"    MOVEQ   R4, #1 \n"
"    BEQ     loc_FF06DCF8 \n"

"loc_FF06DCF4:\n"
"    MOV     R4, R8 \n"

"loc_FF06DCF8:\n"
"    MOV     R0, #2 \n"
"    BL      _exmem_ufree \n"
"    CMP     R4, #0 \n"
"    BNE     loc_FF06DD34 \n"
"    LDR     R1, [R5, #0x64] \n"
"    MOV     R6, #0 \n"
"    MOV     R0, R9 \n"
"    BLX     R1 \n"
"    MOV     R7, R0 \n"
"    B       loc_FF06DD34 \n"

"loc_FF06DD20:\n"
"    MOV     R7, #0x40 \n"
"    B       loc_FF06DD34 \n"

"loc_FF06DD28:\n"
"    LDR     R1, =0x63A \n"
"    LDR     R0, =0xFF06DD48 /*'Mounter.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FF06DD34:\n"
"    ADD     R1, R5, #0x44 \n"
"    STMIA   R1, {R6-R8} \n"
"    MOV     R0, #1 \n"
"    LDMFD   SP!, {R4-R10,PC} \n"
);
}

/*************************************************************/
//** JogDial_task_my @ 0xFF05927C - 0xFF0595A0, length=202
void __attribute__((naked,noinline)) JogDial_task_my() {
asm volatile (
"    STMFD   SP!, {R4-R11,LR} \n"
"    SUB     SP, SP, #0x24 \n"
"    BL      sub_FF059610 \n"
"    LDR     R12, =0x2700 \n"
"    LDR     R6, =0xFF4538D4 \n"
"    MOV     R0, #0 \n"

// Save pointer for kbd.c routine
"    ADD     R10, SP, #0x18 \n"
"    LDR     R9, =jog_position \n"
"    STR     R10, [R9] \n"

"    ADD     R10, SP, #8 \n"
"    ADD     R9, SP, #0x10 \n"

"loc_FF05929C:\n"
"    ADD     R2, SP, #0x1C \n"
"    MOV     R1, #0 \n"
"    ADD     R4, R2, R0, LSL#1 \n"
"    ADD     R3, SP, #0x18 \n"
"    STRH    R1, [R4] \n"
"    ADD     R4, R3, R0, LSL#1 \n"
"    STRH    R1, [R4] \n"
"    STR     R1, [R9, R0, LSL#2] \n"
"    STR     R1, [R10, R0, LSL#2] \n"
"    ADD     R0, R0, #1 \n"
"    CMP     R0, #2 \n"
"    BLT     loc_FF05929C \n"

"loc_FF0592CC:\n"
"    LDR     R0, =0x2700 \n"
"    MOV     R2, #0 \n"
"    LDR     R0, [R0, #8] \n"
"    MOV     R1, SP \n"
"    BL      sub_FF02AFD0 /*_ReceiveMessageQueue*/ \n"
"    CMP     R0, #0 \n"
"    LDRNE   R1, =0x256 \n"
"    LDRNE   R0, =0xFF05952C /*'RotaryEncoder.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    LDR     R0, [SP] \n"
"    AND     R4, R0, #0xFF \n"
"    AND     R0, R0, #0xFF00 \n"
"    CMP     R0, #0x100 \n"
"    BEQ     loc_FF05933C \n"
"    CMP     R0, #0x200 \n"
"    BEQ     loc_FF059374 \n"
"    CMP     R0, #0x300 \n"
"    BEQ     loc_FF059574 \n"
"    CMP     R0, #0x400 \n"
"    BNE     loc_FF0592CC \n"
"    CMP     R4, #0 \n"
"    LDRNE   R1, =0x2E1 \n"
"    LDRNE   R0, =0xFF05952C /*'RotaryEncoder.c'*/ \n"
"    BLNE    _DebugAssert \n"
"    RSB     R0, R4, R4, LSL#3 \n"
"    LDR     R0, [R6, R0, LSL#2] \n"

"loc_FF059334:\n"
"    BL      sub_FF0595F4 \n"
"    B       loc_FF0592CC \n"

"loc_FF05933C:\n"
//------------------  added code ---------------------
"labelA:\n"
"    LDR     R0, =jogdial_stopped\n"
"    LDR     R0, [R0]\n"
"    CMP     R0, #1\n"
"    BNE     labelB\n"
"    MOV     R0, #40\n"
"    BL      _SleepTask\n"
"    B       labelA\n"
"labelB:\n"
//------------------  original code ------------------
"    LDR     R0, =0x2710 \n"
"    LDR     R0, [R0, R4, LSL#2] \n"
"    BL      sub_FF02C1F4 /*_CancelTimer*/ \n"
"    LDR     R2, =0xFF0591C8 \n"
"    ORR     R3, R4, #0x200 \n"
"    MOV     R1, R2 \n"
"    MOV     R0, #0x28 \n"
"    BL      sub_FF02C110 /*_SetTimerAfter*/ \n"
"    TST     R0, #1 \n"
"    CMPNE   R0, #0x15 \n"
"    STR     R0, [R10, R4, LSL#2] \n"
"    BEQ     loc_FF0592CC \n"
"    MOV     R1, #0x268 \n"
"    B       loc_FF059518 \n"

"loc_FF059374:\n"
"    RSB     R5, R4, R4, LSL#3 \n"
"    LDR     R0, [R6, R5, LSL#2] \n"
"    LDR     R1, =0xC0240000 \n"
"    ADD     R0, R1, R0, LSL#8 \n"
"    LDR     R0, [R0, #0x104] \n"
"    MOV     R1, R0, ASR#16 \n"
"    ADD     R0, SP, #0x1C \n"
"    ADD     R11, R0, R4, LSL#1 \n"
"    ADD     R0, SP, #0x18 \n"
"    ADD     R0, R0, R4, LSL#1 \n"
"    STRH    R1, [R11] \n"
"    STR     R0, [SP, #0x20] \n"
"    LDRSH   R3, [R0] \n"
"    SUB     R2, R1, R3 \n"
"    CMP     R2, #0 \n"
"    BNE     loc_FF0593F8 \n"
"    LDR     R0, [R9, R4, LSL#2] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF0594D4 \n"
"    LDR     R7, =0x2710 \n"
"    LDR     R0, [R7, R4, LSL#2] \n"
"    BL      sub_FF02C1F4 /*_CancelTimer*/ \n"
"    LDR     R2, =0xFF0591D4 \n"
"    ORR     R3, R4, #0x300 \n"
"    MOV     R1, R2 \n"
"    MOV     R0, #0x1F4 \n"
"    BL      sub_FF02C110 /*_SetTimerAfter*/ \n"
"    TST     R0, #1 \n"
"    CMPNE   R0, #0x15 \n"
"    STR     R0, [R7, R4, LSL#2] \n"
"    BEQ     loc_FF0594D4 \n"
"    LDR     R1, =0x281 \n"
"    B       loc_FF0594CC \n"

"loc_FF0593F8:\n"
"    MOV     R0, R2 \n"
"    RSBLT   R0, R0, #0 \n"
"    MOVLE   R7, #0 \n"
"    MOVGT   R7, #1 \n"
"    CMP     R0, #0xFF \n"
"    BLS     loc_FF059434 \n"
"    LDR     R0, =0x7FFF \n"
"    CMP     R2, #0 \n"
"    SUBLE   R0, R0, R3 \n"
"    ADDLE   R0, R0, R1 \n"
"    SUBGT   R0, R0, R1 \n"
"    ADDGT   R0, R0, R3 \n"
"    MVN     R1, #0x8000 \n"
"    SUB     R0, R0, R1 \n"
"    EOR     R7, R7, #1 \n"

"loc_FF059434:\n"
"    STR     R0, [SP, #4] \n"
"    LDR     R0, [R9, R4, LSL#2] \n"
"    CMP     R0, #0 \n"
"    ADDEQ   R0, R6, R5, LSL#2 \n"
"    LDREQ   R0, [R0, #8] \n"
"    BEQ     loc_FF05946C \n"
"    ADD     R8, R6, R5, LSL#2 \n"
"    ADD     R1, R8, R7, LSL#2 \n"
"    LDR     R1, [R1, #0x10] \n"
"    CMP     R1, R0 \n"
"    BEQ     loc_FF059470 \n"
"    LDR     R0, [R8, #0xC] \n"
"    BL      sub_FF0249C4 \n"
"    LDR     R0, [R8, #8] \n"

"loc_FF05946C:\n"
"    BL      sub_FF0249C4 \n"

"loc_FF059470:\n"
"    ADD     R0, R6, R5, LSL#2 \n"
"    ADD     R7, R0, R7, LSL#2 \n"
"    LDR     R0, [R7, #0x10] \n"
"    LDR     R1, [SP, #4] \n"
"    BL      sub_FF0249D4 \n"
"    LDR     R0, [R7, #0x10] \n"
"    LDR     R7, =0x2710 \n"
"    STR     R0, [R9, R4, LSL#2] \n"
"    LDRH    R1, [R11] \n"
"    LDR     R0, [SP, #0x20] \n"
"    STRH    R1, [R0] \n"
"    LDR     R0, [R7, R4, LSL#2] \n"
"    BL      sub_FF02C1F4 /*_CancelTimer*/ \n"
"    LDR     R2, =0xFF0591D4 \n"
"    ORR     R3, R4, #0x300 \n"
"    MOV     R1, R2 \n"
"    MOV     R0, #0x1F4 \n"
"    BL      sub_FF02C110 /*_SetTimerAfter*/ \n"
"    TST     R0, #1 \n"
"    CMPNE   R0, #0x15 \n"
"    STR     R0, [R7, R4, LSL#2] \n"
"    BEQ     loc_FF0594D4 \n"
"    LDR     R1, =0x2C3 \n"

"loc_FF0594CC:\n"
"    LDR     R0, =0xFF05952C /*'RotaryEncoder.c'*/ \n"
"    BL      _DebugAssert \n"

"loc_FF0594D4:\n"
"    ADD     R0, R6, R5, LSL#2 \n"
"    LDR     R0, [R0, #0x18] \n"
"    CMP     R0, #1 \n"
"    BNE     loc_FF05956C \n"
"    LDR     R0, =0x2700 \n"
"    LDR     R0, [R0, #0xC] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FF05956C \n"
"    LDR     R2, =0xFF0591C8 \n"
"    ORR     R3, R4, #0x400 \n"
"    MOV     R1, R2 \n"
"    BL      sub_FF02C110 /*_SetTimerAfter*/ \n"
"    TST     R0, #1 \n"
"    CMPNE   R0, #0x15 \n"
"    STR     R0, [R10, R4, LSL#2] \n"
"    BEQ     loc_FF0592CC \n"
"    LDR     R1, =0x2CA \n"

"loc_FF059518:\n"
"    LDR     R0, =0xFF05952C /*'RotaryEncoder.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FF0592CC \n"

"loc_FF05956C:\n"
"    LDR     R0, [R6, R5, LSL#2] \n"
"    B       loc_FF059334 \n"

"loc_FF059574:\n"
"    LDR     R0, [R9, R4, LSL#2] \n"
"    CMP     R0, #0 \n"
"    MOVEQ   R1, #0x2D4 \n"
"    LDREQ   R0, =0xFF05952C /*'RotaryEncoder.c'*/ \n"
"    BLEQ    _DebugAssert \n"
"    RSB     R0, R4, R4, LSL#3 \n"
"    ADD     R0, R6, R0, LSL#2 \n"
"    LDR     R0, [R0, #0xC] \n"
"    BL      sub_FF0249C4 \n"
"    MOV     R0, #0 \n"
"    STR     R0, [R9, R4, LSL#2] \n"
"    B       loc_FF0592CC \n"
);
}
