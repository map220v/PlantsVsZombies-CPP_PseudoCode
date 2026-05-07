// Class: Sexy::TWPurchaseAdapter


/* Sexy::TWPurchaseAdapter::GetMonthRechargeMax() */

undefined8 Sexy::TWPurchaseAdapter::GetMonthRechargeMax(void)

{
  return 300;
}


/* Sexy::TWPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TWPurchaseAdapter::BindJavaMethods
          (TWPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK",
             "(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay",
             "(Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaQueryOrder,param_1,param_2,"QueryOrder","(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaOnExit,param_1,param_2,"OnExit","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetDeclare,param_1,param_2,"GetDeclare","()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestValidationPay,param_1,param_2,"RequestValidationPay",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaNeedPurchaseWhite,param_1,param_2,"NeedPurchaseWhite","()Z");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaNeedShowChannelActivity,param_1,param_2,"NeedShowChannelActivity"
             ,"()Z");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetChannelID,param_1,param_2,"GetChannelID",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetUniqueID,param_1,param_2,"GetUniqueID","()Ljava/lang/String;")
  ;
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetUniqueCharacterID,param_1,param_2,"GetUniqueCharacterID",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetChannelUpdateUrl,param_1,param_2,"GetChannelUpdateUrl",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetTWRequestHead,param_1,param_2,"GetTWRequestHead",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetDeviceID,param_1,param_2,"GetDeviceID","()Ljava/lang/String;")
  ;
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetSignature,param_1,param_2,"GetSignature",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaCheckRedeemOrders,param_1,param_2,"CheckRedeemOrders","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetRedeemOrders,param_1,param_2,"GetRedeemOrders",
             "(Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)I");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetIDs,param_1,param_2,"SetIDs",
             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaShowGameCommunity,param_1,param_2,"ShowGameCommunity","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaConsume,param_1,param_2,"Consume",
             "(Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaCheckSpecialRedeem,param_1,param_2,"CheckSpecialRedeem","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaCheckGameCenterStatus,param_1,param_2,"CheckGameCenterStatus",
             "()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetGameCenterUrl,param_1,param_2,"GetGameCenterUrl",
             "()Ljava/lang/String;");
  return;
}


/* non-virtual thunk to Sexy::TWPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TWPurchaseAdapter::BindJavaMethods
          (TWPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetPurchasePlatform() */

void __thiscall Sexy::TWPurchaseAdapter::GetPurchasePlatform(TWPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TW");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::TWPurchaseAdapter::~TWPurchaseAdapter() */

void __thiscall Sexy::TWPurchaseAdapter::~TWPurchaseAdapter(TWPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__TWPurchaseAdapter_0690cdd0;
  *(undefined ***)(this + 0x18) = &PTR__TWPurchaseAdapter_0690cf28;
  JavaBound<Sexy::TWPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::TWPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to Sexy::TWPurchaseAdapter::~TWPurchaseAdapter() */

void __thiscall Sexy::TWPurchaseAdapter::~TWPurchaseAdapter(TWPurchaseAdapter *this)

{
  ~TWPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::TWPurchaseAdapter::~TWPurchaseAdapter() */

void __thiscall Sexy::TWPurchaseAdapter::~TWPurchaseAdapter(TWPurchaseAdapter *this)

{
  ~TWPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::TWPurchaseAdapter::~TWPurchaseAdapter() */

void __thiscall Sexy::TWPurchaseAdapter::~TWPurchaseAdapter(TWPurchaseAdapter *this)

{
  ~TWPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TWPurchaseAdapter::BindNativeMethods
          (TWPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  void *pvVar1;
  undefined1 auStack_128 [288];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = memcpy(auStack_128,&PTR_s_FirePaymentComplete_06a88ba8,0x120);
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)pvVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::TWPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::TWPurchaseAdapter::BindNativeMethods
          (TWPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::TWPurchaseAdapter::ExitGameHook(_JNIEnv*, _jobject*, long long) */

void Sexy::TWPurchaseAdapter::ExitGameHook(_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  __android_log_print(2,"TWPurchase","ExitGameHook");
  LawnApp::onConfirmExitGame();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetAboutContentStringId() */

void Sexy::TWPurchaseAdapter::GetAboutContentStringId(void)

{
  long *in_x0;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*in_x0 + 0x130))(asStack_10);
  UTF8StringToSexyString(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TWPurchaseAdapter::ExitGame() */

undefined8 __thiscall Sexy::TWPurchaseAdapter::ExitGame(TWPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaOnExit,p_Var1,*(undefined8 *)(this + 0x20));
  return 1;
}


/* Sexy::TWPurchaseAdapter::CheckRedeemOrders() */

void __thiscall Sexy::TWPurchaseAdapter::CheckRedeemOrders(TWPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaCheckRedeemOrders,p_Var1,*(undefined8 *)(this + 0x20))
  ;
  return;
}


/* Sexy::TWPurchaseAdapter::ShowGameCommunity() */

void __thiscall Sexy::TWPurchaseAdapter::ShowGameCommunity(TWPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaShowGameCommunity,p_Var1,*(undefined8 *)(this + 0x20))
  ;
  return;
}


/* Sexy::TWPurchaseAdapter::Consume(std::string const&, std::string const&) */

void __thiscall
Sexy::TWPurchaseAdapter::Consume(TWPurchaseAdapter *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  _jobject *p_Var3;
  
  uVar1 = FUN_0547429c(param_1);
  uVar2 = FUN_0547429c(param_2);
  __android_log_print(2,"TWPurchase","Consume( %s, %s )",uVar1,uVar2);
  p_Var3 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var3);
  FUN_0547429c(param_2);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var3);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaConsume,p_Var3,*(undefined8 *)(this + 0x20),uVar1,uVar2);
  _JNIEnv::DeleteLocalRef(p_Var3);
  _JNIEnv::DeleteLocalRef(p_Var3);
  return;
}


/* Sexy::TWPurchaseAdapter::CheckSpecialRedeem() */

void __thiscall Sexy::TWPurchaseAdapter::CheckSpecialRedeem(TWPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  __android_log_print(2,"TWPurchase","CheckSpecialRedeem!!!");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaCheckSpecialRedeem,p_Var1,*(undefined8 *)(this + 0x20));
  return;
}


