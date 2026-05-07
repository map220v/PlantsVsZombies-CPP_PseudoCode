// Class: WGPlatform


/* WGPlatform::init(_JavaVM*, WGPlatformObserver*) */

void WGPlatform::init(_JavaVM *param_1,WGPlatformObserver *param_2)

{
  *(WGPlatformObserver **)param_1 = param_2;
  param_1[0x80] = (_JavaVM)0x0;
  param_1[0x81] = (_JavaVM)0x0;
  return;
}


/* WGPlatform::GetInstance() */

undefined1 * WGPlatform::GetInstance(void)

{
  return m_Instance;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGLogin(int) */

void __thiscall WGPlatform::WGLogin(WGPlatform *this,int param_1)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGLogin platform:%d",param_1);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGLogin");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,(ulong)(uint)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGLogout(bool) */

void __thiscall WGPlatform::WGLogout(WGPlatform *this,bool param_1)

{
  char cVar1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGLogout",&DAT_055923fe);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var2 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var2,"WGLogout");
  cVar1 = _JNIEnv::CallStaticBooleanMethod(local_10,p_Var2,uVar3,(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGSetPermission(unsigned int) */

void __thiscall WGPlatform::WGSetPermission(WGPlatform *this,uint param_1)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGSetQzonePermisson");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,(ulong)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGSendToWeixin(int const&, unsigned char*, unsigned char*, unsigned char*, unsigned
   char*, unsigned char*, int const&) */

void __thiscall
WGPlatform::WGSendToWeixin
          (WGPlatform *this,int *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5
          ,uchar *param_6,int *param_7)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSendToWeixin title:%s",param_2);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGSendToWeixin");
  sVar3 = strlen((char *)param_2);
  uVar4 = FUN_048f080c(local_10,param_2,sVar3);
  sVar3 = strlen((char *)param_3);
  uVar5 = FUN_048f080c(local_10,param_3,sVar3);
  sVar3 = strlen((char *)param_4);
  uVar6 = FUN_048f080c(local_10,param_4,sVar3);
  uVar7 = ZombieVan::onExitState_StartSpin(local_10,*param_7);
  sVar3 = strlen((char *)param_5);
  uVar8 = FUN_048f080c(local_10,param_5,sVar3);
  _JNIEnv::SetByteArrayRegion((_jbyteArray *)local_10,(int)uVar7,0,(signed *)(ulong)(uint)*param_7);
  _JNIEnv::CallStaticVoidMethod
            (local_10,p_Var1,uVar2,(ulong)(uint)*param_1,uVar4,uVar5,uVar6,uVar8,uVar7,*param_7);
  _JNIEnv::DeleteLocalRef((_jobject *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGSendToWeixinWithPhoto(int const&, unsigned char*, unsigned char*, int const&) */

void __thiscall
WGPlatform::WGSendToWeixinWithPhoto
          (WGPlatform *this,int *param_1,uchar *param_2,uchar *param_3,int *param_4)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSendToWeixinWithPhoto imgDataLen=%d",*param_4)
  ;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGSendToWeixinWithPhoto");
  uVar3 = ZombieVan::onExitState_StartSpin(local_10,*param_4);
  _JNIEnv::SetByteArrayRegion((_jbyteArray *)local_10,(int)uVar3,0,(signed *)(ulong)(uint)*param_4);
  sVar4 = strlen((char *)param_2);
  uVar5 = FUN_048f080c(local_10,param_2,sVar4);
  _JNIEnv::CallStaticVoidMethod
            (local_10,p_Var1,uVar2,(ulong)(uint)*param_1,uVar5,uVar3,(ulong)(uint)*param_4);
  _JNIEnv::DeleteLocalRef((_jobject *)local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGSendToQQ(unsigned char*, unsigned char*, unsigned char*, unsigned char*, int
   const&) */

void __thiscall
WGPlatform::WGSendToQQ
          (WGPlatform *this,uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4,int *param_5
          )

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSendToQQ title:%s",param_1);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGSendToQQ");
  sVar3 = strlen((char *)param_1);
  uVar4 = FUN_048f080c(local_10,param_1,sVar3);
  sVar3 = strlen((char *)param_2);
  uVar5 = FUN_048f080c(local_10,param_2,sVar3);
  sVar3 = strlen((char *)param_3);
  uVar6 = FUN_048f080c(local_10,param_3,sVar3);
  uVar7 = FUN_048f080c(local_10,param_4,*param_5);
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,uVar4,uVar5,uVar6,uVar7,(ulong)(uint)*param_5)
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGFeedback(unsigned char*, unsigned char*) */

void __thiscall WGPlatform::WGFeedback(WGPlatform *this,uchar *param_1,uchar *param_2)

{
  undefined1 uVar1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGFeedBack txt:%s",param_2);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var2 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var2,"WGFeedback");
  sVar4 = strlen((char *)param_1);
  uVar5 = FUN_048f080c(local_10,param_1,sVar4);
  sVar4 = strlen((char *)param_2);
  uVar6 = FUN_048f080c(local_10,param_2,sVar4);
  uVar1 = _JNIEnv::CallStaticBooleanMethod(local_10,p_Var2,uVar3,uVar5,uVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetVersion() */

void WGPlatform::WGGetVersion(void)

{
  undefined8 *in_x0;
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread((_JNIEnv **)*in_x0,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGGetVersion");
  uVar2 = _JNIEnv::CallStaticObjectMethod(local_10,p_Var1,uVar2);
  FUN_048f0630(local_10,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WGPlatform::setWakeup(WakeupRet&) */

void __thiscall WGPlatform::setWakeup(WGPlatform *this,WakeupRet *param_1)

{
  WakeupRet::operator=((WakeupRet *)(this + 0x10),param_1);
  this[0x80] = (WGPlatform)0x1;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::setWakeup %d",1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGEnableCrashReport(bool, bool) */

void __thiscall WGPlatform::WGEnableCrashReport(WGPlatform *this,bool param_1,bool param_2)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGEnableCrashReport bEnable rdm: %d; mta: %d;",
                      (ulong)param_1,(ulong)param_2);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGEnableCrashReport");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,(ulong)param_1,(ulong)param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGReportEvent(unsigned char*, unsigned char*, bool) */

void __thiscall
WGPlatform::WGReportEvent(WGPlatform *this,uchar *param_1,uchar *param_2,bool param_3)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGEnableReport bEnable",&DAT_055923fe);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGReportEvent");
  sVar3 = strlen((char *)param_1);
  uVar4 = FUN_048f080c(local_10,param_1,sVar3);
  sVar3 = strlen((char *)param_2);
  uVar5 = FUN_048f080c(local_10,param_2,sVar3);
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,uVar4,uVar5,(ulong)param_3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetChannelId() */

void WGPlatform::WGGetChannelId(void)

{
  undefined8 *in_x0;
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread((_JNIEnv **)*in_x0,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGGetChannelId");
  uVar2 = _JNIEnv::CallStaticObjectMethod(local_10,p_Var1,uVar2);
  FUN_048f0630(local_10,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGIsPlatformInstalled(int) */

void __thiscall WGPlatform::WGIsPlatformInstalled(WGPlatform *this,int param_1)

{
  char cVar1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var2 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var2,"WGIsPlatformInstalled");
  cVar1 = _JNIEnv::CallStaticBooleanMethod(local_10,p_Var2,uVar3,(ulong)(uint)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGIsPlatformSupportApi(int) */

void __thiscall WGPlatform::WGIsPlatformSupportApi(WGPlatform *this,int param_1)

{
  char cVar1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var2 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var2,"WGIsPlatformSupportApi");
  cVar1 = _JNIEnv::CallStaticBooleanMethod(local_10,p_Var2,uVar3,(ulong)(uint)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0');
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetRegisterChannelId() */

void WGPlatform::WGGetRegisterChannelId(void)

{
  undefined8 *in_x0;
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread((_JNIEnv **)*in_x0,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGGetRegisterChannelId");
  uVar2 = _JNIEnv::CallStaticObjectMethod(local_10,p_Var1,uVar2);
  FUN_048f0630(local_10,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGRefreshWXToken() */

void __thiscall WGPlatform::WGRefreshWXToken(WGPlatform *this)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGRefreshWXToken");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetPf() */

void WGPlatform::WGGetPf(void)

{
  undefined8 *in_x0;
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread((_JNIEnv **)*in_x0,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGGetPf");
  uVar2 = _JNIEnv::CallStaticObjectMethod(local_10,p_Var1,uVar2);
  FUN_048f0630(local_10,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetPfKey() */

void WGPlatform::WGGetPfKey(void)

{
  undefined8 *in_x0;
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread((_JNIEnv **)*in_x0,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGGetPfKey");
  uVar2 = _JNIEnv::CallStaticObjectMethod(local_10,p_Var1,uVar2);
  FUN_048f0630(local_10,uVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGChangeEnv(int) */

void __thiscall WGPlatform::WGChangeEnv(WGPlatform *this,int param_1)

{
  _jmethodID *p_Var1;
  undefined8 uVar2;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var1 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar2 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var1,"WGChangeEnvironment");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var1,uVar2,(ulong)(uint)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WGPlatform::WGSetObserver(WGPlatformObserver*) */

void __thiscall WGPlatform::WGSetObserver(WGPlatform *this,WGPlatformObserver *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSetObserver needDelayWakeupNotify %d",
                      this[0x80]);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSetObserver needDelayLoginNotify %d",
                      this[0x81]);
  *(WGPlatformObserver **)(this + 8) = param_1;
  if (this[0x80] == (WGPlatform)0x0) {
    if (this[0x81] != (WGPlatform)0x0) {
      uVar4 = 0;
      while( true ) {
        uVar3 = FUN_048f0078(*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58));
        if (uVar3 <= uVar4) break;
        puVar1 = (undefined4 *)
                 std::vector<TokenRet,std::allocator<TokenRet>>::at
                           ((vector<TokenRet,std::allocator<TokenRet>> *)(this + 0x50),uVar4);
        uVar2 = FUN_0547429c(puVar1 + 2);
        __android_log_print(4,"WeGame  ~!!@",
                            "WGPlatform::WGSetObserver login delay notify type:%d; value:%s",*puVar1
                            ,uVar2);
        uVar4 = uVar4 + 1;
      }
      (**(code **)**(undefined8 **)(this + 8))(*(undefined8 **)(this + 8),this + 0x30);
      this[0x81] = (WGPlatform)0x0;
    }
    return;
  }
  uVar2 = FUN_0547429c(this + 0x18);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGSetObserver wakeup delay notify openid:%s",
                      uVar2);
  (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),this + 0x10);
  this[0x80] = (WGPlatform)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGTestSpeed(std::vector<std::string, std::allocator<std::string > >&) */

void __thiscall WGPlatform::WGTestSpeed(WGPlatform *this,vector *param_1)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  _jmethodID *p_Var7;
  ulong uVar8;
  _jclass *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_10);
  p_Var2 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetMethodID(local_10,(char *)p_Var2,"<init>");
  _JNIEnv::GetMethodID(local_10,(char *)p_Var2,"size");
  uVar4 = _JNIEnv::GetMethodID(local_10,(char *)p_Var2,"add");
  p_Var2 = (_jmethodID *)_JNIEnv::NewObject(local_10,p_Var2,uVar3);
  uVar8 = 0;
  while( true ) {
    uVar6 = FUN_048f008c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    p_Var1 = local_10;
    if (uVar6 <= uVar8) break;
    uVar3 = std::vector<std::string,std::allocator<std::string>>::at
                      ((vector<std::string,std::allocator<std::string>> *)param_1,uVar8);
    uVar5 = FUN_0547429c();
    uVar3 = FUN_05474184(uVar3);
    uVar3 = FUN_048f080c(p_Var1,uVar5,uVar3);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var2,uVar4,uVar3);
    uVar8 = uVar8 + 1;
  }
  p_Var7 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_10);
  uVar3 = _JNIEnv::GetStaticMethodID(local_10,(char *)p_Var7,"WGTestSpeed");
  _JNIEnv::CallStaticVoidMethod(local_10,p_Var7,uVar3,p_Var2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetBestSchedulingIp(SchedulingInfo&, std::vector<std::string,
   std::allocator<std::string > >&) */

void __thiscall
WGPlatform::WGGetBestSchedulingIp(WGPlatform *this,SchedulingInfo *param_1,vector *param_2)

{
  _jclass *p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  _jfieldID *p_Var8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  _jclass *local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_18);
  pcVar4 = (char *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_18);
  uVar5 = _JNIEnv::GetStaticMethodID(local_18,pcVar4,"WGGetBestSchedulingIp");
  p_Var6 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_18);
  uVar7 = _JNIEnv::GetMethodID(local_18,(char *)p_Var6,"<init>");
  p_Var8 = (_jfieldID *)_JNIEnv::NewObject(local_18,p_Var6,uVar7);
  _JNIEnv::GetFieldID(local_18,(char *)p_Var6,"ip");
  _JNIEnv::GetFieldID(local_18,(char *)p_Var6,"port");
  p_Var6 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_18);
  uVar7 = _JNIEnv::GetMethodID(local_18,(char *)p_Var6,"<init>");
  uVar9 = _JNIEnv::GetMethodID(local_18,(char *)p_Var6,"add");
  _JNIEnv::GetMethodID(local_18,(char *)p_Var6,"get");
  p_Var6 = (_jmethodID *)_JNIEnv::NewObject(local_18,p_Var6,uVar7);
  uVar12 = 0;
  while( true ) {
    uVar11 = FUN_048f008c(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
    p_Var1 = local_18;
    if (uVar11 <= uVar12) break;
    uVar7 = std::vector<std::string,std::allocator<std::string>>::at
                      ((vector<std::string,std::allocator<std::string>> *)param_2,uVar12);
    uVar10 = FUN_0547429c();
    uVar7 = FUN_05474184(uVar7);
    uVar7 = FUN_048f080c(p_Var1,uVar10,uVar7);
    _JNIEnv::CallBooleanMethod((_jobject *)p_Var1,p_Var6,uVar9,uVar7);
    uVar12 = uVar12 + 1;
  }
  uVar2 = FUN_048f046c(local_18,pcVar4,uVar5,p_Var8,p_Var6);
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_18,p_Var8);
  FUN_048f0630(asStack_10,local_18,uVar5);
  FUN_05474278(param_1,asStack_10);
  std::string::~string(asStack_10);
  uVar3 = _JNIEnv::GetIntField((_jobject *)local_18,p_Var8);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar5 = FUN_0547429c(param_1);
  __android_log_print(4,"WeGame  ~!!@","WGGetBestSchedulingIp  ip:%s; port: %d",uVar5,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WGPlatform::WGPlatform() */

void __thiscall WGPlatform::WGPlatform(WGPlatform *this)

{
  *(undefined8 *)(this + 8) = 0;
  WakeupRet::WakeupRet((WakeupRet *)(this + 0x10));
  LoginRet::LoginRet((LoginRet *)(this + 0x30));
  return;
}


/* WGPlatform::~WGPlatform() */

void __thiscall WGPlatform::~WGPlatform(WGPlatform *this)

{
  LoginRet::~LoginRet((LoginRet *)(this + 0x30));
  WakeupRet::~WakeupRet((WakeupRet *)(this + 0x10));
  return;
}


/* WGPlatform::setLoginRet(LoginRet&) */

void __thiscall WGPlatform::setLoginRet(WGPlatform *this,LoginRet *param_1)

{
  LoginRet::operator=((LoginRet *)(this + 0x30),param_1);
  this[0x81] = (WGPlatform)0x1;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::setLoginRet %d",1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WGPlatform::WGGetLoginRecord(LoginRet&) */

void __thiscall WGPlatform::WGGetLoginRecord(WGPlatform *this,LoginRet *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  undefined8 uVar7;
  _jfieldID *p_Var8;
  _jmethodID *p_Var9;
  _jfieldID *p_Var10;
  ulong uVar11;
  _jclass *local_50;
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined4 local_20 [2];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGGetLoginRecord",&DAT_055923fe);
  _JavaVM::AttachCurrentThread(*(_JNIEnv ***)this,&local_50);
  pcVar4 = (char *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_50);
  uVar5 = _JNIEnv::GetStaticMethodID(local_50,pcVar4,"WGGetLoginRecord");
  p_Var6 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)local_50);
  uVar7 = _JNIEnv::GetMethodID(local_50,(char *)p_Var6,"<init>");
  p_Var8 = (_jfieldID *)_JNIEnv::NewObject(local_50,p_Var6,uVar7);
  FUN_048f046c(local_50,pcVar4,uVar5);
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"pf");
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  FUN_048f0630(asStack_48,local_50,uVar5);
  uVar5 = FUN_0547429c(asStack_48);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform:: pf = %s",uVar5);
  thunk_FUN_05475e00(param_1 + 0x40,asStack_48);
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"pf_key");
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  FUN_048f0630(asStack_40,local_50,uVar5);
  uVar5 = FUN_0547429c(asStack_40);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform:: pfKey =  %s",uVar5);
  thunk_FUN_05475e00(param_1 + 0x48,asStack_40);
  *(undefined4 *)param_1 = 1;
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"desc");
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  FUN_048f0630(asStack_38,local_50,uVar5);
  thunk_FUN_05475e00(param_1 + 8,asStack_38);
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"platform");
  uVar2 = _JNIEnv::GetIntField((_jobject *)local_50,p_Var8);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGGetLoginRecord platform %d",uVar2);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGGetLoginRecord _ePlatform(plat) %d",
                      *(undefined4 *)(param_1 + 0x10));
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"open_id");
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  FUN_048f0630(asStack_30,local_50,uVar5);
  thunk_FUN_05475e00(param_1 + 0x18,asStack_30);
  uVar5 = FUN_0547429c(asStack_30);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGGetLoginRecord open_id %s",uVar5);
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"token");
  p_Var9 = (_jmethodID *)_JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  pcVar4 = (char *)_JNIEnv::GetObjectClass((_jobject *)local_50);
  uVar5 = _JNIEnv::GetMethodID(local_50,pcVar4,"size");
  uVar7 = _JNIEnv::GetMethodID(local_50,pcVar4,"get");
  uVar3 = _JNIEnv::CallIntMethod((_jobject *)local_50,p_Var9,uVar5);
  __android_log_print(4,"WeGame  ~!!@","WGPlatform::WGGetLoginRecord Vector size %d",uVar3);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      PakRecord::PakRecord((PakRecord *)local_20);
      uVar1 = (int)uVar11 + 1;
      p_Var10 = (_jfieldID *)_JNIEnv::CallObjectMethod((_jobject *)local_50,p_Var9,uVar7,uVar11);
      pcVar4 = (char *)_JNIEnv::GetObjectClass((_jobject *)local_50);
      _JNIEnv::GetFieldID(local_50,pcVar4,"type");
      local_20[0] = _JNIEnv::GetIntField((_jobject *)local_50,p_Var10);
      _JNIEnv::GetFieldID(local_50,pcVar4,"value");
      uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var10);
      FUN_048f0630(asStack_28,local_50,uVar5);
      FUN_05474278(auStack_18,asStack_28);
      std::string::~string(asStack_28);
      _JNIEnv::GetFieldID(local_50,pcVar4,"expiration");
      local_10 = _JNIEnv::GetIntField((_jobject *)local_50,p_Var10);
      std::vector<TokenRet,std::allocator<TokenRet>>::push_back
                ((vector<TokenRet,std::allocator<TokenRet>> *)(param_1 + 0x20),(TokenRet *)local_20)
      ;
      PakRecord::~PakRecord((PakRecord *)local_20);
      uVar11 = (ulong)uVar1;
    } while (uVar1 != uVar3);
  }
  _JNIEnv::GetFieldID(local_50,(char *)p_Var6,"user_id");
  uVar5 = _JNIEnv::GetObjectField((_jobject *)local_50,p_Var8);
  FUN_048f0630((PakRecord *)local_20,local_50,uVar5);
  thunk_FUN_05475e00(param_1 + 0x38,(PakRecord *)local_20);
  _JNIEnv::DeleteLocalRef((_jobject *)local_50);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  std::string::~string((string *)local_20);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

