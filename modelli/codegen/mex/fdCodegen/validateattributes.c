/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * validateattributes.c
 *
 * Code generation for function 'validateattributes'
 *
 */

/* Include files */
#include "validateattributes.h"
#include "fdCodegen_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void validateattributes(const emlrtStack *sp, const real_T a[2],
                        const real_T attributes_f5[2])
{
  emlrtStack st;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &d_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedNonNaN",
        "MATLAB:validateDynamicsFunctionInputs:expectedNonNaN", 3, 4, 25,
        "joint torque vector (tau)");
  }
  st.site = &uc_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k]))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }
  if (!p) {
    emlrtErrorWithMessageIdR2018a(
        &st, &e_emlrtRTEI, "Coder:toolbox:ValidateattributesexpectedFinite",
        "MATLAB:validateDynamicsFunctionInputs:expectedFinite", 3, 4, 25,
        "joint torque vector (tau)");
  }
  st.site = &uc_emlrtRSI;
  if (((!(attributes_f5[0] != attributes_f5[0])) &&
       (muDoubleScalarIsInf(attributes_f5[0]) || (!(attributes_f5[0] >= 0.0)) ||
        (!(attributes_f5[0] == muDoubleScalarFloor(attributes_f5[0]))))) ||
      ((!(attributes_f5[1] != attributes_f5[1])) &&
       (muDoubleScalarIsInf(attributes_f5[1]) || (!(attributes_f5[1] >= 0.0)) ||
        (!(attributes_f5[1] == muDoubleScalarFloor(attributes_f5[1])))))) {
    emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
                                  "MATLAB:validateattributes:badSizeArray",
                                  "MATLAB:validateattributes:badSizeArray", 0);
  }
  if (((!(attributes_f5[0] != attributes_f5[0])) &&
       (!(attributes_f5[0] == 2.0))) ||
      ((!(attributes_f5[1] != attributes_f5[1])) &&
       (!(attributes_f5[1] == 1.0)))) {
    emlrtErrorWithMessageIdR2018a(
        &st, &v_emlrtRTEI, "Coder:toolbox:ValidateattributesincorrectSize",
        "MATLAB:validateDynamicsFunctionInputs:incorrectSize", 3, 4, 25,
        "joint torque vector (tau)");
  }
}

/* End of code generation (validateattributes.c) */