/* Sexy::TWPurchaseAdapter::CheckGameCenterStatus() */

void __thiscall Sexy::TWPurchaseAdapter::CheckGameCenterStatus(TWPurchaseAdapter *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaCheckGameCenterStatus,p_Var1,*(undefined8 *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::QueryOrder(std::string const&) */

void __thiscall Sexy::TWPurchaseAdapter::QueryOrder(TWPurchaseAdapter *this,string *param_1)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_0547429c(param_1);
  __android_log_print(2,"TWPurchase","QueryOrder( %s )",uVar1);
  (**(code **)(*(long *)this + 0x68))(aDStack_28,this,param_1);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(auStack_20);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()((_JNIEnv *)JavaQueryOrder,p_Var2,*(undefined8 *)(this + 0x20),uVar1);
  _JNIEnv::DeleteLocalRef(p_Var2);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetDeclare() */

void Sexy::TWPurchaseAdapter::GetDeclare(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetDeclare,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetChannelID() */

void Sexy::TWPurchaseAdapter::GetChannelID(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetChannelID,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetUniqueCharacterID() */

void Sexy::TWPurchaseAdapter::GetUniqueCharacterID(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetUniqueCharacterID,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetUniqueID() */

void Sexy::TWPurchaseAdapter::GetUniqueID(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetUniqueID,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetChannelUpdateUrl() */

void Sexy::TWPurchaseAdapter::GetChannelUpdateUrl(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"TWPurchaseAdapter::GetChannelUpdateUrl");
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetChannelUpdateUrl,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetTWRequestHead() */

void Sexy::TWPurchaseAdapter::GetTWRequestHead(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"TWPurchaseAdapter::GetTWRequestHead");
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetTWRequestHead,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetDeviceID() */

void Sexy::TWPurchaseAdapter::GetDeviceID(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"TWPurchaseAdapter::GetDeviceID");
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetDeviceID,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetSignature() */

void Sexy::TWPurchaseAdapter::GetSignature(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"TWPurchaseAdapter::GetSignature");
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetSignature,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetGameCenterUrl() */

void Sexy::TWPurchaseAdapter::GetGameCenterUrl(void)

{
  long lVar1;
  long in_x0;
  _jstring *p_Var2;
  uchar *puVar3;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  OutputDebugStrF((wchar_t *)"TWPurchaseAdapter::GetGameCenterUrl");
  p_Var2 = (_jstring *)Android::Util::GetJNIEnv();
  puVar3 = (uchar *)JavaMethod<_jstring*>::operator()
                              ((JavaMethod<_jstring*> *)JavaGetGameCenterUrl,(_JNIEnv *)p_Var2,
                               *(_jobject **)(in_x0 + 0x20));
  __s = (char *)_JNIEnv::GetStringUTFChars(p_Var2,puVar3);
  std::string::string(in_x8,__s);
  nop();
  _JNIEnv::ReleaseStringUTFChars(p_Var2,(char *)puVar3);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TWPurchaseAdapter::NeedPurchaseWhite() */

bool __thiscall Sexy::TWPurchaseAdapter::NeedPurchaseWhite(TWPurchaseAdapter *this)

{
  char cVar1;
  _JNIEnv *p_Var2;
  
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  cVar1 = JavaMethod<unsigned_char>::operator()
                    ((JavaMethod<unsigned_char> *)JavaNeedPurchaseWhite,p_Var2,
                     *(_jobject **)(this + 0x20));
  return cVar1 != '\0';
}


/* Sexy::TWPurchaseAdapter::NeedShowChannelActivity() */

bool __thiscall Sexy::TWPurchaseAdapter::NeedShowChannelActivity(TWPurchaseAdapter *this)

{
  char cVar1;
  _JNIEnv *p_Var2;
  
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  cVar1 = JavaMethod<unsigned_char>::operator()
                    ((JavaMethod<unsigned_char> *)JavaNeedShowChannelActivity,p_Var2,
                     *(_jobject **)(this + 0x20));
  return cVar1 != '\0';
}


/* Sexy::TWPurchaseAdapter::CallCertificationHook(_JNIEnv*, _jobject*, unsigned char, unsigned char)
    */

void Sexy::TWPurchaseAdapter::CallCertificationHook
               (_JNIEnv *param_1,_jobject *param_2,uchar param_3,uchar param_4)

{
  AuthMgr *this;
  
  this = (AuthMgr *)LazySingleton<AuthMgr>::GetInstance();
  AuthMgr::SetAuthInfo(this,param_3 != '\0',param_4 != '\0');
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::SetIDsInTwSDK(bool) */

void __thiscall Sexy::TWPurchaseAdapter::SetIDsInTwSDK(TWPurchaseAdapter *this,bool param_1)

{
  _jobject *p_Var1;
  DefineIDMgr *this_00;
  undefined8 uVar2;
  NetworkMgr *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
    this_00 = (DefineIDMgr *)LazySingleton<DefineIDMgr>::GetInstance();
    DefineIDMgr::GetNewUserDefineID(this_00);
    FUN_0547429c(asStack_10);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    std::string::~string(asStack_10);
    this_01 = (NetworkMgr *)NetworkMgr::Instance();
    NetworkMgr::GetNewNetWorkProcess(this_01);
    AndroidAsyncIOFileDriver::GetSaveDataPath();
    FUN_0547429c(asStack_10);
    uVar3 = _JNIEnv::NewStringUTF((char *)p_Var1);
    std::string::~string(asStack_10);
    LazySingleton<IdentifierMgr>::GetInstance();
    IAsyncNetworkTask::GetName();
    FUN_0547429c(asStack_10);
    uVar4 = _JNIEnv::NewStringUTF((char *)p_Var1);
    std::string::~string(asStack_10);
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaSetIDs,p_Var1,*(undefined8 *)(this + 0x20),uVar2,uVar3,uVar4);
    _JNIEnv::DeleteLocalRef(p_Var1);
    _JNIEnv::DeleteLocalRef(p_Var1);
    _JNIEnv::DeleteLocalRef(p_Var1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetGameCenterUrlHook(_JNIEnv*, _jobject*, _jstring*) */

void Sexy::TWPurchaseAdapter::GetGameCenterUrlHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  uVar2 = FUN_0547429c(asStack_18);
  __android_log_print(2,"TWPurchase","GetGameCenterUrl( %s )",uVar2);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,asStack_18);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::GetGameCenterUrlFinished,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int, _jstring*, _jstring*)
    */

void Sexy::TWPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4,_jstring *param_5,
               _jstring *param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  InvitationPlayerInfo aIStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TWPurchase","PaymentHook( %d )");
  Set8BytesTo0(asStack_1b0);
  Android::Util::StringFromJString(param_1,asStack_1b0,param_5);
  Set8BytesTo0(asStack_1a8);
  Android::Util::StringFromJString(param_1,asStack_1a8,param_6);
  uVar2 = FUN_0547429c(asStack_1b0);
  uVar3 = FUN_0547429c(asStack_1a8);
  __android_log_print(2,"TWPurchase","PayOrderId: %s, PayTypeId: %s",uVar2,uVar3);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_4);
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_198);
  FUN_05462824(asStack_1a0,auStack_178);
  FUN_05474278(aIStack_198,asStack_1a0);
  std::string::~string(asStack_1a0);
  thunk_FUN_05475e00(auStack_190,asStack_1b0);
  thunk_FUN_05475e00(auStack_188,asStack_1a8);
  thunk_FUN_05475e00(auStack_180,&m_payCode);
  LawnApp::SetPaymentResultInfo(gLawnApp,(PaymentResultInfo *)aIStack_198);
  std::string::string(asStack_1a0,"");
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
  std::string::~string(asStack_1a0);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_198);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1a8);
  std::string::~string(asStack_1b0);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::ValidationPaymentHook(_JNIEnv*, _jobject*, long long, int, _jstring*,
   _jstring*, _jstring*, unsigned char) */

void Sexy::TWPurchaseAdapter::ValidationPaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4,_jstring *param_5,
               _jstring *param_6,_jstring *param_7,uchar param_8)

{
  undefined4 uVar1;
  PurchaseMgr *pPVar2;
  long lVar3;
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  InvitationPlayerInfo aIStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_1b8);
  Android::Util::StringFromJString(param_1,asStack_1b8,param_5);
  Set8BytesTo0(asStack_1b0);
  Android::Util::StringFromJString(param_1,asStack_1b0,param_6);
  Set8BytesTo0(asStack_1a8);
  Android::Util::StringFromJString(param_1,asStack_1a8,param_7);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_4);
  InvitationPlayerInfo::InvitationPlayerInfo(aIStack_198);
  FUN_05462824(asStack_1a0,auStack_178);
  FUN_05474278(aIStack_198,asStack_1a0);
  std::string::~string(asStack_1a0);
  thunk_FUN_05475e00(auStack_190,asStack_1b8);
  thunk_FUN_05475e00(auStack_188,asStack_1b0);
  LawnApp::SetPaymentResultInfo(gLawnApp,(PaymentResultInfo *)aIStack_198);
  pPVar2 = (PurchaseMgr *)LazySingleton<PurchaseMgr>::GetInstance();
  PurchaseMgr::SetOrderId(pPVar2,asStack_1b8);
  pPVar2 = (PurchaseMgr *)LazySingleton<PurchaseMgr>::GetInstance();
  PurchaseMgr::SetChannelId(pPVar2,asStack_1a8);
  lVar3 = LazySingleton<PurchaseMgr>::GetInstance();
  FUN_04904f40(lVar3 + 0x41,param_8 != '\0');
  std::string::string(asStack_1a0,"");
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
  std::string::~string(asStack_1a0);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_198);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1a8);
  std::string::~string(asStack_1b0);
  std::string::~string(asStack_1b8);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* Sexy::TWPurchaseAdapter::SDKInitStartHook(_JNIEnv*, _jobject*, long long) */

