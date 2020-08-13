/*
 * filewrite.c - auto-generated by CHDK code_gen.
 */
#include "lolevel.h"
#include "platform.h"

// debug
//#define FILEWRITE_DEBUG_LOG 1
extern void _LogCameraEvent(int id,const char *fmt,...);

typedef struct {
    unsigned int address;
    unsigned int length;
} cam_ptp_data_chunk; //camera specific structure

#define MAX_CHUNKS_FOR_JPEG 4 //filewritetask is prepared for this many chunks
/*
 * fwt_data_struct: defined here as it's camera dependent
 * unneeded members are designated with unkn
 * file_offset, full_size, seek_flag only needs to be defined for DryOS>=r50 generation cameras
 * pdc is always required
 * name is not currently used
 */
typedef struct
{
    int unkn1[5];                                //
    cam_ptp_data_chunk pdc[MAX_CHUNKS_FOR_JPEG];
    char name[32];
} fwt_data_struct;

#include "../../../generic/filewrite.c"

#ifdef FILEWRITE_DEBUG_LOG
void log_fwt_msg(fwt_data_struct *fwd)
{
    int m=fwd->unkn1[0];
    _LogCameraEvent(0x20,"fw m:%d",m);
    _LogCameraEvent(0x20,"fw %s",fwd->name);
    if(m >= 4 && m < (4+MAX_CHUNKS_FOR_JPEG)) {
        _LogCameraEvent(0x20,"fw chunk adr:0x%08x l:0x%08x",fwd->pdc[m-4].address,fwd->pdc[m-4].length);
    }
    _LogCameraEvent(0x20,"fw u %08x %08x %08x %08x",fwd->unkn1[1],fwd->unkn1[2],fwd->unkn1[3],fwd->unkn1[4]);
}
#endif


/*************************************************************/
//** filewritetask @ 0xFFA46A14 - 0xFFA46AF8, length=58
void __attribute__((naked,noinline)) filewritetask() {
asm volatile (
"    STMFD   SP!, {R1-R5,LR} \n"
"    LDR     R4, =0xC8F4 \n"

"loc_FFA46A1C:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #8 \n"
"    BL      sub_FF827D30 /*_ReceiveMessageQueue*/ \n"
"    CMP     R0, #0 \n"
"    BNE     loc_FFA46A4C \n"
#ifdef FILEWRITE_DEBUG_LOG
"ldr     r0, [sp,#8]\n"
"bl log_fwt_msg\n"
#endif
"    LDR     R0, [SP, #8] \n"
"    LDR     R1, [R0] \n"
"    CMP     R1, #1 \n"
"    BNE     loc_FFA46A54 \n"
"    LDR     R0, [R4, #8] \n"
"    BL      _GiveSemaphore \n"

"loc_FFA46A4C:\n"
"    BL      _ExitTask \n"
"    LDMFD   SP!, {R1-R5,PC} \n"

"loc_FFA46A54:\n"
"    SUB     R1, R1, #2 \n"
"    CMP     R1, #6 \n"
"    ADDLS   PC, PC, R1, LSL#2 \n"
"    B       loc_FFA46A1C \n"
"    B       loc_FFA46A80 \n"
"    B       loc_FFA46AE4 \n"
"    B       loc_FFA46AEC \n"
"    B       loc_FFA46AEC \n"
"    B       loc_FFA46AEC \n"
"    B       loc_FFA46AEC \n"
"    B       loc_FFA46AF4 \n"

"loc_FFA46A80:\n"
"    MOV     R0, #0 \n"
"    STR     R0, [SP] \n"

"loc_FFA46A88:\n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R1, SP \n"
"    BL      sub_FF827F74 /*_GetNumberOfPostedMessages*/ \n"
"    LDR     R0, [SP] \n"
"    CMP     R0, #0 \n"
"    BEQ     loc_FFA46AB4 \n"
"    LDR     R0, [R4, #0x10] \n"
"    MOV     R2, #0 \n"
"    ADD     R1, SP, #4 \n"
"    BL      sub_FF827D30 /*_ReceiveMessageQueue*/ \n"
"    B       loc_FFA46A88 \n"

"loc_FFA46AB4:\n"
"    LDR     R0, [R4] \n"
"    CMN     R0, #1 \n"
"    BEQ     loc_FFA46AD8 \n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    MVN     R0, #0 \n"
"    STR     R0, [R4] \n"
"    LDR     R0, =0xC03F0 \n"
"    BL      sub_FF85A094 \n"
"    BL      sub_FF85873C \n"

"loc_FFA46AD8:\n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      _GiveSemaphore \n"
"    B       loc_FFA46A1C \n"

"loc_FFA46AE4:\n"
"    BL      sub_FFA46D6C_my \n"  // --> Patched. Old value = 0xFFA46D6C. Open stage
"    B       loc_FFA46A1C \n"

"loc_FFA46AEC:\n"
"    BL      sub_FFA46E6C_my \n"  // --> Patched. Old value = 0xFFA46E6C. Write stage
"    B       loc_FFA46A1C \n"

"loc_FFA46AF4:\n"
"    BL      sub_FFA46F78_my \n"  // --> Patched. Old value = 0xFFA46F78. Close stage
"    B       loc_FFA46A1C \n"
);
}

