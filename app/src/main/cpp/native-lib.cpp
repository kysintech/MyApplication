#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_root_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "no more detials,sorry";
    return env->NewStringUTF(hello.c_str());
}
