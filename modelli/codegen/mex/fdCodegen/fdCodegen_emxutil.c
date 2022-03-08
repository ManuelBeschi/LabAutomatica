/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen_emxutil.c
 *
 * Code generation for function 'fdCodegen_emxutil'
 *
 */

/* Include files */
#include "fdCodegen_emxutil.h"
#include "fdCodegen_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void c_emxEnsureCapacity_unnamed_str(const emlrtStack *sp,
                                     emxArray_unnamed_struct *emxArray,
                                     int32_T oldNumel,
                                     const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData =
        emlrtCallocMex((uint32_T)i, sizeof(c_robotics_manip_internal_Colli *));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data,
             sizeof(c_robotics_manip_internal_Colli *) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
      }
    }
    emxArray->data = (c_robotics_manip_internal_Colli **)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void c_emxFreeMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[9])
{
  int32_T i;
  for (i = 0; i < 9; i++) {
    c_emxFreeStruct_robotics_manip_(sp, &pMatrix[i]);
  }
}

void c_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli *pStruct)
{
  emxFree_unnamed_struct(sp, &pStruct->CollisionGeometries);
}

void c_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[9],
                                     const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 9; i++) {
    g_emxInitStruct_robotics_manip_(sp, &pMatrix[i], srcLocation);
  }
}

void c_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation)
{
  d_emxInitStruct_robotics_manip_(sp, &pStruct->Base, srcLocation);
  e_emxInitMatrix_robotics_manip_(sp, pStruct->_pobj0, srcLocation);
  emxInitMatrix_rigidBodyJoint1(sp, pStruct->_pobj1, srcLocation);
  f_emxInitMatrix_robotics_manip_(sp, pStruct->_pobj2, srcLocation);
}

void d_emxFreeMatrix_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid pMatrix[3])
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    d_emxFreeStruct_robotics_manip_(sp, &pMatrix[i]);
  }
}

void d_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid *pStruct)
{
  emxFree_char_T(sp, &pStruct->NameInternal);
  c_emxFreeStruct_robotics_manip_(sp, &pStruct->_pobj0);
  emxFreeStruct_rigidBodyJoint(sp, &pStruct->_pobj1);
}

void d_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid pMatrix[3],
                                     const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    e_emxInitStruct_robotics_manip_(sp, &pMatrix[i], srcLocation);
  }
}

void d_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation)
{
  emxInit_char_T(sp, &pStruct->NameInternal, srcLocation);
  g_emxInitStruct_robotics_manip_(sp, &pStruct->_pobj0, srcLocation);
  emxInitStruct_rigidBodyJoint(sp, &pStruct->_pobj1, srcLocation);
}

void e_emxFreeMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[2])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    c_emxFreeStruct_robotics_manip_(sp, &pMatrix[i]);
  }
}

void e_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Rigid *pStruct)
{
  d_emxFreeStruct_robotics_manip_(sp, &pStruct->Base);
  e_emxFreeMatrix_robotics_manip_(sp, pStruct->_pobj0);
  emxFreeMatrix_rigidBodyJoint1(sp, pStruct->_pobj1);
  d_emxFreeMatrix_robotics_manip_(sp, pStruct->_pobj2);
}

void e_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli pMatrix[2],
                                     const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    g_emxInitStruct_robotics_manip_(sp, &pMatrix[i], srcLocation);
  }
}

void e_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation)
{
  f_emxInitStruct_robotics_manip_(sp, &pStruct->Base, srcLocation);
  f_emxInitStruct_robotics_manip_(sp, &pStruct->_pobj0, srcLocation);
}

