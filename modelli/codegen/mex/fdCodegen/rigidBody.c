/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBody.c
 *
 * Code generation for function 'rigidBody'
 *
 */

/* Include files */
#include "rigidBody.h"
#include "CollisionSet.h"
#include "RigidBodyTree.h"
#include "anyNonFinite.h"
#include "eig.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_internal_types.h"
#include "fdCodegen_types.h"
#include "relop.h"
#include "rigidBodyJoint.h"
#include "rt_nonfinite.h"
#include "xzsvdc.h"
#include "mwmathutil.h"
#include <math.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ec_emlrtRSI = {
    148,                   /* lineNo */
    "rigidBody/rigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo fc_emlrtRSI = {
    151,                   /* lineNo */
    "rigidBody/rigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo gc_emlrtRSI = {
    150,                   /* lineNo */
    "rigidBody/rigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo hc_emlrtRSI = {
    117,                   /* lineNo */
    "rigidBody/rigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo ic_emlrtRSI = {
    149,                   /* lineNo */
    "rigidBody/rigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo pc_emlrtRSI = {
    344,                     /* lineNo */
    "rigidBody/set.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo qc_emlrtRSI = {
    458,                     /* lineNo */
    "RigidBody/set.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    461,                     /* lineNo */
    "RigidBody/set.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    465,                     /* lineNo */
    "RigidBody/set.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    466,                     /* lineNo */
    "RigidBody/set.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    14,                       /* lineNo */
    "isPositiveSemidefinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "core\\+internal\\isPositiveSemidefinite.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    15,                       /* lineNo */
    "isPositiveSemidefinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "core\\+internal\\isPositiveSemidefinite.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    16,                       /* lineNo */
    "isPositiveSemidefinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "core\\+internal\\isPositiveSemidefinite.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    21,                       /* lineNo */
    "isPositiveSemidefinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "core\\+internal\\isPositiveSemidefinite.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    31,                       /* lineNo */
    "isPositiveSemidefinite", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+"
    "core\\+internal\\isPositiveSemidefinite.m" /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                        */
};

