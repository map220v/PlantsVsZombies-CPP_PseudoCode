// Class: Android::Util


/* Android::Util::GetJNIEnv() */

void Android::Util::GetJNIEnv(void)

{
  if (DAT_06bbef40 != (undefined8 *)0x0) {
    FUN_052d2b4c(*DAT_06bbef40);
    return;
  }
  return;
}


/* Android::Util::GetJVM() */

undefined8 Android::Util::GetJVM(void)

{
  return g_JavaVM;
}


/* Android::Util::GetGameObject(_JNIEnv*) */

void Android::Util::GetGameObject(_JNIEnv *param_1)

{
  FUN_052d25b0(DAT_06bbef40 + 0x10,param_1);
  return;
}


/* Android::Util::GetPackageManagerObject(_JNIEnv*) */

void Android::Util::GetPackageManagerObject(_JNIEnv *param_1)

{
  FUN_052d25f4(DAT_06bbef40 + 0x30,param_1);
  return;
}


/* Android::Util::GetGLViewObject(_JNIEnv*) */

void Android::Util::GetGLViewObject(_JNIEnv *param_1)

{
  FUN_052d2638(DAT_06bbef40 + 0x18,param_1);
  return;
}


/* Android::Util::GetHttpObject(_JNIEnv*) */

void Android::Util::GetHttpObject(_JNIEnv *param_1)

{
  FUN_052d267c(DAT_06bbef40 + 0x20,param_1);
  return;
}


/* Android::Util::GetFacebookObject(_JNIEnv*) */

void Android::Util::GetFacebookObject(_JNIEnv *param_1)

{
  FUN_052d26c0(DAT_06bbef40 + 0x28,param_1);
  return;
}


/* Android::Util::GetElapsedRealtime() */

void Android::Util::GetElapsedRealtime(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)GetGameObject(p_Var1);
    _JNIEnv::CallLongMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x38));
    return;
  }
  return;
}


/* Android::Util::StartPNS(int) */

void Android::Util::StartPNS(int param_1)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod
              ((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x40),(ulong)(uint)param_1);
    return;
  }
  return;
}


/* Android::Util::OpenSystemSetting() */

void Android::Util::OpenSystemSetting(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x48));
    return;
  }
  return;
}


/* Android::Util::NotifyDecompressStage() */

void Android::Util::NotifyDecompressStage(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x50));
    return;
  }
  return;
}


/* Android::Util::IsAutosmoking() */

bool Android::Util::IsAutosmoking(void)

{
  char cVar1;
  _JNIEnv *p_Var2;
  _jmethodID *p_Var3;
  
  p_Var2 = (_JNIEnv *)GetJNIEnv();
  if (p_Var2 != (_JNIEnv *)0x0) {
    p_Var3 = (_jmethodID *)GetGameObject(p_Var2);
    cVar1 = _JNIEnv::CallBooleanMethod
                      ((_jobject *)p_Var2,p_Var3,*(undefined8 *)(DAT_06bbef40 + 0x58));
    return cVar1 != '\0';
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Util::WStringFromJString(_JNIEnv*, std::wstring&, _jstring*) */

void Android::Util::WStringFromJString(_JNIEnv *param_1,wstring *param_2,_jstring *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == (_jstring *)0x0) {
    bVar3 = false;
  }
  else {
    iVar1 = _JNIEnv::GetStringLength((_jstring *)param_1);
    lVar2 = _JNIEnv::GetStringCritical((_jstring *)param_1,(uchar *)param_3);
    bVar3 = lVar2 != 0;
    if (bVar3) {
      FUN_05477edc(auStack_10,lVar2,(long)iVar1,auStack_18);
      FUN_054766c8(param_2,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
    }
    _JNIEnv::ReleaseStringCritical((_jstring *)param_1,(ushort *)param_3);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}


/* Android::Util::StringFromJString(_JNIEnv*, std::string&, _jstring*) */

bool Android::Util::StringFromJString(_JNIEnv *param_1,string *param_2,_jstring *param_3)

{
  char *__s;
  
  if (param_3 == (_jstring *)0x0) {
    return false;
  }
  __s = (char *)_JNIEnv::GetStringUTFChars((_jstring *)param_1,(uchar *)param_3);
  if (__s != (char *)0x0) {
    std::string::append(param_2,__s,(size_t)__s);
  }
  _JNIEnv::ReleaseStringUTFChars((_jstring *)param_1,(char *)param_3);
  return __s != (char *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Util::GetUUIDString() */

void __thiscall Android::Util::GetUUIDString(Util *this)

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
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    p_Var4 = (_jmethodID *)GetGameObject(p_Var3);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x60));
    if (__n != (_jstring *)0x0) {
      cVar2 = StringFromJString(p_Var3,in_x8,__n);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Util::GetPackageName() */

void __thiscall Android::Util::GetPackageName(Util *this)

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
  p_Var3 = (_JNIEnv *)GetJNIEnv();
  if (p_Var3 != (_JNIEnv *)0x0) {
    p_Var4 = (_jmethodID *)GetGameObject(p_Var3);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x68));
    if (__n != (_jstring *)0x0) {
      cVar2 = StringFromJString(p_Var3,in_x8,__n);
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


/* Android::Util::UI_DeserializeTouchEvent(unsigned char*&, Sexy::Touch&) */

undefined8 Android::Util::UI_DeserializeTouchEvent(uchar **param_1,Touch *param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_2 + 8) = 0;
  puVar2 = *param_1;
  iVar1 = *(int *)(puVar2 + 4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar2 + 8);
  uVar3 = *(undefined8 *)(puVar2 + 0x1c);
  *(long *)param_2 = (long)iVar1;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(puVar2 + 0x14);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar2 + 0x18);
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar2 + 0x24);
  *param_1 = puVar2 + 0x30;
  return 1;
}


/* Android::Util::UI_DeserializeKeyEvent(unsigned char*&, AndroidKeyEvent&) */

undefined8 Android::Util::UI_DeserializeKeyEvent(uchar **param_1,AndroidKeyEvent *param_2)

{
  uchar *puVar1;
  undefined8 uVar2;
  
  puVar1 = *param_1;
  *(undefined4 *)param_2 = *(undefined4 *)(puVar1 + 4);
  uVar2 = *(undefined8 *)(puVar1 + 0x14);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar1 + 0xc);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar1 + 0x18);
  *param_1 = puVar1 + 0x20;
  return 1;
}


