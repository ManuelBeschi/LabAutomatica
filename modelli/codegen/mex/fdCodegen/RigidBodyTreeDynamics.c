/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RigidBodyTreeDynamics.c
 *
 * Code generation for function 'RigidBodyTreeDynamics'
 *
 */

/* Include files */
#include "RigidBodyTreeDynamics.h"
#include "RigidBody1.h"
#include "colon.h"
#include "eml_mtimes_helper.h"
#include "fdCodegen_data.h"
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "rigidBodyJoint.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo wl_emlrtRSI = {
    39,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo xl_emlrtRSI = {
    41,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo yl_emlrtRSI = {
    57,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo am_emlrtRSI = {
    64,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo bm_emlrtRSI = {
    66,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo cm_emlrtRSI = {
    67,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo dm_emlrtRSI = {
    68,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo em_emlrtRSI = {
    70,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo fm_emlrtRSI = {
    74,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo gm_emlrtRSI = {
    76,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo hm_emlrtRSI = {
    79,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo im_emlrtRSI = {
    83,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo jm_emlrtRSI = {
    96,                                 /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo km_emlrtRSI = {
    100,                                /* lineNo */
    "RigidBodyTreeDynamics/massMatrix", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo in_emlrtRSI =
    {
        90,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo ln_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo mn_emlrtRSI = {
    144,        /* lineNo */
    "eml_find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo nn_emlrtRSI = {
    402,                  /* lineNo */
    "find_first_indices", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtRSInfo on_emlrtRSI =
    {
        28,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo pn_emlrtRSI =
    {
        117,     /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo sn_emlrtRSI = {
    146,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo tn_emlrtRSI = {
    152,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo un_emlrtRSI = {
    156,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo vn_emlrtRSI = {
    157,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo wn_emlrtRSI = {
    158,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo xn_emlrtRSI = {
    159,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo yn_emlrtRSI = {
    160,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo ao_emlrtRSI = {
    162,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo bo_emlrtRSI = {
    172,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo co_emlrtRSI = {
    177,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo do_emlrtRSI = {
    188,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo eo_emlrtRSI = {
    189,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo fo_emlrtRSI = {
    191,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRSInfo go_emlrtRSI = {
    192,                                     /* lineNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pathName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    35,                                 /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo fb_emlrtDCI = {
    41,                                 /* lineNo */
    71,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    41,                                 /* lineNo */
    71,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    41,                                 /* lineNo */
    76,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    41,                                 /* lineNo */
    76,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtRTEInfo x_emlrtRTEI = {
    50,                                 /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtBCInfo hc_emlrtBCI = {
    1,                                  /* iFirst */
    3,                                  /* iLast */
    52,                                 /* lineNo */
    42,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    77,                                 /* lineNo */
    50,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    1,                                  /* iFirst */
    3,                                  /* iLast */
    77,                                 /* lineNo */
    50,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    98,                                 /* lineNo */
    38,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    100,                                /* lineNo */
    59,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    4                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    100,                                /* lineNo */
    59,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,                                  /* nDims */
    100,                                /* lineNo */
    37,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo kb_emlrtDCI = {
    104,                                /* lineNo */
    46,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    1,                                  /* iFirst */
    3,                                  /* iLast */
    104,                                /* lineNo */
    46,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    68,                                 /* lineNo */
    23,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    68,                                 /* lineNo */
    23,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = {
    68,                                 /* lineNo */
    28,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    68,                                 /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    68,                                 /* lineNo */
    34,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    68,                                 /* lineNo */
    34,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = {
    68,                                 /* lineNo */
    39,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    68,                                 /* lineNo */
    39,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                                 /* nDims */
    68,                                 /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo pb_emlrtDCI = {
    80,                                 /* lineNo */
    31,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    80,                                 /* lineNo */
    31,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = {
    80,                                 /* lineNo */
    36,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    80,                                 /* lineNo */
    36,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = {
    80,                                 /* lineNo */
    42,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    80,                                 /* lineNo */
    42,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = {
    80,                                 /* lineNo */
    47,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    80,                                 /* lineNo */
    47,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    -1,                                 /* nDims */
    80,                                 /* lineNo */
    29,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo tb_emlrtDCI = {
    81,                                 /* lineNo */
    31,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    81,                                 /* lineNo */
    31,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = {
    81,                                 /* lineNo */
    36,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    81,                                 /* lineNo */
    36,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = {
    81,                                 /* lineNo */
    42,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    81,                                 /* lineNo */
    42,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = {
    81,                                 /* lineNo */
    47,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    81,                                 /* lineNo */
    47,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                 /* nDims */
    81,                                 /* lineNo */
    29,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo xb_emlrtDCI = {
    100,                                /* lineNo */
    24,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    100,                                /* lineNo */
    24,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = {
    100,                                /* lineNo */
    29,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    100,                                /* lineNo */
    29,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                 /* nDims */
    100,                                /* lineNo */
    17,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    54,                                 /* lineNo */
    43,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    54,                                 /* lineNo */
    50,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    54,                                 /* lineNo */
    55,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    67,                                 /* lineNo */
    29,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    70,                                 /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    83,                                 /* lineNo */
    32,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = {
    30,                                 /* lineNo */
    23,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = {
    30,                                 /* lineNo */
    23,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    4                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = {
    30,                                 /* lineNo */
    29,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = {
    31,                                 /* lineNo */
    31,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = {
    32,                                 /* lineNo */
    30,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = {
    25,                                 /* lineNo */
    25,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = {
    25,                                 /* lineNo */
    25,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    4                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = {
    27,                                 /* lineNo */
    24,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = {
    30,                                 /* lineNo */
    13,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = {
    31,                                 /* lineNo */
    13,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = {
    32,                                 /* lineNo */
    13,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    36,                                 /* lineNo */
    17,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    51,                                 /* lineNo */
    36,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    54,                                 /* lineNo */
    31,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = {
    54,                                 /* lineNo */
    31,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    54,                                 /* lineNo */
    21,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = {
    54,                                 /* lineNo */
    21,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    55,                                 /* lineNo */
    29,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    57,                                 /* lineNo */
    35,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    57,                                 /* lineNo */
    63,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = {
    57,                                 /* lineNo */
    63,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    57,                                 /* lineNo */
    71,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    58,                                 /* lineNo */
    51,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = {
    58,                                 /* lineNo */
    51,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    58,                                 /* lineNo */
    59,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    58,                                 /* lineNo */
    33,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    101,                                /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    102,                                /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = {
    102,                                /* lineNo */
    28,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    104,                                /* lineNo */
    54,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    105,                                /* lineNo */
    28,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = {
    105,                                /* lineNo */
    28,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    74,                                 /* lineNo */
    51,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = {
    74,                                 /* lineNo */
    51,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    76,                                 /* lineNo */
    54,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo sc_emlrtDCI = {
    76,                                 /* lineNo */
    54,                                 /* colNo */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = {
    0,                                  /* iFirst */
    2,                                  /* iLast */
    36,                                 /* lineNo */
    38,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = {
    -1,                                 /* iFirst */
    -1,                                 /* iLast */
    44,                                 /* lineNo */
    17,                                 /* colNo */
    "",                                 /* aName */
    "RigidBodyTreeDynamics/massMatrix", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    139,                                     /* lineNo */
    21,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    145,                                     /* lineNo */
    21,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtDCInfo tc_emlrtDCI = {
    156,                                     /* lineNo */
    28,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    156,                                     /* lineNo */
    28,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = {
    156,                                     /* lineNo */
    33,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    156,                                     /* lineNo */
    33,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo vc_emlrtDCI = {
    157,                                     /* lineNo */
    34,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    157,                                     /* lineNo */
    34,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo wc_emlrtDCI = {
    157,                                     /* lineNo */
    39,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    157,                                     /* lineNo */
    39,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo xc_emlrtDCI = {
    158,                                     /* lineNo */
    36,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    158,                                     /* lineNo */
    36,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo yc_emlrtDCI = {
    158,                                     /* lineNo */
    41,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    158,                                     /* lineNo */
    41,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    154,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    171,                                     /* lineNo */
    36,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ad_emlrtDCI = {
    171,                                     /* lineNo */
    51,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    171,                                     /* lineNo */
    51,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    171,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    172,                                     /* lineNo */
    41,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    173,                                     /* lineNo */
    74,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    173,                                     /* lineNo */
    83,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    172,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    176,                                     /* lineNo */
    36,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    176,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    177,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    181,                                     /* lineNo */
    28,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    182,                                     /* lineNo */
    33,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    182,                                     /* lineNo */
    78,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    183,                                     /* lineNo */
    46,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    187,                                     /* lineNo */
    21,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    182,                                     /* lineNo */
    21,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    192,                                     /* lineNo */
    35,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = {
    1,                                       /* iFirst */
    3,                                       /* iLast */
    193,                                     /* lineNo */
    46,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    198,                                     /* lineNo */
    36,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    198,                                     /* lineNo */
    53,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo bd_emlrtDCI = {
    198,                                     /* lineNo */
    25,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    198,                                     /* lineNo */
    25,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo cd_emlrtDCI = {
    194,                                     /* lineNo */
    25,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    194,                                     /* lineNo */
    25,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo dd_emlrtDCI = {
    194,                                     /* lineNo */
    30,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    194,                                     /* lineNo */
    30,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,                                      /* nDims */
    194,                                     /* lineNo */
    21,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtBCInfo ef_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    198,                                     /* lineNo */
    45,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ff_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    171,                                     /* lineNo */
    43,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    177,                                     /* lineNo */
    33,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo hf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    172,                                     /* lineNo */
    33,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo if_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    174,                                     /* lineNo */
    38,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo jf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    183,                                     /* lineNo */
    35,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo ed_emlrtDCI = {
    132,                                     /* lineNo */
    27,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo fd_emlrtDCI = {
    133,                                     /* lineNo */
    27,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo gd_emlrtDCI = {
    135,                                     /* lineNo */
    27,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo hd_emlrtDCI = {
    130,                                     /* lineNo */
    24,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo id_emlrtDCI = {
    130,                                     /* lineNo */
    24,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    4                                    /* checkKind */
};

static emlrtDCInfo jd_emlrtDCI = {
    131,                                     /* lineNo */
    28,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo kd_emlrtDCI = {
    132,                                     /* lineNo */
    13,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo ld_emlrtDCI = {
    133,                                     /* lineNo */
    13,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo md_emlrtDCI = {
    135,                                     /* lineNo */
    13,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtDCInfo nd_emlrtDCI = {
    136,                                     /* lineNo */
    26,                                      /* colNo */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    1                                    /* checkKind */
};

static emlrtBCInfo kf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    140,                                     /* lineNo */
    17,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo lf_emlrtBCI = {
    0,                                       /* iFirst */
    2,                                       /* iLast */
    146,                                     /* lineNo */
    34,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo mf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    141,                                     /* lineNo */
    17,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = {
    0,                                       /* iFirst */
    2,                                       /* iLast */
    188,                                     /* lineNo */
    41,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = {
    0,                                       /* iFirst */
    2,                                       /* iLast */
    196,                                     /* lineNo */
    36,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = {
    0,                                       /* iFirst */
    2,                                       /* iLast */
    189,                                     /* lineNo */
    46,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = {
    0,                                       /* iFirst */
    2,                                       /* iLast */
    191,                                     /* lineNo */
    48,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    162,                                     /* lineNo */
    26,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    174,                                     /* lineNo */
    21,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    178,                                     /* lineNo */
    21,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo uf_emlrtBCI = {
    -1,                                      /* iFirst */
    -1,                                      /* iLast */
    166,                                     /* lineNo */
    17,                                      /* colNo */
    "",                                      /* aName */
    "RigidBodyTreeDynamics/inverseDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m", /* pName */
    0                                    /* checkKind */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    25,                      /* lineNo */
    25,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    27,                      /* lineNo */
    24,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    30,                      /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    31,                      /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    32,                      /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    100,                     /* lineNo */
    38,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    66,                      /* lineNo */
    39,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    57,                      /* lineNo */
    50,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    70,                      /* lineNo */
    32,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    76,                      /* lineNo */
    41,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    83,                      /* lineNo */
    36,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    25,                      /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
    27,                      /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = {
    66,                      /* lineNo */
    21,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo td_emlrtRTEI = {
    67,                      /* lineNo */
    21,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = {
    79,                      /* lineNo */
    29,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = {
    12,                      /* lineNo */
    32,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = {
    130,                     /* lineNo */
    24,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo be_emlrtRTEI = {
    131,                     /* lineNo */
    28,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = {
    132,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo de_emlrtRTEI = {
    133,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = {
    135,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = {
    136,                     /* lineNo */
    17,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    146,                     /* lineNo */
    17,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    153,                     /* lineNo */
    21,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    158,                     /* lineNo */
    21,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    191,                     /* lineNo */
    35,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    130,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    131,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    136,                     /* lineNo */
    13,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    162,                     /* lineNo */
    31,                      /* colNo */
    "RigidBodyTreeDynamics", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+"
    "internal\\RigidBodyTreeDynamics.m" /* pName */
};

/* Function Definitions */
void c_RigidBodyTreeDynamics_inverse(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *robot,
                                     const real_T q_data[],
                                     const real_T qdot_data[],
                                     const emxArray_real_T *qddot,
                                     const emxArray_real_T *fext,
                                     real_T tau_data[], int32_T *tau_size)
{
  static const char_T varargin_1[5] = {'J', 'o', 'i', 'n', 't'};
  c_robotics_manip_internal_Rigid *obj;
  cell_wrap_21 *X_data;
  cell_wrap_21 *Xtree_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_cell_wrap_21 *X;
  emxArray_cell_wrap_21 *Xtree;
  emxArray_real_T *S;
  emxArray_real_T *aB;
  emxArray_real_T *f;
  emxArray_real_T *qddoti;
  emxArray_real_T *vB;
  emxArray_real_T *vJ;
  emxArray_real_T *y;
  rigidBodyJoint *jnt;
  real_T XDHOffset[36];
  real_T d_R[36];
  real_T T[16];
  real_T TDHOffset[16];
  real_T R[9];
  real_T b_R[9];
  real_T a0[6];
  real_T b_X[6];
  real_T b_y[6];
  real_T e_R[6];
  real_T c_R[3];
  real_T b_q_data[2];
  const real_T *fext_data;
  const real_T *qddot_data;
  real_T a_idx_0;
  real_T a_idx_1;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T nb;
  real_T *S_data;
  real_T *aB_data;
  real_T *f_data;
  real_T *vB_data;
  real_T *vJ_data;
  int32_T b_iv[2];
  int32_T qdot_size[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  fext_data = fext->data;
  qddot_data = qddot->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_cell_wrap_21(sp, &X, &ke_emlrtRTEI);
  a0[0] = 0.0;
  a0[1] = 0.0;
  a0[2] = 0.0;
  a0[3] = -robot->Gravity[0];
  a0[4] = -robot->Gravity[1];
  a0[5] = -robot->Gravity[2];
  nb = robot->NumBodies;
  i = X->size[0] * X->size[1];
  X->size[0] = 1;
  emxEnsureCapacity_cell_wrap_21(sp, X, i, &ae_emlrtRTEI);
  if (!(nb >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nb, &id_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(nb);
  if (nb != i) {
    emlrtIntegerCheckR2012b(nb, &hd_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_cell_wrap_21(sp, &Xtree, &le_emlrtRTEI);
  i1 = X->size[0] * X->size[1];
  X->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap_21(sp, X, i1, &ae_emlrtRTEI);
  X_data = X->data;
  i1 = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  emxEnsureCapacity_cell_wrap_21(sp, Xtree, i1, &be_emlrtRTEI);
  if (nb != i) {
    emlrtIntegerCheckR2012b(nb, &jd_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_real_T(sp, &vJ, 2, &ce_emlrtRTEI);
  i1 = (int32_T)nb;
  i2 = Xtree->size[0] * Xtree->size[1];
  Xtree->size[1] = i1;
  emxEnsureCapacity_cell_wrap_21(sp, Xtree, i2, &be_emlrtRTEI);
  Xtree_data = Xtree->data;
  i2 = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  emxEnsureCapacity_real_T(sp, vJ, i2, &ce_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &ed_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = vJ->size[0] * vJ->size[1];
  vJ->size[1] = i1;
  emxEnsureCapacity_real_T(sp, vJ, i2, &ce_emlrtRTEI);
  vJ_data = vJ->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &kd_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = 6 * i1;
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    vJ_data[i2] = 0.0;
  }
  emxInit_real_T(sp, &vB, 2, &de_emlrtRTEI);
  i2 = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  emxEnsureCapacity_real_T(sp, vB, i2, &de_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &fd_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = vB->size[0] * vB->size[1];
  vB->size[1] = i1;
  emxEnsureCapacity_real_T(sp, vB, i2, &de_emlrtRTEI);
  vB_data = vB->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &ld_emlrtDCI, (emlrtCTX)sp);
  }
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    vB_data[i2] = 0.0;
  }
  emxInit_real_T(sp, &aB, 2, &ee_emlrtRTEI);
  i2 = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  emxEnsureCapacity_real_T(sp, aB, i2, &ee_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &gd_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = aB->size[0] * aB->size[1];
  aB->size[1] = i1;
  emxEnsureCapacity_real_T(sp, aB, i2, &ee_emlrtRTEI);
  aB_data = aB->data;
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &md_emlrtDCI, (emlrtCTX)sp);
  }
  for (i2 = 0; i2 < loop_ub_tmp; i2++) {
    aB_data[i2] = 0.0;
  }
  emxInit_real_T(sp, &f, 2, &me_emlrtRTEI);
  i2 = f->size[0] * f->size[1];
  f->size[0] = 6;
  emxEnsureCapacity_real_T(sp, f, i2, &fe_emlrtRTEI);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(nb, &nd_emlrtDCI, (emlrtCTX)sp);
  }
  i = f->size[0] * f->size[1];
  f->size[1] = i1;
  emxEnsureCapacity_real_T(sp, f, i, &fe_emlrtRTEI);
  f_data = f->data;
  *tau_size = 2;
  tau_data[0] = 0.0;
  tau_data[1] = 0.0;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
                                &fb_emlrtRTEI, (emlrtCTX)sp);
  for (k = 0; k < i1; k++) {
    memset(&XDHOffset[0], 0, 36U * sizeof(real_T));
    for (loop_ub_tmp = 0; loop_ub_tmp < 6; loop_ub_tmp++) {
      XDHOffset[loop_ub_tmp + 6 * loop_ub_tmp] = 1.0;
    }
    loop_ub_tmp = Xtree->size[1] - 1;
    for (i = 0; i < 36; i++) {
      if (k > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(k, 0, loop_ub_tmp, &kf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      Xtree_data[k].f1[i] = XDHOffset[i];
    }
    loop_ub_tmp = X->size[1] - 1;
    for (i = 0; i < 36; i++) {
      if (k > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(k, 0, loop_ub_tmp, &mf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[k].f1[i] = XDHOffset[i];
    }
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
                                &gb_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &S, 2, &ge_emlrtRTEI);
  emxInit_real_T(sp, &qddoti, 1, &he_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &ne_emlrtRTEI);
  for (b_i = 0; b_i < i1; b_i++) {
    st.site = &sn_emlrtRSI;
    if (b_i > 2) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &lf_emlrtBCI, &st);
    }
    obj = robot->Bodies[b_i];
    if (obj->Index == 0.0) {
      b_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = obj->JointInternal;
    i = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = jnt->MotionSubspace->size[1];
    emxEnsureCapacity_real_T(sp, S, i, &ge_emlrtRTEI);
    S_data = S->data;
    k = 6 * jnt->MotionSubspace->size[1];
    for (i = 0; i < k; i++) {
      S_data[i] = jnt->MotionSubspace->data[i];
    }
    a_idx_0 = robot->PositionDoFMap[b_i];
    a_idx_1 = robot->PositionDoFMap[b_i + 3];
    b_idx_0 = robot->VelocityDoFMap[b_i];
    b_idx_1 = robot->VelocityDoFMap[b_i + 3];
    memset(&XDHOffset[0], 0, 36U * sizeof(real_T));
    for (k = 0; k < 6; k++) {
      XDHOffset[k + 6 * k] = 1.0;
    }
    if (a_idx_1 < a_idx_0) {
      st.site = &tn_emlrtRSI;
      obj = robot->Bodies[b_i];
      if (obj->Index == 0.0) {
        b_st.site = &wk_emlrtRSI;
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI,
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
            &varargin_1[0]);
      }
      jnt = obj->JointInternal;
      st.site = &tn_emlrtRSI;
      d_rigidBodyJoint_transformBodyT(&st, jnt, T);
      i = qddoti->size[0];
      qddoti->size[0] = 1;
      emxEnsureCapacity_real_T(sp, qddoti, i, &he_emlrtRTEI);
      S_data = qddoti->data;
      S_data[0] = 0.0;
      if (b_i + 1 > vJ->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vJ->size[1], &ge_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        vJ_data[i + 6 * b_i] = 0.0;
      }
    } else {
      if (a_idx_0 > a_idx_1) {
        i = 0;
        i2 = 0;
      } else {
        if (a_idx_0 != (int32_T)muDoubleScalarFloor(a_idx_0)) {
          emlrtIntegerCheckR2012b(a_idx_0, &tc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)a_idx_0 < 1) || ((int32_T)a_idx_0 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a_idx_0, 1, 2, &ae_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i = (int32_T)a_idx_0 - 1;
        if (a_idx_1 != (int32_T)muDoubleScalarFloor(a_idx_1)) {
          emlrtIntegerCheckR2012b(a_idx_1, &uc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)a_idx_1 < 1) || ((int32_T)a_idx_1 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a_idx_1, 1, 2, &be_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = (int32_T)a_idx_1;
      }
      b_iv[0] = 1;
      k = i2 - i;
      b_iv[1] = k;
      st.site = &un_emlrtRSI;
      indexShapeCheck(&st, 2, b_iv);
      if (b_idx_0 > b_idx_1) {
        i2 = -1;
        i3 = -1;
      } else {
        if (b_idx_0 != (int32_T)muDoubleScalarFloor(b_idx_0)) {
          emlrtIntegerCheckR2012b(b_idx_0, &vc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_0 < 1) || ((int32_T)b_idx_0 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_0, 1, 2, &ce_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = (int32_T)b_idx_0 - 2;
        if (b_idx_1 != (int32_T)muDoubleScalarFloor(b_idx_1)) {
          emlrtIntegerCheckR2012b(b_idx_1, &wc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, 2, &de_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i3 = (int32_T)b_idx_1 - 1;
      }
      b_iv[0] = 1;
      loop_ub = i3 - i2;
      b_iv[1] = loop_ub;
      st.site = &vn_emlrtRSI;
      indexShapeCheck(&st, 2, b_iv);
      if (b_idx_0 > b_idx_1) {
        i4 = 0;
        i5 = 0;
      } else {
        if (b_idx_0 != (int32_T)muDoubleScalarFloor(b_idx_0)) {
          emlrtIntegerCheckR2012b(b_idx_0, &xc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_0 < 1) || ((int32_T)b_idx_0 > qddot->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_0, 1, qddot->size[0],
                                        &ee_emlrtBCI, (emlrtCTX)sp);
        }
        i4 = (int32_T)b_idx_0 - 1;
        if (b_idx_1 != (int32_T)muDoubleScalarFloor(b_idx_1)) {
          emlrtIntegerCheckR2012b(b_idx_1, &yc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > qddot->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, qddot->size[0],
                                        &fe_emlrtBCI, (emlrtCTX)sp);
        }
        i5 = (int32_T)b_idx_1;
      }
      b_iv[0] = 1;
      loop_ub_tmp = i5 - i4;
      b_iv[1] = loop_ub_tmp;
      st.site = &wn_emlrtRSI;
      indexShapeCheck(&st, qddot->size[0], b_iv);
      i5 = qddoti->size[0];
      qddoti->size[0] = loop_ub_tmp;
      emxEnsureCapacity_real_T(sp, qddoti, i5, &ie_emlrtRTEI);
      S_data = qddoti->data;
      for (i5 = 0; i5 < loop_ub_tmp; i5++) {
        S_data[i5] = qddot_data[i4 + i5];
      }
      st.site = &xn_emlrtRSI;
      obj = robot->Bodies[b_i];
      if (obj->Index == 0.0) {
        b_st.site = &wk_emlrtRSI;
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI,
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
            &varargin_1[0]);
      }
      jnt = obj->JointInternal;
      for (i4 = 0; i4 < k; i4++) {
        b_q_data[i4] = q_data[i + i4];
      }
      st.site = &xn_emlrtRSI;
      c_rigidBodyJoint_transformBodyT(&st, jnt, b_q_data, k, T);
      st.site = &yn_emlrtRSI;
      obj = robot->Bodies[b_i];
      if (obj->Index == 0.0) {
        b_st.site = &wk_emlrtRSI;
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI,
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
            &varargin_1[0]);
      }
      jnt = obj->JointInternal;
      for (i = 0; i < 16; i++) {
        TDHOffset[i] = jnt->ChildToJointTransform[i];
      }
      for (i = 0; i < 3; i++) {
        R[3 * i] = TDHOffset[i];
        R[3 * i + 1] = TDHOffset[i + 4];
        R[3 * i + 2] = TDHOffset[i + 8];
      }
      for (i = 0; i < 9; i++) {
        b_R[i] = -R[i];
      }
      for (i = 0; i < 3; i++) {
        a_idx_0 = b_R[i] * TDHOffset[12];
        loop_ub_tmp = i << 2;
        TDHOffset[loop_ub_tmp] = R[3 * i];
        a_idx_0 += b_R[i + 3] * TDHOffset[13];
        TDHOffset[loop_ub_tmp + 1] = R[3 * i + 1];
        a_idx_0 += b_R[i + 6] * TDHOffset[14];
        TDHOffset[loop_ub_tmp + 2] = R[3 * i + 2];
        c_R[i] = a_idx_0;
      }
      TDHOffset[12] = c_R[0];
      TDHOffset[13] = c_R[1];
      TDHOffset[14] = c_R[2];
      TDHOffset[3] = 0.0;
      TDHOffset[7] = 0.0;
      TDHOffset[11] = 0.0;
      TDHOffset[15] = 1.0;
      R[0] = 0.0;
      R[3] = -c_R[2];
      R[6] = c_R[1];
      R[1] = c_R[2];
      R[4] = 0.0;
      R[7] = -c_R[0];
      R[2] = -c_R[1];
      R[5] = c_R[0];
      R[8] = 0.0;
      for (i = 0; i < 3; i++) {
        a_idx_0 = R[i];
        a_idx_1 = R[i + 3];
        b_idx_0 = R[i + 6];
        for (i4 = 0; i4 < 3; i4++) {
          i5 = i4 << 2;
          b_R[i + 3 * i4] =
              (a_idx_0 * TDHOffset[i5] + a_idx_1 * TDHOffset[i5 + 1]) +
              b_idx_0 * TDHOffset[i5 + 2];
          XDHOffset[i4 + 6 * i] = TDHOffset[i4 + (i << 2)];
          XDHOffset[i4 + 6 * (i + 3)] = 0.0;
        }
      }
      for (i = 0; i < 3; i++) {
        XDHOffset[6 * i + 3] = b_R[3 * i];
        loop_ub_tmp = i << 2;
        k = 6 * (i + 3);
        XDHOffset[k + 3] = TDHOffset[loop_ub_tmp];
        XDHOffset[6 * i + 4] = b_R[3 * i + 1];
        XDHOffset[k + 4] = TDHOffset[loop_ub_tmp + 1];
        XDHOffset[6 * i + 5] = b_R[3 * i + 2];
        XDHOffset[k + 5] = TDHOffset[loop_ub_tmp + 2];
      }
      st.site = &ao_emlrtRSI;
      b_st.site = &in_emlrtRSI;
      mtimes(&b_st, XDHOffset, S, y);
      st.site = &ao_emlrtRSI;
      qdot_size[0] = 1;
      qdot_size[1] = loop_ub;
      b_st.site = &hn_emlrtRSI;
      dynamic_size_checks(&b_st, qdot_size, y->size[1], (int8_T)(i3 - i2));
      qdot_size[0] = 1;
      qdot_size[1] = loop_ub;
      for (i = 0; i < loop_ub; i++) {
        b_q_data[i] = qdot_data[(i2 + i) + 1];
      }
      if (b_i + 1 > vJ->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vJ->size[1], &rf_emlrtBCI,
                                      &st);
      }
      b_st.site = &in_emlrtRSI;
      d_mtimes(y, b_q_data, qdot_size, *(real_T(*)[6]) & vJ_data[6 * b_i]);
    }
    for (i = 0; i < 3; i++) {
      R[3 * i] = T[i];
      R[3 * i + 1] = T[i + 4];
      R[3 * i + 2] = T[i + 8];
    }
    for (i = 0; i < 9; i++) {
      b_R[i] = -R[i];
    }
    a_idx_0 = T[12];
    a_idx_1 = T[13];
    b_idx_0 = T[14];
    for (i = 0; i < 3; i++) {
      loop_ub_tmp = i << 2;
      TDHOffset[loop_ub_tmp] = R[3 * i];
      TDHOffset[loop_ub_tmp + 1] = R[3 * i + 1];
      TDHOffset[loop_ub_tmp + 2] = R[3 * i + 2];
      TDHOffset[i + 12] =
          (b_R[i] * a_idx_0 + b_R[i + 3] * a_idx_1) + b_R[i + 6] * b_idx_0;
    }
    TDHOffset[3] = 0.0;
    TDHOffset[7] = 0.0;
    TDHOffset[11] = 0.0;
    TDHOffset[15] = 1.0;
    R[0] = 0.0;
    R[3] = -TDHOffset[14];
    R[6] = TDHOffset[13];
    R[1] = TDHOffset[14];
    R[4] = 0.0;
    R[7] = -TDHOffset[12];
    R[2] = -TDHOffset[13];
    R[5] = TDHOffset[12];
    R[8] = 0.0;
    for (i = 0; i < 3; i++) {
      a_idx_0 = R[i];
      a_idx_1 = R[i + 3];
      b_idx_0 = R[i + 6];
      for (i2 = 0; i2 < 3; i2++) {
        i3 = i2 << 2;
        b_R[i + 3 * i2] =
            (a_idx_0 * TDHOffset[i3] + a_idx_1 * TDHOffset[i3 + 1]) +
            b_idx_0 * TDHOffset[i3 + 2];
      }
    }
    loop_ub_tmp = X->size[1] - 1;
    for (i = 0; i < 3; i++) {
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = i << 2;
      X_data[b_i].f1[6 * i] = TDHOffset[i2];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 1] = TDHOffset[i2 + 1];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 2] = TDHOffset[i2 + 2];
    }
    for (i = 0; i < 3; i++) {
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = 6 * (i + 3);
      X_data[b_i].f1[i2] = 0.0;
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[i2 + 1] = 0.0;
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[i2 + 2] = 0.0;
    }
    for (i = 0; i < 3; i++) {
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 3] = b_R[3 * i];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 4] = b_R[3 * i + 1];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 5] = b_R[3 * i + 2];
    }
    for (i = 0; i < 3; i++) {
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      i2 = i << 2;
      i3 = 6 * (i + 3);
      X_data[b_i].f1[i3 + 3] = TDHOffset[i2];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[i3 + 4] = TDHOffset[i2 + 1];
      if (b_i > loop_ub_tmp) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &uf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      X_data[b_i].f1[i3 + 5] = TDHOffset[i2 + 2];
    }
    b_idx_1 = robot->Bodies[b_i]->ParentIndex;
    if (b_idx_1 > 0.0) {
      if (b_i > X->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, X->size[1] - 1, &ff_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_idx_1 != (int32_T)muDoubleScalarFloor(b_idx_1)) {
        emlrtIntegerCheckR2012b(b_idx_1, &ad_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > vB->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, vB->size[1],
                                      &ie_emlrtBCI, (emlrtCTX)sp);
      }
      if (b_i + 1 > vJ->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vJ->size[1], &he_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i + 1 > vB->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vB->size[1], &je_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        a_idx_0 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          a_idx_0 += X_data[b_i].f1[i + 6 * i2] *
                     vB_data[i2 + 6 * ((int32_T)b_idx_1 - 1)];
        }
        b_y[i] = vJ_data[i + 6 * b_i] + a_idx_0;
      }
      for (i = 0; i < 6; i++) {
        vB_data[i + 6 * b_i] = b_y[i];
      }
      if (b_i > X->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, X->size[1] - 1, &hf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > aB->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, aB->size[1],
                                      &ke_emlrtBCI, (emlrtCTX)sp);
      }
      st.site = &bo_emlrtRSI;
      b_st.site = &in_emlrtRSI;
      mtimes(&b_st, XDHOffset, S, y);
      st.site = &bo_emlrtRSI;
      b_st.site = &hn_emlrtRSI;
      if (qddoti->size[0] != y->size[1]) {
        if (qddoti->size[0] == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &cb_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      b_st.site = &in_emlrtRSI;
      e_mtimes(y, qddoti, b_y);
      if (b_i + 1 > vB->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vB->size[1], &le_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i + 1 > vJ->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vJ->size[1], &me_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      R[0] = 0.0;
      k = 6 * b_i + 2;
      R[3] = -vB_data[k];
      loop_ub_tmp = 6 * b_i + 1;
      R[6] = vB_data[loop_ub_tmp];
      R[1] = vB_data[k];
      R[4] = 0.0;
      R[7] = -vB_data[6 * b_i];
      R[2] = -vB_data[loop_ub_tmp];
      R[5] = vB_data[6 * b_i];
      R[8] = 0.0;
      d_R[3] = 0.0;
      k = 6 * b_i + 5;
      d_R[9] = -vB_data[k];
      loop_ub_tmp = 6 * b_i + 4;
      d_R[15] = vB_data[loop_ub_tmp];
      d_R[4] = vB_data[k];
      d_R[10] = 0.0;
      k = 6 * b_i + 3;
      d_R[16] = -vB_data[k];
      d_R[5] = -vB_data[loop_ub_tmp];
      d_R[11] = vB_data[k];
      d_R[17] = 0.0;
      for (i = 0; i < 3; i++) {
        a_idx_0 = R[3 * i];
        d_R[6 * i] = a_idx_0;
        k = 6 * (i + 3);
        d_R[k] = 0.0;
        d_R[k + 3] = a_idx_0;
        a_idx_0 = R[3 * i + 1];
        d_R[6 * i + 1] = a_idx_0;
        d_R[k + 1] = 0.0;
        d_R[k + 4] = a_idx_0;
        a_idx_0 = R[3 * i + 2];
        d_R[6 * i + 2] = a_idx_0;
        d_R[k + 2] = 0.0;
        d_R[k + 5] = a_idx_0;
      }
      for (i = 0; i < 6; i++) {
        a_idx_0 = 0.0;
        a_idx_1 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          i3 = i + 6 * i2;
          a_idx_0 +=
              X_data[b_i].f1[i3] * aB_data[i2 + 6 * ((int32_T)b_idx_1 - 1)];
          a_idx_1 += d_R[i3] * vJ_data[i2 + 6 * b_i];
        }
        e_R[i] = a_idx_1;
        b_X[i] = a_idx_0 + b_y[i];
      }
      if (b_i + 1 > aB->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, aB->size[1], &ne_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        aB_data[i + 6 * b_i] = b_X[i] + e_R[i];
      }
      i = Xtree->size[1];
      if (((int32_T)b_idx_1 - 1 < 0) ||
          ((int32_T)b_idx_1 - 1 > Xtree->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1 - 1, 0,
                                      Xtree->size[1] - 1, &if_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      R[0] = 0.0;
      R[3] = -T[14];
      R[6] = T[13];
      R[1] = T[14];
      R[4] = 0.0;
      R[7] = -T[12];
      R[2] = -T[13];
      R[5] = T[12];
      R[8] = 0.0;
      for (i2 = 0; i2 < 3; i2++) {
        a_idx_0 = R[i2];
        a_idx_1 = R[i2 + 3];
        b_idx_0 = R[i2 + 6];
        for (i3 = 0; i3 < 3; i3++) {
          i4 = i3 << 2;
          b_R[i2 + 3 * i3] =
              (a_idx_0 * T[i4] + a_idx_1 * T[i4 + 1]) + b_idx_0 * T[i4 + 2];
          XDHOffset[i3 + 6 * i2] = T[i3 + (i2 << 2)];
          XDHOffset[i3 + 6 * (i2 + 3)] = 0.0;
        }
      }
      for (i2 = 0; i2 < 3; i2++) {
        XDHOffset[6 * i2 + 3] = b_R[3 * i2];
        loop_ub_tmp = i2 << 2;
        k = 6 * (i2 + 3);
        XDHOffset[k + 3] = T[loop_ub_tmp];
        XDHOffset[6 * i2 + 4] = b_R[3 * i2 + 1];
        XDHOffset[k + 4] = T[loop_ub_tmp + 1];
        XDHOffset[6 * i2 + 5] = b_R[3 * i2 + 2];
        XDHOffset[k + 5] = T[loop_ub_tmp + 2];
      }
      for (i2 = 0; i2 < 6; i2++) {
        for (i3 = 0; i3 < 6; i3++) {
          a_idx_0 = 0.0;
          for (i4 = 0; i4 < 6; i4++) {
            a_idx_0 += Xtree_data[(int32_T)b_idx_1 - 1].f1[i2 + 6 * i4] *
                       XDHOffset[i4 + 6 * i3];
          }
          d_R[i2 + 6 * i3] = a_idx_0;
        }
      }
      for (i2 = 0; i2 < 36; i2++) {
        if (b_i > i - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, i - 1, &sf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[i2] = d_R[i2];
      }
    } else {
      if (b_i + 1 > vJ->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vJ->size[1], &oe_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i + 1 > vB->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vB->size[1], &pe_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        i2 = i + 6 * b_i;
        vB_data[i2] = vJ_data[i2];
      }
      if (b_i > X->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, X->size[1] - 1, &gf_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      st.site = &co_emlrtRSI;
      b_st.site = &in_emlrtRSI;
      mtimes(&b_st, XDHOffset, S, y);
      st.site = &co_emlrtRSI;
      b_st.site = &hn_emlrtRSI;
      if (qddoti->size[0] != y->size[1]) {
        if (qddoti->size[0] == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &cb_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &bb_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      b_st.site = &in_emlrtRSI;
      e_mtimes(y, qddoti, b_y);
      if (b_i + 1 > aB->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, aB->size[1], &qe_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        a_idx_0 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          a_idx_0 += X_data[b_i].f1[i + 6 * i2] * a0[i2];
        }
        aB_data[i + 6 * b_i] = a_idx_0 + b_y[i];
      }
      R[0] = 0.0;
      R[3] = -T[14];
      R[6] = T[13];
      R[1] = T[14];
      R[4] = 0.0;
      R[7] = -T[12];
      R[2] = -T[13];
      R[5] = T[12];
      R[8] = 0.0;
      for (i = 0; i < 3; i++) {
        a_idx_0 = R[i];
        a_idx_1 = R[i + 3];
        b_idx_0 = R[i + 6];
        for (i2 = 0; i2 < 3; i2++) {
          i3 = i2 << 2;
          b_R[i + 3 * i2] =
              (a_idx_0 * T[i3] + a_idx_1 * T[i3 + 1]) + b_idx_0 * T[i3 + 2];
        }
      }
      loop_ub_tmp = Xtree->size[1] - 1;
      for (i = 0; i < 3; i++) {
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = i << 2;
        Xtree_data[b_i].f1[6 * i] = T[i2];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[6 * i + 1] = T[i2 + 1];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[6 * i + 2] = T[i2 + 2];
      }
      for (i = 0; i < 3; i++) {
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = 6 * (i + 3);
        Xtree_data[b_i].f1[i2] = 0.0;
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[i2 + 1] = 0.0;
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[i2 + 2] = 0.0;
      }
      for (i = 0; i < 3; i++) {
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[6 * i + 3] = b_R[3 * i];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[6 * i + 4] = b_R[3 * i + 1];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[6 * i + 5] = b_R[3 * i + 2];
      }
      for (i = 0; i < 3; i++) {
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = i << 2;
        i3 = 6 * (i + 3);
        Xtree_data[b_i].f1[i3 + 3] = T[i2];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[i3 + 4] = T[i2 + 1];
        if (b_i > loop_ub_tmp) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub_tmp, &tf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        Xtree_data[b_i].f1[i3 + 5] = T[i2 + 2];
      }
    }
    for (i = 0; i < 36; i++) {
      XDHOffset[i] = robot->Bodies[b_i]->SpatialInertia[i];
    }
    if (b_i + 1 > vB->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vB->size[1], &re_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i > Xtree->size[1] - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, Xtree->size[1] - 1, &jf_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > aB->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, aB->size[1], &se_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > fext->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, fext->size[1], &ue_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > vB->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, vB->size[1], &te_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    R[0] = 0.0;
    k = 6 * b_i + 2;
    R[3] = -vB_data[k];
    loop_ub_tmp = 6 * b_i + 1;
    R[6] = vB_data[loop_ub_tmp];
    R[1] = vB_data[k];
    R[4] = 0.0;
    R[7] = -vB_data[6 * b_i];
    R[2] = -vB_data[loop_ub_tmp];
    R[5] = vB_data[6 * b_i];
    R[8] = 0.0;
    d_R[18] = 0.0;
    k = 6 * b_i + 5;
    d_R[24] = -vB_data[k];
    loop_ub_tmp = 6 * b_i + 4;
    d_R[30] = vB_data[loop_ub_tmp];
    d_R[19] = vB_data[k];
    d_R[25] = 0.0;
    k = 6 * b_i + 3;
    d_R[31] = -vB_data[k];
    d_R[20] = -vB_data[loop_ub_tmp];
    d_R[26] = vB_data[k];
    d_R[32] = 0.0;
    for (i = 0; i < 3; i++) {
      a_idx_0 = R[3 * i];
      d_R[6 * i] = a_idx_0;
      d_R[6 * i + 3] = 0.0;
      k = 6 * (i + 3);
      d_R[k + 3] = a_idx_0;
      a_idx_0 = R[3 * i + 1];
      d_R[6 * i + 1] = a_idx_0;
      d_R[6 * i + 4] = 0.0;
      d_R[k + 4] = a_idx_0;
      a_idx_0 = R[3 * i + 2];
      d_R[6 * i + 2] = a_idx_0;
      d_R[6 * i + 5] = 0.0;
      d_R[k + 5] = a_idx_0;
    }
    for (i = 0; i < 6; i++) {
      a_idx_0 = 0.0;
      a_idx_1 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        b_idx_0 = XDHOffset[i + 6 * i2];
        i3 = i2 + 6 * b_i;
        a_idx_0 += b_idx_0 * vB_data[i3];
        a_idx_1 += b_idx_0 * aB_data[i3];
      }
      b_X[i] = a_idx_1;
      b_y[i] = a_idx_0;
    }
    for (i = 0; i < 6; i++) {
      a_idx_0 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        a_idx_0 += d_R[i + 6 * i2] * b_y[i2];
      }
      e_R[i] = a_idx_0;
    }
    if (b_i + 1 > f->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, f->size[1], &ve_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    for (i = 0; i < 6; i++) {
      a_idx_0 = 0.0;
      for (i2 = 0; i2 < 6; i2++) {
        a_idx_0 += Xtree_data[b_i].f1[i2 + 6 * i] * fext_data[i2 + 6 * b_i];
      }
      f_data[i + 6 * b_i] = (b_X[i] + e_R[i]) - a_idx_0;
    }
  }
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &aB);
  emxFree_real_T(sp, &vB);
  emxFree_cell_wrap_21(sp, &Xtree);
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)nb,
                                &hb_emlrtRTEI, (emlrtCTX)sp);
  for (b_i = 0; b_i < i1; b_i++) {
    loop_ub = i1 - b_i;
    st.site = &do_emlrtRSI;
    if ((loop_ub - 1 < 0) || (loop_ub - 1 > 2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 0, 2, &nf_emlrtBCI, &st);
    }
    obj = robot->Bodies[loop_ub - 1];
    if (obj->Index == 0.0) {
      b_st.site = &wk_emlrtRSI;
      emlrtErrorWithMessageIdR2018a(
          &b_st, &emlrtRTEI,
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
          "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
          &varargin_1[0]);
    }
    jnt = obj->JointInternal;
    if (!c_strcmp(jnt->Type)) {
      st.site = &eo_emlrtRSI;
      if ((loop_ub - 1 < 0) || (loop_ub - 1 > 2)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 0, 2, &pf_emlrtBCI, &st);
      }
      obj = robot->Bodies[loop_ub - 1];
      if (obj->Index == 0.0) {
        b_st.site = &wk_emlrtRSI;
        emlrtErrorWithMessageIdR2018a(
            &b_st, &emlrtRTEI,
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
            &varargin_1[0]);
      }
      jnt = obj->JointInternal;
      for (i = 0; i < 16; i++) {
        TDHOffset[i] = jnt->ChildToJointTransform[i];
      }
      for (i = 0; i < 3; i++) {
        R[3 * i] = TDHOffset[i];
        R[3 * i + 1] = TDHOffset[i + 4];
        R[3 * i + 2] = TDHOffset[i + 8];
      }
      for (i = 0; i < 9; i++) {
        b_R[i] = -R[i];
      }
      for (i = 0; i < 3; i++) {
        a_idx_0 = b_R[i] * TDHOffset[12];
        loop_ub_tmp = i << 2;
        TDHOffset[loop_ub_tmp] = R[3 * i];
        a_idx_0 += b_R[i + 3] * TDHOffset[13];
        TDHOffset[loop_ub_tmp + 1] = R[3 * i + 1];
        a_idx_0 += b_R[i + 6] * TDHOffset[14];
        TDHOffset[loop_ub_tmp + 2] = R[3 * i + 2];
        c_R[i] = a_idx_0;
      }
      TDHOffset[12] = c_R[0];
      TDHOffset[13] = c_R[1];
      TDHOffset[14] = c_R[2];
      TDHOffset[3] = 0.0;
      TDHOffset[7] = 0.0;
      TDHOffset[11] = 0.0;
      TDHOffset[15] = 1.0;
      st.site = &fo_emlrtRSI;
      b_st.site = &fo_emlrtRSI;
      if ((loop_ub - 1 < 0) || (loop_ub - 1 > 2)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 0, 2, &qf_emlrtBCI, &b_st);
      }
      obj = robot->Bodies[loop_ub - 1];
      if (obj->Index == 0.0) {
        c_st.site = &wk_emlrtRSI;
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI,
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase",
            "robotics:robotmanip:rigidbody:NoSuchPropertyForBase", 3, 4, 5,
            &varargin_1[0]);
      }
      jnt = obj->JointInternal;
      i = vJ->size[0] * vJ->size[1];
      vJ->size[0] = 6;
      vJ->size[1] = jnt->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(&st, vJ, i, &je_emlrtRTEI);
      vJ_data = vJ->data;
      k = 6 * jnt->MotionSubspace->size[1];
      for (i = 0; i < k; i++) {
        vJ_data[i] = jnt->MotionSubspace->data[i];
      }
      R[0] = 0.0;
      R[3] = -c_R[2];
      R[6] = c_R[1];
      R[1] = c_R[2];
      R[4] = 0.0;
      R[7] = -c_R[0];
      R[2] = -c_R[1];
      R[5] = c_R[0];
      R[8] = 0.0;
      for (i = 0; i < 3; i++) {
        a_idx_0 = R[i];
        a_idx_1 = R[i + 3];
        b_idx_0 = R[i + 6];
        for (i2 = 0; i2 < 3; i2++) {
          i3 = i2 << 2;
          b_R[i + 3 * i2] =
              (a_idx_0 * TDHOffset[i3] + a_idx_1 * TDHOffset[i3 + 1]) +
              b_idx_0 * TDHOffset[i3 + 2];
          XDHOffset[i2 + 6 * i] = TDHOffset[i2 + (i << 2)];
          XDHOffset[i2 + 6 * (i + 3)] = 0.0;
        }
      }
      for (i = 0; i < 3; i++) {
        XDHOffset[6 * i + 3] = b_R[3 * i];
        loop_ub_tmp = i << 2;
        k = 6 * (i + 3);
        XDHOffset[k + 3] = TDHOffset[loop_ub_tmp];
        XDHOffset[6 * i + 4] = b_R[3 * i + 1];
        XDHOffset[k + 4] = TDHOffset[loop_ub_tmp + 1];
        XDHOffset[6 * i + 5] = b_R[3 * i + 2];
        XDHOffset[k + 5] = TDHOffset[loop_ub_tmp + 2];
      }
      b_st.site = &in_emlrtRSI;
      mtimes(&b_st, XDHOffset, vJ, S);
      st.site = &go_emlrtRSI;
      if ((loop_ub < 1) || (loop_ub > f->size[1])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, f->size[1], &we_emlrtBCI,
                                      &st);
      }
      for (i6 = 0; i6 < 6; i6++) {
        a0[i6] = f_data[i6 + 6 * (loop_ub - 1)];
      }
      b_st.site = &in_emlrtRSI;
      f_mtimes(&b_st, S, a0, qddoti);
      S_data = qddoti->data;
      if ((loop_ub < 1) || (loop_ub > 3)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 3, &xe_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_idx_0 = robot->VelocityDoFMap[loop_ub - 1];
      b_idx_1 = robot->VelocityDoFMap[loop_ub + 2];
      if (b_idx_0 > b_idx_1) {
        i = -1;
        i2 = -1;
      } else {
        if (b_idx_0 != (int32_T)muDoubleScalarFloor(b_idx_0)) {
          emlrtIntegerCheckR2012b(b_idx_0, &cd_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_0 < 1) || ((int32_T)b_idx_0 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_0, 1, 2, &cf_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i = (int32_T)b_idx_0 - 2;
        if (b_idx_1 != (int32_T)muDoubleScalarFloor(b_idx_1)) {
          emlrtIntegerCheckR2012b(b_idx_1, &dd_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, 2, &df_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i2 = (int32_T)b_idx_1 - 1;
      }
      k = i2 - i;
      if (k != qddoti->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(k, qddoti->size[0], &g_emlrtECI,
                                        (emlrtCTX)sp);
      }
      for (i2 = 0; i2 < k; i2++) {
        tau_data[(i + i2) + 1] = S_data[i2];
      }
    }
    if ((loop_ub - 1 < 0) || (loop_ub - 1 > 2)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 0, 2, &of_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    b_idx_1 = robot->Bodies[loop_ub - 1]->ParentIndex;
    if (b_idx_1 > 0.0) {
      if ((loop_ub - 1 < 0) || (loop_ub - 1 > X->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(loop_ub - 1, 0, X->size[1] - 1,
                                      &ef_emlrtBCI, (emlrtCTX)sp);
      }
      if ((loop_ub < 1) || (loop_ub > f->size[1])) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, f->size[1], &af_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > f->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, f->size[1],
                                      &ye_emlrtBCI, (emlrtCTX)sp);
      }
      if (b_idx_1 != (int32_T)muDoubleScalarFloor(b_idx_1)) {
        emlrtIntegerCheckR2012b(b_idx_1, &bd_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)b_idx_1 < 1) || ((int32_T)b_idx_1 > f->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_idx_1, 1, f->size[1],
                                      &bf_emlrtBCI, (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        a_idx_0 = 0.0;
        for (i2 = 0; i2 < 6; i2++) {
          a_idx_0 += X_data[loop_ub - 1].f1[i2 + 6 * i] *
                     f_data[i2 + 6 * (loop_ub - 1)];
        }
        b_y[i] = f_data[i + 6 * ((int32_T)b_idx_1 - 1)] + a_idx_0;
      }
      for (i = 0; i < 6; i++) {
        f_data[i + 6 * ((int32_T)b_idx_1 - 1)] = b_y[i];
      }
    }
  }
  emxFree_real_T(sp, &qddoti);
  emxFree_real_T(sp, &S);
  emxFree_real_T(sp, &f);
  emxFree_real_T(sp, &vJ);
  emxFree_cell_wrap_21(sp, &X);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_RigidBodyTreeDynamics_massMat(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *robot,
                                     const real_T q_data[], emxArray_real_T *H,
                                     emxArray_real_T *lambda)
{
  static const char_T b_cv[5] = {'f', 'i', 'x', 'e', 'd'};
  cell_wrap_21 *Ic_data;
  cell_wrap_21 *X_data;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emlrtStack *r;
  emxArray_cell_wrap_21 *Ic;
  emxArray_cell_wrap_21 *X;
  emxArray_char_T *a;
  emxArray_real_T *Fi;
  emxArray_real_T *Hji;
  emxArray_real_T *Si;
  emxArray_real_T *b;
  emxArray_real_T *lambda_;
  emxArray_real_T *r2;
  rigidBodyJoint *r1;
  real_T b_Ic[36];
  real_T b_X[36];
  real_T T[16];
  real_T R[9];
  real_T b_R[9];
  real_T c_R[3];
  real_T b_q_data[2];
  real_T d;
  real_T d1;
  real_T nb;
  real_T p_idx_0;
  real_T p_idx_1;
  real_T pid;
  real_T vNum;
  real_T *Fi_data;
  real_T *H_data;
  real_T *Hji_data;
  real_T *lambda__data;
  real_T *lambda_data;
  int32_T b_Hji[2];
  int32_T b_iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i4;
  int32_T i5;
  int32_T idx;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  char_T *a_data;
  int8_T ii_data[3];
  int8_T nonFixedIndices_data[3];
  int8_T i3;
  boolean_T mask[3];
  boolean_T b_bool;
  boolean_T exitg3;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_cell_wrap_21(sp, &Ic, &qd_emlrtRTEI);
  nb = robot->NumBodies;
  i = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  emxEnsureCapacity_cell_wrap_21(sp, Ic, i, &fd_emlrtRTEI);
  if (!(nb >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nb, &gc_emlrtDCI, (emlrtCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(nb);
  if (nb != i) {
    emlrtIntegerCheckR2012b(nb, &fc_emlrtDCI, (emlrtCTX)sp);
  }
  emxInit_cell_wrap_21(sp, &X, &rd_emlrtRTEI);
  i1 = Ic->size[0] * Ic->size[1];
  Ic->size[1] = (int32_T)nb;
  emxEnsureCapacity_cell_wrap_21(sp, Ic, i1, &fd_emlrtRTEI);
  Ic_data = Ic->data;
  i1 = X->size[0] * X->size[1];
  X->size[0] = 1;
  emxEnsureCapacity_cell_wrap_21(sp, X, i1, &gd_emlrtRTEI);
  if (nb != i) {
    emlrtIntegerCheckR2012b(nb, &hc_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub_tmp = (int32_T)nb;
  i1 = X->size[0] * X->size[1];
  X->size[1] = loop_ub_tmp;
  emxEnsureCapacity_cell_wrap_21(sp, X, i1, &gd_emlrtRTEI);
  X_data = X->data;
  vNum = robot->VelocityNumber;
  if (!(vNum >= 0.0)) {
    emlrtNonNegativeCheckR2012b(vNum, &bc_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = (int32_T)muDoubleScalarFloor(vNum);
  if (vNum != i1) {
    emlrtIntegerCheckR2012b(vNum, &ac_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = H->size[0] * H->size[1];
  H->size[0] = (int32_T)vNum;
  emxEnsureCapacity_real_T(sp, H, i2, &hd_emlrtRTEI);
  if (vNum != i1) {
    emlrtIntegerCheckR2012b(vNum, &cc_emlrtDCI, (emlrtCTX)sp);
  }
  idx = (int32_T)vNum;
  i2 = H->size[0] * H->size[1];
  H->size[1] = idx;
  emxEnsureCapacity_real_T(sp, H, i2, &hd_emlrtRTEI);
  H_data = H->data;
  if (vNum != vNum) {
    emlrtIntegerCheckR2012b(vNum, &ic_emlrtDCI, (emlrtCTX)sp);
  }
  if (idx != i1) {
    emlrtIntegerCheckR2012b(vNum, &ic_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = idx * idx;
  for (i2 = 0; i2 < loop_ub; i2++) {
    H_data[i2] = 0.0;
  }
  emxInit_real_T(sp, &lambda_, 2, &id_emlrtRTEI);
  i2 = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  emxEnsureCapacity_real_T(sp, lambda_, i2, &id_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(nb, &dc_emlrtDCI, (emlrtCTX)sp);
  }
  i2 = lambda_->size[0] * lambda_->size[1];
  lambda_->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, lambda_, i2, &id_emlrtRTEI);
  lambda__data = lambda_->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(nb, &jc_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    lambda__data[i] = 0.0;
  }
  i = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  emxEnsureCapacity_real_T(sp, lambda, i, &jd_emlrtRTEI);
  if (idx != i1) {
    emlrtIntegerCheckR2012b(vNum, &ec_emlrtDCI, (emlrtCTX)sp);
  }
  i = lambda->size[0] * lambda->size[1];
  lambda->size[1] = idx;
  emxEnsureCapacity_real_T(sp, lambda, i, &jd_emlrtRTEI);
  lambda_data = lambda->data;
  if (idx != i1) {
    emlrtIntegerCheckR2012b(vNum, &kc_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < idx; i++) {
    lambda_data[i] = 0.0;
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, nb, mxDOUBLE_CLASS, (int32_T)nb,
                                &w_emlrtRTEI, (emlrtCTX)sp);
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    loop_ub = Ic->size[1] - 1;
    for (i = 0; i < 36; i++) {
      if (b_i > loop_ub) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, loop_ub, &gd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > 2) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, 2, &xd_emlrtBCI, (emlrtCTX)sp);
      }
      Ic_data[b_i].f1[i] = robot->Bodies[b_i]->SpatialInertia[i];
    }
    p_idx_0 = robot->PositionDoFMap[b_i];
    p_idx_1 = robot->PositionDoFMap[b_i + 3];
    if (p_idx_1 < p_idx_0) {
      st.site = &wl_emlrtRSI;
      d_rigidBodyJoint_transformBodyT(
          &st, RigidBody_get_Joint(&st, robot->Bodies[b_i]), T);
    } else {
      if (p_idx_0 > p_idx_1) {
        i = 0;
        i1 = 0;
      } else {
        if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
          emlrtIntegerCheckR2012b(p_idx_0, &fb_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, 2, &fc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i = (int32_T)p_idx_0 - 1;
        if (p_idx_1 != (int32_T)muDoubleScalarFloor(p_idx_1)) {
          emlrtIntegerCheckR2012b(p_idx_1, &gb_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)p_idx_1 < 1) || ((int32_T)p_idx_1 > 2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, 2, &gc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i1 = (int32_T)p_idx_1;
      }
      b_iv[0] = 1;
      loop_ub = i1 - i;
      b_iv[1] = loop_ub;
      st.site = &xl_emlrtRSI;
      indexShapeCheck(&st, 2, b_iv);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_q_data[i1] = q_data[i + i1];
      }
      st.site = &xl_emlrtRSI;
      c_rigidBodyJoint_transformBodyT(
          &st, RigidBody_get_Joint(&st, robot->Bodies[b_i]), b_q_data, loop_ub,
          T);
    }
    for (i = 0; i < 3; i++) {
      R[3 * i] = T[i];
      R[3 * i + 1] = T[i + 4];
      R[3 * i + 2] = T[i + 8];
    }
    for (i = 0; i < 9; i++) {
      b_R[i] = -R[i];
    }
    for (i = 0; i < 3; i++) {
      vNum = b_R[i] * T[12];
      idx = i << 2;
      T[idx] = R[3 * i];
      vNum += b_R[i + 3] * T[13];
      T[idx + 1] = R[3 * i + 1];
      vNum += b_R[i + 6] * T[14];
      T[idx + 2] = R[3 * i + 2];
      c_R[i] = vNum;
    }
    T[12] = c_R[0];
    T[13] = c_R[1];
    T[14] = c_R[2];
    T[3] = 0.0;
    T[7] = 0.0;
    T[11] = 0.0;
    T[15] = 1.0;
    R[0] = 0.0;
    R[3] = -c_R[2];
    R[6] = c_R[1];
    R[1] = c_R[2];
    R[4] = 0.0;
    R[7] = -c_R[0];
    R[2] = -c_R[1];
    R[5] = c_R[0];
    R[8] = 0.0;
    for (i = 0; i < 3; i++) {
      vNum = R[i];
      d = R[i + 3];
      d1 = R[i + 6];
      for (i1 = 0; i1 < 3; i1++) {
        i2 = i1 << 2;
        b_R[i + 3 * i1] = (vNum * T[i2] + d * T[i2 + 1]) + d1 * T[i2 + 2];
      }
    }
    idx = X->size[1] - 1;
    for (i = 0; i < 3; i++) {
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = i << 2;
      X_data[b_i].f1[6 * i] = T[i1];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 1] = T[i1 + 1];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 2] = T[i1 + 2];
    }
    for (i = 0; i < 3; i++) {
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = 6 * (i + 3);
      X_data[b_i].f1[i1] = 0.0;
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[i1 + 1] = 0.0;
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[i1 + 2] = 0.0;
    }
    for (i = 0; i < 3; i++) {
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 3] = b_R[3 * i];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 4] = b_R[3 * i + 1];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[6 * i + 5] = b_R[3 * i + 2];
    }
    for (i = 0; i < 3; i++) {
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = i << 2;
      i2 = 6 * (i + 3);
      X_data[b_i].f1[i2 + 3] = T[i1];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[i2 + 4] = T[i1 + 1];
      if (b_i > idx) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, idx, &yd_emlrtBCI, (emlrtCTX)sp);
      }
      X_data[b_i].f1[i2 + 5] = T[i1 + 2];
    }
  }
  emlrtForLoopVectorCheckR2021a(nb, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)nb,
                                &x_emlrtRTEI, (emlrtCTX)sp);
  emxInit_real_T(sp, &Si, 2, &sd_emlrtRTEI);
  emxInit_real_T(sp, &Fi, 2, &td_emlrtRTEI);
  emxInit_real_T(sp, &Hji, 2, &ud_emlrtRTEI);
  emxInit_real_T(sp, &b, 2, &ld_emlrtRTEI);
  emxInit_char_T(sp, &a, &md_emlrtRTEI);
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    c_i = loop_ub_tmp - b_i;
    if ((c_i - 1 < 0) || (c_i - 1 > 2)) {
      emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, 2, &hd_emlrtBCI, (emlrtCTX)sp);
    }
    pid = robot->Bodies[c_i - 1]->ParentIndex;
    if ((c_i < 1) || (c_i > 3)) {
      emlrtDynamicBoundsCheckR2012b(c_i, 1, 3, &hc_emlrtBCI, (emlrtCTX)sp);
    }
    p_idx_0 = robot->VelocityDoFMap[c_i - 1];
    p_idx_1 = robot->VelocityDoFMap[c_i + 2];
    if (pid > 0.0) {
      if ((c_i - 1 < 0) || (c_i - 1 > X->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, X->size[1] - 1, &ad_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((c_i - 1 < 0) || (c_i - 1 > Ic->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Ic->size[1] - 1, &bd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if ((c_i - 1 < 0) || (c_i - 1 > X->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, X->size[1] - 1, &cd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 6; i++) {
        for (i1 = 0; i1 < 6; i1++) {
          vNum = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            vNum += X_data[c_i - 1].f1[i2 + 6 * i] *
                    Ic_data[c_i - 1].f1[i2 + 6 * i1];
          }
          b_X[i + 6 * i1] = vNum;
        }
      }
      loop_ub = Ic->size[1] - 1;
      for (i = 0; i < 6; i++) {
        for (i1 = 0; i1 < 6; i1++) {
          vNum = 0.0;
          for (i2 = 0; i2 < 6; i2++) {
            vNum += b_X[i + 6 * i2] * X_data[c_i - 1].f1[i2 + 6 * i1];
          }
          if (pid != (int32_T)muDoubleScalarFloor(pid)) {
            emlrtIntegerCheckR2012b(pid, &lc_emlrtDCI, (emlrtCTX)sp);
          }
          if (((int32_T)pid - 1 < 0) || ((int32_T)pid - 1 > Ic->size[1] - 1)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, Ic->size[1] - 1,
                                          &id_emlrtBCI, (emlrtCTX)sp);
          }
          idx = i + 6 * i1;
          b_Ic[idx] = Ic_data[(int32_T)pid - 1].f1[idx] + vNum;
        }
      }
      for (i = 0; i < 36; i++) {
        if (pid != (int32_T)muDoubleScalarFloor(pid)) {
          emlrtIntegerCheckR2012b(pid, &mc_emlrtDCI, (emlrtCTX)sp);
        }
        if (((int32_T)pid - 1 < 0) || ((int32_T)pid - 1 > loop_ub)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, loop_ub,
                                        &jd_emlrtBCI, (emlrtCTX)sp);
        }
        Ic_data[(int32_T)pid - 1].f1[i] = b_Ic[i];
      }
      if ((c_i < 1) || (c_i > lambda_->size[1])) {
        emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1], &kd_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      lambda__data[c_i - 1] = pid;
      do {
        exitg1 = 0;
        if ((c_i < 1) || (c_i > lambda_->size[1])) {
          emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1], &ld_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        vNum = lambda__data[c_i - 1];
        if (vNum > 0.0) {
          st.site = &yl_emlrtRSI;
          r = &st;
          if ((c_i < 1) || (c_i > lambda_->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                          &nd_emlrtBCI, &st);
          }
          d = (int32_T)muDoubleScalarFloor(vNum);
          if (vNum != d) {
            emlrtIntegerCheckR2012b(vNum, &nc_emlrtDCI, &st);
          }
          if (((int32_T)vNum - 1 < 0) || ((int32_T)vNum - 1 > 2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, 2, &md_emlrtBCI,
                                          &st);
          }
          RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
          b_st.site = &yl_emlrtRSI;
          r = &b_st;
          if ((c_i < 1) || (c_i > lambda_->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                          &nd_emlrtBCI, &b_st);
          }
          if (vNum != d) {
            emlrtIntegerCheckR2012b(vNum, &nc_emlrtDCI, &b_st);
          }
          if (((int32_T)vNum - 1 < 0) || ((int32_T)vNum - 1 > 2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, 2, &md_emlrtBCI,
                                          &b_st);
          }
          r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
          loop_ub = r1->Type->size[1] - 1;
          i = a->size[0] * a->size[1];
          a->size[0] = 1;
          emxEnsureCapacity_char_T(&b_st, a, i, &md_emlrtRTEI);
          c_st.site = &yl_emlrtRSI;
          r = &c_st;
          if ((c_i < 1) || (c_i > lambda_->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                          &nd_emlrtBCI, &c_st);
          }
          if (vNum != d) {
            emlrtIntegerCheckR2012b(vNum, &nc_emlrtDCI, &c_st);
          }
          if (((int32_T)vNum - 1 < 0) || ((int32_T)vNum - 1 > 2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, 2, &md_emlrtBCI,
                                          &c_st);
          }
          r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
          i = a->size[0] * a->size[1];
          a->size[1] = r1->Type->size[1];
          emxEnsureCapacity_char_T(&c_st, a, i, &md_emlrtRTEI);
          a_data = a->data;
          d_st.site = &yl_emlrtRSI;
          r = &d_st;
          if ((c_i < 1) || (c_i > lambda_->size[1])) {
            emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                          &nd_emlrtBCI, &d_st);
          }
          if (vNum != d) {
            emlrtIntegerCheckR2012b(vNum, &nc_emlrtDCI, &d_st);
          }
          if (((int32_T)vNum - 1 < 0) || ((int32_T)vNum - 1 > 2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, 2, &md_emlrtBCI,
                                          &d_st);
          }
          r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)vNum - 1]);
          for (i = 0; i <= loop_ub; i++) {
            a_data[i] = r1->Type->data[i];
          }
          b_bool = false;
          if (a->size[1] == 5) {
            idx = 0;
            do {
              exitg2 = 0;
              if (idx < 5) {
                if (a_data[idx] != b_cv[idx]) {
                  exitg2 = 1;
                } else {
                  idx++;
                }
              } else {
                b_bool = true;
                exitg2 = 1;
              }
            } while (exitg2 == 0);
          }
          if (b_bool) {
            if ((c_i < 1) || (c_i > lambda_->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                            &pd_emlrtBCI, &d_st);
            }
            if (vNum != d) {
              emlrtIntegerCheckR2012b(vNum, &oc_emlrtDCI, &d_st);
            }
            if (((int32_T)vNum - 1 < 0) || ((int32_T)vNum - 1 > 2)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)vNum - 1, 0, 2,
                                            &od_emlrtBCI, &d_st);
            }
            if ((c_i < 1) || (c_i > lambda_->size[1])) {
              emlrtDynamicBoundsCheckR2012b(c_i, 1, lambda_->size[1],
                                            &qd_emlrtBCI, &d_st);
            }
            lambda__data[c_i - 1] =
                robot->Bodies[(int32_T)vNum - 1]->ParentIndex;
          } else {
            exitg1 = 1;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }
    vNum = robot->VelocityDoFMap[c_i - 1];
    nb = robot->VelocityDoFMap[c_i + 2];
    if (vNum <= nb) {
      st.site = &am_emlrtRSI;
      r = &st;
      r1 = RigidBody_get_Joint(r, robot->Bodies[c_i - 1]);
      for (i = 0; i < 16; i++) {
        T[i] = r1->ChildToJointTransform[i];
      }
      for (i = 0; i < 3; i++) {
        R[3 * i] = T[i];
        R[3 * i + 1] = T[i + 4];
        R[3 * i + 2] = T[i + 8];
      }
      for (i = 0; i < 9; i++) {
        b_R[i] = -R[i];
      }
      for (i = 0; i < 3; i++) {
        vNum = b_R[i] * T[12];
        idx = i << 2;
        T[idx] = R[3 * i];
        vNum += b_R[i + 3] * T[13];
        T[idx + 1] = R[3 * i + 1];
        vNum += b_R[i + 6] * T[14];
        T[idx + 2] = R[3 * i + 2];
        c_R[i] = vNum;
      }
      T[12] = c_R[0];
      T[13] = c_R[1];
      T[14] = c_R[2];
      T[3] = 0.0;
      T[7] = 0.0;
      T[11] = 0.0;
      T[15] = 1.0;
      b_st.site = &bm_emlrtRSI;
      c_st.site = &bm_emlrtRSI;
      r = &c_st;
      RigidBody_get_Joint(r, robot->Bodies[c_i - 1]);
      d_st.site = &bm_emlrtRSI;
      r = &d_st;
      r1 = RigidBody_get_Joint(r, robot->Bodies[c_i - 1]);
      loop_ub = 6 * r1->MotionSubspace->size[1];
      i = b->size[0] * b->size[1];
      b->size[0] = 6;
      e_st.site = &bm_emlrtRSI;
      r = &e_st;
      r1 = RigidBody_get_Joint(r, robot->Bodies[c_i - 1]);
      b->size[1] = r1->MotionSubspace->size[1];
      emxEnsureCapacity_real_T(&e_st, b, i, &ld_emlrtRTEI);
      Hji_data = b->data;
      f_st.site = &bm_emlrtRSI;
      r = &f_st;
      r1 = RigidBody_get_Joint(r, robot->Bodies[c_i - 1]);
      for (i = 0; i < loop_ub; i++) {
        Hji_data[i] = r1->MotionSubspace->data[i];
      }
      R[0] = 0.0;
      R[3] = -c_R[2];
      R[6] = c_R[1];
      R[1] = c_R[2];
      R[4] = 0.0;
      R[7] = -c_R[0];
      R[2] = -c_R[1];
      R[5] = c_R[0];
      R[8] = 0.0;
      for (i = 0; i < 3; i++) {
        vNum = R[i];
        d = R[i + 3];
        d1 = R[i + 6];
        for (i1 = 0; i1 < 3; i1++) {
          i2 = i1 << 2;
          b_R[i + 3 * i1] = (vNum * T[i2] + d * T[i2 + 1]) + d1 * T[i2 + 2];
          b_X[i1 + 6 * i] = T[i1 + (i << 2)];
          b_X[i1 + 6 * (i + 3)] = 0.0;
        }
      }
      for (i = 0; i < 3; i++) {
        b_X[6 * i + 3] = b_R[3 * i];
        idx = i << 2;
        loop_ub = 6 * (i + 3);
        b_X[loop_ub + 3] = T[idx];
        b_X[6 * i + 4] = b_R[3 * i + 1];
        b_X[loop_ub + 4] = T[idx + 1];
        b_X[6 * i + 5] = b_R[3 * i + 2];
        b_X[loop_ub + 5] = T[idx + 2];
      }
      g_st.site = &in_emlrtRSI;
      mtimes(&g_st, b_X, b, Si);
      b_st.site = &cm_emlrtRSI;
      if ((c_i - 1 < 0) || (c_i - 1 > Ic->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, Ic->size[1] - 1, &dd_emlrtBCI,
                                      &b_st);
      }
      memcpy(&b_X[0], &Ic_data[c_i - 1].f1[0], 36U * sizeof(real_T));
      c_st.site = &in_emlrtRSI;
      mtimes(&c_st, b_X, Si, Fi);
      Fi_data = Fi->data;
      if (p_idx_0 > p_idx_1) {
        i2 = 0;
        i4 = 0;
        i = 0;
        i1 = 0;
      } else {
        i = (int32_T)muDoubleScalarFloor(p_idx_0);
        if (p_idx_0 != i) {
          emlrtIntegerCheckR2012b(p_idx_0, &lb_emlrtDCI, &st);
        }
        i1 = (int32_T)p_idx_0;
        if ((p_idx_0 < 1.0) || (i1 > H->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, H->size[0],
                                        &lc_emlrtBCI, &st);
        }
        i2 = (int32_T)p_idx_0 - 1;
        i5 = (int32_T)muDoubleScalarFloor(p_idx_1);
        if (p_idx_1 != i5) {
          emlrtIntegerCheckR2012b(p_idx_1, &mb_emlrtDCI, &st);
        }
        i4 = (int32_T)p_idx_1;
        if ((p_idx_1 < 1.0) || (i4 > H->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, H->size[0],
                                        &mc_emlrtBCI, &st);
        }
        if (i1 != i) {
          emlrtIntegerCheckR2012b(p_idx_0, &nb_emlrtDCI, &st);
        }
        if ((p_idx_0 < 1.0) || (i1 > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, H->size[1],
                                        &nc_emlrtBCI, &st);
        }
        i = i2;
        if (i4 != i5) {
          emlrtIntegerCheckR2012b(p_idx_1, &ob_emlrtDCI, &st);
        }
        if ((p_idx_1 < 1.0) || (i4 > H->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, H->size[1],
                                        &oc_emlrtBCI, &st);
        }
        i1 = i4;
      }
      b_st.site = &dm_emlrtRSI;
      c_st.site = &in_emlrtRSI;
      b_mtimes(&c_st, Si, Fi, Hji);
      Hji_data = Hji->data;
      b_iv[0] = i4 - i2;
      b_iv[1] = i1 - i;
      emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &Hji->size[0], 2, &c_emlrtECI,
                                    &st);
      loop_ub = Hji->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        idx = Hji->size[0];
        for (i5 = 0; i5 < idx; i5++) {
          H_data[(i2 + i5) + H->size[0] * (i + i1)] =
              Hji_data[i5 + Hji->size[0] * i1];
        }
      }
      if ((c_i - 1 < 0) || (c_i - 1 > X->size[1] - 1)) {
        emlrtDynamicBoundsCheckR2012b(c_i - 1, 0, X->size[1] - 1, &ed_emlrtBCI,
                                      &st);
      }
      b_st.site = &em_emlrtRSI;
      i = b->size[0] * b->size[1];
      b->size[0] = 6;
      b->size[1] = Fi->size[1];
      emxEnsureCapacity_real_T(&b_st, b, i, &nd_emlrtRTEI);
      Hji_data = b->data;
      loop_ub = Fi->size[0] * Fi->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        Hji_data[i] = Fi_data[i];
      }
      memcpy(&b_X[0], &X_data[c_i - 1].f1[0], 36U * sizeof(real_T));
      c_st.site = &in_emlrtRSI;
      c_mtimes(&c_st, b_X, b, Fi);
      Fi_data = Fi->data;
      while (pid > 0.0) {
        b_st.site = &fm_emlrtRSI;
        r = &b_st;
        i = (int32_T)muDoubleScalarFloor(pid);
        if (pid != i) {
          emlrtIntegerCheckR2012b(pid, &rc_emlrtDCI, &b_st);
        }
        if ((pid - 1.0 < 0.0) || (pid - 1.0 > 2.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 2, &vd_emlrtBCI,
                                        &b_st);
        }
        r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)pid - 1]);
        for (i1 = 0; i1 < 16; i1++) {
          T[i1] = r1->ChildToJointTransform[i1];
        }
        for (i1 = 0; i1 < 3; i1++) {
          R[3 * i1] = T[i1];
          R[3 * i1 + 1] = T[i1 + 4];
          R[3 * i1 + 2] = T[i1 + 8];
        }
        for (i1 = 0; i1 < 9; i1++) {
          b_R[i1] = -R[i1];
        }
        for (i1 = 0; i1 < 3; i1++) {
          vNum = b_R[i1] * T[12];
          idx = i1 << 2;
          T[idx] = R[3 * i1];
          vNum += b_R[i1 + 3] * T[13];
          T[idx + 1] = R[3 * i1 + 1];
          vNum += b_R[i1 + 6] * T[14];
          T[idx + 2] = R[3 * i1 + 2];
          c_R[i1] = vNum;
        }
        T[12] = c_R[0];
        T[13] = c_R[1];
        T[14] = c_R[2];
        T[3] = 0.0;
        T[7] = 0.0;
        T[11] = 0.0;
        T[15] = 1.0;
        c_st.site = &gm_emlrtRSI;
        d_st.site = &gm_emlrtRSI;
        r = &d_st;
        i1 = (int32_T)pid;
        if (i1 != i) {
          emlrtIntegerCheckR2012b(pid, &sc_emlrtDCI, &d_st);
        }
        if ((pid - 1.0 < 0.0) || (pid - 1.0 > 2.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 2, &wd_emlrtBCI,
                                        &d_st);
        }
        RigidBody_get_Joint(r, robot->Bodies[(int32_T)pid - 1]);
        e_st.site = &gm_emlrtRSI;
        r = &e_st;
        if (i1 != i) {
          emlrtIntegerCheckR2012b(pid, &sc_emlrtDCI, &e_st);
        }
        if ((pid - 1.0 < 0.0) || (pid - 1.0 > 2.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 2, &wd_emlrtBCI,
                                        &e_st);
        }
        r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)pid - 1]);
        loop_ub = 6 * r1->MotionSubspace->size[1];
        i2 = b->size[0] * b->size[1];
        b->size[0] = 6;
        emxEnsureCapacity_real_T(&e_st, b, i2, &od_emlrtRTEI);
        f_st.site = &gm_emlrtRSI;
        r = &f_st;
        if (i1 != i) {
          emlrtIntegerCheckR2012b(pid, &sc_emlrtDCI, &f_st);
        }
        if ((pid - 1.0 < 0.0) || (pid - 1.0 > 2.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 2, &wd_emlrtBCI,
                                        &f_st);
        }
        r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)pid - 1]);
        i2 = b->size[0] * b->size[1];
        b->size[1] = r1->MotionSubspace->size[1];
        emxEnsureCapacity_real_T(&f_st, b, i2, &od_emlrtRTEI);
        Hji_data = b->data;
        g_st.site = &gm_emlrtRSI;
        r = &g_st;
        if (i1 != i) {
          emlrtIntegerCheckR2012b(pid, &sc_emlrtDCI, &g_st);
        }
        if ((pid - 1.0 < 0.0) || (pid - 1.0 > 2.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, 2, &wd_emlrtBCI,
                                        &g_st);
        }
        r1 = RigidBody_get_Joint(r, robot->Bodies[(int32_T)pid - 1]);
        for (i2 = 0; i2 < loop_ub; i2++) {
          Hji_data[i2] = r1->MotionSubspace->data[i2];
        }
        R[0] = 0.0;
        R[3] = -c_R[2];
        R[6] = c_R[1];
        R[1] = c_R[2];
        R[4] = 0.0;
        R[7] = -c_R[0];
        R[2] = -c_R[1];
        R[5] = c_R[0];
        R[8] = 0.0;
        for (i2 = 0; i2 < 3; i2++) {
          vNum = R[i2];
          d = R[i2 + 3];
          d1 = R[i2 + 6];
          for (i5 = 0; i5 < 3; i5++) {
            i4 = i5 << 2;
            b_R[i2 + 3 * i5] = (vNum * T[i4] + d * T[i4 + 1]) + d1 * T[i4 + 2];
            b_X[i5 + 6 * i2] = T[i5 + (i2 << 2)];
            b_X[i5 + 6 * (i2 + 3)] = 0.0;
          }
        }
        for (i2 = 0; i2 < 3; i2++) {
          b_X[6 * i2 + 3] = b_R[3 * i2];
          idx = i2 << 2;
          loop_ub = 6 * (i2 + 3);
          b_X[loop_ub + 3] = T[idx];
          b_X[6 * i2 + 4] = b_R[3 * i2 + 1];
          b_X[loop_ub + 4] = T[idx + 1];
          b_X[6 * i2 + 5] = b_R[3 * i2 + 2];
          b_X[loop_ub + 5] = T[idx + 2];
        }
        h_st.site = &in_emlrtRSI;
        mtimes(&h_st, b_X, b, Si);
        if (i1 != i) {
          emlrtIntegerCheckR2012b(pid, &hb_emlrtDCI, &b_st);
        }
        if ((pid < 1.0) || (pid > 3.0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid, 1, 3, &ic_emlrtBCI,
                                        &b_st);
        }
        vNum = robot->VelocityDoFMap[i1 - 1];
        nb = robot->VelocityDoFMap[i1 + 2];
        if (vNum <= nb) {
          c_st.site = &hm_emlrtRSI;
          d_st.site = &in_emlrtRSI;
          b_mtimes(&d_st, Si, Fi, Hji);
          Hji_data = Hji->data;
          if (vNum > nb) {
            i = 0;
            i2 = 0;
          } else {
            if (vNum != (int32_T)muDoubleScalarFloor(vNum)) {
              emlrtIntegerCheckR2012b(vNum, &pb_emlrtDCI, &b_st);
            }
            if (((int32_T)vNum < 1) || ((int32_T)vNum > H->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, H->size[0],
                                            &pc_emlrtBCI, &b_st);
            }
            i = (int32_T)vNum - 1;
            if (nb != (int32_T)muDoubleScalarFloor(nb)) {
              emlrtIntegerCheckR2012b(nb, &qb_emlrtDCI, &b_st);
            }
            if (((int32_T)nb < 1) || ((int32_T)nb > H->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)nb, 1, H->size[0],
                                            &qc_emlrtBCI, &b_st);
            }
            i2 = (int32_T)nb;
          }
          if (p_idx_0 > p_idx_1) {
            i5 = 0;
            i4 = 0;
          } else {
            if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
              emlrtIntegerCheckR2012b(p_idx_0, &rb_emlrtDCI, &b_st);
            }
            if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > H->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, H->size[1],
                                            &rc_emlrtBCI, &b_st);
            }
            i5 = (int32_T)p_idx_0 - 1;
            if (p_idx_1 != (int32_T)muDoubleScalarFloor(p_idx_1)) {
              emlrtIntegerCheckR2012b(p_idx_1, &sb_emlrtDCI, &b_st);
            }
            if (((int32_T)p_idx_1 < 1) || ((int32_T)p_idx_1 > H->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, H->size[1],
                                            &sc_emlrtBCI, &b_st);
            }
            i4 = (int32_T)p_idx_1;
          }
          b_iv[0] = i2 - i;
          b_iv[1] = i4 - i5;
          emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &Hji->size[0], 2,
                                        &d_emlrtECI, &b_st);
          loop_ub = Hji->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            idx = Hji->size[0];
            for (i4 = 0; i4 < idx; i4++) {
              H_data[(i + i4) + H->size[0] * (i5 + i2)] =
                  Hji_data[i4 + Hji->size[0] * i2];
            }
          }
          if (p_idx_0 > p_idx_1) {
            i = 0;
            i2 = 0;
          } else {
            if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
              emlrtIntegerCheckR2012b(p_idx_0, &tb_emlrtDCI, &b_st);
            }
            if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > H->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, H->size[0],
                                            &tc_emlrtBCI, &b_st);
            }
            i = (int32_T)p_idx_0 - 1;
            if (p_idx_1 != (int32_T)muDoubleScalarFloor(p_idx_1)) {
              emlrtIntegerCheckR2012b(p_idx_1, &ub_emlrtDCI, &b_st);
            }
            if (((int32_T)p_idx_1 < 1) || ((int32_T)p_idx_1 > H->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, H->size[0],
                                            &uc_emlrtBCI, &b_st);
            }
            i2 = (int32_T)p_idx_1;
          }
          if (vNum > nb) {
            i5 = 0;
            i4 = 0;
          } else {
            if (vNum != (int32_T)muDoubleScalarFloor(vNum)) {
              emlrtIntegerCheckR2012b(vNum, &vb_emlrtDCI, &b_st);
            }
            if (((int32_T)vNum < 1) || ((int32_T)vNum > H->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, H->size[1],
                                            &vc_emlrtBCI, &b_st);
            }
            i5 = (int32_T)vNum - 1;
            if (nb != (int32_T)muDoubleScalarFloor(nb)) {
              emlrtIntegerCheckR2012b(nb, &wb_emlrtDCI, &b_st);
            }
            if (((int32_T)nb < 1) || ((int32_T)nb > H->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)nb, 1, H->size[1],
                                            &wc_emlrtBCI, &b_st);
            }
            i4 = (int32_T)nb;
          }
          b_iv[0] = i2 - i;
          b_iv[1] = i4 - i5;
          b_Hji[0] = Hji->size[1];
          b_Hji[1] = Hji->size[0];
          emlrtSubAssignSizeCheckR2012b(&b_iv[0], 2, &b_Hji[0], 2, &e_emlrtECI,
                                        &b_st);
          loop_ub = Hji->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            idx = Hji->size[1];
            for (i4 = 0; i4 < idx; i4++) {
              H_data[(i + i4) + H->size[0] * (i5 + i2)] =
                  Hji_data[i2 + Hji->size[0] * i4];
            }
          }
        }
        if ((pid - 1.0 < 0.0) || (i1 - 1 > X->size[1] - 1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pid - 1, 0, X->size[1] - 1,
                                        &fd_emlrtBCI, &b_st);
        }
        c_st.site = &im_emlrtRSI;
        i = b->size[0] * b->size[1];
        b->size[0] = 6;
        b->size[1] = Fi->size[1];
        emxEnsureCapacity_real_T(&c_st, b, i, &pd_emlrtRTEI);
        Hji_data = b->data;
        loop_ub = Fi->size[0] * Fi->size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          Hji_data[i] = Fi_data[i];
        }
        memcpy(&b_X[0], &X_data[(int32_T)pid - 1].f1[0], 36U * sizeof(real_T));
        d_st.site = &in_emlrtRSI;
        c_mtimes(&d_st, b_X, b, Fi);
        Fi_data = Fi->data;
        pid = robot->Bodies[i1 - 1]->ParentIndex;
      }
    }
  }
  emxFree_char_T(sp, &a);
  emxFree_real_T(sp, &b);
  emxFree_real_T(sp, &Hji);
  emxFree_real_T(sp, &Fi);
  emxFree_real_T(sp, &Si);
  emxFree_cell_wrap_21(sp, &X);
  emxFree_cell_wrap_21(sp, &Ic);
  mask[0] = (robot->VelocityDoFMap[0] <= robot->VelocityDoFMap[3]);
  mask[1] = (robot->VelocityDoFMap[1] <= robot->VelocityDoFMap[4]);
  mask[2] = (robot->VelocityDoFMap[2] <= robot->VelocityDoFMap[5]);
  st.site = &jm_emlrtRSI;
  b_st.site = &ln_emlrtRSI;
  c_st.site = &mn_emlrtRSI;
  idx = 0;
  loop_ub = 0;
  exitg3 = false;
  while ((!exitg3) && (loop_ub < 3)) {
    if (mask[loop_ub]) {
      idx++;
      ii_data[idx - 1] = (int8_T)(loop_ub + 1);
      if (idx >= 3) {
        exitg3 = true;
      } else {
        loop_ub++;
      }
    } else {
      loop_ub++;
    }
  }
  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }
  b_iv[0] = 1;
  b_iv[1] = loop_ub;
  d_st.site = &nn_emlrtRSI;
  indexShapeCheck(&d_st, 3, b_iv);
  if (0 <= loop_ub - 1) {
    memcpy(&nonFixedIndices_data[0], &ii_data[0], loop_ub * sizeof(int8_T));
  }
  emxInit_real_T(sp, &r2, 2, &vd_emlrtRTEI);
  Hji_data = r2->data;
  for (c_i = 0; c_i < loop_ub; c_i++) {
    if (c_i + 1 > (int8_T)loop_ub) {
      emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, (int8_T)loop_ub, &jc_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    idx = nonFixedIndices_data[c_i];
    p_idx_0 = robot->VelocityDoFMap[idx - 1];
    p_idx_1 = robot->VelocityDoFMap[idx + 2];
    st.site = &km_emlrtRSI;
    b_st.site = &on_emlrtRSI;
    if (muDoubleScalarIsNaN(p_idx_0) || muDoubleScalarIsNaN(p_idx_1)) {
      i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, r2, i, &kd_emlrtRTEI);
      Hji_data = r2->data;
      Hji_data[0] = rtNaN;
    } else if (p_idx_1 < p_idx_0) {
      r2->size[0] = 1;
      r2->size[1] = 0;
    } else if ((muDoubleScalarIsInf(p_idx_0) || muDoubleScalarIsInf(p_idx_1)) &&
               (p_idx_0 == p_idx_1)) {
      i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = 1;
      emxEnsureCapacity_real_T(&b_st, r2, i, &kd_emlrtRTEI);
      Hji_data = r2->data;
      Hji_data[0] = rtNaN;
    } else if (muDoubleScalarFloor(p_idx_0) == p_idx_0) {
      i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      idx = (int32_T)muDoubleScalarFloor(p_idx_1 - p_idx_0);
      r2->size[1] = idx + 1;
      emxEnsureCapacity_real_T(&b_st, r2, i, &kd_emlrtRTEI);
      Hji_data = r2->data;
      for (i = 0; i <= idx; i++) {
        Hji_data[i] = p_idx_0 + (real_T)i;
      }
    } else {
      c_st.site = &pn_emlrtRSI;
      eml_float_colon(&c_st, p_idx_0, p_idx_1, r2);
      Hji_data = r2->data;
    }
    vNum = (p_idx_1 - p_idx_0) + 1.0;
    if (!(vNum >= 0.0)) {
      emlrtNonNegativeCheckR2012b(vNum, &ib_emlrtDCI, (emlrtCTX)sp);
    }
    if (vNum != (int32_T)muDoubleScalarFloor(vNum)) {
      emlrtIntegerCheckR2012b(vNum, &jb_emlrtDCI, (emlrtCTX)sp);
    }
    b_iv[0] = 1;
    b_iv[1] = (int32_T)vNum;
    b_Hji[0] = (*(int32_T(*)[2])r2->size)[0];
    b_Hji[1] = (*(int32_T(*)[2])r2->size)[1];
    emlrtSizeEqCheckNDR2012b(&b_Hji[0], &b_iv[0], &b_emlrtECI, (emlrtCTX)sp);
    if (p_idx_0 > p_idx_1) {
      i = 0;
      i1 = 0;
    } else {
      if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
        emlrtIntegerCheckR2012b(p_idx_0, &xb_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, lambda->size[1],
                                      &xc_emlrtBCI, (emlrtCTX)sp);
      }
      i = (int32_T)p_idx_0 - 1;
      if (p_idx_1 != (int32_T)muDoubleScalarFloor(p_idx_1)) {
        emlrtIntegerCheckR2012b(p_idx_1, &yb_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)p_idx_1 < 1) || ((int32_T)p_idx_1 > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_1, 1, lambda->size[1],
                                      &yc_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)p_idx_1;
    }
    i1 -= i;
    if (i1 != r2->size[1]) {
      emlrtSubAssignSizeCheck1dR2017a(i1, r2->size[1], &f_emlrtECI,
                                      (emlrtCTX)sp);
    }
    idx = r2->size[1];
    for (i1 = 0; i1 < idx; i1++) {
      lambda_data[i + i1] = Hji_data[i1] - 1.0;
    }
    i3 = nonFixedIndices_data[c_i];
    if (i3 > lambda_->size[1]) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, lambda_->size[1], &rd_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    vNum = lambda__data[i3 - 1];
    if (vNum == 0.0) {
      if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
        emlrtIntegerCheckR2012b(p_idx_0, &pc_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, lambda->size[1],
                                      &sd_emlrtBCI, (emlrtCTX)sp);
      }
      lambda_data[(int32_T)p_idx_0 - 1] = 0.0;
    } else {
      if (i3 > lambda_->size[1]) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, lambda_->size[1], &td_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (vNum != (int32_T)muDoubleScalarFloor(vNum)) {
        emlrtIntegerCheckR2012b(vNum, &kb_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)vNum < 1) || ((int32_T)vNum > 3)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)vNum, 1, 3, &kc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      nb = robot->VelocityDoFMap[(int32_T)vNum + 2];
      if (p_idx_0 != (int32_T)muDoubleScalarFloor(p_idx_0)) {
        emlrtIntegerCheckR2012b(p_idx_0, &qc_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)p_idx_0 < 1) || ((int32_T)p_idx_0 > lambda->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)p_idx_0, 1, lambda->size[1],
                                      &ud_emlrtBCI, (emlrtCTX)sp);
      }
      lambda_data[(int32_T)p_idx_0 - 1] = nb;
    }
  }
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &lambda_);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (RigidBodyTreeDynamics.c) */