void emxEnsureCapacity_boolean_T(const emlrtStack *sp,
                                 emxArray_boolean_T *emxArray, int32_T oldNumel,
                                 const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(boolean_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(boolean_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (boolean_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_cell_wrap_21(const emlrtStack *sp,
                                    emxArray_cell_wrap_21 *emxArray,
                                    int32_T oldNumel,
                                    const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(cell_wrap_21));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap_21) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (cell_wrap_21 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_char_T(const emlrtStack *sp, emxArray_char_T *emxArray,
                              int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(char_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
                              int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)newNumel,
                                           (size_t)(uint32_T)emxArray->size[i],
                                           srcLocation, (emlrtCTX)sp);
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
    }
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeMatrix_rigidBodyJoint(const emlrtStack *sp,
                                  rigidBodyJoint pMatrix[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    emxFreeStruct_rigidBodyJoint(sp, &pMatrix[i]);
  }
}

void emxFreeMatrix_rigidBodyJoint1(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[2])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    emxFreeStruct_rigidBodyJoint(sp, &pMatrix[i]);
  }
}

void emxFreeMatrix_rigidBodyJoint2(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxFreeStruct_rigidBodyJoint(sp, &pMatrix[i]);
  }
}

void emxFreeStruct_rigidBodyJoint(const emlrtStack *sp, rigidBodyJoint *pStruct)
{
  emxFree_char_T(sp, &pStruct->Type);
  emxFree_real_T(sp, &pStruct->MotionSubspace);
  emxFree_char_T(sp, &pStruct->NameInternal);
  emxFree_real_T(sp, &pStruct->PositionLimitsInternal);
  emxFree_real_T(sp, &pStruct->HomePositionInternal);
}

void emxFreeStruct_rigidBodyTree(const emlrtStack *sp, rigidBodyTree *pStruct)
{
  e_emxFreeStruct_robotics_manip_(sp, &pStruct->TreeInternal);
  c_emxFreeStruct_robotics_manip_(sp, &pStruct->_pobj0);
}

void emxFree_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_cell_wrap_21(const emlrtStack *sp,
                          emxArray_cell_wrap_21 **pEmxArray)
{
  if (*pEmxArray != (emxArray_cell_wrap_21 *)NULL) {
    if (((*pEmxArray)->data != (cell_wrap_21 *)NULL) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_21 *)NULL;
  }
}

void emxFree_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxFree_unnamed_struct(const emlrtStack *sp,
                            emxArray_unnamed_struct **pEmxArray)
{
  if (*pEmxArray != (emxArray_unnamed_struct *)NULL) {
    if (((*pEmxArray)->data != (c_robotics_manip_internal_Colli **)NULL) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtRemoveHeapReference((emlrtCTX)sp, (void *)pEmxArray);
    emlrtFreeEmxArray(*pEmxArray);
    *pEmxArray = (emxArray_unnamed_struct *)NULL;
  }
}

void emxInitMatrix_rigidBodyJoint(const emlrtStack *sp,
                                  rigidBodyJoint pMatrix[6],
                                  const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    emxInitStruct_rigidBodyJoint(sp, &pMatrix[i], srcLocation);
  }
}

void emxInitMatrix_rigidBodyJoint1(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[2],
                                   const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    emxInitStruct_rigidBodyJoint(sp, &pMatrix[i], srcLocation);
  }
}

void emxInitMatrix_rigidBodyJoint2(const emlrtStack *sp,
                                   rigidBodyJoint pMatrix[5],
                                   const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    emxInitStruct_rigidBodyJoint(sp, &pMatrix[i], srcLocation);
  }
}

void emxInitStruct_rigidBodyJoint(const emlrtStack *sp, rigidBodyJoint *pStruct,
                                  const emlrtRTEInfo *srcLocation)
{
  emxInit_char_T(sp, &pStruct->Type, srcLocation);
  emxInit_real_T(sp, &pStruct->MotionSubspace, 2, srcLocation);
  emxInit_char_T(sp, &pStruct->NameInternal, srcLocation);
  emxInit_real_T(sp, &pStruct->PositionLimitsInternal, 2, srcLocation);
  emxInit_real_T(sp, &pStruct->HomePositionInternal, 1, srcLocation);
}

