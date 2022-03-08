/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBodyTree.h
 *
 * Code generation for function 'RigidBodyTree'
 *
 */

#pragma once

/* Include files */
#include "fdCodegen_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
f_robotics_manip_internal_Rigid *
RigidBodyTree_RigidBodyTree(const emlrtStack *sp,
                            f_robotics_manip_internal_Rigid *obj);

void RigidBodyTree_clearAllBodies(const emlrtStack *sp,
                                  d_robotics_manip_internal_Rigid *obj,
                                  d_robotics_manip_internal_Colli *iobj_0,
                                  rigidBodyJoint *iobj_1,
                                  c_robotics_manip_internal_Rigid *iobj_2);

real_T c_RigidBodyTree_findBodyIndexBy(const emlrtStack *sp,
                                       d_robotics_manip_internal_Rigid *obj,
                                       const emxArray_char_T *bodyname);

void c_RigidBodyTree_validateDynamic(
    const emlrtStack *sp, d_robotics_manip_internal_Rigid *obj,
    const real_T varargin_1[2], const real_T varargin_2[2],
    const real_T varargin_3[2], emxArray_real_T *out1, emxArray_real_T *out2,
    emxArray_real_T *out3, emxArray_real_T *out4);

real_T d_RigidBodyTree_findBodyIndexBy(const emlrtStack *sp,
                                       d_robotics_manip_internal_Rigid *obj,
                                       const emxArray_char_T *jointname);

/* End of code generation (RigidBodyTree.h) */
