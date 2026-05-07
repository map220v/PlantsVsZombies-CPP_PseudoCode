// Class: Android::Diag


/* Android::Diag::Register(_JNIEnv*, _jclass*) */

bool Android::Diag::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetPrimaryMACAddress");
  *(long *)(lVar1 + 0x230) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetOSVersion");
    *(long *)(lVar1 + 0x238) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetHardwareModel");
      *(long *)(lVar1 + 0x240) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetDeviceID");
        *(long *)(lVar1 + 0x248) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID
                            ((_jclass *)param_1,(char *)param_2,"Diag_GetUniqueCharacterID");
          *(long *)(lVar1 + 0x250) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetAvailMemory");
            *(long *)(lVar1 + 600) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Diag_GetUsedMemory");
              *(long *)(lVar1 + 0x260) = lVar2;
              lVar1 = DAT_06bbef40;
              if (lVar2 != 0) {
                lVar2 = _JNIEnv::GetMethodID
                                  ((_jclass *)param_1,(char *)param_2,"Diag_GetNetworkType");
                *(long *)(lVar1 + 0x268) = lVar2;
                lVar1 = DAT_06bbef40;
                if (lVar2 != 0) {
                  lVar2 = _JNIEnv::GetMethodID
                                    ((_jclass *)param_1,(char *)param_2,"Diag_GetMobileCardType");
                  *(long *)(lVar1 + 0x270) = lVar2;
                  lVar1 = DAT_06bbef40;
                  if (lVar2 != 0) {
                    lVar2 = _JNIEnv::GetMethodID
                                      ((_jclass *)param_1,(char *)param_2,"Diag_GetSimProvince");
                    *(long *)(lVar1 + 0x278) = lVar2;
                    lVar1 = DAT_06bbef40;
                    if (lVar2 != 0) {
                      lVar2 = _JNIEnv::GetMethodID
                                        ((_jclass *)param_1,(char *)param_2,"Diag_GetDeviceIMSI");
                      *(long *)(lVar1 + 0x280) = lVar2;
                      lVar1 = DAT_06bbef40;
                      if (lVar2 != 0) {
                        lVar2 = _JNIEnv::GetMethodID
                                          ((_jclass *)param_1,(char *)param_2,"Diag_GetDeviceIMEI");
                        *(long *)(lVar1 + 0x288) = lVar2;
                        lVar1 = DAT_06bbef40;
                        if (lVar2 != 0) {
                          lVar2 = _JNIEnv::GetMethodID
                                            ((_jclass *)param_1,(char *)param_2,
                                             "Diag_GetDeviceMODEL");
                          *(long *)(lVar1 + 0x290) = lVar2;
                          lVar1 = DAT_06bbef40;
                          if (lVar2 != 0) {
                            lVar2 = _JNIEnv::GetMethodID
                                              ((_jclass *)param_1,(char *)param_2,
                                               "Diag_GetDeviceBRAND");
                            *(long *)(lVar1 + 0x298) = lVar2;
                            lVar1 = DAT_06bbef40;
                            if (lVar2 != 0) {
                              lVar2 = _JNIEnv::GetMethodID
                                                ((_jclass *)param_1,(char *)param_2,
                                                 "Diag_HasNotchInScreen");
                              *(long *)(lVar1 + 0x2a0) = lVar2;
                              lVar1 = DAT_06bbef40;
                              if (lVar2 != 0) {
                                lVar2 = _JNIEnv::GetMethodID
                                                  ((_jclass *)param_1,(char *)param_2,
                                                   "Diag_GetNotchHeight");
                                *(long *)(lVar1 + 0x2a8) = lVar2;
                                lVar1 = DAT_06bbef40;
                                if (lVar2 != 0) {
                                  lVar2 = _JNIEnv::GetMethodID
                                                    ((_jclass *)param_1,(char *)param_2,
                                                     "Diag_GetSwitchOpen");
                                  *(long *)(lVar1 + 0x2b0) = lVar2;
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
          }
        }
      }
    }
  }
  return false;
}


/* Android::Diag::GetPrimaryMACAddress(std::string&) */

void Android::Diag::GetPrimaryMACAddress(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x230));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetOSVersion(std::string&) */

void Android::Diag::GetOSVersion(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x238));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetHardwareModel(std::string&) */

void Android::Diag::GetHardwareModel(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x240));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetDeviceID(std::string&) */

void Android::Diag::GetDeviceID(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x248));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetUniqueCharacterID(std::string&) */

void Android::Diag::GetUniqueCharacterID(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x250));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetLocal(std::string&) */

void Android::Diag::GetLocal(string *param_1)

{
  size_t in_x2;
  
  std::string::append(param_1,"zh-cn",in_x2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Diag::GetNetworkType() */

void __thiscall Android::Diag::GetNetworkType(Diag *this)

{
  long lVar1;
  char cVar2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  _jstring *__n;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var3);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x268))
    ;
    if (__n != (_jstring *)0x0) {
      cVar2 = Util::StringFromJString(p_Var3,in_x8,__n);
      if (cVar2 == '\0') {
        std::string::append(in_x8,"",(size_t)__n);
      }
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    }
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Android::Diag::GetDeviceIMSI(std::string&) */

void Android::Diag::GetDeviceIMSI(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x280));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetDeviceIMEI(std::string&) */

void Android::Diag::GetDeviceIMEI(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x288));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetDeviceMODEL(std::string&) */

void Android::Diag::GetDeviceMODEL(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x290));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetDeviceBRAND(std::string&) */

void Android::Diag::GetDeviceBRAND(string *param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  _jstring *p_Var3;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    p_Var3 = (_jstring *)
             _JNIEnv::CallObjectMethod
                       ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x298));
    if (p_Var3 != (_jstring *)0x0) {
      Util::StringFromJString(p_Var1,param_1,p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
      return;
    }
  }
  return;
}


/* Android::Diag::GetSwitchOpen() */

void Android::Diag::GetSwitchOpen(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x2b0));
    return;
  }
  return;
}


/* Android::Diag::HasNotchInScreen(int) */

bool Android::Diag::HasNotchInScreen(int param_1)

{
  char cVar1;
  int iVar2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var3);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x2a0),
                       (ulong)(uint)param_1);
    if (cVar1 != '\0') {
      iVar2 = GetSwitchOpen();
      return iVar2 != 1;
    }
  }
  return false;
}


/* Android::Diag::GetNotchHeight(int) */

void Android::Diag::GetNotchHeight(int param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod
              ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x2a8),(ulong)(uint)param_1)
    ;
    return;
  }
  return;
}


/* Android::Diag::GetMobileCardType() */

void Android::Diag::GetMobileCardType(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x270));
    return;
  }
  return;
}


/* Android::Diag::IsMobileCardType(MobileCardType) */

bool Android::Diag::IsMobileCardType(uint param_1)

{
  uint uVar1;
  
  uVar1 = GetMobileCardType();
  return (uVar1 & param_1) != 0;
}


/* Android::Diag::GetSimProvince() */

void Android::Diag::GetSimProvince(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x278));
    return;
  }
  return;
}


/* Android::Diag::GetAvailMemory() */

void Android::Diag::GetAvailMemory(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallLongMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 600));
    return;
  }
  return;
}


/* Android::Diag::GetUsedMemory() */

void Android::Diag::GetUsedMemory(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Util::GetGameObject(p_Var1);
    _JNIEnv::CallLongMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x260));
    return;
  }
  return;
}

