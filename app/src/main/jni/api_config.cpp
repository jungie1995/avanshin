#include <jni.h>
#include <string>


std::string SERVER_URL = "http://admin.avanshin-tv-playlist.com/rest-api/";
std::string API_KEY = "f23c53bd5ab6e0f1d420b022";
std::string PURCHASE_CODE = "13098c3b-6419-40f6-8005-df1a286e7c21";
std::string YOUTUBE_API_KEY = "xxxxxxxxxxxxxxxxxxxx";

extern "C" JNIEXPORT jstring JNICALL
// Change "com_oxoo_spagreen" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS
Java_com_avanshin_clip_AppConfig_getApiServerUrl(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(SERVER_URL.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_oxoo_spagreen" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS

Java_com_avanshin_clip_AppConfig_getApiKey(
        JNIEnv* env,
jclass clazz) {
return env->NewStringUTF(API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_oxoo_spagreen" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS

Java_com_avanshin_clip_AppConfig_getPurchaseCode(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(PURCHASE_CODE.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
// Change "com_oxoo_spagreen" with your package name. // I.e "com_package_name" // DO NOT CHANGE OTHER THINGS

Java_com_avanshin_clip_AppConfig_getYouTubeApiKey(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(YOUTUBE_API_KEY.c_str());
}
