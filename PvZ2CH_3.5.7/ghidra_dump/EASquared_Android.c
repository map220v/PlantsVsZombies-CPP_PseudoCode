// Class: EASquared_Android


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::GetDesiredMonetizerType() const */

void __thiscall EASquared_Android::GetDesiredMonetizerType(EASquared_Android *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"none");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::GetUnavailableReason() const */

void __thiscall EASquared_Android::GetUnavailableReason(EASquared_Android *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"NullImpl");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* EASquared_Android::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
EASquared_Android::BindJavaMethods(EASquared_Android *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK",
             "(Ljava/lang/String;)V");
  JavaMethodBase::init((JavaMethodBase *)JavaShowScreenView,param_1,param_2,"ShowScreenView","(I)V")
  ;
  JavaMethodBase::init((JavaMethodBase *)JavaShowMedia,param_1,param_2,"ShowMedia","()V");
  JavaMethodBase::init((JavaMethodBase *)JavaShowMediaParam,param_1,param_2,"ShowMediaParam","(I)V")
  ;
  JavaMethodBase::init((JavaMethodBase *)JavaLoadBanner,param_1,param_2,"LoadBanner","(I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaShowBanner,param_1,param_2,"ShowBanner1","(ILjava/lang/String;)V"
            );
  JavaMethodBase::init((JavaMethodBase *)JavaShowCustomBanner,param_1,param_2,"ShowBanner2","(I)V");
  JavaMethodBase::init((JavaMethodBase *)JavaCloseBanner,param_1,param_2,"CloseBanner","(I)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaIsMediaAvailable,param_1,param_2,"IsMediaAvailable","(I)Z");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetActivityInfos,param_1,param_2,"GetActivityInfos",
             "(Ljava/util/ArrayList;Ljava/util/ArrayList;)I");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaCheckActivityInfos,param_1,param_2,"CheckActivityInfos","()V");
  return;
}


/* non-virtual thunk to EASquared_Android::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
EASquared_Android::BindJavaMethods(EASquared_Android *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x10,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
EASquared_Android::BindNativeMethods(EASquared_Android *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_38;
  char *local_30;
  code *local_28;
  char *local_20;
  char *local_18;
  code *local_10;
  long local_8;
  
  local_28 = WatchAdHook;
  local_20 = "Native_BannerLoad";
  local_8 = ___stack_chk_guard;
  local_38 = "Native_WatchAdComplete";
  local_18 = "(ZI)V";
  local_30 = "(JII)V";
  local_10 = BannerLoad;
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to EASquared_Android::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
EASquared_Android::BindNativeMethods(EASquared_Android *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x10,param_1,param_2);
  return;
}


/* EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  *(undefined ***)this = &PTR__EASquared_Android_0697e010;
  *(undefined ***)(this + 8) = &PTR__EASquared_Android_0697e108;
  *(undefined ***)(this + 0x10) = &PTR__EASquared_Android_0697e128;
  JavaBound<EASquared_Android>::~JavaBound((JavaBound<EASquared_Android> *)(this + 0x10));
  Sexy::LazySingleton<EASquared_Android>::~LazySingleton
            ((LazySingleton<EASquared_Android> *)(this + 8));
  return;
}


/* non-virtual thunk to EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  ~EASquared_Android(this + -0x10);
  return;
}


/* non-virtual thunk to EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  ~EASquared_Android(this + -8);
  return;
}


/* EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  ~EASquared_Android(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  ~EASquared_Android(this + -0x10);
  return;
}


/* non-virtual thunk to EASquared_Android::~EASquared_Android() */

void __thiscall EASquared_Android::~EASquared_Android(EASquared_Android *this)

{
  ~EASquared_Android(this + -8);
  return;
}


/* EASquared_Android::Initialize(std::string const&) */

void __thiscall EASquared_Android::Initialize(EASquared_Android *this,string *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  
  if (this[0x50] == (EASquared_Android)0x0) {
    __android_log_print(3,"EASquared_Android","Initialize");
    p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
    FUN_0547429c(param_1);
    uVar2 = _JNIEnv::NewStringUTF((char *)p_Var1);
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaInitializeSDK,p_Var1,*(undefined8 *)(this + 0x18),uVar2);
    _JNIEnv::DeleteLocalRef(p_Var1);
    this[0x50] = (EASquared_Android)0x1;
  }
  return;
}


/* EASquared_Android::CloseBanner(AdBannerType) */

void __thiscall EASquared_Android::CloseBanner(EASquared_Android *this,ulong param_2)

{
  _jobject *p_Var1;
  
  __android_log_print(3,"EASquared_Android","Initialize");
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaCloseBanner,p_Var1,*(undefined8 *)(this + 0x18),param_2 & 0xffffffff);
  return;
}


