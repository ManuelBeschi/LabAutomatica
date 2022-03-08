/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBodyTreeDynamics.h
 *
 * Code generation for function 'RigidBodyTreeDynamics'
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
void c_RigidBodyTreeDynamics_inverse(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *robot,
                                     const real_T q_data[],
                                     const real_T qdot_data[],
                                     const emxArray_real_T *qddot,
                                     const emxArray_real_T *fext,
                                     real_T tau_data[], int32_T *tau_size);

void c_RigidBodyTreeDynamics_massMat(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *robot,
                                     const real_T q_data[], emxArray_real_T *H,
                                     emxArray_real_T *lambda);

/* End of code generation (RigidBodyTreeDynamics.h) */
