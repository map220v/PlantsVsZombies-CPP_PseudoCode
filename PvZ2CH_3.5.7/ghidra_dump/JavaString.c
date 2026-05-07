// Class: JavaString


/* JavaString::ToString(_JNIEnv*, _jstring*) */

void __thiscall JavaString::ToString(JavaString *this,_JNIEnv *param_1,_jstring *param_2)

{
  char *__s;
  string *in_x8;
  
  Set8BytesTo0();
  if ((param_1 != (_JNIEnv *)0x0) &&
     (__s = (char *)_JNIEnv::GetStringUTFChars((_jstring *)this,(uchar *)param_1),
     __s != (char *)0x0)) {
    std::string::append(in_x8,__s,(size_t)__s);
    _JNIEnv::ReleaseStringUTFChars((_jstring *)this,(char *)param_1);
  }
  return;
}