static emlrtRSInfo eh_emlrtRSI =
    {
        46,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI =
    {
        92,        /* lineNo */
        "minimum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    221,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    308,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI =
    {
        46,    /* lineNo */
        "eps", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName
                                                                          */
};

static emlrtRSInfo rh_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                        */
};

static emlrtRSInfo sh_emlrtRSI =
    {
        44,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI =
    {
        79,        /* lineNo */
        "maximum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    11,     /* lineNo */
    "rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo wh_emlrtRSI = {
    20,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo xh_emlrtRSI = {
    22,           /* lineNo */
    "local_rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

static emlrtRSInfo yh_emlrtRSI = {
    14,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo ai_emlrtRSI = {
    18,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m" /* pathName
                                                                       */
};

static emlrtRSInfo bi_emlrtRSI = {
    20,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo ci_emlrtRSI = {
    99,           /* lineNo */
    "callLAPACK", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo di_emlrtRSI = {
    34,       /* lineNo */
    "xgesvd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    313,                   /* lineNo */
    "rigidBody/set.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo gj_emlrtRSI = {
    428,                   /* lineNo */
    "RigidBody/set.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo hj_emlrtRSI = {
    432,                   /* lineNo */
    "RigidBody/set.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo ij_emlrtRSI = {
    435,                   /* lineNo */
    "RigidBody/set.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    35,      /* lineNo */
    9,       /* colNo */
    "error", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\error.m" /* pName */
};

/* Function Definitions */
rigidBody *b_rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                                 f_robotics_manip_internal_Rigid *iobj_0,
                                 d_robotics_manip_internal_Colli *iobj_1,
                                 rigidBodyJoint *iobj_2,
                                 c_robotics_manip_internal_Rigid *iobj_3)
{
  static const char_T jname[9] = {'b', 'o', 'd', 'y', '2', '_', 'j', 'n', 't'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T bname[5] = {'b', 'o', 'd', 'y', '2'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  f_robotics_manip_internal_Rigid *b_default;
  rigidBody *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  st.site = &ec_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  i = iobj_3->NameInternal->size[0] * iobj_3->NameInternal->size[1];
  iobj_3->NameInternal->size[0] = 1;
  iobj_3->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(&b_st, iobj_3->NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_3->NameInternal->data[i] = bname[i];
  }
  c_st.site = &cc_emlrtRSI;
  iobj_2->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_2->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_2->ChildToJointTransform[i] = iv1[i];
  }
  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = 9;
  emxEnsureCapacity_char_T(&c_st, iobj_2->NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 9; i++) {
    iobj_2->NameInternal->data[i] = jname[i];
  }
  i = iobj_2->Type->size[0] * iobj_2->Type->size[1];
  iobj_2->Type->size[0] = 1;
  iobj_2->Type->size[1] = 5;
  emxEnsureCapacity_char_T(&c_st, iobj_2->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_2->Type->data[i] = b_cv[i];
  }
  emxInit_char_T(&c_st, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_2->Type->size[1];
  emxEnsureCapacity_char_T(&c_st, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = iobj_2->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = iobj_2->Type->data[i];
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
  emxFree_char_T(&c_st, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_2->VelocityNumber = 0.0;
    iobj_2->PositionNumber = 0.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_2->MotionSubspace->size[0] * iobj_2->MotionSubspace->size[1];
  iobj_2->MotionSubspace->size[0] = 6;
  iobj_2->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_2->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_2->PositionLimitsInternal->size[0] *
      iobj_2->PositionLimitsInternal->size[1];
  iobj_2->PositionLimitsInternal->size[0] = 1;
  iobj_2->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&c_st, iobj_2->PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_2->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_2->HomePositionInternal->size[0];
  iobj_2->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_2->HomePositionInternal->data[0] = 0.0;
  iobj_3->JointInternal = iobj_2;
  iobj_3->Index = -1.0;
  iobj_3->ParentIndex = -1.0;
  iobj_3->MassInternal = 1.0;
  iobj_3->CenterOfMassInternal[0] = 0.0;
  iobj_3->CenterOfMassInternal[1] = 0.0;
  iobj_3->CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_3->InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_3->SpatialInertia[i] = msubspace_data[i];
  }
  c_st.site = &dc_emlrtRSI;
  iobj_3->CollisionsInternal = CollisionSet_CollisionSet(&c_st, iobj_1, 0.0);
  st.site = &gc_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  b_default = RigidBodyTree_RigidBodyTree(&b_st, iobj_0);
  st.site = &hc_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_obj->BodyInternal = iobj_3;
  b_obj->TreeInternal = b_default;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

rigidBody *c_rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                                 f_robotics_manip_internal_Rigid *iobj_0,
                                 d_robotics_manip_internal_Colli *iobj_1,
                                 rigidBodyJoint *iobj_2,
                                 c_robotics_manip_internal_Rigid *iobj_3)
{
  static const char_T jname[15] = {'e', 'n', 'd', 'e', 'f', 'f', 'e', 'c',
                                   't', 'o', 'r', '_', 'j', 'n', 't'};
  static const char_T bname[11] = {'e', 'n', 'd', 'e', 'f', 'f',
                                   'e', 'c', 't', 'o', 'r'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  f_robotics_manip_internal_Rigid *b_default;
  rigidBody *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  st.site = &ec_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  i = iobj_3->NameInternal->size[0] * iobj_3->NameInternal->size[1];
  iobj_3->NameInternal->size[0] = 1;
  iobj_3->NameInternal->size[1] = 11;
  emxEnsureCapacity_char_T(&b_st, iobj_3->NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 11; i++) {
    iobj_3->NameInternal->data[i] = bname[i];
  }
  c_st.site = &cc_emlrtRSI;
  iobj_2->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_2->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_2->ChildToJointTransform[i] = iv1[i];
  }
  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = 15;
  emxEnsureCapacity_char_T(&c_st, iobj_2->NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 15; i++) {
    iobj_2->NameInternal->data[i] = jname[i];
  }
  i = iobj_2->Type->size[0] * iobj_2->Type->size[1];
  iobj_2->Type->size[0] = 1;
  iobj_2->Type->size[1] = 5;
  emxEnsureCapacity_char_T(&c_st, iobj_2->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_2->Type->data[i] = b_cv[i];
  }
  emxInit_char_T(&c_st, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_2->Type->size[1];
  emxEnsureCapacity_char_T(&c_st, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = iobj_2->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = iobj_2->Type->data[i];
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
  emxFree_char_T(&c_st, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_2->VelocityNumber = 0.0;
    iobj_2->PositionNumber = 0.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_2->MotionSubspace->size[0] * iobj_2->MotionSubspace->size[1];
  iobj_2->MotionSubspace->size[0] = 6;
  iobj_2->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_2->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_2->PositionLimitsInternal->size[0] *
      iobj_2->PositionLimitsInternal->size[1];
  iobj_2->PositionLimitsInternal->size[0] = 1;
  iobj_2->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&c_st, iobj_2->PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_2->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_2->HomePositionInternal->size[0];
  iobj_2->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_2->HomePositionInternal->data[0] = 0.0;
  iobj_3->JointInternal = iobj_2;
  iobj_3->Index = -1.0;
  iobj_3->ParentIndex = -1.0;
  iobj_3->MassInternal = 1.0;
  iobj_3->CenterOfMassInternal[0] = 0.0;
  iobj_3->CenterOfMassInternal[1] = 0.0;
  iobj_3->CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_3->InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_3->SpatialInertia[i] = msubspace_data[i];
  }
  c_st.site = &dc_emlrtRSI;
  iobj_3->CollisionsInternal = CollisionSet_CollisionSet(&c_st, iobj_1, 0.0);
  st.site = &gc_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  b_default = RigidBodyTree_RigidBodyTree(&b_st, iobj_0);
  st.site = &hc_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_obj->BodyInternal = iobj_3;
  b_obj->TreeInternal = b_default;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

rigidBody *rigidBody_rigidBody(const emlrtStack *sp, rigidBody *obj,
                               f_robotics_manip_internal_Rigid *iobj_0,
                               d_robotics_manip_internal_Colli *iobj_1,
                               rigidBodyJoint *iobj_2,
                               c_robotics_manip_internal_Rigid *iobj_3)
{
  static const char_T jname[9] = {'b', 'o', 'd', 'y', '1', '_', 'j', 'n', 't'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T bname[5] = {'b', 'o', 'd', 'y', '1'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  f_robotics_manip_internal_Rigid *b_default;
  rigidBody *b_obj;
  real_T poslim_data[12];
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  b_obj = obj;
  st.site = &ec_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  i = iobj_3->NameInternal->size[0] * iobj_3->NameInternal->size[1];
  iobj_3->NameInternal->size[0] = 1;
  iobj_3->NameInternal->size[1] = 5;
  emxEnsureCapacity_char_T(&b_st, iobj_3->NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_3->NameInternal->data[i] = bname[i];
  }
  c_st.site = &cc_emlrtRSI;
  iobj_2->InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_2->JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_2->ChildToJointTransform[i] = iv1[i];
  }
  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = 9;
  emxEnsureCapacity_char_T(&c_st, iobj_2->NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 9; i++) {
    iobj_2->NameInternal->data[i] = jname[i];
  }
  i = iobj_2->Type->size[0] * iobj_2->Type->size[1];
  iobj_2->Type->size[0] = 1;
  iobj_2->Type->size[1] = 5;
  emxEnsureCapacity_char_T(&c_st, iobj_2->Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_2->Type->data[i] = b_cv[i];
  }
  emxInit_char_T(&c_st, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_2->Type->size[1];
  emxEnsureCapacity_char_T(&c_st, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  loop_ub = iobj_2->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    switch_expression_data[i] = iobj_2->Type->data[i];
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
  emxFree_char_T(&c_st, &switch_expression);
  switch (loop_ub) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_2->VelocityNumber = 1.0;
    iobj_2->PositionNumber = 1.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_2->VelocityNumber = 0.0;
    iobj_2->PositionNumber = 0.0;
    iobj_2->JointAxisInternal[0] = 0.0;
    iobj_2->JointAxisInternal[1] = 0.0;
    iobj_2->JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_2->MotionSubspace->size[0] * iobj_2->MotionSubspace->size[1];
  iobj_2->MotionSubspace->size[0] = 6;
  iobj_2->MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_2->MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_2->PositionLimitsInternal->size[0] *
      iobj_2->PositionLimitsInternal->size[1];
  iobj_2->PositionLimitsInternal->size[0] = 1;
  iobj_2->PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&c_st, iobj_2->PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_2->PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_2->HomePositionInternal->size[0];
  iobj_2->HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&c_st, iobj_2->HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_2->HomePositionInternal->data[0] = 0.0;
  iobj_3->JointInternal = iobj_2;
  iobj_3->Index = -1.0;
  iobj_3->ParentIndex = -1.0;
  iobj_3->MassInternal = 1.0;
  iobj_3->CenterOfMassInternal[0] = 0.0;
  iobj_3->CenterOfMassInternal[1] = 0.0;
  iobj_3->CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_3->InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_3->SpatialInertia[i] = msubspace_data[i];
  }
  c_st.site = &dc_emlrtRSI;
  iobj_3->CollisionsInternal = CollisionSet_CollisionSet(&c_st, iobj_1, 0.0);
  st.site = &gc_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  b_default = RigidBodyTree_RigidBodyTree(&b_st, iobj_0);
  st.site = &hc_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  b_obj->BodyInternal = iobj_3;
  b_obj->TreeInternal = b_default;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return b_obj;
}

void rigidBody_set_Inertia(const emlrtStack *sp, rigidBody *obj,
                           const real_T value[6])
{
  static const char_T varargin_1[7] = {'I', 'n', 'e', 'r', 't', 'i', 'a'};
  c_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  creal_T eigVals[3];
  creal_T largestEigVal;
  creal_T smallestEigVal;
  real_T inertiaInternal[9];
  real_T sc[9];
  real_T s[3];
  real_T absx;
  real_T y;
  int32_T exponent;
  int32_T irank;
  int32_T k;
  boolean_T allFiniteA;
  boolean_T b;
  boolean_T b1;
  boolean_T b2;
  boolean_T b3;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pc_emlrtRSI;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj->BodyInternal;
  if (b_obj->Index == 0.0) {
    b_st.site = &qc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 7,
        &varargin_1[0]);
  }
  b_st.site = &rc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  allFiniteA = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!muDoubleScalarIsNaN(value[k])) {
      k++;
    } else {
      allFiniteA = false;
      exitg1 = true;
    }
  }
  if (!allFiniteA) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &d_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:rigidBody:expectedNonNaN", 3, 4, 7, "Inertia");
  }
  c_st.site = &uc_emlrtRSI;
  allFiniteA = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if ((!muDoubleScalarIsInf(value[k])) && (!muDoubleScalarIsNaN(value[k]))) {
      k++;
    } else {
      allFiniteA = false;
      exitg1 = true;
    }
  }
  if (!allFiniteA) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:rigidBody:expectedFinite", 3, 4, 7, "Inertia");
  }
  inertiaInternal[0] = value[0];
  inertiaInternal[3] = value[5];
  inertiaInternal[6] = value[4];
  inertiaInternal[1] = value[5];
  inertiaInternal[4] = value[1];
  inertiaInternal[7] = value[3];
  inertiaInternal[2] = value[4];
  inertiaInternal[5] = value[3];
  inertiaInternal[8] = value[2];
  b_st.site = &sc_emlrtRSI;
  c_st.site = &vc_emlrtRSI;
  eig(&c_st, inertiaInternal, eigVals);
  c_st.site = &wc_emlrtRSI;
  d_st.site = &dh_emlrtRSI;
  e_st.site = &eh_emlrtRSI;
  f_st.site = &fh_emlrtRSI;
  g_st.site = &gh_emlrtRSI;
  h_st.site = &hh_emlrtRSI;
  smallestEigVal = eigVals[0];
  b = muDoubleScalarIsNaN(eigVals[1].re);
  b1 = muDoubleScalarIsNaN(eigVals[1].im);
  if (b || b1) {
    allFiniteA = false;
  } else if (muDoubleScalarIsNaN(eigVals[0].re) ||
             muDoubleScalarIsNaN(eigVals[0].im)) {
    allFiniteA = true;
  } else {
    absRelopProxies(eigVals[0], eigVals[1], &absx, &y);
    allFiniteA = (absx > y);
  }
  if (allFiniteA) {
    smallestEigVal = eigVals[1];
  }
  b2 = muDoubleScalarIsNaN(eigVals[2].re);
  b3 = muDoubleScalarIsNaN(eigVals[2].im);
  if (b2 || b3) {
    allFiniteA = false;
  } else if (muDoubleScalarIsNaN(smallestEigVal.re) ||
             muDoubleScalarIsNaN(smallestEigVal.im)) {
    allFiniteA = true;
  } else {
    absRelopProxies(smallestEigVal, eigVals[2], &absx, &y);
    allFiniteA = (absx > y);
  }
  if (allFiniteA) {
    smallestEigVal = eigVals[2];
  }
  c_st.site = &xc_emlrtRSI;
  d_st.site = &rh_emlrtRSI;
  e_st.site = &sh_emlrtRSI;
  f_st.site = &th_emlrtRSI;
  g_st.site = &gh_emlrtRSI;
  h_st.site = &hh_emlrtRSI;
  largestEigVal = eigVals[0];
  if (b || b1) {
    allFiniteA = false;
  } else if (muDoubleScalarIsNaN(eigVals[0].re) ||
             muDoubleScalarIsNaN(eigVals[0].im)) {
    allFiniteA = true;
  } else {
    absRelopProxies(eigVals[0], eigVals[1], &absx, &y);
    allFiniteA = (absx < y);
  }
  if (allFiniteA) {
    largestEigVal = eigVals[1];
  }
  if (b2 || b3) {
    allFiniteA = false;
  } else if (muDoubleScalarIsNaN(largestEigVal.re) ||
             muDoubleScalarIsNaN(largestEigVal.im)) {
    allFiniteA = true;
  } else {
    absRelopProxies(largestEigVal, eigVals[2], &absx, &y);
    allFiniteA = (absx < y);
  }
  if (allFiniteA) {
    largestEigVal = eigVals[2];
  }
  c_st.site = &yc_emlrtRSI;
  d_st.site = &qh_emlrtRSI;
  absx = muDoubleScalarHypot(largestEigVal.re, largestEigVal.im);
  if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &irank);
      absx = ldexp(1.0, irank - 53);
    }
  } else {
    absx = rtNaN;
  }
  absx *= 3.0;
  if ((smallestEigVal.re < 0.0) &&
      (muDoubleScalarHypot(smallestEigVal.re, smallestEigVal.im) > absx)) {
    allFiniteA = false;
  } else if (eigVals[0].re < absx) {
    c_st.site = &ad_emlrtRSI;
    d_st.site = &vh_emlrtRSI;
    irank = 0;
    e_st.site = &wh_emlrtRSI;
    f_st.site = &yh_emlrtRSI;
    allFiniteA = !anyNonFinite(inertiaInternal);
    if (allFiniteA) {
      f_st.site = &ai_emlrtRSI;
      g_st.site = &bi_emlrtRSI;
      h_st.site = &ci_emlrtRSI;
      memcpy(&sc[0], &inertiaInternal[0], 9U * sizeof(real_T));
      i_st.site = &di_emlrtRSI;
      xzsvdc(&i_st, sc, s);
    } else {
      s[0] = rtNaN;
      s[1] = rtNaN;
      s[2] = rtNaN;
    }
    e_st.site = &xh_emlrtRSI;
    f_st.site = &qh_emlrtRSI;
    absx = muDoubleScalarAbs(s[0]);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    absx *= 3.0;
    k = 0;
    while ((k < 3) && (s[k] > absx)) {
      irank++;
      k++;
    }
    if (irank < 3) {
      allFiniteA = true;
    } else {
      allFiniteA = true;
    }
  } else {
    allFiniteA = true;
  }
  if (!allFiniteA) {
    b_st.site = &tc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI,
        "robotics:robotmanip:rigidbody:InertiaMatrixNotPSD",
        "robotics:robotmanip:rigidbody:InertiaMatrixNotPSD", 0);
  }
  for (k = 0; k < 9; k++) {
    b_obj->InertiaInternal[k] = inertiaInternal[k];
  }
  absx = b_obj->MassInternal;
  s[0] = b_obj->CenterOfMassInternal[0];
  s[1] = b_obj->CenterOfMassInternal[1];
  s[2] = b_obj->CenterOfMassInternal[2];
  for (k = 0; k < 9; k++) {
    inertiaInternal[k] = b_obj->InertiaInternal[k];
  }
  sc[0] = 0.0;
  sc[3] = -s[2];
  sc[6] = s[1];
  sc[1] = s[2];
  sc[4] = 0.0;
  sc[7] = -s[0];
  sc[2] = -s[1];
  sc[5] = s[0];
  sc[8] = 0.0;
  for (k = 0; k < 3; k++) {
    b_obj->SpatialInertia[6 * k] = inertiaInternal[3 * k];
    b_obj->SpatialInertia[6 * k + 1] = inertiaInternal[3 * k + 1];
    b_obj->SpatialInertia[6 * k + 2] = inertiaInternal[3 * k + 2];
  }
  for (k = 0; k < 3; k++) {
    irank = 6 * (k + 3);
    b_obj->SpatialInertia[irank] = absx * sc[3 * k];
    b_obj->SpatialInertia[irank + 1] = absx * sc[3 * k + 1];
    b_obj->SpatialInertia[irank + 2] = absx * sc[3 * k + 2];
  }
  for (k = 0; k < 3; k++) {
    b_obj->SpatialInertia[6 * k + 3] = absx * sc[k];
    b_obj->SpatialInertia[6 * k + 4] = absx * sc[k + 3];
    b_obj->SpatialInertia[6 * k + 5] = absx * sc[k + 6];
  }
  for (k = 0; k < 3; k++) {
    irank = 6 * (k + 3);
    b_obj->SpatialInertia[irank + 3] = absx * (real_T)iv[3 * k];
    b_obj->SpatialInertia[irank + 4] = absx * (real_T)iv[3 * k + 1];
    b_obj->SpatialInertia[irank + 5] = absx * (real_T)iv[3 * k + 2];
  }
}

void rigidBody_set_Joint(const emlrtStack *sp, rigidBody *obj,
                         rigidBodyJoint *value, rigidBodyJoint *iobj_0)
{
  static const char_T varargin_2[12] = {'r', 'e', 'p', 'l', 'a', 'c',
                                        'e', 'J', 'o', 'i', 'n', 't'};
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  c_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_obj = obj->BodyInternal;
  if (b_obj->Index == 0.0) {
    b_st.site = &gj_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  if (b_obj->Index > 0.0) {
    b_st.site = &hj_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &i_emlrtRTEI,
        "robotics:robotmanip:rigidbody:BodyAlreadyAddedToRobot",
        "robotics:robotmanip:rigidbody:BodyAlreadyAddedToRobot", 6, 4, 5,
        &varargin_1[0], 4, 12, &varargin_2[0]);
  }
  b_st.site = &ij_emlrtRSI;
  b_obj->JointInternal = rigidBodyJoint_copy(&b_st, value, iobj_0);
}

/* End of code generation (rigidBody.c) */
