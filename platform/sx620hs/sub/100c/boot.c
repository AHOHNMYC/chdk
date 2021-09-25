/*
 * boot.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"
#include "core.h"
#include "dryos31.h"

#define offsetof(TYPE, MEMBER) ((int) &((TYPE *)0)->MEMBER)

const char * const new_sa = &_end;

/*----------------------------------------------------------------------
    CreateTask_spytask
-----------------------------------------------------------------------*/
void CreateTask_spytask()
{
    _CreateTask("SpyTask", 0x19, 0x2000, core_spytask, 0);
}

/*----------------------------------------------------------------------
    boot()

    Main entry point for the CHDK code
-----------------------------------------------------------------------*/


/*************************************************************/
//** boot @ 0xFF02000C - 0xFF02017C, length=93
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
"    MOV     R0, #0x39 \n"
"    MCR     p15, 0, R0, c6, c2 \n"
"    MOV     R0, #0x40000039 \n"
"    MCR     p15, 0, R0, c6, c3 \n"
"    MOV     R0, #0x80000017 \n"
"    MCR     p15, 0, R0, c6, c4 \n"
"    LDR     R0, =0xFF00002F \n"
"    MCR     p15, 0, R0, c6, c5 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c2, c0, 1 \n"
"    MOV     R0, #0x34 \n"
"    MCR     p15, 0, R0, c3, c0 \n"
"    LDR     R0, =0x3333330 \n"
"    MCR     p15, 0, R0, c5, c0, 2 \n"
"    LDR     R0, =0x3333330 \n"
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
"    MVN     R1, #0 \n"
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
"    LDR     R0, =0xFF9131B4 \n"
"    LDR     R1, =0x6B1000 \n"
"    LDR     R3, =0x6E3F2A \n"

"loc_FF02013C:\n"
"    CMP     R1, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF02013C \n"
"    LDR     R0, =0xFF8FB60C \n"
"    LDR     R1, =0x1900 \n"
"    LDR     R3, =0x194A8 \n"

"loc_FF020158:\n"
"    CMP     R1, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF020158 \n"
"    LDR     R1, =0x32A990 \n"
"    MOV     R2, #0 \n"

"loc_FF020170:\n"
"    CMP     R3, R1 \n"
"    STRCC   R2, [R3], #4 \n"
"    BCC     loc_FF020170 \n"
/* Install task hooks via 0x193x is not possible with this new dryos version
   So the below code patches the CreateTask function in RAM to install our
   hook -- ERR99
*/
// Install CreateTask patch
"    LDR     R0, =patch_CreateTask\n"   // Patch data
"    LDM     R0, {R1,R2}\n"             // Get two patch instructions
"    LDR     R0, =hook_CreateTask\n"    // Address to patch
"    STM     R0, {R1,R2}\n"             // Store patch instructions

"    B       sub_FF0203C4_my \n"  // --> Patched. Old value = 0xFF0203C4.

"patch_CreateTask:\n"
"    LDR     PC, [PC,#-0x4]\n"          // Do jump to absolute address CreateTask_my
"    .long   CreateTask_my\n"
);
}

