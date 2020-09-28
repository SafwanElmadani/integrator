//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: integrator_types.h
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
#ifndef RTW_HEADER_integrator_types_h_
#define RTW_HEADER_integrator_types_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_integrator_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_integrator_ros_time_Time Stamp;
} SL_Bus_integrator_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_integrator_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_integrator_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_integrator_geometry_msgs_Vector3 Angular;
} SL_Bus_integrator_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_TwistStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_TwistStamped_

// MsgType=geometry_msgs/TwistStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_integrator_std_msgs_Header Header;

  // MsgType=geometry_msgs/Twist
  SL_Bus_integrator_geometry_msgs_Twist Twist;
} SL_Bus_integrator_geometry_msgs_TwistStamped;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_integrator_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_PointStamped_
#define DEFINED_TYPEDEF_FOR_SL_Bus_integrator_geometry_msgs_PointStamped_

// MsgType=geometry_msgs/PointStamped
typedef struct {
  // MsgType=std_msgs/Header
  SL_Bus_integrator_std_msgs_Header Header;

  // MsgType=geometry_msgs/Point
  SL_Bus_integrator_geometry_msgs_Point Point;
} SL_Bus_integrator_geometry_msgs_PointStamped;

#endif

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_rkSooZHJZnr3Dpfu1LNqfH

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

// Parameters (default storage)
typedef struct P_integrator_T_ P_integrator_T;

// Forward declaration for rtModel
typedef struct tag_RTM_integrator_T RT_MODEL_integrator_T;

#endif                                 // RTW_HEADER_integrator_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
