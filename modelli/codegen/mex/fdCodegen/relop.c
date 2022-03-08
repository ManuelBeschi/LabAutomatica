/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * relop.c
 *
 * Code generation for function 'relop'
 *
 */

/* Include files */
#include "relop.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Function Definitions */
void absRelopProxies(const creal_T a, const creal_T b, real_T *x, real_T *y)
{
  real_T absx;
  int32_T b_exponent;
  int32_T c_exponent;
  int32_T exponent;
  boolean_T SCALEA;
  boolean_T SCALEB;
  if ((muDoubleScalarAbs(a.re) > 8.9884656743115785E+307) ||
      (muDoubleScalarAbs(a.im) > 8.9884656743115785E+307)) {
    SCALEA = true;
  } else {
    SCALEA = false;
  }
  if ((muDoubleScalarAbs(b.re) > 8.9884656743115785E+307) ||
      (muDoubleScalarAbs(b.im) > 8.9884656743115785E+307)) {
    SCALEB = true;
  } else {
    SCALEB = false;
  }
  if (SCALEA || SCALEB) {
    *x = muDoubleScalarHypot(a.re / 2.0, a.im / 2.0);
    *y = muDoubleScalarHypot(b.re / 2.0, b.im / 2.0);
  } else {
    *x = muDoubleScalarHypot(a.re, a.im);
    *y = muDoubleScalarHypot(b.re, b.im);
  }
  absx = *y / 2.0;
  if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
    if (absx <= 2.2250738585072014E-308) {
      absx = 4.94065645841247E-324;
    } else {
      frexp(absx, &exponent);
      absx = ldexp(1.0, exponent - 53);
    }
  } else {
    absx = rtNaN;
  }
  if ((muDoubleScalarAbs(*y - *x) < absx) ||
      (muDoubleScalarIsInf(*x) && muDoubleScalarIsInf(*y) &&
       ((*x > 0.0) == (*y > 0.0)))) {
    SCALEA = true;
  } else {
    SCALEA = false;
  }
  if (SCALEA) {
    *x = muDoubleScalarAtan2(a.im, a.re);
    *y = muDoubleScalarAtan2(b.im, b.re);
    absx = muDoubleScalarAbs(*y / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &b_exponent);
        absx = ldexp(1.0, b_exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(*y - *x) < absx) ||
        (muDoubleScalarIsInf(*x) && muDoubleScalarIsInf(*y) &&
         ((*x > 0.0) == (*y > 0.0)))) {
      SCALEA = true;
    } else {
      SCALEA = false;
    }
    if (SCALEA) {
      if (a.re != b.re) {
        if (*x >= 0.0) {
          *x = b.re;
          *y = a.re;
        } else {
          *x = a.re;
          *y = b.re;
        }
      } else if (a.re < 0.0) {
        *x = b.im;
        *y = a.im;
      } else {
        *x = a.im;
        *y = b.im;
      }
      absx = muDoubleScalarAbs(*y / 2.0);
      if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
        if (absx <= 2.2250738585072014E-308) {
          absx = 4.94065645841247E-324;
        } else {
          frexp(absx, &c_exponent);
          absx = ldexp(1.0, c_exponent - 53);
        }
      } else {
        absx = rtNaN;
      }
      if ((muDoubleScalarAbs(*y - *x) < absx) ||
          (muDoubleScalarIsInf(*x) && muDoubleScalarIsInf(*y) &&
           ((*x > 0.0) == (*y > 0.0)))) {
        SCALEA = true;
      } else {
        SCALEA = false;
      }
      if (SCALEA) {
        *x = 0.0;
        *y = 0.0;
      }
    }
  }
}

/* End of code generation (relop.c) */