/*************************************************************/
//** CreateTask_my @ 0x006B5714 - 0x006B5718, length=2
void __attribute__((naked,noinline)) CreateTask_my() {
asm volatile (
"    STMFD   SP!, {R0}\n"
//R3 = Pointer to task function to create

/*** INSTALL capt_seq_task() hook ***/
"    LDR     R0, =task_CaptSeq\n"       // DryOS original code function ptr.
"    CMP     R0, R3\n"                  // is the given taskptr equal to our searched function?
"    LDREQ   R3, =capt_seq_task\n"      // if so replace with our task function base ptr.
"    BEQ     exitHook\n"                // below compares not necessary if this check has found something.

/*** INSTALL exp_drv_task() hook ***/
//"    LDR     R0, =task_ExpDrv\n"
//"    CMP     R0, R3\n"
//"    LDREQ   R3, =exp_drv_task\n"
//"    BEQ     exitHook\n"

/*** INSTALL filewrite() hook ***/
"    LDR     R0, =task_FileWrite\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =filewritetask\n"
"    BEQ     exitHook\n"

/*** INSTALL movie_record_task() hook ***/
//"    LDR     R0, =task_MovieRecord\n"
//"    CMP     R0, R3\n"
//"    LDREQ   R3, =movie_record_task\n"
//"    BEQ     exitHook\n"

/*** INSTALL liveimage_task() hook ***/
//"    LDR     R0, =task_LiveImageTask\n"
//"    CMP     R0, R3\n"
//"    LDREQ   R3, =liveimage_task\n"
//"    BEQ     exitHook\n"

/*** INSTALL init_file_modules_task() hook ***/
"    LDR     R0, =task_InitFileModules\n"
"    CMP     R0, R3\n"
"    LDREQ   R3, =init_file_modules_task\n"

"exitHook:\n"
// restore overwritten registers
"    LDMFD   SP!, {R0}\n"
// Execute overwritten instructions from original code, then jump to firmware
"    STMFD   SP!, {R1-R5,LR} \n"
"    MOV     R4, R2 \n"
"    LDR     PC, =0x006B571C \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF0203C4_my @ 0xFF0203C4 - 0xFF02042C, length=27
void __attribute__((naked,noinline)) sub_FF0203C4_my() {

   // Replacement of sub_FF02C1EC for correct power-on.
   // (ON/OFF short press = playback mode, long press = record mode)
   // value and pointer from sub_FF076CAC sx620hs_100b 
   *(int*)(0x2f0c+0x4) = (*(int*)0xC022F48C)&0x20000 ? 0x80000 : 0x40000;

asm volatile (
"    LDR     R0, =0xFF02043C \n"
"    MOV     R1, #0 \n"
"    LDR     R3, =0xFF020474 \n"

"loc_FF0203D0:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF0203D0 \n"
"    LDR     R0, =0xFF020474 \n"
"    MOV     R1, #0x1E0 \n"
"    LDR     R3, =0xFF02064C \n"

"loc_FF0203EC:\n"
"    CMP     R0, R3 \n"
"    LDRCC   R2, [R0], #4 \n"
"    STRCC   R2, [R1], #4 \n"
"    BCC     loc_FF0203EC \n"
"    MOV     R0, #0xD2 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    MOV     R0, #0xD3 \n"
"    MSR     CPSR_cxsf, R0 \n"
"    MOV     SP, #0x1000 \n"
"    LDR     R0, =0x3B8 \n"
"    LDR     R2, =0xEEEEEEEE \n"
"    MOV     R3, #0x1000 \n"

"loc_FF020420:\n"
"    CMP     R0, R3 \n"
"    STRCC   R2, [R0], #4 \n"
"    BCC     loc_FF020420 \n"
"    B       sub_FF022914_my \n"  // --> Patched. Old value = 0xFF022914.
);
}

/*************************************************************/
//** sub_FF022914_my @ 0xFF022914 - 0xFF022A24, length=69
void __attribute__((naked,noinline)) sub_FF022914_my() {
asm volatile (
"    LDR     R1, =0x1A64 \n"
"    STR     LR, [SP, #-4]! \n"
"    SUB     SP, SP, #0x7C \n"
"    MOV     R0, #0x80000 \n"
"    STR     R0, [R1] \n"
"    LDR     R0, =0x40DEBEE0 \n"
"    LDR     R1, =0x1A68 \n"
"    STR     R0, [R1] \n"
"    LDR     R1, =0x1A6C \n"
"    ADD     R0, R0, #0x2000 \n"
"    STR     R0, [R1] \n"
"    MOV     R1, #0x78 \n"
"    ADD     R0, SP, #4 \n"
"    BL      sub_006DC0D0 \n"
"    MOV     R0, #0xA0000 \n"
"    STR     R0, [SP, #8] \n"

#if defined(CHDK_NOT_IN_CANON_HEAP) // use original heap offset if CHDK is loaded in high memory
"    LDR     R0, =0x32A990 \n"
#else
"    LDR     R0, =new_sa\n"   // otherwise use patched value
"    LDR     R0, [R0]\n"      //
#endif

"    LDR     R2, =0x562A94 \n"
"    STR     R0, [SP, #0xC] \n"
"    SUB     R0, R2, R0 \n"
"    STR     R0, [SP, #0x10] \n"
"    MOV     R0, #0x22 \n"
"    STR     R0, [SP, #0x1C] \n"
"    MOV     R0, #0x98 \n"
"    STR     R0, [SP, #0x20] \n"
"    LDR     R0, =0x21A \n"
"    LDR     R1, =0x56E000 \n"
"    STR     R2, [SP, #0x14] \n"
"    STR     R0, [SP, #0x24] \n"
"    MOV     R0, #0xFA \n"
"    STR     R1, [SP, #4] \n"
"    STR     R1, [SP, #0x18] \n"
"    STR     R0, [SP, #0x28] \n"
"    MOV     R0, #0xD4 \n"
"    STR     R0, [SP, #0x2C] \n"
"    MOV     R0, #0x85 \n"
"    STR     R0, [SP, #0x30] \n"
"    MOV     R0, #0x40 \n"
"    STR     R0, [SP, #0x34] \n"
"    MOV     R0, #4 \n"
"    STR     R0, [SP, #0x38] \n"
"    MOV     R0, #0 \n"
"    STR     R0, [SP, #0x3C] \n"
"    MOV     R0, #0x10 \n"
"    STR     R0, [SP, #0x60] \n"
"    MOV     R0, #0x1000 \n"
"    STR     R0, [SP, #0x64] \n"
"    MOV     R0, #0x100 \n"
"    STR     R0, [SP, #0x68] \n"
"    MOV     R0, #0x2000 \n"
"    STR     R0, [SP, #0x6C] \n"
"    LDR     R1, =sub_FF02473C_my \n"  // --> Patched. Old value = 0xFF02473C.
"    MOV     R2, #0 \n"
"    ADD     R0, SP, #4 \n"
"    BL      sub_006B1BC4 \n"
"    ADD     SP, SP, #0x7C \n"
"    LDR     PC, [SP], #4 \n"
);
}

/*************************************************************/
//** sub_FF02473C_my @ 0xFF02473C - 0xFF0247D4, length=39
void __attribute__((naked,noinline)) sub_FF02473C_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    LDR     R4, =0xFF0247F8 /*'/_term'*/ \n"
"    BL      sub_FF020848 \n"
"    LDR     R1, =0x1A64 \n"
"    LDR     R0, =0x19F8 \n"
"    LDR     R1, [R1] \n"
"    LDR     R0, [R0] \n"
"    ADD     R1, R1, #0x10 \n"
"    CMP     R0, R1 \n"
"    LDRCC   R0, =0xFF024808 /*'USER_MEM size checking'*/ \n"
"    BLCC    _err_init_task \n"
"    BL      sub_FF023528 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF024820 /*'dmSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF022528 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF024828 /*'termDriverInit'*/ \n"
"    BLLT    _err_init_task \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF022608 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF024838 /*'termDeviceCreate'*/ \n"
"    BLLT    _err_init_task \n"
"    MOV     R0, R4 \n"
"    BL      sub_FF022140 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF02484C /*'stdioSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF024DA8 \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF024858 /*'stdlibSetup'*/ \n"
"    BLLT    _err_init_task \n"
"    BL      sub_FF020F4C \n"
"    CMP     R0, #0 \n"
"    LDRLT   R0, =0xFF024864 /*'extlib_setup'*/ \n"
"    BLLT    _err_init_task \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF027DC0_my \n"  // --> Patched. Old value = 0xFF027DC0.
);
}

