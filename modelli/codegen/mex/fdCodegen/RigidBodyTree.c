/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBodyTree.c
 *
 * Code generation for function 'RigidBodyTree'
 *
 */

/* Include files */
#include "RigidBodyTree.h"
#include "CollisionSet.h"
#include "any.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "rand.h"
#include "rigidBodyJoint.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "validateattributes.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo nb_emlrtRSI = {
    96,          /* lineNo */
    "RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    106,         /* lineNo */
    "RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    47,                                                /* lineNo */
    "FastVisualizationHelper/FastVisualizationHelper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\FastVisualizationHelper.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    1159,                           /* lineNo */
    "RigidBodyTree/clearAllBodies", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    1171,                           /* lineNo */
    "RigidBodyTree/clearAllBodies", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo rk_emlrtRSI = {
    1190,                                /* lineNo */
    "RigidBodyTree/findBodyIndexByName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo xk_emlrtRSI = {
    1213,                                     /* lineNo */
    "RigidBodyTree/findBodyIndexByJointName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo yk_emlrtRSI = {
    1217,                                     /* lineNo */
    "RigidBodyTree/findBodyIndexByJointName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo kl_emlrtRSI = {
    1316,                                           /* lineNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ll_emlrtRSI = {
    1336,                                           /* lineNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ml_emlrtRSI = {
    1347,                                           /* lineNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo nl_emlrtRSI = {
    1363,                                           /* lineNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ol_emlrtRSI = {
    579,                               /* lineNo */
    "RigidBodyTree/homeConfiguration", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo pl_emlrtRSI = {
    580,                               /* lineNo */
    "RigidBodyTree/homeConfiguration", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ql_emlrtRSI = {
    538,                                /* lineNo */
    "RigidBodyTree/homeJointPositions", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    1216,                                     /* lineNo */
    21,                                       /* colNo */
    "RigidBodyTree/findBodyIndexByJointName", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    0,                                        /* iFirst */
    2,                                        /* iLast */
    1217,                                     /* lineNo */
    38,                                       /* colNo */
    "",                                       /* aName */
    "RigidBodyTree/findBodyIndexByJointName", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    0                            /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    1317,                                           /* lineNo */
    26,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    4                            /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    1317,                                           /* lineNo */
    26,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    1318,                                           /* lineNo */
    26,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    4                            /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    1318,                                           /* lineNo */
    26,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = {
    535,                                /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtBCInfo cc_emlrtBCI = {
    1,                                  /* iFirst */
    3,                                  /* iLast */
    536,                                /* lineNo */
    40,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    0                            /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    539,                                /* lineNo */
    23,                                 /* colNo */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    539,                                /* lineNo */
    23,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    0                            /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    539,                                /* lineNo */
    28,                                 /* colNo */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    539,                                /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    0                            /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,                                 /* nDims */
    539,                                /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTree/homeJointPositions", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtDCInfo y_emlrtDCI = {
    1319,                                           /* lineNo */
    29,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    1319,                                           /* lineNo */
    29,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    4                            /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    579,                               /* lineNo */
    17,                                /* colNo */
    "RigidBodyTree/homeConfiguration", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    579,                               /* lineNo */
    17,                                /* colNo */
    "RigidBodyTree/homeConfiguration", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    4                            /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    1319,                                           /* lineNo */
    13,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    1319,                                           /* lineNo */
    13,                                             /* colNo */
    "RigidBodyTree/validateDynamicsFunctionInputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    4                            /* checkKind */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    1193,            /* lineNo */
    23,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    1217,            /* lineNo */
    27,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    579,             /* lineNo */
    17,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    538,             /* lineNo */
    21,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    1319,            /* lineNo */
    13,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    1340,            /* lineNo */
    21,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    1351,            /* lineNo */
    21,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    1368,            /* lineNo */
    21,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

/* Function Definitions */
f_robotics_manip_internal_Rigid *
RigidBodyTree_RigidBodyTree(const emlrtStack *sp,
                            f_robotics_manip_internal_Rigid *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  f_robotics_manip_internal_Rigid *b_obj;
  f_robotics_manip_internal_Rigid *c_obj;
  real_T idx[5];
  real_T d;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  st.site = &gb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &hb_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  rigidBodyJoint_rigidBodyJoint(&b_st, &b_obj->Base.JointInternal);
  b_st.site = &ob_emlrtRSI;
  CollisionSet_CollisionSet(&b_st, &b_obj->Base.CollisionsInternal, 0.0);
  st.site = &kb_emlrtRSI;
  b_st.site = &vb_emlrtRSI;
  b_rand(idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }
  for (k = 0; k < 5; k++) {
    d = idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &emlrtDCI, &b_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 62)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 62, &emlrtBCI, &b_st);
    }
  }
  st.site = &jb_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  st.site = &lb_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  b_rigidBodyJoint_rigidBodyJoint(&c_st, &b_obj->_pobj0.JointInternal);
  c_st.site = &ob_emlrtRSI;
  CollisionSet_CollisionSet(&c_st, &b_obj->_pobj0.CollisionsInternal, 0.0);
  c_obj->Bodies[0] = &b_obj->_pobj0;
  b_st.site = &bc_emlrtRSI;
  c_st.site = &vb_emlrtRSI;
  b_rand(idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }
  for (k = 0; k < 5; k++) {
    d = idx[k];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &emlrtDCI, &c_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 62)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 62, &emlrtBCI, &c_st);
    }
  }
  return b_obj;
}

