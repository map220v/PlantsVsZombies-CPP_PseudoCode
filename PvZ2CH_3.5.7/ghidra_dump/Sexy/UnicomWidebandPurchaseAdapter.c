// Class: Sexy::UnicomWidebandPurchaseAdapter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomWidebandPurchaseAdapter::GetAboutContentStringId() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::GetAboutContentStringId(UnicomWidebandPurchaseAdapter *this)

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


/* Sexy::UnicomWidebandPurchaseAdapter::GetMonthRechargeMax() */

undefined8 Sexy::UnicomWidebandPurchaseAdapter::GetMonthRechargeMax(void)

{
  return 500;
}


/* Sexy::UnicomWidebandPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::BindJavaMethods
          (UnicomWidebandPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitSDK","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to Sexy::UnicomWidebandPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::BindJavaMethods
          (UnicomWidebandPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter
          (UnicomWidebandPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__UnicomWidebandPurchaseAdapter_0690ca70;
  *(undefined ***)(this + 0x18) = &PTR__UnicomWidebandPurchaseAdapter_0690cbc0;
  JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::UnicomWidebandPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter
          (UnicomWidebandPurchaseAdapter *this)

{
  ~UnicomWidebandPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter
          (UnicomWidebandPurchaseAdapter *this)

{
  ~UnicomWidebandPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::~UnicomWidebandPurchaseAdapter
          (UnicomWidebandPurchaseAdapter *this)

{
  ~UnicomWidebandPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomWidebandPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::BindNativeMethods
          (UnicomWidebandPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::UnicomWidebandPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::BindNativeMethods
          (UnicomWidebandPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomWidebandPurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::GetPurchasePlatform(UnicomWidebandPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UnicomWideband");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::UnicomWidebandPurchaseAdapter::UnicomWidebandPurchaseAdapter() */

void __thiscall
Sexy::UnicomWidebandPurchaseAdapter::UnicomWidebandPurchaseAdapter
          (UnicomWidebandPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::UnicomWidebandPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__UnicomWidebandPurchaseAdapter_0690ca70;
  *(undefined ***)(this + 0x18) = &PTR__UnicomWidebandPurchaseAdapter_0690cbc0;
  __android_log_print(4,"UnicomWidebandPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::UnicomWidebandPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,
             "com/popcap/purchase/UnicomWideband/UnicomWidebandPurchase",&DAT_055a4820,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomWidebandPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::UnicomWidebandPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"UnicomWidebandPurchase","PaymentHook( %d )");
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


/* Sexy::UnicomWidebandPurchaseAdapter::Initialize() */

void Sexy::UnicomWidebandPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"UnicomWidebandPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* Sexy::UnicomWidebandPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::UnicomWidebandPurchaseAdapter::GetProductInfo(string *param_1)

{
  bool bVar1;
  int iVar2;
  string *in_x1;
  undefined8 *__n;
  long in_x8;
  
  IPurchaseAdapter::GetProductInfo(param_1);
  __n = &gLawnApp;
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if (iVar2 == 3) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"0102111001",(size_t)__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"0110111001",(size_t)__n);
    }
    else {
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"0120111001",(size_t)__n);
      }
      else {
        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
        if (bVar1) {
          std::string::append((string *)(in_x8 + 8),"0130111001",(size_t)__n);
        }
      }
    }
  }
  else if (iVar2 == 9) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"0102111002",(size_t)__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"0110111002",(size_t)__n);
    }
    else {
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"0120111002",(size_t)__n);
      }
      else {
        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
        if (bVar1) {
          std::string::append((string *)(in_x8 + 8),"0130111002",(size_t)__n);
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::UnicomWidebandPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::UnicomWidebandPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  _jobject *p_Var5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *__n;
  uint local_1ac;
  string asStack_1a8 [8];
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
  uVar4 = FUN_0547429c(param_2);
  __android_log_print(2,"UnicomWidebandPurchase","RequestPay( %s )",uVar4);
  __n = *(code **)(*(long *)param_1 + 0x68);
  (*__n)(aDStack_198,param_1,param_2);
  bVar1 = std::operator==(asStack_190,"");
  if (bVar1 == 0) {
    Set8BytesTo0(asStack_1a8);
    uVar2 = operator|(0x10,8);
    FUN_05462470(auStack_178,uVar2);
    FUN_0546065c(auStack_168,local_180);
    FUN_0544b6d4(auStack_178,asStack_1a8);
    Set8BytesTo0((string *)local_1a0);
    iVar3 = LawnApp::GetPlatform(gLawnApp);
    if (iVar3 == 3) {
      std::string::append((string *)local_1a0,"200639",(size_t)__n);
    }
    else {
      if (iVar3 != 9) {
        local_1ac = (uint)bVar1;
        (**(code **)(*(long *)param_1 + 0xa0))(param_1,&local_1ac);
        std::string::~string((string *)local_1a0);
        FUN_054617bc(auStack_178);
        std::string::~string(asStack_1a8);
        goto LAB_049038ec;
      }
      std::string::append((string *)local_1a0,"200640",(size_t)__n);
    }
    p_Var5 = (_jobject *)Android::Util::GetJNIEnv();
    FUN_0547429c((string *)local_1a0);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var5);
    FUN_0547429c(auStack_188);
    uVar6 = _JNIEnv::NewStringUTF((char *)p_Var5);
    FUN_0547429c(asStack_1a8);
    uVar7 = _JNIEnv::NewStringUTF((char *)p_Var5);
    FUN_0547429c(asStack_190);
    uVar8 = _JNIEnv::NewStringUTF((char *)p_Var5);
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaRequestPay,p_Var5,*(undefined8 *)(param_1 + 0x20),uVar4,uVar6,uVar7,
               uVar8);
    _JNIEnv::DeleteLocalRef(p_Var5);
    _JNIEnv::DeleteLocalRef(p_Var5);
    _JNIEnv::DeleteLocalRef(p_Var5);
    _JNIEnv::DeleteLocalRef(p_Var5);
    std::string::~string((string *)local_1a0);
    FUN_054617bc(auStack_178);
    std::string::~string(asStack_1a8);
    Lua::DownloadInfo::~DownloadInfo(aDStack_198);
  }
  else {
    local_1a0[0] = 0;
    (**(code **)(*(long *)param_1 + 0xa0))(param_1,local_1a0);
LAB_049038ec:
    Lua::DownloadInfo::~DownloadInfo(aDStack_198);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