/* Android::Util::UI_DeserializeLongPressEvent(unsigned char*&, Sexy::Point&) */

void Android::Util::UI_DeserializeLongPressEvent(uchar **param_1,Point *param_2)

{
  uchar *puVar1;
  
  puVar1 = *param_1;
  *(undefined4 *)param_2 = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 8);
  *param_1 = puVar1 + 0x10;
  return;
}


/* Android::Util::UI_DeserializePinchEvent(unsigned char*&, Sexy::Point&, float&, float&) */

void Android::Util::UI_DeserializePinchEvent
               (uchar **param_1,Point *param_2,float *param_3,float *param_4)

{
  float fVar1;
  uchar *puVar2;
  
  puVar2 = *param_1;
  *(undefined4 *)param_2 = *(undefined4 *)(puVar2 + 4);
  fVar1 = *(float *)(puVar2 + 0xc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar2 + 8);
  *param_3 = fVar1;
  *param_4 = *(float *)(puVar2 + 0x10);
  *param_1 = puVar2 + 0x20;
  return;
}


/* Android::Util::UI_DeserializeFlickEvent(unsigned char*&, Sexy::Point&, double&, double&) */

void Android::Util::UI_DeserializeFlickEvent
               (uchar **param_1,Point *param_2,double *param_3,double *param_4)

{
  uchar *puVar1;
  double dVar2;
  
  puVar1 = *param_1;
  *(undefined4 *)param_2 = *(undefined4 *)(puVar1 + 4);
  dVar2 = *(double *)(puVar1 + 0xc);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 8);
  *param_3 = dVar2;
  *param_4 = *(double *)(puVar1 + 0x14);
  *param_1 = puVar1 + 0x20;
  return;
}


/* Android::Util::Util_MonitorEnter(_jobject*) */

bool __thiscall Android::Util::Util_MonitorEnter(Util *this,_jobject *param_1)

{
  int iVar1;
  _jobject *p_Var2;
  
  p_Var2 = (_jobject *)GetJNIEnv();
  if (p_Var2 != (_jobject *)0x0) {
    iVar1 = _JNIEnv::MonitorEnter(p_Var2);
    return iVar1 == 0;
  }
  return false;
}


/* Android::Util::Util_MonitorExit(_jobject*) */

bool __thiscall Android::Util::Util_MonitorExit(Util *this,_jobject *param_1)

{
  int iVar1;
  _jobject *p_Var2;
  
  p_Var2 = (_jobject *)GetJNIEnv();
  if (p_Var2 != (_jobject *)0x0) {
    iVar1 = _JNIEnv::MonitorExit(p_Var2);
    return iVar1 == 0;
  }
  return false;
}


/* Android::Util::Register(_JNIEnv*, _jclass*) */

bool Android::Util::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_GetUUIDString");
  *(long *)(lVar1 + 0x60) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_GetPackageName");
    *(long *)(lVar1 + 0x68) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_GetElapsedRealtime");
      *(long *)(lVar1 + 0x38) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_StartPNS");
        *(long *)(lVar1 + 0x40) = lVar2;
        lVar1 = DAT_06bbef40;
        if (lVar2 != 0) {
          lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_OpenSystemSetting");
          *(long *)(lVar1 + 0x48) = lVar2;
          lVar1 = DAT_06bbef40;
          if (lVar2 != 0) {
            lVar2 = _JNIEnv::GetMethodID
                              ((_jclass *)param_1,(char *)param_2,"Util_NotifyDecompressStage");
            *(long *)(lVar1 + 0x50) = lVar2;
            lVar1 = DAT_06bbef40;
            if (lVar2 != 0) {
              lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Util_IsAutosmoking");
              *(long *)(lVar1 + 0x58) = lVar2;
              return lVar2 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

