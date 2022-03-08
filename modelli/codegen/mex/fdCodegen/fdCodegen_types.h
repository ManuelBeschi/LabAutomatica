/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fdCodegen_types.h
 *
 * Code generation for function 'fdCodegen'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_c_robotics_manip_internal_Colli
#define typedef_c_robotics_manip_internal_Colli
typedef struct {
  boolean_T matlabCodegenIsDeleted;
  void *CollisionPrimitive;
} c_robotics_manip_internal_Colli;
#endif /* typedef_c_robotics_manip_internal_Colli */

#ifndef typedef_cell_wrap_21
#define typedef_cell_wrap_21
typedef struct {
  real_T f1[36];
} cell_wrap_21;
#endif /* typedef_cell_wrap_21 */

#ifndef typedef_emxArray_unnamed_struct
#define typedef_emxArray_unnamed_struct
typedef struct {
  c_robotics_manip_internal_Colli **data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_unnamed_struct;
#endif /* typedef_emxArray_unnamed_struct */

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T {
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_char_T */
#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T
typedef struct emxArray_char_T emxArray_char_T;
#endif /* typedef_emxArray_char_T */

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T {
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_real_T */
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /* typedef_emxArray_real_T */

#ifndef typedef_rigidBodyJoint
#define typedef_rigidBodyJoint
typedef struct {
  emxArray_char_T *Type;
  real_T VelocityNumber;
  real_T PositionNumber;
  emxArray_real_T *MotionSubspace;
  boolean_T InTree;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  emxArray_char_T *NameInternal;
  emxArray_real_T *PositionLimitsInternal;
  emxArray_real_T *HomePositionInternal;
  real_T JointAxisInternal[3];
} rigidBodyJoint;
#endif /* typedef_rigidBodyJoint */

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T {
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};
#endif /* struct_emxArray_boolean_T */
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /* typedef_emxArray_boolean_T */

#ifndef typedef_emxArray_cell_wrap_21
#define typedef_emxArray_cell_wrap_21
typedef struct {
  cell_wrap_21 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_21;
#endif /* typedef_emxArray_cell_wrap_21 */

#ifndef typedef_d_robotics_manip_internal_Colli
#define typedef_d_robotics_manip_internal_Colli
typedef struct {
  emxArray_unnamed_struct *CollisionGeometries;
  real_T MaxElements;
  real_T Size;
  c_robotics_manip_internal_Colli _pobj0;
} d_robotics_manip_internal_Colli;
#endif /* typedef_d_robotics_manip_internal_Colli */

#ifndef typedef_c_robotics_manip_internal_Rigid
#define typedef_c_robotics_manip_internal_Rigid
typedef struct {
  real_T Index;
  emxArray_char_T *NameInternal;
  rigidBodyJoint *JointInternal;
  real_T ParentIndex;
  real_T MassInternal;
  real_T CenterOfMassInternal[3];
  real_T InertiaInternal[9];
  real_T SpatialInertia[36];
  d_robotics_manip_internal_Colli *CollisionsInternal;
  d_robotics_manip_internal_Colli _pobj0;
  rigidBodyJoint _pobj1;
} c_robotics_manip_internal_Rigid;
#endif /* typedef_c_robotics_manip_internal_Rigid */

#ifndef typedef_d_robotics_manip_internal_Rigid
#define typedef_d_robotics_manip_internal_Rigid
typedef struct {
  real_T NumBodies;
  c_robotics_manip_internal_Rigid Base;
  real_T Gravity[3];
  c_robotics_manip_internal_Rigid *Bodies[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[6];
  real_T VelocityDoFMap[6];
  d_robotics_manip_internal_Colli _pobj0[2];
  rigidBodyJoint _pobj1[2];
  c_robotics_manip_internal_Rigid _pobj2[3];
} d_robotics_manip_internal_Rigid;
#endif /* typedef_d_robotics_manip_internal_Rigid */

#ifndef typedef_rigidBodyTree
#define typedef_rigidBodyTree
typedef struct {
  d_robotics_manip_internal_Rigid TreeInternal;
  d_robotics_manip_internal_Colli _pobj0;
} rigidBodyTree;
#endif /* typedef_rigidBodyTree */

#ifndef typedef_e_robotics_manip_internal_Rigid
#define typedef_e_robotics_manip_internal_Rigid
typedef struct {
  rigidBodyJoint JointInternal;
  d_robotics_manip_internal_Colli CollisionsInternal;
} e_robotics_manip_internal_Rigid;
#endif /* typedef_e_robotics_manip_internal_Rigid */

#ifndef typedef_f_robotics_manip_internal_Rigid
#define typedef_f_robotics_manip_internal_Rigid
typedef struct {
  e_robotics_manip_internal_Rigid Base;
  e_robotics_manip_internal_Rigid *Bodies[1];
  e_robotics_manip_internal_Rigid _pobj0;
} f_robotics_manip_internal_Rigid;
#endif /* typedef_f_robotics_manip_internal_Rigid */

/* End of code generation (fdCodegen_types.h) */