/* EASquared_Android::CheckActivityInfos() */

void __thiscall EASquared_Android::CheckActivityInfos(EASquared_Android *this)

{
  _jobject *p_Var1;
  
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaCheckActivityInfos,p_Var1,*(undefined8 *)(this + 0x18));
  __android_log_print(3,"EASquared_Android","ActivityInfoCheckInfo!!");
  return;
}


/* EASquared_Android::ShowAdvertisement(std::string const&,
   Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> const&, bool, ViewType,
   ViewPositionType) */

void __thiscall
EASquared_Android::ShowAdvertisement
          (EASquared_Android *this,undefined8 param_2_00,Delegate2 *param_2,undefined8 param_4,
          int param_5,uint param_6)

{
  _jobject *p_Var1;
  
  __android_log_print(3,"EASquared_Android","ShowAdvertisement");
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x20),param_2);
  p_Var1 = (_jobject *)Android::Util::GetJNIEnv();
  if (param_5 == 0) {
    __android_log_print(3,"EASquared_Android","ShowAdvertisement_Screen");
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaShowScreenView,p_Var1,*(undefined8 *)(this + 0x18),(ulong)param_6);
    return;
  }
  if (param_5 == 1) {
    __android_log_print(3,"EASquared_Android","ShowAdvertisement_Media");
    JavaMethod<void>::operator()((_JNIEnv *)JavaShowMedia,p_Var1,*(undefined8 *)(this + 0x18));
    return;
  }
  if (param_5 == 2) {
    __android_log_print(3,"EASquared_Android","ShowAdvertisement_Banner");
    JavaMethod<void>::operator()
              ((_JNIEnv *)JavaLoadBanner,p_Var1,*(undefined8 *)(this + 0x18),(ulong)param_6);
    return;
  }
  if (param_5 != 3) {
    return;
  }
  __android_log_print(3,"EASquared_Android","ShowAdvertisement_Media_Param");
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaShowMediaParam,p_Var1,*(undefined8 *)(this + 0x18),(ulong)param_6);
  return;
}


/* EASquared_Android::CheckCustomBanner(AdBannerType) */

bool __thiscall EASquared_Android::CheckCustomBanner(undefined8 param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = param_2 == 6 || param_2 == 3;
  if (param_2 != 6 && param_2 != 3) {
    bVar1 = param_2 - 0x3dU < 2;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::finalizeResult(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall EASquared_Android::finalizeResult(EASquared_Android *this,uint param_2)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04bf2790(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x38));
  if (iVar1 != 0) {
    __android_log_print(3,"EASquared_Android","Reason: %d",param_2);
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x20),(SexyURL *)(ulong)param_2);
    if ((param_2 & 0xfffffffb) == 0) {
      Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1(aDStack_38);
      Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
                ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x20),(Delegate2 *)aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquared_Android::IsMediaAvailable(ViewPositionType) const */

bool __thiscall EASquared_Android::IsMediaAvailable(EASquared_Android *this,ulong param_2)

{
  char cVar1;
  _JNIEnv *p_Var2;
  
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  cVar1 = JavaMethod<unsigned_char>::operator()
                    ((JavaMethod<unsigned_char> *)JavaIsMediaAvailable,p_Var2,
                     *(_jobject **)(this + 0x18),param_2 & 0xffffffff);
  return cVar1 != '\0';
}


/* EASquared_Android::onFlowEnded(EASquared_Android*, EASquared_Android::AdType,
   EASquared_Android::AdResultCode) */

void __thiscall
EASquared_Android::onFlowEnded(EASquared_Android *this,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this_00;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      return;
    }
    switch(param_3) {
    case 0:
      __android_log_print(3,"EASquared_Android","AdMediaLoadingSuccess!!!");
      uVar3 = 1;
      break;
    case 1:
      __android_log_print(3,"EASquared_Android","AdMediaFailed!!!");
      uVar3 = 4;
      break;
    case 2:
      __android_log_print(3,"EASquared_Android","AdMediaClosed!!!");
      uVar3 = 3;
      break;
    case 3:
      __android_log_print(3,"EASquared_Android","AdMediaClicked!!!");
      uVar3 = 2;
      break;
    case 4:
      __android_log_print(3,"EASquared_Android","AdMediaCompleted!!!");
      finalizeResult(this,0);
      goto LAB_04bf2f40;
    default:
      finalizeResult(this,0);
      return;
    }
    finalizeResult(this,uVar3);
    return;
  }
  if (param_3 == 1) {
    __android_log_print(3,"EASquared_Android","Failed!!!");
    finalizeResult(this,4);
    return;
  }
  if (param_3 == 0) {
    __android_log_print(3,"EASquared_Android","AdLoadingSuccess!!!");
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    goto joined_r0x04bf2fe0;
  }
  if (param_3 == 2) {
    __android_log_print(3,"EASquared_Android","Completed!!!");
    param_4 = 0;
LAB_04bf2f08:
    finalizeResult(this,param_4);
    return;
  }
  if (param_3 - 1U < 2) goto LAB_04bf2f08;
  if (param_3 != 0) {
    return;
  }
