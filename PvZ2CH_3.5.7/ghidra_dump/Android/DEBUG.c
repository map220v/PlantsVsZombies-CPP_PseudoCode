// Class: Android::DEBUG


/* Android::DEBUG::Register(_JNIEnv*, _jclass*) */

bool Android::DEBUG::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"DEBUG_PauseInJava");
  *(long *)(lVar1 + 0x70) = lVar2;
  return lVar2 != 0;
}


/* Android::DEBUG::PauseInJava(char const*, int) */

void Android::DEBUG::PauseInJava(char *param_1,int param_2)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod
              ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x70),uVar2,
               (ulong)(uint)param_2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}

