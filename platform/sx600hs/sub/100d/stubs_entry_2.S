#include "stubs_asm.h"
#define NULLSUB 0xFF033144  //*

// Override stubs_entry.S
NHSTUB(MakeDirectory_Fut,                   0xFF027654) //* mkdir. This requires #define MKDIR_RETURN_ONE_ON_SUCCESS


// Additional
NHSTUB(TurnOffE1,                           NULLSUB) // for shutdown(), to complicated to emulate

// Not needed
NHSTUB(RefreshPhysicalScreen,               NULLSUB)

// These don't exist
NHSTUB(kbd_pwr_off,                         NULLSUB)
NHSTUB(kbd_pwr_on,                          NULLSUB)
NHSTUB(SetZoomActuatorSpeedPercent,         NULLSUB)

// temporary measure
NHSTUB(init_focus_eventflag,                0xFF4DA9E4) //*
NHSTUB(init_nd_eventflag,                   0xFF386CC8) //*
NHSTUB(init_nd_semaphore,                   0xFF3CA234) //*

