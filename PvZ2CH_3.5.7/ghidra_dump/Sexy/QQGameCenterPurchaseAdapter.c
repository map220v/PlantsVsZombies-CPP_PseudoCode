// Class: Sexy::QQGameCenterPurchaseAdapter


/* Sexy::QQGameCenterPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::BindJavaMethods
          (QQGameCenterPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay","(I)V");
  JavaMethodBase::init((JavaMethodBase *)JavaResume,param_1,param_2,"Resume","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaDestroy,param_1,param_2,"Destroy","()V");
  return;
}


/* non-virtual thunk to Sexy::QQGameCenterPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::BindJavaMethods
          (QQGameCenterPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter(QQGameCenterPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__QQGameCenterPurchaseAdapter_0690c050;
  *(undefined ***)(this + 0x18) = &PTR__QQGameCenterPurchaseAdapter_0690c1a0;
  JavaBound<Sexy::QQGameCenterPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::QQGameCenterPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter(QQGameCenterPurchaseAdapter *this)

{
  ~QQGameCenterPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter(QQGameCenterPurchaseAdapter *this)

{
  ~QQGameCenterPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::~QQGameCenterPurchaseAdapter(QQGameCenterPurchaseAdapter *this)

{
  ~QQGameCenterPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::BindNativeMethods
          (QQGameCenterPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::QQGameCenterPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass
   const&) */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::BindNativeMethods
          (QQGameCenterPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::QQGameCenterPurchaseAdapter::QQGameCenterPurchaseAdapter() */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::QQGameCenterPurchaseAdapter(QQGameCenterPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::QQGameCenterPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::QQGameCenterPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__QQGameCenterPurchaseAdapter_0690c050;
  *(undefined ***)(this + 0x18) = &PTR__QQGameCenterPurchaseAdapter_0690c1a0;
  __android_log_print(4,"QQGameCenterPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::QQGameCenterPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,"com/popcap/purchase/QQGameCenter/QQGameCenterPurchase"
             ,&DAT_055a4820,this);
  return;
}


/* Sexy::QQGameCenterPurchaseAdapter::GetProductCode(std::string const&, int&) */

void __thiscall
Sexy::QQGameCenterPurchaseAdapter::GetProductCode
          (QQGameCenterPurchaseAdapter *this,string *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds3");
  if ((bVar1) ||
     (bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
    *param_2 = 1;
  }
  else {
    bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      *param_2 = 2;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::QQGameCenterPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"QQGameCenterPurchase","PaymentHook( %d )");
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


/* Sexy::QQGameCenterPurchaseAdapter::Initialize() */

void Sexy::QQGameCenterPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"QQGameCenterPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::QQGameCenterPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::QQGameCenterPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar1 = FUN_0547429c(param_2);
  __android_log_print(2,"QQGameCenterPurchase","RequestPay( %s )",uVar1);
  local_c = 0xffffffff;
  GetProductCode((QQGameCenterPurchaseAdapter *)param_1,param_2,(int *)&local_c);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  __android_log_print(2,"QQGameCenterPurchase","JavaPrePay( %d )",local_c);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var2,*(undefined8 *)(param_1 + 0x20),(ulong)local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

