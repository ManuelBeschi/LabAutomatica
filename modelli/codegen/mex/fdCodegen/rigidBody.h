/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBody.h
 *
 * Code generation for function 'rigidBody'
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
rigidBody *b_rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                                 f_robotics_manip_internal_Rigid *iobj_0,
                                 d_robotics_manip_internal_Colli *iobj_1,
                                 rigidBodyJoint *iobj_2,
                                 c_robotics_manip_internal_Rigid *iobj_3);

rigidBody *c_rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                                 f_robotics_manip_internal_Rigid *iobj_0,
                                 d_robotics_manip_internal_Colli *iobj_1,
                                 rigidBodyJoint *iobj_2,
                                 c_robotics_manip_internal_Rigid *iobj_3);

rigidBody *rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                               f_robotics_manip_internal_Rigid *iobj_0,
                               d_robotics_manip_internal_Colli *iobj_1,
                               rigidBodyJoint *iobj_2,
                               c_robotics_manip_internal_Rigid *iobj_3);

void rigidBody_set_Inertia(const emlrtStack *sp, rigidBody *obj,
                           const real_T value[6]);

void rigidBody_set_Joint(const emlrtStack *sp, rigidBody *obj,
                         rigidBodyJoint *value, rigidBodyJoint *iobj_0);

/* End of code generation (rigidBody.h) */
