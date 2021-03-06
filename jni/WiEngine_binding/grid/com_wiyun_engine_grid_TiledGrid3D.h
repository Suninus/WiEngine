/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_grid_TiledGrid3D */

#ifndef _Included_com_wiyun_engine_grid_TiledGrid3D
#define _Included_com_wiyun_engine_grid_TiledGrid3D
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_grid_TiledGrid3D
 * Method:    nativeInit
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_TiledGrid3D_nativeInit
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_grid_TiledGrid3D
 * Method:    setTile
 * Signature: (IIFFFFFFFFFFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_TiledGrid3D_setTile
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_grid_TiledGrid3D
 * Method:    getOriginalTile
 * Signature: (IILcom/wiyun/engine/types/WYQuad3D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_TiledGrid3D_getOriginalTile
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_wiyun_engine_grid_TiledGrid3D
 * Method:    getTile
 * Signature: (IILcom/wiyun/engine/types/WYQuad3D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_TiledGrid3D_getTile
  (JNIEnv *, jobject, jint, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
