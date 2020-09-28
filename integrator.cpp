//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: integrator.cpp
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
#include "integrator.h"
#include "integrator_private.h"

// Block signals (default storage)
B_integrator_T integrator_B;

// Block states (default storage)
DW_integrator_T integrator_DW;

// Previous zero-crossings (trigger) states
PrevZCX_integrator_T integrator_PrevZCX;

// Real-time model
RT_MODEL_integrator_T integrator_M_ = RT_MODEL_integrator_T();
RT_MODEL_integrator_T *const integrator_M = &integrator_M_;

// Forward declaration for local functions
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCod_e(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_e(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void integrator_step(void)
{
  boolean_T b_varargout_1;
  uint32_T Subsystem_ELAPS_T;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S1>/SourceBlock' incorporates:
  //   Inport: '<S3>/In1'

  b_varargout_1 = Sub_integrator_3.getLatestMessage(&integrator_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S3>/Enable'

  if (b_varargout_1) {
    integrator_B.In1 = integrator_B.b_varargout_2;
  }

  // End of Outputs for SubSystem: '<S1>/Enabled Subsystem'

  // Outputs for Triggered SubSystem: '<Root>/Subsystem' incorporates:
  //   TriggerPort: '<S2>/Trigger'

  if (b_varargout_1 && (integrator_PrevZCX.Subsystem_Trig_ZCE != POS_ZCSIG)) {
    if (integrator_DW.Subsystem_RESET_ELAPS_T) {
      Subsystem_ELAPS_T = 0U;
    } else {
      Subsystem_ELAPS_T = integrator_M->Timing.clockTick0 -
        integrator_DW.Subsystem_PREV_T;
    }

    integrator_DW.Subsystem_PREV_T = integrator_M->Timing.clockTick0;
    integrator_DW.Subsystem_RESET_ELAPS_T = false;

    // DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    if (integrator_DW.DiscreteTimeIntegrator_SYSTEM_E == 0) {
      integrator_DW.DiscreteTimeIntegrator_DSTATE +=
        integrator_P.DiscreteTimeIntegrator_gainval * static_cast<real_T>
        (Subsystem_ELAPS_T) * integrator_DW.DiscreteTimeIntegrator_PREV_U;
    }

    // End of DiscreteIntegrator: '<S2>/Discrete-Time Integrator'

    // BusAssignment: '<S2>/Bus Assignment' incorporates:
    //   Constant: '<S4>/Constant'

    integrator_B.BusAssignment = integrator_P.Constant_Value_m;
    integrator_B.BusAssignment.Point.X =
      integrator_DW.DiscreteTimeIntegrator_DSTATE;
    integrator_B.BusAssignment.Header = integrator_B.In1.Header;

    // Outputs for Atomic SubSystem: '<S2>/Publish'
    // MATLABSystem: '<S5>/SinkBlock'
    Pub_integrator_26.publish(&integrator_B.BusAssignment);

    // End of Outputs for SubSystem: '<S2>/Publish'

    // Update for DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    integrator_DW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
    integrator_DW.DiscreteTimeIntegrator_PREV_U =
      integrator_B.In1.Twist.Linear.X;
  }

  integrator_PrevZCX.Subsystem_Trig_ZCE = b_varargout_1;

  // End of MATLABSystem: '<S1>/SourceBlock'
  // End of Outputs for SubSystem: '<Root>/Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.02, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  integrator_M->Timing.clockTick0++;
}

// Model initialize function
void integrator_initialize(void)
{
  {
    char_T tmp[13];
    char_T tmp_0[19];
    int32_T i;
    static const char_T tmp_1[12] = { '/', 'v', 'e', 'h', 'i', 'c', 'l', 'e',
      '/', 'v', 'e', 'l' };

    static const char_T tmp_2[18] = { '/', 'e', 'g', 'o', '_', 'd', 'i', 's',
      't', '_', 't', 'r', 'a', 'v', 'e', 'l', 'e', 'd' };

    integrator_PrevZCX.Subsystem_Trig_ZCE = POS_ZCSIG;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S3>/Out1'
    integrator_B.In1 = integrator_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem'

    // Start for MATLABSystem: '<S1>/SourceBlock'
    integrator_DW.obj.matlabCodegenIsDeleted = false;
    integrator_DW.obj.isInitialized = 1;
    for (i = 0; i < 12; i++) {
      tmp[i] = tmp_1[i];
    }

    tmp[12] = '\x00';
    Sub_integrator_3.createSubscriber(tmp, 1);
    integrator_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Triggered SubSystem: '<Root>/Subsystem'
    // InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time Integrator' 
    integrator_DW.DiscreteTimeIntegrator_DSTATE =
      integrator_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish'
    // Start for MATLABSystem: '<S5>/SinkBlock'
    integrator_DW.obj_g.matlabCodegenIsDeleted = false;
    integrator_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 18; i++) {
      tmp_0[i] = tmp_2[i];
    }

    tmp_0[18] = '\x00';
    Pub_integrator_26.createPublisher(tmp_0, 1);
    integrator_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish'
    // End of SystemInitialize for SubSystem: '<Root>/Subsystem'

    // Enable for Triggered SubSystem: '<Root>/Subsystem'
    integrator_DW.Subsystem_RESET_ELAPS_T = true;

    // Enable for DiscreteIntegrator: '<S2>/Discrete-Time Integrator'
    integrator_DW.DiscreteTimeIntegrator_SYSTEM_E = 1U;

    // End of Enable for SubSystem: '<Root>/Subsystem'
  }
}

// Model terminate function
void integrator_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S1>/SourceBlock'
  matlabCodegenHandle_matlabCodeg(&integrator_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Triggered SubSystem: '<Root>/Subsystem'
  // Terminate for Atomic SubSystem: '<S2>/Publish'
  // Terminate for MATLABSystem: '<S5>/SinkBlock'
  matlabCodegenHandle_matlabCod_e(&integrator_DW.obj_g);

  // End of Terminate for SubSystem: '<S2>/Publish'
  // End of Terminate for SubSystem: '<Root>/Subsystem'
}

//
// File trailer for generated code.
//
// [EOF]
//