/*************************************************************/
//** sub_FF027DC0_my @ 0xFF027DC0 - 0xFF027E10, length=21
void __attribute__((naked,noinline)) sub_FF027DC0_my() {
asm volatile (
"    STMFD   SP!, {R3,LR} \n"
"    BL      sub_FF0340B0 \n"
"    BL      sub_FF02D7D4 /*_IsNormalCameraMode_FW*/ \n"
//"  BL      _sub_FF02C1EC \n"  // startup check,disabled
//"  CMP     R0, #0 \n"
//"  BNE     loc_FF027DE0 \n"
//"  BL      _sub_FF02B968 \n"

"loc_FF027DDC:\n"
//"  B       loc_FF027DDC \n"

"loc_FF027DE0:\n"
"    BL      sub_006B8C18 \n"
"    LDR     R1, =0x60E000 \n"
"    MOV     R0, #0 \n"
"    BL      sub_FF038368 \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =task_Startup_my \n"  // --> Patched. Old value = 0xFF027D58.
"    MOV     R2, #0 \n"
"    MOV     R1, #0x19 \n"
"    LDR     R0, =0xFF027E1C /*'Startup'*/ \n"
"    BL      _CreateTask \n"
"    MOV     R0, #0 \n"
"    LDMFD   SP!, {R3,PC} \n"
);
}

