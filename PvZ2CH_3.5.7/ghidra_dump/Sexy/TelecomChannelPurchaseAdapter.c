// Class: Sexy::TelecomChannelPurchaseAdapter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::LaunchMoreGamesWebpage() */

void Sexy::TelecomChannelPurchaseAdapter::LaunchMoreGamesWebpage(void)

{
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  plVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*gLawnApp + 0x168);
  std::string::string(asStack_10,"http://wapgame.189.cn");
  (*pcVar2)(plVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::GetAboutContentStringId() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::GetAboutContentStringId(TelecomChannelPurchaseAdapter *this)

{
  long lVar1;
  undefined8 in_x8;
  
  lVar1 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::TelecomChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::BindJavaMethods
          (TelecomChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaDestorySDK,param_1,param_2,"DestorySDK","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to Sexy::TelecomChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::BindJavaMethods
          (TelecomChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter
          (TelecomChannelPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__TelecomChannelPurchaseAdapter_0690c560;
  *(undefined ***)(this + 0x18) = &PTR__TelecomChannelPurchaseAdapter_0690c6b0;
  JavaBound<Sexy::TelecomChannelPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::TelecomChannelPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter
          (TelecomChannelPurchaseAdapter *this)

{
  ~TelecomChannelPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter
          (TelecomChannelPurchaseAdapter *this)

{
  ~TelecomChannelPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::~TelecomChannelPurchaseAdapter
          (TelecomChannelPurchaseAdapter *this)

{
  ~TelecomChannelPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::BindNativeMethods
          (TelecomChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_20;
  char *local_18;
  code *local_10;
  long local_8;
  
  local_20 = "FirePaymentComplete";
  local_10 = PaymentHook;
  local_8 = ___stack_chk_guard;
  local_18 = "(JI)V";
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::TelecomChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::BindNativeMethods
          (TelecomChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::GetPurchasePlatform(TelecomChannelPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TelecomChannel");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::TelecomChannelPurchaseAdapter::TelecomChannelPurchaseAdapter() */

void __thiscall
Sexy::TelecomChannelPurchaseAdapter::TelecomChannelPurchaseAdapter
          (TelecomChannelPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::TelecomChannelPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::TelecomChannelPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__TelecomChannelPurchaseAdapter_0690c560;
  *(undefined ***)(this + 0x18) = &PTR__TelecomChannelPurchaseAdapter_0690c6b0;
  __android_log_print(4,"TelecomChannelPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::TelecomChannelPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,
             "com/popcap/purchase/TelecomChannel/TelecomChannelPurchase",&DAT_055a4820,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::TelecomChannelPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TelecomChannelPurchase","PaymentHook( %d )");
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


/* Sexy::TelecomChannelPurchaseAdapter::Initialize() */

void Sexy::TelecomChannelPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"TelecomChannelPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* Sexy::TelecomChannelPurchaseAdapter::Destory() */

void Sexy::TelecomChannelPurchaseAdapter::Destory(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"TelecomChannelPurchase","Destory");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaDestorySDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* Sexy::TelecomChannelPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::TelecomChannelPurchaseAdapter::GetProductInfo(string *param_1)

{
  bool bVar1;
  uint uVar2;
  string *in_x1;
  size_t __n;
  long in_x8;
  
  IPurchaseAdapter::GetProductInfo(param_1);
  uVar2 = LawnApp::GetPlatform(gLawnApp);
  __n = (size_t)uVar2;
  if ((uVar2 - 0xb5 < 0xe) || (__n = (size_t)(uVar2 - 0x43), uVar2 - 0x43 < 0x70)) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"406",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"407",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"408",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"409",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"5171724",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"5171725",__n);
      return;
    }
  }
  else {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"399",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"398",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"400",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"401",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"5171740",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"5171741",__n);
      return;
    }
  }
  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
  if ((((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4"), bVar1)) ||
      (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5"), bVar1)) ||
     (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6"), bVar1)) {
LAB_04900df0:
    std::string::append((string *)(in_x8 + 8),"TOOL21",__n);
  }
  else {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"), bVar1)) {
LAB_04900f30:
      std::string::append((string *)(in_x8 + 8),"TOOL22",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
    if ((((!bVar1) &&
         ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_10"), !bVar1 &&
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_11"), !bVar1))))
        && (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_12"), !bVar1))
       && (((((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_13"), !bVar1
              && (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_14"),
                 !bVar1)) &&
             (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_15"), !bVar1))
            && ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_16"),
                !bVar1 && (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_17"),
                          !bVar1)))) &&
           (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_18"), !bVar1))))
    {
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.mower");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"TOOL18",__n);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.present");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"TOOL19",__n);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"TOOL20",__n);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.1000coins");
      if (bVar1) goto LAB_04900df0;
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.2000coins");
      if (bVar1) goto LAB_04900f30;
      bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.3000coins");
      if (!bVar1) {
        return;
      }
    }
    std::string::append((string *)(in_x8 + 8),"TOOL23",__n);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TelecomChannelPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::TelecomChannelPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  _jobject *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar1 = FUN_0547429c(param_2);
  __android_log_print(2,"TelecomChannelPurchase","RequestPay( %s )",uVar1);
  (**(code **)(*(long *)param_1 + 0x68))(aDStack_28,param_1,param_2);
  FUN_05475d88(asStack_50,auStack_18);
  TodStringTranslate(L"[TELECOM_PURCHASE_TIPS]");
  SexyStringToUTF8String(aSStack_38,extraout_x1);
  pcVar2 = (char *)FUN_0547429c(asStack_30);
  uVar1 = FUN_0547429c(auStack_18);
  StrFormat(pcVar2,asStack_48,(ulong)local_10,uVar1);
  std::string::~string(asStack_30);
  FUN_05476c50(aSStack_38);
  TodStringTranslate(L"[TELECOM_PURCHASE_SUCCESS]");
  SexyStringToUTF8String(aSStack_38,extraout_x1_00);
  pcVar2 = (char *)FUN_0547429c(asStack_30);
  uVar1 = FUN_0547429c(auStack_18);
  StrFormat(pcVar2,asStack_40,uVar1);
  std::string::~string(asStack_30);
  FUN_05476c50(aSStack_38);
  p_Var3 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(asStack_50);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var3);
  FUN_0547429c(auStack_20);
  uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
  FUN_0547429c(asStack_48);
  uVar5 = _JNIEnv::NewStringUTF((char *)p_Var3);
  FUN_0547429c(asStack_40);
  uVar6 = _JNIEnv::NewStringUTF((char *)p_Var3);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var3,*(undefined8 *)(param_1 + 0x20),uVar1,uVar4,uVar5,
             uVar6);
  _JNIEnv::DeleteLocalRef(p_Var3);
  _JNIEnv::DeleteLocalRef(p_Var3);
  _JNIEnv::DeleteLocalRef(p_Var3);
  _JNIEnv::DeleteLocalRef(p_Var3);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

