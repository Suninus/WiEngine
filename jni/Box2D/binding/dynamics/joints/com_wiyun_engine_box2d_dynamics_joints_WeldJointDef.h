/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_WeldJointDef */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
#define _Included_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_UNKNOWN
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_UNKNOWN 0L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_REVOLUTE
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_REVOLUTE 1L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_PRISMATIC
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_PRISMATIC 2L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_DISTANCE
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_DISTANCE 3L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_PULLEY
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_PULLEY 4L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_MOUSE
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_MOUSE 5L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_GEAR
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_GEAR 6L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_LINE
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_LINE 7L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_WELD
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_WELD 8L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_FRICTION
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_FRICTION 9L
#undef com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_ROPE
#define com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_TYPE_ROPE 10L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    nativeNew
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_nativeNew
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    initialize
 * Signature: (Lcom/wiyun/engine/box2d/dynamics/Body;Lcom/wiyun/engine/box2d/dynamics/Body;FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_initialize
  (JNIEnv *, jobject, jobject, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    setLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_setLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    setLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_setLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    setReferenceAngle
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_setReferenceAngle
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_WeldJointDef
 * Method:    getReferenceAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_WeldJointDef_getReferenceAngle
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif