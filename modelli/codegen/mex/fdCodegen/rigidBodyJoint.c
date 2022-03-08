/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBodyJoint.c
 *
 * Code generation for function 'rigidBodyJoint'
 *
 */

/* Include files */
#include "rigidBodyJoint.h"
#include "any.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "normalizeRows.h"
#include "rt_nonfinite.h"
#include "validatestring.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo
    pb_emlrtRSI =
        {
            140,                             /* lineNo */
            "rigidBodyJoint/rigidBodyJoint", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    yi_emlrtRSI =
        {
            249,                               /* lineNo */
            "rigidBodyJoint/set.HomePosition", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    aj_emlrtRSI =
        {
            424,                                   /* lineNo */
            "rigidBodyJoint/validateHomePosition", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    bj_emlrtRSI =
        {
            429,                                   /* lineNo */
            "rigidBodyJoint/validateHomePosition", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    cj_emlrtRSI =
        {
            430,                                   /* lineNo */
            "rigidBodyJoint/validateHomePosition", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    jj_emlrtRSI =
        {
            215,                   /* lineNo */
            "rigidBodyJoint/copy", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    kj_emlrtRSI =
        {
            359,                           /* lineNo */
            "rigidBodyJoint/copyInternal", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    lj_emlrtRSI =
        {
            361,                           /* lineNo */
            "rigidBodyJoint/copyInternal", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    mj_emlrtRSI =
        {
            363,                           /* lineNo */
            "rigidBodyJoint/copyInternal", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    nj_emlrtRSI =
        {
            364,                           /* lineNo */
            "rigidBodyJoint/copyInternal", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    oj_emlrtRSI =
        {
            147,                             /* lineNo */
            "rigidBodyJoint/rigidBodyJoint", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    pj_emlrtRSI =
        {
            155,                             /* lineNo */
            "rigidBodyJoint/rigidBodyJoint", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    ck_emlrtRSI =
        {
            227,                       /* lineNo */
            "rigidBodyJoint/set.Name", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    dk_emlrtRSI =
        {
            231,                       /* lineNo */
            "rigidBodyJoint/set.Name", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    lm_emlrtRSI =
        {
            511,                                    /* lineNo */
            "rigidBodyJoint/transformBodyToParent", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    mm_emlrtRSI =
        {
            395,                             /* lineNo */
            "rigidBodyJoint/jointTransform", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    nm_emlrtRSI =
        {
            396,                             /* lineNo */
            "rigidBodyJoint/jointTransform", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo
    om_emlrtRSI =
        {
            398,                             /* lineNo */
            "rigidBodyJoint/jointTransform", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo pm_emlrtRSI = {
    23,            /* lineNo */
    "axang2tform", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\axang2tform."
    "m" /* pathName */
};

static emlrtRSInfo qm_emlrtRSI =
    {
        39,           /* lineNo */
        "axang2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\axang2ro"
        "tm.m" /* pathName */
};

static emlrtRSInfo
    cn_emlrtRSI =
        {
            399,                             /* lineNo */
            "rigidBodyJoint/jointTransform", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pathName */
};

static emlrtRSInfo dn_emlrtRSI = {
    28,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo en_emlrtRSI = {
    100,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo fn_emlrtRSI =
    {
        22,           /* lineNo */
        "axang2rotm", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\axang2ro"
        "tm.m" /* pathName */
};

static emlrtRSInfo gn_emlrtRSI = {
    21,                      /* lineNo */
    "validateNumericMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "internal\\+validation\\validateNumericMatrix.m" /* pathName */
};

static emlrtDCInfo d_emlrtDCI =
    {
        422,                                   /* lineNo */
        13,                                    /* colNo */
        "rigidBodyJoint/validateHomePosition", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint."
        "m", /* pName */
        1    /* checkKind */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    275,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo db_emlrtRTEI = {
    18,              /* lineNo */
    23,              /* colNo */
    "validatencols", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatencols.m" /* pName */
};

static emlrtRTEInfo
    vb_emlrtRTEI =
        {
            429,              /* lineNo */
            28,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    wb_emlrtRTEI =
        {
            250,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    xb_emlrtRTEI =
        {
            429,              /* lineNo */
            75,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    yb_emlrtRTEI =
        {
            358,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    ac_emlrtRTEI =
        {
            359,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    bc_emlrtRTEI =
        {
            367,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    dc_emlrtRTEI =
        {
            367,              /* lineNo */
            47,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    ec_emlrtRTEI =
        {
            368,              /* lineNo */
            44,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    fc_emlrtRTEI =
        {
            368,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    gc_emlrtRTEI =
        {
            229,              /* lineNo */
            17,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    hc_emlrtRTEI =
        {
            370,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

static emlrtRTEInfo
    ic_emlrtRTEI =
        {
            370,              /* lineNo */
            39,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

/* Function Declarations */
static void rigidBodyJoint_get_JointAxis(const rigidBodyJoint *obj,
                                         real_T ax[3]);

/* Function Definitions */
static void rigidBodyJoint_get_JointAxis(const rigidBodyJoint *obj,
                                         real_T ax[3])
{
  static const char_T b_cv[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  int32_T exitg1;
  int32_T kstr;
  boolean_T b_bool;
  boolean_T guard1 = false;
  b_bool = false;
  if (obj->Type->size[1] == 8) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 8) {
        if (obj->Type->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  guard1 = false;
  if (b_bool) {
    guard1 = true;
  } else {
    b_bool = false;
    if (obj->Type->size[1] == 9) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 9) {
          if (obj->Type->data[kstr] != cv[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      guard1 = true;
    } else {
      ax[0] = rtNaN;
      ax[1] = rtNaN;
      ax[2] = rtNaN;
    }
  }
  if (guard1) {
    ax[0] = obj->JointAxisInternal[0];
    ax[1] = obj->JointAxisInternal[1];
    ax[2] = obj->JointAxisInternal[2];
  }
}

rigidBodyJoint *b_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj)
{
  static const char_T jname[14] = {'d', 'u', 'm', 'm', 'y', 'b', 'o',
                                   'd', 'y', '1', '_', 'j', 'n', 't'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  boolean_T b_bool;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = iv1[i];
  }
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(sp, b_obj->NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 14; i++) {
    b_obj->NameInternal->data[i] = jname[i];
  }
  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 5;
  emxEnsureCapacity_char_T(sp, b_obj->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    b_obj->Type->data[i] = b_cv[i];
  }
  emxInit_char_T(sp, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(sp, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = b_obj->Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (switch_expression_data[loop_ub] != cv1[loop_ub]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    loop_ub = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (switch_expression_data[loop_ub] != cv[loop_ub]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }
  emxFree_char_T(sp, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 0.0;
    break;
  }
  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = b_obj->PositionLimitsInternal->size[0] *
      b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_obj->PositionLimitsInternal, i, &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->HomePositionInternal, i, &tb_emlrtRTEI);
  b_obj->HomePositionInternal->data[0] = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

rigidBodyJoint *c_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj)
{
  static const char_T b[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  boolean_T b_bool;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = iv1[i];
  }
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(sp, b_obj->NameInternal, i, &ob_emlrtRTEI);
  b_obj->NameInternal->data[0] = 'j';
  b_obj->NameInternal->data[1] = 'n';
  b_obj->NameInternal->data[2] = 't';
  b_obj->NameInternal->data[3] = '1';
  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 8;
  emxEnsureCapacity_char_T(sp, b_obj->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 8; i++) {
    b_obj->Type->data[i] = b[i];
  }
  emxInit_char_T(sp, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(sp, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = b_obj->Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (switch_expression_data[loop_ub] != b_cv[loop_ub]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    loop_ub = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (switch_expression_data[loop_ub] != cv[loop_ub]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }
  emxFree_char_T(sp, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 0.0;
    break;
  }
  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = b_obj->PositionLimitsInternal->size[0] *
      b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_obj->PositionLimitsInternal, i, &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->HomePositionInternal, i, &tb_emlrtRTEI);
  b_obj->HomePositionInternal->data[0] = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

void c_rigidBodyJoint_transformBodyT(const emlrtStack *sp,
                                     const rigidBodyJoint *obj,
                                     const real_T q_data[], int32_T q_size,
                                     real_T T[16])
{
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T b[16];
  real_T b_obj[16];
  real_T R[9];
  real_T tempR[9];
  real_T result_data[4];
  real_T v[3];
  real_T b_tempR_tmp;
  real_T c_tempR_tmp;
  real_T cth;
  real_T d_tempR_tmp;
  real_T e_tempR_tmp;
  real_T f_tempR_tmp;
  real_T g_tempR_tmp;
  real_T h_tempR_tmp;
  real_T i_tempR_tmp;
  real_T j_tempR_tmp;
  real_T sth;
  real_T tempR_tmp;
  int32_T exitg1;
  int32_T i;
  int32_T k;
  int32_T kstr;
  int8_T input_sizes_idx_1;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_bool = false;
  if (obj->Type->size[1] == 5) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 5) {
        if (obj->Type->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    kstr = 0;
  } else {
    b_bool = false;
    if (obj->Type->size[1] == 8) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 8) {
          if (obj->Type->data[kstr] != cv1[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      kstr = 1;
    } else {
      kstr = -1;
    }
  }
  switch (kstr) {
  case 0:
    memset(&b[0], 0, 16U * sizeof(real_T));
    b[0] = 1.0;
    b[5] = 1.0;
    b[10] = 1.0;
    b[15] = 1.0;
    break;
  case 1:
    b_st.site = &mm_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &nm_emlrtRSI;
    c_st.site = &dn_emlrtRSI;
    d_st.site = &en_emlrtRSI;
    if ((q_size != 1) && (q_size != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &ab_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    input_sizes_idx_1 = (int8_T)(q_size != 0);
    result_data[0] = v[0];
    result_data[1] = v[1];
    result_data[2] = v[2];
    kstr = input_sizes_idx_1;
    if (0 <= kstr - 1) {
      result_data[3] = q_data[0];
    }
    b_st.site = &nm_emlrtRSI;
    c_st.site = &pm_emlrtRSI;
    d_st.site = &fn_emlrtRSI;
    e_st.site = &gn_emlrtRSI;
    f_st.site = &uc_emlrtRSI;
    if (input_sizes_idx_1 + 3 != 4) {
      emlrtErrorWithMessageIdR2018a(
          &f_st, &db_emlrtRTEI,
          "Coder:toolbox:ValidateattributesincorrectNumcols",
          "MATLAB:axang2rotm:incorrectNumcols", 5, 4, 5, "axang", 6, 4.0);
    }
    d_st.site = &qm_emlrtRSI;
    normalizeRows(&d_st, *(real_T(*)[3]) & result_data[0], v);
    cth = muDoubleScalarCos(result_data[3]);
    sth = muDoubleScalarSin(result_data[3]);
    c_tempR_tmp = v[0] * v[0] * (1.0 - cth) + cth;
    tempR[0] = c_tempR_tmp;
    d_tempR_tmp = v[0] * v[1] * (1.0 - cth);
    e_tempR_tmp = v[2] * sth;
    f_tempR_tmp = d_tempR_tmp - e_tempR_tmp;
    tempR[1] = f_tempR_tmp;
    g_tempR_tmp = v[0] * v[2] * (1.0 - cth);
    h_tempR_tmp = v[1] * sth;
    i_tempR_tmp = g_tempR_tmp + h_tempR_tmp;
    tempR[2] = i_tempR_tmp;
    d_tempR_tmp += e_tempR_tmp;
    tempR[3] = d_tempR_tmp;
    e_tempR_tmp = v[1] * v[1] * (1.0 - cth) + cth;
    tempR[4] = e_tempR_tmp;
    j_tempR_tmp = v[1] * v[2] * (1.0 - cth);
    tempR_tmp = v[0] * sth;
    b_tempR_tmp = j_tempR_tmp - tempR_tmp;
    tempR[5] = b_tempR_tmp;
    g_tempR_tmp -= h_tempR_tmp;
    tempR[6] = g_tempR_tmp;
    h_tempR_tmp = j_tempR_tmp + tempR_tmp;
    tempR[7] = h_tempR_tmp;
    j_tempR_tmp = v[2] * v[2] * (1.0 - cth) + cth;
    tempR[8] = j_tempR_tmp;
    R[0] = c_tempR_tmp;
    R[1] = f_tempR_tmp;
    R[2] = i_tempR_tmp;
    R[3] = d_tempR_tmp;
    R[4] = e_tempR_tmp;
    R[5] = b_tempR_tmp;
    R[6] = g_tempR_tmp;
    R[7] = h_tempR_tmp;
    R[8] = j_tempR_tmp;
    for (k = 0; k < 3; k++) {
      kstr = 3 * k;
      R[k] = tempR[kstr];
      R[k + 3] = tempR[kstr + 1];
      R[k + 6] = tempR[kstr + 2];
    }
    memset(&b[0], 0, 16U * sizeof(real_T));
    for (i = 0; i < 3; i++) {
      kstr = i << 2;
      b[kstr] = R[3 * i];
      b[kstr + 1] = R[3 * i + 1];
      b[kstr + 2] = R[3 * i + 2];
    }
    b[15] = 1.0;
    break;
  default:
    b_st.site = &om_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &cn_emlrtRSI;
    c_st.site = &hn_emlrtRSI;
    if (1 != q_size) {
      if (q_size == 1) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &cb_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &bb_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    memset(&tempR[0], 0, 9U * sizeof(real_T));
    tempR[0] = 1.0;
    tempR[4] = 1.0;
    tempR[8] = 1.0;
    for (i = 0; i < 3; i++) {
      kstr = i << 2;
      b[kstr] = tempR[3 * i];
      b[kstr + 1] = tempR[3 * i + 1];
      b[kstr + 2] = tempR[3 * i + 2];
      b[i + 12] = v[i] * q_data[0];
    }
    b[3] = 0.0;
    b[7] = 0.0;
    b[11] = 0.0;
    b[15] = 1.0;
    break;
  }
  for (i = 0; i < 4; i++) {
    for (k = 0; k < 4; k++) {
      kstr = k << 2;
      b_obj[i + kstr] = ((obj->JointToParentTransform[i] * b[kstr] +
                          obj->JointToParentTransform[i + 4] * b[kstr + 1]) +
                         obj->JointToParentTransform[i + 8] * b[kstr + 2]) +
                        obj->JointToParentTransform[i + 12] * b[kstr + 3];
    }
    sth = b_obj[i];
    tempR_tmp = b_obj[i + 4];
    b_tempR_tmp = b_obj[i + 8];
    cth = b_obj[i + 12];
    for (k = 0; k < 4; k++) {
      kstr = k << 2;
      T[i + kstr] = ((sth * obj->ChildToJointTransform[kstr] +
                      tempR_tmp * obj->ChildToJointTransform[kstr + 1]) +
                     b_tempR_tmp * obj->ChildToJointTransform[kstr + 2]) +
                    cth * obj->ChildToJointTransform[kstr + 3];
    }
  }
}

rigidBodyJoint *d_rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                                rigidBodyJoint *obj)
{
  static const char_T b[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  boolean_T b_bool;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = iv1[i];
  }
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(sp, b_obj->NameInternal, i, &ob_emlrtRTEI);
  b_obj->NameInternal->data[0] = 'j';
  b_obj->NameInternal->data[1] = 'n';
  b_obj->NameInternal->data[2] = 't';
  b_obj->NameInternal->data[3] = '2';
  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 8;
  emxEnsureCapacity_char_T(sp, b_obj->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 8; i++) {
    b_obj->Type->data[i] = b[i];
  }
  emxInit_char_T(sp, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(sp, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = b_obj->Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (switch_expression_data[loop_ub] != b_cv[loop_ub]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    loop_ub = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (switch_expression_data[loop_ub] != cv[loop_ub]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }
  emxFree_char_T(sp, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 0.0;
    break;
  }
  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = b_obj->PositionLimitsInternal->size[0] *
      b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_obj->PositionLimitsInternal, i, &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->HomePositionInternal, i, &tb_emlrtRTEI);
  b_obj->HomePositionInternal->data[0] = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

void d_rigidBodyJoint_transformBodyT(const emlrtStack *sp,
                                     const rigidBodyJoint *obj, real_T T[16])
{
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b[16];
  real_T b_obj[16];
  real_T R[9];
  real_T tempR[9];
  real_T b_v[4];
  real_T v[3];
  real_T b_tempR_tmp;
  real_T c_tempR_tmp;
  real_T d_tempR_tmp;
  real_T e_tempR_tmp;
  real_T f_tempR_tmp;
  real_T g_tempR_tmp;
  real_T h_tempR_tmp;
  real_T i_tempR_tmp;
  real_T tempR_tmp;
  int32_T exitg1;
  int32_T i;
  int32_T k;
  int32_T kstr;
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_bool = false;
  if (obj->Type->size[1] == 5) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 5) {
        if (obj->Type->data[kstr] != b_cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    kstr = 0;
  } else {
    b_bool = false;
    if (obj->Type->size[1] == 8) {
      kstr = 0;
      do {
        exitg1 = 0;
        if (kstr < 8) {
          if (obj->Type->data[kstr] != cv1[kstr]) {
            exitg1 = 1;
          } else {
            kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      kstr = 1;
    } else {
      kstr = -1;
    }
  }
  switch (kstr) {
  case 0:
    memset(&b[0], 0, 16U * sizeof(real_T));
    b[0] = 1.0;
    b[5] = 1.0;
    b[10] = 1.0;
    b[15] = 1.0;
    break;
  case 1:
    b_st.site = &mm_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    b_st.site = &nm_emlrtRSI;
    c_st.site = &pm_emlrtRSI;
    b_v[0] = v[0];
    b_v[1] = v[1];
    b_v[2] = v[2];
    b_v[3] = 0.0;
    d_st.site = &qm_emlrtRSI;
    normalizeRows(&d_st, *(real_T(*)[3]) & b_v[0], v);
    tempR_tmp = v[0] * v[0] * 0.0 + 1.0;
    tempR[0] = tempR_tmp;
    b_tempR_tmp = v[0] * v[1] * 0.0;
    c_tempR_tmp = b_tempR_tmp - v[2] * 0.0;
    tempR[1] = c_tempR_tmp;
    d_tempR_tmp = v[0] * v[2] * 0.0;
    e_tempR_tmp = d_tempR_tmp + v[1] * 0.0;
    tempR[2] = e_tempR_tmp;
    b_tempR_tmp += v[2] * 0.0;
    tempR[3] = b_tempR_tmp;
    f_tempR_tmp = v[1] * v[1] * 0.0 + 1.0;
    tempR[4] = f_tempR_tmp;
    g_tempR_tmp = v[1] * v[2] * 0.0;
    h_tempR_tmp = g_tempR_tmp - v[0] * 0.0;
    tempR[5] = h_tempR_tmp;
    d_tempR_tmp -= v[1] * 0.0;
    tempR[6] = d_tempR_tmp;
    g_tempR_tmp += v[0] * 0.0;
    tempR[7] = g_tempR_tmp;
    i_tempR_tmp = v[2] * v[2] * 0.0 + 1.0;
    tempR[8] = i_tempR_tmp;
    R[0] = tempR_tmp;
    R[1] = c_tempR_tmp;
    R[2] = e_tempR_tmp;
    R[3] = b_tempR_tmp;
    R[4] = f_tempR_tmp;
    R[5] = h_tempR_tmp;
    R[6] = d_tempR_tmp;
    R[7] = g_tempR_tmp;
    R[8] = i_tempR_tmp;
    for (k = 0; k < 3; k++) {
      kstr = 3 * k;
      R[k] = tempR[kstr];
      R[k + 3] = tempR[kstr + 1];
      R[k + 6] = tempR[kstr + 2];
    }
    memset(&b[0], 0, 16U * sizeof(real_T));
    for (i = 0; i < 3; i++) {
      kstr = i << 2;
      b[kstr] = R[3 * i];
      b[kstr + 1] = R[3 * i + 1];
      b[kstr + 2] = R[3 * i + 2];
    }
    b[15] = 1.0;
    break;
  default:
    b_st.site = &om_emlrtRSI;
    rigidBodyJoint_get_JointAxis(obj, v);
    memset(&tempR[0], 0, 9U * sizeof(real_T));
    tempR[0] = 1.0;
    tempR[4] = 1.0;
    tempR[8] = 1.0;
    for (i = 0; i < 3; i++) {
      kstr = i << 2;
      b[kstr] = tempR[3 * i];
      b[kstr + 1] = tempR[3 * i + 1];
      b[kstr + 2] = tempR[3 * i + 2];
      b[i + 12] = v[i] * 0.0;
    }
    b[3] = 0.0;
    b[7] = 0.0;
    b[11] = 0.0;
    b[15] = 1.0;
    break;
  }
  for (i = 0; i < 4; i++) {
    for (k = 0; k < 4; k++) {
      kstr = k << 2;
      b_obj[i + kstr] = ((obj->JointToParentTransform[i] * b[kstr] +
                          obj->JointToParentTransform[i + 4] * b[kstr + 1]) +
                         obj->JointToParentTransform[i + 8] * b[kstr + 2]) +
                        obj->JointToParentTransform[i + 12] * b[kstr + 3];
    }
    tempR_tmp = b_obj[i];
    b_tempR_tmp = b_obj[i + 4];
    c_tempR_tmp = b_obj[i + 8];
    d_tempR_tmp = b_obj[i + 12];
    for (k = 0; k < 4; k++) {
      kstr = k << 2;
      T[i + kstr] = ((tempR_tmp * obj->ChildToJointTransform[kstr] +
                      b_tempR_tmp * obj->ChildToJointTransform[kstr + 1]) +
                     c_tempR_tmp * obj->ChildToJointTransform[kstr + 2]) +
                    d_tempR_tmp * obj->ChildToJointTransform[kstr + 3];
    }
  }
}

rigidBodyJoint *rigidBodyJoint_copy(const emlrtStack *sp,
                                    const rigidBodyJoint *obj,
                                    rigidBodyJoint *iobj_0)
{
  static const char_T b_cv[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *jname;
  emxArray_char_T *jtype;
  emxArray_real_T *b_obj;
  rigidBodyJoint *newjoint;
  real_T c_obj[16];
  real_T poslim_data[12];
  real_T obj_idx_0;
  real_T obj_idx_1;
  real_T obj_idx_2;
  real_T *obj_data;
  int32_T jointtype_size[2];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T jointtype_data[9];
  char_T *jtype_data;
  int8_T msubspace_data[36];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &jtype, &yb_emlrtRTEI);
  st.site = &jj_emlrtRSI;
  i = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = obj->Type->size[1];
  emxEnsureCapacity_char_T(&st, jtype, i, &yb_emlrtRTEI);
  jtype_data = jtype->data;
  loop_ub = obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jtype_data[i] = obj->Type->data[i];
  }
  emxInit_char_T(&st, &jname, &ac_emlrtRTEI);
  b_st.site = &kj_emlrtRSI;
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, jname, i, &ac_emlrtRTEI);
  jtype_data = jname->data;
  loop_ub = obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    jtype_data[i] = obj->NameInternal->data[i];
  }
  b_st.site = &lj_emlrtRSI;
  iobj_0->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_0->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_0->ChildToJointTransform[i] = iv1[i];
  }
  c_st.site = &oj_emlrtRSI;
  d_st.site = &uc_emlrtRSI;
  if (jname->size[1] == 0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &j_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:rigidBodyJoint:expectedNonempty", 3, 4, 5, "jname");
  }
  c_st.site = &pb_emlrtRSI;
  newjoint = iobj_0;
  i = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
  iobj_0->NameInternal->size[0] = 1;
  iobj_0->NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(&b_st, iobj_0->NameInternal, i, &ob_emlrtRTEI);
  loop_ub = jname->size[1];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->NameInternal->data[i] = jtype_data[i];
  }
  emxFree_char_T(&b_st, &jname);
  c_st.site = &pj_emlrtRSI;
  validatestring(&c_st, jtype, jointtype_data, jointtype_size);
  i = iobj_0->Type->size[0] * iobj_0->Type->size[1];
  iobj_0->Type->size[0] = 1;
  iobj_0->Type->size[1] = jointtype_size[1];
  emxEnsureCapacity_char_T(&b_st, iobj_0->Type, i, &pb_emlrtRTEI);
  loop_ub = jointtype_size[1];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->Type->data[i] = jointtype_data[i];
  }
  i = jtype->size[0] * jtype->size[1];
  jtype->size[0] = 1;
  jtype->size[1] = iobj_0->Type->size[1];
  emxEnsureCapacity_char_T(&b_st, jtype, i, &qb_emlrtRTEI);
  jtype_data = jtype->data;
  loop_ub = iobj_0->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    jtype_data[i] = iobj_0->Type->data[i];
  }
  b_bool = false;
  if (jtype->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (jtype_data[loop_ub] != b_cv[loop_ub]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    loop_ub = 0;
  } else {
    b_bool = false;
    if (jtype->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (jtype_data[loop_ub] != cv[loop_ub]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_0->VelocityNumber = 1.0;
    iobj_0->PositionNumber = 1.0;
    iobj_0->JointAxisInternal[0] = 0.0;
    iobj_0->JointAxisInternal[1] = 0.0;
    iobj_0->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_0->VelocityNumber = 1.0;
    iobj_0->PositionNumber = 1.0;
    iobj_0->JointAxisInternal[0] = 0.0;
    iobj_0->JointAxisInternal[1] = 0.0;
    iobj_0->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_0->VelocityNumber = 0.0;
    iobj_0->PositionNumber = 0.0;
    iobj_0->JointAxisInternal[0] = 0.0;
    iobj_0->JointAxisInternal[1] = 0.0;
    iobj_0->JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_0->MotionSubspace->size[0] * iobj_0->MotionSubspace->size[1];
  iobj_0->MotionSubspace->size[0] = 6;
  iobj_0->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_0->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_0->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_0->PositionLimitsInternal->size[0] *
      iobj_0->PositionLimitsInternal->size[1];
  iobj_0->PositionLimitsInternal->size[0] = 1;
  iobj_0->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, iobj_0->PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_0->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_0->HomePositionInternal->size[0];
  iobj_0->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_0->HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_0->HomePositionInternal->data[0] = 0.0;
  b_st.site = &mj_emlrtRSI;
  loop_ub = obj->NameInternal->size[1];
  if (loop_ub != 0) {
    b_st.site = &nj_emlrtRSI;
    i = jtype->size[0] * jtype->size[1];
    jtype->size[0] = 1;
    jtype->size[1] = obj->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, jtype, i, &cc_emlrtRTEI);
    jtype_data = jtype->data;
    loop_ub = obj->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      jtype_data[i] = obj->NameInternal->data[i];
    }
    b_st.site = &nj_emlrtRSI;
    c_st.site = &ck_emlrtRSI;
    d_st.site = &uc_emlrtRSI;
    if (jtype->size[1] == 0) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &j_emlrtRTEI,
          "Coder:toolbox:ValidateattributesexpectedNonempty",
          "MATLAB:rigidBodyJoint:expectedNonempty", 3, 4, 4, "Name");
    }
    if (!iobj_0->InTree) {
      i = iobj_0->NameInternal->size[0] * iobj_0->NameInternal->size[1];
      iobj_0->NameInternal->size[0] = 1;
      iobj_0->NameInternal->size[1] = jtype->size[1];
      emxEnsureCapacity_char_T(&b_st, iobj_0->NameInternal, i, &gc_emlrtRTEI);
      loop_ub = jtype->size[1];
      for (i = 0; i < loop_ub; i++) {
        iobj_0->NameInternal->data[i] = jtype_data[i];
      }
    } else {
      c_st.site = &dk_emlrtRSI;
      d_st.site = &ek_emlrtRSI;
      c_warning(&d_st);
    }
  }
  emxFree_char_T(&st, &jtype);
  emxInit_real_T(&st, &b_obj, 1, &dc_emlrtRTEI);
  loop_ub = obj->PositionLimitsInternal->size[0] * 2;
  i = iobj_0->PositionLimitsInternal->size[0] *
      iobj_0->PositionLimitsInternal->size[1];
  iobj_0->PositionLimitsInternal->size[0] =
      obj->PositionLimitsInternal->size[0];
  iobj_0->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&st, iobj_0->PositionLimitsInternal, i,
                           &bc_emlrtRTEI);
  i = b_obj->size[0];
  b_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_obj, i, &dc_emlrtRTEI);
  obj_data = b_obj->data;
  for (i = 0; i < loop_ub; i++) {
    obj_data[i] = obj->PositionLimitsInternal->data[i];
  }
  loop_ub = b_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->PositionLimitsInternal->data[i] = obj_data[i];
  }
  i = b_obj->size[0];
  b_obj->size[0] = obj->HomePositionInternal->size[0];
  emxEnsureCapacity_real_T(&st, b_obj, i, &ec_emlrtRTEI);
  obj_data = b_obj->data;
  loop_ub = obj->HomePositionInternal->size[0];
  for (i = 0; i < loop_ub; i++) {
    obj_data[i] = obj->HomePositionInternal->data[i];
  }
  i = iobj_0->HomePositionInternal->size[0];
  iobj_0->HomePositionInternal->size[0] = b_obj->size[0];
  emxEnsureCapacity_real_T(&st, iobj_0->HomePositionInternal, i, &fc_emlrtRTEI);
  loop_ub = b_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->HomePositionInternal->data[i] = obj_data[i];
  }
  obj_idx_0 = obj->JointAxisInternal[0];
  obj_idx_1 = obj->JointAxisInternal[1];
  obj_idx_2 = obj->JointAxisInternal[2];
  iobj_0->JointAxisInternal[0] = obj_idx_0;
  iobj_0->JointAxisInternal[1] = obj_idx_1;
  iobj_0->JointAxisInternal[2] = obj_idx_2;
  loop_ub = 6 * obj->MotionSubspace->size[1];
  i = iobj_0->MotionSubspace->size[0] * iobj_0->MotionSubspace->size[1];
  iobj_0->MotionSubspace->size[0] = 6;
  iobj_0->MotionSubspace->size[1] = obj->MotionSubspace->size[1];
  emxEnsureCapacity_real_T(&st, iobj_0->MotionSubspace, i, &hc_emlrtRTEI);
  i = b_obj->size[0];
  b_obj->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_obj, i, &ic_emlrtRTEI);
  obj_data = b_obj->data;
  for (i = 0; i < loop_ub; i++) {
    obj_data[i] = obj->MotionSubspace->data[i];
  }
  loop_ub = b_obj->size[0];
  for (i = 0; i < loop_ub; i++) {
    iobj_0->MotionSubspace->data[i] = obj_data[i];
  }
  emxFree_real_T(&st, &b_obj);
  for (i = 0; i < 16; i++) {
    c_obj[i] = obj->JointToParentTransform[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_0->JointToParentTransform[i] = c_obj[i];
  }
  for (i = 0; i < 16; i++) {
    c_obj[i] = obj->ChildToJointTransform[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_0->ChildToJointTransform[i] = c_obj[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return newjoint;
}

rigidBodyJoint *rigidBodyJoint_rigidBodyJoint(const emlrtStack *sp,
                                              rigidBodyJoint *obj)
{
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T jname[8] = {'b', 'a', 's', 'e', '_', 'j', 'n', 't'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emxArray_char_T *switch_expression;
  rigidBodyJoint *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  boolean_T b_bool;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  b_obj->InTree = false;
  for (i = 0; i < 16; i++) {
    b_obj->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    b_obj->ChildToJointTransform[i] = iv1[i];
  }
  i = b_obj->NameInternal->size[0] * b_obj->NameInternal->size[1];
  b_obj->NameInternal->size[0] = 1;
  b_obj->NameInternal->size[1] = 8;
  emxEnsureCapacity_char_T(sp, b_obj->NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 8; i++) {
    b_obj->NameInternal->data[i] = jname[i];
  }
  i = b_obj->Type->size[0] * b_obj->Type->size[1];
  b_obj->Type->size[0] = 1;
  b_obj->Type->size[1] = 5;
  emxEnsureCapacity_char_T(sp, b_obj->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    b_obj->Type->data[i] = b_cv[i];
  }
  emxInit_char_T(sp, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = b_obj->Type->size[1];
  emxEnsureCapacity_char_T(sp, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = b_obj->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = b_obj->Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (switch_expression_data[loop_ub] != cv1[loop_ub]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    loop_ub = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (switch_expression_data[loop_ub] != cv[loop_ub]) {
            exitg1 = 1;
          } else {
            loop_ub++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      loop_ub = 1;
    } else {
      loop_ub = -1;
    }
  }
  emxFree_char_T(sp, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    b_obj->VelocityNumber = 1.0;
    b_obj->PositionNumber = 1.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    b_obj->VelocityNumber = 0.0;
    b_obj->PositionNumber = 0.0;
    b_obj->JointAxisInternal[0] = 0.0;
    b_obj->JointAxisInternal[1] = 0.0;
    b_obj->JointAxisInternal[2] = 0.0;
    break;
  }
  i = b_obj->MotionSubspace->size[0] * b_obj->MotionSubspace->size[1];
  b_obj->MotionSubspace->size[0] = 6;
  b_obj->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    b_obj->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = b_obj->PositionLimitsInternal->size[0] *
      b_obj->PositionLimitsInternal->size[1];
  b_obj->PositionLimitsInternal->size[0] = 1;
  b_obj->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(sp, b_obj->PositionLimitsInternal, i, &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    b_obj->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = b_obj->HomePositionInternal->size[0];
  b_obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(sp, b_obj->HomePositionInternal, i, &tb_emlrtRTEI);
  b_obj->HomePositionInternal->data[0] = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

void rigidBodyJoint_set_HomePosition(const emlrtStack *sp, rigidBodyJoint *obj)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  int32_T i;
  int32_T loop_ub;
  boolean_T guard1 = false;
  boolean_T *r1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &yi_emlrtRSI;
  if (obj->PositionNumber !=
      (int32_T)muDoubleScalarFloor(obj->PositionNumber)) {
    emlrtIntegerCheckR2012b(obj->PositionNumber, &d_emlrtDCI, &st);
  }
  if ((int32_T)obj->PositionNumber == 0) {
    b_st.site = &aj_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI,
        "robotics:robotmanip:joint:FixedJointHomePositionNotSettable",
        "robotics:robotmanip:joint:FixedJointHomePositionNotSettable", 0);
  } else {
    emxInit_boolean_T(&st, &r, &vb_emlrtRTEI);
    loop_ub = obj->PositionLimitsInternal->size[0];
    i = r->size[0];
    r->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T(&st, r, i, &vb_emlrtRTEI);
    r1 = r->data;
    for (i = 0; i < loop_ub; i++) {
      r1[i] = (0.0 > obj->PositionLimitsInternal
                         ->data[i + obj->PositionLimitsInternal->size[0]]);
    }
    guard1 = false;
    b_st.site = &bj_emlrtRSI;
    if (any(&b_st, r)) {
      guard1 = true;
    } else {
      loop_ub = obj->PositionLimitsInternal->size[0];
      i = r->size[0];
      r->size[0] = loop_ub;
      emxEnsureCapacity_boolean_T(&st, r, i, &xb_emlrtRTEI);
      r1 = r->data;
      for (i = 0; i < loop_ub; i++) {
        r1[i] = (0.0 < obj->PositionLimitsInternal->data[i]);
      }
      b_st.site = &bj_emlrtRSI;
      if (any(&b_st, r)) {
        guard1 = true;
      }
    }
    if (guard1) {
      b_st.site = &cj_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &b_st, &c_emlrtRTEI,
          "robotics:robotmanip:joint:ProvidedJointHomePositionOutOfLimits",
          "robotics:robotmanip:joint:ProvidedJointHomePositionOutOfLimits", 0);
    }
    emxFree_boolean_T(&st, &r);
  }
  i = obj->HomePositionInternal->size[0];
  obj->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(sp, obj->HomePositionInternal, i, &wb_emlrtRTEI);
  obj->HomePositionInternal->data[0] = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (rigidBodyJoint.c) */
