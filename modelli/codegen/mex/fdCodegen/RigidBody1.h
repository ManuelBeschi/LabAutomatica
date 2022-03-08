/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBody1.h
 *
 * Code generation for function 'RigidBody1'
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
c_robotics_manip_internal_Rigid *
RigidBody_copy(const emlrtStack *sp, c_robotics_manip_internal_Rigid *obj,
               d_robotics_manip_internal_Colli *iobj_0, rigidBodyJoint *iobj_1,
               c_robotics_manip_internal_Rigid *iobj_2);

rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
                                    c_robotics_manip_internal_Rigid *obj);

/* End of code generation (RigidBody1.h) */
