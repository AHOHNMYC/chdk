#include "stubs_asm.h"
// BEWARE: thumb functions NEED the thumb bit in the below list

#define NULL_SUB	0xfc020485	// bx lr
#define RET1		0xfc020493	// mov r0, #1 ; bx lr
#define RET0		0xfc020487	// mov r0, #0 ; bx lr

NHSTUB(Feof_Fut,								0xfc326b09) // from CreateJumptable, after Fseek
NHSTUB(Fflush_Fut,								0xfc326b31) // directly after Feof_Fut in ROM
NHSTUB(SetFileTimeStamp,						0xfc317449) // from ref to 0x12cea600 @fc31745c, similar to sx280hs
NHSTUB(SetFileAttributes,						0xfc317491) // function following SetFileTimeStamp in ROM
NHSTUB(RenameFile_Fut,							0xfc3268b9) // Via fc3505da similar to g7x fc41fef8, just after ref to DeleteFile_Fut, LDR
NHSTUB(MakeSDCardBootable,						0xfc3170dd) // in function before ref to "SCRIPT" @0xfc316cf0
NHSTUB(GetFocusLensSubjectDistanceFromLens,		0xfc3281b3) // call at 0xfc2375be via SetISFocusLensDistance_FW -> 0xfc2375bc
// based on ref to fc311526 (ref "%s/%3d%s") -> sub_fc16ca2a, which refs  "___%02d" and "_%02d%02d"
NHSTUB(GetImageFolder,							0xfc310b01)
NHSTUB(apex2us,									0xfc1c8c7b) // instructions around fc1c8cb8 similar to g7x fc3826c4
NHSTUB(GetDrive_TotalClusters,					0xfc316d4f) // function immediately before GetDrive_FreeClusters in ROM
NHSTUB(LogCameraEvent,							0xfc2f2a07) // debugging, from func csv
NHSTUB(CancelHPTimer,							0xfc126b7d) // At fc0f20c8, following LcdSequence, TakeSemaphoreStrictly calls similar to g7x fc0cd6b0

//NHSTUB(get_dial_hw_position,					0xfc110d61) // kbd_p1_f_cont->fc086ab4->fc08b5cc, 4 for jogdial
NHSTUB(PT_PlaySound,							0xfc3061b9) // via call from fc34f91c to fc3505da, similar to g7x fc41fef8

// required because DryOS >=54 functions assert on unitialized event flag, sem etc
// see https://chdk.setepontos.com/index.php?topic=12516.0
NHSTUB(init_focus_eventflag,	0xfc54dd23) // InitializeAdjustmentSystem->fc5422f8->fc54dd22 event flag matches MoveFocusLensToDistance
// NO nd
//NHSTUB(init_nd_eventflag,		0xfc54de2d) // InitializeAdjustmentSystem->fc5422f8->fc54de2d event flag matches PutInNdFilter
NHSTUB(CreateBinarySemaphoreStrictly,           0xbfe1553f) // from csv

// via func fc07b6ba hooked in preshoot case, similar to g7x
NHSTUB(captseq_raw_addr_init,					0xfc0821d3)


// not implemented
NHSTUB(EnterToCompensationEVF,NULL_SUB)
NHSTUB(ExitFromCompensationEVF,NULL_SUB)
NHSTUB(ExpCtrlTool_StartContiAE,NULL_SUB)
NHSTUB(ExpCtrlTool_StopContiAE,NULL_SUB)
NHSTUB(Restart,NULL_SUB)
NHSTUB(SetParameterData,NULL_SUB)
NHSTUB(reboot_fw_update,NULL_SUB)

// from sx280 These don't exist
NHSTUB(SetZoomActuatorSpeedPercent, NULL_SUB)
NHSTUB(UnsetZoomForMovie,           NULL_SUB)
