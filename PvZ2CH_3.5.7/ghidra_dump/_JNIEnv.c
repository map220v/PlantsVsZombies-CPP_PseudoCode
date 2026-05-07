// Class: _JNIEnv


/* _JNIEnv::DeleteLocalRef(_jobject*) */

void _JNIEnv::DeleteLocalRef(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0xb8))();
  return;
}


/* _JNIEnv::CallVoidMethodV(_jobject*, _jmethodID*, std::__va_list) */

void _JNIEnv::CallVoidMethodV(long *param_1)

{
  (**(code **)(*param_1 + 0x1f0))();
  return;
}


/* _JNIEnv::NewStringUTF(char const*) */

void _JNIEnv::NewStringUTF(char *param_1)

{
  (**(code **)(*(long *)param_1 + 0x538))();
  return;
}


/* _JNIEnv::ExceptionClear() */

void __thiscall _JNIEnv::ExceptionClear(_JNIEnv *this)

{
  (**(code **)(*(long *)this + 0x88))();
  return;
}


/* _JNIEnv::ExceptionDescribe() */

void __thiscall _JNIEnv::ExceptionDescribe(_JNIEnv *this)

{
  (**(code **)(*(long *)this + 0x80))();
  return;
}


/* _JNIEnv::DeleteGlobalRef(_jobject*) */

void _JNIEnv::DeleteGlobalRef(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0xb0))();
  return;
}


/* _JNIEnv::ExceptionOccurred() */

void __thiscall _JNIEnv::ExceptionOccurred(_JNIEnv *this)

{
  (**(code **)(*(long *)this + 0x78))();
  return;
}


/* _JNIEnv::GetObjectClass(_jobject*) */

void _JNIEnv::GetObjectClass(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0xf8))();
  return;
}


/* _JNIEnv::GetMethodID(_jclass*, char const*, char const*) */

void _JNIEnv::GetMethodID(_jclass *param_1,char *param_2,char *param_3)

{
  (**(code **)(*(long *)param_1 + 0x108))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallObjectMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallObjectMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x118))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallIntMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallIntMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 400))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* _JNIEnv::GetFieldID(_jclass*, char const*, char const*) */

void _JNIEnv::GetFieldID(_jclass *param_1,char *param_2,char *param_3)

{
  (**(code **)(*(long *)param_1 + 0x2f0))();
  return;
}


/* _JNIEnv::GetObjectField(_jobject*, _jfieldID*) */

void _JNIEnv::GetObjectField(_jobject *param_1,_jfieldID *param_2)

{
  (**(code **)(*(long *)param_1 + 0x2f8))();
  return;
}


/* _JNIEnv::GetObjectArrayElement(_jobjectArray*, int) */

void _JNIEnv::GetObjectArrayElement(_jobjectArray *param_1,int param_2)

{
  (**(code **)(*(long *)param_1 + 0x568))(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::NewObject(_jclass*, _jmethodID*, ...) */

void _JNIEnv::NewObject(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0xe8))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallBooleanMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallBooleanMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x130))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* _JNIEnv::GetIntField(_jobject*, _jfieldID*) */

void _JNIEnv::GetIntField(_jobject *param_1,_jfieldID *param_2)

{
  (**(code **)(*(long *)param_1 + 800))();
  return;
}


/* _JNIEnv::GetStaticMethodID(_jclass*, char const*, char const*) */

void _JNIEnv::GetStaticMethodID(_jclass *param_1,char *param_2,char *param_3)

{
  (**(code **)(*(long *)param_1 + 0x388))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallStaticObjectMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticObjectMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x398))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallStaticBooleanMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticBooleanMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x3b0))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallStaticVoidMethod(_jclass*, _jmethodID*, ...) */

void _JNIEnv::CallStaticVoidMethod(_jclass *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x470))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* _JNIEnv::GetArrayLength(_jarray*) */

