// Class: Sexy::AndroidHttpTransaction


/* Sexy::AndroidHttpTransaction::GetUserData() */

undefined8 __thiscall Sexy::AndroidHttpTransaction::GetUserData(AndroidHttpTransaction *this)

{
  return *(undefined8 *)(this + 0x20);
}


/* Sexy::AndroidHttpTransaction::SetUserData(void*) */

void __thiscall
Sexy::AndroidHttpTransaction::SetUserData(AndroidHttpTransaction *this,void *param_1)

{
  *(void **)(this + 0x20) = param_1;
  return;
}


/* Sexy::AndroidHttpTransaction::OnTransactionCleanup() */

void __thiscall Sexy::AndroidHttpTransaction::OnTransactionCleanup(AndroidHttpTransaction *this)

{
  if (this != (AndroidHttpTransaction *)0x0) {
    (**(code **)(*(long *)this + 0x90))();
  }
  return;
}


/* Sexy::AndroidHttpTransaction::OnReceivedResponse() */

void __thiscall Sexy::AndroidHttpTransaction::OnReceivedResponse(AndroidHttpTransaction *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(this + 0x18) + 0x10);
  if (pcVar1 != IHttpListener::HttpReceivedResponse) {
    (*pcVar1)(*(long **)(this + 0x18),this);
  }
  return;
}


/* Sexy::AndroidHttpTransaction::OnTransactionComplete() */

void __thiscall Sexy::AndroidHttpTransaction::OnTransactionComplete(AndroidHttpTransaction *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(this + 0x18) + 0x20);
  if (pcVar1 != IHttpListener::HttpTransactionComplete) {
    (*pcVar1)(*(long **)(this + 0x18),this);
  }
  return;
}


/* Sexy::AndroidHttpTransaction::OnTransactionError() */

void __thiscall Sexy::AndroidHttpTransaction::OnTransactionError(AndroidHttpTransaction *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(this + 0x18) + 0x28);
  if (pcVar1 != IHttpListener::HttpTransactionError) {
    (*pcVar1)(*(long **)(this + 0x18),this);
  }
  return;
}


/* Sexy::AndroidHttpTransaction::GetErrorMessage() */

undefined8 __thiscall Sexy::AndroidHttpTransaction::GetErrorMessage(AndroidHttpTransaction *this)

{
  undefined8 in_x8;
  
  Set8BytesTo0();
  return in_x8;
}


/* Sexy::AndroidHttpTransaction::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::AndroidHttpTransaction::BindJavaMethods
          (AndroidHttpTransaction *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetRequestHeader,param_1,param_2,"SetRequestHeader",
             "(Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSetRequestBody,param_1,param_2,"SetRequestBody","([B)V");
  JavaMethodBase::init((JavaMethodBase *)JavaSetTimeout,param_1,param_2,"SetTimeout","(I)V");
  JavaMethodBase::init((JavaMethodBase *)JavaStart,param_1,param_2,"Start","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaGetStatusCode,param_1,param_2,"GetStatusCode","()I");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetStatusLine,param_1,param_2,"GetStatusLine",
             "()Ljava/lang/String;");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetResponseLength,param_1,param_2,"GetResponseLength","()I");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetResponseHeader,param_1,param_2,"GetResponseHeader",
             "(Ljava/lang/String;)Ljava/lang/String;");
  JavaMethodBase::init((JavaMethodBase *)JavaRelease,param_1,param_2,"Release","()V");
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpTransaction::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::AndroidHttpTransaction::BindJavaMethods
          (AndroidHttpTransaction *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::GetSerializedRequest() */

void __thiscall Sexy::AndroidHttpTransaction::GetSerializedRequest(AndroidHttpTransaction *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"AndroidHttpTransaction::GetSerializedRequest not implemented");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::AndroidHttpTransaction::~AndroidHttpTransaction() */

void __thiscall Sexy::AndroidHttpTransaction::~AndroidHttpTransaction(AndroidHttpTransaction *this)

