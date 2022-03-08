/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBodyTree1.h
 *
 * Code generation for function 'rigidBodyTree1'
 *
 */

#pragma once

/* Include files */
#include "fdCodegen_internal_types.h"
#include "fdCodegen_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                             rigidBody *bodyin,
                             d_robotics_manip_internal_Colli *iobj_0,
                             rigidBodyJoint *iobj_1,
                             c_robotics_manip_internal_Rigid *iobj_2);

void c_rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                             rigidBody *bodyin,
                             d_robotics_manip_internal_Colli *iobj_0,
                             rigidBodyJoint *iobj_1,
                             c_robotics_manip_internal_Rigid *iobj_2);

void rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                           rigidBody *bodyin,
                           d_robotics_manip_internal_Colli *iobj_0,
                           rigidBodyJoint *iobj_1,
                           c_robotics_manip_internal_Rigid *iobj_2);

void rigidBodyTree_forwardDynamics(const emlrtStack *sp, rigidBodyTree *obj,
                                   const real_T varargin_1[2],
                                   const real_T varargin_2[2],
                                   const real_T varargin_3[2],
                                   real_T qddot_data[], int32_T *qddot_size);

/* End of code generation (rigidBodyTree1.h) */
