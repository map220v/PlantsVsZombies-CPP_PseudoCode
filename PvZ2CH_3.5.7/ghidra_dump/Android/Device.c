// Class: Android::Device


/* Android::Device::Register(_JNIEnv*, _jclass*) */

bool Android::Device::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_GetCurrentUIOrientation");
  *(long *)(lVar1 + 200) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID
                      ((_jclass *)param_1,(char *)param_2,"Device_IsSupportedUIOrientation");
    *(long *)(lVar1 + 0xd0) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_IsKeyboardShowing");
      *(long *)(lVar1 + 0xd8) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_ShowKeyboard");
        *(long *)(lVar1 + 0xe0) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_HideKeyboard");
          *(long *)(lVar1 + 0xe8) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_GetCachesDir");
            *(long *)(lVar1 + 0xf0) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_ExitToHome");
              *(long *)(lVar1 + 0xf8) = lVar2;
              lVar1 = DAT_06bbef40;
              if (lVar2 != 0) {
                lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Device_ExitApp");
                *(long *)(lVar1 + 0x100) = lVar2;
                lVar1 = DAT_06bbef40;
                if (lVar2 != 0) {
                  lVar2 = _JNIEnv::GetMethodID
                                    ((_jclass *)param_1,(char *)param_2,"Device_CopyToClipBoard");
                  *(long *)(lVar1 + 0x108) = lVar2;
                  lVar1 = DAT_06bbef40;
                  if (lVar2 != 0) {
                    lVar2 = _JNIEnv::GetMethodID
                                      ((_jclass *)param_1,(char *)param_2,"Device_Vibrate");
                    *(long *)(lVar1 + 0x110) = lVar2;
                    lVar1 = DAT_06bbef40;
                    if (lVar2 != 0) {
                      lVar2 = _JNIEnv::GetMethodID
                                        ((_jclass *)param_1,(char *)param_2,
                                         "Device_VibrateWithPattern");
                      *(long *)(lVar1 + 0x118) = lVar2;
                      lVar1 = DAT_06bbef40;
                      if (lVar2 != 0) {
                        lVar2 = _JNIEnv::GetMethodID
                                          ((_jclass *)param_1,(char *)param_2,"Device_CancelVibrate"
                                          );
                        *(long *)(lVar1 + 0x120) = lVar2;
                        return lVar2 != 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


/* Android::Device::GetCurrentUIOrientation() */

void Android::Device::GetCurrentUIOrientation(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 200));
    return;
  }
  return;
}


/* Android::Device::GetStartupUIOrientation() */

void Android::Device::GetStartupUIOrientation(void)

{
  if (DAT_06a8aab0 != -1) {
    return;
  }
  DAT_06a8aab0 = GetCurrentUIOrientation();
  return;
}


/* Android::Device::IsSupportedUIOrientation(unsigned int) */

bool Android::Device::IsSupportedUIOrientation(uint param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0xd0),(ulong)param_1
                      );
    return cVar1 != '\0';
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Device::GetCachesDir() */

void __thiscall Android::Device::GetCachesDir(Device *this)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  _jstring *__n;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 == (_JNIEnv *)0x0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var2);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0xf0));
    if (__n != (_jstring *)0x0) {
      cVar1 = Util::StringFromJString(p_Var2,asStack_10,__n);
      if (cVar1 == '\0') {
        std::string::append(asStack_10,"",(size_t)__n);
      }
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var2);
    }
    FUN_05474148();
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Android::Device::ExitToHome() */

void Android::Device::ExitToHome(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0xf8));
    return;
  }
  return;
}


/* Android::Device::ExitApp() */

void Android::Device::ExitApp(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x100));
    return;
  }
  return;
}


/* Android::Device::CopyToClipBoard(std::string const&) */

void Android::Device::CopyToClipBoard(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x108),uVar2);
    return;
  }
  return;
}


/* Android::Device::IsKeyboardShowing(bool) */

bool Android::Device::IsKeyboardShowing(bool param_1)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    p_Var3 = (_jmethodID *)Util::GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0xd8),(ulong)param_1
                      );
    return cVar1 != '\0';
  }
  return false;
}


/* Android::Device::ShowKeyboard() */

void Android::Device::ShowKeyboard(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0xe0));
    return;
  }
  return;
}


/* Android::Device::HideKeyboard() */

void Android::Device::HideKeyboard(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0xe8));
    return;
  }
  return;
}


/* Android::Device::Vibrate(long long) */

void Android::Device::Vibrate(longlong param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x110),param_1)
    ;
    return;
  }
  return;
}


/* Android::Device::VibrateWithPattern(long long*, int) */

void Android::Device::VibrateWithPattern(longlong *param_1,int param_2)

{
  _jlongArray *p_Var1;
  undefined8 uVar2;
  _jmethodID *p_Var3;
  
  p_Var1 = (_jlongArray *)Util::GetJNIEnv();
  if (p_Var1 != (_jlongArray *)0x0) {
    uVar2 = _JNIEnv::NewLongArray((int)p_Var1);
    _JNIEnv::SetLongArrayRegion(p_Var1,(int)uVar2,0,(longlong *)0x8);
    p_Var3 = (_jmethodID *)Util::GetGameObject((_JNIEnv *)p_Var1);
    _JNIEnv::CallVoidMethod
              ((_jobject *)p_Var1,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x118),uVar2,
               (ulong)(uint)param_2);
    _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
    return;
  }
  return;
}


/* Android::Device::CancelVibrate() */

void Android::Device::CancelVibrate(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x120));
    return;
  }
  return;
}