{
  *(undefined ***)this = &PTR_SetLineLayout_06a34cf0;
  *(undefined ***)(this + 8) = &PTR__AndroidHttpTransaction_06a34da8;
  JavaBound<Sexy::AndroidHttpTransaction>::~JavaBound
            ((JavaBound<Sexy::AndroidHttpTransaction> *)(this + 8));
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpTransaction::~AndroidHttpTransaction() */

void __thiscall Sexy::AndroidHttpTransaction::~AndroidHttpTransaction(AndroidHttpTransaction *this)

{
  ~AndroidHttpTransaction(this + -8);
  return;
}


/* Sexy::AndroidHttpTransaction::~AndroidHttpTransaction() */

void __thiscall Sexy::AndroidHttpTransaction::~AndroidHttpTransaction(AndroidHttpTransaction *this)

{
  ~AndroidHttpTransaction(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpTransaction::~AndroidHttpTransaction() */

void __thiscall Sexy::AndroidHttpTransaction::~AndroidHttpTransaction(AndroidHttpTransaction *this)

{
  ~AndroidHttpTransaction(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::AndroidHttpTransaction::BindNativeMethods
          (AndroidHttpTransaction *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JNINativeMethod *pJVar1;
  undefined1 auStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  memcpy(auStack_80,&PTR_s_HttpReceivedResponse_06a8aac0,0x78);
  pJVar1 = (JNINativeMethod *)
           open_vcdiff::JSONCodeTableWriter::target_length((JSONCodeTableWriter *)param_2);
  _JNIEnv::RegisterNatives((_jclass *)param_1,pJVar1,(int)auStack_80);
  JavaException::CheckAndClear(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::AndroidHttpTransaction::BindNativeMethods(_JNIEnv*, JavaClass const&)
    */

void __thiscall
Sexy::AndroidHttpTransaction::BindNativeMethods
          (AndroidHttpTransaction *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -8,param_1,param_2);
  return;
}


/* Sexy::AndroidHttpTransaction::SetRequestHeader(std::string const&, std::string const&) */

void __thiscall
Sexy::AndroidHttpTransaction::SetRequestHeader
          (AndroidHttpTransaction *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  _jobject *p_Var3;
  
  uVar1 = FUN_0547429c(param_1);
  uVar2 = FUN_0547429c(param_2);
  __android_log_print(4,"AndroidHttpTransaction","SetRequestHeader( name:\"%s\", value:\"%s\" )",
                      uVar1,uVar2);
  p_Var3 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var3);
  FUN_0547429c(param_2);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var3);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetRequestHeader,p_Var3,*(undefined8 *)(this + 0x10),uVar1,uVar2);
  _JNIEnv::DeleteLocalRef(p_Var3);
  _JNIEnv::DeleteLocalRef(p_Var3);
  return;
}


/* Sexy::AndroidHttpTransaction::SetRequestBody(void const*, unsigned long) */

void __thiscall
Sexy::AndroidHttpTransaction::SetRequestBody
          (AndroidHttpTransaction *this,void *param_1,ulong param_2)

{
  _jbyteArray *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(4,"AndroidHttpTransaction","SetRequestBody( length:%ld )",param_2);
  p_Var1 = (_jbyteArray *)Android::Util::GetJNIEnv();
  uVar2 = ZombieVan::onExitState_StartSpin(p_Var1,param_2 & 0xffffffff);
  _JNIEnv::SetByteArrayRegion(p_Var1,(int)uVar2,0,(signed *)(param_2 & 0xffffffff));
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetRequestBody,(_jobject *)p_Var1,*(undefined8 *)(this + 0x10),uVar2);
  _JNIEnv::DeleteLocalRef((_jobject *)p_Var1);
  return;
}


/* Sexy::AndroidHttpTransaction::SetTimeout(int) */

void __thiscall Sexy::AndroidHttpTransaction::SetTimeout(AndroidHttpTransaction *this,int param_1)

{
  _jobject *p_Var1;
  
  __android_log_print(4,"AndroidHttpTransaction","SetTimeout( seconds:%d )",(ulong)(uint)param_1);
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSetTimeout,p_Var1,*(undefined8 *)(this + 0x10),(ulong)(uint)param_1);
  return;
}


/* Sexy::AndroidHttpTransaction::Start() */

void __thiscall Sexy::AndroidHttpTransaction::Start(AndroidHttpTransaction *this)

{
  _jobject *p_Var1;
  
  __android_log_print(4,"AndroidHttpTransaction","Start()");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaStart,p_Var1,*(undefined8 *)(this + 0x10));
  return;
}


/* Sexy::AndroidHttpTransaction::Release() */

void __thiscall Sexy::AndroidHttpTransaction::Release(AndroidHttpTransaction *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  *(undefined8 **)(this + 0x18) = &DAT_06bc3dd0;
  JavaMethod<void>::operator()((_JNIEnv *)JavaRelease,p_Var1,*(undefined8 *)(this + 0x10));
  return;
}


/* Sexy::AndroidHttpTransaction::ReleaseReceivedDataCallback(Sexy::AndroidHttpTransaction::ReceivedDataCallback*)
    */

