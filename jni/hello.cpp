#include "ph_edu_dlsu_Hello.h"
#include <iostream>

extern "C" {
/*
 * Class:     ph_edu_dlsu_Hello
 * Method:    helloFromCpp
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ph_edu_dlsu_Hello_helloFromCpp
  (JNIEnv *env, jobject){
     std::cout<<"Hello from Cpp!"<<std::endl;  
  }
    
  } // end extern "C"
