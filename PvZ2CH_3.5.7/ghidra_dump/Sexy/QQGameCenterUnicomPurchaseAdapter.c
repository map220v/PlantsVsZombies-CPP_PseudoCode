// Class: Sexy::QQGameCenterUnicomPurchaseAdapter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterUnicomPurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::GetPurchasePlatform
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"QQGameCenter");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterUnicomPurchaseAdapter::GetAboutContentStringId() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::GetAboutContentStringId
          (QQGameCenterUnicomPurchaseAdapter *this)

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


/* Sexy::QQGameCenterUnicomPurchaseAdapter::GetTodayRechargeMax() */

undefined8 Sexy::QQGameCenterUnicomPurchaseAdapter::GetTodayRechargeMax(void)

{
  int iVar1;
  
  iVar1 = Android::Diag::GetMobileCardType();
  if ((iVar1 != 4) && (iVar1 != 1)) {
    return 300;
  }
  return 100;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::GetMonthRechargeMax() */

undefined8 Sexy::QQGameCenterUnicomPurchaseAdapter::GetMonthRechargeMax(void)

{
  int iVar1;
  
  iVar1 = Android::Diag::GetMobileCardType();
  if ((iVar1 != 4) && (iVar1 != 1)) {
    return 500;
  }
  return 300;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::BindJavaMethods
          (QQGameCenterUnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay","(II)V");
  JavaMethodBase::init((JavaMethodBase *)JavaResume,param_1,param_2,"Resume","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaDestroy,param_1,param_2,"Destroy","()V");
  return;
}


/* non-virtual thunk to Sexy::QQGameCenterUnicomPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::BindJavaMethods
          (QQGameCenterUnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__QQGameCenterUnicomPurchaseAdapter_0690c200;
  *(undefined ***)(this + 0x18) = &PTR__QQGameCenterUnicomPurchaseAdapter_0690c350;
  JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to
   Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  ~QQGameCenterUnicomPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  ~QQGameCenterUnicomPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::~QQGameCenterUnicomPurchaseAdapter
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  ~QQGameCenterUnicomPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterUnicomPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::BindNativeMethods
          (QQGameCenterUnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::QQGameCenterUnicomPurchaseAdapter::BindNativeMethods(_JNIEnv*,
   JavaClass const&) */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::BindNativeMethods
          (QQGameCenterUnicomPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::QQGameCenterUnicomPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::QQGameCenterUnicomPurchaseAdapter
          (QQGameCenterUnicomPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__QQGameCenterUnicomPurchaseAdapter_0690c200;
  *(undefined ***)(this + 0x18) = &PTR__QQGameCenterUnicomPurchaseAdapter_0690c350;
  __android_log_print(4,"QQGameCenterUnicomPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::QQGameCenterUnicomPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,
             "com/popcap/purchase/QQGameCenterUnicom/QQGameCenterUnicomPurchase",&DAT_055a4820,this)
  ;
  return;
}


/* Sexy::QQGameCenterUnicomPurchaseAdapter::GetProductCode(std::string const&, int&) */

void __thiscall
Sexy::QQGameCenterUnicomPurchaseAdapter::GetProductCode
          (QQGameCenterUnicomPurchaseAdapter *this,string *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar2 == 0xd) || (iVar2 == 0xc)) {
    bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present");
    if (bVar1) {
      *param_2 = 20000;
      return;
    }
    bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if (bVar1) {
      *param_2 = 0x4e21;
    }
    else {
      bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds4");
      if (bVar1) {
        *param_2 = 0x4e22;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterUnicomPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::QQGameCenterUnicomPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"QQGameCenterUnicomPurchase","PaymentHook( %d )");
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


/* Sexy::QQGameCenterUnicomPurchaseAdapter::Initialize() */

void Sexy::QQGameCenterUnicomPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"QQGameCenterUnicomPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterUnicomPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::QQGameCenterUnicomPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  int iVar1;
  undefined8 uVar2;
  _jobject *p_Var3;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar2 = FUN_0547429c(param_2);
  __android_log_print(2,"QQGameCenterUnicomPurchase","RequestPay( %s )",uVar2);
  local_c = 0xffffffff;
  GetProductCode((QQGameCenterUnicomPurchaseAdapter *)param_1,param_2,(int *)&local_c);
  p_Var3 = (_jobject *)Android::Util::GetJNIEnv();
  __android_log_print(2,"QQGameCenterUnicomPurchase","JavaPrePay( %d )",local_c);
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var3,*(undefined8 *)(param_1 + 0x20),(ulong)local_c,
             (ulong)(iVar1 == 0xd));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