void _JNIEnv::GetArrayLength(_jarray *param_1)

{
  (**(code **)(*(long *)param_1 + 0x558))();
  return;
}


/* _JNIEnv::GetByteArrayElements(_jbyteArray*, unsigned char*) */

void _JNIEnv::GetByteArrayElements(_jbyteArray *param_1,uchar *param_2)

{
  (**(code **)(*(long *)param_1 + 0x5c0))();
  return;
}


/* _JNIEnv::ReleaseByteArrayElements(_jbyteArray*, signed char*, int) */

void _JNIEnv::ReleaseByteArrayElements(_jbyteArray *param_1,signed *param_2,int param_3)

{
  (**(code **)(*(long *)param_1 + 0x600))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::SetByteArrayRegion(_jbyteArray*, int, int, signed char const*) */

void _JNIEnv::SetByteArrayRegion(_jbyteArray *param_1,int param_2,int param_3,signed *param_4)

{
  (**(code **)(*(long *)param_1 + 0x680))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::GetStringUTFChars(_jstring*, unsigned char*) */

void _JNIEnv::GetStringUTFChars(_jstring *param_1,uchar *param_2)

{
  (**(code **)(*(long *)param_1 + 0x548))();
  return;
}


/* _JNIEnv::ReleaseStringUTFChars(_jstring*, char const*) */

void _JNIEnv::ReleaseStringUTFChars(_jstring *param_1,char *param_2)

{
  (**(code **)(*(long *)param_1 + 0x550))();
  return;
}


/* _JNIEnv::CallBooleanMethodV(_jobject*, _jmethodID*, std::__va_list) */

void _JNIEnv::CallBooleanMethodV(long *param_1)

{
  (**(code **)(*param_1 + 0x130))();
  return;
}


/* _JNIEnv::CallObjectMethodV(_jobject*, _jmethodID*, std::__va_list) */

void _JNIEnv::CallObjectMethodV(long *param_1)

{
  (**(code **)(*param_1 + 0x118))();
  return;
}


/* _JNIEnv::CallIntMethodV(_jobject*, _jmethodID*, std::__va_list) */

void _JNIEnv::CallIntMethodV(long *param_1)

{
  (**(code **)(*param_1 + 400))();
  return;
}


/* _JNIEnv::NewGlobalRef(_jobject*) */

void _JNIEnv::NewGlobalRef(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa8))();
  return;
}


/* _JNIEnv::IsSameObject(_jobject*, _jobject*) */

void _JNIEnv::IsSameObject(_jobject *param_1,_jobject *param_2)

{
  (**(code **)(*(long *)param_1 + 0xc0))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallLongMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallLongMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1a8))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallFloatMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallFloatMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1c0))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _JNIEnv::CallVoidMethod(_jobject*, _jmethodID*, ...) */

void _JNIEnv::CallVoidMethod(_jobject *param_1,_jmethodID *param_2,...)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x1f0))();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* _JNIEnv::NewString(unsigned short const*, int) */

void _JNIEnv::NewString(ushort *param_1,int param_2)

{
  (**(code **)(*(long *)param_1 + 0x518))(param_1,param_2);
  return;
}


/* _JNIEnv::GetStringLength(_jstring*) */

void _JNIEnv::GetStringLength(_jstring *param_1)

{
  (**(code **)(*(long *)param_1 + 0x520))();
  return;
}


/* _JNIEnv::NewIntArray(int) */

void _JNIEnv::NewIntArray(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x598))();
  return;
}


/* _JNIEnv::NewLongArray(int) */

void _JNIEnv::NewLongArray(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x5a0))();
  return;
}


/* _JNIEnv::SetLongArrayRegion(_jlongArray*, int, int, long long const*) */

void _JNIEnv::SetLongArrayRegion(_jlongArray *param_1,int param_2,int param_3,longlong *param_4)