void RigidBodyTree_clearAllBodies(const emlrtStack *sp,
                                  d_robotics_manip_internal_Rigid *obj,
                                  d_robotics_manip_internal_Colli *iobj_0,
                                  rigidBodyJoint *iobj_1,
                                  c_robotics_manip_internal_Rigid *iobj_2)
{
  static const char_T b_jname[14] = {'d', 'u', 'm', 'm', 'y', 'b', 'o',
                                     'd', 'y', '3', '_', 'j', 'n', 't'};
  static const char_T jname[14] = {'d', 'u', 'm', 'm', 'y', 'b', 'o',
                                   'd', 'y', '2', '_', 'j', 'n', 't'};
  static const char_T b_bname[10] = {'d', 'u', 'm', 'm', 'y',
                                     'b', 'o', 'd', 'y', '2'};
  static const char_T bname[10] = {'d', 'u', 'm', 'm', 'y',
                                   'b', 'o', 'd', 'y', '1'};
  static const char_T c_bname[10] = {'d', 'u', 'm', 'm', 'y',
                                     'b', 'o', 'd', 'y', '3'};
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  static const int8_T iv2[6] = {0, 0, 0, -1, -1, -1};
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *switch_expression;
  real_T poslim_data[12];
  real_T idx[5];
  real_T d;
  int32_T exitg1;
  int32_T i;
  int32_T k;
  char_T jointtype_tmp_data[20];
  char_T *switch_expression_data;
  int8_T msubspace_data[36];
  int8_T b_I[9];
  boolean_T b_bool;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &ac_emlrtRSI;
  i = iobj_2[0].NameInternal->size[0] * iobj_2[0].NameInternal->size[1];
  iobj_2[0].NameInternal->size[0] = 1;
  iobj_2[0].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(&st, iobj_2[0].NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 10; i++) {
    iobj_2[0].NameInternal->data[i] = bname[i];
  }
  b_st.site = &cc_emlrtRSI;
  iobj_2[0].JointInternal =
      b_rigidBodyJoint_rigidBodyJoint(&b_st, &iobj_2[0]._pobj1);
  iobj_2[0].Index = -1.0;
  iobj_2[0].ParentIndex = -1.0;
  iobj_2[0].MassInternal = 1.0;
  iobj_2[0].CenterOfMassInternal[0] = 0.0;
  iobj_2[0].CenterOfMassInternal[1] = 0.0;
  iobj_2[0].CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_2[0].InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (k = 0; k < 6; k++) {
    msubspace_data[k + 6 * k] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_2[0].SpatialInertia[i] = msubspace_data[i];
  }
  b_st.site = &dc_emlrtRSI;
  iobj_2[0].CollisionsInternal =
      CollisionSet_CollisionSet(&b_st, &iobj_2[0]._pobj0, 0.0);
  obj->Bodies[0] = &iobj_2[0];
  st.site = &ac_emlrtRSI;
  i = iobj_2[1].NameInternal->size[0] * iobj_2[1].NameInternal->size[1];
  iobj_2[1].NameInternal->size[0] = 1;
  iobj_2[1].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(&st, iobj_2[1].NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 10; i++) {
    iobj_2[1].NameInternal->data[i] = b_bname[i];
  }
  b_st.site = &cc_emlrtRSI;
  iobj_1[0].InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1[0].JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_1[0].ChildToJointTransform[i] = iv1[i];
  }
  i = iobj_1[0].NameInternal->size[0] * iobj_1[0].NameInternal->size[1];
  iobj_1[0].NameInternal->size[0] = 1;
  iobj_1[0].NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(&b_st, iobj_1[0].NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 14; i++) {
    iobj_1[0].NameInternal->data[i] = jname[i];
  }
  for (i = 0; i < 5; i++) {
    jointtype_tmp_data[i] = b_cv[i];
  }
  i = iobj_1[0].Type->size[0] * iobj_1[0].Type->size[1];
  iobj_1[0].Type->size[0] = 1;
  iobj_1[0].Type->size[1] = 5;
  emxEnsureCapacity_char_T(&b_st, iobj_1[0].Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_1[0].Type->data[i] = jointtype_tmp_data[i];
  }
  emxInit_char_T(&b_st, &switch_expression, &qb_emlrtRTEI);
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1[0].Type->size[1];
  emxEnsureCapacity_char_T(&b_st, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  k = iobj_1[0].Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression_data[i] = iobj_1[0].Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 8) {
        if (switch_expression_data[k] != cv1[k]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    k = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      k = 0;
      do {
        exitg1 = 0;
        if (k < 9) {
          if (switch_expression_data[k] != cv[k]) {
            exitg1 = 1;
          } else {
            k++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      k = 1;
    } else {
      k = -1;
    }
  }
  switch (k) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_1[0].VelocityNumber = 1.0;
    iobj_1[0].PositionNumber = 1.0;
    iobj_1[0].JointAxisInternal[0] = 0.0;
    iobj_1[0].JointAxisInternal[1] = 0.0;
    iobj_1[0].JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_1[0].VelocityNumber = 1.0;
    iobj_1[0].PositionNumber = 1.0;
    iobj_1[0].JointAxisInternal[0] = 0.0;
    iobj_1[0].JointAxisInternal[1] = 0.0;
    iobj_1[0].JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_1[0].VelocityNumber = 0.0;
    iobj_1[0].PositionNumber = 0.0;
    iobj_1[0].JointAxisInternal[0] = 0.0;
    iobj_1[0].JointAxisInternal[1] = 0.0;
    iobj_1[0].JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_1[0].MotionSubspace->size[0] * iobj_1[0].MotionSubspace->size[1];
  iobj_1[0].MotionSubspace->size[0] = 6;
  iobj_1[0].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_1[0].MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_1[0].MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_1[0].PositionLimitsInternal->size[0] *
      iobj_1[0].PositionLimitsInternal->size[1];
  iobj_1[0].PositionLimitsInternal->size[0] = 1;
  iobj_1[0].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, iobj_1[0].PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_1[0].PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_1[0].HomePositionInternal->size[0];
  iobj_1[0].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_1[0].HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_1[0].HomePositionInternal->data[0] = 0.0;
  iobj_2[1].JointInternal = &iobj_1[0];
  iobj_2[1].Index = -1.0;
  iobj_2[1].ParentIndex = -1.0;
  iobj_2[1].MassInternal = 1.0;
  iobj_2[1].CenterOfMassInternal[0] = 0.0;
  iobj_2[1].CenterOfMassInternal[1] = 0.0;
  iobj_2[1].CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_2[1].InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (k = 0; k < 6; k++) {
    msubspace_data[k + 6 * k] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_2[1].SpatialInertia[i] = msubspace_data[i];
  }
  b_st.site = &dc_emlrtRSI;
  iobj_2[1].CollisionsInternal =
      CollisionSet_CollisionSet(&b_st, &iobj_0[0], 0.0);
  obj->Bodies[1] = &iobj_2[1];
  st.site = &ac_emlrtRSI;
  i = iobj_2[2].NameInternal->size[0] * iobj_2[2].NameInternal->size[1];
  iobj_2[2].NameInternal->size[0] = 1;
  iobj_2[2].NameInternal->size[1] = 10;
  emxEnsureCapacity_char_T(&st, iobj_2[2].NameInternal, i, &jb_emlrtRTEI);
  for (i = 0; i < 10; i++) {
    iobj_2[2].NameInternal->data[i] = c_bname[i];
  }
  b_st.site = &cc_emlrtRSI;
  iobj_1[1].InTree = false;
  for (i = 0; i < 16; i++) {
    iobj_1[1].JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    iobj_1[1].ChildToJointTransform[i] = iv1[i];
  }
  i = iobj_1[1].NameInternal->size[0] * iobj_1[1].NameInternal->size[1];
  iobj_1[1].NameInternal->size[0] = 1;
  iobj_1[1].NameInternal->size[1] = 14;
  emxEnsureCapacity_char_T(&b_st, iobj_1[1].NameInternal, i, &ob_emlrtRTEI);
  for (i = 0; i < 14; i++) {
    iobj_1[1].NameInternal->data[i] = b_jname[i];
  }
  i = iobj_1[1].Type->size[0] * iobj_1[1].Type->size[1];
  iobj_1[1].Type->size[0] = 1;
  iobj_1[1].Type->size[1] = 5;
  emxEnsureCapacity_char_T(&b_st, iobj_1[1].Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_1[1].Type->data[i] = jointtype_tmp_data[i];
  }
  i = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_1[1].Type->size[1];
  emxEnsureCapacity_char_T(&b_st, switch_expression, i, &qb_emlrtRTEI);
  switch_expression_data = switch_expression->data;
  k = iobj_1[1].Type->size[1];
  for (i = 0; i < k; i++) {
    switch_expression_data[i] = iobj_1[1].Type->data[i];
  }
  b_bool = false;
  if (switch_expression->size[1] == 8) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 8) {
        if (switch_expression_data[k] != cv1[k]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  if (b_bool) {
    k = 0;
  } else {
    b_bool = false;
    if (switch_expression->size[1] == 9) {
      k = 0;
      do {
        exitg1 = 0;
        if (k < 9) {
          if (switch_expression_data[k] != cv[k]) {
            exitg1 = 1;
          } else {
            k++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    if (b_bool) {
      k = 1;
    } else {
      k = -1;
    }
  }
  emxFree_char_T(&b_st, &switch_expression);
  switch (k) {
  case 0:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv[i];
    }
    poslim_data[0] = -3.1415926535897931;
    poslim_data[1] = 3.1415926535897931;
    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 1.0;
    break;
  case 1:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = b_iv1[i];
    }
    poslim_data[0] = -0.5;
    poslim_data[1] = 0.5;
    iobj_1[1].VelocityNumber = 1.0;
    iobj_1[1].PositionNumber = 1.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 1.0;
    break;
  default:
    for (i = 0; i < 6; i++) {
      msubspace_data[i] = 0;
    }
    poslim_data[0] = 0.0;
    poslim_data[1] = 0.0;
    iobj_1[1].VelocityNumber = 0.0;
    iobj_1[1].PositionNumber = 0.0;
    iobj_1[1].JointAxisInternal[0] = 0.0;
    iobj_1[1].JointAxisInternal[1] = 0.0;
    iobj_1[1].JointAxisInternal[2] = 0.0;
    break;
  }
  i = iobj_1[1].MotionSubspace->size[0] * iobj_1[1].MotionSubspace->size[1];
  iobj_1[1].MotionSubspace->size[0] = 6;
  iobj_1[1].MotionSubspace->size[1] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_1[1].MotionSubspace, i, &rb_emlrtRTEI);
  for (i = 0; i < 6; i++) {
    iobj_1[1].MotionSubspace->data[i] = msubspace_data[i];
  }
  i = iobj_1[1].PositionLimitsInternal->size[0] *
      iobj_1[1].PositionLimitsInternal->size[1];
  iobj_1[1].PositionLimitsInternal->size[0] = 1;
  iobj_1[1].PositionLimitsInternal->size[1] = 2;
  emxEnsureCapacity_real_T(&b_st, iobj_1[1].PositionLimitsInternal, i,
                           &sb_emlrtRTEI);
  for (i = 0; i < 2; i++) {
    iobj_1[1].PositionLimitsInternal->data[i] = poslim_data[i];
  }
  i = iobj_1[1].HomePositionInternal->size[0];
  iobj_1[1].HomePositionInternal->size[0] = 1;
  emxEnsureCapacity_real_T(&b_st, iobj_1[1].HomePositionInternal, i,
                           &tb_emlrtRTEI);
  iobj_1[1].HomePositionInternal->data[0] = 0.0;
  iobj_2[2].JointInternal = &iobj_1[1];
  iobj_2[2].Index = -1.0;
  iobj_2[2].ParentIndex = -1.0;
  iobj_2[2].MassInternal = 1.0;
  iobj_2[2].CenterOfMassInternal[0] = 0.0;
  iobj_2[2].CenterOfMassInternal[1] = 0.0;
  iobj_2[2].CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_2[2].InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (k = 0; k < 6; k++) {
    msubspace_data[k + 6 * k] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_2[2].SpatialInertia[i] = msubspace_data[i];
  }
  b_st.site = &dc_emlrtRSI;
  iobj_2[2].CollisionsInternal =
      CollisionSet_CollisionSet(&b_st, &iobj_0[1], 0.0);
  obj->Bodies[2] = &iobj_2[2];
  obj->NumBodies = 0.0;
  obj->NumNonFixedBodies = 0.0;
  obj->PositionNumber = 0.0;
  obj->VelocityNumber = 0.0;
  st.site = &bc_emlrtRSI;
  b_st.site = &vb_emlrtRSI;
  b_rand(idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }
  for (i = 0; i < 5; i++) {
    d = idx[i];
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &emlrtDCI, &b_st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > 62)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 62, &emlrtBCI, &b_st);
    }
  }
  for (i = 0; i < 6; i++) {
    obj->PositionDoFMap[i] = iv2[i];
  }
  for (i = 0; i < 6; i++) {
    obj->VelocityDoFMap[i] = iv2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T c_RigidBodyTree_findBodyIndexBy(const emlrtStack *sp,
                                       d_robotics_manip_internal_Rigid *obj,
                                       const emxArray_char_T *bodyname)
{
  c_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *bname;
  real_T bid;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  char_T *bname_data;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  bid = -1.0;
  st.site = &rk_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  if (bodyname->size[1] == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &j_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:findBodyIndexByName:expectedNonempty", 3, 4, 8, "bodyname");
  }
  emxInit_char_T(&b_st, &bname, &pc_emlrtRTEI);
  st.site = &sk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(&st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = obj->Base.NameInternal->data[i];
  }
  st.site = &sk_emlrtRSI;
  if (b_strcmp(&st, bname, bodyname)) {
    bid = 0.0;
  } else {
    d = obj->NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                  &n_emlrtRTEI, (emlrtCTX)sp);
    b_i = 0;
    exitg1 = false;
    while ((!exitg1) && (b_i <= (int32_T)d - 1)) {
      st.site = &tk_emlrtRSI;
      if (b_i > 2) {
        emlrtDynamicBoundsCheckR2012b(3, 0, 2, &i_emlrtBCI, &st);
      }
      b_obj = obj->Bodies[b_i];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = b_obj->NameInternal->size[1];
      emxEnsureCapacity_char_T(&st, bname, i, &mc_emlrtRTEI);
      bname_data = bname->data;
      loop_ub = b_obj->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname_data[i] = b_obj->NameInternal->data[i];
      }
      st.site = &tk_emlrtRSI;
      if (b_strcmp(&st, bname, bodyname)) {
        bid = (real_T)b_i + 1.0;
        exitg1 = true;
      } else {
        b_i++;
      }
    }
  }
  emxFree_char_T(sp, &bname);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return bid;
}

void c_RigidBodyTree_validateDynamic(
    const emlrtStack *sp, d_robotics_manip_internal_Rigid *obj,
    const real_T varargin_1[2], const real_T varargin_2[2],
    const real_T varargin_3[2], emxArray_real_T *out1, emxArray_real_T *out2,
    emxArray_real_T *out3, emxArray_real_T *out4)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *r;
  emxArray_real_T *Q_;
  emxArray_real_T *qi;
  rigidBodyJoint *b_obj;
  real_T p[2];
  real_T t0_f5_idx_0;
  real_T *Q__data;
  real_T *qi_data;
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T *r1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &Q_, 1, &yc_emlrtRTEI);
  st.site = &kl_emlrtRSI;
  b_st.site = &ol_emlrtRSI;
  if (!(obj->PositionNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->PositionNumber, &cb_emlrtDCI, &b_st);
  }
  t0_f5_idx_0 = obj->PositionNumber;
  if (t0_f5_idx_0 != (int32_T)muDoubleScalarFloor(t0_f5_idx_0)) {
    emlrtIntegerCheckR2012b(t0_f5_idx_0, &bb_emlrtDCI, &b_st);
  }
  i = Q_->size[0];
  Q_->size[0] = (int32_T)t0_f5_idx_0;
  emxEnsureCapacity_real_T(&b_st, Q_, i, &yc_emlrtRTEI);
  Q__data = Q_->data;
  if (!(obj->PositionNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->PositionNumber, &cb_emlrtDCI, &b_st);
  }
  t0_f5_idx_0 = obj->PositionNumber;
  if (t0_f5_idx_0 != (int32_T)muDoubleScalarFloor(t0_f5_idx_0)) {
    emlrtIntegerCheckR2012b(t0_f5_idx_0, &bb_emlrtDCI, &b_st);
  }
  loop_ub = (int32_T)t0_f5_idx_0;
  for (i = 0; i < loop_ub; i++) {
    Q__data[i] = 0.0;
  }
  t0_f5_idx_0 = obj->NumBodies;
  i = (int32_T)t0_f5_idx_0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, t0_f5_idx_0, mxDOUBLE_CLASS,
                                (int32_T)t0_f5_idx_0, &t_emlrtRTEI, &b_st);
  emxInit_real_T(&b_st, &qi, 1, &ad_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    if (((int32_T)(b_i + 1U) < 1) || ((int32_T)(b_i + 1U) > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, 3, &cc_emlrtBCI,
                                    &b_st);
    }
    p[0] = obj->PositionDoFMap[b_i];
    p[1] = obj->PositionDoFMap[b_i + 3];
    if (p[0] <= p[1]) {
      c_st.site = &ql_emlrtRSI;
      b_obj = obj->Bodies[b_i]->JointInternal;
      i1 = qi->size[0];
      qi->size[0] = b_obj->HomePositionInternal->size[0];
      emxEnsureCapacity_real_T(&c_st, qi, i1, &ad_emlrtRTEI);
      qi_data = qi->data;
      loop_ub = b_obj->HomePositionInternal->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        qi_data[i1] = b_obj->HomePositionInternal->data[i1];
      }
      if (p[0] > p[1]) {
        i1 = -1;
        i2 = -1;
      } else {
        if (p[0] != (int32_T)muDoubleScalarFloor(p[0])) {
          emlrtIntegerCheckR2012b(p[0], &w_emlrtDCI, &b_st);
        }
        if (((int32_T)p[0] < 1) || ((int32_T)p[0] > Q_->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p[0], 1, Q_->size[0],
                                        &dc_emlrtBCI, &b_st);
        }
        i1 = (int32_T)p[0] - 2;
        if (p[1] != (int32_T)muDoubleScalarFloor(p[1])) {
          emlrtIntegerCheckR2012b(p[1], &x_emlrtDCI, &b_st);
        }
        if (((int32_T)p[1] < 1) || ((int32_T)p[1] > Q_->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p[1], 1, Q_->size[0],
                                        &ec_emlrtBCI, &b_st);
        }
        i2 = (int32_T)p[1] - 1;
      }
      loop_ub = i2 - i1;
      if (loop_ub != qi->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(loop_ub, qi->size[0], &emlrtECI, &b_st);
      }
      for (i2 = 0; i2 < loop_ub; i2++) {
        Q__data[(i1 + i2) + 1] = qi_data[i2];
      }
    }
  }
  emxFree_real_T(&b_st, &qi);
  emxInit_boolean_T(&b_st, &r, &uc_emlrtRTEI);
  b_st.site = &pl_emlrtRSI;
  i = r->size[0];
  r->size[0] = Q_->size[0];
  emxEnsureCapacity_boolean_T(&b_st, r, i, &uc_emlrtRTEI);
  r1 = r->data;
  loop_ub = Q_->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = muDoubleScalarIsNaN(Q__data[i]);
  }
  guard1 = false;
  c_st.site = &rl_emlrtRSI;
  if (any(&c_st, r)) {
    guard1 = true;
  } else {
    i = r->size[0];
    r->size[0] = Q_->size[0];
    emxEnsureCapacity_boolean_T(&b_st, r, i, &vc_emlrtRTEI);
    r1 = r->data;
    loop_ub = Q_->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1[i] = muDoubleScalarIsInf(Q__data[i]);
    }
    c_st.site = &rl_emlrtRSI;
    if (any(&c_st, r)) {
      guard1 = true;
    }
  }
  if (guard1) {
    c_st.site = &sl_emlrtRSI;
    d_st.site = &ek_emlrtRSI;
    d_warning(&d_st);
  }
  emxFree_boolean_T(&b_st, &r);
  emxFree_real_T(&b_st, &Q_);
  if (!(obj->VelocityNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->VelocityNumber, &s_emlrtDCI, (emlrtCTX)sp);
  }
  if (obj->VelocityNumber !=
      (int32_T)muDoubleScalarFloor(obj->VelocityNumber)) {
    emlrtIntegerCheckR2012b(obj->VelocityNumber, &t_emlrtDCI, (emlrtCTX)sp);
  }
  if (!(obj->VelocityNumber >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->VelocityNumber, &u_emlrtDCI, (emlrtCTX)sp);
  }
  if (obj->VelocityNumber !=
      (int32_T)muDoubleScalarFloor(obj->VelocityNumber)) {
    emlrtIntegerCheckR2012b(obj->VelocityNumber, &v_emlrtDCI, (emlrtCTX)sp);
  }
  i = out4->size[0] * out4->size[1];
  out4->size[0] = 6;
  emxEnsureCapacity_real_T(sp, out4, i, &bd_emlrtRTEI);
  if (!(obj->NumBodies >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->NumBodies, &ab_emlrtDCI, (emlrtCTX)sp);
  }
  t0_f5_idx_0 = obj->NumBodies;
  if (t0_f5_idx_0 != (int32_T)muDoubleScalarFloor(t0_f5_idx_0)) {
    emlrtIntegerCheckR2012b(t0_f5_idx_0, &y_emlrtDCI, (emlrtCTX)sp);
  }
  i = out4->size[0] * out4->size[1];
  out4->size[1] = (int32_T)t0_f5_idx_0;
  emxEnsureCapacity_real_T(sp, out4, i, &bd_emlrtRTEI);
  Q__data = out4->data;
  if (!(obj->NumBodies >= 0.0)) {
    emlrtNonNegativeCheckR2012b(obj->NumBodies, &eb_emlrtDCI, (emlrtCTX)sp);
  }
  t0_f5_idx_0 = obj->NumBodies;
  if (t0_f5_idx_0 != (int32_T)muDoubleScalarFloor(t0_f5_idx_0)) {
    emlrtIntegerCheckR2012b(t0_f5_idx_0, &db_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = 6 * (int32_T)t0_f5_idx_0;
  for (i = 0; i < loop_ub; i++) {
    Q__data[i] = 0.0;
  }
  t0_f5_idx_0 = obj->PositionNumber;
  p[0] = obj->VelocityNumber;
  p[1] = 1.0;
  st.site = &ll_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (!muDoubleScalarIsNaN(varargin_1[loop_ub])) {
      loop_ub++;
    } else {
      b_p = false;
      exitg1 = true;
    }
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &d_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:validateDynamicsFunctionInputs:expectedNonNaN", 3, 4, 25,
        "joint position vector (q)");
  }
  b_st.site = &uc_emlrtRSI;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if ((!muDoubleScalarIsInf(varargin_1[loop_ub])) &&
        (!muDoubleScalarIsNaN(varargin_1[loop_ub]))) {
      loop_ub++;
    } else {
      b_p = false;
      exitg1 = true;
    }
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:validateDynamicsFunctionInputs:expectedFinite", 3, 4, 25,
        "joint position vector (q)");
  }
  b_st.site = &uc_emlrtRSI;
  if ((!(t0_f5_idx_0 != t0_f5_idx_0)) &&
      (muDoubleScalarIsInf(t0_f5_idx_0) || (!(t0_f5_idx_0 >= 0.0)) ||
       (!(t0_f5_idx_0 == muDoubleScalarFloor(t0_f5_idx_0))))) {
    emlrtErrorWithMessageIdR2018a(&b_st, &u_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  if ((!(t0_f5_idx_0 != t0_f5_idx_0)) && (!(t0_f5_idx_0 == 2.0))) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:validateDynamicsFunctionInputs:incorrectSize", 3, 4, 25,
        "joint position vector (q)");
  }
  i = out1->size[0];
  out1->size[0] = 2;
  emxEnsureCapacity_real_T(sp, out1, i, &cd_emlrtRTEI);
  Q__data = out1->data;
  Q__data[0] = varargin_1[0];
  Q__data[1] = varargin_1[1];
  st.site = &ml_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (!muDoubleScalarIsNaN(varargin_2[loop_ub])) {
      loop_ub++;
    } else {
      b_p = false;
      exitg1 = true;
    }
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &d_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:validateDynamicsFunctionInputs:expectedNonNaN", 3, 4, 28,
        "joint velocity vector (qdot)");
  }
  b_st.site = &uc_emlrtRSI;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if ((!muDoubleScalarIsInf(varargin_2[loop_ub])) &&
        (!muDoubleScalarIsNaN(varargin_2[loop_ub]))) {
      loop_ub++;
    } else {
      b_p = false;
      exitg1 = true;
    }
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:validateDynamicsFunctionInputs:expectedFinite", 3, 4, 28,
        "joint velocity vector (qdot)");
  }
  b_st.site = &uc_emlrtRSI;
  if ((!(p[0] != p[0])) && (muDoubleScalarIsInf(p[0]) || (!(p[0] >= 0.0)) ||
                            (!(p[0] == muDoubleScalarFloor(p[0]))))) {
    emlrtErrorWithMessageIdR2018a(&b_st, &u_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  if ((!(p[0] != p[0])) && (!(p[0] == 2.0))) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &v_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:validateDynamicsFunctionInputs:incorrectSize", 3, 4, 28,
        "joint velocity vector (qdot)");
  }
  i = out2->size[0];
  out2->size[0] = 2;
  emxEnsureCapacity_real_T(sp, out2, i, &dd_emlrtRTEI);
  Q__data = out2->data;
  Q__data[0] = varargin_2[0];
  Q__data[1] = varargin_2[1];
  st.site = &nl_emlrtRSI;
  validateattributes(&st, varargin_3, p);
  i = out3->size[0];
  out3->size[0] = 2;
  emxEnsureCapacity_real_T(sp, out3, i, &ed_emlrtRTEI);
  Q__data = out3->data;
  Q__data[0] = varargin_3[0];
  Q__data[1] = varargin_3[1];
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

