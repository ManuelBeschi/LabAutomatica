/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen.c
 *
 * Code generation for function 'fdCodegen'
 *
 */

/* Include files */
#include "fdCodegen.h"
#include "CollisionSet.h"
#include "RigidBodyTree.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_internal_types.h"
#include "fdCodegen_types.h"
#include "handle.h"
#include "rand.h"
#include "rigidBody.h"
#include "rigidBodyJoint.h"
#include "rigidBodyTree1.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    4,                                                             /* lineNo */
    "fdCodegen",                                                   /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\fdCodegen.m" /* pathName
                                                                    */
};

static emlrtRSInfo b_emlrtRSI = {
    6,                                                             /* lineNo */
    "fdCodegen",                                                   /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\fdCodegen.m" /* pathName
                                                                    */
};

static emlrtRSInfo c_emlrtRSI = {
    3,                                                             /* lineNo */
    "fdCodegen",                                                   /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\fdCodegen.m" /* pathName
                                                                    */
};

static emlrtRSInfo d_emlrtRSI = {
    4,               /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo e_emlrtRSI = {
    8,               /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo f_emlrtRSI = {
    9,               /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo g_emlrtRSI = {
    10,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo h_emlrtRSI = {
    12,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo i_emlrtRSI = {
    13,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo j_emlrtRSI = {
    15,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo k_emlrtRSI = {
    22,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo l_emlrtRSI = {
    23,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo m_emlrtRSI = {
    25,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo n_emlrtRSI = {
    26,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo o_emlrtRSI = {
    28,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo p_emlrtRSI = {
    35,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo q_emlrtRSI = {
    36,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo r_emlrtRSI = {
    37,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo s_emlrtRSI = {
    1,               /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo t_emlrtRSI = {
    7,               /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo u_emlrtRSI = {
    16,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo v_emlrtRSI = {
    18,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo w_emlrtRSI = {
    21,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo x_emlrtRSI = {
    29,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo y_emlrtRSI = {
    30,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo ab_emlrtRSI = {
    33,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo bb_emlrtRSI = {
    39,              /* lineNo */
    "getScaraRobot", /* fcnName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pathName
                                                                        */
};

static emlrtRSInfo
    db_emlrtRSI =
        {
            145,                           /* lineNo */
            "rigidBodyTree/rigidBodyTree", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo
    eb_emlrtRSI =
        {
            172,             /* lineNo */
            "rigidBodyTree", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo
    fb_emlrtRSI =
        {
            182,                           /* lineNo */
            "rigidBodyTree/rigidBodyTree", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = {
    141,                           /* lineNo */
    "RigidBodyTree/RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    324,                  /* lineNo */
    "rigidBody/set.Mass", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo kc_emlrtRSI = {
    485,                  /* lineNo */
    "RigidBody/set.Mass", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = {
    334,                          /* lineNo */
    "rigidBody/set.CenterOfMass", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo mc_emlrtRSI = {
    504,                          /* lineNo */
    "RigidBody/set.CenterOfMass", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    339,                     /* lineNo */
    "rigidBody/get.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRSInfo oc_emlrtRSI = {
    475,                     /* lineNo */
    "RigidBody/get.Inertia", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

static emlrtRSInfo gl_emlrtRSI = {
    308,                   /* lineNo */
    "rigidBody/get.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBody.m" /* pathName
                                                                         */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    1,                                                             /* lineNo */
    16,                                                            /* colNo */
    "fdCodegen",                                                   /* fName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\fdCodegen.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    3,                                                             /* lineNo */
    5,                                                             /* colNo */
    "fdCodegen",                                                   /* fName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\fdCodegen.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    25,              /* lineNo */
    1,               /* colNo */
    "getScaraRobot", /* fName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pName
                                                                        */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    12,              /* lineNo */
    1,               /* colNo */
    "getScaraRobot", /* fName */
    "C:\\projects\\didattica\\LabAutomatica\\modelli\\getScaraRobot.m" /* pName
                                                                        */
};

/* Function Definitions */
void fdCodegen(const emlrtStack *sp, const real_T q[2], const real_T qd[2],
               const real_T tau[2], real_T qdd_data[], int32_T qdd_size[1])
{
  static const real_T input[16] = {1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
                                   0.0, 0.0, 1.0, 0.0, 0.0, 0.3, 0.0, 1.0};
  static const char_T b_varargin_1[12] = {'C', 'e', 'n', 't', 'e', 'r',
                                          'O', 'f', 'M', 'a', 's', 's'};
  static const char_T c_varargin_1[7] = {'I', 'n', 'e', 'r', 't', 'i', 'a'};
  static const char_T d_varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  static const char_T varargin_1[4] = {'M', 'a', 's', 's'};
  c_robotics_manip_internal_Rigid lobj_1[3];
  c_robotics_manip_internal_Rigid lobj_7[3];
  c_robotics_manip_internal_Rigid *b_obj;
  c_robotics_manip_internal_Rigid *iobj_1;
  d_robotics_manip_internal_Colli lobj_3[9];
  d_robotics_manip_internal_Colli *iobj_2;
  d_robotics_manip_internal_Rigid *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  f_robotics_manip_internal_Rigid lobj_5[3];
  rigidBody body1;
  rigidBody body2;
  rigidBody bodyEndEffector;
  rigidBodyJoint lobj_2[6];
  rigidBodyJoint lobj_6[5];
  rigidBodyJoint jnt1;
  rigidBodyJoint jnt2;
  rigidBodyJoint *iobj_0;
  rigidBodyJoint *value;
  rigidBodyTree robot;
  real_T b_I[9];
  real_T sc[9];
  real_T dv[6];
  real_T idx[5];
  real_T com_idx_0;
  real_T com_idx_1;
  real_T com_idx_2;
  real_T mass;
  int32_T i;
  int32_T k;
  int8_T c_I[36];
  int8_T d_I[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  c_emxInitMatrix_robotics_manip_(sp, lobj_3, &kb_emlrtRTEI);
  emxInitMatrix_rigidBodyJoint(sp, lobj_2, &kb_emlrtRTEI);
  f_emxInitMatrix_robotics_manip_(sp, lobj_1, &kb_emlrtRTEI);
  emxInitStruct_rigidBodyTree(sp, &robot, &lb_emlrtRTEI);
  f_emxInitMatrix_robotics_manip_(sp, lobj_7, &kb_emlrtRTEI);
  emxInitMatrix_rigidBodyJoint2(sp, lobj_6, &kb_emlrtRTEI);
  d_emxInitMatrix_robotics_manip_(sp, lobj_5, &kb_emlrtRTEI);
  emxInitStruct_rigidBodyJoint(sp, &jnt2, &mb_emlrtRTEI);
  emxInitStruct_rigidBodyJoint(sp, &jnt1, &nb_emlrtRTEI);
  for (i = 0; i < 9; i++) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, true, &lobj_3[i]._pobj0,
                                      (void *)&handle_matlabCodegenDestructor,
                                      NULL, NULL, NULL);
  }
  for (i = 0; i < 9; i++) {
    lobj_3[i]._pobj0.matlabCodegenIsDeleted = true;
  }
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &lobj_1[0]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &lobj_1[1]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &lobj_1[2]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  lobj_1[0]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  lobj_1[1]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  lobj_1[2]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, true, &robot._pobj0._pobj0,
                                    (void *)&handle_matlabCodegenDestructor,
                                    NULL, NULL, NULL);
  robot._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal._pobj2[0]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal._pobj2[1]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal._pobj2[2]._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  robot.TreeInternal._pobj2[0]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  robot.TreeInternal._pobj2[1]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  robot.TreeInternal._pobj2[2]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal._pobj0[0]._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal._pobj0[1]._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  robot.TreeInternal._pobj0[0]._pobj0.matlabCodegenIsDeleted = true;
  robot.TreeInternal._pobj0[1]._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(
      (emlrtCTX)sp, true, &robot.TreeInternal.Base._pobj0._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  robot.TreeInternal.Base._pobj0._pobj0.matlabCodegenIsDeleted = true;
  st.site = &c_emlrtRSI;
  iobj_0 = &lobj_2[0];
  iobj_1 = &lobj_1[0];
  iobj_2 = &lobj_3[0];
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emlrtPushHeapReferenceStackR2021a(&st, true, &lobj_7[0]._pobj0._pobj0,
                                    (void *)&handle_matlabCodegenDestructor,
                                    NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(&st, true, &lobj_7[1]._pobj0._pobj0,
                                    (void *)&handle_matlabCodegenDestructor,
                                    NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(&st, true, &lobj_7[2]._pobj0._pobj0,
                                    (void *)&handle_matlabCodegenDestructor,
                                    NULL, NULL, NULL);
  lobj_7[0]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  lobj_7[1]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  lobj_7[2]._pobj0._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[0]._pobj0.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[1]._pobj0.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[2]._pobj0.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  lobj_5[0]._pobj0.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  lobj_5[1]._pobj0.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  lobj_5[2]._pobj0.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[0].Base.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[1].Base.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  emlrtPushHeapReferenceStackR2021a(
      &st, true, &lobj_5[2].Base.CollisionsInternal._pobj0,
      (void *)&handle_matlabCodegenDestructor, NULL, NULL, NULL);
  lobj_5[0].Base.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  lobj_5[1].Base.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  lobj_5[2].Base.CollisionsInternal._pobj0.matlabCodegenIsDeleted = true;
  b_st.site = &d_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  d_st.site = &cb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  obj = &robot.TreeInternal;
  d_st.site = &gb_emlrtRSI;
  d_st.site = &hb_emlrtRSI;
  i = obj->Base.NameInternal->size[0] * obj->Base.NameInternal->size[1];
  obj->Base.NameInternal->size[0] = 1;
  obj->Base.NameInternal->size[1] = 4;
  emxEnsureCapacity_char_T(&d_st, obj->Base.NameInternal, i, &jb_emlrtRTEI);
  obj->Base.NameInternal->data[0] = 'b';
  obj->Base.NameInternal->data[1] = 'a';
  obj->Base.NameInternal->data[2] = 's';
  obj->Base.NameInternal->data[3] = 'e';
  e_st.site = &cc_emlrtRSI;
  obj->Base.JointInternal =
      rigidBodyJoint_rigidBodyJoint(&e_st, &obj->Base._pobj1);
  obj->Base.Index = -1.0;
  obj->Base.ParentIndex = -1.0;
  obj->Base.MassInternal = 1.0;
  obj->Base.CenterOfMassInternal[0] = 0.0;
  obj->Base.CenterOfMassInternal[1] = 0.0;
  obj->Base.CenterOfMassInternal[2] = 0.0;
  memset(&b_I[0], 0, 9U * sizeof(real_T));
  b_I[0] = 1.0;
  b_I[4] = 1.0;
  b_I[8] = 1.0;
  for (i = 0; i < 9; i++) {
    obj->Base.InertiaInternal[i] = b_I[i];
  }
  for (i = 0; i < 36; i++) {
    c_I[i] = 0;
  }
  for (k = 0; k < 6; k++) {
    c_I[k + 6 * k] = 1;
  }
  for (i = 0; i < 36; i++) {
    obj->Base.SpatialInertia[i] = c_I[i];
  }
  e_st.site = &dc_emlrtRSI;
  obj->Base.CollisionsInternal =
      CollisionSet_CollisionSet(&e_st, &obj->Base._pobj0, 0.0);
  robot.TreeInternal.Base.Index = 0.0;
  d_st.site = &kb_emlrtRSI;
  e_st.site = &vb_emlrtRSI;
  b_rand(idx);
  for (k = 0; k < 5; k++) {
    idx[k] = muDoubleScalarFloor(idx[k] * 62.0) + 1.0;
  }
  for (i = 0; i < 5; i++) {
    mass = idx[i];
    if (mass != (int32_T)muDoubleScalarFloor(mass)) {
      emlrtIntegerCheckR2012b(mass, &emlrtDCI, &e_st);
    }
    if (((int32_T)mass < 1) || ((int32_T)mass > 62)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)mass, 1, 62, &emlrtBCI, &e_st);
    }
  }
  d_st.site = &ib_emlrtRSI;
  robot.TreeInternal.Gravity[0] = 0.0;
  robot.TreeInternal.Gravity[1] = 0.0;
  robot.TreeInternal.Gravity[2] = 0.0;
  d_st.site = &jb_emlrtRSI;
  d_st.site = &lb_emlrtRSI;
  RigidBodyTree_clearAllBodies(
      &d_st, &robot.TreeInternal, &robot.TreeInternal._pobj0[0],
      &robot.TreeInternal._pobj1[0], &robot.TreeInternal._pobj2[0]);
  c_st.site = &fb_emlrtRSI;
  robot.TreeInternal.Base.CollisionsInternal =
      CollisionSet_CollisionSet(&c_st, &robot._pobj0, 10.0);
  b_st.site = &t_emlrtRSI;
  rigidBody_rigidBody(&b_st, &body1, &lobj_5[0], &iobj_2[0], &lobj_6[0],
                      &lobj_7[0]);
  b_st.site = &e_emlrtRSI;
  c_st.site = &jc_emlrtRSI;
  b_obj = body1.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &kc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 4,
        &varargin_1[0]);
  }
  b_obj->MassInternal = 2.0;
  mass = b_obj->MassInternal;
  com_idx_0 = b_obj->CenterOfMassInternal[0];
  com_idx_1 = b_obj->CenterOfMassInternal[1];
  com_idx_2 = b_obj->CenterOfMassInternal[2];
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  sc[0] = 0.0;
  sc[3] = -com_idx_2;
  sc[6] = com_idx_1;
  sc[1] = com_idx_2;
  sc[4] = 0.0;
  sc[7] = -com_idx_0;
  sc[2] = -com_idx_1;
  sc[5] = com_idx_0;
  sc[8] = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i] = b_I[3 * i];
    b_obj->SpatialInertia[6 * i + 1] = b_I[3 * i + 1];
    b_obj->SpatialInertia[6 * i + 2] = b_I[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k] = mass * sc[3 * i];
    b_obj->SpatialInertia[k + 1] = mass * sc[3 * i + 1];
    b_obj->SpatialInertia[k + 2] = mass * sc[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i + 3] = mass * sc[i];
    b_obj->SpatialInertia[6 * i + 4] = mass * sc[i + 3];
    b_obj->SpatialInertia[6 * i + 5] = mass * sc[i + 6];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k + 3] = mass * (real_T)iv[3 * i];
    b_obj->SpatialInertia[k + 4] = mass * (real_T)iv[3 * i + 1];
    b_obj->SpatialInertia[k + 5] = mass * (real_T)iv[3 * i + 2];
  }
  b_st.site = &f_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  b_obj = body1.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &mc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 12,
        &b_varargin_1[0]);
  }
  b_obj->CenterOfMassInternal[0] = 0.0;
  b_obj->CenterOfMassInternal[1] = 0.15;
  b_obj->CenterOfMassInternal[2] = 0.0;
  mass = b_obj->MassInternal;
  com_idx_0 = b_obj->CenterOfMassInternal[0];
  com_idx_1 = b_obj->CenterOfMassInternal[1];
  com_idx_2 = b_obj->CenterOfMassInternal[2];
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  sc[0] = 0.0;
  sc[3] = -com_idx_2;
  sc[6] = com_idx_1;
  sc[1] = com_idx_2;
  sc[4] = 0.0;
  sc[7] = -com_idx_0;
  sc[2] = -com_idx_1;
  sc[5] = com_idx_0;
  sc[8] = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i] = b_I[3 * i];
    b_obj->SpatialInertia[6 * i + 1] = b_I[3 * i + 1];
    b_obj->SpatialInertia[6 * i + 2] = b_I[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k] = mass * sc[3 * i];
    b_obj->SpatialInertia[k + 1] = mass * sc[3 * i + 1];
    b_obj->SpatialInertia[k + 2] = mass * sc[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i + 3] = mass * sc[i];
    b_obj->SpatialInertia[6 * i + 4] = mass * sc[i + 3];
    b_obj->SpatialInertia[6 * i + 5] = mass * sc[i + 6];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k + 3] = mass * (real_T)iv[3 * i];
    b_obj->SpatialInertia[k + 4] = mass * (real_T)iv[3 * i + 1];
    b_obj->SpatialInertia[k + 5] = mass * (real_T)iv[3 * i + 2];
  }
  b_st.site = &g_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_obj = body1.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &oc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 7,
        &c_varargin_1[0]);
  }
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  dv[0] = b_I[0];
  dv[1] = b_I[4];
  dv[3] = b_I[7];
  dv[4] = b_I[6];
  dv[5] = b_I[3];
  dv[2] = 2.0;
  b_st.site = &g_emlrtRSI;
  rigidBody_set_Inertia(&b_st, &body1, dv);
  b_st.site = &h_emlrtRSI;
  c_rigidBodyJoint_rigidBodyJoint(&b_st, &jnt1);
  b_st.site = &i_emlrtRSI;
  rigidBodyJoint_set_HomePosition(&b_st, &jnt1);
  /*  User defined */
  b_st.site = &j_emlrtRSI;
  for (i = 0; i < 16; i++) {
    jnt1.JointToParentTransform[i] = iv1[i];
  }
  for (i = 0; i < 16; i++) {
    d_I[i] = 0;
  }
  d_I[0] = 1;
  d_I[5] = 1;
  d_I[10] = 1;
  d_I[15] = 1;
  for (i = 0; i < 16; i++) {
    jnt1.ChildToJointTransform[i] = d_I[i];
  }
  b_st.site = &u_emlrtRSI;
  rigidBody_set_Joint(&b_st, &body1, &jnt1, &lobj_6[1]);
  b_st.site = &v_emlrtRSI;
  rigidBodyTree_addBody(&b_st, &robot, &body1, &iobj_2[1], &iobj_0[0],
                        &iobj_1[0]);
  b_st.site = &w_emlrtRSI;
  b_rigidBody_rigidBody(&b_st, &body2, &lobj_5[1], &iobj_2[3], &lobj_6[2],
                        &lobj_7[1]);
  b_st.site = &k_emlrtRSI;
  c_st.site = &jc_emlrtRSI;
  b_obj = body2.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &kc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 4,
        &varargin_1[0]);
  }
  b_obj->MassInternal = 1.0;
  mass = b_obj->MassInternal;
  com_idx_0 = b_obj->CenterOfMassInternal[0];
  com_idx_1 = b_obj->CenterOfMassInternal[1];
  com_idx_2 = b_obj->CenterOfMassInternal[2];
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  sc[0] = 0.0;
  sc[3] = -com_idx_2;
  sc[6] = com_idx_1;
  sc[1] = com_idx_2;
  sc[4] = 0.0;
  sc[7] = -com_idx_0;
  sc[2] = -com_idx_1;
  sc[5] = com_idx_0;
  sc[8] = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i] = b_I[3 * i];
    b_obj->SpatialInertia[6 * i + 1] = b_I[3 * i + 1];
    b_obj->SpatialInertia[6 * i + 2] = b_I[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k] = mass * sc[3 * i];
    b_obj->SpatialInertia[k + 1] = mass * sc[3 * i + 1];
    b_obj->SpatialInertia[k + 2] = mass * sc[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i + 3] = mass * sc[i];
    b_obj->SpatialInertia[6 * i + 4] = mass * sc[i + 3];
    b_obj->SpatialInertia[6 * i + 5] = mass * sc[i + 6];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k + 3] = mass * (real_T)iv[3 * i];
    b_obj->SpatialInertia[k + 4] = mass * (real_T)iv[3 * i + 1];
    b_obj->SpatialInertia[k + 5] = mass * (real_T)iv[3 * i + 2];
  }
  b_st.site = &l_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  b_obj = body2.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &mc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 12,
        &b_varargin_1[0]);
  }
  b_obj->CenterOfMassInternal[0] = 0.0;
  b_obj->CenterOfMassInternal[1] = 0.15;
  b_obj->CenterOfMassInternal[2] = 0.0;
  mass = b_obj->MassInternal;
  com_idx_0 = b_obj->CenterOfMassInternal[0];
  com_idx_1 = b_obj->CenterOfMassInternal[1];
  com_idx_2 = b_obj->CenterOfMassInternal[2];
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  sc[0] = 0.0;
  sc[3] = -com_idx_2;
  sc[6] = com_idx_1;
  sc[1] = com_idx_2;
  sc[4] = 0.0;
  sc[7] = -com_idx_0;
  sc[2] = -com_idx_1;
  sc[5] = com_idx_0;
  sc[8] = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i] = b_I[3 * i];
    b_obj->SpatialInertia[6 * i + 1] = b_I[3 * i + 1];
    b_obj->SpatialInertia[6 * i + 2] = b_I[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k] = mass * sc[3 * i];
    b_obj->SpatialInertia[k + 1] = mass * sc[3 * i + 1];
    b_obj->SpatialInertia[k + 2] = mass * sc[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i + 3] = mass * sc[i];
    b_obj->SpatialInertia[6 * i + 4] = mass * sc[i + 3];
    b_obj->SpatialInertia[6 * i + 5] = mass * sc[i + 6];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k + 3] = mass * (real_T)iv[3 * i];
    b_obj->SpatialInertia[k + 4] = mass * (real_T)iv[3 * i + 1];
    b_obj->SpatialInertia[k + 5] = mass * (real_T)iv[3 * i + 2];
  }
  b_st.site = &m_emlrtRSI;
  d_rigidBodyJoint_rigidBodyJoint(&b_st, &jnt2);
  b_st.site = &n_emlrtRSI;
  rigidBodyJoint_set_HomePosition(&b_st, &jnt2);
  /*  User defined */
  b_st.site = &o_emlrtRSI;
  memcpy(&jnt2.JointToParentTransform[0], &input[0], 16U * sizeof(real_T));
  for (i = 0; i < 16; i++) {
    d_I[i] = 0;
  }
  d_I[0] = 1;
  d_I[5] = 1;
  d_I[10] = 1;
  d_I[15] = 1;
  for (i = 0; i < 16; i++) {
    jnt2.ChildToJointTransform[i] = d_I[i];
  }
  b_st.site = &x_emlrtRSI;
  rigidBody_set_Joint(&b_st, &body2, &jnt2, &lobj_6[3]);
  b_st.site = &y_emlrtRSI;
  b_rigidBodyTree_addBody(&b_st, &robot, &body2, &iobj_2[4], &iobj_0[2],
                          &iobj_1[1]);
  /*  Add body2 to body1 */
  b_st.site = &ab_emlrtRSI;
  c_rigidBody_rigidBody(&b_st, &bodyEndEffector, &lobj_5[2], &iobj_2[6],
                        &lobj_6[4], &lobj_7[2]);
  /*  User defined */
  b_st.site = &p_emlrtRSI;
  c_st.site = &gl_emlrtRSI;
  b_obj = bodyEndEffector.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &d_varargin_1[0]);
  }
  value = b_obj->JointInternal;
  b_st.site = &p_emlrtRSI;
  for (i = 0; i < 16; i++) {
    value->JointToParentTransform[i] = input[i];
  }
  for (i = 0; i < 16; i++) {
    d_I[i] = 0;
  }
  d_I[0] = 1;
  d_I[5] = 1;
  d_I[10] = 1;
  d_I[15] = 1;
  for (i = 0; i < 16; i++) {
    value->ChildToJointTransform[i] = d_I[i];
  }
  b_st.site = &q_emlrtRSI;
  c_st.site = &jc_emlrtRSI;
  b_obj = bodyEndEffector.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &kc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 4,
        &varargin_1[0]);
  }
  b_obj->MassInternal = 1.0;
  mass = b_obj->MassInternal;
  com_idx_0 = b_obj->CenterOfMassInternal[0];
  com_idx_1 = b_obj->CenterOfMassInternal[1];
  com_idx_2 = b_obj->CenterOfMassInternal[2];
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  sc[0] = 0.0;
  sc[3] = -com_idx_2;
  sc[6] = com_idx_1;
  sc[1] = com_idx_2;
  sc[4] = 0.0;
  sc[7] = -com_idx_0;
  sc[2] = -com_idx_1;
  sc[5] = com_idx_0;
  sc[8] = 0.0;
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i] = b_I[3 * i];
    b_obj->SpatialInertia[6 * i + 1] = b_I[3 * i + 1];
    b_obj->SpatialInertia[6 * i + 2] = b_I[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k] = mass * sc[3 * i];
    b_obj->SpatialInertia[k + 1] = mass * sc[3 * i + 1];
    b_obj->SpatialInertia[k + 2] = mass * sc[3 * i + 2];
  }
  for (i = 0; i < 3; i++) {
    b_obj->SpatialInertia[6 * i + 3] = mass * sc[i];
    b_obj->SpatialInertia[6 * i + 4] = mass * sc[i + 3];
    b_obj->SpatialInertia[6 * i + 5] = mass * sc[i + 6];
  }
  for (i = 0; i < 3; i++) {
    k = 6 * (i + 3);
    b_obj->SpatialInertia[k + 3] = mass * (real_T)iv[3 * i];
    b_obj->SpatialInertia[k + 4] = mass * (real_T)iv[3 * i + 1];
    b_obj->SpatialInertia[k + 5] = mass * (real_T)iv[3 * i + 2];
  }
  b_st.site = &r_emlrtRSI;
  c_st.site = &nc_emlrtRSI;
  b_obj = bodyEndEffector.BodyInternal;
  if (b_obj->Index == 0.0) {
    d_st.site = &oc_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 7,
        &c_varargin_1[0]);
  }
  for (i = 0; i < 9; i++) {
    b_I[i] = b_obj->InertiaInternal[i];
  }
  dv[0] = b_I[0];
  dv[1] = b_I[4];
  dv[3] = b_I[7];
  dv[4] = b_I[6];
  dv[5] = b_I[3];
  dv[2] = 1.0;
  b_st.site = &r_emlrtRSI;
  rigidBody_set_Inertia(&b_st, &bodyEndEffector, dv);
  b_st.site = &bb_emlrtRSI;
  c_rigidBodyTree_addBody(&b_st, &robot, &bodyEndEffector, &iobj_2[7],
                          &iobj_0[4], &iobj_1[2]);
  /*  Add body2 to body1 */
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[0].Base.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[1].Base.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[2].Base.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[0]._pobj0.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[1]._pobj0.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st,
                                 &lobj_5[2]._pobj0.CollisionsInternal._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st, &lobj_7[0]._pobj0._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st, &lobj_7[1]._pobj0._pobj0);
  b_st.site = &s_emlrtRSI;
  handle_matlabCodegenDestructor(&b_st, &lobj_7[2]._pobj0._pobj0);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
  st.site = &emlrtRSI;
  rigidBodyTree_forwardDynamics(&st, &robot, q, qd, tau, qdd_data,
                                &qdd_size[0]);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &robot.TreeInternal.Base._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &robot.TreeInternal._pobj0[0]._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &robot.TreeInternal._pobj0[1]._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st,
                                 &robot.TreeInternal._pobj2[0]._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st,
                                 &robot.TreeInternal._pobj2[1]._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st,
                                 &robot.TreeInternal._pobj2[2]._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &robot._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &lobj_1[0]._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &lobj_1[1]._pobj0._pobj0);
  st.site = &b_emlrtRSI;
  handle_matlabCodegenDestructor(&st, &lobj_1[2]._pobj0._pobj0);
  for (i = 0; i < 9; i++) {
    st.site = &b_emlrtRSI;
    handle_matlabCodegenDestructor(&st, &lobj_3[i]._pobj0);
  }
  emxFreeStruct_rigidBodyJoint(sp, &jnt1);
  emxFreeStruct_rigidBodyJoint(sp, &jnt2);
  f_emxFreeMatrix_robotics_manip_(sp, lobj_5);
  emxFreeMatrix_rigidBodyJoint2(sp, lobj_6);
  d_emxFreeMatrix_robotics_manip_(sp, lobj_7);
  emxFreeStruct_rigidBodyTree(sp, &robot);
  d_emxFreeMatrix_robotics_manip_(sp, lobj_1);
  emxFreeMatrix_rigidBodyJoint(sp, lobj_2);
  c_emxFreeMatrix_robotics_manip_(sp, lobj_3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (fdCodegen.c) */
