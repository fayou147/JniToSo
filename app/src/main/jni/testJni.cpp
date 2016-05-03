//
// Created by Administrator on 2016/4/29.
//

#include <stdio.h>
#include <stdlib.h>
#include "com_fy_administrator_jnitoso_JniUtil.h"
#include "CAdd.h"

CAdd *pCAdd = NULL;

JNIEXPORT jboolean JNICALL Java_com_fy_administrator_jnitoso_JniUtil_init(JNIEnv *env,
                                                                          jobject obj) {
    if (pCAdd == NULL) {
        pCAdd = new CAdd;
    }
    return pCAdd != NULL;
}

JNIEXPORT jint JNICALL Java_com_fy_administrator_jnitoso_JniUtil_add
        (JNIEnv *env, jobject obj, jint x, jint y) {
    int res = -1;
    if (pCAdd != NULL) {
        res = pCAdd->Add(x, y);
    }
    return res;
}

JNIEXPORT void JNICALL Java_com_fy_administrator_jnitoso_JniUtil_destory
        (JNIEnv *env, jobject obj) {
    if (pCAdd != NULL) {
        delete pCAdd;
        pCAdd = NULL;
    }
}
