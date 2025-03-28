#include <jni.h>
#include <string>
#include <android/log.h>
#include <vector>

#include "Affinecipher.h"
#define LOG_TAG "CipherApp"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

extern "C" {


JNIEXPORT jstring JNICALL
Java_com_example_cipher_MainActivity_encryptNative(JNIEnv *env, jobject obj, jstring text, jint x, jint y, jint m) {
    const char *inputText = env->GetStringUTFChars(text, nullptr);

    string encryptedText = encrypt(inputText, x, y, m);

    env->ReleaseStringUTFChars(text, inputText);

    return env->NewStringUTF(encryptedText.c_str());
}


JNIEXPORT jstring JNICALL
Java_com_example_cipher_MainActivity_decryptNative(JNIEnv *env, jobject obj, jstring text, jint x, jint y, jint m) {
    const char *inputText = env->GetStringUTFChars(text, nullptr);
    string decryptedText = decrypt(inputText, x, y, m);
    env->ReleaseStringUTFChars(text, inputText);
    return env->NewStringUTF(decryptedText.c_str());
}
}
