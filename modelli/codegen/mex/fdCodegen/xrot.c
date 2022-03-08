/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xrot.c
 *
 * Code generation for function 'xrot'
 *
 */

/* Include files */
#include "xrot.h"
#include "eml_int_forloop_overflow_check.h"
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo kf_emlrtRSI =
    {
        32,     /* lineNo */
        "xrot", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
        "blas\\xrot.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    24,     /* lineNo */
    "xrot", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xrot.m" /* pathName */
};

/* Function Definitions */
void b_xrot(int32_T n, real_T x[9], int32_T ix0, int32_T iy0, real_T c,
            real_T s)
{
  real_T b_temp_tmp;
  real_T temp_tmp;
  if (n >= 1) {
    temp_tmp = x[iy0 - 1];
    b_temp_tmp = x[ix0 - 1];
    x[iy0 - 1] = c * temp_tmp - s * b_temp_tmp;
    x[ix0 - 1] = c * b_temp_tmp + s * temp_tmp;
  }
}

void xrot(const emlrtStack *sp, int32_T n, real_T x[9], int32_T ix0,
          int32_T iy0, real_T c, real_T s)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_temp_tmp;
  real_T d_temp_tmp;
  int32_T c_temp_tmp;
  int32_T k;
  int32_T temp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &lf_emlrtRSI;
  if ((1 <= n) && (n > 2147483646)) {
    c_st.site = &id_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < n; k++) {
    temp_tmp = (iy0 + k * 3) - 1;
    b_temp_tmp = x[temp_tmp];
    c_temp_tmp = (ix0 + k * 3) - 1;
    d_temp_tmp = x[c_temp_tmp];
    x[temp_tmp] = c * b_temp_tmp - s * d_temp_tmp;
    x[c_temp_tmp] = c * d_temp_tmp + s * b_temp_tmp;
  }
}

/* End of code generation (xrot.c) */
