// Class: AndroidAchievementDriverMgr


/* AndroidAchievementDriverMgr::QueryAllAchievementCallback(_JNIEnv*, _jobject*, int) */

void AndroidAchievementDriverMgr::QueryAllAchievementCallback
               (_JNIEnv *param_1,_jobject *param_2,int param_3)

{
  __android_log_print(2,"AndroidAchievementDriverMgr","QueryAllAchievementCallback");
  return;
}


/* AndroidAchievementDriverMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidAchievementDriverMgr::BindJavaMethods
          (AndroidAchievementDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init((JavaMethodBase *)JavaInitialize,param_1,param_2,"Initialize","()V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaDoSetAchievement,param_1,param_2,"DoSetAchievement",
             "(Ljava/lang/String;ID)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaDoQueryAllAchievement,param_1,param_2,"DoQueryAllAchievement",
             "()V");
  return;
}


/* non-virtual thunk to AndroidAchievementDriverMgr::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidAchievementDriverMgr::BindJavaMethods
          (AndroidAchievementDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -8,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AndroidAchievementDriverMgr::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
AndroidAchievementDriverMgr::BindNativeMethods
          (AndroidAchievementDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_38;
  undefined *local_30;
  code *local_28;
  char *local_20;
  undefined *local_18;
  code *local_10;
  long local_8;
  
  local_28 = SetAchievementCallback;
  local_8 = ___stack_chk_guard;
  local_30 = &DAT_055a4740;
  local_38 = "Native_SetAchievementCallback";
  local_20 = "Native_QueryAllAchievementCallback";
  local_18 = &DAT_055a4740;
  local_10 = QueryAllAchievementCallback;
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AndroidAchievementDriverMgr::BindNativeMethods(_JNIEnv*, JavaClass const&)
    */

void __thiscall
AndroidAchievementDriverMgr::BindNativeMethods
          (AndroidAchievementDriverMgr *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -8,param_1,param_2);
  return;
}


/* AndroidAchievementDriverMgr::Initialize() */

void __thiscall AndroidAchievementDriverMgr::Initialize(AndroidAchievementDriverMgr *this)

{
  _jobject *p_Var1;
  
  __android_log_print(2,"AndroidAchievementDriverMgr","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()((_JNIEnv *)JavaInitialize,p_Var1,*(undefined8 *)(this + 0x10));
  return;
}


/* AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr() */

void __thiscall
AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr(AndroidAchievementDriverMgr *this)

{
  *(undefined ***)this = &PTR__AndroidAchievementDriverMgr_06615d20;
  *(undefined ***)(this + 8) = &PTR__AndroidAchievementDriverMgr_06615d68;
  JavaBound<AndroidAchievementDriverMgr>::~JavaBound
            ((JavaBound<AndroidAchievementDriverMgr> *)(this + 8));
  return;
}


/* non-virtual thunk to AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr() */

void __thiscall
AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr(AndroidAchievementDriverMgr *this)

{
  ~AndroidAchievementDriverMgr(this + -8);
  return;
}


/* AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr() */

void __thiscall
AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr(AndroidAchievementDriverMgr *this)

{
  ~AndroidAchievementDriverMgr(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr() */

void __thiscall
AndroidAchievementDriverMgr::~AndroidAchievementDriverMgr(AndroidAchievementDriverMgr *this)

{
  ~AndroidAchievementDriverMgr(this + -8);
  return;
}


/* AndroidAchievementDriverMgr::SetAchievementCallback(_JNIEnv*, _jobject*, int) */

void AndroidAchievementDriverMgr::SetAchievementCallback
               (_JNIEnv *param_1,_jobject *param_2,int param_3)

{
  bool bVar1;
  
  __android_log_print(2,"AndroidAchievementDriverMgr","SetAchievementCallback");
  bVar1 = std::function::operator_cast_to_bool((function *)m_SetAchievementCallback);
  if (!bVar1) {
    return;
  }
  std::function<void(bool)>::operator()
            ((function<void(bool)> *)m_SetAchievementCallback,param_3 == 0);
  return;
}


/* AndroidAchievementDriverMgr::AndroidAchievementDriverMgr() */

void __thiscall
AndroidAchievementDriverMgr::AndroidAchievementDriverMgr(AndroidAchievementDriverMgr *this)

{
  char *pcVar1;
  
  INewAchievementDriver::INewAchievementDriver((INewAchievementDriver *)this);
  JavaBound<AndroidAchievementDriverMgr>::JavaBound
            ((JavaBound<AndroidAchievementDriverMgr> *)(this + 8));
  *(undefined ***)this = &PTR__AndroidAchievementDriverMgr_06615d20;
  *(undefined ***)(this + 8) = &PTR__AndroidAchievementDriverMgr_06615d68;
  __android_log_print(4,"AndroidAchievementDriverMgr","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<AndroidAchievementDriverMgr>::ConstructJava
            ((_JNIEnv *)(this + 8),pcVar1,
             "com/popcap/SexyAppFramework/AndroidAchievementDriverManager",&DAT_055a4820,this);
  return;
}


/* AndroidAchievementDriverMgr::SetAchievement(std::string const&, int, double, std::function<void
   (bool)>) */

void __thiscall
AndroidAchievementDriverMgr::SetAchievement
          (undefined8 param_3,AndroidAchievementDriverMgr *this,undefined8 param_1,ulong param_4,
          function *param_5)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  __android_log_print(2,"AndroidAchievementDriverMgr","SetAchievement");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(param_1);
  uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaDoSetAchievement,p_Var1,param_3,*(undefined8 *)(this + 0x10),uVar2,
             param_4 & 0xffffffff);
  _JNIEnv::DeleteLocalRef(p_Var1);
  std::function<void(bool)>::operator=((function<void(bool)> *)m_SetAchievementCallback,param_5);
  return;
}


/* AndroidAchievementDriverMgr::QueryAllAchievement(std::function<void (std::vector<AchievementInfo,
   std::allocator<AchievementInfo> >)>) */

void __thiscall
AndroidAchievementDriverMgr::QueryAllAchievement
          (AndroidAchievementDriverMgr *this,function *param_2)

{
  _jobject *p_Var1;
  
  __android_log_print(2,"AndroidAchievementDriverMgr","QueryAllAchievement");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaDoQueryAllAchievement,p_Var1,*(undefined8 *)(this + 0x10));
  std::function<void(std::vector<AchievementInfo,std::allocator<AchievementInfo>>)>::operator=
            ((function<void(std::vector<AchievementInfo,std::allocator<AchievementInfo>>)> *)
             m_QueryAllAchievementCallback,param_2);
  return;
}