{
  (**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::RegisterNatives(_jclass*, JNINativeMethod const*, int) */

void _JNIEnv::RegisterNatives(_jclass *param_1,JNINativeMethod *param_2,int param_3)

{
  (**(code **)(*(long *)param_1 + 0x6b8))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::UnregisterNatives(_jclass*) */

void _JNIEnv::UnregisterNatives(_jclass *param_1)

{
  (**(code **)(*(long *)param_1 + 0x6c0))();
  return;
}


/* _JNIEnv::MonitorEnter(_jobject*) */

void _JNIEnv::MonitorEnter(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0x6c8))();
  return;
}


/* _JNIEnv::MonitorExit(_jobject*) */

void _JNIEnv::MonitorExit(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0x6d0))();
  return;
}


/* _JNIEnv::GetPrimitiveArrayCritical(_jarray*, unsigned char*) */

void _JNIEnv::GetPrimitiveArrayCritical(_jarray *param_1,uchar *param_2)

{
  (**(code **)(*(long *)param_1 + 0x6f0))();
  return;
}


/* _JNIEnv::ReleasePrimitiveArrayCritical(_jarray*, void*, int) */

void _JNIEnv::ReleasePrimitiveArrayCritical(_jarray *param_1,void *param_2,int param_3)

{
  (**(code **)(*(long *)param_1 + 0x6f8))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::GetStringCritical(_jstring*, unsigned char*) */

void _JNIEnv::GetStringCritical(_jstring *param_1,uchar *param_2)

{
  (**(code **)(*(long *)param_1 + 0x700))();
  return;
}


/* _JNIEnv::ReleaseStringCritical(_jstring*, unsigned short const*) */

void _JNIEnv::ReleaseStringCritical(_jstring *param_1,ushort *param_2)

{
  (**(code **)(*(long *)param_1 + 0x708))();
  return;
}


/* _JNIEnv::NewDirectByteBuffer(void*, long long) */

void _JNIEnv::NewDirectByteBuffer(void *param_1,longlong param_2)

{
  (**(code **)(*(long *)param_1 + 0x728))();
  return;
}


/* _JNIEnv::NewObjectV(_jclass*, _jmethodID*, std::__va_list) */

void _JNIEnv::NewObjectV(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  return;
}


/* _JNIEnv::ExceptionCheck() */

void __thiscall _JNIEnv::ExceptionCheck(_JNIEnv *this)

{
  (**(code **)(*(long *)this + 0x720))();
  return;
}


/* _JNIEnv::PushLocalFrame(int) */

void _JNIEnv::PushLocalFrame(int param_1)

{
  (**(code **)(*(long *)(ulong)(uint)param_1 + 0x98))();
  return;
}


/* _JNIEnv::PopLocalFrame(_jobject*) */

void _JNIEnv::PopLocalFrame(_jobject *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa0))();
  return;
}


/* _JNIEnv::GetByteArrayRegion(_jbyteArray*, int, int, signed char*) */

void _JNIEnv::GetByteArrayRegion(_jbyteArray *param_1,int param_2,int param_3,signed *param_4)

{
  (**(code **)(*(long *)param_1 + 0x640))(param_1,param_2,param_3);
  return;
}


/* _JNIEnv::GetJavaVM(_JavaVM**) */

void _JNIEnv::GetJavaVM(_JavaVM **param_1)

{
  (**(code **)(*param_1 + 0x6d8))();
  return;
}


/* _JNIEnv::GetStringChars(_jstring*, unsigned char*) */

void _JNIEnv::GetStringChars(_jstring *param_1,uchar *param_2)

{
  (**(code **)(*(long *)param_1 + 0x528))();
  return;
}


/* _JNIEnv::ReleaseStringChars(_jstring*, unsigned short const*) */

void _JNIEnv::ReleaseStringChars(_jstring *param_1,ushort *param_2)

{
  (**(code **)(*(long *)param_1 + 0x530))();
  return;
}

