/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlarf.c
 *
 * Code generation for function 'xzlarf'
 *
 */

/* Include files */
#include "xzlarf.h"
#include "eml_int_forloop_overflow_check.h"
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ne_emlrtRSI = {
    75,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    68,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    50,       /* lineNo */
    "xzlarf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = {
    103,      /* lineNo */
    "ilazlc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlarf.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    74,      /* lineNo */
    "xgemv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemv.m" /* pathName */
};

/* Function Declarations */
static int32_T div_nde_s32_floor(int32_T numerator);

/* Function Definitions */
static int32_T div_nde_s32_floor(int32_T numerator)
{
  int32_T b_numerator;
  if ((numerator < 0) && (numerator % 3 != 0)) {
    b_numerator = -1;
  } else {
    b_numerator = 0;
  }
  return numerator / 3 + b_numerator;
}

void xzlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T iv0, real_T tau,
            real_T C[9], int32_T ic0, real_T work[3])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  real_T c;
  int32_T b;
  int32_T colbottom;
  int32_T exitg1;
  int32_T i;
  int32_T iac;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
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
  if (tau != 0.0) {
    lastv = m - 1;
    i = iv0 + m;
    while ((lastv + 1 > 0) && (C[i - 2] == 0.0)) {
      lastv--;
      i--;
    }
    st.site = &pe_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * 3;
      colbottom = i + lastv;
      b_st.site = &qe_emlrtRSI;
      if ((i <= colbottom) && (colbottom > 2147483646)) {
        c_st.site = &id_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      do {
        exitg1 = 0;
        if (i <= colbottom) {
          if (C[i - 1] != 0.0) {
            exitg1 = 1;
          } else {
            i++;
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
    st.site = &oe_emlrtRSI;
    b_st.site = &fe_emlrtRSI;
    if (lastc != 0) {
      c_st.site = &he_emlrtRSI;
      if ((1 <= lastc) && (lastc > 2147483646)) {
        d_st.site = &id_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      if (0 <= lastc - 1) {
        memset(&work[0], 0, lastc * sizeof(real_T));
      }
      colbottom = ic0 + 3 * (lastc - 1);
      for (iac = ic0; iac <= colbottom; iac += 3) {
        c = 0.0;
        b = iac + lastv;
        c_st.site = &re_emlrtRSI;
        if ((iac <= b) && (b > 2147483646)) {
          d_st.site = &id_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (i = iac; i <= b; i++) {
          c += C[i - 1] * C[((iv0 + i) - iac) - 1];
        }
        i = div_nde_s32_floor(iac - ic0);
        work[i] += c;
      }
    }
    st.site = &ne_emlrtRSI;
    b_st.site = &ie_emlrtRSI;
    c_st.site = &je_emlrtRSI;
    d_st.site = &ke_emlrtRSI;
    if (!(-tau == 0.0)) {
      i = ic0;
      e_st.site = &le_emlrtRSI;
      for (colbottom = 0; colbottom < lastc; colbottom++) {
        if (work[colbottom] != 0.0) {
          c = work[colbottom] * -tau;
          b = lastv + i;
          e_st.site = &me_emlrtRSI;
          if ((i <= b) && (b > 2147483646)) {
            f_st.site = &id_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }
          for (iac = i; iac <= b; iac++) {
            C[iac - 1] += C[((iv0 + iac) - i) - 1] * c;
          }
        }
        i += 3;
      }
    }
  }
}

/* End of code generation (xzlarf.c) */