void __thiscall
Sexy::AndroidHttpTransaction::ReleaseReceivedDataCallback
          (AndroidHttpTransaction *this,ReceivedDataCallback *param_1)

{
  if (*(ColourFit **)(param_1 + 0x38) != (ColourFit *)0x0) {
    EATextSquish::ColourFit::~ColourFit(*(ColourFit **)(param_1 + 0x38));
  }
  AK::FreeHook(param_1);
  return;
}


/* Sexy::AndroidHttpTransaction::OnReceivedData(void*, unsigned long) */

void __thiscall
Sexy::AndroidHttpTransaction::OnReceivedData
          (AndroidHttpTransaction *this,void *param_1,ulong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(long **)(this + 0x18) + 0x18);
  if (pcVar1 != IHttpListener::HttpReceivedData) {
    (*pcVar1)(*(long **)(this + 0x18),this,param_1,param_2);
  }
  return;
}


/* Sexy::AndroidHttpTransaction::AndroidHttpTransaction(std::string const&, std::string const&,
   unsigned int) */

void __thiscall
Sexy::AndroidHttpTransaction::AndroidHttpTransaction
          (AndroidHttpTransaction *this,string *param_1,string *param_2,uint param_3)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  IHttpTransaction::IHttpTransaction((IHttpTransaction *)this);
  JavaBound<Sexy::AndroidHttpTransaction>::JavaBound
            ((JavaBound<Sexy::AndroidHttpTransaction> *)(this + 8));
  *(undefined8 **)(this + 0x18) = &DAT_06bc3dd0;
  *(undefined ***)this = &PTR_SetLineLayout_06a34cf0;
  *(undefined ***)(this + 8) = &PTR__AndroidHttpTransaction_06a34da8;
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  FUN_0547429c(param_2);
  uVar3 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaBound<Sexy::AndroidHttpTransaction>::ConstructJava
            ((_JNIEnv *)(this + 8),(char *)p_Var1,
             "com/popcap/SexyAppFramework/AndroidHttpTransaction",
             "(JLjava/lang/String;Ljava/lang/String;)V",this,uVar2,uVar3);
  _JNIEnv::DeleteLocalRef(p_Var1);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* Sexy::AndroidHttpTransaction::GetStatusCode() */

undefined4 __thiscall Sexy::AndroidHttpTransaction::GetStatusCode(AndroidHttpTransaction *this)

{
  undefined4 uVar1;
  _JNIEnv *p_Var2;
  
  __android_log_print(4,"AndroidHttpTransaction","GetStatusCode");
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  uVar1 = JavaMethod<int>::operator()
                    ((JavaMethod<int> *)JavaGetStatusCode,p_Var2,*(_jobject **)(this + 0x10));
  __android_log_print(4,"AndroidHttpTransaction","<- statusCode:%d",uVar1);
  return uVar1;
}


/* Sexy::AndroidHttpTransaction::GetResponseLength() */

undefined4 __thiscall Sexy::AndroidHttpTransaction::GetResponseLength(AndroidHttpTransaction *this)

{
  undefined4 uVar1;
  _JNIEnv *p_Var2;
  
  __android_log_print(4,"AndroidHttpTransaction","GetResponseLength");
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  uVar1 = JavaMethod<int>::operator()
                    ((JavaMethod<int> *)JavaGetResponseLength,p_Var2,*(_jobject **)(this + 0x10));
  __android_log_print(4,"AndroidHttpTransaction","<- responseLength:%d",uVar1);
  return uVar1;
}


/* Sexy::AndroidHttpTransaction::GetStatusLine() */

void Sexy::AndroidHttpTransaction::GetStatusLine(void)

{
  long in_x0;
  _JNIEnv *p_Var1;
  _jstring *p_Var2;
  undefined8 uVar3;
  string *in_x8;
  
  __android_log_print(4,"AndroidHttpTransaction","GetStatusLine");
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  p_Var2 = (_jstring *)
           JavaMethod<_jstring*>::operator()
                     ((JavaMethod<_jstring*> *)JavaGetStatusLine,p_Var1,*(_jobject **)(in_x0 + 0x10)
                     );
  Set8BytesTo0();
  Android::Util::StringFromJString(p_Var1,in_x8,p_Var2);
  uVar3 = FUN_0547429c();
  __android_log_print(4,"AndroidHttpTransaction","<- statusLine:\"%s\"",uVar3);
  return;
}


/* Sexy::AndroidHttpTransaction::GetResponseHeader(std::string const&) */

void Sexy::AndroidHttpTransaction::GetResponseHeader(string *param_1)

