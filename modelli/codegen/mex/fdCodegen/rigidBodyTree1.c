/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rigidBodyTree1.c
 *
 * Code generation for function 'rigidBodyTree1'
 *
 */

/* Include files */
#include "rigidBodyTree1.h"
#include "RigidBody1.h"
#include "RigidBodyTree.h"
#include "RigidBodyTreeDynamics.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_internal_types.h"
#include "fdCodegen_types.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    fk_emlrtRSI =
        {
            235,                     /* lineNo */
            "rigidBodyTree/addBody", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo gk_emlrtRSI = {
    205,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo hk_emlrtRSI = {
    209,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ik_emlrtRSI = {
    213,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo jk_emlrtRSI = {
    216,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo kk_emlrtRSI = {
    218,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo lk_emlrtRSI = {
    251,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo mk_emlrtRSI = {
    253,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = {
    254,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = {
    261,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo pk_emlrtRSI = {
    262,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo qk_emlrtRSI = {
    229,                     /* lineNo */
    "RigidBodyTree/addBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo uk_emlrtRSI = {
    1484,                                  /* lineNo */
    "RigidBodyTree/validateInputBodyName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo vk_emlrtRSI = {
    1488,                                  /* lineNo */
    "RigidBodyTree/validateInputBodyName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

static emlrtRSInfo
    hl_emlrtRSI =
        {
            1027,                            /* lineNo */
            "rigidBodyTree/forwardDynamics", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo
    il_emlrtRSI =
        {
            1028,                            /* lineNo */
            "rigidBodyTree/forwardDynamics", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo
    jl_emlrtRSI =
        {
            1029,                            /* lineNo */
            "rigidBodyTree/forwardDynamics", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pathName */
};

static emlrtRSInfo tl_emlrtRSI = {
    422,                                        /* lineNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo ul_emlrtRSI = {
    425,                                        /* lineNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo vl_emlrtRSI = {
    428,                                        /* lineNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo ho_emlrtRSI = {
    20,                /* lineNo */
    "specialCholesky", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m" /* pathName */
};

static emlrtRSInfo io_emlrtRSI = {
    39,                /* lineNo */
    "specialCholesky", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m" /* pathName */
};

static emlrtRSInfo jo_emlrtRSI = {
    40,     /* lineNo */
    "tril", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\tril.m" /* pathName
                                                                       */
};

static emlrtRSInfo ko_emlrtRSI = {
    41,     /* lineNo */
    "tril", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\tril.m" /* pathName
                                                                       */
};

static emlrtDCInfo e_emlrtDCI = {
    231,                     /* lineNo */
    24,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    240,                     /* lineNo */
    36,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,                       /* iFirst */
    3,                       /* iLast */
    240,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    253,                     /* lineNo */
    36,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,                       /* iFirst */
    3,                       /* iLast */
    253,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    254,                     /* lineNo */
    36,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,                       /* iFirst */
    3,                       /* iLast */
    254,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    256,                     /* lineNo */
    36,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,                       /* iFirst */
    3,                       /* iLast */
    256,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    257,                     /* lineNo */
    36,                      /* colNo */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    1                            /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    1,                       /* iFirst */
    3,                       /* iLast */
    257,                     /* lineNo */
    36,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    0,                       /* iFirst */
    2,                       /* iLast */
    231,                     /* lineNo */
    24,                      /* colNo */
    "",                      /* aName */
    "RigidBodyTree/addBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    3                            /* checkKind */
};

static emlrtRTEInfo q_emlrtRTEI = {
    19,                /* lineNo */
    9,                 /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    442,                                        /* lineNo */
    21,                                         /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    432,                                        /* lineNo */
    21,                                         /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo k_emlrtDCI = {
    425,                                        /* lineNo */
    104,                                        /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    425,                                        /* lineNo */
    104,                                        /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    4                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    21,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    23,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    7,                 /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    9,                 /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    21,                /* lineNo */
    16,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    433,                                        /* lineNo */
    31,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    433,                                        /* lineNo */
    33,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    433,                                        /* lineNo */
    19,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    27,                /* lineNo */
    16,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    20,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    22,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    27,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    29,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    11,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    23,                /* lineNo */
    13,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    23,                /* lineNo */
    13,                /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    434,                                        /* lineNo */
    28,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    443,                                        /* lineNo */
    28,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    24,                /* lineNo */
    20,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    436,                                        /* lineNo */
    42,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    436,                                        /* lineNo */
    44,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    436,                                        /* lineNo */
    23,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    436,                                        /* lineNo */
    23,                                         /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    448,                                        /* lineNo */
    31,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    448,                                        /* lineNo */
    33,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    448,                                        /* lineNo */
    19,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    445,                                        /* lineNo */
    37,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    445,                                        /* lineNo */
    39,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    445,                                        /* lineNo */
    39,                                         /* colNo */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    445,                                        /* lineNo */
    44,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    445,                                        /* lineNo */
    23,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    24,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    26,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    33,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    35,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    40,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    42,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    15,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    31,                /* lineNo */
    15,                /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    31,                /* lineNo */
    17,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    31,                /* lineNo */
    17,                /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    437,                                        /* lineNo */
    32,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    34,                /* lineNo */
    20,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    34,                /* lineNo */
    20,                /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    1                              /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                         /* iFirst */
    -1,                                         /* iLast */
    446,                                        /* lineNo */
    32,                                         /* colNo */
    "",                                         /* aName */
    "RigidBodyTreeDynamics/forwardDynamicsCRB", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    32,                /* lineNo */
    24,                /* colNo */
    "",                /* aName */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m", /* pName */
    0                              /* checkKind */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    251,             /* lineNo */
    24,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    205,             /* lineNo */
    43,              /* colNo */
    "RigidBodyTree", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    425,                     /* lineNo */
    98,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo
    wc_emlrtRTEI =
        {
            948,             /* lineNo */
            26,              /* colNo */
            "rigidBodyTree", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTre"
            "e.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    17,                /* lineNo */
    1,                 /* colNo */
    "specialCholesky", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\specialCholesky.m" /* pName */
};

/* Function Definitions */
void b_rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                             rigidBody *bodyin,
                             d_robotics_manip_internal_Colli *iobj_0,
                             rigidBodyJoint *iobj_1,
                             c_robotics_manip_internal_Rigid *iobj_2)
{
  static const char_T b[5] = {'b', 'o', 'd', 'y', '1'};
  static const char_T b_cv[5] = {'b', 'o', 'd', 'y', '1'};
  static const char_T cv1[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  c_robotics_manip_internal_Rigid *b_bodyin;
  c_robotics_manip_internal_Rigid *body;
  d_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *bname;
  rigidBodyJoint *jnt;
  real_T bid;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  int32_T pid;
  char_T *bname_data;
  boolean_T b_bool;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &bname, &oc_emlrtRTEI);
  st.site = &fk_emlrtRSI;
  b_obj = &obj->TreeInternal;
  b_bodyin = bodyin->BodyInternal;
  b_st.site = &gk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_bodyin->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_bodyin->NameInternal->data[i];
  }
  b_st.site = &gk_emlrtRSI;
  bid = c_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > -1.0) {
    b_st.site = &hk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = b_bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = b_bodyin->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = b_bodyin->NameInternal->data[i];
    }
    b_st.site = &hk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:BodyNameCollision",
        "robotics:robotmanip:rigidbodytree:BodyNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  b_st.site = &ik_emlrtRSI;
  c_st.site = &uk_emlrtRSI;
  pid = -1;
  d_st.site = &sk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_obj->Base.NameInternal->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 5) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 5) {
        if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
    pid = 0;
  } else {
    bid = obj->TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
                                  &n_emlrtRTEI, &c_st);
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)bid - 1)) {
      d_st.site = &tk_emlrtRSI;
      if (b_i > 2) {
        emlrtDynamicBoundsCheckR2012b(3, 0, 2, &i_emlrtBCI, &d_st);
      }
      body = b_obj->Bodies[b_i];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
      bname_data = bname->data;
      loop_ub = body->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname_data[i] = body->NameInternal->data[i];
      }
      b_bool = false;
      if (bname->size[1] == 5) {
        loop_ub = 0;
        do {
          exitg1 = 0;
          if (loop_ub < 5) {
            if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
        pid = b_i + 1;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }
  if (pid == -1) {
    c_st.site = &vk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "robotics:robotmanip:rigidbodytree:BodyNotFound",
        "robotics:robotmanip:rigidbodytree:BodyNotFound", 3, 4, 5, &b[0]);
  }
  b_st.site = &jk_emlrtRSI;
  if (b_bodyin->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = b_bodyin->JointInternal;
  b_st.site = &jk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->NameInternal->data[i];
  }
  b_st.site = &jk_emlrtRSI;
  bid = d_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > 0.0) {
    b_st.site = &kk_emlrtRSI;
    if (b_bodyin->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = b_bodyin->JointInternal;
    b_st.site = &kk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = jnt->NameInternal->data[i];
    }
    b_st.site = &kk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:JointNameCollision",
        "robotics:robotmanip:rigidbodytree:JointNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  bid = obj->TreeInternal.NumBodies + 1.0;
  b_st.site = &qk_emlrtRSI;
  body = RigidBody_copy(&b_st, b_bodyin, &(&iobj_0[0])[0], &(&iobj_1[0])[0],
                        iobj_2);
  if (bid != (int32_T)muDoubleScalarFloor(bid)) {
    emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, &st);
  }
  if (((int32_T)bid - 1 < 0) || ((int32_T)bid - 1 > 2)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)bid - 1, 0, 2, &h_emlrtBCI, &st);
  }
  obj->TreeInternal.Bodies[(int32_T)bid - 1] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
    emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, &st);
  }
  i = (int32_T)body->Index;
  if ((i < 1) || (i > 3)) {
    emlrtDynamicBoundsCheckR2012b(i, 1, 3, &c_emlrtBCI, &st);
  }
  body->JointInternal->InTree = true;
  obj->TreeInternal.NumBodies++;
  b_st.site = &lk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->Type->size[1];
  emxEnsureCapacity_char_T(&st, bname, i, &nc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->Type->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 5) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 5) {
        if (bname_data[loop_ub] != cv1[loop_ub]) {
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
  emxFree_char_T(&st, &bname);
  if (!b_bool) {
    obj->TreeInternal.NumNonFixedBodies++;
    b_st.site = &mk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &d_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.PositionDoFMap[loop_ub] =
        obj->TreeInternal.PositionNumber + 1.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 3] =
        obj->TreeInternal.PositionNumber + jnt->PositionNumber;
    b_st.site = &nk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &e_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.VelocityDoFMap[loop_ub] =
        obj->TreeInternal.VelocityNumber + 1.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 3] =
        obj->TreeInternal.VelocityNumber + jnt->VelocityNumber;
  } else {
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &f_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.PositionDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 2] = -1.0;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &g_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.VelocityDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 2] = -1.0;
  }
  b_st.site = &ok_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.PositionNumber += jnt->PositionNumber;
  b_st.site = &pk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.VelocityNumber += jnt->VelocityNumber;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                             rigidBody *bodyin,
                             d_robotics_manip_internal_Colli *iobj_0,
                             rigidBodyJoint *iobj_1,
                             c_robotics_manip_internal_Rigid *iobj_2)
{
  static const char_T b[5] = {'b', 'o', 'd', 'y', '2'};
  static const char_T b_cv[5] = {'b', 'o', 'd', 'y', '2'};
  static const char_T cv1[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  c_robotics_manip_internal_Rigid *b_bodyin;
  c_robotics_manip_internal_Rigid *body;
  d_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *bname;
  rigidBodyJoint *jnt;
  real_T bid;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  int32_T pid;
  char_T *bname_data;
  boolean_T b_bool;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &bname, &oc_emlrtRTEI);
  st.site = &fk_emlrtRSI;
  b_obj = &obj->TreeInternal;
  b_bodyin = bodyin->BodyInternal;
  b_st.site = &gk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_bodyin->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_bodyin->NameInternal->data[i];
  }
  b_st.site = &gk_emlrtRSI;
  bid = c_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > -1.0) {
    b_st.site = &hk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = b_bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = b_bodyin->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = b_bodyin->NameInternal->data[i];
    }
    b_st.site = &hk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:BodyNameCollision",
        "robotics:robotmanip:rigidbodytree:BodyNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  b_st.site = &ik_emlrtRSI;
  c_st.site = &uk_emlrtRSI;
  pid = -1;
  d_st.site = &sk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_obj->Base.NameInternal->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 5) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 5) {
        if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
    pid = 0;
  } else {
    bid = obj->TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
                                  &n_emlrtRTEI, &c_st);
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)bid - 1)) {
      d_st.site = &tk_emlrtRSI;
      if (b_i > 2) {
        emlrtDynamicBoundsCheckR2012b(3, 0, 2, &i_emlrtBCI, &d_st);
      }
      body = b_obj->Bodies[b_i];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
      bname_data = bname->data;
      loop_ub = body->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname_data[i] = body->NameInternal->data[i];
      }
      b_bool = false;
      if (bname->size[1] == 5) {
        loop_ub = 0;
        do {
          exitg1 = 0;
          if (loop_ub < 5) {
            if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
        pid = b_i + 1;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }
  if (pid == -1) {
    c_st.site = &vk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "robotics:robotmanip:rigidbodytree:BodyNotFound",
        "robotics:robotmanip:rigidbodytree:BodyNotFound", 3, 4, 5, &b[0]);
  }
  b_st.site = &jk_emlrtRSI;
  if (b_bodyin->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = b_bodyin->JointInternal;
  b_st.site = &jk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->NameInternal->data[i];
  }
  b_st.site = &jk_emlrtRSI;
  bid = d_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > 0.0) {
    b_st.site = &kk_emlrtRSI;
    if (b_bodyin->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = b_bodyin->JointInternal;
    b_st.site = &kk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = jnt->NameInternal->data[i];
    }
    b_st.site = &kk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:JointNameCollision",
        "robotics:robotmanip:rigidbodytree:JointNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  bid = obj->TreeInternal.NumBodies + 1.0;
  b_st.site = &qk_emlrtRSI;
  body = RigidBody_copy(&b_st, b_bodyin, &(&iobj_0[0])[0], &(&iobj_1[0])[0],
                        iobj_2);
  if (bid != (int32_T)muDoubleScalarFloor(bid)) {
    emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, &st);
  }
  if (((int32_T)bid - 1 < 0) || ((int32_T)bid - 1 > 2)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)bid - 1, 0, 2, &h_emlrtBCI, &st);
  }
  obj->TreeInternal.Bodies[(int32_T)bid - 1] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
    emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, &st);
  }
  i = (int32_T)body->Index;
  if ((i < 1) || (i > 3)) {
    emlrtDynamicBoundsCheckR2012b(i, 1, 3, &c_emlrtBCI, &st);
  }
  body->JointInternal->InTree = true;
  obj->TreeInternal.NumBodies++;
  b_st.site = &lk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->Type->size[1];
  emxEnsureCapacity_char_T(&st, bname, i, &nc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->Type->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 5) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 5) {
        if (bname_data[loop_ub] != cv1[loop_ub]) {
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
  emxFree_char_T(&st, &bname);
  if (!b_bool) {
    obj->TreeInternal.NumNonFixedBodies++;
    b_st.site = &mk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &d_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.PositionDoFMap[loop_ub] =
        obj->TreeInternal.PositionNumber + 1.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 3] =
        obj->TreeInternal.PositionNumber + jnt->PositionNumber;
    b_st.site = &nk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &e_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.VelocityDoFMap[loop_ub] =
        obj->TreeInternal.VelocityNumber + 1.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 3] =
        obj->TreeInternal.VelocityNumber + jnt->VelocityNumber;
  } else {
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &f_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.PositionDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 2] = -1.0;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &g_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.VelocityDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 2] = -1.0;
  }
  b_st.site = &ok_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.PositionNumber += jnt->PositionNumber;
  b_st.site = &pk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.VelocityNumber += jnt->VelocityNumber;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void rigidBodyTree_addBody(const emlrtStack *sp, rigidBodyTree *obj,
                           rigidBody *bodyin,
                           d_robotics_manip_internal_Colli *iobj_0,
                           rigidBodyJoint *iobj_1,
                           c_robotics_manip_internal_Rigid *iobj_2)
{
  static const char_T cv1[5] = {'f', 'i', 'x', 'e', 'd'};
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  static const char_T b[4] = {'b', 'a', 's', 'e'};
  static const char_T b_cv[4] = {'b', 'a', 's', 'e'};
  c_robotics_manip_internal_Rigid *b_bodyin;
  c_robotics_manip_internal_Rigid *body;
  d_robotics_manip_internal_Rigid *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_char_T *bname;
  rigidBodyJoint *jnt;
  real_T bid;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T loop_ub;
  int32_T pid;
  char_T *bname_data;
  boolean_T b_bool;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_char_T(sp, &bname, &oc_emlrtRTEI);
  st.site = &fk_emlrtRSI;
  b_obj = &obj->TreeInternal;
  b_bodyin = bodyin->BodyInternal;
  b_st.site = &gk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_bodyin->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_bodyin->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_bodyin->NameInternal->data[i];
  }
  b_st.site = &gk_emlrtRSI;
  bid = c_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > -1.0) {
    b_st.site = &hk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = b_bodyin->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &mc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = b_bodyin->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = b_bodyin->NameInternal->data[i];
    }
    b_st.site = &hk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:BodyNameCollision",
        "robotics:robotmanip:rigidbodytree:BodyNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  b_st.site = &ik_emlrtRSI;
  c_st.site = &uk_emlrtRSI;
  pid = -1;
  d_st.site = &sk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = b_obj->Base.NameInternal->size[1];
  emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = b_obj->Base.NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = b_obj->Base.NameInternal->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 4) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 4) {
        if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
    pid = 0;
  } else {
    bid = obj->TreeInternal.NumBodies;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, bid, mxDOUBLE_CLASS, (int32_T)bid,
                                  &n_emlrtRTEI, &c_st);
    b_i = 0;
    exitg2 = false;
    while ((!exitg2) && (b_i <= (int32_T)bid - 1)) {
      d_st.site = &tk_emlrtRSI;
      if (b_i > 2) {
        emlrtDynamicBoundsCheckR2012b(3, 0, 2, &i_emlrtBCI, &d_st);
      }
      body = b_obj->Bodies[b_i];
      i = bname->size[0] * bname->size[1];
      bname->size[0] = 1;
      bname->size[1] = body->NameInternal->size[1];
      emxEnsureCapacity_char_T(&d_st, bname, i, &mc_emlrtRTEI);
      bname_data = bname->data;
      loop_ub = body->NameInternal->size[1];
      for (i = 0; i < loop_ub; i++) {
        bname_data[i] = body->NameInternal->data[i];
      }
      b_bool = false;
      if (bname->size[1] == 4) {
        loop_ub = 0;
        do {
          exitg1 = 0;
          if (loop_ub < 4) {
            if (bname_data[loop_ub] != b_cv[loop_ub]) {
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
        pid = b_i + 1;
        exitg2 = true;
      } else {
        b_i++;
      }
    }
  }
  if (pid == -1) {
    c_st.site = &vk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI, "robotics:robotmanip:rigidbodytree:BodyNotFound",
        "robotics:robotmanip:rigidbodytree:BodyNotFound", 3, 4, 4, &b[0]);
  }
  b_st.site = &jk_emlrtRSI;
  if (b_bodyin->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = b_bodyin->JointInternal;
  b_st.site = &jk_emlrtRSI;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->NameInternal->size[1];
  emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->NameInternal->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->NameInternal->data[i];
  }
  b_st.site = &jk_emlrtRSI;
  bid = d_RigidBodyTree_findBodyIndexBy(&b_st, &obj->TreeInternal, bname);
  if (bid > 0.0) {
    b_st.site = &kk_emlrtRSI;
    if (b_bodyin->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = b_bodyin->JointInternal;
    b_st.site = &kk_emlrtRSI;
    i = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = jnt->NameInternal->size[1];
    emxEnsureCapacity_char_T(&b_st, bname, i, &cc_emlrtRTEI);
    bname_data = bname->data;
    loop_ub = jnt->NameInternal->size[1];
    for (i = 0; i < loop_ub; i++) {
      bname_data[i] = jnt->NameInternal->data[i];
    }
    b_st.site = &kk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &b_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbodytree:JointNameCollision",
        "robotics:robotmanip:rigidbodytree:JointNameCollision", 3, 4,
        bname->size[1], &bname_data[0]);
  }
  bid = obj->TreeInternal.NumBodies + 1.0;
  b_st.site = &qk_emlrtRSI;
  body = RigidBody_copy(&b_st, b_bodyin, &(&iobj_0[0])[0], &(&iobj_1[0])[0],
                        iobj_2);
  if (bid != (int32_T)muDoubleScalarFloor(bid)) {
    emlrtIntegerCheckR2012b(bid, &e_emlrtDCI, &st);
  }
  if (((int32_T)bid - 1 < 0) || ((int32_T)bid - 1 > 2)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)bid - 1, 0, 2, &h_emlrtBCI, &st);
  }
  obj->TreeInternal.Bodies[(int32_T)bid - 1] = body;
  body->Index = bid;
  body->ParentIndex = pid;
  if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
    emlrtIntegerCheckR2012b(body->Index, &f_emlrtDCI, &st);
  }
  i = (int32_T)body->Index;
  if ((i < 1) || (i > 3)) {
    emlrtDynamicBoundsCheckR2012b(i, 1, 3, &c_emlrtBCI, &st);
  }
  body->JointInternal->InTree = true;
  obj->TreeInternal.NumBodies++;
  b_st.site = &lk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  i = bname->size[0] * bname->size[1];
  bname->size[0] = 1;
  bname->size[1] = jnt->Type->size[1];
  emxEnsureCapacity_char_T(&st, bname, i, &nc_emlrtRTEI);
  bname_data = bname->data;
  loop_ub = jnt->Type->size[1];
  for (i = 0; i < loop_ub; i++) {
    bname_data[i] = jnt->Type->data[i];
  }
  b_bool = false;
  if (bname->size[1] == 5) {
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 5) {
        if (bname_data[loop_ub] != cv1[loop_ub]) {
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
  emxFree_char_T(&st, &bname);
  if (!b_bool) {
    obj->TreeInternal.NumNonFixedBodies++;
    b_st.site = &mk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &g_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &d_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.PositionDoFMap[loop_ub] =
        obj->TreeInternal.PositionNumber + 1.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 3] =
        obj->TreeInternal.PositionNumber + jnt->PositionNumber;
    b_st.site = &nk_emlrtRSI;
    if (body->Index == 0.0) {
      c_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = body->JointInternal;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &h_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &e_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index - 1;
    obj->TreeInternal.VelocityDoFMap[loop_ub] =
        obj->TreeInternal.VelocityNumber + 1.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 3] =
        obj->TreeInternal.VelocityNumber + jnt->VelocityNumber;
  } else {
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &i_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &f_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.PositionDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.PositionDoFMap[loop_ub + 2] = -1.0;
    if (body->Index != (int32_T)muDoubleScalarFloor(body->Index)) {
      emlrtIntegerCheckR2012b(body->Index, &j_emlrtDCI, &st);
    }
    if (((int32_T)body->Index < 1) || ((int32_T)body->Index > 3)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)body->Index, 1, 3, &g_emlrtBCI,
                                    &st);
    }
    loop_ub = (int32_T)body->Index;
    obj->TreeInternal.VelocityDoFMap[loop_ub - 1] = 0.0;
    obj->TreeInternal.VelocityDoFMap[loop_ub + 2] = -1.0;
  }
  b_st.site = &ok_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.PositionNumber += jnt->PositionNumber;
  b_st.site = &pk_emlrtRSI;
  if (body->Index == 0.0) {
    c_st.site = &wk_emlrtRSI;
    emlrtErrorWithMessageIdR2018a(
        &c_st, &emlrtRTEI,
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
        "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
        &varargin_1[0]);
  }
  jnt = body->JointInternal;
  obj->TreeInternal.VelocityNumber += jnt->VelocityNumber;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void rigidBodyTree_forwardDynamics(const emlrtStack *sp, rigidBodyTree *obj,
                                   const real_T varargin_1[2],
                                   const real_T varargin_2[2],
                                   const real_T varargin_3[2],
                                   real_T qddot_data[], int32_T *qddot_size)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *r2;
  emxArray_real_T *H;
  emxArray_real_T *fext;
  emxArray_real_T *lambda;
  emxArray_real_T *q;
  emxArray_real_T *qdot;
  emxArray_real_T *r;
  emxArray_real_T *tau;
  real_T b_j;
  real_T k;
  real_T vNum;
  real_T *H_data;
  real_T *lambda_data;
  real_T *r1;
  real_T *tau_data;
  int32_T i;
  int32_T iend;
  int32_T j;
  int32_T loop_ub_tmp;
  int32_T m;
  int32_T n;
  boolean_T guard1 = false;
  boolean_T *r3;
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
  emxInit_real_T(sp, &fext, 2, &wc_emlrtRTEI);
  emxInit_real_T(sp, &q, 1, &wc_emlrtRTEI);
  emxInit_real_T(sp, &qdot, 1, &wc_emlrtRTEI);
  emxInit_real_T(sp, &tau, 1, &wc_emlrtRTEI);
  emxInit_real_T(sp, &lambda, 2, &wc_emlrtRTEI);
  emxInit_real_T(sp, &H, 2, &xc_emlrtRTEI);
  st.site = &hl_emlrtRSI;
  c_RigidBodyTree_validateDynamic(&st, &obj->TreeInternal, varargin_1,
                                  varargin_2, varargin_3, q, qdot, tau, fext);
  tau_data = tau->data;
  st.site = &il_emlrtRSI;
  b_st.site = &tl_emlrtRSI;
  c_RigidBodyTreeDynamics_massMat(&b_st, &obj->TreeInternal, (real_T *)q->data,
                                  H, lambda);
  lambda_data = lambda->data;
  H_data = H->data;
  vNum = obj->TreeInternal.VelocityNumber;
  if (!(vNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(vNum, &l_emlrtDCI, &st);
  }
  if (vNum != (int32_T)muDoubleScalarFloor(vNum)) {
    emlrtIntegerCheckR2012b(vNum, &k_emlrtDCI, &st);
  }
  emxInit_real_T(&st, &r, 1, &tc_emlrtRTEI);
  loop_ub_tmp = (int32_T)vNum;
  iend = r->size[0];
  r->size[0] = (int32_T)vNum;
  emxEnsureCapacity_real_T(&st, r, iend, &tc_emlrtRTEI);
  r1 = r->data;
  for (iend = 0; iend < loop_ub_tmp; iend++) {
    r1[iend] = 0.0;
  }
  b_st.site = &ul_emlrtRSI;
  c_RigidBodyTreeDynamics_inverse(&b_st, &obj->TreeInternal, (real_T *)q->data,
                                  (real_T *)qdot->data, r, fext, qddot_data,
                                  qddot_size);
  *qddot_size = tau->size[0];
  m = tau->size[0];
  emxFree_real_T(&st, &r);
  emxFree_real_T(&st, &qdot);
  emxFree_real_T(&st, &q);
  emxFree_real_T(&st, &fext);
  for (iend = 0; iend < m; iend++) {
    qddot_data[iend] = tau_data[iend] - qddot_data[iend];
  }
  emxFree_real_T(&st, &tau);
  b_st.site = &vl_emlrtRSI;
  if ((H->size[0] == 0) || (H->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(H->size[0], H->size[1]);
  }
  emlrtForLoopVectorCheckR2021a(n, -1.0, 1.0, mxDOUBLE_CLASS, n, &q_emlrtRTEI,
                                &b_st);
  for (i = 0; i < n; i++) {
    m = n - i;
    c_st.site = &ho_emlrtRSI;
    if ((m < 1) || (m > H->size[0])) {
      emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &m_emlrtBCI, &c_st);
    }
    if (m > H->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m, 1, H->size[1], &n_emlrtBCI, &c_st);
    }
    k = H_data[(m + H->size[0] * (m - 1)) - 1];
    if (k < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &f_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    if (m > H->size[0]) {
      emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &o_emlrtBCI, &c_st);
    }
    if (m > H->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m, 1, H->size[1], &p_emlrtBCI, &c_st);
    }
    H_data[(m + H->size[0] * (m - 1)) - 1] = muDoubleScalarSqrt(k);
    if (m > lambda->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m, 1, lambda->size[1], &q_emlrtBCI, &b_st);
    }
    k = lambda_data[m - 1];
    while (k > 0.0) {
      if (m > H->size[0]) {
        emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &v_emlrtBCI, &b_st);
      }
      if (((int32_T)k < 1) || ((int32_T)k > H->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[1], &w_emlrtBCI,
                                      &b_st);
      }
      if (m > H->size[0]) {
        emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &x_emlrtBCI, &b_st);
      }
      if (m > H->size[1]) {
        emlrtDynamicBoundsCheckR2012b(m, 1, H->size[1], &y_emlrtBCI, &b_st);
      }
      if (m > H->size[0]) {
        emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &ab_emlrtBCI, &b_st);
      }
      if (k != (int32_T)muDoubleScalarFloor(k)) {
        emlrtIntegerCheckR2012b(k, &m_emlrtDCI, &b_st);
      }
      if (((int32_T)k < 1) || ((int32_T)k > H->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[1], &bb_emlrtBCI,
                                      &b_st);
      }
      H_data[(m + H->size[0] * ((int32_T)k - 1)) - 1] /=
          H_data[(m + H->size[0] * (m - 1)) - 1];
      if (((int32_T)k < 1) || ((int32_T)k > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, lambda->size[1],
                                      &eb_emlrtBCI, &b_st);
      }
      k = lambda_data[(int32_T)k - 1];
    }
    if (m > lambda->size[1]) {
      emlrtDynamicBoundsCheckR2012b(m, 1, lambda->size[1], &u_emlrtBCI, &b_st);
    }
    k = lambda_data[m - 1];
    while (k > 0.0) {
      b_j = k;
      while (b_j > 0.0) {
        if (((int32_T)k < 1) || ((int32_T)k > H->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[0], &pb_emlrtBCI,
                                        &b_st);
        }
        if (((int32_T)b_j < 1) || ((int32_T)b_j > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, H->size[1],
                                        &qb_emlrtBCI, &b_st);
        }
        if (m > H->size[0]) {
          emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &rb_emlrtBCI, &b_st);
        }
        if (((int32_T)k < 1) || ((int32_T)k > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[1], &sb_emlrtBCI,
                                        &b_st);
        }
        if (m > H->size[0]) {
          emlrtDynamicBoundsCheckR2012b(m, 1, H->size[0], &tb_emlrtBCI, &b_st);
        }
        if (((int32_T)b_j < 1) || ((int32_T)b_j > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, H->size[1],
                                        &ub_emlrtBCI, &b_st);
        }
        if (k != (int32_T)muDoubleScalarFloor(k)) {
          emlrtIntegerCheckR2012b(k, &p_emlrtDCI, &b_st);
        }
        if (((int32_T)k < 1) || ((int32_T)k > H->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[0], &vb_emlrtBCI,
                                        &b_st);
        }
        if (b_j != (int32_T)muDoubleScalarFloor(b_j)) {
          emlrtIntegerCheckR2012b(b_j, &q_emlrtDCI, &b_st);
        }
        if (((int32_T)b_j < 1) || ((int32_T)b_j > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, H->size[1],
                                        &wb_emlrtBCI, &b_st);
        }
        H_data[((int32_T)k + H->size[0] * ((int32_T)b_j - 1)) - 1] -=
            H_data[(m + H->size[0] * ((int32_T)k - 1)) - 1] *
            H_data[(m + H->size[0] * ((int32_T)b_j - 1)) - 1];
        if (((int32_T)b_j < 1) || ((int32_T)b_j > lambda->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, lambda->size[1],
                                        &bc_emlrtBCI, &b_st);
        }
        b_j = lambda_data[(int32_T)b_j - 1];
      }
      if (k != (int32_T)muDoubleScalarFloor(k)) {
        emlrtIntegerCheckR2012b(k, &r_emlrtDCI, &b_st);
      }
      if (((int32_T)k < 1) || ((int32_T)k > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, lambda->size[1],
                                      &yb_emlrtBCI, &b_st);
      }
      k = lambda_data[(int32_T)k - 1];
    }
  }
  c_st.site = &io_emlrtRSI;
  m = H->size[0];
  n = H->size[1];
  if ((H->size[0] != 0) && (H->size[1] != 0) && (1 < H->size[1])) {
    iend = 1;
    d_st.site = &jo_emlrtRSI;
    if (H->size[1] > 2147483646) {
      e_st.site = &id_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (j = 2; j <= n; j++) {
      d_st.site = &ko_emlrtRSI;
      if (iend > 2147483646) {
        e_st.site = &id_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (i = 0; i < iend; i++) {
        H_data[i + H->size[0] * (j - 1)] = 0.0;
      }
      if (iend < m) {
        iend++;
      }
    }
  }
  iend = (int32_T) - ((-1.0 - vNum) + 1.0);
  emlrtForLoopVectorCheckR2021a(vNum, -1.0, 1.0, mxDOUBLE_CLASS,
                                (int32_T) - ((-1.0 - vNum) + 1.0), &s_emlrtRTEI,
                                &st);
  for (i = 0; i < iend; i++) {
    k = vNum + -(real_T)i;
    if (((int32_T)k < 1) || ((int32_T)k > H->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[0], &r_emlrtBCI,
                                    &st);
    }
    if (((int32_T)k < 1) || ((int32_T)k > H->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[1], &s_emlrtBCI,
                                    &st);
    }
    if (((int32_T)k < 1) || ((int32_T)k > 2)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, 2, &t_emlrtBCI, &st);
    }
    qddot_data[(int32_T)k - 1] /=
        H_data[((int32_T)k + H->size[0] * ((int32_T)k - 1)) - 1];
    if (((int32_T)k < 1) || ((int32_T)k > lambda->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, lambda->size[1],
                                    &cb_emlrtBCI, &st);
    }
    b_j = lambda_data[(int32_T)k - 1];
    while (b_j > 0.0) {
      if (((int32_T)k < 1) || ((int32_T)k > H->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)k, 1, H->size[0], &fb_emlrtBCI,
                                      &st);
      }
      if (((int32_T)b_j < 1) || ((int32_T)b_j > H->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, H->size[1], &gb_emlrtBCI,
                                      &st);
      }
      if (b_j != (int32_T)muDoubleScalarFloor(b_j)) {
        emlrtIntegerCheckR2012b(b_j, &n_emlrtDCI, &st);
      }
      if (((int32_T)b_j < 1) || ((int32_T)b_j > 2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, 2, &hb_emlrtBCI, &st);
      }
      qddot_data[(int32_T)b_j - 1] -=
          qddot_data[(int32_T)k - 1] *
          H_data[((int32_T)k + H->size[0] * ((int32_T)b_j - 1)) - 1];
      if (((int32_T)b_j < 1) || ((int32_T)b_j > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, lambda->size[1],
                                      &xb_emlrtBCI, &st);
      }
      b_j = lambda_data[(int32_T)b_j - 1];
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, vNum, mxDOUBLE_CLASS, (int32_T)vNum,
                                &r_emlrtRTEI, &st);
  for (i = 0; i < loop_ub_tmp; i++) {
    if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > lambda->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, lambda->size[1],
                                    &db_emlrtBCI, &st);
    }
    b_j = lambda_data[i];
    while (b_j > 0.0) {
      if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > H->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, H->size[0],
                                      &lb_emlrtBCI, &st);
      }
      if (b_j != (int32_T)muDoubleScalarFloor(b_j)) {
        emlrtIntegerCheckR2012b(b_j, &o_emlrtDCI, &st);
      }
      if (((int32_T)b_j < 1) || ((int32_T)b_j > H->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, H->size[1], &mb_emlrtBCI,
                                      &st);
      }
      if (((int32_T)b_j < 1) || ((int32_T)b_j > 2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, 2, &nb_emlrtBCI, &st);
      }
      if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > 2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, 2, &ob_emlrtBCI,
                                      &st);
      }
      qddot_data[i] -= H_data[i + H->size[0] * ((int32_T)b_j - 1)] *
                       qddot_data[(int32_T)b_j - 1];
      if (((int32_T)b_j < 1) || ((int32_T)b_j > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, lambda->size[1],
                                      &ac_emlrtBCI, &st);
      }
      b_j = lambda_data[(int32_T)b_j - 1];
    }
    if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > H->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, H->size[0],
                                    &ib_emlrtBCI, &st);
    }
    if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > H->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, H->size[1],
                                    &jb_emlrtBCI, &st);
    }
    if (((int32_T)(i + 1U) < 1) || ((int32_T)(i + 1U) > 2)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(i + 1U), 1, 2, &kb_emlrtBCI, &st);
    }
    qddot_data[i] /= H_data[i + H->size[0] * i];
  }
  emxFree_real_T(&st, &H);
  emxFree_real_T(&st, &lambda);
  emxInit_boolean_T(&st, &r2, &uc_emlrtRTEI);
  st.site = &jl_emlrtRSI;
  iend = r2->size[0];
  r2->size[0] = 2;
  emxEnsureCapacity_boolean_T(&st, r2, iend, &uc_emlrtRTEI);
  r3 = r2->data;
  r3[0] = muDoubleScalarIsNaN(qddot_data[0]);
  r3[1] = muDoubleScalarIsNaN(qddot_data[1]);
  guard1 = false;
  b_st.site = &rl_emlrtRSI;
  if (any(&b_st, r2)) {
    guard1 = true;
  } else {
    iend = r2->size[0];
    r2->size[0] = 2;
    emxEnsureCapacity_boolean_T(&st, r2, iend, &vc_emlrtRTEI);
    r3 = r2->data;
    r3[0] = muDoubleScalarIsInf(qddot_data[0]);
    r3[1] = muDoubleScalarIsInf(qddot_data[1]);
    b_st.site = &rl_emlrtRSI;
    if (any(&b_st, r2)) {
      guard1 = true;
    }
  }
  if (guard1) {
    b_st.site = &sl_emlrtRSI;
    c_st.site = &ek_emlrtRSI;
    d_warning(&c_st);
  }
  emxFree_boolean_T(&st, &r2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (rigidBodyTree1.c) */
