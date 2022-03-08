/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen_emxutil.h
 *
 * Code generation for function 'fdCodegen_emxutil'
 *
 */

#pragma once

/* Include files */
#include "fdCodegen_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void c_emxEnsureCapacity_unnamed_str(const emlrtStack *sp,
                                     emxArray_unnamed_struct *emxArray,
                                     int32_T oldNumel,
                                     const emlrtRTEInfo *srcLocation);

void c_emxFreeMatrix_robotics_manip_(
    const emlrtStack *sp, d_robotics_manip_internal_Colli pMatrix[9]);

void c_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli *pStruct);

void c_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[9],
                                     const emlrtRTEInfo *srcLocation);

void c_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation);

void d_emxFreeMatrix_robotics_manip_(
    const emlrtStack *sp, c_robotics_manip_internal_Rigid pMatrix[3]);

void d_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid *pStruct);

void d_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid pMatrix[3],
                                     const emlrtRTEInfo *srcLocation);

void d_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation);

void e_emxFreeMatrix_robotics_manip_(
    const emlrtStack *sp, d_robotics_manip_internal_Colli pMatrix[2]);

void e_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *pStruct);

void e_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[2],
                                     const emlrtRTEInfo *srcLocation);

void e_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_boolean_T(const emlrtStack *sp,
                                 emxArray_boolean_T *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_cell_wrap_21(const emlrtStack *sp,
                                    emxArray_cell_wrap_21 *emxArray,
                                    int32_T oldNumel,
                                    const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_char_T(const emlrtStack *sp, emxArray_char_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel,
                              const emlrtRTEInfo *srcLocation);

void emxFreeMatrix_rigidBodyJoint(const emlrtStack *sp,
                                  rigidBodyJoint pMatrix[6]);

void emxFreeMatrix_rigidBodyJoint1(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[2]);

void emxFreeMatrix_rigidBodyJoint2(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[5]);

void emxFreeStruct_rigidBodyJoint(const emlrtStack *sp,
                                  rigidBodyJoint *pStruct);

void emxFreeStruct_rigidBodyTree(const emlrtStack *sp, rigidBodyTree *pStruct);

void emxFree_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray);

void emxFree_cell_wrap_21(const emlrtStack *sp,
                          emxArray_cell_wrap_21 **pEmxArray);

void emxFree_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray);

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);

void emxFree_unnamed_struct(const emlrtStack *sp,
                            emxArray_unnamed_struct **pEmxArray);

void emxInitMatrix_rigidBodyJoint(const emlrtStack *sp,
                                  rigidBodyJoint pMatrix[6],
                                  const emlrtRTEInfo *srcLocation);

void emxInitMatrix_rigidBodyJoint1(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[2],
                                   const emlrtRTEInfo *srcLocation);

void emxInitMatrix_rigidBodyJoint2(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[5],
                                   const emlrtRTEInfo *srcLocation);

void emxInitStruct_rigidBodyJoint(const emlrtStack *sp, rigidBodyJoint *pStruct,
                                  const emlrtRTEInfo *srcLocation);

void emxInitStruct_rigidBodyTree(const emlrtStack *sp, rigidBodyTree *pStruct,
                                 const emlrtRTEInfo *srcLocation);

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
                       const emlrtRTEInfo *srcLocation);

void emxInit_cell_wrap_21(const emlrtStack *sp,
                          emxArray_cell_wrap_21 **pEmxArray,
                          const emlrtRTEInfo *srcLocation);

void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation);

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation);

void emxInit_unnamed_struct(const emlrtStack *sp,
                            emxArray_unnamed_struct **pEmxArray,
                            const emlrtRTEInfo *srcLocation);

void f_emxFreeMatrix_robotics_manip_(
    const emlrtStack *sp, f_robotics_manip_internal_Rigid pMatrix[3]);

void f_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     e_robotics_manip_internal_Rigid *pStruct);

void f_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid pMatrix[3],
                                     const emlrtRTEInfo *srcLocation);

void f_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     e_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation);

void g_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid *pStruct);

void g_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli *pStruct,
                                     const emlrtRTEInfo *srcLocation);

/* End of code generation (fdCodegen_emxutil.h) */
