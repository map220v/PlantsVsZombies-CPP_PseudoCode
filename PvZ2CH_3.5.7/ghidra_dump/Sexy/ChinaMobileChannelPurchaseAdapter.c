// Class: Sexy::ChinaMobileChannelPurchaseAdapter


/* Sexy::ChinaMobileChannelPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::ChinaMobileChannelPurchaseAdapter::GetProductInfo(string *param_1)

{
  bool bVar1;
  string *in_x1;
  size_t in_x2;
  long in_x8;
  
  IPurchaseAdapter::GetProductInfo(param_1);
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
  if ((bVar1) ||
     (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
    std::string::append((string *)(in_x8 + 8),"000",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"001",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"002",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"003",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"006",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"007",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"008",in_x2);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
  if ((((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4"), bVar1)) ||
      (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5"), bVar1)) ||
     (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6"), bVar1)) {
LAB_048f6d08:
    std::string::append((string *)(in_x8 + 8),"022",in_x2);
  }
  else {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"), bVar1)) {
LAB_048f6e0c:
      std::string::append((string *)(in_x8 + 8),"023",in_x2);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
    if ((((!bVar1) &&
         ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_10"), !bVar1 &&
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_11"), !bVar1))))
        && ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_12"), !bVar1 &&
            ((((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_13"), !bVar1
               && (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_14"),
                  !bVar1)) &&
              (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_15"), !bVar1)
              ) && ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_16"),
                    !bVar1 && (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_17"),
                              !bVar1)))))))) &&
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_18"), !bVar1)) {
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.mower");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"020",in_x2);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.present");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"021",in_x2);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.1000coins");
      if (bVar1) goto LAB_048f6d08;
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.2000coins");
      if (bVar1) goto LAB_048f6e0c;
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.3000coins");
      if (!bVar1) {
        return;
      }
    }
    std::string::append((string *)(in_x8 + 8),"024",in_x2);
  }
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::BindJavaMethods
          (ChinaMobileChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::ChinaMobileChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::BindJavaMethods
          (ChinaMobileChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter
          (ChinaMobileChannelPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__ChinaMobileChannelPurchaseAdapter_0690bd90;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobileChannelPurchaseAdapter_0690bee0;
  JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to
   Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter
          (ChinaMobileChannelPurchaseAdapter *this)

{
  ~ChinaMobileChannelPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter
          (ChinaMobileChannelPurchaseAdapter *this)

{
  ~ChinaMobileChannelPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::~ChinaMobileChannelPurchaseAdapter
          (ChinaMobileChannelPurchaseAdapter *this)

{
  ~ChinaMobileChannelPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::BindNativeMethods
          (ChinaMobileChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::ChinaMobileChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*,
   JavaClass const&) */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::BindNativeMethods
          (ChinaMobileChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileChannelPurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::GetPurchasePlatform
          (ChinaMobileChannelPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChinaMobileChannel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::ExitGameHook(_JNIEnv*, _jobject*, long long) */

void Sexy::ChinaMobileChannelPurchaseAdapter::ExitGameHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  __android_log_print(2,"ChinaMobileChannelPurchase","ExitGameHook");
  LawnApp::onConfirmExitGame();
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::ExitGame() */

undefined8 __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::ExitGame(ChinaMobileChannelPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaOnExit,p_Var1,*(undefined8 *)(this + 0x20));
  return 1;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::ChinaMobileChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::ChinaMobileChannelPurchaseAdapter
          (ChinaMobileChannelPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__ChinaMobileChannelPurchaseAdapter_0690bd90;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobileChannelPurchaseAdapter_0690bee0;
  __android_log_print(4,"ChinaMobileChannelPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::ChinaMobileChannelPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,
             "com/popcap/purchase/ChinaMobileChannel/ChinaMobileChannelPurchase",&DAT_055a4820,this)
  ;
  this[0x28] = (ChinaMobileChannelPurchaseAdapter)0x1;
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::LaunchMoreGamesWebpage() */

undefined8 __thiscall
Sexy::ChinaMobileChannelPurchaseAdapter::LaunchMoreGamesWebpage
          (ChinaMobileChannelPurchaseAdapter *this)

{
  _JNIEnv *p_Var1;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  JavaMethod<unsigned_char>::operator()
            ((JavaMethod<unsigned_char> *)JavaLaunchMoreGamesWebpage,p_Var1,
             *(_jobject **)(this + 0x20));
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileChannelPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::ChinaMobileChannelPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"ChinaMobileChannelPurchase","PaymentHook( %d )");
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


/* Sexy::ChinaMobileChannelPurchaseAdapter::Initialize() */

void Sexy::ChinaMobileChannelPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"ChinaMobileChannelPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* Sexy::ChinaMobileChannelPurchaseAdapter::OnResume() */

void Sexy::ChinaMobileChannelPurchaseAdapter::OnResume(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  _JNIEnv *p_Var3;
  
  nop();
  __android_log_print(2,"ChinaMobileChannelPurchase","OnResume");
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
/* Sexy::ChinaMobileChannelPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::ChinaMobileChannelPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar1 = FUN_0547429c(param_2);
  __android_log_print(2,"ChinaMobileChannelPurchase","RequestPay( %s )",uVar1);
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

