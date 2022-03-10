/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CollisionSet.c
 *
 * Code generation for function 'CollisionSet'
 *
 */

/* Include files */
#include "CollisionSet.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = {
    51,                          /* lineNo */
    25,                          /* colNo */
    "CollisionSet/CollisionSet", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    33,                          /* lineNo */
    61,                          /* colNo */
    "CollisionSet/CollisionSet", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m", /* pName */
    1                           /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    33,                          /* lineNo */
    61,                          /* colNo */
    "CollisionSet/CollisionSet", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m", /* pName */
    4                           /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                          /* iFirst */
    -1,                          /* iLast */
    52,                          /* lineNo */
    45,                          /* colNo */
    "",                          /* aName */
    "CollisionSet/CollisionSet", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m", /* pName */
    0                           /* checkKind */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    33,             /* lineNo */
    61,             /* colNo */
    "CollisionSet", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m" /* pName */
};

/* Function Definitions */
d_robotics_manip_internal_Colli *
CollisionSet_CollisionSet(const emlrtStack *sp,
                          d_robotics_manip_internal_Colli *obj,
                          real_T maxElements)
{
  void *c_defaultCollisionObj_GeometryI;
  c_robotics_manip_internal_Colli *c_obj;
  d_robotics_manip_internal_Colli *b_obj;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  b_obj = obj;
  b_obj->Size = 0.0;
  b_obj->MaxElements = maxElements;
  if (!(b_obj->MaxElements >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b_obj->MaxElements, &c_emlrtDCI, (emlrtCTX)sp);
  }
  d = b_obj->MaxElements;
  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
  }
  i = b_obj->CollisionGeometries->size[0] * b_obj->CollisionGeometries->size[1];
  b_obj->CollisionGeometries->size[0] = 1;
  b_obj->CollisionGeometries->size[1] = (int32_T)d;
  c_emxEnsureCapacity_unnamed_str(sp, b_obj->CollisionGeometries, i,
                                  &ub_emlrtRTEI);
  c_defaultCollisionObj_GeometryI = 0;
  c_obj = &b_obj->_pobj0;
  b_obj->_pobj0.CollisionPrimitive = c_defaultCollisionObj_GeometryI;
  b_obj->_pobj0.matlabCodegenIsDeleted = false;
  d = b_obj->MaxElements;
  i = (int32_T)d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                &b_emlrtRTEI, (emlrtCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    i1 = b_obj->CollisionGeometries->size[1] - 1;
    if (b_i > i1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, i1, &b_emlrtBCI, (emlrtCTX)sp);
    }
    b_obj->CollisionGeometries->data[b_i] = c_obj;
  }
  return b_obj;
}

/* End of code generation (CollisionSet.c) */
