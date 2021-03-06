/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_collision_ChainShape */

#ifndef _Included_com_wiyun_engine_box2d_collision_ChainShape
#define _Included_com_wiyun_engine_box2d_collision_ChainShape
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_collision_ChainShape_TYPE_UNKNOWN
#define com_wiyun_engine_box2d_collision_ChainShape_TYPE_UNKNOWN -1L
#undef com_wiyun_engine_box2d_collision_ChainShape_TYPE_CIRCLE
#define com_wiyun_engine_box2d_collision_ChainShape_TYPE_CIRCLE 0L
#undef com_wiyun_engine_box2d_collision_ChainShape_TYPE_EDGE
#define com_wiyun_engine_box2d_collision_ChainShape_TYPE_EDGE 1L
#undef com_wiyun_engine_box2d_collision_ChainShape_TYPE_POLYGON
#define com_wiyun_engine_box2d_collision_ChainShape_TYPE_POLYGON 2L
#undef com_wiyun_engine_box2d_collision_ChainShape_TYPE_LOOP
#define com_wiyun_engine_box2d_collision_ChainShape_TYPE_LOOP 3L
/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeNew
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeNew
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    createLoop
 * Signature: ([Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_createLoop
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    createChain
 * Signature: ([Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_createChain
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    SetPrevVertex
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_SetPrevVertex
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    SetNextVertex
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_SetNextVertex
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeGetPrevVertex
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeGetPrevVertex
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeGetNextVertex
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeGetNextVertex
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    hasPrevVertex
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_hasPrevVertex
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    hasNextVertex
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_hasNextVertex
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeGetChildEdge
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeGetChildEdge
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    getCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_getCount
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeGetVertex
 * Signature: (Lcom/wiyun/engine/types/WYPoint;I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeGetVertex
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_wiyun_engine_box2d_collision_ChainShape
 * Method:    nativeGetVertices
 * Signature: ([Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_collision_ChainShape_nativeGetVertices
  (JNIEnv *, jobject, jobjectArray);

#ifdef __cplusplus
}
#endif
#endif