/*************************************************************/
//** task_Startup_my @ 0xFF027D58 - 0xFF027DBC, length=26
void __attribute__((naked,noinline)) task_Startup_my() {
asm volatile (
"    STMFD   SP!, {R4,LR} \n"
"    BL      sub_FF022CCC \n"
"    BL      sub_FF02C6B8 \n"
"    BL      sub_FF02B914 \n"
//"  BL      _sub_FF0777C8 \n"  // --> Nullsub call removed.
"    BL      sub_FF038114 \n"
//"  BL      _sub_FF037FD4 \n"  // load DISKBOOT.BIN
"    BL      sub_FF038278 \n"
"    BL      sub_FF03843C \n"
//"  BL      _sub_FF03826C \n"  // --> Nullsub call removed.
"    BL      sub_FF038148 \n"
"    BL      sub_FF033FE8 \n"
"    BL      sub_FF038444 \n"
"    BL      CreateTask_spytask\n" // added
"    BL      taskcreatePhySw_my \n"  // --> Patched. Old value = 0xFF02C098.
"    BL      init_required_fw_features\n" // added
"    BL      sub_FF031C68 \n"
"    BL      sub_FF0C7978 \n"
"    BL      sub_FF029190 \n"
"    BL      sub_FF02B44C \n"
"    BL      sub_FF037C98 \n"
"    BL      sub_FF02B8C4 \n"
"    BL      sub_FF02B3E0 \n"
//"  BL      _sub_FF038270 \n"  // --> Nullsub call removed.
"    BL      sub_FF029FCC \n"
"    BL      sub_FF02B39C \n"
"    LDMFD   SP!, {R4,LR} \n"
"    B       sub_FF022E1C \n"
);
}

/*************************************************************/
//** taskcreatePhySw_my @ 0xFF02C098 - 0xFF02C0DC, length=18
void __attribute__((naked,noinline)) taskcreatePhySw_my() {
asm volatile (
"    STMFD   SP!, {R3-R5,LR} \n"
"    BL      sub_FF036F00 \n"
"    BL      sub_FF02D70C /*_IsFactoryMode_FW*/ \n"
"    CMP     R0, #0 \n"
"    BLEQ    sub_FF036E68 /*_OpLog.Start_FW*/ \n"
"    LDR     R4, =0x1C18 \n"
"    LDR     R0, [R4, #4] \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FF02C0DC \n"
"    MOV     R3, #0 \n"
"    STR     R3, [SP] \n"
"    LDR     R3, =mykbd_task \n"  // --> Patched. Old value = 0xFF02C064.
"    MOV     R2, #0x2000 \n"  // --> Patched. Old value = 0x800. stack size for new task_PhySw so we don't have to do stack switch
"    MOV     R1, #0x17 \n"
"    LDR     R0, =0xFF02C38C /*'PhySw'*/ \n"
"    BL      sub_006B7C84 /*_CreateTaskStrictly*/ \n"
"    STR     R0, [R4, #4] \n"

"loc_FF02C0DC:\n"
"    LDMFD   SP!, {R3-R5,PC} \n"
);
}

