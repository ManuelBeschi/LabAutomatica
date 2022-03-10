/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * schur.c
 *
 * Code generation for function 'schur'
 *
 */

/* Include files */
#include "schur.h"
#include "anyNonFinite.h"
#include "eml_int_forloop_overflow_check.h"
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xhseqr.h"
#include "xnrm2.h"
#include "xscal.h"
#include "xzlarf.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo kd_emlrtRSI = {
    35,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo ld_emlrtRSI = {
    52,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo md_emlrtRSI = {
    54,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo nd_emlrtRSI = {
    83,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo od_emlrtRSI = {
    18,       /* lineNo */
    "xgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    31,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    35,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    43,        /* lineNo */
    "xzgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzgehrd.m" /* pathName */
};

static emlrtRSInfo de_emlrtRSI = {
    84,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo ee_emlrtRSI = {
    91,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = {
    58,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

/* Function Definitions */
void schur(const emlrtStack *sp, real_T A[9], real_T V[9])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  real_T work[3];
  real_T tau[2];
  real_T b_alpha1_tmp;
  real_T xnorm;
  int32_T alpha1_tmp;
  int32_T b;
  int32_T exitg1;
  int32_T i;
  int32_T ia;
  int32_T iac;
  int32_T ic0;
  int32_T im1n_tmp;
  int32_T in;
  int32_T iv0;
  int32_T j;
  int32_T k;
  int32_T knt;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kd_emlrtRSI;
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
  if (anyNonFinite(A)) {
    for (j = 0; j < 9; j++) {
      V[j] = rtNaN;
    }
    knt = 2;
    for (j = 0; j < 2; j++) {
      if (knt <= 3) {
        memset(&V[(j * 3 + knt) + -1], 0, (-knt + 4) * sizeof(real_T));
      }
      knt++;
    }
  } else {
    st.site = &ld_emlrtRSI;
    b_st.site = &od_emlrtRSI;
    work[0] = 0.0;
    work[1] = 0.0;
    work[2] = 0.0;
    for (i = 0; i < 2; i++) {
      im1n_tmp = i * 3 + 3;
      in = (i + 1) * 3;
      alpha1_tmp = (i + 3 * i) + 1;
      b_alpha1_tmp = A[alpha1_tmp];
      c_st.site = &pd_emlrtRSI;
      tau[i] = 0.0;
      d_st.site = &sd_emlrtRSI;
      xnorm = xnrm2(&d_st, 1 - i, A, im1n_tmp);
      if (xnorm != 0.0) {
        xnorm = muDoubleScalarHypot(b_alpha1_tmp, xnorm);
        if (b_alpha1_tmp >= 0.0) {
          xnorm = -xnorm;
        }
        if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          do {
            knt++;
            d_st.site = &td_emlrtRSI;
            xscal(&d_st, 1 - i, 9.9792015476736E+291, A, im1n_tmp);
            xnorm *= 9.9792015476736E+291;
            b_alpha1_tmp *= 9.9792015476736E+291;
          } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));
          d_st.site = &ud_emlrtRSI;
          xnorm = xnrm2(&d_st, 1 - i, A, im1n_tmp);
          xnorm = muDoubleScalarHypot(b_alpha1_tmp, xnorm);
          if (b_alpha1_tmp >= 0.0) {
            xnorm = -xnorm;
          }
          tau[i] = (xnorm - b_alpha1_tmp) / xnorm;
          d_st.site = &vd_emlrtRSI;
          xscal(&d_st, 1 - i, 1.0 / (b_alpha1_tmp - xnorm), A, im1n_tmp);
          d_st.site = &wd_emlrtRSI;
          if ((1 <= knt) && (knt > 2147483646)) {
            e_st.site = &id_emlrtRSI;
            check_forloop_overflow_error(&e_st);
          }
          for (k = 0; k < knt; k++) {
            xnorm *= 1.0020841800044864E-292;
          }
          b_alpha1_tmp = xnorm;
        } else {
          tau[i] = (xnorm - b_alpha1_tmp) / xnorm;
          d_st.site = &xd_emlrtRSI;
          xscal(&d_st, 1 - i, 1.0 / (A[(i + 3 * i) + 1] - xnorm), A, im1n_tmp);
          b_alpha1_tmp = xnorm;
        }
      }
      A[alpha1_tmp] = 1.0;
      iv0 = (i + im1n_tmp) - 2;
      ic0 = in + 1;
      c_st.site = &qd_emlrtRSI;
      if (tau[i] != 0.0) {
        lastv = 1 - i;
        knt = iv0 - i;
        while ((lastv + 1 > 0) && (A[knt + 1] == 0.0)) {
          lastv--;
          knt--;
        }
        lastc = 3;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          knt = in + lastc;
          ia = knt;
          do {
            exitg1 = 0;
            if (ia <= knt + lastv * 3) {
              if (A[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia += 3;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = -1;
        lastc = 0;
      }
      if (lastv + 1 > 0) {
        d_st.site = &de_emlrtRSI;
        e_st.site = &fe_emlrtRSI;
        if (lastc != 0) {
          f_st.site = &he_emlrtRSI;
          if (0 <= lastc - 1) {
            memset(&work[0], 0, lastc * sizeof(real_T));
          }
          knt = iv0;
          j = (in + 3 * lastv) + 1;
          for (iac = ic0; iac <= j; iac += 3) {
            b = (iac + lastc) - 1;
            f_st.site = &ge_emlrtRSI;
            for (ia = iac; ia <= b; ia++) {
              k = ia - iac;
              work[k] += A[ia - 1] * A[knt];
            }
            knt++;
          }
        }
        d_st.site = &ee_emlrtRSI;
        e_st.site = &ie_emlrtRSI;
        f_st.site = &je_emlrtRSI;
        g_st.site = &ke_emlrtRSI;
        if (!(-tau[i] == 0.0)) {
          knt = in;
          h_st.site = &le_emlrtRSI;
          for (j = 0; j <= lastv; j++) {
            xnorm = A[iv0 + j];
            if (xnorm != 0.0) {
              xnorm *= -tau[i];
              k = knt + 1;
              b = lastc + knt;
              h_st.site = &me_emlrtRSI;
              if ((knt + 1 <= b) && (b > 2147483646)) {
                i_st.site = &id_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }
              for (ic0 = k; ic0 <= b; ic0++) {
                A[ic0 - 1] += work[(ic0 - knt) - 1] * xnorm;
              }
            }
            knt += 3;
          }
        }
      }
      c_st.site = &rd_emlrtRSI;
      xzlarf(&c_st, 2 - i, 2 - i, (i + im1n_tmp) - 1, tau[i], A, (i + in) + 2,
             work);
      A[alpha1_tmp] = b_alpha1_tmp;
    }
    memcpy(&V[0], &A[0], 9U * sizeof(real_T));
    st.site = &md_emlrtRSI;
    knt = xhseqr(&st, V);
    if (knt != 0) {
      st.site = &nd_emlrtRSI;
      warning(&st);
    }
  }
}

/* End of code generation (schur.c) */