LAB_04bf2f40:
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
joined_r0x04bf2fe0:
  if (this_00 == (PlayerInfo *)0x0) {
    return;
  }
  iVar1 = FUN_04bf27a8(*(undefined4 *)(this_00 + 0x1364));
  FUN_04bf27ac(this_00 + 0x1364,iVar1 + 1);
  PlayerInfo::SAVE_PROFILE(this_00);
  return;
}


/* EASquared_Android::WatchAdHook(_JNIEnv*, _jobject*, long long, int, int) */

void EASquared_Android::WatchAdHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4,int param_5)

{
  EASquared_Android *pEVar1;
  
  __android_log_print(3,"EASquared_Android","WatchAdHook( %d, %d )",param_4,param_5);
  pEVar1 = Sexy::LazySingleton<EASquared_Android>::m_instance;
  if (Sexy::LazySingleton<EASquared_Android>::m_instance != (EASquared_Android *)0x0) {
    pEVar1 = Sexy::LazySingleton<EASquared_Android>::m_instance + -8;
  }
  onFlowEnded(pEVar1,param_4,param_5);
  return;
}


/* EASquared_Android::HasAdsAvailable() */

char __thiscall EASquared_Android::HasAdsAvailable(EASquared_Android *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  
  if (this[0x50] != (EASquared_Android)0x0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = FUN_04bf27a8(*(undefined4 *)(lVar4 + 0x1364));
    iVar3 = LawnApp::GetMaxAdsPerDay(gLawnApp);
    if (iVar2 < iVar3) {
      cVar1 = Connectivity::IsConnected();
      if (cVar1 != '\0') {
        return cVar1;
      }
    }
    else {
      Connectivity::IsConnected();
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::EASquared_Android() */

void __thiscall EASquared_Android::EASquared_Android(EASquared_Android *this)

{
  char cVar1;
  char *pcVar2;
  bool local_15;
  int local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EASquared::EASquared((EASquared *)this);
  Sexy::LazySingleton<EASquared_Android>::LazySingleton
            ((LazySingleton<EASquared_Android> *)(this + 8));
  JavaBound<EASquared_Android>::JavaBound((JavaBound<EASquared_Android> *)(this + 0x10));
  *(undefined ***)this = &PTR__EASquared_Android_0697e010;
  *(undefined ***)(this + 8) = &PTR__EASquared_Android_0697e108;
  *(undefined ***)(this + 0x10) = &PTR__EASquared_Android_0697e128;
  Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::Delegate1
            ((DummyInit *)(this + 0x20));
  this[0x50] = (EASquared_Android)0x0;
  pcVar2 = (char *)Android::Util::GetJNIEnv();
  JavaBound<EASquared_Android>::ConstructJava
            ((_JNIEnv *)(this + 0x10),pcVar2,"com/popcap/SexyAppFramework/TWGameAd",&DAT_055a4820,
             this);
  cVar1 = std::
          map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
          ::empty((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                   *)mBannerLoaded);
  if (cVar1 != '\0') {
    local_14 = 1;
    local_15 = false;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 2;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 3;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 4;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 5;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 6;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 0x3d;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
    local_15 = false;
    local_14 = 0x3e;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::
    map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
    ::insert<std::pair<AdBannerType,bool>,void>
              ((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                *)mBannerLoaded,(pair *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EASquared_Android::IsBannerLoaded(AdBannerType) */

undefined1 __thiscall EASquared_Android::IsBannerLoaded(undefined8 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined1 *)
           std::
           map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
           ::operator[]((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                         *)mBannerLoaded,(AdBannerType *)&local_4);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::ShowBanner(AdBannerType) */

void __thiscall EASquared_Android::ShowBanner(EASquared_Android *this,uint param_2)

{
  char cVar1;
  _jobject *p_Var2;
  char *pcVar3;
  undefined8 uVar4;
  WorldDataManager *this_00;
  size_t __n;
  long lVar5;
  uint local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  pcVar3 = (char *)std::
                   map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                   ::operator[]((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                                 *)mBannerLoaded,(AdBannerType *)local_24);
  if (*pcVar3 != '\0') {
    cVar1 = CheckCustomBanner(this,local_24[0]);
    if (cVar1 == '\0') {
      Set8BytesTo0(asStack_18);
      if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
        uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
        FUN_05475d88(asStack_10,uVar4);
        this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
        __n = WorldDataManager::FindWorldDataByLevelName(this_00,asStack_10);
        if (__n == 0) {
          lVar5 = FUN_05474374(asStack_10,"ScoringPlaytest");
          if (lVar5 != -1) {
            std::string::append(asStack_18,"ScoringPlaytest",__n);
          }
        }
        else {
          thunk_FUN_05475e00(asStack_18,__n + 0x38);
        }
        std::string::~string(asStack_10);
      }
      FUN_0547429c(asStack_18);
      uVar4 = _JNIEnv::NewStringUTF((char *)p_Var2);
      JavaMethod<void>::operator()
                ((_JNIEnv *)JavaShowBanner,p_Var2,*(undefined8 *)(this + 0x18),(ulong)local_24[0],
                 uVar4);
      _JNIEnv::DeleteLocalRef(p_Var2);
      std::string::~string(asStack_18);
    }
    else {
      JavaMethod<void>::operator()
                ((_JNIEnv *)JavaShowCustomBanner,p_Var2,*(undefined8 *)(this + 0x18),
                 (ulong)local_24[0]);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::BannerLoad(_JNIEnv*, _jobject*, bool, int) */

void EASquared_Android::BannerLoad(_JNIEnv *param_1,_jobject *param_2,bool param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __android_log_print(3,"EASquared_Android","BannerLoad( %d )",param_3);
  local_c = param_4;
  uVar1 = std::
          map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
          ::operator[]((map<AdBannerType,bool,std::less<AdBannerType>,std::allocator<std::pair<AdBannerType_const,bool>>>
                        *)mBannerLoaded,(AdBannerType *)&local_c);
  *(bool *)uVar1 = param_3;
  if (param_4 != 6) {
    plVar2 = (long *)Sexy::LazySingleton<EASquared_Android>::GetInstance();
    (**(code **)(*plVar2 + 0x38))(plVar2,param_4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EASquared_Android::GetActivityInfos(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void __thiscall EASquared_Android::GetActivityInfos(EASquared_Android *this,map *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  _jclass *p_Var4;
  _jmethodID *p_Var5;
  undefined8 uVar6;
  _jmethodID *p_Var7;
  _jmethodID *p_Var8;
  char *pcVar9;
  undefined8 uVar10;
  _jmethodID *p_Var11;
  ulong uVar12;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  p_Var4 = (_jclass *)Android::Util::GetJNIEnv();
  p_Var5 = (_jmethodID *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)p_Var4);
  uVar6 = _JNIEnv::GetMethodID(p_Var4,(char *)p_Var5,"<init>");
  p_Var7 = (_jmethodID *)_JNIEnv::NewObject(p_Var4,p_Var5,uVar6,&DAT_055923fe);
  p_Var8 = (_jmethodID *)_JNIEnv::NewObject(p_Var4,p_Var5,uVar6,&DAT_055923fe);
  uVar2 = JavaMethod<int>::operator()
                    ((JavaMethod<int> *)JavaGetActivityInfos,(_JNIEnv *)p_Var4,
                     *(_jobject **)(this + 0x18),p_Var7,p_Var8);
  __android_log_print(3,"EASquared_Android","ActivityInfoGetInfo!!");
  __android_log_print(3,"EASquared_Android","ActivityInfoCount: %d",uVar2);
  if (0 < (int)uVar2) {
    pcVar9 = (char *)std::__ctype_abstract_base<wchar_t>::toupper((wchar_t)p_Var4);
    uVar6 = _JNIEnv::GetMethodID(p_Var4,pcVar9,"intValue");
    uVar10 = _JNIEnv::GetMethodID(p_Var4,(char *)p_Var5,"get");
    uVar12 = 0;
    do {
      p_Var5 = (_jmethodID *)_JNIEnv::CallObjectMethod((_jobject *)p_Var4,p_Var7,uVar10,uVar12);
      p_Var11 = (_jmethodID *)_JNIEnv::CallObjectMethod((_jobject *)p_Var4,p_Var8,uVar10,uVar12);
      uVar3 = _JNIEnv::CallIntMethod((_jobject *)p_Var4,p_Var5,uVar6,uVar12);
      uVar1 = (int)uVar12 + 1;
      local_14 = _JNIEnv::CallIntMethod((_jobject *)p_Var4,p_Var11,uVar6,uVar12);
      local_18 = uVar3;
      __android_log_print(3,"EASquared_Android","ActivityInfoId: %d, ActivityInfoTestId: %d",uVar3,
                          local_14);
      local_10 = std::make_pair<FestivalTab,ActivityTypeID>
                           ((FestivalTab *)&local_18,(ActivityTypeID *)&local_14);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
      insert<std::pair<int,int>,void>
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_1,
                 (pair *)&local_10);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var4);
      _JNIEnv::DeleteLocalRef((_jobject *)p_Var4);
      uVar12 = (ulong)uVar1;
    } while (uVar1 != uVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

