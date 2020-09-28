//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: integrator.h
//
// Code generated for Simulink model 'integrator'.
//
// Model version                  : 1.15
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Sep 22 20:23:19 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_integrator_h_
#define RTW_HEADER_integrator_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slros_initialize.h"
#include "integrator_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_integrator_geometry_msgs_TwistStamped In1;// '<S3>/In1'
  SL_Bus_integrator_geometry_msgs_TwistStamped b_varargout_2;
  SL_Bus_integrator_geometry_msgs_PointStamped BusAssignment;// '<S2>/Bus Assignment' 
} B_integrator_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Subs_T obj; // '<S1>/SourceBlock'
  ros_slros_internal_block_Publ_T obj_g;// '<S5>/SinkBlock'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S2>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator_PREV_U;// '<S2>/Discrete-Time Integrator'
  uint32_T Subsystem_PREV_T;           // '<Root>/Subsystem'
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;// '<S2>/Discrete-Time Integrator'
  boolean_T Subsystem_RESET_ELAPS_T;   // '<Root>/Subsystem'
} DW_integrator_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState Subsystem_Trig_ZCE;       // '<Root>/Subsystem'
} PrevZCX_integrator_T;

// Parameters (default storage)
struct P_integrator_T_ {
  SL_Bus_integrator_geometry_msgs_TwistStamped Out1_Y0;// Computed Parameter: Out1_Y0
                                                          //  Referenced by: '<S3>/Out1'

  SL_Bus_integrator_geometry_msgs_TwistStamped Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S1>/Constant'

  SL_Bus_integrator_geometry_msgs_PointStamped Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                   //  Referenced by: '<S4>/Constant'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S2>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S2>/Discrete-Time Integrator'

};

// Real-time Model Data Structure
struct tag_RTM_integrator_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_integrator_T integrator_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_integrator_T integrator_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_integrator_T integrator_DW;

// Zero-crossing (trigger) state
extern PrevZCX_integrator_T integrator_PrevZCX;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void integrator_initialize(void);
  extern void integrator_step(void);
  extern void integrator_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_integrator_T *const integrator_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'integrator'
//  '<S1>'   : 'integrator/Subscribe'
//  '<S2>'   : 'integrator/Subsystem'
//  '<S3>'   : 'integrator/Subscribe/Enabled Subsystem'
//  '<S4>'   : 'integrator/Subsystem/Blank Message'
//  '<S5>'   : 'integrator/Subsystem/Publish'

#endif                                 // RTW_HEADER_integrator_h_

//
// File trailer for generated code.
//
// [EOF]
//