void Sexy::TWPurchaseAdapter::SDKInitStartHook(_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  __android_log_print(2,"TWPurchase","SDKInitStartHook");
  MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::AndroidSDKInit,0,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::SDKInitEndHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::TWPurchaseAdapter::SDKInitEndHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  TGALogMgr *pTVar1;
  long lVar2;
  char *__n;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  __n = "SDKInitEndHook";
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TWPurchase");
  if (param_4 == 1) {
    lVar2 = LazySingleton<AuthMgr>::GetInstance();
    FUN_04904fe0(lVar2 + 0x1d);
  }
  TGABagData::TGABagData(aTStack_18);
  std::string::append((string *)aTStack_18,"3",(size_t)__n);
  pTVar1 = (TGALogMgr *)LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData(aTStack_10,aTStack_18);
  TGALogMgr::LogAppLaunch(pTVar1,aTStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::AndroidSDKInit,1,param_4);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::SDKLoginStartHook(_JNIEnv*, _jobject*, long long) */

void Sexy::TWPurchaseAdapter::SDKLoginStartHook(_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  TGALogMgr *pTVar1;
  char *__n;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  __n = "SDKLoginStartHook";
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TWPurchase");
  TGABagData::TGABagData(aTStack_18);
  std::string::append((string *)aTStack_18,"4",(size_t)__n);
  pTVar1 = (TGALogMgr *)LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData(aTStack_10,aTStack_18);
  TGALogMgr::LogAppLaunch(pTVar1,aTStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
  MessageRouter::Post<int,int,int,int>((MessageRouter *)gMessageRouter,Message::AndroidSDKLogin,0,0)
  ;
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::SDKLoginEndHook(_JNIEnv*, _jobject*, long long, int, _jstring*) */

void Sexy::TWPurchaseAdapter::SDKLoginEndHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4,_jstring *param_5)

{
  TGALogMgr *pTVar1;
  string *psVar2;
  char *__n;
  TGABagData aTStack_18 [8];
  TGABagData aTStack_10 [8];
  long local_8;
  
  __n = "SDKLoginEndHook";
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TWPurchase");
  TGABagData::TGABagData(aTStack_18);
  std::string::append((string *)aTStack_18,"5",(size_t)__n);
  pTVar1 = (TGALogMgr *)LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData(aTStack_10,aTStack_18);
  TGALogMgr::LogAppLaunch(pTVar1,aTStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_10);
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::AndroidSDKLogin,1,param_4);
  LawnApp::SetLoginSuccess(gLawnApp,param_4 == 0);
  Set8BytesTo0(aTStack_10);
  Android::Util::StringFromJString(param_1,(string *)aTStack_10,param_5);
  psVar2 = (string *)LazySingleton<AuthMgr>::GetInstance();
  AuthMgr::SetToken(psVar2);
  std::string::~string((string *)aTStack_10);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::SDKQueryOrderHook(_JNIEnv*, _jobject*, _jstring*, int) */

void Sexy::TWPurchaseAdapter::SDKQueryOrderHook
               (_JNIEnv *param_1,_jobject *param_2,_jstring *param_3,int param_4)

{
  undefined *puVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"TWPurchase","SDKQueryOrderHook");
  Set8BytesTo0(asStack_18);
  Android::Util::StringFromJString(param_1,asStack_18,param_3);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_10,asStack_18);
  MessageRouter::Post<std::string_const&,int,std::string,int>
            ((MessageRouter *)puVar1,Message::AndroidSDKQueryOrder,asStack_10,param_4);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::TWPurchaseAdapter::CheckSpecialRedeemHook(_JNIEnv*, _jobject*, unsigned char) */

void Sexy::TWPurchaseAdapter::CheckSpecialRedeemHook
               (_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  MessageRouter::Post<bool,unsigned_char>
            ((MessageRouter *)gMessageRouter,Message::CheckRedeemFinished,param_3);
  return;
}


/* Sexy::TWPurchaseAdapter::CheckGameCenterStatusHook(_JNIEnv*, _jobject*, unsigned char) */

void Sexy::TWPurchaseAdapter::CheckGameCenterStatusHook
               (_JNIEnv *param_1,_jobject *param_2,uchar param_3)

{
  MessageRouter::Post<bool,unsigned_char>
            ((MessageRouter *)gMessageRouter,Message::CheckGameCenterFinished,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetSkuFromPayCode(std::string const&) */

void __thiscall Sexy::TWPurchaseAdapter::GetSkuFromPayCode(TWPurchaseAdapter *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsPlatformHD(gLawnApp);
  if (cVar1 == '\0') {
    bVar2 = std::operator==((string *)this,"40010807");
    if (bVar2) goto LAB_04907184;
    local_18 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)PayCodeMap);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)PayCodeMap);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      cVar1 = std::operator==((string *)(lVar3 + 8),(string *)this);
      if (cVar1 != '\0') goto LAB_0490723c;
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
  }
  else {
    bVar2 = std::operator==((string *)this,"40010907");
    if (bVar2) {
LAB_04907184:
      std::string::string(in_x8,"planttrial_special");
      nop();
      goto LAB_049071a4;
    }
    local_18 = std::
               map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
               ::begin((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)PayCodeMapHD);
    while( true ) {
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)PayCodeMapHD);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (!bVar2) break;
      lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      cVar1 = std::operator==((string *)(lVar3 + 8),(string *)this);
      if (cVar1 != '\0') goto LAB_0490723c;
      std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_049071a4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0490723c:
  FUN_05475d88();
  goto LAB_049071a4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::TWPurchaseAdapter() */