real_T d_RigidBodyTree_findBodyIndexBy(const emlrtStack *sp,
                                       d_robotics_manip_internal_Rigid *obj,
                                       const emxArray_char_T *jointname)
{
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  c_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_char_T *nm;
  rigidBodyJoint *jnt;
  real_T bid;
  real_T d;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  char_T *nm_data;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  bid = -1.0;
  st.site = &xk_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  if (jointname->size[1] == 0) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &j_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:findBodyIndexByJointName:expectedNonempty", 3, 4, 9,
        "jointname");
  }
  d = obj->NumBodies;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
                                &o_emlrtRTEI, (emlrtCTX)sp);
  i = 0;
  emxInit_char_T(sp, &nm, &qc_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (i <= (int32_T)d - 1)) {
    st.site = &yk_emlrtRSI;
    if (i > 2) {
      emlrtDynamicBoundsCheckR2012b(3, 0, 2, &j_emlrtBCI, &st);
    }
    b_obj = obj->Bodies[i];
    if (b_obj->Index == 0.0) {
      b_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = b_obj->JointInternal;
    st.site = &yk_emlrtRSI;
    b_i = nm->size[0] * nm->size[1];
    nm->size[0] = 1;
    nm->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(&st, nm, b_i, &cc_emlrtRTEI);
    nm_data = nm->data;
    loop_ub = jnt->NameInternal->size[1];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      nm_data[b_i] = jnt->NameInternal->data[b_i];
    }
    st.site = &yk_emlrtRSI;
    if (b_strcmp(&st, nm, jointname)) {
      bid = (real_T)i + 1.0;
      exitg1 = true;
    } else {
      i++;
    }
  }
  emxFree_char_T(sp, &nm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return bid;
}

/* End of code generation (RigidBodyTree.c) */
