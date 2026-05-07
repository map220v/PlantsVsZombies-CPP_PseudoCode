// Class: Sexy::UnicomPurchaseAdapter


/* Sexy::UnicomPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::UnicomPurchaseAdapter::BindJavaMethods
          (UnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitSDK","(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to Sexy::UnicomPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::UnicomPurchaseAdapter::BindJavaMethods
          (UnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter() */

void __thiscall Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter(UnicomPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__UnicomPurchaseAdapter_0690c710;
  *(undefined ***)(this + 0x18) = &PTR__UnicomPurchaseAdapter_0690c860;
  JavaBound<Sexy::UnicomPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::UnicomPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter() */

void __thiscall Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter(UnicomPurchaseAdapter *this)

{
  ~UnicomPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter() */

void __thiscall Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter(UnicomPurchaseAdapter *this)

{
  ~UnicomPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter() */

void __thiscall Sexy::UnicomPurchaseAdapter::~UnicomPurchaseAdapter(UnicomPurchaseAdapter *this)

{
  ~UnicomPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::UnicomPurchaseAdapter::BindNativeMethods
          (UnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::UnicomPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&)
    */

void __thiscall
Sexy::UnicomPurchaseAdapter::BindNativeMethods
          (UnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomPurchaseAdapter::GetPurchasePlatform() */

void __thiscall Sexy::UnicomPurchaseAdapter::GetPurchasePlatform(UnicomPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Unicom");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::UnicomPurchaseAdapter::UnicomPurchaseAdapter() */

void __thiscall Sexy::UnicomPurchaseAdapter::UnicomPurchaseAdapter(UnicomPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::UnicomPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::UnicomPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__UnicomPurchaseAdapter_0690c710;
  *(undefined ***)(this + 0x18) = &PTR__UnicomPurchaseAdapter_0690c860;
  __android_log_print(4,"UnicomPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::UnicomPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,"com/popcap/purchase/Unicom/UnicomPurchase",
             &DAT_055a4820,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::UnicomPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"UnicomPurchase","PaymentHook( %d )");
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomPurchaseAdapter::Initialize() */

void __thiscall Sexy::UnicomPurchaseAdapter::Initialize(UnicomPurchaseAdapter *this)

{
  int iVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  nop();
  __android_log_print(2,"UnicomPurchase","Initialize");
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  std::string::string(asStack_10,"");
  nop();
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if (iVar1 == 2) {
    std::string::append(asStack_10,"903865228220130726145458058600",(size_t)__n);
  }
  else if (iVar1 == 8) {
    std::string::append(asStack_10,"903865228220130907091022285400",(size_t)__n);
  }
  FUN_0547429c(asStack_10);
  uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaInitializeSDK,p_Var2,*(undefined8 *)(this + 0x20),uVar3);
  _JNIEnv::DeleteLocalRef(p_Var2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::UnicomPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::UnicomPurchaseAdapter::GetProductInfo(string *param_1)

{
  bool bVar1;
  uint uVar2;
  string *in_x1;
  size_t __n;
  long in_x8;
  
  IPurchaseAdapter::GetProductInfo(param_1);
  uVar2 = LawnApp::GetPlatform(gLawnApp);
  __n = (size_t)uVar2;
  if ((uVar2 - 0xf < 0x2b) || (uVar2 == 2)) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1))
    goto LAB_04901a5c;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) goto LAB_04901c50;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
    if (bVar1) goto LAB_04901c70;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
    if (bVar1) goto LAB_04901c3c;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
    if (bVar1) goto LAB_04901c84;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
    if (bVar1) goto LAB_04901c98;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
    if (bVar1) goto LAB_04901cac;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
    if ((((bVar1) ||
         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4"), bVar1)) ||
        (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5"), bVar1)) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6"), bVar1))
    goto LAB_04901b54;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"), bVar1))
    goto LAB_04901d20;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
    if ((((bVar1) ||
         ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_10"), bVar1 ||
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_11"), bVar1))))
        || (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_12"), bVar1)) ||
       (((((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_13"), bVar1 ||
           (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_14"), bVar1)) ||
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_15"), bVar1)) ||
         ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_16"), bVar1 ||
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_17"), bVar1))))
        || (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_18"), bVar1))))
    goto LAB_04901c28;
  }
  else {
    if ((0x6f < uVar2 - 0x43) && (uVar2 != 8)) {
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
LAB_04901a5c:
      std::string::append((string *)(in_x8 + 8),"001",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
LAB_04901c50:
      std::string::append((string *)(in_x8 + 8),"002",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
    if (bVar1) {
LAB_04901c70:
      std::string::append((string *)(in_x8 + 8),"003",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
    if (bVar1) {
LAB_04901c3c:
      std::string::append((string *)(in_x8 + 8),"004",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
    if (bVar1) {
LAB_04901c84:
      std::string::append((string *)(in_x8 + 8),"005",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
    if (bVar1) {
LAB_04901c98:
      std::string::append((string *)(in_x8 + 8),"006",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
    if (bVar1) {
LAB_04901cac:
      std::string::append((string *)(in_x8 + 8),"007",__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
    if ((((bVar1) ||
         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4"), bVar1)) ||
        (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5"), bVar1)) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6"), bVar1))
    goto LAB_04901c28;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"), bVar1))
    goto LAB_04901b54;
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
    if (((bVar1) ||
        ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_10"), bVar1 ||
         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_11"), bVar1)))) ||
       ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_12"), bVar1 ||
        ((((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_13"), bVar1 ||
           (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_14"), bVar1)) ||
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_15"), bVar1)) ||
         (((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_16"), bVar1 ||
           (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_17"), bVar1)) ||
          (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_18"), bVar1))))))
       )) goto LAB_04901d20;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.mower");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"019",__n);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.present");
  if (bVar1) {
    std::string::append((string *)(in_x8 + 8),"020",__n);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.1000coins");
  if (bVar1) {
LAB_04901c28:
    std::string::append((string *)(in_x8 + 8),"023",__n);
    return;
  }
  bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.2000coins");
  if (!bVar1) {
    bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.3000coins");
    if (!bVar1) {
      return;
    }
LAB_04901d20:
    std::string::append((string *)(in_x8 + 8),"022",__n);
    return;
  }
LAB_04901b54:
  std::string::append((string *)(in_x8 + 8),"021",__n);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::UnicomPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _jobject *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_1a0 [2];
  DownloadInfo aDStack_198 [8];
  string asStack_190 [8];
  undefined1 auStack_188 [8];
  undefined4 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar3 = FUN_0547429c(param_2);
  __android_log_print(2,"UnicomPurchase","RequestPay( %s )",uVar3);
  (**(code **)(*(long *)param_1 + 0x68))(aDStack_198,param_1,param_2);
  bVar1 = std::operator==(asStack_190,"");
  if (bVar1) {
    local_1a0[0] = 0;
    (**(code **)(*(long *)param_1 + 0xa0))(param_1,local_1a0);
    Lua::DownloadInfo::~DownloadInfo(aDStack_198);
  }
  else {
    Set8BytesTo0((string *)local_1a0);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    FUN_0546065c(auStack_168,local_180);
    FUN_0544b6d4(auStack_178,(string *)local_1a0);
    p_Var4 = (_jobject *)Android::Util::GetJNIEnv();
    FUN_0547429c(auStack_188);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var4);
    FUN_0547429c((string *)local_1a0);
    uVar5 = _JNIEnv::NewStringUTF((char *)p_Var4);
    FUN_0547429c(asStack_190);
    uVar6 = _JNIEnv::NewStringUTF((char *)p_Var4);
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaRequestPay,p_Var4,*(undefined8 *)(param_1 + 0x20),uVar3,uVar5,uVar6);
    _JNIEnv::DeleteLocalRef(p_Var4);
    _JNIEnv::DeleteLocalRef(p_Var4);
    _JNIEnv::DeleteLocalRef(p_Var4);
    FUN_054617bc(auStack_178);
    std::string::~string((string *)local_1a0);
    Lua::DownloadInfo::~DownloadInfo(aDStack_198);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

