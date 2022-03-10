/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen_internal_types.h
 *
 * Code generation for function 'fdCodegen'
 *
 */

#pragma once

/* Include files */
#include "fdCodegen_types.h"
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_rigidBody
#define typedef_rigidBody
typedef struct {
  c_robotics_manip_internal_Rigid *BodyInternal;
  f_robotics_manip_internal_Rigid *TreeInternal;
} rigidBody;
#endif /* typedef_rigidBody */

#ifndef typedef_rtDesignRangeCheckInfo
#define typedef_rtDesignRangeCheckInfo
typedef struct {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
} rtDesignRangeCheckInfo;
#endif /* typedef_rtDesignRangeCheckInfo */

#ifndef typedef_rtRunTimeErrorInfo
#define typedef_rtRunTimeErrorInfo
typedef struct {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
} rtRunTimeErrorInfo;
#endif /* typedef_rtRunTimeErrorInfo */

/* End of code generation (fdCodegen_internal_types.h) */
