// Class: Android::Web


/* Android::Web::Register(_JNIEnv*, _jclass*) */

bool Android::Web::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Web_SysOpenURL");
  *(long *)(lVar1 + 0x2b8) = lVar2;
  return lVar2 != 0;
}


/* Android::Web::SysOpenURL(std::string const&) */

undefined8 Android::Web::SysOpenURL(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallBooleanMethod
              ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x2b8),uVar2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return 1;
  }
  return 0;
}