{
  _JNIEnv *p_Var1;
  undefined8 uVar2;
  _jstring *p_Var3;
  string *in_x8;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  _JNIEnv::PushLocalFrame((int)p_Var1);
  FUN_0547429c();
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  p_Var3 = (_jstring *)
           JavaMethod<_jstring*>::operator()
                     ((JavaMethod<_jstring*> *)JavaGetResponseHeader,p_Var1,
                      *(_jobject **)(param_1 + 0x10),uVar2);
  Set8BytesTo0();
  Android::Util::StringFromJString(p_Var1,in_x8,p_Var3);
  _JNIEnv::PopLocalFrame((_jobject *)p_Var1);
  uVar2 = FUN_0547429c();
  __android_log_print(4,"AndroidHttpTransaction","<- responseHeader:\"%s\"",uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::OnReceivedResponseHook(_JNIEnv*, _jobject*, long long) */

void Sexy::AndroidHttpTransaction::OnReceivedResponseHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"AndroidHttpTransaction","OnReceivedResponseHook");
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_3,OnReceivedResponse);
  Delegate0::Delegate0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>
            (aDStack_38,aCStack_50);
  AndroidAppDriver::StaticEnqueueCallback(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::OnTransactionCompleteHook(_JNIEnv*, _jobject*, long long) */

void Sexy::AndroidHttpTransaction::OnTransactionCompleteHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"AndroidHttpTransaction","OnTransactionCompleteHook");
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_3,OnTransactionComplete);
  Delegate0::Delegate0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>
            (aDStack_38,aCStack_50);
  AndroidAppDriver::StaticEnqueueCallback(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::OnTransactionErrorHook(_JNIEnv*, _jobject*, long long) */

void Sexy::AndroidHttpTransaction::OnTransactionErrorHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"AndroidHttpTransaction","OnTransactionErrorHook");
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_3,OnTransactionError);
  Delegate0::Delegate0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>
            (aDStack_38,aCStack_50);
  AndroidAppDriver::StaticEnqueueCallback(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpTransaction::OnTransactionCleanupHook(_JNIEnv*, _jobject*, long long) */

void Sexy::AndroidHttpTransaction::OnTransactionCleanupHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(4,"AndroidHttpTransaction","OnTransactionCleanupHook");
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)param_3,OnTransactionCleanup);
  Delegate0::Delegate0<Sexy::AndroidHttpTransaction,void(Sexy::AndroidHttpTransaction::*)()>
            (aDStack_38,aCStack_50);
  AndroidAppDriver::StaticEnqueueCallback(aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidHttpTransaction::CreateReceivedDataCallback(unsigned long) */

ReceivedDataCallback * __thiscall
Sexy::AndroidHttpTransaction::CreateReceivedDataCallback(AndroidHttpTransaction *this,ulong param_1)

{
  ReceivedDataCallback *this_00;
  void *pvVar1;
  
  this_00 = ::operator_new(0x48);
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  ReceivedDataCallback::ReceivedDataCallback(this_00);
  *(ulong *)(this_00 + 0x40) = param_1;
  pvVar1 = operator_new__(param_1);
  *(AndroidHttpTransaction **)(this_00 + 0x30) = this;
  *(void **)(this_00 + 0x38) = pvVar1;
  return this_00;
}


/* Sexy::AndroidHttpTransaction::OnReceivedDataHook(_JNIEnv*, _jobject*, long long, _jbyteArray*,
   int) */

void Sexy::AndroidHttpTransaction::OnReceivedDataHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,_jbyteArray *param_4,int param_5
               )

{
  char cVar1;
  ReceivedDataCallback *pRVar2;
  Delegate0 *extraout_x0;
  
  __android_log_print(4,"AndroidHttpTransaction","OnReceivedDataHook( %d )",param_5);
  cVar1 = JavaException::CheckAndClear(param_1);
  if (cVar1 != '\0') {
    return;
  }
  pRVar2 = (ReceivedDataCallback *)
           CreateReceivedDataCallback((AndroidHttpTransaction *)param_3,(long)param_5);
  _JNIEnv::GetByteArrayRegion((_jbyteArray *)param_1,(int)param_4,0,(signed *)(ulong)(uint)param_5);
  cVar1 = JavaException::CheckAndClear(param_1);
  if (cVar1 == '\0') {
    nop();
    AndroidAppDriver::StaticEnqueueCallback(extraout_x0);
    return;
  }
  ReleaseReceivedDataCallback((AndroidHttpTransaction *)param_3,pRVar2);
  return;
}

