/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzggbal.h
 *
 * Code generation for function 'xzggbal'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void xzggbal(const emlrtStack *sp, creal_T A[9], int32_T *ilo, int32_T *ihi,
             int32_T rscale[3]);

/* End of code generation (xzggbal.h) */