/*************************************************************/
//** sub_FFA46D6C_my @ 0xFFA46D6C - 0xFFA46DAC, length=17
void __attribute__((naked,noinline)) sub_FFA46D6C_my() {
asm volatile (
"    STMFD   SP!, {R4-R8,LR} \n"
"    MOV     R4, R0 \n"
"    ADD     R0, R0, #0x34 \n"
"    SUB     SP, SP, #0x38 \n"
"    BL      sub_FF85A094 \n"
"    MOV     R1, #0 \n"
"    BL      sub_FF8586EC \n"
"    LDR     R0, [R4, #0xC] \n"
"    BL      sub_FF8569FC \n"
"    LDR     R7, [R4, #8] \n"
"    LDR     R8, =0x1B6 \n"
"    ADD     R6, R4, #0x34 \n"
"    LDR     R5, [R4, #0xC] \n"
//hook start
"    STMFD SP!, {R4-R12,LR}\n"
"    MOV R0, R4\n"
"    BL filewrite_main_hook\n"
"    LDMFD SP!, {R4-R12,LR}\n"
//hook end
"    MOV     R0, R6 \n"
"    MOV     R1, R7 \n"
"    MOV     R2, R8 \n"
"    BL      fwt_open \n"  // --> Patched. Old value = _Open.
"    LDR     PC, =0xFFA46DB0 \n"  // Continue in firmware
);
}

