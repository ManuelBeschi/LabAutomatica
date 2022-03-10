/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * handle.c
 *
 * Code generation for function 'handle'
 *
 */

/* Include files */
#include "handle.h"
#include "fdCodegen_types.h"
#include "rt_nonfinite.h"
#include "collisioncodegen_api.hpp"

/* Function Definitions */
void handle_matlabCodegenDestructor(const emlrtStack *sp,
                                    c_robotics_manip_internal_Colli *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    collisioncodegen_destructGeometry(&obj->CollisionPrimitive);
  }
}

/* End of code generation (handle.c) */
