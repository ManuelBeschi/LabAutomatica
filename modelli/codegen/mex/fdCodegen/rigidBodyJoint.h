/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBodyJoint.h
 *
 * Code generation for function 'rigidBodyJoint'
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
rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj);

rigidBodyJoint *c_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj);

void c_rigidBodyJoint_transformBodyT(const emlrtStack *sp,
                                     const rigidBodyJoint *obj,
                                     const real_T q_data[], int32_T q_size,
                                     real_T T[16]);

rigidBodyJoint *d_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj);

void d_rigidBodyJoint_transformBodyT(const emlrtStack *sp,
                                     const rigidBodyJoint *obj, real_T T[16]);

rigidBodyJoint *rigidBodyJoint_copy(const emlrtStack *sp,
                                    const rigidBodyJoint *obj,
                                    rigidBodyJoint *iobj_0);

rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                              rigidBodyJoint *obj);

void rigidBodyJoint_set_HomePosition(const emlrtStack *sp, rigidBodyJoint *obj);

/* End of code generation (rigidBodyJoint.h) */
