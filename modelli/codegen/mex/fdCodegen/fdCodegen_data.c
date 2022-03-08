/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen_data.c
 *
 * Code generation for function 'fdCodegen_data'
 *
 */

/* Include files */
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                              /* bFirstTime */
    false,                                             /* bInitialized */
    131611U,                                           /* fVersionInfo */
    NULL,                                              /* fErrorFunction */
    "fdCodegen",                                       /* fFunctionName */
    NULL,                                              /* fRTCallStack */
    false,                                             /* bDebugMode */
    {497771824U, 2490594622U, 369384464U, 266412326U}, /* fSigWrd */
    NULL                                               /* fSigMem */
};

emlrtRSInfo cb_emlrtRSI = {
    1,                               /* lineNo */
    "InternalAccess/InternalAccess", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\InternalAccess.m" /* pathName */
};

emlrtRSInfo gb_emlrtRSI = {
    111,                           /* lineNo */
    "RigidBodyTree/RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo hb_emlrtRSI = {
    136,             /* lineNo */
    "RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo jb_emlrtRSI = {
    143,                           /* lineNo */
    "RigidBodyTree/RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo kb_emlrtRSI = {
    139,                           /* lineNo */
    "RigidBodyTree/RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo lb_emlrtRSI = {
    145,                           /* lineNo */
    "RigidBodyTree/RigidBodyTree", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo mb_emlrtRSI = {
    71,                    /* lineNo */
    "RigidBody/RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

emlrtRSInfo vb_emlrtRSI = {
    47,                                    /* lineNo */
    "VisualizationInfo/VisualizationInfo", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\VisualizationInfo.m" /* pathName */
};

emlrtRSInfo cc_emlrtRSI = {
    96,                    /* lineNo */
    "RigidBody/RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

emlrtRSInfo dc_emlrtRSI = {
    106,                   /* lineNo */
    "RigidBody/RigidBody", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

emlrtRSInfo uc_emlrtRSI = {
    76,                   /* lineNo */
    "validateattributes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes"
    ".m" /* pathName */
};

emlrtRSInfo id_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo sd_emlrtRSI = {
    20,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo td_emlrtRSI = {
    41,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo ud_emlrtRSI = {
    53,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo vd_emlrtRSI = {
    68,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo wd_emlrtRSI = {
    71,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo xd_emlrtRSI = {
    81,        /* lineNo */
    "xzlarfg", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarfg.m" /* pathName */
};

emlrtRSInfo fe_emlrtRSI = {
    64,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv."
    "m" /* pathName */
};

emlrtRSInfo he_emlrtRSI = {
    37,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

emlrtRSInfo ie_emlrtRSI = {
    45,      /* lineNo */
    "xgerc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc."
    "m" /* pathName */
};

emlrtRSInfo je_emlrtRSI =
    {
        45,     /* lineNo */
        "xger", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "blas\\xger.m" /* pathName */
};

emlrtRSInfo ke_emlrtRSI = {
    15,     /* lineNo */
    "xger", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xger.m" /* pathName */
};

emlrtRSInfo le_emlrtRSI = {
    41,      /* lineNo */
    "xgerx", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" /* pathName */
};

emlrtRSInfo me_emlrtRSI = {
    54,      /* lineNo */
    "xgerx", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgerx.m" /* pathName */
};

emlrtRSInfo
    tj_emlrtRSI =
        {
            91,       /* lineNo */
            "strcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

emlrtRSInfo
    uj_emlrtRSI =
        {
            167,          /* lineNo */
            "loc_strcmp", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\strcmp.m" /* pathName */
};

emlrtRSInfo ek_emlrtRSI = {
    21,        /* lineNo */
    "warning", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\warning.m" /* pathName */
};

emlrtRSInfo sk_emlrtRSI = {
    1193,                                /* lineNo */
    "RigidBodyTree/findBodyIndexByName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo tk_emlrtRSI = {
    1199,                                /* lineNo */
    "RigidBodyTree/findBodyIndexByName", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo wk_emlrtRSI = {
    418,                   /* lineNo */
    "RigidBody/get.Joint", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pathName */
};

emlrtRSInfo rl_emlrtRSI = {
    1297,                              /* lineNo */
    "RigidBodyTree/resultPostProcess", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo sl_emlrtRSI = {
    1298,                              /* lineNo */
    "RigidBodyTree/resultPostProcess", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pathName */
};

emlrtRSInfo hn_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRTEInfo emlrtRTEI = {
    28,      /* lineNo */
    9,       /* colNo */
    "error", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\error.m" /* pName */
};

emlrtDCInfo emlrtDCI = {
    70,             /* lineNo */
    17,             /* colNo */
    "randomString", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\VisualizationInfo.m", /* pName */
    1                                /* checkKind */
};

emlrtBCInfo emlrtBCI = {
    1,              /* iFirst */
    62,             /* iLast */
    70,             /* lineNo */
    17,             /* colNo */
    "",             /* aName */
    "randomString", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\VisualizationInfo.m", /* pName */
    0                                /* checkKind */
};

emlrtRTEInfo c_emlrtRTEI = {
    21,      /* lineNo */
    9,       /* colNo */
    "error", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\error.m" /* pName */
};

emlrtRTEInfo d_emlrtRTEI = {
    14,               /* lineNo */
    37,               /* colNo */
    "validatenonnan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonnan.m" /* pName */
};

emlrtRTEInfo e_emlrtRTEI = {
    14,               /* lineNo */
    37,               /* colNo */
    "validatefinite", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatefinite.m" /* pName */
};

emlrtRTEInfo f_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

emlrtRTEInfo j_emlrtRTEI = {
    13,                 /* lineNo */
    37,                 /* colNo */
    "validatenonempty", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatenonempty.m" /* pName */
};

emlrtRTEInfo n_emlrtRTEI = {
    1198,                                /* lineNo */
    21,                                  /* colNo */
    "RigidBodyTree/findBodyIndexByName", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m" /* pName */
};

emlrtBCInfo i_emlrtBCI = {
    0,                                   /* iFirst */
    2,                                   /* iLast */
    1199,                                /* lineNo */
    38,                                  /* colNo */
    "",                                  /* aName */
    "RigidBodyTree/findBodyIndexByName", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTree.m", /* pName */
    0                            /* checkKind */
};

emlrtRTEInfo u_emlrtRTEI = {
    10,             /* lineNo */
    23,             /* colNo */
    "validatesize", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatesize.m" /* pName */
};

emlrtRTEInfo v_emlrtRTEI = {
    15,             /* lineNo */
    19,             /* colNo */
    "validatesize", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "valattr\\validatesize.m" /* pName */
};

emlrtRTEInfo bb_emlrtRTEI =
    {
        134,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo cb_emlrtRTEI =
    {
        129,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo jb_emlrtRTEI = {
    93,          /* lineNo */
    17,          /* colNo */
    "RigidBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pName */
};

emlrtRTEInfo
    ob_emlrtRTEI =
        {
            151,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    pb_emlrtRTEI =
        {
            162,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    qb_emlrtRTEI =
        {
            168,              /* lineNo */
            20,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    rb_emlrtRTEI =
        {
            192,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    sb_emlrtRTEI =
        {
            193,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    tb_emlrtRTEI =
        {
            194,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo
    cc_emlrtRTEI =
        {
            236,              /* lineNo */
            13,               /* colNo */
            "rigidBodyJoint", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoi"
            "nt.m" /* pName */
};

emlrtRTEInfo mc_emlrtRTEI = {
    439,         /* lineNo */
    13,          /* colNo */
    "RigidBody", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBody.m" /* pName */
};

emlrtRTEInfo uc_emlrtRTEI = {
    16,      /* lineNo */
    13,      /* colNo */
    "isnan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m" /* pName
                                                                        */
};

emlrtRTEInfo vc_emlrtRTEI = {
    16,      /* lineNo */
    13,      /* colNo */
    "isinf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m" /* pName
                                                                        */
};

const int8_T iv[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

const int8_T iv1[16] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

const char_T cv[9] = {'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c'};

/* End of code generation (fdCodegen_data.c) */
