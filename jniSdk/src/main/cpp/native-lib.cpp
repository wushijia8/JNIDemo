//
// Created by 吴诗佳 on 2022/7/29.
//

#include <jni.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

extern "C"
JNIEXPORT jstring JNICALL
Java_net_jaris_jnisdk_StringUtil_getStringNDK(JNIEnv *env, jclass clazz) {
    // TODO: implement getStringNDK()
    string result = "Hello from NDK";
    return env->NewStringUTF(result.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_net_jaris_jni_StringUtil_getStringNDK(JNIEnv *env, jclass clazz) {
    // TODO: implement getStringNDK()
    string result = "Hello from NDK";
    return env->NewStringUTF(result.c_str());
}