/*************************************************************/
//** sub_FFA46E6C_my @ 0xFFA46E6C - 0xFFA46F74, length=67
void __attribute__((naked,noinline)) sub_FFA46E6C_my() {
asm volatile (
"    STMFD   SP!, {R4-R10,LR} \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R0] \n"
"    CMP     R0, #4 \n"
"    LDREQ   R6, [R4, #0x18] \n"
"    LDREQ   R7, [R4, #0x14] \n"
"    BEQ     loc_FFA46EB8 \n"
"    CMP     R0, #5 \n"
"    LDREQ   R6, [R4, #0x20] \n"
"    LDREQ   R7, [R4, #0x1C] \n"
"    BEQ     loc_FFA46EB8 \n"
"    CMP     R0, #6 \n"
"    LDREQ   R6, [R4, #0x28] \n"
"    LDREQ   R7, [R4, #0x24] \n"
"    BEQ     loc_FFA46EB8 \n"
"    CMP     R0, #7 \n"
"    BNE     loc_FFA46ECC \n"
"    LDR     R6, [R4, #0x30] \n"
"    LDR     R7, [R4, #0x2C] \n"

"loc_FFA46EB8:\n"
"    CMP     R6, #0 \n"
"    BNE     loc_FFA46EDC \n"

"loc_FFA46EC0:\n"
"    MOV     R1, R4 \n"
"    MOV     R0, #8 \n"
"    B       loc_FFA46F70 \n"

"loc_FFA46ECC:\n"
"    LDR     R1, =0x205 \n"
"    LDR     R0, =0xFFA46D58 /*'dwFWrite.c'*/ \n"
"    BL      _DebugAssert \n"
"    B       loc_FFA46EC0 \n"

"loc_FFA46EDC:\n"
"    LDR     R9, =0xC8F4 \n"
"    MOV     R5, R6 \n"

"loc_FFA46EE4:\n"
"    LDR     R0, [R4, #4] \n"
"    CMP     R5, #0x1000000 \n"
"    MOVLS   R8, R5 \n"
"    MOVHI   R8, #0x1000000 \n"
"    BIC     R1, R0, #0xFF000000 \n"
"    CMP     R1, #0 \n"
"    BICNE   R0, R0, #0xFF000000 \n"
"    RSBNE   R0, R0, #0x1000000 \n"
"    CMPNE   R8, R0 \n"
"    MOVHI   R8, R0 \n"
"    LDR     R0, [R9] \n"
"    MOV     R2, R8 \n"
"    MOV     R1, R7 \n"
"    BL      fwt_write \n"  // --> Patched. Old value = _Write.
"    LDR     R1, [R4, #4] \n"
"    CMP     R8, R0 \n"
"    ADD     R1, R1, R0 \n"
"    STR     R1, [R4, #4] \n"
"    BEQ     loc_FFA46F44 \n"
"    LDR     R0, =0x10B1 \n"
"    BL      sub_FF87EC08 /*_IsControlEventActive_FW*/ \n"
"    LDR     R1, =0x9200005 \n"
"    STR     R1, [R4, #0x10] \n"
"    B       loc_FFA46EC0 \n"

"loc_FFA46F44:\n"
"    SUB     R5, R5, R0 \n"
"    CMP     R5, R6 \n"
"    ADD     R7, R7, R0 \n"
"    LDRCS   R0, =0xFFA46D58 /*'dwFWrite.c'*/ \n"
"    MOVCS   R1, #0x234 \n"
"    BLCS    _DebugAssert \n"
"    CMP     R5, #0 \n"
"    BNE     loc_FFA46EE4 \n"
"    LDR     R0, [R4] \n"
"    MOV     R1, R4 \n"
"    ADD     R0, R0, #1 \n"

"loc_FFA46F70:\n"
"    LDMFD   SP!, {R4-R10,LR} \n"
"    B       sub_FFA4695C \n"
);
}

/*************************************************************/
//** sub_FFA46F78_my @ 0xFFA46F78 - 0xFFA47014, length=40
void __attribute__((naked,noinline)) sub_FFA46F78_my() {
asm volatile (
"    STMFD   SP!, {R4,R5,LR} \n"
"    LDR     R5, =0xC8F4 \n"
"    MOV     R4, R0 \n"
"    LDR     R0, [R5] \n"
"    SUB     SP, SP, #0x1C \n"
"    CMN     R0, #1 \n"
"    BEQ     loc_FFA46FAC \n"
"    BL      fwt_close \n"  // --> Patched. Old value = _Close.
"    CMP     R0, #0 \n"
"    LDRNE   R0, =0x9200003 \n"
"    STRNE   R0, [R4, #0x10] \n"
"    MVN     R0, #0 \n"
"    STR     R0, [R5] \n"

"loc_FFA46FAC:\n"
"    LDR     R0, [R4, #0x10] \n"
"    TST     R0, #1 \n"
"    BNE     loc_FFA46FF4 \n"
"    LDR     R0, =0x81FF \n"
"    ADD     R1, SP, #4 \n"
"    STR     R0, [SP, #4] \n"
"    MOV     R0, #0x20 \n"
"    STR     R0, [SP, #8] \n"
"    LDR     R0, [R4, #4] \n"
"    STR     R0, [SP, #0xC] \n"
"    LDR     R0, [R4, #0xC] \n"
"    STR     R0, [SP, #0x10] \n"
"    LDR     R0, [R4, #0xC] \n"
"    STR     R0, [SP, #0x14] \n"
"    LDR     R0, [R4, #0xC] \n"
"    STR     R0, [SP, #0x18] \n"
"    ADD     R0, R4, #0x34 \n"
"    BL      sub_FF858000 \n"

"loc_FFA46FF4:\n"
"    ADD     R0, R4, #0x34 \n"
"    BL      sub_FF85A094 \n"
"    BL      sub_FF85873C \n"
"    LDR     R1, [R5, #0x14] \n"
"    CMP     R1, #0 \n"
"    LDRNE   R0, [R4, #0x10] \n"
"    BLXNE   R1 \n"
"    ADD     SP, SP, #0x1C \n"
"    LDMFD   SP!, {R4,R5,PC} \n"
);
}