void __thiscall Sexy::TWPurchaseAdapter::TWPurchaseAdapter(TWPurchaseAdapter *this)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 local_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::TWPurchaseAdapter>::JavaBound((JavaBound<Sexy::TWPurchaseAdapter> *)(this + 0x18))
  ;
  *(undefined ***)this = &PTR__TWPurchaseAdapter_0690cdd0;
  *(undefined ***)(this + 0x18) = &PTR__TWPurchaseAdapter_0690cf28;
  __android_log_print(4,"TWPurchase","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::TWPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,"com/popcap/purchase/TW/TWPurchase",&DAT_055a4820,this)
  ;
  lVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::size((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  *)PayCodeMapHD);
  if (lVar2 == 0) {
    local_18 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                         ("com.popcap.ios.chs.PVZ2.diamonds3","40010909");
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.newer.present","40010925");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.advance.newer.present","40010908");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds4","40010904");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds5","40010910");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds6","40010906");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.gemreturn","40010901");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_1","40010917");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_2","40010912");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_3","40010908");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_4","40010908");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_5","40010919");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_6","40010924");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_7","40010915");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_8","40010905");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_9","40010918");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_10","40010907");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_11","40010923");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_12","40010913");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_13","40010914");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_14","40010907");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_15","40010920");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_16","40010921");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_17","40010907");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_18","40010907");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.mower","40010911");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.present","40010903");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.1000coins","40010908");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.2000coins","40010905");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.3000coins","40010907");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds700","40010927");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds1500","40010928");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins1","40010929");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins2","40010930");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins3","40010931");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.cukePackage","40010948");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales1","40010932");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales2","40010933");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales3","40010934");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales4","40010942");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales5","40010941");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time1","40010935");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time2","40010936");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time3","40010937");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time4","40010938");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time5","40010939");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.coinplantpiece","40010940");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.android.chs.PVZ2.MonthlySubs30","40010943");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.android.chs.PVZ2.MonthlyVIPSubs30","40010960");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds3000","40010945");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds6000","40010946");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds7500","40010947");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack1","40010950");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack2","40010951");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack3","40010949");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv1","40010953");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv2","40010954");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv3","40010955");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv4","40010956");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv5","40010957");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv6","40010958");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv7","40010959");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv8","40010981");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv9","40010982");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv10","40010983");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.spring.offlinebundle","40010955");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.redpack1","40010961");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.redpack10","40010962");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SpecialBundle","40010963");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.zongzi1","40010964");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.battlez.1","40010966");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.battlez.6","40010967");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery6","40010970");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery25","40010971");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery328","40010984");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCard6","40010968");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCard50","40010969");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Bank30","400109161");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.android.chs.PVZ2.MonthlyCardCM","40010973");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle01","40010974");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle02","40010975");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle03","40010976");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle04","40010977");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle05","40010978");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle06","40010979");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretTreasure","40010980");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman1","40010994");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman12","40010995");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman88","40010996");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman168","40010997");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman248","40010998");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLuckyBag45","40010992");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle12","40010985");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle30","40010986");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle45","40010987");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle68","40010988");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle128","40010989");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle348","40010990");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EndlessBundle388","40010991");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewRecallBank18","40010999");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallGemBundle6","400109100");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallGemBundle30","400109101");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallGemBundle68","400109102");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallLiquidBundle6","400109106");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallLiquidBundle30","400109107");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallLiquidBundle68","400109108");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallPlantBundle6","400109103");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallPlantBundle30","400109104");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.RecallPlantBundle68","400109105");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.bearberryBundle128","400109109");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Pennyshandbook","400109110");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretBundle01","400109111");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretBundle02","400109112");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretBundle03","400109113");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretBundle04","400109114");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretBundle05","400109115");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MysteryCrystal01","400109116");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MysteryCrystal02","400109117");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MysteryCrystal03","400109118");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCardSpecial01","400109119");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCardSpecial02","400109120");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCardSpecial03","400109121");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra1","400109122");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra2","400109123");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra3","400109124");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra4","400109125");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra5","400109126");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra6","400109127");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra7","400109128");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra8","400109129");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra9","400109130");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra10","400109131");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra11","400109132");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra12","400109133");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra13","400109134");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DangerRoomSpecialOfferExtra14","400109135");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLionDance01","400109139");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLionDance6","400109140");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLionDance30","400109141");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLionDance68","400109142");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNomal1","400109180");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNomal6","400109177");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNomal30","400109178");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNomal68","400109179");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishLimit30","400109150");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishLimit68","400109151");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishLimit128","400109152");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishDaily6","400109147");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishDaily12","400109148");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.CallofWishDaily30","400109149");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle01","400109153");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle02","400109154");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle03","400109155");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle04","400109156");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle05","400109157");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle06","400109158");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle08","400109174");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle09","400109160");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle010","400109175");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle011","400109176");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle012","400109187");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle013","400109193");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle014","400109194");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle015","400109202");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle016","400109219");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle017","400109224");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle018","400109225");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle020","400109276");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle021","400109286");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle022","400109320");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArtifactBundle023","400109325");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.zongzi12","400109303");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EasterEgg30","400109304");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EasterEgg68","400109305");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SmashGoldenEggs6","400109162");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SmashGoldenEggs30","400109163");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SmashGoldenEggs68","400109164");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SmashGoldenEggs128","400109165");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArborDayKettle1","400109167");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArborDayKettle6","400109168");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArborDayKettle30","400109169");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.ArborDayKettle68","400109170");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GrowthPackage1","400109171");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GrowthPackage6","400109172");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GrowthPackage30","400109173");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp68","400109181");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp6","400109182");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp8","400109183");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp18","400109184");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp45","400109185");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.summercamp78","400109186");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LimitedSummon6","400109188");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LimitedSummon30","400109189");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LimitedSummon98","400109190");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LimitedSummon328","400109191");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LimitedSummonVIP30","400109192");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta6","400109195");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta30","400109196");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta68","400109197");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta128","400109198");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta328","400109199");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HappyFiesta648","400109200");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TimeMystery45","400109201");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods6","400109203");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods30","400109204");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods68","400109205");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods128","400109206");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods328","400109207");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearGoods648","400109208");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass68","400109209");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass6","400109210");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass8","400109211");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass18","400109212");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass45","400109213");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.newpvpbattlepass78","400109214");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear6","400109215");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear30","400109216");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear68","400109217");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelofTheDayNewyear1","400109218");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GeneCultivate6","400109220");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GeneCultivate30","400109221");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GeneCultivate68","400109222");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GeneCultivate128","400109223");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DuelChest3","400109226");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DuelChest4","400109227");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_egypt0","400109228");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_egypt1","400109229");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_egypt2","400109230");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_pirate0","400109231");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_pirate1","400109232");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_pirate2","400109233");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_cowboy0","400109234");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_cowboy1","400109235");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_cowboy2","400109236");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_kongfu0","400109237");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_kongfu1","400109238");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_kongfu2","400109239");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_future0","400109240");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_future1","400109241");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_future2","400109242");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dark0","400109243");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dark1","400109244");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dark2","400109245");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_beach0","400109246");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_beach1","400109247");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_beach2","400109248");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_iceage0","400109249");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_iceage1","400109250");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_iceage2","400109251");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_skycity0","400109252");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_skycity1","400109253");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_skycity2","400109254");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_lostcity0","400109255");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_lostcity1","400109256");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_lostcity2","400109257");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_eighties0","400109258");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_eighties1","400109259");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_eighties2","400109260");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dino0","400109261");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dino1","400109262");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_dino2","400109263");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_modern0","400109264");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_modern1","400109265");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_modern2","400109266");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_steam0","400109267");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_steam1","400109268");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_steam2","400109269");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_renai0","400109270");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_renai1","400109271");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_renai2","400109272");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_heian0","400109273");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_heian1","400109274");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.LevelPackage_heian2","400109275");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreasureBowl6","400109277");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreasureBowl30","400109278");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreasureBowl68","400109279");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreasureBowl128","400109280");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreviFountain06","400109281");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreviFountain68","400109282");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreviFountain328","400109283");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.TreviFountain648","400109284");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PlantCultivate20","400109285");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn1","400109287");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn2","400109288");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn3","400109289");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn4","400109290");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn5","400109291");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn6","400109292");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn7","400109293");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn8","400109294");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn9","400109295");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn10","400109296");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn11","400109297");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.GiftFoReturn12","400109298");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PartyEpsActivity6","400109299");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PartyEpsActivity30","400109300");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PartyEpsActivity68","400109301");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PartyEpsActivity128","400109302");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.EasterEgg06","400109306");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DaveKitchen6","400109307");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DaveKitchen68","400109308");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DragonClanTreasures45","400109309");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DragonClanTreasures68","400109310");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DragonClanTreasures30","400109311");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DragonClanTreasures60","400109312");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DragonClanTreasures128","400109313");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop6","400109314");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop30","400109315");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop68","400109316");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop128","400109317");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop328","400109318");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.DressShop648","400109319");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.JuBaoPavilion30","400109321");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.JuBaoPavilion98","400109322");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.JuBaoPavilion328","400109323");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.JuBaoPavilion648","400109324");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.FutureGiftBox6","400109325");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.FutureGiftBox30","400109326");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.FutureGiftBox98","400109327");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.FutureGiftBox128","400109328");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.01luckBox68","400109335");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.02luckBox68","400109336");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.03luckBox68","400109337");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.04luckBox68","400109338");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PennyGiftBox30","409109330");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PennyGiftBox68","409109331");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PennyGiftBox198","409109332");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PennyGiftBox328","409109333");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.PennyGiftBox648","409109334");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HarvestBattle6","400109339");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HarvestBattle30","400109340");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HarvestBattle98","400109341");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HarvestBattle45","400109342");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.HarvestBattle68","400109343");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.WonderfulNight6","400109344");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.WonderfulNight30","400109345");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.WonderfulNight98","400109346");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.WonderfulNight45","400109347");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.WonderfulNight198","400109348");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
  }
  lVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::size((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                  *)PayCodeMap);
  if (lVar2 == 0) {
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds3","40010809");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.newer.present","40010825");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.advance.newer.present","40010808");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds4","40010804");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds5","40010810");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds6","40010806");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds.gemreturn","40010801");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_1","40010817");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_2","40010812");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_3","40010808");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_4","40010808");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_5","40010819");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_6","40010824");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_7","40010815");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_8","40010805");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_9","40010818");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_10","40010807");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_11","40010823");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_12","40010813");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_13","40010814");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_14","40010807");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_15","40010820");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_16","40010821");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_17","40010807");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.money.planttrial_18","40010807");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.mower","40010811");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.present","40010803");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.1000coins","40010808");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.2000coins","40010805");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.chs.PVZ2.buy.3000coins","40010807");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds700","40010827");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds1500","40010828");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins1","40010829");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins2","40010830");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.pvpcoins3","40010831");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.cukePackage","40010848");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales1","40010832");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales2","40010833");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales3","40010834");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales4","40010842");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.sales5","40010841");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time1","40010835");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time2","40010836");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time3","40010837");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time4","40010838");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.chs.PVZ2.money.pvp_finish_time5","40010839");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.coinplantpiece","40010840");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.android.chs.PVZ2.MonthlySubs30","40010843");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.android.chs.PVZ2.MonthlyVIPSubs30","40010960");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds3000","40010845");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds6000","40010846");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.diamonds7500","40010847");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack1","40010850");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack2","40010851");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.worldunlockpack3","40010849");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv1","40010853");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv2","40010854");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv3","40010855");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv4","40010856");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv5","40010857");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv6","40010858");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv7","40010859");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv8","40010981");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv9","40010982");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.gempackagelv10","40010983");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2android.spring.offlinebundle","40010855");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.battlez.1","40010866");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.pvz2.battlez.6","40010867");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery6","40010870");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery25","40010871");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Lottery328","40010984");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCard6","40010868");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.MonthlyCard50","40010869");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Bank30","400109161");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle01","40010874");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle02","40010875");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle03","40010876");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle04","40010877");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle05","40010878");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewcomerBundle06","40010879");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.SecretTreasure","40010980");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMap,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman1","40010994");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman12","40010995");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman88","40010996");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman168","40010997");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.Richman248","40010998");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
    auVar3 = std::make_pair<char_const(&)[35],char_const(&)[10]>
                       ("com.popcap.ios.chs.PVZ2.NewYearLuckyBag45","40010992");
    local_18 = auVar3;
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::insert<std::pair<char_const*,char_const*>,void>
              ((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)PayCodeMapHD,(pair *)local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetRedeemOrders(std::map<std::string, Sexy::RedeemInfo,
   std::less<std::string >, std::allocator<std::pair<std::string const, Sexy::RedeemInfo> > >&) */

void __thiscall Sexy::TWPurchaseAdapter::GetRedeemOrders(TWPurchaseAdapter *this,map *param_1)

{
  uint uVar1;
  uint uVar2;
  _jclass *p_Var3;
  _jmethodID *p_Var4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  _jmethodID *p_Var7;
  _jmethodID *p_Var8;
  _jstring *p_Var9;
  _jstring *p_Var10;
  _jstring *p_Var11;
  string *extraout_x1;
  ulong uVar12;
  string asStack_68 [8];
  TWPurchaseAdapter aTStack_60 [8];
  string asStack_58 [8];
  RedeemInfo aRStack_50 [8];
  undefined1 auStack_48 [8];
  string asStack_40 [24];
  InvitationPlayerInfo aIStack_28 [24];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var3 = (_jclass *)Android::Util::GetJNIEnv();
  p_Var4 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)p_Var3);
  uVar5 = _JNIEnv::GetMethodID(p_Var3,(char *)p_Var4,"<init>");
  p_Var6 = (_jmethodID *)_JNIEnv::NewObject(p_Var3,p_Var4,uVar5,&DAT_055923fe);
  p_Var7 = (_jmethodID *)_JNIEnv::NewObject(p_Var3,p_Var4,uVar5,&DAT_055923fe);
  p_Var8 = (_jmethodID *)_JNIEnv::NewObject(p_Var3,p_Var4,uVar5,&DAT_055923fe);
  uVar2 = JavaMethod<int>::operator()
                    ((JavaMethod<int> *)JavaGetRedeemOrders,(_JNIEnv *)p_Var3,
                     *(_jobject **)(this + 0x20),p_Var6,p_Var7,p_Var8);
  if (0 < (int)uVar2) {
    uVar5 = _JNIEnv::GetMethodID(p_Var3,(char *)p_Var4,"get");
    uVar12 = 0;
    do {
      p_Var9 = (_jstring *)_JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var6,uVar5,uVar12);
      p_Var10 = (_jstring *)_JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var7,uVar5,uVar12);
      uVar1 = (int)uVar12 + 1;
      p_Var11 = (_jstring *)_JNIEnv::CallObjectMethod((_jobject *)p_Var3,p_Var8,uVar5,uVar12);
      Set8BytesTo0(asStack_68);
      Set8BytesTo0(aTStack_60);
      Set8BytesTo0(asStack_58);
      Android::Util::StringFromJString((_JNIEnv *)p_Var3,asStack_68,p_Var9);
      Android::Util::StringFromJString((_JNIEnv *)p_Var3,(string *)aTStack_60,p_Var10);
      Android::Util::StringFromJString((_JNIEnv *)p_Var3,asStack_58,p_Var11);
      InvitationPlayerInfo::InvitationPlayerInfo(aIStack_28);
      thunk_FUN_05475e00(auStack_10,aTStack_60);
      LawnApp::SetPaymentResultInfo(gLawnApp,(PaymentResultInfo *)aIStack_28);
      RedeemInfo::RedeemInfo(aRStack_50);
      GetSkuFromPayCode(aTStack_60,extraout_x1);
      FUN_05474278(aRStack_50,asStack_40);
      std::string::~string(asStack_40);
      thunk_FUN_05475e00(auStack_48,asStack_58);
      std::make_pair<std::string&,Sexy::RedeemInfo&>(asStack_68,aRStack_50);
      std::
      map<std::string,Sexy::RedeemInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RedeemInfo>>>
      ::insert<std::pair<std::string,Sexy::RedeemInfo>,void>
                ((map<std::string,Sexy::RedeemInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,Sexy::RedeemInfo>>>
                  *)param_1,(pair *)asStack_40);
      std::pair<std::string,Sexy::RedeemInfo>::~pair
                ((pair<std::string,Sexy::RedeemInfo> *)asStack_40);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var3);
      PACommand::~PACommand((PACommand *)aRStack_50);
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_28);
      std::string::~string(asStack_58);
      std::string::~string((string *)aTStack_60);
      std::string::~string(asStack_68);
      uVar12 = (ulong)uVar1;
    } while (uVar1 != uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::Initialize() */

void __thiscall Sexy::TWPurchaseAdapter::Initialize(TWPurchaseAdapter *this)

{
  undefined *puVar1;
  char cVar2;
  _jobject *p_Var3;
  undefined8 uVar4;
  TGALogMgr *pTVar5;
  undefined8 *__n;
  size_t __n_00;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  string asStack_30 [8];
  TGABagData aTStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  __android_log_print(2,"TWPurchase","Initialize");
  p_Var3 = (_jobject *)Android::Util::GetJNIEnv();
  std::string::string(asStack_30,"");
  nop();
  __n = &gLawnApp;
  cVar2 = LawnApp::IsPlatformHD(gLawnApp);
  if (cVar2 == '\0') {
    std::string::append(asStack_30,"108",(size_t)__n);
  }
  else {
    std::string::append(asStack_30,"109",(size_t)__n);
  }
  FUN_0547429c(asStack_30);
  uVar4 = _JNIEnv::NewStringUTF((char *)p_Var3);
  __n_00 = *(size_t *)(this + 0x20);
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitializeSDK,p_Var3,__n_00,uVar4);
  TGABagData::TGABagData(aTStack_28);
  std::string::append((string *)aTStack_28,"2",__n_00);
  pTVar5 = (TGALogMgr *)LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)&local_20,aTStack_28);
  TGALogMgr::LogAppLaunch(pTVar5,(TGABagData *)&local_20);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_20);
  puVar1 = gMessageRouter;
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetIDsInTwSDK);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<Sexy::TWPurchaseAdapter,void(Sexy::TWPurchaseAdapter::*)(bool)>>
            ((MessageRouter *)puVar1,Message::LoginiCloudServerFinish,&local_50);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::TWPurchaseAdapter::GetProductInfo(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  string *in_x1;
  long in_x8;
  undefined1 *this;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::GetProductInfo(param_1);
  cVar1 = LawnApp::IsPlatformHD(gLawnApp);
  if (cVar1 == '\0') {
    this = PayCodeMap;
  }
  else {
    this = PayCodeMapHD;
  }
  local_18 = std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::find((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                     *)this,in_x1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar2) {
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    thunk_FUN_05475e00(in_x8 + 8,lVar3 + 8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void __thiscall
Sexy::TWPurchaseAdapter::RequestPay(TWPurchaseAdapter *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  TGALogMgr *this_00;
  _jobject *p_Var2;
  undefined8 uVar3;
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay((string *)this,param_1);
  uVar1 = FUN_0547429c(param_1);
  __android_log_print(2,"TWPurchase","RequestPay( %s )",uVar1);
  (**(code **)(*(long *)this + 0x68))(aDStack_28,this,param_1);
  thunk_FUN_05475e00(&m_payCode,auStack_20);
  this_00 = (TGALogMgr *)LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogSegments(this_00,0x2729,0,(string *)&m_payCode);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(auStack_20);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var2);
  FUN_0547429c(param_2);
  uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var2,*(undefined8 *)(this + 0x20),uVar1,uVar3);
  _JNIEnv::DeleteLocalRef(p_Var2);
  _JNIEnv::DeleteLocalRef(p_Var2);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::TWPurchaseAdapter::RequestValidationPayment(std::string const&, std::string const&,
   std::string const&) */

void __thiscall
Sexy::TWPurchaseAdapter::RequestValidationPayment
          (TWPurchaseAdapter *this,string *param_1,string *param_2,string *param_3)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay((string *)this,param_1);
  std::operator+(param_1,"_");
  std::operator+(asStack_28,param_3);
  std::string::~string(asStack_28);
  uVar1 = FUN_0547429c(param_1);
  __android_log_print(2,"TWPurchase","RequestValidationPay( %s )",uVar1);
  (**(code **)(*(long *)this + 0x68))(asStack_28,this,param_1);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(auStack_20);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var2);
  FUN_0547429c(param_2);
  uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
  FUN_0547429c(asStack_30);
  uVar4 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestValidationPay,p_Var2,*(undefined8 *)(this + 0x20),uVar1,uVar3,
             uVar4);
  _JNIEnv::DeleteLocalRef(p_Var2);
  _JNIEnv::DeleteLocalRef(p_Var2);
  _JNIEnv::DeleteLocalRef(p_Var2);
  Lua::DownloadInfo::~DownloadInfo((DownloadInfo *)asStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

