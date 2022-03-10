/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen.h
 *
 * Code generation for function 'fdCodegen'
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
void fdCodegen(const emlrtStack *sp, const real_T q[2], const real_T qd[2],
               const real_T tau[2], real_T qdd_data[], int32_T qdd_size[1]);

/* End of code generation (fdCodegen.h) */
