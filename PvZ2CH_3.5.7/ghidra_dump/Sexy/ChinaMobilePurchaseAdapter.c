// Class: Sexy::ChinaMobilePurchaseAdapter


/* Sexy::ChinaMobilePurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::BindJavaMethods
          (ChinaMobilePurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaOnResume,param_1,param_2,"OnResume","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay","(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaOnExit,param_1,param_2,"OnExit","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaIsMusicEnable,param_1,param_2,"IsMusicEnable","()Z");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaLaunchMoreGamesWebpage,param_1,param_2,"LaunchMoreGamesWebpage",
             "()V");
  return;
}


/* non-virtual thunk to Sexy::ChinaMobilePurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::BindJavaMethods
          (ChinaMobilePurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter(ChinaMobilePurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__ChinaMobilePurchaseAdapter_0690bbe0;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobilePurchaseAdapter_0690bd30;
  JavaBound<Sexy::ChinaMobilePurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::ChinaMobilePurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter(ChinaMobilePurchaseAdapter *this)

{
  ~ChinaMobilePurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter(ChinaMobilePurchaseAdapter *this)

{
  ~ChinaMobilePurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::~ChinaMobilePurchaseAdapter(ChinaMobilePurchaseAdapter *this)

{
  ~ChinaMobilePurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobilePurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::BindNativeMethods
          (ChinaMobilePurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_38;
  char *local_30;
  code *local_28;
  char *local_20;
  undefined *local_18;
  code *local_10;
  long local_8;
  
  local_28 = PaymentHook;
  local_20 = "Native_ExitGame";
  local_8 = ___stack_chk_guard;
  local_38 = "FirePaymentComplete";
  local_18 = &DAT_055a4820;
  local_30 = "(JI)V";
  local_10 = ExitGameHook;
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::ChinaMobilePurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::BindNativeMethods
          (ChinaMobilePurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobilePurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::GetPurchasePlatform(ChinaMobilePurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChinaMobile");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::ChinaMobilePurchaseAdapter::ExitGameHook(_JNIEnv*, _jobject*, long long) */

void Sexy::ChinaMobilePurchaseAdapter::ExitGameHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  __android_log_print(2,"ChinaMobilePurchase","ExitGameHook");
  LawnApp::onConfirmExitGame();
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::ExitGame() */

undefined8 __thiscall Sexy::ChinaMobilePurchaseAdapter::ExitGame(ChinaMobilePurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaOnExit,p_Var1,*(undefined8 *)(this + 0x20));
  return 1;
}


/* Sexy::ChinaMobilePurchaseAdapter::ChinaMobilePurchaseAdapter() */

void __thiscall
Sexy::ChinaMobilePurchaseAdapter::ChinaMobilePurchaseAdapter(ChinaMobilePurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::ChinaMobilePurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::ChinaMobilePurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__ChinaMobilePurchaseAdapter_0690bbe0;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobilePurchaseAdapter_0690bd30;
  __android_log_print(4,"ChinaMobilePurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::ChinaMobilePurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,"com/popcap/purchase/ChinaMobile/ChinaMobilePurchase",
             &DAT_055a4820,this);
  this[0x28] = (ChinaMobilePurchaseAdapter)0x1;
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::LaunchMoreGamesWebpage() */

undefined8 __thiscall
Sexy::ChinaMobilePurchaseAdapter::LaunchMoreGamesWebpage(ChinaMobilePurchaseAdapter *this)

{
  _JNIEnv *p_Var1;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  JavaMethod<unsigned_char>::operator()
            ((JavaMethod<unsigned_char> *)JavaLaunchMoreGamesWebpage,p_Var1,
             *(_jobject **)(this + 0x20));
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobilePurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::ChinaMobilePurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"ChinaMobilePurchase","PaymentHook( %d )");
  std::string::string(asStack_10,"");
  nop();
  switch(param_4) {
  case 0:
    AndroidAppDriver::StaticEnqueueCallback<Sexy::IPurchaseAdapter,std::string>
              ((IPurchaseAdapter *)param_3,(_func_void_string_ptr *)0x98,(string *)0x1);
    break;
  case 1:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
    break;
  case 2:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
    break;
  case 3:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::Initialize() */

void Sexy::ChinaMobilePurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"ChinaMobilePurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* Sexy::ChinaMobilePurchaseAdapter::OnResume() */

void Sexy::ChinaMobilePurchaseAdapter::OnResume(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  _JNIEnv *p_Var3;
  
  nop();
  __android_log_print(2,"ChinaMobilePurchase","OnResume");
  p_Var3 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (*(char *)(in_x0 + 0x28) != '\0') {
    iVar2 = LawnApp::GetPlatform(gLawnApp);
    if ((iVar2 == 1) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 6)) {
      *(undefined1 *)(in_x0 + 0x28) = 0;
      cVar1 = JavaMethod<unsigned_char>::operator()
                        ((JavaMethod<unsigned_char> *)JavaIsMusicEnable,p_Var3,
                         *(_jobject **)(in_x0 + 0x20));
      if (cVar1 == '\0') {
        (**(code **)(*(long *)gLawnApp + 0x1f8))(0,gLawnApp);
        (**(code **)(*(long *)gLawnApp + 0x200))(0,gLawnApp);
      }
      else {
        (**(code **)(*(long *)gLawnApp + 0x1f8))(0x3feb333333333333,gLawnApp);
        (**(code **)(*(long *)gLawnApp + 0x200))(0x3feb333333333333,gLawnApp);
      }
    }
  }
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaOnResume,(_jobject *)p_Var3,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobilePurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::ChinaMobilePurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar1 = FUN_0547429c(param_2);
  __android_log_print(2,"ChinaMobilePurchase","RequestPay( %s )",uVar1);
  (**(code **)(*(long *)param_1 + 0x68))(aDStack_28,param_1,param_2);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(auStack_20);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var2,*(undefined8 *)(param_1 + 0x20),uVar1);
  _JNIEnv::DeleteLocalRef(p_Var2);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