void emxInitStruct_rigidBodyTree(const emlrtStack *sp, rigidBodyTree *pStruct,
                                 const emlrtRTEInfo *srcLocation)
{
  c_emxInitStruct_robotics_manip_(sp, &pStruct->TreeInternal, srcLocation);
  g_emxInitStruct_robotics_manip_(sp, &pStruct->_pobj0, srcLocation);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
                       const emlrtRTEInfo *srcLocation)
{
  emxArray_boolean_T *emxArray;
  *pEmxArray =
      (emxArray_boolean_T *)emlrtMallocEmxArray(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_boolean_T, NULL, NULL,
                                      NULL);
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = 1;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  emxArray->size[0] = 0;
}

void emxInit_cell_wrap_21(const emlrtStack *sp,
                          emxArray_cell_wrap_21 **pEmxArray,
                          const emlrtRTEInfo *srcLocation)
{
  emxArray_cell_wrap_21 *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_cell_wrap_21 *)emlrtMallocEmxArray(
      sizeof(emxArray_cell_wrap_21));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_cell_wrap_21, NULL, NULL,
                                      NULL);
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_21 *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * 2U);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray,
                    const emlrtRTEInfo *srcLocation)
{
  emxArray_char_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_char_T *)emlrtMallocEmxArray(sizeof(emxArray_char_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_char_T, NULL, NULL,
                                      NULL);
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * 2U);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                    int32_T numDimensions, const emlrtRTEInfo *srcLocation)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocEmxArray(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_real_T, NULL, NULL,
                                      NULL);
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_unnamed_struct(const emlrtStack *sp,
                            emxArray_unnamed_struct **pEmxArray,
                            const emlrtRTEInfo *srcLocation)
{
  emxArray_unnamed_struct *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_unnamed_struct *)emlrtMallocEmxArray(
      sizeof(emxArray_unnamed_struct));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emlrtPushHeapReferenceStackEmxArray((emlrtCTX)sp, true, (void *)pEmxArray,
                                      (void *)&emxFree_unnamed_struct, NULL,
                                      NULL, NULL);
  emxArray = *pEmxArray;
  emxArray->data = (c_robotics_manip_internal_Colli **)NULL;
  emxArray->numDimensions = 2;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * 2U);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, (emlrtCTX)sp);
  }
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < 2; i++) {
    emxArray->size[i] = 0;
  }
}

void f_emxFreeMatrix_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid pMatrix[3])
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    g_emxFreeStruct_robotics_manip_(sp, &pMatrix[i]);
  }
}

void f_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     e_robotics_manip_internal_Rigid *pStruct)
{
  emxFreeStruct_rigidBodyJoint(sp, &pStruct->JointInternal);
  c_emxFreeStruct_robotics_manip_(sp, &pStruct->CollisionsInternal);
}

void f_emxInitMatrix_robotics_manip_(const emlrtStack *sp,
                                     c_robotics_manip_internal_Rigid pMatrix[3],
                                     const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = 0; i < 3; i++) {
    d_emxInitStruct_robotics_manip_(sp, &pMatrix[i], srcLocation);
  }
}

void f_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     e_robotics_manip_internal_Rigid *pStruct,
                                     const emlrtRTEInfo *srcLocation)
{
  emxInitStruct_rigidBodyJoint(sp, &pStruct->JointInternal, srcLocation);
  g_emxInitStruct_robotics_manip_(sp, &pStruct->CollisionsInternal,
                                  srcLocation);
}

void g_emxFreeStruct_robotics_manip_(const emlrtStack *sp,
                                     f_robotics_manip_internal_Rigid *pStruct)
{
  f_emxFreeStruct_robotics_manip_(sp, &pStruct->Base);
  f_emxFreeStruct_robotics_manip_(sp, &pStruct->_pobj0);
}

void g_emxInitStruct_robotics_manip_(const emlrtStack *sp,
                                     d_robotics_manip_internal_Colli *pStruct,
                                     const emlrtRTEInfo *srcLocation)
{
  emxInit_unnamed_struct(sp, &pStruct->CollisionGeometries, srcLocation);
}

/* End of code generation (fdCodegen_emxutil.c) */
