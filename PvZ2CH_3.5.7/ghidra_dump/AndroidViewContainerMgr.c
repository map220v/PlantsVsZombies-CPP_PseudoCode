// Class: AndroidViewContainerMgr


/* AndroidViewContainerMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidViewContainerMgr::BindJavaMethods
          (AndroidViewContainerMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitialize,param_1,param_2,"Initialize","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaShowWebView,param_1,param_2,"ShowWebView","(Ljava/lang/String;)V"
            );
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallSettlement,param_1,param_2,"PassCallSettlement",
             "(Ljava/lang/String;I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallLottery,param_1,param_2,"PassCallLottery",
             "(Ljava/lang/String;III)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallScoreStoreInfo,param_1,param_2,"PassCallScoreStoreInfo",
             "(Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallScoreStoreBuy,param_1,param_2,"PassCallScoreStoreBuy",
             "(Ljava/lang/String;I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallConsumeCash,param_1,param_2,"PassCallConsumeCash",
             "(Ljava/lang/String;I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaPassCallAddPlayTimes,param_1,param_2,"PassCallAddPlayTimes",
             "(Ljava/lang/String;I)V");
  return;
}


/* non-virtual thunk to AndroidViewContainerMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidViewContainerMgr::BindJavaMethods
          (AndroidViewContainerMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidViewContainerMgr::BindNativeMethods
          (AndroidViewContainerMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  void *pvVar1;
  undefined1 auStack_c8 [192];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = memcpy(auStack_c8,&PTR_s_Native_CallSettlement_06a88df0,0xc0);
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)pvVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AndroidViewContainerMgr::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidViewContainerMgr::BindNativeMethods
          (AndroidViewContainerMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -8,param_1,param_2);
  return;
}


/* AndroidViewContainerMgr::~AndroidViewContainerMgr() */

void __thiscall AndroidViewContainerMgr::~AndroidViewContainerMgr(AndroidViewContainerMgr *this)

{
  *(undefined ***)this = &PTR__AndroidViewContainerMgr_06981b50;
  *(undefined ***)(this + 8) = &PTR__AndroidViewContainerMgr_06981bc0;
  JavaBound<AndroidViewContainerMgr>::~JavaBound((JavaBound<AndroidViewContainerMgr> *)(this + 8));
  return;
}


/* non-virtual thunk to AndroidViewContainerMgr::~AndroidViewContainerMgr() */

void __thiscall AndroidViewContainerMgr::~AndroidViewContainerMgr(AndroidViewContainerMgr *this)

{
  ~AndroidViewContainerMgr(this + -8);
  return;
}


/* AndroidViewContainerMgr::~AndroidViewContainerMgr() */

void __thiscall AndroidViewContainerMgr::~AndroidViewContainerMgr(AndroidViewContainerMgr *this)

{
  ~AndroidViewContainerMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AndroidViewContainerMgr::~AndroidViewContainerMgr() */

void __thiscall AndroidViewContainerMgr::~AndroidViewContainerMgr(AndroidViewContainerMgr *this)

{
  ~AndroidViewContainerMgr(this + -8);
  return;
}


/* AndroidViewContainerMgr::AndroidViewContainerMgr() */

void __thiscall AndroidViewContainerMgr::AndroidViewContainerMgr(AndroidViewContainerMgr *this)

{
  IViewContainer::IViewContainer((IViewContainer *)this);
  JavaBound<AndroidViewContainerMgr>::JavaBound((JavaBound<AndroidViewContainerMgr> *)(this + 8));
  *(undefined ***)this = &PTR__AndroidViewContainerMgr_06981b50;
  *(undefined ***)(this + 8) = &PTR__AndroidViewContainerMgr_06981bc0;
  return;
}


/* AndroidViewContainerMgr::CallCloseWebViewHook(_JNIEnv*, _jobject*) */

void AndroidViewContainerMgr::CallCloseWebViewHook(_JNIEnv *param_1,_jobject *param_2)

{
  Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  WebViewInteractMgr::CallCloseWebView();
  return;
}


/* AndroidViewContainerMgr::CallOpenAdHook(_JNIEnv*, _jobject*) */

void AndroidViewContainerMgr::CallOpenAdHook(_JNIEnv *param_1,_jobject *param_2)

{
  WebViewInteractMgr *this;
  
  this = (WebViewInteractMgr *)Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  WebViewInteractMgr::CallOpenAd(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallSettlementHook(_JNIEnv*, _jobject*, _jstring*, int, int, int) */

void AndroidViewContainerMgr::CallSettlementHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,int param_4,int param_5,
               int param_6)

{
  WebViewInteractMgr *pWVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  pWVar1 = (WebViewInteractMgr *)Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallSettlement(pWVar1,asStack_10,param_4,param_5,param_6);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallLotteryHook(_JNIEnv*, _jobject*, _jstring*) */

void AndroidViewContainerMgr::CallLotteryHook(_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  uVar1 = Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallLottery(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallScoreStoreInfoHook(_JNIEnv*, _jobject*, _jstring*) */

void AndroidViewContainerMgr::CallScoreStoreInfoHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  uVar1 = Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallScoreStoreInfo(uVar1,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallScoreStoreBuyHook(_JNIEnv*, _jobject*, _jstring*, int) */

void AndroidViewContainerMgr::CallScoreStoreBuyHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,int param_4)

{
  WebViewInteractMgr *pWVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  pWVar1 = (WebViewInteractMgr *)Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallScoreStoreBuy(pWVar1,asStack_10,param_4);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallConsumeCashHook(_JNIEnv*, _jobject*, _jstring*, int, int) */

void AndroidViewContainerMgr::CallConsumeCashHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,int param_4,int param_5)

{
  WebViewInteractMgr *pWVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  pWVar1 = (WebViewInteractMgr *)Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallConsumeCash(pWVar1,asStack_10,param_4,param_5);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidViewContainerMgr::CallAddPlayTimesHook(_JNIEnv*, _jobject*, _jstring*, int, int) */

void AndroidViewContainerMgr::CallAddPlayTimesHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  uVar1 = Sexy::LazySingleton<WebViewInteractMgr>::GetInstance();
  FUN_05475d88(asStack_10,asStack_18);
  WebViewInteractMgr::CallAddPlayTimes(uVar1,asStack_10,param_4,param_5);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

