// Class: Android::Info


/* Android::Info::Register(_JNIEnv*, _jclass*) */

bool Android::Info::Register(_JNIEnv *param_1,_jclass *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_06bbef40;
  lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Info_SysGetProductVersion");
  *(long *)(lVar1 + 0x210) = lVar2;
  lVar1 = DAT_06bbef40;
  if (lVar2 != 0) {
    lVar2 = _JNIEnv::GetMethodID
                      ((_jclass *)param_1,(char *)param_2,"Info_SysGetProductVersionString");
    *(long *)(lVar1 + 0x218) = lVar2;
    lVar1 = DAT_06bbef40;
    if (lVar2 != 0) {
      lVar2 = _JNIEnv::GetMethodID
                        ((_jclass *)param_1,(char *)param_2,"Info_SysGetUserCurrencySymbol");
      *(long *)(lVar1 + 0x220) = lVar2;
      lVar1 = DAT_06bbef40;
      if (lVar2 != 0) {
        lVar2 = _JNIEnv::GetMethodID((_jclass *)param_1,(char *)param_2,"Info_SysGetPackageName");
        *(long *)(lVar1 + 0x228) = lVar2;
        return lVar2 != 0;
      }
    }
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Info::SysGetProductVersion() */

void __thiscall Android::Info::SysGetProductVersion(Info *this)

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
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x218))
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Info::SysGetProductVersionCode() */

void Android::Info::SysGetProductVersionCode(void)

{
  char cVar1;
  int iVar2;
  _JNIEnv *p_Var3;
  _jmethodID *p_Var4;
  _jstring *__n;
  char *__nptr;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"-1");
  nop();
  p_Var3 = (_JNIEnv *)Util::GetJNIEnv();
  if (p_Var3 == (_JNIEnv *)0x0) {
    iVar2 = -1;
  }
  else {
    p_Var4 = (_jmethodID *)Util::GetGameObject(p_Var3);
    __n = (_jstring *)
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x210))
    ;
    if (__n != (_jstring *)0x0) {
      cVar1 = Util::StringFromJString(p_Var3,asStack_10,__n);
      if (cVar1 == '\0') {
        std::string::append(asStack_10,"-1",(size_t)__n);
      }
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
    }
    __nptr = (char *)FUN_0547429c(asStack_10);
    iVar2 = atoi(__nptr);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Android::Info::SysGetPackageName() */

void __thiscall Android::Info::SysGetPackageName(Info *this)

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
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x228))
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Android::Info::SysGetUserCurrencySymbol() */

void Android::Info::SysGetUserCurrencySymbol(void)

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
          _JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var4,*(undefined8 *)(DAT_06bbef40 + 0x220))
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

