// Class: Sexy::WeChatPurchaseAdapter


/* Sexy::WeChatPurchaseAdapter::GetTodayRechargeMax() */

undefined8 Sexy::WeChatPurchaseAdapter::GetTodayRechargeMax(void)

{
  return 999999;
}


/* Sexy::WeChatPurchaseAdapter::GetMonthRechargeMax() */

undefined8 Sexy::WeChatPurchaseAdapter::GetMonthRechargeMax(void)

{
  return 9999999;
}


/* Sexy::WeChatPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::BindJavaMethods
          (WeChatPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay","(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaSetResId,param_1,param_2,"SetResId","(I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetSaveValue,param_1,param_2,"SetSaveValue",
             "(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaLaunchSave,param_1,param_2,"LaunchRechargeView","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetUserId,param_1,param_2,"SetUserId","(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetUserKey,param_1,param_2,"SetUserKey","(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetSessionId,param_1,param_2,"SetSessionId",
             "(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetSessionType,param_1,param_2,"SetSessionType",
             "(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaSetPf,param_1,param_2,"SetPf","(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetPfKey,param_1,param_2,"SetPfkey","(Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to Sexy::WeChatPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::BindJavaMethods
          (WeChatPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter() */

void __thiscall Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter(WeChatPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__WeChatPurchaseAdapter_0690cc20;
  *(undefined ***)(this + 0x18) = &PTR__WeChatPurchaseAdapter_0690cd70;
  JavaBound<Sexy::WeChatPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::WeChatPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter() */

void __thiscall Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter(WeChatPurchaseAdapter *this)

{
  ~WeChatPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter() */

void __thiscall Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter(WeChatPurchaseAdapter *this)

{
  ~WeChatPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter() */

void __thiscall Sexy::WeChatPurchaseAdapter::~WeChatPurchaseAdapter(WeChatPurchaseAdapter *this)

{
  ~WeChatPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::BindNativeMethods
          (WeChatPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

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


/* non-virtual thunk to Sexy::WeChatPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&)
    */

void __thiscall
Sexy::WeChatPurchaseAdapter::BindNativeMethods
          (WeChatPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::GetPurchasePlatform() */

void __thiscall Sexy::WeChatPurchaseAdapter::GetPurchasePlatform(WeChatPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"WeChat");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::GetAboutContentStringId() */

void __thiscall Sexy::WeChatPurchaseAdapter::GetAboutContentStringId(WeChatPurchaseAdapter *this)

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


/* Sexy::WeChatPurchaseAdapter::SetUserId(std::string const&) */

void __thiscall Sexy::WeChatPurchaseAdapter::SetUserId(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetUserId");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaSetUserId,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetUserKey(std::string const&) */

void __thiscall Sexy::WeChatPurchaseAdapter::SetUserKey(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetUserKey");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaSetUserKey,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetSessionId(std::string const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::SetSessionId(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetSessionId");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetSessionId,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetSessionType(std::string const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::SetSessionType(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetSessionType");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetSessionType,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetPf(std::string const&) */

void __thiscall Sexy::WeChatPurchaseAdapter::SetPf(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetPf");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaSetPf,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetPfKey(std::string const&) */

void __thiscall Sexy::WeChatPurchaseAdapter::SetPfKey(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetPfKey");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaSetPfKey,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetResId(std::string const&) */

void __thiscall Sexy::WeChatPurchaseAdapter::SetResId(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetResId");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaSetResId,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::WeChatPurchaseAdapter::SetSaveValue(std::string const&) */

void __thiscall
Sexy::WeChatPurchaseAdapter::SetSaveValue(WeChatPurchaseAdapter *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"WeChatPurchase","SetSaveValue");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetSaveValue,p_Var1,*(undefined8 *)(this + 0x20),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::RequestLaunchSave() */

void __thiscall Sexy::WeChatPurchaseAdapter::RequestLaunchSave(WeChatPurchaseAdapter *this)

{
  _jobject *p_Var1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"60");
  SetSaveValue(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this + 0x88))(this);
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaLaunchSave,p_Var1,*(undefined8 *)(this + 0x20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::WeChatPurchaseAdapter::WeChatPurchaseAdapter() */

void __thiscall Sexy::WeChatPurchaseAdapter::WeChatPurchaseAdapter(WeChatPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::WeChatPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::WeChatPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__WeChatPurchaseAdapter_0690cc20;
  *(undefined ***)(this + 0x18) = &PTR__WeChatPurchaseAdapter_0690cd70;
  __android_log_print(4,"WeChatMMPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::WeChatPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,"com/popcap/purchase/WeChat/WeChatPurchase",
             &DAT_055a4820,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::GetProductCode(std::string const&, std::string&) */

void Sexy::WeChatPurchaseAdapter::GetProductCode(string *param_1,string *param_2)

{
  bool bVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.diamonds3");
  if ((bVar1) ||
     (bVar1 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
    __s = "6";
  }
  else {
    bVar1 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      __s = "30";
    }
    else {
      bVar1 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.diamonds5");
      if (bVar1) {
        __s = "68";
      }
      else {
        bVar1 = std::operator==(param_2,"com.popcap.ios.chs.PVZ2.diamonds6");
        if (!bVar1) goto LAB_04904650;
        __s = "128";
      }
    }
  }
  std::string::string(asStack_10,__s);
  SetSaveValue((WeChatPurchaseAdapter *)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
LAB_04904650:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::WeChatPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  thunk_FUN_05475e00(&mproductId,param_2);
  GetProductCode(param_1,param_2);
  (**(code **)(*(long *)param_1 + 0x80))(param_1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::SetPayParam() */

void __thiscall Sexy::WeChatPurchaseAdapter::SetPayParam(WeChatPurchaseAdapter *this)

{
  hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
  *this_00;
  long lVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
             *)LazySingleton<SocialMgr>::GetInstance();
  lVar1 = eastl::
          hashtable<EA::Text::GlyphCache::GlyphInfo,eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,EA::Allocator::CoreAllocatorAdapter<EA::Allocator::ICoreAllocator>,eastl::use_first<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>>,eastl::equal_to<EA::Text::GlyphCache::GlyphInfo>,EA::Text::GlyphCache::GlyphInfoHash,eastl::mod_range_hashing,eastl::default_ranged_hash,eastl::prime_rehash_policy,false,true,true>
          ::get_allocator(this_00);
  SetUserId(this,(string *)(lVar1 + 8));
  SetUserKey(this,(string *)(lVar1 + 0x18));
  SetSessionId(this,(string *)(lVar1 + 0x20));
  SetSessionType(this,(string *)(lVar1 + 0x28));
  WGPlatform::GetInstance();
  WGPlatform::WGGetPf();
  WGPlatform::GetInstance();
  WGPlatform::WGGetPfKey();
  uVar2 = easytolower(asStack_18);
  thunk_FUN_05475e00(asStack_18,uVar2);
  SetPf(this,asStack_18);
  SetPfKey(this,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::WeChatPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::WeChatPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
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
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::WeChatPurchaseAdapter::Initialize() */

void Sexy::WeChatPurchaseAdapter::Initialize(void)

{
  long in_x0;
  _jobject *p_Var1;
  
  nop();
  __android_log_print(2,"WeChatPurchase","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(in_x0 + 0x20));
  return;
}

