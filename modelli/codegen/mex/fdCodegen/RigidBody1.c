/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBody1.c
 *
 * Code generation for function 'RigidBody1'
 *
 */

/* Include files */
#include "RigidBody1.h"
#include "CollisionSet.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "rigidBodyJoint.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo al_emlrtRSI = {
    189,              /* lineNo */
    "RigidBody/copy", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo bl_emlrtRSI = {
    190,              /* lineNo */
    "RigidBody/copy", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo cl_emlrtRSI = {
    200,              /* lineNo */
    "RigidBody/copy", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo dl_emlrtRSI = {
    88,                    /* lineNo */
    "RigidBody/RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo el_emlrtRSI = {
    204,                 /* lineNo */
    "CollisionSet/copy", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m" /* pathName */
};

static emlrtRSInfo fl_emlrtRSI = {
    208,                 /* lineNo */
    "CollisionSet/copy", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m" /* pathName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    207,                 /* lineNo */
    21,                  /* colNo */
    "CollisionSet/copy", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    208,                 /* lineNo */
    78,                  /* colNo */
    "",                  /* aName */
    "CollisionSet/copy", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m", /* pName */
    0                           /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    208,                 /* lineNo */
    44,                  /* colNo */
    "",                  /* aName */
    "CollisionSet/copy", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\CollisionSet.m", /* pName */
    0                           /* checkKind */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    189,         /* lineNo */
    57,          /* colNo */
    "RigidBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    95,          /* lineNo */
    17,          /* colNo */
    "RigidBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pName */
};

/* Function Definitions */
c_robotics_manip_internal_Rigid *
RigidBody_copy(const emlrtStack *sp, c_robotics_manip_internal_Rigid *obj,
               d_robotics_manip_internal_Colli *iobj_0, rigidBodyJoint *iobj_1,
               c_robotics_manip_internal_Rigid *iobj_2)
{
  static const char_T cv1[8] = {'r', 'e', 'v', 'o', 'l', 'u', 't', 'e'};
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  static const int8_T b_iv[6] = {0, 0, 1, 0, 0, 0};
  static const int8_T b_iv1[6] = {0, 0, 0, 0, 0, 1};
  c_robotics_manip_internal_Colli *e_obj;
  c_robotics_manip_internal_Rigid *newbody;
  d_robotics_manip_internal_Colli *d_obj;
  d_robotics_manip_internal_Colli *newObj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_char_T *bodyInput;
  emxArray_char_T *jname;
  real_T c_obj[36];
  real_T poslim_data[12];
  real_T b_obj[9];
  real_T obj_idx_0;
  real_T obj_idx_1;
  real_T obj_idx_2;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  char_T *bodyInput_data;
  char_T *jname_data;
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
  emxInit_char_T(sp, &bodyInput, &rc_emlrtRTEI);
  st.site = &al_emlrtRSI;
  i = bodyInput->size[0] * bodyInput->size[1];
  bodyInput->size[0] = 1;
  bodyInput->size[1] = obj->NameInternal->size[1];
  emxEnsureCapacity_char_T(&st, bodyInput, i, &rc_emlrtRTEI);
  bodyInput_data = bodyInput->data;
  loop_ub = obj->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bodyInput_data[i] = obj->NameInternal->data[i];
  }
  b_st.site = &mb_emlrtRSI;
  newbody = iobj_2;
  b_st.site = &dl_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  if (bodyInput->size[1] == 0) {
    emlrtErrorWithMessageIdR2018a(
        &c_st, &j_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonempty",
        "MATLAB:rigidBody:expectedNonempty", 3, 4, 5, "bname");
  }
  i = iobj_2->NameInternal->size[0] * iobj_2->NameInternal->size[1];
  iobj_2->NameInternal->size[0] = 1;
  iobj_2->NameInternal->size[1] = bodyInput->size[1];
  emxEnsureCapacity_char_T(&st, iobj_2->NameInternal, i, &jb_emlrtRTEI);
  loop_ub = bodyInput->size[1];
  for (i = 0; i < loop_ub; i++) {
    iobj_2->NameInternal->data[i] = bodyInput_data[i];
  }
  emxInit_char_T(&st, &jname, &sc_emlrtRTEI);
  i = jname->size[0] * jname->size[1];
  jname->size[0] = 1;
  jname->size[1] = bodyInput->size[1] + 4;
  emxEnsureCapacity_char_T(&st, jname, i, &sc_emlrtRTEI);
  jname_data = jname->data;
  loop_ub = bodyInput->size[1];
  for (i = 0; i < loop_ub; i++) {
    jname_data[i] = bodyInput_data[i];
  }
  jname_data[bodyInput->size[1]] = '_';
  jname_data[bodyInput->size[1] + 1] = 'j';
  jname_data[bodyInput->size[1] + 2] = 'n';
  jname_data[bodyInput->size[1] + 3] = 't';
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
  iobj_1[0].NameInternal->size[1] = jname->size[1];
  emxEnsureCapacity_char_T(&b_st, iobj_1[0].NameInternal, i, &ob_emlrtRTEI);
  loop_ub = jname->size[1];
  for (i = 0; i < loop_ub; i++) {
    iobj_1[0].NameInternal->data[i] = jname_data[i];
  }
  emxFree_char_T(&b_st, &jname);
  i = iobj_1[0].Type->size[0] * iobj_1[0].Type->size[1];
  iobj_1[0].Type->size[0] = 1;
  iobj_1[0].Type->size[1] = 5;
  emxEnsureCapacity_char_T(&b_st, iobj_1[0].Type, i, &pb_emlrtRTEI);
  for (i = 0; i < 5; i++) {
    iobj_1[0].Type->data[i] = b_cv[i];
  }
  i = bodyInput->size[0] * bodyInput->size[1];
  bodyInput->size[0] = 1;
  bodyInput->size[1] = iobj_1[0].Type->size[1];
  emxEnsureCapacity_char_T(&b_st, bodyInput, i, &qb_emlrtRTEI);
  bodyInput_data = bodyInput->data;
  loop_ub = iobj_1[0].Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    bodyInput_data[i] = iobj_1[0].Type->data[i];
  }
  b_bool = false;
  if (bodyInput->size[1] == 8) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 8) {
        if (bodyInput_data[loop_ub] != cv1[loop_ub]) {
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
    if (bodyInput->size[1] == 9) {
      loop_ub = 0;
      do {
        exitg1 = 0;
        if (loop_ub < 9) {
          if (bodyInput_data[loop_ub] != cv[loop_ub]) {
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
  emxFree_char_T(&b_st, &bodyInput);
  switch (loop_ub) {
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
  iobj_2->JointInternal = &iobj_1[0];
  iobj_2->Index = -1.0;
  iobj_2->ParentIndex = -1.0;
  iobj_2->MassInternal = 1.0;
  iobj_2->CenterOfMassInternal[0] = 0.0;
  iobj_2->CenterOfMassInternal[1] = 0.0;
  iobj_2->CenterOfMassInternal[2] = 0.0;
  for (i = 0; i < 9; i++) {
    b_I[i] = 0;
  }
  b_I[0] = 1;
  b_I[4] = 1;
  b_I[8] = 1;
  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    msubspace_data[i] = 0;
  }
  for (loop_ub = 0; loop_ub < 6; loop_ub++) {
    msubspace_data[loop_ub + 6 * loop_ub] = 1;
  }
  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = msubspace_data[i];
  }
  b_st.site = &dc_emlrtRSI;
  iobj_2->CollisionsInternal =
      CollisionSet_CollisionSet(&b_st, &iobj_0[0], 0.0);
  st.site = &bl_emlrtRSI;
  iobj_2->JointInternal =
      rigidBodyJoint_copy(&st, obj->JointInternal, &iobj_1[1]);
  iobj_2->MassInternal = obj->MassInternal;
  obj_idx_0 = obj->CenterOfMassInternal[0];
  obj_idx_1 = obj->CenterOfMassInternal[1];
  obj_idx_2 = obj->CenterOfMassInternal[2];
  iobj_2->CenterOfMassInternal[0] = obj_idx_0;
  iobj_2->CenterOfMassInternal[1] = obj_idx_1;
  iobj_2->CenterOfMassInternal[2] = obj_idx_2;
  for (i = 0; i < 9; i++) {
    b_obj[i] = obj->InertiaInternal[i];
  }
  for (i = 0; i < 9; i++) {
    iobj_2->InertiaInternal[i] = b_obj[i];
  }
  for (i = 0; i < 36; i++) {
    c_obj[i] = obj->SpatialInertia[i];
  }
  for (i = 0; i < 36; i++) {
    iobj_2->SpatialInertia[i] = c_obj[i];
  }
  st.site = &cl_emlrtRSI;
  d_obj = obj->CollisionsInternal;
  b_st.site = &el_emlrtRSI;
  newObj = CollisionSet_CollisionSet(&b_st, &iobj_0[1], d_obj->MaxElements);
  newObj->Size = d_obj->Size;
  obj_idx_0 = d_obj->Size;
  i = (int32_T)obj_idx_0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, obj_idx_0, mxDOUBLE_CLASS,
                                (int32_T)obj_idx_0, &p_emlrtRTEI, &st);
  for (b_i = 0; b_i < i; b_i++) {
    b_st.site = &fl_emlrtRSI;
    loop_ub = d_obj->CollisionGeometries->size[1] - 1;
    if (b_i > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub, &k_emlrtBCI, &b_st);
    }
    e_obj = d_obj->CollisionGeometries->data[b_i];
    loop_ub = newObj->CollisionGeometries->size[1] - 1;
    if (b_i > loop_ub) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub, &l_emlrtBCI, &st);
    }
    newObj->CollisionGeometries->data[b_i] = e_obj;
  }
  iobj_2->CollisionsInternal = newObj;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return newbody;
}

rigidBodyJoint *RigidBody_get_Joint(const emlrtStack *sp,
                                    c_robotics_manip_internal_Rigid *obj)
{
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->Index == 0.0) {
    st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  return obj->JointInternal;
}

/* End of code generation (RigidBody1.c) */