/*************************************************************/
//** init_file_modules_task @ 0xFF05FA6C - 0xFF05FAA8, length=16
void __attribute__((naked,noinline)) init_file_modules_task() {
asm volatile (
"    STMFD   SP!, {R4-R6,LR} \n"
"    MOV     R0, #6 \n"
//"  BL      _sub_FF029578 \n"  // --> Nullsub call removed.
"    BL      sub_FF0B0DA8 \n"
"    LDR     R5, =0x5006 \n"
"    MOVS    R4, R0 \n"
"    MOVNE   R1, #0 \n"
"    MOVNE   R0, R5 \n"
"    BLNE    _PostLogicalEventToUI \n"
"    BL      sub_FF0B0DD8 \n"
"    BL      core_spytask_can_start\n"  // CHDK: Set "it's-safe-to-start" flag for spytask
"    CMP     R4, #0 \n"
"    LDMNEFD SP!, {R4-R6,PC} \n"
"    MOV     R0, R5 \n"
"    LDMFD   SP!, {R4-R6,LR} \n"
"    MOV     R1, #1 \n"
"    B       _PostLogicalEventToUI \n"
);
}

/*************************************************************/
//** kbd_p1_f_cont_my @ 0xFF02C5E0 - 0xFF02C620, length=17
void __attribute__((naked,noinline)) kbd_p1_f_cont_my() {
asm volatile (
"    LDR     R2, =0x1A278 \n"
"    MOV     R0, #2 \n"
"    ADD     R3, R2, #0x24 \n"
"    MOV     R4, SP \n"

"loc_FF02C5F0:\n"
"    ADD     R1, R3, R0, LSL#2 \n"
"    LDR     R12, [R2, R0, LSL#2] \n"
"    LDR     R6, [R1, #0xC] \n"
"    LDR     R1, [R1, #0x18] \n"
"    AND     R12, R12, R6 \n"
"    EOR     R1, R1, R12 \n"
"    STR     R1, [R4, R0, LSL#2] \n"
"    SUBS    R0, R0, #1 \n"
"    BPL     loc_FF02C5F0 \n"
"    bl      xtra_kbd_cb \n"            // + returns part of physw_status when overriding, -1 otherwise
"    mov     r3, r0 \n"                 // + provide new argument for the next function
"    LDR     R2, =0x1A290 \n"
"    MOV     R0, SP \n"
"    SUB     R1, R2, #0xC \n"
"    BL      sub_FF02BDF4_my \n"  // --> Patched. Old value = 0xFF02BDF4.
"    LDR     PC, =0xFF02C624 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FF02BDF4_my @ 0xFF02BDF4 - 0xFF02BDFC, length=3
void __attribute__((naked,noinline)) sub_FF02BDF4_my() {
asm volatile (
"    STMFD   SP!, {R0-R12,LR} \n"
"    MOV     R5, R0 \n"
//"  MVN     R0, #0 \n"  // - should be (physw_status[0] & 0xffff) when overriding, -1 otherwise. 
"    mov     r0, r3 \n"  // + (new argument to allow passing our variable)
"    LDR     PC, =0xFF02BE00 \n"  // Continue in firmware
);
}
/*
    *** TEMPORARY workaround ***
    Init stuff to avoid asserts on cameras running DryOS r54+
    Execute this only once
 */
void init_required_fw_features(void) {
    extern void _init_focus_eventflag();
    extern void _init_nd_eventflag();
    extern void _init_nd_semaphore();
    //extern void _init_zoom_semaphore(); // for MoveZoomLensWithPoint

    _init_focus_eventflag();
    _init_nd_eventflag();
    _init_nd_semaphore();
}

