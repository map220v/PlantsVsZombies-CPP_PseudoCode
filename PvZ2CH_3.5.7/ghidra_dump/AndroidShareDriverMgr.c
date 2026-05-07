// Class: AndroidShareDriverMgr


/* AndroidShareDriverMgr::DeleteLocalImage(ScreenInfo) */

char __thiscall AndroidShareDriverMgr::DeleteLocalImage(undefined8 param_1,long param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*Sexy::gFileDriver + 0x110))(Sexy::gFileDriver,param_2 + 0x10,0);
  if (cVar1 != '\0') {
    (**(code **)(*Sexy::gFileDriver + 0x140))(Sexy::gFileDriver,param_2 + 0x10);
  }
  return cVar1;
}


/* AndroidShareDriverMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidShareDriverMgr::BindJavaMethods
          (AndroidShareDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitialize,param_1,param_2,"Initialize","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaDoShare,param_1,param_2,"DoShare","(Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaSaveImageToGallery,param_1,param_2,"SaveImageToGallery",
             "(Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to AndroidShareDriverMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidShareDriverMgr::BindJavaMethods
          (AndroidShareDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidShareDriverMgr::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidShareDriverMgr::BindNativeMethods
          (AndroidShareDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_38;
  char *local_30;
  code *local_28;
  char *local_20;
  undefined *local_18;
  code *local_10;
  long local_8;
  
  local_28 = ShareCallback;
  local_20 = "Native_SaveCallback";
  local_8 = ___stack_chk_guard;
  local_38 = "Native_ShareCallback";
  local_18 = &DAT_055a4740;
  local_30 = "(ILjava/lang/String;)V";
  local_10 = SaveCallback;
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AndroidShareDriverMgr::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidShareDriverMgr::BindNativeMethods
          (AndroidShareDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -8,param_1,param_2);
  return;
}


/* AndroidShareDriverMgr::Initialize() */

void __thiscall AndroidShareDriverMgr::Initialize(AndroidShareDriverMgr *this)

{
  _jobject *p_Var1;
  
  __android_log_print(2,"AndroidShareDriverMgr","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitialize,p_Var1,*(undefined8 *)(this + 0x10));
  return;
}


/* AndroidShareDriverMgr::Share(SharePlatform, ScreenInfo) */

void __thiscall
AndroidShareDriverMgr::Share(AndroidShareDriverMgr *this,undefined8 param_2,long param_3)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"AndroidShareDriverMgr","Share");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_3 + 0x10);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()((_JNIEnv *)JavaDoShare,p_Var1,*(undefined8 *)(this + 0x10),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* AndroidShareDriverMgr::SaveScreenImageToGallery(ScreenInfo) */

void __thiscall
AndroidShareDriverMgr::SaveScreenImageToGallery(AndroidShareDriverMgr *this,long param_2)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"AndroidShareDriverMgr","SaveScreenImageToGallery");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_2 + 0x10);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaSaveImageToGallery,p_Var1,*(undefined8 *)(this + 0x10),uVar2);
  _JNIEnv::DeleteLocalRef(p_Var1);
  return;
}


/* AndroidShareDriverMgr::~AndroidShareDriverMgr() */

void __thiscall AndroidShareDriverMgr::~AndroidShareDriverMgr(AndroidShareDriverMgr *this)

{
  *(undefined ***)this = &PTR__AndroidShareDriverMgr_06615be0;
  *(undefined ***)(this + 8) = &PTR__AndroidShareDriverMgr_06615c40;
  JavaBound<AndroidShareDriverMgr>::~JavaBound((JavaBound<AndroidShareDriverMgr> *)(this + 8));
  return;
}


/* non-virtual thunk to AndroidShareDriverMgr::~AndroidShareDriverMgr() */

void __thiscall AndroidShareDriverMgr::~AndroidShareDriverMgr(AndroidShareDriverMgr *this)

{
  ~AndroidShareDriverMgr(this + -8);
  return;
}


/* AndroidShareDriverMgr::~AndroidShareDriverMgr() */

void __thiscall AndroidShareDriverMgr::~AndroidShareDriverMgr(AndroidShareDriverMgr *this)

{
  ~AndroidShareDriverMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AndroidShareDriverMgr::~AndroidShareDriverMgr() */

void __thiscall AndroidShareDriverMgr::~AndroidShareDriverMgr(AndroidShareDriverMgr *this)

{
  ~AndroidShareDriverMgr(this + -8);
  return;
}


/* AndroidShareDriverMgr::AndroidShareDriverMgr() */

void __thiscall AndroidShareDriverMgr::AndroidShareDriverMgr(AndroidShareDriverMgr *this)

{
  char *pcVar1;
  
  IShareDriver::IShareDriver((IShareDriver *)this);
  JavaBound<AndroidShareDriverMgr>::JavaBound((JavaBound<AndroidShareDriverMgr> *)(this + 8));
  *(undefined ***)this = &PTR__AndroidShareDriverMgr_06615be0;
  *(undefined ***)(this + 8) = &PTR__AndroidShareDriverMgr_06615c40;
  __android_log_print(4,"AndroidShareDriverMgr","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<AndroidShareDriverMgr>::ConstructJava
            ((_JNIEnv *)(this + 8),pcVar1,"com/popcap/SexyAppFramework/AndroidShareDriverManager",
             &DAT_055a4820,this);
  return;
}


/* AndroidShareDriverMgr::SaveCallback(_JNIEnv*, _jobject*, int) */

void AndroidShareDriverMgr::SaveCallback(_JNIEnv *param_1,_jobject *param_2,int param_3)

{
  SocialShareMgr *this;
  
  __android_log_print(2,"AndroidShareDriverMgr","SaveCallback");
  this = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::SaveCallback(this,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidShareDriverMgr::ShareCallback(_JNIEnv*, _jobject*, int, _jstring*) */

void AndroidShareDriverMgr::ShareCallback
               (_JNIEnv *param_1,_jobject *param_2,int param_3,_jstring *param_4)

{
  undefined8 uVar1;
  SocialShareMgr *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(2,"AndroidShareDriverMgr","ShareCallback");
  Set8BytesTo0(asStack_10);
  Android::Util::StringFromJString(param_1,asStack_10,param_4);
  uVar1 = FUN_0547429c(asStack_10);
  __android_log_print(2,"AndroidShareDriverMgr","Platform: %s",uVar1);
  this = (SocialShareMgr *)Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  SocialShareMgr::ShareCallback(this,param_3,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidShareDriverMgr::SaveScreenImageToLocal(ScreenInfo) */

void __thiscall
AndroidShareDriverMgr::SaveScreenImageToLocal(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  char *__s;
  string asStack_30 [8];
  Image aIStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)(**(code **)(**(long **)(gLawnApp + 0x20) + 0x60))(*(long **)(gLawnApp + 0x20));
  ImageLib::Image::Image(aIStack_28);
  local_18 = (**(code **)(*plVar1 + 0xd0))(plVar1,*param_2,param_2[1],param_2[2],param_2[3]);
  local_20 = param_2[2];
  local_1c = param_2[3];
  __s = (char *)FUN_0547429c(param_2 + 4);
  std::string::string(asStack_30,__s);
  ImageLib::WritePNGImage(asStack_30,aIStack_28,0);
  std::string::~string(asStack_30);
  nop();
  (**(code **)(*plVar1 + 0x70))(plVar1);
  local_18 = 0;
  ImageLib::Image::~Image(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

