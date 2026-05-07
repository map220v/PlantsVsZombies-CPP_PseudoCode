// Class: LawnApp


/* LawnApp::GetWorldMap() */

undefined8 __thiscall LawnApp::GetWorldMap(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2de8);
}


/* LawnApp::GetMainMenu() */

undefined8 __thiscall LawnApp::GetMainMenu(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e10);
}


/* LawnApp::GetPVZ2Dialog() const */

undefined8 __thiscall LawnApp::GetPVZ2Dialog(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e18);
}


/* LawnApp::GetPVPMapUI() */

undefined8 __thiscall LawnApp::GetPVPMapUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e88);
}


/* LawnApp::IsSalesUIValid() */

bool __thiscall LawnApp::IsSalesUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2c90) != 0;
}


/* LawnApp::GetSalesUI() const */

undefined8 __thiscall LawnApp::GetSalesUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c90);
}


/* LawnApp::IsTransGenosisUIValid() */

bool __thiscall LawnApp::IsTransGenosisUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2cb0) != 0;
}


/* LawnApp::GetTransGenosisUI() const */

undefined8 __thiscall LawnApp::GetTransGenosisUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2cb0);
}


/* LawnApp::IsGeilivableLotteryValid() */

bool __thiscall LawnApp::IsGeilivableLotteryValid(LawnApp *this)

{
  return *(long *)(this + 0x2c98) != 0;
}


/* LawnApp::GetGeilivableLottery() const */

undefined8 __thiscall LawnApp::GetGeilivableLottery(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c98);
}


/* LawnApp::SetGMInfoExtraType(std::string) */

void LawnApp::SetGMInfoExtraType(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x2f48);
  return;
}


/* LawnApp::SetCustomLevelEvaluationParam(float) */

void __thiscall LawnApp::SetCustomLevelEvaluationParam(LawnApp *this,float param_1)

{
  *(float *)(this + 0x2f78) = param_1;
  return;
}


/* LawnApp::SetUsingSpecialBackground(bool) */

void __thiscall LawnApp::SetUsingSpecialBackground(LawnApp *this,bool param_1)

{
  this[0x2f7c] = (LawnApp)param_1;
  return;
}


/* LawnApp::SetAdsTotalRateMin(int) */

void __thiscall LawnApp::SetAdsTotalRateMin(LawnApp *this,int param_1)

{
  *(int *)(this + 0x2f80) = param_1;
  return;
}


/* LawnApp::SetAdsTotalRateMax(int) */

void __thiscall LawnApp::SetAdsTotalRateMax(LawnApp *this,int param_1)

{
  *(int *)(this + 0x2f84) = param_1;
  return;
}


/* LawnApp::SetMaxAdsPerDay(int) */

void __thiscall LawnApp::SetMaxAdsPerDay(LawnApp *this,int param_1)

{
  *(int *)(this + 0x2f88) = param_1;
  return;
}


/* LawnApp::GetMetricsCollector() */

undefined8 __thiscall LawnApp::GetMetricsCollector(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ef8);
}


/* LawnApp::GetDailyAchievementInfo() */

LawnApp * __thiscall LawnApp::GetDailyAchievementInfo(LawnApp *this)

{
  return this + 0x3240;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::SetAdsMissionLimit(int) */

void __thiscall LawnApp::SetAdsMissionLimit(LawnApp *this,int param_1)

{
  int local_14;
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  std::string::append((string *)(this + 0x2f68),"egypt",___stack_chk_guard);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  thunk_FUN_054757c0((string *)(this + 0x2f68),asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::SetAdsMapLimit(int) */

void __thiscall LawnApp::SetAdsMapLimit(LawnApp *this,int param_1)

{
  int local_14;
  string asStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = param_1;
  std::string::append((string *)(this + 0x2f70),"egypt",___stack_chk_guard);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_14);
  thunk_FUN_054757c0((string *)(this + 0x2f70),asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::SetADBlackList(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::SetADBlackList(LawnApp *this,vector *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3670),param_1);
  return;
}


/* LawnApp::SetWatchADBlackList(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::SetWatchADBlackList(LawnApp *this,vector *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3688),param_1);
  return;
}


/* LawnApp::IsAccessoryBonusUIValid() */

bool __thiscall LawnApp::IsAccessoryBonusUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d60) != 0;
}


/* LawnApp::GetAccessoryBonusUI() const */

undefined8 __thiscall LawnApp::GetAccessoryBonusUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d60);
}


/* LawnApp::IsGoldenEggUIValid() */

bool __thiscall LawnApp::IsGoldenEggUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d70) != 0;
}


/* LawnApp::GetGoldenEggUI() const */

undefined8 __thiscall LawnApp::GetGoldenEggUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d70);
}


/* LawnApp::IsCoinStoreShowing() */

bool __thiscall LawnApp::IsCoinStoreShowing(LawnApp *this)

{
  return *(long *)(this + 0x2be0) != 0;
}


/* LawnApp::GetPaymentResultInfo() */

LawnApp * __thiscall LawnApp::GetPaymentResultInfo(LawnApp *this)

{
  return this + 0x3588;
}


/* LawnApp::SetProfileCreatedTime(std::string const&) */

void LawnApp::SetProfileCreatedTime(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x3660);
  return;
}


/* LawnApp::SetIsNewUser(bool) */

void __thiscall LawnApp::SetIsNewUser(LawnApp *this,bool param_1)

{
  this[0x3668] = (LawnApp)param_1;
  return;
}


/* LawnApp::Init() */

void __thiscall LawnApp::Init(LawnApp *this)

{
  (**(code **)(*(long *)this + 0x468))(this,0,0);
  return;
}


/* LawnApp::PlaySample(Sexy::SoundResource*) */

void LawnApp::PlaySample(SoundResource *param_1)

{
  return;
}


/* LawnApp::PlaySample(Sexy::SoundResource*, int) */

void LawnApp::PlaySample(SoundResource *param_1,int param_2)

{
  return;
}


/* LawnApp::IsUIOrientationAllowed(Sexy::UI_ORIENTATION) */

bool __thiscall LawnApp::IsUIOrientationAllowed(undefined8 param_1,int param_2)

{
  return param_2 - 3U < 2;
}


/* LawnApp::GetButtonReleaseExpansionPixels() */

undefined8 LawnApp::GetButtonReleaseExpansionPixels(void)

{
  return 0xf;
}


/* LawnApp::ButtonDepress(int) */

void __thiscall LawnApp::ButtonDepress(LawnApp *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 % 10000 - 2000U < 1000) {
    iVar1 = param_1 + -2000;
    pcVar2 = *(code **)(*(long *)this + 0x280);
  }
  else {
    if (999 < param_1 % 10000 - 3000U) {
      return;
    }
    iVar1 = param_1 + -3000;
    pcVar2 = *(code **)(*(long *)this + 0x280);
  }
  (*pcVar2)(this,iVar1);
  return;
}


/* LawnApp::SetAndroidSDKInitStatus(int, int) */

void __thiscall LawnApp::SetAndroidSDKInitStatus(LawnApp *this,int param_1,int param_2)

{
  *(int *)(this + 0x3658) = param_1;
  *(int *)(this + 0x365c) = param_2;
  return;
}


/* LawnApp::URLOpenSucceeded(std::string const&) */

void LawnApp::URLOpenSucceeded(string *param_1)

{
  Sexy::SexyApp::URLOpenSucceeded(param_1);
  (**(code **)(*(long *)param_1 + 0x280))(param_1,0);
  return;
}


/* LawnApp::Start() */

void __thiscall LawnApp::Start(LawnApp *this)

{
  if (this[0x6d1] != (LawnApp)0x0) {
    return;
  }
  Sexy::SexyAppBase::Start((SexyAppBase *)this);
  return;
}


/* LawnApp::SetMasterVolume(double) */

void __thiscall LawnApp::SetMasterVolume(LawnApp *this,double param_1)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    Sexy::InteractiveSoundManager::SetMasterVolume
              (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
    return;
  }
  return;
}


/* LawnApp::SetMusicVolume(double) */

void __thiscall LawnApp::SetMusicVolume(LawnApp *this,double param_1)

{
  *(double *)(this + 0xe0) = param_1;
  Sexy::InteractiveSoundManager::SetMusicVolume
            (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
  return;
}


/* LawnApp::SetSfxVolume(double) */

void __thiscall LawnApp::SetSfxVolume(LawnApp *this,double param_1)

{
  if (*(InteractiveSoundManager **)(this + 0x648) != (InteractiveSoundManager *)0x0) {
    Sexy::InteractiveSoundManager::SetSfxVolume
              (*(InteractiveSoundManager **)(this + 0x648),(float)param_1);
  }
  *(double *)(this + 0xe8) = param_1;
  return;
}


/* LawnApp::SetFPS(bool) */

void __thiscall LawnApp::SetFPS(LawnApp *this,bool param_1)

{
  Sexy::SexyAppBase::SetFPS(SUB81(this,0));
  this[0x36a0] = (LawnApp)param_1;
  return;
}


/* LawnApp::AppBecomingForeground() */

void LawnApp::AppBecomingForeground(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  if ((ulong)(tVar1 - DAT_06ba7720) < 0x3c) {
    return;
  }
  BehaviorLog::needRefreshSession();
  return;
}


/* LawnApp::KillPVZ2Dialog() */

void __thiscall LawnApp::KillPVZ2Dialog(LawnApp *this)

{
  if (*(long *)(this + 0x2e18) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e18));
    *(undefined8 *)(this + 0x2e18) = 0;
  }
  return;
}


/* LawnApp::KillShareDialog() */

void __thiscall LawnApp::KillShareDialog(LawnApp *this)

{
  long *plVar1;
  
  KillPVZ2Dialog(gLawnApp);
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  return;
}


/* LawnApp::KillAccessoryAwardDialog() */

void LawnApp::KillAccessoryAwardDialog(void)

{
  KillPVZ2Dialog(gLawnApp);
  return;
}


/* LawnApp::onCopySaveWarningOK() */

void __thiscall LawnApp::onCopySaveWarningOK(LawnApp *this)

{
  KillPVZ2Dialog(this);
  this[0x302a] = (LawnApp)0x1;
  return;
}


/* LawnApp::onCancelExitGame() */

void LawnApp::onCancelExitGame(void)

{
  KillPVZ2Dialog(gLawnApp);
  return;
}


/* LawnApp::DoSwitchAccessory() */

void __thiscall LawnApp::DoSwitchAccessory(LawnApp *this)

{
  KillPVZ2Dialog(gLawnApp);
  PlantAccessoryUI::DoSwitchTargetAccessory(*(PlantAccessoryUI **)(this + 0x2ab0));
  return;
}


/* LawnApp::YetiEscapeRestartLevel() */

void __thiscall LawnApp::YetiEscapeRestartLevel(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::RestartLevel(*(Board **)(this + 0x9f0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DoDialog(int, bool, std::wstring const&, std::wstring const&, std::wstring const&, int)
    */

void __thiscall
LawnApp::DoDialog(LawnApp *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,
                 wstring *param_5,int param_6)

{
  undefined8 uVar1;
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_3);
  TodStringTranslate(param_4);
  TodStringTranslate(param_5);
  uVar1 = Sexy::SexyAppBase::DoDialog
                    ((SexyAppBase *)this,param_1,param_2,awStack_20,awStack_18,awStack_10,param_6);
  if (*(long *)(*(long *)(this + 0x360) + 200) == 0) {
    *(undefined8 *)(*(long *)(this + 0x360) + 200) = uVar1;
  }
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LawnApp::NewDialog(int, bool, std::wstring const&, std::wstring const&, std::wstring const&, int)
    */

LawnDialog * __thiscall
LawnApp::NewDialog(LawnApp *this,int param_1,bool param_2,wstring *param_3,wstring *param_4,
                  wstring *param_5,int param_6)

{
  LawnDialog *this_00;
  
  this_00 = ::operator_new(0x238);
  LawnDialog::LawnDialog(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,(*(int *)(gLawnApp + 0xd4) - *(int *)(this_00 + 0x50)) / 2,
             (*(int *)(gLawnApp + 0xd8) - *(int *)(this_00 + 0x54)) / 2,*(int *)(this_00 + 0x50),
             *(int *)(this_00 + 0x54));
  return this_00;
}


/* LawnApp::HandleWwiseError() */

void __thiscall LawnApp::HandleWwiseError(LawnApp *this)

{
  Sexy::OutputDebugStrF((wchar_t *)"LawnApp::HandleWwiseError \n");
  this[0x302b] = (LawnApp)0x1;
  return;
}


/* LawnApp::onFaiicck() */

void LawnApp::onFaiicck(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x100));
    return;
  }
  return;
}


/* LawnApp::onMatikck() */

void LawnApp::onMatikck(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallVoidMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x100));
    return;
  }
  return;
}


/* LawnApp::UpdateApp() */

undefined8 LawnApp::UpdateApp(void)

{
  SexyAppBase *in_x0;
  undefined8 uVar1;
  
  if (in_x0[0x6b6] != (SexyAppBase)0x0) {
    nop();
  }
  uVar1 = Sexy::SexyAppBase::UpdateApp(in_x0);
  if ((in_x0[0x6b6] != (SexyAppBase)0x0) && (in_x0[0x3ae] == (SexyAppBase)0x0)) {
    nop();
    return uVar1;
  }
  return uVar1;
}


/* LawnApp::onGameCenterAuthenticationChanged(bool) */

void __thiscall LawnApp::onGameCenterAuthenticationChanged(LawnApp *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  nop();
  return;
}


/* LawnApp::onWatchDaveShopAds(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall LawnApp::onWatchDaveShopAds(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    return;
  }
  lVar2 = ProfileUtils::Profile();
  iVar1 = FUN_0325d6b0(*(undefined4 *)(lVar2 + 0x1368));
  FUN_0325d6b4(lVar2 + 0x1368,iVar1 + 1);
  return;
}


/* LawnApp::LoadingThreadProc() */

void __thiscall LawnApp::LoadingThreadProc(LawnApp *this)

{
  _JavaVM *this_00;
  
  if (*(TitleScreen **)(this + 0x2a20) != (TitleScreen *)0x0) {
    TitleScreen::LoadRsbsProc(*(TitleScreen **)(this + 0x2a20));
  }
  if (this[0x6b6] != (LawnApp)0x0) {
    return;
  }
  this_00 = (_JavaVM *)Android::Util::GetJVM();
  _JavaVM::DetachCurrentThread(this_00);
  return;
}


/* LawnApp::KillPlantRewardDialog() */

void __thiscall LawnApp::KillPlantRewardDialog(LawnApp *this)

{
  long *plVar1;
  
  KillPVZ2Dialog(gLawnApp);
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LawnApp::onConfirmExitGame() */

void LawnApp::onConfirmExitGame(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Post((_func_void *)gMessageRouter);
  KillPVZ2Dialog(gLawnApp);
  Android::Device::ExitApp();
  return;
}


/* LawnApp::WechatShareSuccess() */

void LawnApp::WechatShareSuccess(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LawnApp::WeChatShareFailed() */

void LawnApp::WeChatShareFailed(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LawnApp::IsStoreUIShowing() */

bool __thiscall LawnApp::IsStoreUIShowing(LawnApp *this)

{
  return *(long *)(this + 0x2a38) != 0;
}


/* LawnApp::IsGLDeliveryUIValid() */

bool __thiscall LawnApp::IsGLDeliveryUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2cd8) != 0;
}


/* LawnApp::IsGLStoneLotInfoWidget() */

bool __thiscall LawnApp::IsGLStoneLotInfoWidget(LawnApp *this)

{
  return *(long *)(this + 0x2ce0) != 0;
}


/* LawnApp::IsWorldPreviewShowing() */

bool __thiscall LawnApp::IsWorldPreviewShowing(LawnApp *this)

{
  return *(long *)(this + 0x2df0) != 0;
}


/* LawnApp::IsNewerPresentUIShowing() */

bool __thiscall LawnApp::IsNewerPresentUIShowing(LawnApp *this)

{
  return *(long *)(this + 0x2bf8) != 0;
}


/* LawnApp::IsReviveUIShowing() */

bool __thiscall LawnApp::IsReviveUIShowing(LawnApp *this)

{
  return *(long *)(this + 0x2d78) != 0;
}


/* LawnApp::IsFestivalEntranceUIShowing() */

bool __thiscall LawnApp::IsFestivalEntranceUIShowing(LawnApp *this)

{
  return *(long *)(this + 0x2d88) != 0;
}


/* LawnApp::SetAdsMapRate(int) */

void __thiscall LawnApp::SetAdsMapRate(LawnApp *this,int param_1)

{
  *(int *)(this + 0x2f60) = param_1;
  return;
}


/* LawnApp::GetAdsMapRate() */

undefined4 __thiscall LawnApp::GetAdsMapRate(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f60);
}


/* LawnApp::SetCurrentAdsMapRate(int) */

void __thiscall LawnApp::SetCurrentAdsMapRate(LawnApp *this,int param_1)

{
  *(int *)(this + 0x2f64) = param_1;
  return;
}


/* LawnApp::GetCurrentAdsMapRate() */

undefined4 __thiscall LawnApp::GetCurrentAdsMapRate(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f64);
}


/* LawnApp::GetDaveShopAdsRate() */

undefined4 __thiscall LawnApp::GetDaveShopAdsRate(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f94);
}


/* LawnApp::setProfileOpened(bool) */

void __thiscall LawnApp::setProfileOpened(LawnApp *this,bool param_1)

{
  this[0x9d8] = (LawnApp)param_1;
  return;
}


/* LawnApp::isProfileOpened() */

LawnApp __thiscall LawnApp::isProfileOpened(LawnApp *this)

{
  return this[0x9d8];
}


/* LawnApp::setSyncProfileSuccess(bool) */

void __thiscall LawnApp::setSyncProfileSuccess(LawnApp *this,bool param_1)

{
  this[0x9e8] = (LawnApp)param_1;
  return;
}


/* LawnApp::setProfileSyncing(bool) */

void __thiscall LawnApp::setProfileSyncing(LawnApp *this,bool param_1)

{
  this[0x9e9] = (LawnApp)param_1;
  return;
}


/* LawnApp::canDealProfile() */

LawnApp __thiscall LawnApp::canDealProfile(LawnApp *this)

{
  return this[0x9ea];
}


/* LawnApp::setProfileConnected(bool) */

void __thiscall LawnApp::setProfileConnected(LawnApp *this,bool param_1)

{
  this[0x9ec] = (LawnApp)param_1;
  return;
}


/* LawnApp::UIOrientationChanged(Sexy::UI_ORIENTATION) */

void LawnApp::UIOrientationChanged(LawnApp *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x360))();
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(long *)param_1 + 0x368))(param_1);
    lVar5 = GetWorldMap(param_1);
    if (lVar5 != 0) {
      plVar6 = (long *)Lua::CUIDialog::GetDialog("DaveShopBtn");
      plVar7 = (long *)Lua::CUIDialog::GetDialog("MonthlyCardBtn");
      iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
      iVar4 = EA::Text::PolygonFont::GetFontType();
      if (iVar3 == iVar4) {
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x1a8))
                    (plVar6,iVar2 + (int)plVar6[9],*(undefined4 *)((long)plVar6 + 0x4c));
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x1a8))
                    (plVar7,iVar2 + (int)plVar7[9],*(undefined4 *)((long)plVar7 + 0x4c));
        }
      }
      else {
        iVar3 = (**(code **)(*gLawnApp + 0xd8))(gLawnApp);
        iVar4 = Reflection::RFunctionType::StaticGetTypeCategory();
        if (iVar3 == iVar4) {
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x1a8))
                      (plVar6,(int)plVar6[9] - iVar2,*(undefined4 *)((long)plVar6 + 0x4c));
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x1a8))
                      (plVar7,(int)plVar7[9] - iVar2,*(undefined4 *)((long)plVar7 + 0x4c));
          }
        }
      }
    }
    GameStateMgr::GetState(gGameStateMgr);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LawnApp::GetTransitionOverlay() */

undefined8 __thiscall LawnApp::GetTransitionOverlay(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e08);
}


/* LawnApp::GetDoneLoadingProfiles() */

LawnApp __thiscall LawnApp::GetDoneLoadingProfiles(LawnApp *this)

{
  return this[0x9ed];
}


/* LawnApp::GetLostNetActivityConfig() */

LawnApp * __thiscall LawnApp::GetLostNetActivityConfig(LawnApp *this)

{
  return this + 0x3438;
}


/* LawnApp::SetPlantAdventureTabIndex(int) */

void __thiscall LawnApp::SetPlantAdventureTabIndex(LawnApp *this,int param_1)

{
  *(int *)(this + 0x34c8) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetStartingResolution() */

void LawnApp::GetStartingResolution(void)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Sexy::SexyAppBase::GetNativeScreenSize();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0x4b0);
}


/* LawnApp::GetDeviceType() */

undefined8 LawnApp::GetDeviceType(void)

{
  UserPrefs *in_x0;
  undefined8 in_x8;
  
  UserPrefs::GetDeviceType(in_x0);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetPlatformName() */

void LawnApp::GetPlatformName(void)

{
  char cVar1;
  wchar16 *in_x0;
  char *__s;
  long lVar2;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string *in_x8;
  string asStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (in_x0,___stack_chk_guard,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    __s = (char *)(**(code **)(**(long **)(Sexy::gSexyAppBase + 0x60) + 0x28))
                            (*(long **)(Sexy::gSexyAppBase + 0x60),1);
    std::string::string(asStack_10,__s);
    nop();
    lVar2 = FUN_05474374(asStack_10,"iPod4",0);
    if (lVar2 == -1) {
      std::string::string(in_x8,"iphone");
      nop();
    }
    else {
      std::string::string(in_x8,"ipod4");
      nop();
    }
    std::string::~string(asStack_10);
  }
  else if ((*(int *)(in_x0 + 0x3a8) - 0x600U & 0xfffffdff) == 0) {
    std::string::string(in_x8,"ipad3");
    nop();
  }
  else {
    std::string::string(in_x8,"ipad2");
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::GetPackageName(std::string const&) */

undefined8 __thiscall LawnApp::GetPackageName(LawnApp *this,string *param_1)

{
  undefined8 in_x8;
  
  Android::Util::GetPackageName((Util *)this);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DeviceNeeds50MBResolutionChange() */

void LawnApp::DeviceNeeds50MBResolutionChange(void)

{
  undefined1 uVar1;
  char *__s;
  LineBreakCategory *pLVar2;
  LineBreakCategory *pLVar3;
  LineBreakCategory *in_x4;
  undefined1 auVar4 [16];
  string asStack_10 [8];
  long local_8;
  
  pLVar3 = (LineBreakCategory *)&__stack_chk_guard;
  uVar1 = 1;
  local_8 = ___stack_chk_guard;
  __s = (char *)(**(code **)(**(long **)(Sexy::gSexyAppBase + 0x60) + 0x28))
                          (*(long **)(Sexy::gSexyAppBase + 0x60),1);
  std::string::string(asStack_10,__s);
  nop();
  pLVar2 = (LineBreakCategory *)0x0;
  auVar4 = FUN_05474374(asStack_10,"iPod4");
  if (auVar4._0_8_ == -1) {
    uVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)0xffffffffffffffff,auVar4._8_8_,pLVar2,pLVar3,in_x4);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LawnApp::ShowTitleScreen() */

void __thiscall LawnApp::ShowTitleScreen(LawnApp *this)

{
  TitleScreen *this_00;
  
  this_00 = ::operator_new(0x1a8);
  TitleScreen::TitleScreen(this_00);
  *(TitleScreen **)(this + 0x2a20) = this_00;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a20));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a20));
  return;
}


/* LawnApp::IsTitleScreenFinished() */

void __thiscall LawnApp::IsTitleScreenFinished(LawnApp *this)

{
  if (*(TitleScreen **)(this + 0x2a20) != (TitleScreen *)0x0) {
    TitleScreen::IsTitleScreenFinished(*(TitleScreen **)(this + 0x2a20));
    return;
  }
  return;
}


/* LawnApp::KillTitleScreen() */

void __thiscall LawnApp::KillTitleScreen(LawnApp *this)

{
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a20));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a20));
  *(undefined8 *)(this + 0x2a20) = 0;
  return;
}


/* LawnApp::KillMainMenu() */

void __thiscall LawnApp::KillMainMenu(LawnApp *this)

{
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e10));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e10));
  *(undefined8 *)(this + 0x2e10) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::KillBoard() */

void __thiscall LawnApp::KillBoard(LawnApp *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9f0));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x9f0));
  *(undefined8 *)(this + 0x9f0) = 0;
  std::string::string(asStack_10,"Board Shown");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::KillWorldMap() */

void __thiscall LawnApp::KillWorldMap(LawnApp *this)

{
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapLuaVirtualBtns");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetVisible(this_00,false);
  }
  WorldMap::PurgeWorldMapActions(*(WorldMap **)(this + 0x2de8));
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de8));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2de8));
  *(undefined8 *)(this + 0x2de8) = 0;
  std::string::string(asStack_10,"WorldMap Shown");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillWorldPreview() */

void __thiscall LawnApp::KillWorldPreview(LawnApp *this)

{
  if (*(long *)(this + 0x2a18) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a18));
    *(undefined8 *)(this + 0x2a18) = 0;
  }
  return;
}


/* LawnApp::KillWorldUnlock() */

void __thiscall LawnApp::KillWorldUnlock(LawnApp *this)

{
  if (*(long *)(this + 0x2df8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2df8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2df8));
    *(undefined8 *)(this + 0x2df8) = 0;
  }
  return;
}


/* LawnApp::KillGetPlantBagUI() */

void __thiscall LawnApp::KillGetPlantBagUI(LawnApp *this)

{
  if (*(long *)(this + 0x2db8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2db8));
    *(undefined8 *)(this + 0x2db8) = 0;
  }
  return;
}


/* LawnApp::KillGetNewerBagUI() */

void __thiscall LawnApp::KillGetNewerBagUI(LawnApp *this)

{
  if (*(long *)(this + 0x2dc0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2dc0));
    *(undefined8 *)(this + 0x2dc0) = 0;
  }
  return;
}


/* LawnApp::GetGemsRestoreUI() */

undefined8 __thiscall LawnApp::GetGemsRestoreUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2dc8);
}


/* LawnApp::KillGetGemsRestoreUI() */

void __thiscall LawnApp::KillGetGemsRestoreUI(LawnApp *this)

{
  if (*(long *)(this + 0x2dc8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2dc8));
    *(undefined8 *)(this + 0x2dc8) = 0;
  }
  return;
}


/* LawnApp::KillNetConnectingUI() */

void __thiscall LawnApp::KillNetConnectingUI(LawnApp *this)

{
  if (*(long *)(this + 0x2dd0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2dd0));
    *(undefined8 *)(this + 0x2dd0) = 0;
  }
  return;
}


/* LawnApp::onEASquaredFlowEnded(std::string const&, int, int) */

void LawnApp::onEASquaredFlowEnded(string *param_1,int param_2,int param_3)

{
  if (*(long *)(param_1 + 0x2dd0) != 0) {
    (**(code **)(**(long **)(param_1 + 0x360) + 0x68))(*(long **)(param_1 + 0x360));
    (**(code **)(*(long *)param_1 + 0x150))(param_1,*(undefined8 *)(param_1 + 0x2dd0));
    *(undefined8 *)(param_1 + 0x2dd0) = 0;
  }
  return;
}


/* LawnApp::KillRewardPlantUI() */

void __thiscall LawnApp::KillRewardPlantUI(LawnApp *this)

{
  if (*(long *)(this + 0x2de0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2de0));
    *(undefined8 *)(this + 0x2de0) = 0;
  }
  return;
}


/* LawnApp::IsRechargeRewardDisplayerValid() */

bool __thiscall LawnApp::IsRechargeRewardDisplayerValid(LawnApp *this)

{
  return *(long *)(this + 0x2a40) != 0;
}


/* LawnApp::KillRechargeRewardDisplayer() */

void __thiscall LawnApp::KillRechargeRewardDisplayer(LawnApp *this)

{
  if (*(long *)(this + 0x2a40) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a40));
    *(undefined8 *)(this + 0x2a40) = 0;
  }
  return;
}


/* LawnApp::ShowStoreUI(std::string const&) */

void __thiscall LawnApp::ShowStoreUI(LawnApp *this,string *param_1)

{
  ServerTime *this_00;
  CServerTimeHandler_Store *this_01;
  
  this_00 = (ServerTime *)ServerTime::Instance();
  this_01 = ::operator_new(0x10);
  CServerTimeHandler_Store::CServerTimeHandler_Store(this_01,param_1);
  ServerTime::GetServerTimeFromNet(this_00,(CServerTimeHandler *)this_01,true);
  return;
}


/* LawnApp::SetWaitingGemCallBack(Sexy::Delegate1<bool>) */

void __thiscall LawnApp::SetWaitingGemCallBack(LawnApp *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x3038),param_2);
  return;
}


/* LawnApp::KillWaitingDialog() */

void __thiscall LawnApp::KillWaitingDialog(LawnApp *this)

{
  long *plVar1;
  
  if (*(long *)(this + 0x2e30) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e30));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e30));
    *(undefined8 *)(this + 0x2e30) = 0;
  }
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  return;
}


/* LawnApp::KillAvatarRewardDialog() */

void __thiscall LawnApp::KillAvatarRewardDialog(LawnApp *this)

{
  long *plVar1;
  
  KillPVZ2Dialog(gLawnApp);
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  return;
}


/* LawnApp::KillBuyPlantDialog() */

void __thiscall LawnApp::KillBuyPlantDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2ab8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ab8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ab8));
    *(undefined8 *)(this + 0x2ab8) = 0;
  }
  return;
}


/* LawnApp::KillBuyAvatarDialog() */

void __thiscall LawnApp::KillBuyAvatarDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2ac0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ac0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ac0));
    *(undefined8 *)(this + 0x2ac0) = 0;
  }
  return;
}


/* LawnApp::KillBuyGachaDialog() */

void __thiscall LawnApp::KillBuyGachaDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2ac8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ac8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ac8));
    *(undefined8 *)(this + 0x2ac8) = 0;
  }
  return;
}


/* LawnApp::KillBuyGiftDialog() */

void __thiscall LawnApp::KillBuyGiftDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2ad0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ad0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ad0));
    *(undefined8 *)(this + 0x2ad0) = 0;
  }
  return;
}


/* LawnApp::KillChooseActivityLevelsDialog() */

void __thiscall LawnApp::KillChooseActivityLevelsDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b48) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b48));
    *(undefined8 *)(this + 0x2b48) = 0;
  }
  return;
}


/* LawnApp::KillDailyActivityChooseDialog() */

void __thiscall LawnApp::KillDailyActivityChooseDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b88) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b88));
    *(undefined8 *)(this + 0x2b88) = 0;
  }
  return;
}


/* LawnApp::KillChallengeChooseDialog() */

void __thiscall LawnApp::KillChallengeChooseDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b90) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b90));
    *(undefined8 *)(this + 0x2b90) = 0;
  }
  return;
}


/* LawnApp::KillShopChooseDialog() */

void __thiscall LawnApp::KillShopChooseDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b98) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b98));
    *(undefined8 *)(this + 0x2b98) = 0;
  }
  return;
}


/* LawnApp::KillWelfareChooseDialog() */

void __thiscall LawnApp::KillWelfareChooseDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2ba0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ba0));
    *(undefined8 *)(this + 0x2ba0) = 0;
  }
  return;
}


/* LawnApp::ShowScrollBanner() */

void __thiscall LawnApp::ShowScrollBanner(LawnApp *this)

{
  WorldMap_ScrollBannerButton *this_00;
  long *plVar1;
  
  if (*(long *)(this + 0x2ba8) == 0) {
    this_00 = ::operator_new(0x210);
    WorldMap_ScrollBannerButton::WorldMap_ScrollBannerButton(this_00);
    *(WorldMap_ScrollBannerButton **)(this + 0x2ba8) = this_00;
    plVar1 = *(long **)(this + 0x2de8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,this_00);
      WorldMap_ScrollBannerButton::RequestNetwork();
      return;
    }
  }
  return;
}


/* LawnApp::KillScrollBanner() */

void __thiscall LawnApp::KillScrollBanner(LawnApp *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2ba8);
  if (lVar1 != 0) {
    if (*(long **)(this + 0x2de8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2de8) + 0x68))();
      lVar1 = *(long *)(this + 0x2ba8);
    }
    (**(code **)(*(long *)this + 0x150))(this,lVar1);
    *(undefined8 *)(this + 0x2ba8) = 0;
  }
  return;
}


/* LawnApp::SetScrollBannerVisible(bool) */

void __thiscall LawnApp::SetScrollBannerVisible(LawnApp *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x2ba8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  return;
}


/* LawnApp::ShowMarqueeView() */

void __thiscall LawnApp::ShowMarqueeView(LawnApp *this)

{
  WorldMap_MarqueeView *this_00;
  long *plVar1;
  
  if (*(long *)(this + 0x2bb0) == 0) {
    this_00 = ::operator_new(0x160);
    WorldMap_MarqueeView::WorldMap_MarqueeView(this_00);
    *(WorldMap_MarqueeView **)(this + 0x2bb0) = this_00;
    plVar1 = *(long **)(this + 0x2de8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,this_00);
      WorldMap_MarqueeView::RequestNetwork(*(WorldMap_MarqueeView **)(this + 0x2bb0));
      return;
    }
  }
  return;
}


/* LawnApp::KillMarqueeView() */

void __thiscall LawnApp::KillMarqueeView(LawnApp *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2bb0);
  if (lVar1 != 0) {
    if (*(long **)(this + 0x2de8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2de8) + 0x68))();
      lVar1 = *(long *)(this + 0x2bb0);
    }
    (**(code **)(*(long *)this + 0x150))(this,lVar1);
    *(undefined8 *)(this + 0x2bb0) = 0;
  }
  return;
}


/* LawnApp::SetMarqueeViewVisible(bool) */

void __thiscall LawnApp::SetMarqueeViewVisible(LawnApp *this,bool param_1)

{
  if (param_1) {
    if (*(long *)(this + 0x2bb0) == 0) {
      ShowMarqueeView(this);
      return;
    }
  }
  else if (*(long *)(this + 0x2bb0) != 0) {
    KillMarqueeView(this);
    return;
  }
  return;
}


/* LawnApp::KillActivityHome() */

void __thiscall LawnApp::KillActivityHome(LawnApp *this)

{
  if (*(long *)(this + 0x2b68) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b68));
    *(undefined8 *)(this + 0x2b68) = 0;
  }
  return;
}


/* LawnApp::KillActivityHomeExtra() */

void __thiscall LawnApp::KillActivityHomeExtra(LawnApp *this)

{
  if (*(long *)(this + 0x2b70) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b70));
    *(undefined8 *)(this + 0x2b70) = 0;
  }
  return;
}


/* LawnApp::KillActivityCollection() */

void __thiscall LawnApp::KillActivityCollection(LawnApp *this)

{
  if (*(long *)(this + 0x2b78) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b78));
    *(undefined8 *)(this + 0x2b78) = 0;
  }
  return;
}


/* LawnApp::KillNewPlayerCollection() */

void __thiscall LawnApp::KillNewPlayerCollection(LawnApp *this)

{
  if (*(long *)(this + 0x2b80) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b80));
    *(undefined8 *)(this + 0x2b80) = 0;
  }
  return;
}


/* LawnApp::KillChoosePlantsDialog() */

void __thiscall LawnApp::KillChoosePlantsDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b50) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b50));
    *(undefined8 *)(this + 0x2b50) = 0;
  }
  return;
}


/* LawnApp::KillChooseWelfareDialog() */

void __thiscall LawnApp::KillChooseWelfareDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b58) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b58));
    *(undefined8 *)(this + 0x2b58) = 0;
  }
  return;
}


/* LawnApp::KillChooseRiddlesDialog() */

void __thiscall LawnApp::KillChooseRiddlesDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2b60) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b60));
    *(undefined8 *)(this + 0x2b60) = 0;
  }
  return;
}


/* LawnApp::KillCustomLevelView() */

void __thiscall LawnApp::KillCustomLevelView(LawnApp *this)

{
  if (*(long *)(this + 0x2bc8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bc8));
    *(undefined8 *)(this + 0x2bc8) = 0;
  }
  return;
}


/* LawnApp::KillPlantFamilyUI() */

void __thiscall LawnApp::KillPlantFamilyUI(LawnApp *this)

{
  if (*(long *)(this + 0x2af0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2af0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2af0));
    *(undefined8 *)(this + 0x2af0) = 0;
  }
  return;
}


/* LawnApp::KillPlantLevelUpInfoDialog() */

void __thiscall LawnApp::KillPlantLevelUpInfoDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b28) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b28));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b28));
    *(undefined8 *)(this + 0x2b28) = 0;
  }
  return;
}


/* LawnApp::KillPlantAvatarInfoDialog() */

void __thiscall LawnApp::KillPlantAvatarInfoDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b18) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b18));
    *(undefined8 *)(this + 0x2b18) = 0;
  }
  return;
}


/* LawnApp::KillPlantAvatarPackageView() */

void __thiscall LawnApp::KillPlantAvatarPackageView(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b20) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b20));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b20));
    *(undefined8 *)(this + 0x2b20) = 0;
  }
  return;
}


/* LawnApp::KillPlantLevelUpCheckDialog() */

void __thiscall LawnApp::KillPlantLevelUpCheckDialog(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b30) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b30));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b30));
    *(undefined8 *)(this + 0x2b30) = 0;
  }
  return;
}


/* LawnApp::KillChristmasLotteryReward() */

void __thiscall LawnApp::KillChristmasLotteryReward(LawnApp *this)

{
  if (*(long *)(this + 0x2e78) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e78));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e78));
    *(undefined8 *)(this + 0x2e78) = 0;
  }
  return;
}


/* LawnApp::KillArenaEndingUI() */

void __thiscall LawnApp::KillArenaEndingUI(LawnApp *this)

{
  if (*(long *)(this + 0x2e38) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e38));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e38));
    *(undefined8 *)(this + 0x2e38) = 0;
  }
  return;
}


/* LawnApp::KillPVPMapUI() */

void __thiscall LawnApp::KillPVPMapUI(LawnApp *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x2e88) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(long *)(this + 0x2e88) + 8);
    lVar1 = *(long *)(this + 0x2e88) + 8;
    if (*(long *)(this + 0x2e88) == 0) {
      lVar1 = 0;
    }
    (**(code **)(*(long *)this + 0x150))(this,lVar1);
    *(undefined8 *)(this + 0x2e88) = 0;
  }
  return;
}


/* LawnApp::SetHasShownSpringGiftUI() */

void __thiscall LawnApp::SetHasShownSpringGiftUI(LawnApp *this)

{
  this[0x2f20] = (LawnApp)0x1;
  return;
}


/* LawnApp::HasShownSpringGiftUI() */

LawnApp __thiscall LawnApp::HasShownSpringGiftUI(LawnApp *this)

{
  return this[0x2f20];
}


/* LawnApp::IsGettingSpringGift() */

LawnApp __thiscall LawnApp::IsGettingSpringGift(LawnApp *this)

{
  return this[0x2f30];
}


/* LawnApp::GettingSpringGift() */

void __thiscall LawnApp::GettingSpringGift(LawnApp *this)

{
  this[0x2f30] = (LawnApp)0x1;
  return;
}


/* LawnApp::GotSpringGift() */

void __thiscall LawnApp::GotSpringGift(LawnApp *this)

{
  this[0x2f30] = (LawnApp)0x0;
  return;
}


/* LawnApp::KillPlantSkillTipsUI() */

void __thiscall LawnApp::KillPlantSkillTipsUI(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b38) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b38));
    *(undefined8 *)(this + 0x2b38) = 0;
  }
  return;
}


/* LawnApp::KillPlantStarLevelUpAnimUI() */

void __thiscall LawnApp::KillPlantStarLevelUpAnimUI(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2b40) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b40));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b40));
    *(undefined8 *)(this + 0x2b40) = 0;
  }
  return;
}


/* LawnApp::KillLotteryResultUI() */

void __thiscall LawnApp::KillLotteryResultUI(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (*(long *)(this + 0x2ea0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ea0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ea0));
    *(undefined8 *)(this + 0x2ea0) = 0;
  }
  return;
}


/* LawnApp::TestCanShowWorldmapButton() */

byte __thiscall LawnApp::TestCanShowWorldmapButton(LawnApp *this)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = GameStateMgr::GetState(gGameStateMgr);
  bVar1 = iVar2 == 6;
  lVar3 = GetWorldMap(this);
  if (((lVar3 != 0) && (lVar3 = FUN_0325d71c(*(undefined8 *)(lVar3 + 0x2b0)), lVar3 != 0)) &&
     ((bool)bVar1)) {
    bVar1 = FUN_0325d720(*(undefined1 *)(lVar3 + 0x7c));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* LawnApp::TestCanPopWorldmapActive() */

byte __thiscall LawnApp::TestCanPopWorldmapActive(LawnApp *this)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = TestCanShowWorldmapButton(this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = IsStoreUIShowing(this);
    bVar2 = 0;
    if (cVar1 == '\0') {
      bVar2 = IsSalesUIValid(this);
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}


/* LawnApp::GetPVZ2UIStarLevelUp() */

undefined8 __thiscall LawnApp::GetPVZ2UIStarLevelUp(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2b40);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::getGachaUI() */

void __thiscall LawnApp::getGachaUI(LawnApp *this)

{
  GachaUI *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  lVar1 = *(long *)(this + 0x2a50);
  local_8 = ___stack_chk_guard;
  if (lVar1 == 0) {
    std::string::string(asStack_10,"gacha_diamond");
    this_00 = ::operator_new(0x1b8);
    GachaUI::GachaUI(this_00,asStack_10,false);
    *(GachaUI **)(this + 0x2a50) = this_00;
    std::string::~string(asStack_10);
    nop();
    lVar1 = *(long *)(this + 0x2a50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* LawnApp::KillDailySignRewardWithTW() */

void __thiscall LawnApp::KillDailySignRewardWithTW(LawnApp *this)

{
  if (*(long *)(this + 0x9c0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x9c0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x9c0));
    *(undefined8 *)(this + 0x9c0) = 0;
  }
  return;
}


/* LawnApp::KillCodeRewardUI() */

void __thiscall LawnApp::KillCodeRewardUI(LawnApp *this)

{
  if (*(long *)(this + 0x9c8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x9c8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x9c8));
    *(undefined8 *)(this + 0x9c8) = 0;
  }
  return;
}


/* LawnApp::KillSkycityBossWarnig() */

void __thiscall LawnApp::KillSkycityBossWarnig(LawnApp *this)

{
  if (*(long *)(this + 0x2a70) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a70));
    *(undefined8 *)(this + 0x2a70) = 0;
  }
  return;
}


/* LawnApp::getPlantAccessoryUI() */

undefined8 __thiscall LawnApp::getPlantAccessoryUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ab0);
}


/* LawnApp::HasPlantAccessoryUI() */

bool __thiscall LawnApp::HasPlantAccessoryUI(LawnApp *this)

{
  return *(long *)(this + 0x2ab0) != 0;
}


/* LawnApp::KillRedPackOpenUI() */

void __thiscall LawnApp::KillRedPackOpenUI(LawnApp *this)

{
  if (*(long *)(this + 0x2a88) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a88));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a88));
    *(undefined8 *)(this + 0x2a88) = 0;
  }
  return;
}


/* LawnApp::KillOpenSurpriseBoxUI() */

void __thiscall LawnApp::KillOpenSurpriseBoxUI(LawnApp *this)

{
  if (*(long *)(this + 0x2aa8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2aa8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2aa8));
    *(undefined8 *)(this + 0x2aa8) = 0;
  }
  return;
}


/* LawnApp::KillBoxOpenUI() */

void __thiscall LawnApp::KillBoxOpenUI(LawnApp *this)

{
  if (*(long *)(this + 0x2a90) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a90));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a90));
    *(undefined8 *)(this + 0x2a90) = 0;
  }
  return;
}


/* LawnApp::KillServerBoxOpenUI() */

void __thiscall LawnApp::KillServerBoxOpenUI(LawnApp *this)

{
  if (*(long *)(this + 0x2a98) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a98));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a98));
    *(undefined8 *)(this + 0x2a98) = 0;
  }
  return;
}


/* LawnApp::KillPlantOfferOpenUI() */

void __thiscall LawnApp::KillPlantOfferOpenUI(LawnApp *this)

{
  if (*(long *)(this + 0x2aa0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2aa0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2aa0));
    *(undefined8 *)(this + 0x2aa0) = 0;
  }
  return;
}


/* LawnApp::OnQuitDangerRoomToWorldMap() */

void __thiscall LawnApp::OnQuitDangerRoomToWorldMap(LawnApp *this)

{
  KillPVZ2Dialog(this);
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowFakeAlert(int) */

void __thiscall LawnApp::ShowFakeAlert(LawnApp *this,int param_1)

{
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  Sexy aSStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[DIA_FAKE_SAVE_WARNING]");
  Sexy::StrFormat(L"\n Error Code : [%d]",aSStack_10,(ulong)(uint)param_1);
  thunk_FUN_05477668(aSStack_38,aSStack_10);
  FUN_05476c50(aSStack_10);
  Sexy::SexyStringToUTF8String(aSStack_38,extraout_x1);
  TodStringTranslate(L"[BUTTON_OK]");
  Sexy::SexyStringToUTF8String(aSStack_10,extraout_x1_00);
  FUN_05476c50(aSStack_10);
  std::string::string(asStack_20,"");
  FUN_05475d88(asStack_18,asStack_30);
  FUN_05475d88(aSStack_10,asStack_28);
  Android::UI::ShowAlertDialog(asStack_20,asStack_18,aSStack_10,0);
  std::string::~string((string *)aSStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  FUN_05476c50(aSStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ParseFormation(std::string, int*, int, int) */

void __thiscall
LawnApp::ParseFormation(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  char *__s;
  void *__src;
  size_t __n;
  char *__nptr;
  long lVar3;
  
  uVar2 = FUN_05474178(param_2);
  lVar3 = 0;
  __s = malloc(uVar2 & 0xffffffff);
  __src = (void *)FUN_0547429c(param_2);
  __n = FUN_05474178(param_2);
  memcpy(__s,__src,__n);
  strtok(__s,",");
  strtok((char *)0x0,",");
  if (0 < param_4 * param_5) {
    do {
      __nptr = strtok((char *)0x0,",");
      if (__nptr == (char *)0x0) break;
      iVar1 = atoi(__nptr);
      *(int *)(param_3 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_4 * param_5);
  }
  free(__s);
  return;
}


/* LawnApp::KillActiveEntranceUI() */

void __thiscall LawnApp::KillActiveEntranceUI(LawnApp *this)

{
  if (*(long *)(this + 0x2db0) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2db0));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2db0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2db0));
    *(undefined8 *)(this + 0x2db0) = 0;
  }
  return;
}


/* LawnApp::ShowStarLevelChallengeUI(int) */

void __thiscall LawnApp::ShowStarLevelChallengeUI(LawnApp *this,int param_1)

{
  ServerTime *this_00;
  CServerTimeHandler_Challenge *this_01;
  
  this_00 = (ServerTime *)ServerTime::Instance();
  this_01 = ::operator_new(0x10);
  CServerTimeHandler_Challenge::CServerTimeHandler_Challenge(this_01,param_1);
  ServerTime::GetServerTimeFromNet(this_00,(CServerTimeHandler *)this_01,true);
  return;
}


/* LawnApp::IsShowSevenDaysRewardView() */

bool __thiscall LawnApp::IsShowSevenDaysRewardView(LawnApp *this)

{
  return *(long *)(this + 0x2c30) != 0;
}


/* LawnApp::IsShowDailySignActivityRewardView() */

bool __thiscall LawnApp::IsShowDailySignActivityRewardView(LawnApp *this)

{
  return *(long *)(this + 0x2c38) != 0;
}


/* LawnApp::CreateHintUI() */

HintUI * __thiscall LawnApp::CreateHintUI(LawnApp *this)

{
  HintUI *this_00;
  
  this_00 = ::operator_new(0x370);
  HintUI::HintUI(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  return this_00;
}


/* LawnApp::ShowNetworkError() */

void __thiscall LawnApp::ShowNetworkError(LawnApp *this)

{
  HintUI *this_00;
  
  this_00 = (HintUI *)CreateHintUI(this);
  if (this_00 != (HintUI *)0x0) {
    HintUI::DefaultUnconnectInit(this_00);
    HintUI::ShowHintUI(this_00);
    return;
  }
  return;
}


/* LawnApp::ShowBonus(int, int) */

void __thiscall LawnApp::ShowBonus(LawnApp *this,int param_1,int param_2)

{
  HintUI *this_00;
  
  this_00 = (HintUI *)CreateHintUI(this);
  if (this_00 != (HintUI *)0x0) {
    HintUI::BonusInit(this_00);
    HintUI::SetBonus(this_00,param_1,param_2);
    HintUI::ShowHintUI(this_00);
    return;
  }
  return;
}


/* LawnApp::IsRedeemRewardUIValid() */

undefined1 __thiscall LawnApp::IsRedeemRewardUIValid(LawnApp *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x2dd8) != 0) {
    uVar1 = *(undefined1 *)(*(long *)(this + 0x2dd8) + 0x6c);
  }
  return uVar1;
}


/* LawnApp::KillJoustLeagueInfoScreen() */

void __thiscall LawnApp::KillJoustLeagueInfoScreen(LawnApp *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x2c58);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,0,0);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c58));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c58));
    *(undefined8 *)(this + 0x2c58) = 0;
  }
  return;
}


/* LawnApp::GoldenEggHasBonus() */

void __thiscall LawnApp::GoldenEggHasBonus(LawnApp *this)

{
  if (*(GoldenEggOpenUI **)(this + 0x2d68) != (GoldenEggOpenUI *)0x0) {
    GoldenEggOpenUI::HasBonus(*(GoldenEggOpenUI **)(this + 0x2d68));
    return;
  }
  return;
}


/* LawnApp::EnableCoinStoreTutorial(bool) */

void __thiscall LawnApp::EnableCoinStoreTutorial(LawnApp *this,bool param_1)

{
  if (*(CoinStore **)(this + 0x2be0) != (CoinStore *)0x0) {
    CoinStore::EnableTutorial(*(CoinStore **)(this + 0x2be0),param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPennyFuelStore() */

void __thiscall LawnApp::ShowPennyFuelStore(LawnApp *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::GenerateAdsMapRate() */

void __thiscall LawnApp::GenerateAdsMapRate(LawnApp *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x2f80);
  iVar2 = Sexy::Rand((*(int *)(this + 0x2f84) - iVar1) + 1);
  SetAdsMapRate(this,iVar1 + iVar2);
  return;
}


/* LawnApp::ShouldPopAds() */

bool __thiscall LawnApp::ShouldPopAds(LawnApp *this)

{
  bool bVar1;
  int iVar2;
  LawnApp *this_00;
  int iVar3;
  int iVar4;
  
  this_00 = gLawnApp;
  iVar3 = GetAdsMapRate(gLawnApp);
  iVar4 = GetCurrentAdsMapRate(this_00);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = (iVar4 + 1) / iVar3;
  }
  SetCurrentAdsMapRate(this_00,(iVar4 + 1) - iVar2 * iVar3);
  iVar4 = GetCurrentAdsMapRate(gLawnApp);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = iVar4 / iVar3;
  }
  bVar1 = iVar4 == iVar2 * iVar3;
  if (bVar1) {
    SetCurrentAdsMapRate(this,0);
    GenerateAdsMapRate(this);
  }
  return bVar1;
}


/* LawnApp::SetVersionLimit(std::string, std::string) */

void __thiscall LawnApp::SetVersionLimit(LawnApp *this,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_05475e00(this + 0x2f50);
  thunk_FUN_05475e00(this + 0x2f58,param_3);
  return;
}


/* LawnApp::CheckProfileOpen() */

void LawnApp::CheckProfileOpen(void)

{
  NetworkMgr *this;
  androidNetworkMsgProcess *this_00;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (androidNetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  androidNetworkMsgProcess::CheckACLogOpen(this_00);
  return;
}


/* LawnApp::IsUpdateActivity(int) */

bool __thiscall LawnApp::IsUpdateActivity(LawnApp *this,int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((param_1 - 0x2972U & 0xfffffffd) != 0) &&
     (bVar1 = param_1 == 0x297d || param_1 == 0x29c0, param_1 != 0x297d && param_1 != 0x29c0)) {
    bVar1 = param_1 - 0x2991U < 3;
  }
  return bVar1;
}


/* LawnApp::UnregisterBoardTouchGameplayObject(void*) */

void __thiscall LawnApp::UnregisterBoardTouchGameplayObject(LawnApp *this,void *param_1)

{
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::UnregisterTouchGameplayObject(*(Board **)(this + 0x9f0),param_1);
    return;
  }
  return;
}


/* LawnApp::KillNewOptionsDialog() */

void __thiscall LawnApp::KillNewOptionsDialog(LawnApp *this)

{
  Widget *pWVar1;
  
  pWVar1 = *(Widget **)(this + 0x2e28);
  *(undefined8 *)(this + 0x2e28) = 0;
  if (pWVar1 != (Widget *)0x0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360),pWVar1);
    Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(this + 0x360),pWVar1);
    (**(code **)(*(long *)this + 0x150))(this,pWVar1);
  }
  return;
}


/* LawnApp::removeSpecifiedWidget(Sexy::Widget*, bool) */

void __thiscall LawnApp::removeSpecifiedWidget(LawnApp *this,Widget *param_1,bool param_2)

{
  if (param_1 != (Widget *)0x0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (param_2) {
      Sexy::WidgetManager::RemoveBaseModal(*(WidgetManager **)(this + 0x360),param_1);
    }
    (**(code **)(*(long *)this + 0x150))(this,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::isSameDay(long, long) const */

void __thiscall LawnApp::isSameDay(LawnApp *this,long param_1,long param_2)

{
  bool bVar1;
  tm *ptVar2;
  long local_90;
  long local_88 [2];
  tm local_78;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_90 = param_2;
  local_88[0] = param_1;
  ptVar2 = localtime_r(local_88,&local_78);
  local_78.tm_sec = ptVar2->tm_sec;
  local_78.tm_min = ptVar2->tm_min;
  local_78.tm_hour = ptVar2->tm_hour;
  local_78.tm_mday = ptVar2->tm_mday;
  local_78.tm_mon = ptVar2->tm_mon;
  local_78.tm_year = ptVar2->tm_year;
  local_78.tm_wday = ptVar2->tm_wday;
  local_78.tm_yday = ptVar2->tm_yday;
  local_78.tm_isdst = ptVar2->tm_isdst;
  local_78._36_4_ = *(undefined4 *)&ptVar2->field_0x24;
  local_78.tm_gmtoff = ptVar2->tm_gmtoff;
  local_78.tm_zone = ptVar2->tm_zone;
  ptVar2 = localtime_r(&local_90,&local_40);
  local_40.tm_sec = ptVar2->tm_sec;
  local_40.tm_min = ptVar2->tm_min;
  local_40.tm_hour = ptVar2->tm_hour;
  local_40.tm_mday = ptVar2->tm_mday;
  bVar1 = false;
  local_40.tm_mon = ptVar2->tm_mon;
  local_40.tm_year = ptVar2->tm_year;
  local_40.tm_wday = ptVar2->tm_wday;
  local_40.tm_yday = ptVar2->tm_yday;
  local_40.tm_isdst = ptVar2->tm_isdst;
  local_40._36_4_ = *(undefined4 *)&ptVar2->field_0x24;
  local_40.tm_gmtoff = ptVar2->tm_gmtoff;
  local_40.tm_zone = ptVar2->tm_zone;
  if (local_78._16_8_ == local_40._16_8_) {
    bVar1 = local_78.tm_mday == local_40.tm_mday;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* LawnApp::KillEndLevelUI() */

void __thiscall LawnApp::KillEndLevelUI(LawnApp *this)

{
  if (*(long *)(this + 0x2e90) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e90));
  }
  *(undefined8 *)(this + 0x2e90) = 0;
  return;
}


/* LawnApp::KillBoardZombieAlmanacUI() */

void __thiscall LawnApp::KillBoardZombieAlmanacUI(LawnApp *this)

{
  if (*(long *)(this + 0x2e98) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e98));
  }
  *(undefined8 *)(this + 0x2e98) = 0;
  return;
}


/* LawnApp::KillGachaDisplayerDialog() */

void __thiscall LawnApp::KillGachaDisplayerDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2ea8) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ea8));
  }
  *(undefined8 *)(this + 0x2ea8) = 0;
  return;
}


/* LawnApp::KillDataErrorDialog() */

void __thiscall LawnApp::KillDataErrorDialog(LawnApp *this)

{
  long *plVar1;
  
  if (*(long *)(this + 0x2e20) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e20));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e20));
    *(undefined8 *)(this + 0x2e20) = 0;
  }
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DrawDarkeningLayer(Sexy::Graphics*, float) */

void __thiscall LawnApp::DrawDarkeningLayer(LawnApp *this,Graphics *param_1,float param_2)

{
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  Sexy::Graphics::ClearClipRect(param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,0,(int)(param_2 * 255.0));
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x724),*(int *)(this + 0x728));
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::SetWidthHeight(int) */

void __thiscall LawnApp::SetWidthHeight(LawnApp *this,int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  int local_10;
  int local_c;
  
  lVar3 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0xd4);
  iVar2 = *(int *)(this + 0xd8);
  Sexy::SexyAppBase::GetNativeScreenSize();
  *(int *)(this + 0xd8) = param_1;
  fVar5 = (float)param_1;
  *(float *)(this + 0x28dc) = fVar5;
  *(float *)(this + 0x28d8) = fVar5 * 1.3333334;
  *(int *)(this + 0xd4) = (int)((fVar5 / (float)local_c) * (float)local_10);
  Sexy::OutputDebugStrF
            ((wchar_t *)" LawnApp::SetWidthHeight mOrigScreenWidth = %d mOrigScreenHeight = %d",
             (ulong)*(uint *)(this + 0x74c),(ulong)*(uint *)(this + 0x750));
  Sexy::OutputDebugStrF
            ((wchar_t *)" LawnApp::SetWidthHeight mWidth = %d mHeight = %d",
             (ulong)*(uint *)(this + 0xd4),(ulong)*(uint *)(this + 0xd8));
  Sexy::OutputDebugStrF
            ((wchar_t *)
             " LawnApp::SetWidthHeight m_contentResolutionWidth = %f m_contentResolutionHeight = %f"
             ,(double)*(float *)(this + 0x28d8),(double)*(float *)(this + 0x28dc));
  if ((*(int *)(this + 0xd4) == iVar1) && (*(int *)(this + 0xd8) == iVar2)) {
    uVar4 = 0;
  }
  else {
    ScaledApp::SetResolution((ScaledApp *)this,(int)*(float *)(this + 0x28dc));
    ScaledApp::SetUIResolution((ScaledApp *)this,*(int *)(this + 0xd8));
    gAppHeight = *(undefined4 *)(this + 0xd8);
    uVar4 = 1;
  }
  if (lVar3 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* LawnApp::GetNetworkRequestsCompleted() */

LawnApp __thiscall LawnApp::GetNetworkRequestsCompleted(LawnApp *this)

{
  char cVar1;
  LawnApp LVar2;
  
  cVar1 = GetDoneLoadingProfiles(this);
  LVar2 = (LawnApp)0x0;
  if (((cVar1 != '\0') && (this[0x3028] != (LawnApp)0x0)) && (this[0x3029] != (LawnApp)0x0)) {
    LVar2 = this[0x302a];
  }
  return LVar2;
}


/* LawnApp::IsConnectOnWifi() */

bool LawnApp::IsConnectOnWifi(void)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48) + 0x20);
  if (pcVar2 == FakeHttpDriver::GetNetworkStatus) {
    iVar1 = FakeHttpDriver::GetNetworkStatus(*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48));
    return iVar1 == 2;
  }
  iVar1 = (*pcVar2)();
  return iVar1 == 2;
}


/* LawnApp::IsConnectedOnWWAN() */

bool LawnApp::IsConnectedOnWWAN(void)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(long *)*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48) + 0x20);
  if (pcVar2 == FakeHttpDriver::GetNetworkStatus) {
    iVar1 = FakeHttpDriver::GetNetworkStatus(*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48));
    return iVar1 == 1;
  }
  iVar1 = (*pcVar2)();
  return iVar1 == 1;
}


/* LawnApp::IsNetworkModuleOK() */

bool LawnApp::IsNetworkModuleOK(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  
  cVar1 = IsConnectOnWifi();
  if ((cVar1 == '\0') && (cVar1 = IsConnectedOnWWAN(), cVar1 == '\0')) {
    pcVar3 = *(code **)(*(long *)*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48) + 0x20);
    if (pcVar3 == FakeHttpDriver::GetNetworkStatus) {
      iVar2 = FakeHttpDriver::GetNetworkStatus(*(FakeHttpDriver **)(Sexy::gSexyApp + 0x48));
    }
    else {
      iVar2 = (*pcVar3)();
    }
    return iVar2 == 4;
  }
  return true;
}


/* LawnApp::GetDeviceMODEL() */

void __thiscall LawnApp::GetDeviceMODEL(LawnApp *this)

{
  string *in_x8;
  
  GetPlatformName();
  Android::Diag::GetDeviceMODEL(in_x8);
  return;
}


/* LawnApp::GetDeviceCardType() */

void LawnApp::GetDeviceCardType(void)

{
  _JNIEnv *p_Var1;
  _jmethodID *p_Var2;
  
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  if (p_Var1 != (_JNIEnv *)0x0) {
    p_Var2 = (_jmethodID *)Android::Util::GetGameObject(p_Var1);
    _JNIEnv::CallIntMethod((_jobject *)p_Var1,p_Var2,*(undefined8 *)(DAT_06bbef40 + 0x270));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetDeviceBRAND() */

void __thiscall LawnApp::GetDeviceBRAND(LawnApp *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"Apple");
  nop();
  Android::Diag::GetDeviceBRAND(in_x8);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetNetworkType() */

void __thiscall LawnApp::GetNetworkType(LawnApp *this)

{
  char cVar1;
  size_t in_x2;
  string *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0();
  cVar1 = IsConnectOnWifi();
  if (cVar1 == '\0') {
    Android::Diag::GetNetworkType((Diag *)0x0);
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  else {
    std::string::append(in_x8,"WIFI",in_x2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::UserHasDisabledUsageSharing() */

LawnApp __thiscall LawnApp::UserHasDisabledUsageSharing(LawnApp *this)

{
  return this[0x299a];
}


/* LawnApp::SetUsageSharingSystemStates() */

void __thiscall LawnApp::SetUsageSharingSystemStates(LawnApp *this)

{
  if (*(long *)(this + 0x2ef8) != 0) {
    FUN_0325d738(*(long *)(this + 0x2ef8) + 0xc9,(byte)this[0x299a] ^ 1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::SetUserHasDisabledUsageSharing(bool) */

void __thiscall LawnApp::SetUserHasDisabledUsageSharing(LawnApp *this,bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x299a] != (LawnApp)param_1) {
    this[0x299a] = (LawnApp)param_1;
    psVar1 = Sexy::gSexyAppBase;
    std::string::string(asStack_10,"HasDisabledUsageSharing");
    Sexy::SexyAppBase::RegistryWriteBoolean(psVar1,SUB81(asStack_10,0));
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)this + 0xa8))(this);
    SetUsageSharingSystemStates(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ApplyNetworkContentChanges() */

void __thiscall LawnApp::ApplyNetworkContentChanges(LawnApp *this)

{
  char cVar1;
  
  cVar1 = PVZCachedNetworkTableManager::NetworkRequestsCompleted
                    ((PVZCachedNetworkTableManager *)(this + 0x29a8));
  if (cVar1 == '\0') {
    return;
  }
  PVZCachedNetworkTableManager::ApplyChanges((PVZCachedNetworkTableManager *)(this + 0x29a8));
  return;
}


/* LawnApp::CheckForNetworkContentChanges() */

void __thiscall LawnApp::CheckForNetworkContentChanges(LawnApp *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  time_t tVar4;
  long lVar5;
  
  PVZCachedNetworkTableManager::CheckForUpdates((PVZCachedNetworkTableManager *)(this + 0x29a8),0);
  tVar4 = time((time_t *)0x0);
  iVar3 = rand();
  lVar5 = LiveConfig::Get();
  iVar2 = *(int *)(lVar5 + 0x10) / 3;
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  *(time_t *)(this + 0x2fa8) = tVar4 + (iVar3 - iVar1 * iVar2) * 0x3c;
  return;
}


/* LawnApp::NetworkContentCheckComplete() */

void __thiscall LawnApp::NetworkContentCheckComplete(LawnApp *this)

{
  PVZCachedNetworkTableManager::NetworkRequestsCompleted
            ((PVZCachedNetworkTableManager *)(this + 0x29a8));
  return;
}


/* LawnApp::KeyDown(int) */

ulong LawnApp::KeyDown(int param_1)

{
  char cVar1;
  byte bVar2;
  TextureInfo *pTVar3;
  ulong uVar4;
  uint in_w1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  
  pTVar3 = (TextureInfo *)(ulong)(uint)param_1;
  if (in_w1 == 0xf1) {
    bVar2 = (**(code **)(*(long *)pTVar3 + 0x480))();
    return (ulong)bVar2;
  }
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar3);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    ((wchar16 *)pTVar3,(wchar16 *)(ulong)in_w1,in_x2,in_x3,in_x4);
  return uVar4;
}


/* LawnApp::CanLoadGroup(std::string const&) */

bool __thiscall LawnApp::CanLoadGroup(LawnApp *this,string *param_1)

{
  long lVar1;
  
  lVar1 = Sexy::ResourceManager::GetResourceGroupNamed(*(ResourceManager **)(this + 0x848),param_1);
  return lVar1 != 0;
}


/* LawnApp::CanLoadGroups(std::vector<std::string, std::allocator<std::string > > const&) */

undefined8 __thiscall LawnApp::CanLoadGroups(LawnApp *this,vector *param_1)

{
  string *psVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_0325d79c(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) {
      return 1;
    }
    psVar1 = (string *)FUN_0325d7a8(uVar5,uVar4);
    uVar4 = uVar4 + 1;
    lVar2 = Sexy::ResourceManager::GetResourceGroupNamed(*(ResourceManager **)(this + 0x848),psVar1)
    ;
  } while (lVar2 != 0);
  return 0;
}


/* LawnApp::GenerateFonts() */

void __thiscall LawnApp::GenerateFonts(LawnApp *this)

{
  if (this[0x2f21] == (LawnApp)0x0) {
    PrimeText_Game::GenerateFontInstances();
    PrimeText_Game::GenerateFontEffects();
    this[0x2f21] = (LawnApp)0x1;
  }
  return;
}


/* LawnApp::IsPrimeTextReady() */

bool __thiscall LawnApp::IsPrimeTextReady(LawnApp *this)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (this[0x2f21] != (LawnApp)0x0) {
    lVar2 = Sexy::PrimeText::Instance();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


/* LawnApp::GetDailyRewardConfig() */

undefined8 __thiscall LawnApp::GetDailyRewardConfig(LawnApp *this)

{
  return *(undefined8 *)(this + 0x3580);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetMoneyString(int) */

void LawnApp::GetMoneyString(int param_1)

{
  undefined8 uVar1;
  int in_w1;
  wstring *in_x8;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[CURRENCY_STRING]");
  TodStringTranslate(L"[CURRENCY_SYMBOL]");
  uVar1 = FUN_054766ec(awStack_18);
  FUN_05478178(awStack_10,uVar1,auStack_28);
  TodReplaceString(awStack_20,L"{CURRENCY_SYMBOL}",awStack_10);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  Sexy::CommaSeparate(in_w1);
  uVar1 = FUN_054766ec(awStack_20);
  FUN_05478178(awStack_18,uVar1,auStack_28);
  TodReplaceString(in_x8,L"{AMOUNT}",awStack_18);
  FUN_054766c8();
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  nop();
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::IsHighFPSMode() */

LawnApp __thiscall LawnApp::IsHighFPSMode(LawnApp *this)

{
  return this[0x36a0];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ChenckStartShowProgressBar() */

void __thiscall LawnApp::ChenckStartShowProgressBar(LawnApp *this)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ResStreamsManager *pRVar4;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar4 = *(ResStreamsManager **)(this + 0x908);
  std::string::string(asStack_98,"dynamic.rsb");
  std::string::string(asStack_90,"");
  std::string::string(asStack_88,"");
  cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(pRVar4,asStack_98,asStack_90,asStack_88);
  if (cVar1 == '\0') {
    pRVar4 = *(ResStreamsManager **)(this + 0x908);
    std::string::string(asStack_80,"init.rsb");
    std::string::string(asStack_78,"");
    std::string::string(asStack_70,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(pRVar4,asStack_80,asStack_78,asStack_70);
    cVar3 = '\0';
    if (cVar1 == '\0') {
      pRVar4 = *(ResStreamsManager **)(this + 0x908);
      std::string::string(asStack_68,"uicommon.rsb");
      std::string::string(asStack_60,"");
      std::string::string(asStack_58,"");
      cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(pRVar4,asStack_68,asStack_60,asStack_58);
      cVar3 = cVar1;
      if (cVar1 == '\0') {
        pRVar4 = *(ResStreamsManager **)(this + 0x908);
        std::string::string(asStack_50,"uiactive.rsb");
        std::string::string(asStack_48,"");
        std::string::string(asStack_40,"");
        cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(pRVar4,asStack_50,asStack_48,asStack_40);
        cVar2 = cVar1;
        if (cVar1 == '\0') {
          pRVar4 = *(ResStreamsManager **)(this + 0x908);
          std::string::string(asStack_38,"egypt.rsb");
          std::string::string(asStack_30,"");
          std::string::string(asStack_28,"");
          cVar2 = Sexy::ResStreamsManager::NeedDecompressRsb
                            (pRVar4,asStack_38,asStack_30,asStack_28);
          if (cVar2 == '\0') {
            pRVar4 = *(ResStreamsManager **)(this + 0x908);
            std::string::string(asStack_20,"uiactive3.rsb");
            std::string::string(asStack_18,"");
            std::string::string(asStack_10,"");
            cVar2 = Sexy::ResStreamsManager::NeedDecompressRsb
                              (pRVar4,asStack_20,asStack_18,asStack_10);
            std::string::~string(asStack_10);
            nop();
            std::string::~string(asStack_18);
            nop();
            std::string::~string(asStack_20);
            nop();
          }
          cVar1 = '\x01';
          std::string::~string(asStack_28);
          nop();
          std::string::~string(asStack_30);
          nop();
          std::string::~string(asStack_38);
          nop();
        }
        std::string::~string(asStack_40);
        nop();
        std::string::~string(asStack_48);
        nop();
        std::string::~string(asStack_50);
        nop();
        cVar3 = cVar1;
        goto joined_r0x03262ae0;
      }
    }
  }
  else {
    cVar1 = '\0';
    cVar3 = '\0';
  }
  cVar2 = '\x01';
joined_r0x03262ae0:
  if (cVar3 != '\0') {
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    nop();
  }
  if (cVar1 != '\0') {
    std::string::~string(asStack_70);
    nop();
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_80);
    nop();
  }
  std::string::~string(asStack_88);
  nop();
  std::string::~string(asStack_90);
  nop();
  std::string::~string(asStack_98);
  nop();
  if (cVar2 != '\0') {
    Android::UI::StartShowProgressBar();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* LawnApp::GetVersionNetworkManager() */

LawnApp * __thiscall LawnApp::GetVersionNetworkManager(LawnApp *this)

{
  return this + 0x2eb0;
}


/* LawnApp::GetRechargeCheckServer() */

LawnApp * __thiscall LawnApp::GetRechargeCheckServer(LawnApp *this)

{
  return this + 0x2ed0;
}


/* LawnApp::OnCloseDialog() */

void __thiscall LawnApp::OnCloseDialog(LawnApp *this)

{
  if (*(long *)(this + 0x2e18) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e18));
    *(undefined8 *)(this + 0x2e18) = 0;
  }
  return;
}


/* LawnApp::GetOpenActivityGameUI(FestivalGameMode&) */

void __thiscall LawnApp::GetOpenActivityGameUI(LawnApp *this,FestivalGameMode *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x3018);
  *(undefined4 *)(this + 0x3018) = 0xffffffff;
  return;
}


/* LawnApp::closeDiffProfileSummary() */

void __thiscall LawnApp::closeDiffProfileSummary(LawnApp *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x9e0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x9e0));
    *(undefined8 *)(this + 0x9e0) = 0;
    lVar1 = GetWorldMap(this);
    if (lVar1 != 0) {
      FUN_0325d70c(lVar1 + 0x356,1);
      return;
    }
  }
  return;
}


/* LawnApp::IsNameMapperContainsId(int) */

bool __thiscall LawnApp::IsNameMapperContainsId(LawnApp *this,int param_1)

{
  char cVar1;
  NameMapperBase *pNVar2;
  
  pNVar2 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
  if (cVar1 == '\0') {
    pNVar2 = (NameMapperBase *)PlantNameMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
    if (cVar1 == '\0') {
      pNVar2 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
      if (cVar1 == '\0') {
        pNVar2 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
        if (cVar1 == '\0') {
          pNVar2 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
          if (cVar1 == '\0') {
            pNVar2 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
            if (cVar1 == '\0') {
              pNVar2 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
              if (cVar1 == '\0') {
                pNVar2 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
                if (cVar1 == '\0') {
                  pNVar2 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
                  cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
                  if (cVar1 == '\0') {
                    pNVar2 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                    cVar1 = NameMapperBase::ContainsId(pNVar2,param_1);
                    if ((cVar1 == '\0') && (param_1 != 0xbc0)) {
                      return param_1 == 0xfad;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetNameMapperInfo(int) */

void LawnApp::GetNameMapperInfo(int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  int in_w1;
  IdNameInfo *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IdNameInfo::IdNameInfo(in_x8);
  pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)PlantNameMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
      if (cVar1 == '\0') {
        pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
        if (cVar1 == '\0') {
          pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
          if (cVar1 == '\0') {
            pNVar3 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
            cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
            if (cVar1 == '\0') {
              pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
              cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
              if (cVar1 == '\0') {
                pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
                cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
                if (cVar1 == '\0') {
                  if (in_w1 == 0xbc0) {
                    *(undefined4 *)(in_x8 + 8) = 8;
                    thunk_FUN_05475e00();
                  }
                  else if (in_w1 == 0xfad) {
                    *(undefined4 *)(in_x8 + 8) = 9;
                    thunk_FUN_05475e00();
                  }
                  goto LAB_03263000;
                }
                *(undefined4 *)(in_x8 + 8) = 7;
                iVar2 = MaterialItemMapper::GetInstance();
              }
              else {
                *(undefined4 *)(in_x8 + 8) = 6;
                iVar2 = PlantAccessoryPieceMapper::GetInstance();
              }
            }
            else {
              *(undefined4 *)(in_x8 + 8) = 5;
              iVar2 = PlantAccessoryInfoMapper::GetInstance();
            }
          }
          else {
            *(undefined4 *)(in_x8 + 8) = 4;
            iVar2 = AvatarChipNameMapperServerID::GetInstance();
          }
        }
        else {
          *(undefined4 *)(in_x8 + 8) = 3;
          iVar2 = AvatarNameMapperServerID::GetInstance();
        }
      }
      else {
        *(undefined4 *)(in_x8 + 8) = 2;
        iVar2 = PlantChipNameMapperServerID::GetInstance();
      }
    }
    else {
      *(undefined4 *)(in_x8 + 8) = 1;
      iVar2 = PlantNameMapper::GetInstance();
    }
  }
  else {
    *(undefined4 *)(in_x8 + 8) = 1;
    iVar2 = PlantNameMapperServerID::GetInstance();
  }
  NameMapperBase::GetNameForId(iVar2);
  FUN_05474278();
  std::string::~string(asStack_10);
LAB_03263000:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::GetServerTimeOffset() */

undefined8 __thiscall LawnApp::GetServerTimeOffset(LawnApp *this)

{
  return *(undefined8 *)(this + 0x3020);
}


/* LawnApp::SetServerTimeOffset(long) */

void __thiscall LawnApp::SetServerTimeOffset(LawnApp *this,long param_1)

{
  *(long *)(this + 0x3020) = param_1;
  this[0x301c] = (LawnApp)0x1;
  return;
}


/* LawnApp::InitServerTimeOffset(long) */

void __thiscall LawnApp::InitServerTimeOffset(LawnApp *this,long param_1)

{
  BaseBufferResource *this_00;
  long lVar1;
  
  this_00 = (BaseBufferResource *)ServerTime::Instance();
  lVar1 = Sexy::BaseBufferResource::GetPtr(this_00);
  if ((0 < lVar1) && (0 < param_1)) {
    SetServerTimeOffset(this,param_1 - lVar1);
    return;
  }
  return;
}


/* LawnApp::IsTimeNeedFix() */

LawnApp __thiscall LawnApp::IsTimeNeedFix(LawnApp *this)

{
  return this[0x301c];
}


/* LawnApp::GetRealServerTime() */

long __thiscall LawnApp::GetRealServerTime(LawnApp *this)

{
  char cVar1;
  BaseBufferResource *this_00;
  long lVar2;
  long lVar3;
  
  this_00 = (BaseBufferResource *)ServerTime::Instance();
  lVar2 = Sexy::BaseBufferResource::GetPtr(this_00);
  if (lVar2 < 1) {
    return 0;
  }
  cVar1 = IsTimeNeedFix(this);
  if (cVar1 == '\0') {
    return lVar2;
  }
  lVar3 = GetServerTimeOffset(this);
  return lVar3 + lVar2;
}


/* LawnApp::GetRealBeijingTime() */

long __thiscall LawnApp::GetRealBeijingTime(LawnApp *this)

{
  char cVar1;
  BaseBufferResource *this_00;
  long lVar2;
  long lVar3;
  
  this_00 = (BaseBufferResource *)ServerTime::Instance();
  lVar2 = Sexy::BaseBufferResource::GetPtr(this_00);
  if (lVar2 < 1) {
    return 0;
  }
  cVar1 = IsTimeNeedFix(this);
  if (cVar1 == '\0') {
    return lVar2;
  }
  lVar3 = GetServerTimeOffset(this);
  return lVar3 + lVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::BeijingTime(long const*) */

void __thiscall LawnApp::BeijingTime(LawnApp *this,long *param_1)

{
  long lVar1;
  long local_10;
  long local_8;
  
  local_10 = *param_1;
  local_8 = ___stack_chk_guard;
  if (0 < local_10) {
    lVar1 = Sexy::GetBJTimeOffset();
    local_10 = local_10 + lVar1;
  }
  gmtime(&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsNationalDay(bool) */

void __thiscall LawnApp::IsNationalDay(LawnApp *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  Sexy *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = (Sexy *)GetRealBeijingTime(this);
  if ((long)local_10 < 1) {
    bVar3 = false;
    if (!param_1) goto LAB_03263288;
    uVar2 = Sexy::SexyTime(local_10);
    local_10 = (Sexy *)(uVar2 / 1000);
  }
  lVar1 = BeijingTime(gLawnApp,(long *)&local_10);
  bVar3 = false;
  if ((*(int *)(lVar1 + 0x14) == 0x71) && (*(int *)(lVar1 + 0x10) == 9)) {
    bVar3 = *(int *)(lVar1 + 0xc) - 1U < 7;
  }
LAB_03263288:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetTargetDangerRoomLevelName(DangerRoomLevelType) */

void LawnApp::GetTargetDangerRoomLevelName(string *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *__n;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  switch(param_3) {
  case 0:
    std::string::append(param_1,"festival_level_one",(size_t)__n);
    break;
  case 1:
    std::string::append(param_1,"festival_level_two",(size_t)__n);
    break;
  case 2:
    std::string::append(param_1,"festival_level_three",(size_t)__n);
    break;
  case 3:
    std::string::append(param_1,"festival_level_four",(size_t)__n);
    break;
  case 4:
    std::string::append(param_1,"festival_level_endless",(size_t)__n);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* LawnApp::GetLastTouchEndTime() */

undefined4 __thiscall LawnApp::GetLastTouchEndTime(LawnApp *this)

{
  return *(undefined4 *)(this + 0x3578);
}


/* LawnApp::SetAdsStatus(AdvertisementType, bool) */

void __thiscall LawnApp::SetAdsStatus(LawnApp *this,uint param_2,LawnApp param_3)

{
  if (param_2 < 7) {
    this[(long)(int)param_2 + 0x2f8c] = param_3;
  }
  return;
}


/* LawnApp::GetAdsStatus(AdvertisementType) */

LawnApp __thiscall LawnApp::GetAdsStatus(LawnApp *this,uint param_2)

{
  LawnApp LVar1;
  
  LVar1 = (LawnApp)0x0;
  if (param_2 < 7) {
    LVar1 = this[(long)(int)param_2 + 0x2f8c];
  }
  return LVar1;
}


/* LawnApp::InitAdsStatus() */

void __thiscall LawnApp::InitAdsStatus(LawnApp *this)

{
  this[0x2f8c] = (LawnApp)0x0;
  this[0x2f8d] = (LawnApp)0x0;
  this[0x2f8e] = (LawnApp)0x0;
  this[0x2f8f] = (LawnApp)0x0;
  this[0x2f90] = (LawnApp)0x0;
  this[0x2f91] = (LawnApp)0x0;
  this[0x2f92] = (LawnApp)0x0;
  return;
}


/* LawnApp::GetMapName(int) */

undefined8 LawnApp::GetMapName(int param_1)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsNameMapperContains(IdNameInfo) */

void __thiscall LawnApp::IsNameMapperContains(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  NameMapperBase *pNVar3;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  switch(uVar1) {
  case 1:
    pNVar3 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    if (cVar2 == '\0') {
      pNVar3 = (NameMapperBase *)PlantNameMapper::GetInstance();
      cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    }
    break;
  case 2:
    pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 3:
    pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 4:
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 5:
    pNVar3 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 6:
    pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 7:
    pNVar3 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar3,asStack_10);
    break;
  case 8:
    cVar2 = std::operator==((string *)&NameMapperBase::GemServerName,asStack_10);
    break;
  case 9:
    cVar2 = std::operator==((string *)&NameMapperBase::CoinServerName,asStack_10);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetNameMapperName(IdNameInfo) */

void __thiscall LawnApp::GetNameMapperName(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  NameMapperBase *pNVar4;
  string asStack_10 [8];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10);
  switch(uVar1) {
  case 1:
    pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    pNVar4 = (NameMapperBase *)PlantNameMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)PlantNameMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 2:
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 3:
    pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 4:
    pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 5:
    pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 6:
    pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 7:
    pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    cVar2 = NameMapperBase::ContainsName(pNVar4,asStack_10);
    if (cVar2 != '\0') {
      pNVar4 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar4,asStack_10);
      goto switchD_032636c0_default;
    }
    break;
  case 8:
    cVar2 = std::operator==((string *)&NameMapperBase::GemServerName,asStack_10);
    if (cVar2 != '\0') {
      uVar3 = 0xbc0;
      goto switchD_032636c0_default;
    }
    break;
  case 9:
    cVar2 = std::operator==((string *)&NameMapperBase::CoinServerName,asStack_10);
    if (cVar2 != '\0') {
      uVar3 = 0xfad;
      goto switchD_032636c0_default;
    }
    break;
  default:
    goto switchD_032636c0_default;
  }
  uVar3 = 0;
switchD_032636c0_default:
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsForbiddenPlatform() */

void LawnApp::IsForbiddenPlatform(void)

{
  char cVar1;
  string *psVar2;
  string asStack_10 [8];
  Util *local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)&DAT_06a9a888;
  Android::Util::GetPackageName(___stack_chk_guard);
  do {
    cVar1 = std::operator==(asStack_10,psVar2);
    if (cVar1 != '\0') break;
    psVar2 = psVar2 + 8;
  } while (psVar2 != (string *)&DAT_06a9ab30);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetMapNameIndex(std::string) */

void __thiscall LawnApp::GetMapNameIndex(int param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar3 = 0; iVar2 = Reflection::RUnknownNamedType::StaticGetTypeCategory(), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    GetMapName(param_1);
    cVar1 = std::operator==(param_2,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') goto LAB_032639a0;
  }
  iVar3 = -1;
LAB_032639a0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsNormalWorld(std::string) */

void __thiscall LawnApp::IsNormalWorld(int param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (iVar3 = 0; iVar2 = Reflection::RUnknownNamedType::StaticGetTypeCategory(), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    GetMapName(param_1);
    cVar1 = std::operator==(param_2,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') goto LAB_03263a50;
  }
  cVar1 = '\0';
LAB_03263a50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsCurrentNormalWorld() */

void __thiscall LawnApp::IsCurrentNormalWorld(LawnApp *this)

{
  undefined1 uVar1;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetWorldMap(this);
  if ((lVar2 == 0) || (lVar2 = FUN_0325d718(*(undefined8 *)(lVar2 + 0x2f0)), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_05475d88(asStack_10,lVar2 + 0x38);
    uVar1 = IsNormalWorld(this,asStack_10);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* LawnApp::GetTargetDangerRoomLevelType(std::string) */

undefined8 __thiscall LawnApp::GetTargetDangerRoomLevelType(undefined8 param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"festival_level_one");
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"festival_level_two");
    if (bVar1) {
      return 1;
    }
    bVar1 = std::operator==(param_2,"festival_level_three");
    if (bVar1) {
      return 2;
    }
    bVar1 = std::operator==(param_2,"festival_level_four");
    if (bVar1) {
      return 3;
    }
    bVar1 = std::operator==(param_2,"festival_level_endless");
    if (bVar1) {
      return 4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::internalLoadGroup(std::string const&) */

void __thiscall LawnApp::internalLoadGroup(LawnApp *this,string *param_1)

{
  undefined4 uVar1;
  char cVar2;
  ResourceGroup *this_00;
  undefined8 uVar3;
  undefined1 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ResourceGroup *)
            Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),param_1);
  if (this_00 == (ResourceGroup *)0x0) {
    uVar3 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF
              ((wchar_t *)"LawnApp::internalLoadGroup failed to GetResourceGroupNamed %s!",uVar3);
    uVar3 = FUN_0547429c(param_1);
    Sexy::StrFormat("[Resources][ERROR] Failed to find resgroup: %s",asStack_10,uVar3);
    nop();
    std::string::~string(asStack_10);
    uVar4 = 0;
    goto LAB_03263d90;
  }
  uVar1 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
  FUN_05475d88(asStack_10,param_1);
  cVar2 = FUN_03263be0(asStack_10);
  std::string::~string(asStack_10);
  if (cVar2 != '\0') {
    *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = *(undefined4 *)(this + 0xd8);
  }
  if (this_00[0x11] == (ResourceGroup)0x0) {
    cVar2 = Sexy::ResourceGroup::Load(this_00);
    if (cVar2 != '\0') goto LAB_03263d80;
    uVar3 = FUN_0547429c(param_1);
    Sexy::OutputDebugStrF((wchar_t *)"LawnApp::internalLoadGroup failed to ->Load group %s!",uVar3);
    Sexy::ResourceManager::GetErrorText();
    uVar3 = FUN_0547429c(asStack_10);
    Sexy::OutputDebugStrF((wchar_t *)"LawnApp::internalLoadGroup failed error: %s!",uVar3);
    std::string::~string(asStack_10);
    uVar3 = FUN_0547429c(param_1);
    Sexy::StrFormat("[Resources][ERROR] Failed to ->Load resgroup: %s",asStack_10,uVar3);
    nop();
    std::string::~string(asStack_10);
    uVar4 = 0;
  }
  else {
LAB_03263d80:
    uVar4 = 1;
  }
  *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar1;
LAB_03263d90:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetGroupLoadProgress(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::GetGroupLoadProgress(LawnApp *this,vector *param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  string *psVar5;
  ulong uVar6;
  ResStreamsManager *this_00;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  string asStack_10 [8];
  long local_8;
  
  this_00 = *(ResStreamsManager **)(this + 0x908);
  local_8 = ___stack_chk_guard;
  if (this_00 != (ResStreamsManager *)0x0) {
    std::string::string(asStack_10,"dynamic.rsb");
    cVar2 = Sexy::ResStreamsManager::IsInitialized(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar2 != '\0') {
      uVar7 = 0;
      uVar9 = 0;
      uVar10 = 0;
      while( true ) {
        uVar8 = *(undefined8 *)param_1;
        uVar6 = FUN_0325d79c(uVar8,*(undefined8 *)(param_1 + 8));
        if (uVar6 <= uVar7) break;
        uVar1 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
        uVar8 = FUN_0325d7a8(uVar8,uVar7);
        FUN_05475d88(asStack_10,uVar8);
        cVar2 = FUN_03263be0(asStack_10);
        std::string::~string(asStack_10);
        if (cVar2 != '\0') {
          *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = *(undefined4 *)(this + 0xd8);
        }
        psVar5 = (string *)FUN_0325d7a8(*(undefined8 *)param_1,uVar7);
        uVar3 = Sexy::ResStreamsManager::LookupGroup(*(ResStreamsManager **)(this + 0x908),psVar5);
        if (uVar3 != 0xffffffff) {
          iVar4 = Sexy::ResStreamsManager::GetBytesLoadedForGroup
                            (*(ResStreamsManager **)(this + 0x908),uVar3);
          uVar9 = uVar9 + iVar4;
          iVar4 = Sexy::ResStreamsManager::GetTotalBytesForGroup
                            (*(ResStreamsManager **)(this + 0x908),uVar3);
          uVar10 = uVar10 + iVar4;
        }
        uVar7 = uVar7 + 1;
        *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar1;
      }
      fVar11 = (float)((double)uVar9 / (double)uVar10);
      goto LAB_03263fe0;
    }
  }
  fVar11 = 0.0;
LAB_03263fe0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar11);
}


/* LawnApp::InitialLoadProgress() */

void __thiscall LawnApp::InitialLoadProgress(LawnApp *this)

{
  GetGroupLoadProgress(this,(vector *)&DAT_06a9a7a0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetPlatformByNewPackageName() */

void LawnApp::GetPlatformByNewPackageName(void)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  Util *local_8;
  
  uVar2 = 1;
  local_8 = ___stack_chk_guard;
  Android::Util::GetPackageName(___stack_chk_guard);
  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncm");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncu");
    if (((((bVar1) || (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncugd"), bVar1)) ||
         (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncuhb"), bVar1)) ||
        ((bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncuhn"), bVar1 ||
         (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncucq"), bVar1)))) ||
       (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncuhlj"), bVar1)) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ncukd");
      if (!bVar1) {
        uVar2 = 4;
        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nct");
        if (!bVar1) {
          uVar2 = 5;
          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nmm");
          if (!bVar1) {
            uVar2 = 0xc;
            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nqq");
            if (!bVar1) {
              uVar2 = 0xf;
              bVar1 = std::operator==(asStack_10,"com.popcap.pvz2n91");
              if (!bVar1) {
                uVar2 = 0x10;
                bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nbddk");
                if (!bVar1) {
                  uVar2 = 0x11;
                  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nbdyx");
                  if (!bVar1) {
                    uVar2 = 0x12;
                    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nbdaqy");
                    if (!bVar1) {
                      uVar2 = 0x13;
                      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2naz");
                      if (!bVar1) {
                        uVar2 = 0x14;
                        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nuc");
                        if (!bVar1) {
                          uVar2 = 0x15;
                          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nwdj");
                          if (!bVar1) {
                            uVar2 = 0x16;
                            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nxm");
                            if (!bVar1) {
                              uVar2 = 0x17;
                              bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nyyh");
                              if (!bVar1) {
                                uVar2 = 0x18;
                                bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nxl");
                                if (!bVar1) {
                                  uVar2 = 0x19;
                                  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nsg");
                                  if (!bVar1) {
                                    uVar2 = 0x1a;
                                    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ndl");
                                    if (!bVar1) {
                                      uVar2 = 0x1b;
                                      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2njl");
                                      if (!bVar1) {
                                        uVar2 = 0x1c;
                                        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nmpt");
                                        if (!bVar1) {
                                          uVar2 = 0x1d;
                                          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2n360");
                                          if (!bVar1) {
                                            uVar2 = 0x1e;
                                            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2nmmy"
                                                                   );
                                            if (!bVar1) {
                                              uVar2 = 0x1f;
                                              bVar1 = std::operator==(asStack_10,
                                                                      "com.popcap.pvz2njs");
                                              if (!bVar1) {
                                                uVar2 = 0x20;
                                                bVar1 = std::operator==(asStack_10,
                                                                        "com.popcap.pvz2nmt");
                                                if (!bVar1) {
                                                  uVar2 = 0x22;
                                                  bVar1 = std::operator==(asStack_10,
                                                                          "com.popcap.pvz2nzx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x25;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nop");
                                                    if (!bVar1) {
                                                      uVar2 = 0x21;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nlx");
                                                      if (!bVar1) {
                                                        uVar2 = 0x23;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                "com.popcap.pvz2ncw"
                                                                               );
                                                        if (!bVar1) {
                                                          uVar2 = 0x26;
                                                          bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2nHWCM");
                                                  if (!bVar1) {
                                                    uVar2 = 0x24;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2n7k");
                                                    if (!bVar1) {
                                                      uVar2 = 0x27;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2n4399"
                                                                             );
                                                      if (!bVar1) {
                                                        uVar2 = 0x28;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                "com.popcap.pvz2nsn"
                                                                               );
                                                        if (!bVar1) {
                                                          uVar2 = 0x29;
                                                          bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2nbk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nlwy");
                                                    if (!bVar1) {
                                                      uVar2 = 0x3c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nkpct"
                                                                             );
                                                      if (!bVar1) {
                                                        uVar2 = 0x3d;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2nlxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x3e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nhwct");
                                                    if (!bVar1) {
                                                      uVar2 = 0x3f;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nzxct"
                                                                             );
                                                      if (!bVar1) {
                                                        uVar2 = 0x40;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2nzxyxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nsh");
                                                    if (!bVar1) {
                                                      uVar2 = 0x2c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2npps")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 0x2d;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2naqypc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nyyss");
                                                    if (!bVar1) {
                                                      uVar2 = 0x30;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nnd");
                                                      if (!bVar1) {
                                                        uVar2 = 0x31;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2nttdt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nyk");
                                                    if (!bVar1) {
                                                      uVar2 = 0x32;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2ntyd")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 0x33;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2nbbg");
                                                  if (!bVar1) {
                                                    uVar2 = 0x34;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nhzmp");
                                                    if (!bVar1) {
                                                      uVar2 = 0x35;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2nxchdmp");
                                                  if (!bVar1) {
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cmhd");
                                                    if ((bVar1) ||
                                                       (bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2ncmhd"), bVar1)) {
                                                    uVar2 = 6;
                                                  }
                                                  else {
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2ncuhd");
                                                    if ((((bVar1) ||
                                                         (bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2cthdncugd"), bVar1)) ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                                                                                                      
                                                  "com.popcap.pvz2cthdncuhb"), bVar1)) ||
                                                  (((bVar1 = std::operator==(asStack_10,
                                                                                                                                                          
                                                  "com.popcap.pvz2cthdncuhn"), bVar1 ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                                                                                                      
                                                  "com.popcap.pvz2cthdncucq"), bVar1)) ||
                                                  ((bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdsfqd"), bVar1 ||
                                                  ((bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshqd"), bVar1 ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                           "com.popcap.pvz2ncuhdsh")
                                                  , bVar1)))))))) {
                                                    uVar2 = 8;
                                                  }
                                                  else {
                                                    uVar2 = 10;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnyyt");
                                                  if (!bVar1) {
                                                    uVar2 = 9;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2ncukdhd"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0xa5;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2cthdn"
                                                                             );
                                                      if (!bVar1) {
                                                        uVar2 = 0xb;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2nmmhd");
                                                  if (!bVar1) {
                                                    uVar2 = 7;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2nmmschd"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0xd;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nqqhd"
                                                                             );
                                                      if (!bVar1) {
                                                        uVar2 = 0x43;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2cthdn91");
                                                  if (!bVar1) {
                                                    uVar2 = 0x44;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnbddk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x45;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnbdyx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x46;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnbdaqy");
                                                  if (!bVar1) {
                                                    uVar2 = 0x47;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnaz"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x48;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnuc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x49;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnwdj");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnxm"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x4b;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnyyh");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnxl"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x4d;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnsg");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdndl"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x4f;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnjl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x50;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnmpt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x51;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdn360");
                                                  if (!bVar1) {
                                                    uVar2 = 0x52;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnmumayi");
                                                  if (!bVar1) {
                                                    uVar2 = 0x53;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnjs"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x54;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnmt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x56;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnzx"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x59;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnop");
                                                  if (!bVar1) {
                                                    uVar2 = 0x55;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnlx"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x57;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdncw");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnhwct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x58;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdn7k"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x5b;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdn4399");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnsn"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x5d;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdnbk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnlwy");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb5;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnayyct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb6;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnahytct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb7;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnkpct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb8;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnlxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb9;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnhwct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xba;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnzxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbb;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnzxyxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbc;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnszryct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbd;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdngdgx");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbe;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnscsf");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbf;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnwhcw");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdngzdx");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnwdsy");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc2;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnszkyct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnsh"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x60;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2ncthdpps");
                                                  if (!bVar1) {
                                                    uVar2 = 0x61;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2ncthdaqypc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x62;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2ncthdyyss");
                                                  if (!bVar1) {
                                                    uVar2 = 100;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2ncthdnd"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x65;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2ncthdttdt");
                                                  if (!bVar1) {
                                                    uVar2 = 99;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2ncthdyk"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x66;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdntyd");
                                                  if (!bVar1) {
                                                    uVar2 = 0x67;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2ncthdbbg");
                                                  if (!bVar1) {
                                                    uVar2 = 0x68;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnhzmp");
                                                  if (!bVar1) {
                                                    uVar2 = 0x6b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnxchdmp");
                                                  if (!bVar1) {
                                                    uVar2 = 0x85;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshqc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x86;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2345");
                                                  if (!bVar1) {
                                                    uVar2 = 0x87;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdxly"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x88;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthddwmc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x89;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdywwl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxiaoqi");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdccyx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdqishizs");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxxrjy");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshxb");
                                                  if (!bVar1) {
                                                    uVar2 = 0x90;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxiaoha");
                                                  if (!bVar1) {
                                                    uVar2 = 0x91;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdjrtt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x92;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd233qd");
                                                  if (!bVar1) {
                                                    uVar2 = 0x93;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhaoyoukb");
                                                  if (!bVar1) {
                                                    uVar2 = 0x94;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.g.baidu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa4;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdtw")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0xa6;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdbmsq");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa7;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhbili");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa8;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhourplay");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa9;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.bilibili");
                                                  if (!bVar1) {
                                                    uVar2 = 0xab;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd1test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xac;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xad;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd3test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xae;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd4test");
                                                  if (!bVar1) {
                                                    uVar2 = 0x95;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdkuaishou");
                                                  if (!bVar1) {
                                                    uVar2 = 0xaf;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.kuaishou");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhwctdp");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.honor");
                                                  if (!bVar1) {
                                                    uVar2 = 0x97;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2345m");
                                                  if (!bVar1) {
                                                    uVar2 = 0x98;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmeituxx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x99;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.bytedance.gamecenter");
                                                  if (!bVar1) {
                                                    uVar2 = 0x96;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdpapa");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshark");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdks")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x9c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdbazhang");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.todaygame");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdccplay");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdqszs");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmigu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd4migu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa2;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmgtv");
                                                  if (!bVar1) {
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxy51");
                                                  uVar2 = 0xa3;
                                                  if (!bVar1) {
                                                    uVar2 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetPlatform() */

void __thiscall LawnApp::GetPlatform(LawnApp *this)

{
  bool bVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  uVar2 = 1;
  local_8 = ___stack_chk_guard;
  Android::Util::GetPackageName((Util *)this);
  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cm");
  if (!bVar1) {
    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cu");
    if ((((bVar1) || (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cugd"), bVar1)) ||
        (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cuhb"), bVar1)) ||
       ((bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cuhn"), bVar1 ||
        (bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cucq"), bVar1)))) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2cukd");
      if (!bVar1) {
        uVar2 = 4;
        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2ct");
        if (!bVar1) {
          uVar2 = 5;
          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2mm");
          if (!bVar1) {
            uVar2 = 0xc;
            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2qq");
            if (!bVar1) {
              uVar2 = 0xf;
              bVar1 = std::operator==(asStack_10,"com.popcap.pvz291");
              if (!bVar1) {
                uVar2 = 0x10;
                bVar1 = std::operator==(asStack_10,"com.popcap.pvz2bddk");
                if (!bVar1) {
                  uVar2 = 0x11;
                  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2bdyx");
                  if (!bVar1) {
                    uVar2 = 0x12;
                    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2bdaqy");
                    if (!bVar1) {
                      uVar2 = 0x13;
                      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2az");
                      if (!bVar1) {
                        uVar2 = 0x14;
                        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2uc");
                        if (!bVar1) {
                          uVar2 = 0x15;
                          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2wdj");
                          if (!bVar1) {
                            uVar2 = 0x16;
                            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2xm");
                            if (!bVar1) {
                              uVar2 = 0x17;
                              bVar1 = std::operator==(asStack_10,"com.popcap.pvz2yyh");
                              if (!bVar1) {
                                uVar2 = 0x18;
                                bVar1 = std::operator==(asStack_10,"com.popcap.pvz2xl");
                                if (!bVar1) {
                                  uVar2 = 0x19;
                                  bVar1 = std::operator==(asStack_10,"com.popcap.pvz2sg");
                                  if (!bVar1) {
                                    uVar2 = 0x1a;
                                    bVar1 = std::operator==(asStack_10,"com.popcap.pvz2dl");
                                    if (!bVar1) {
                                      uVar2 = 0x1b;
                                      bVar1 = std::operator==(asStack_10,"com.popcap.pvz2jl");
                                      if (!bVar1) {
                                        uVar2 = 0x1c;
                                        bVar1 = std::operator==(asStack_10,"com.popcap.pvz2mpt");
                                        if (!bVar1) {
                                          uVar2 = 0x1d;
                                          bVar1 = std::operator==(asStack_10,"com.popcap.pvz2360");
                                          if (!bVar1) {
                                            uVar2 = 0x1e;
                                            bVar1 = std::operator==(asStack_10,"com.popcap.pvz2mmy")
                                            ;
                                            if (!bVar1) {
                                              uVar2 = 0x1f;
                                              bVar1 = std::operator==(asStack_10,"com.popcap.pvz2js"
                                                                     );
                                              if (!bVar1) {
                                                uVar2 = 0x20;
                                                bVar1 = std::operator==(asStack_10,
                                                                        "com.popcap.pvz2mt");
                                                if (!bVar1) {
                                                  uVar2 = 0x22;
                                                  bVar1 = std::operator==(asStack_10,
                                                                          "com.popcap.pvz2zx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x25;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2op");
                                                    if (!bVar1) {
                                                      uVar2 = 0x21;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2lx");
                                                      if (!bVar1) {
                                                        uVar2 = 0x23;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                "com.popcap.pvz2cw")
                                                        ;
                                                        if (!bVar1) {
                                                          uVar2 = 0x26;
                                                          bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2HWCM");
                                                  if (!bVar1) {
                                                    uVar2 = 0x24;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz27k");
                                                    if (!bVar1) {
                                                      uVar2 = 0x27;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz24399")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 0x28;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                "com.popcap.pvz2sn")
                                                        ;
                                                        if (!bVar1) {
                                                          uVar2 = 0x29;
                                                          bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2bk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2lwy");
                                                    if (!bVar1) {
                                                      uVar2 = 0x3c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2kpct")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 0x3d;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2lxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x3e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2hwct");
                                                    if (!bVar1) {
                                                      uVar2 = 0x3f;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2zxct")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 0x40;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2zxyxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2sh");
                                                    if (!bVar1) {
                                                      uVar2 = 0x2c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2pps");
                                                      if (!bVar1) {
                                                        uVar2 = 0x2d;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2aqypc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2yyss");
                                                    if (!bVar1) {
                                                      uVar2 = 0x30;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2nd");
                                                      if (!bVar1) {
                                                        uVar2 = 0x31;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2ttdt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x2f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2yk");
                                                    if (!bVar1) {
                                                      uVar2 = 0x32;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2tyd");
                                                      if (!bVar1) {
                                                        uVar2 = 0x33;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                "com.popcap.pvz2bbg"
                                                                               );
                                                        if (!bVar1) {
                                                          uVar2 = 0x34;
                                                          bVar1 = std::operator==(asStack_10,
                                                                                                                                                                    
                                                  "com.popcap.pvz2hzmp");
                                                  if (!bVar1) {
                                                    uVar2 = 0x35;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2xchdmp")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x36;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.tencent.tmgp.pvz2tx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x37;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2ls");
                                                    if (!bVar1) {
                                                      uVar2 = 0x38;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2amz");
                                                      if (!bVar1) {
                                                        uVar2 = 0x39;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2kpsj");
                                                  if (!bVar1) {
                                                    uVar2 = 6;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cmhd");
                                                    if (!bVar1) {
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2cuhd")
                                                      ;
                                                      if (((((bVar1) ||
                                                            (bVar1 = std::operator==(asStack_10,
                                                                                                                                                                          
                                                  "com.popcap.pvz2cthdcugd"), bVar1)) ||
                                                  ((bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdcuhb"), bVar1 ||
                                                  (((bVar1 = std::operator==(asStack_10,
                                                                                                                                                          
                                                  "com.popcap.pvz2cthdcuhn"), bVar1 ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                           "com.popcap.pvz2cthdcucq"
                                                                          ), bVar1)) ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                                                                                                      
                                                  "com.popcap.pvz2cthdcuhlj"), bVar1)))))) ||
                                                  ((bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdsfqd"), bVar1 ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                           "com.popcap.pvz2cthdshqd"
                                                                          ), bVar1)))) ||
                                                  (bVar1 = std::operator==(asStack_10,
                                                                           "com.popcap.pvz2cuhdsh"),
                                                  bVar1)) {
                                                    uVar2 = 8;
                                                  }
                                                  else {
                                                    uVar2 = 10;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdyyt"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 9;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cukdhd");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa5;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthd");
                                                    if (!bVar1) {
                                                      uVar2 = 0xb;
                                                      bVar1 = std::operator==(asStack_10,
                                                                              "com.popcap.pvz2mmhd")
                                                      ;
                                                      if (!bVar1) {
                                                        uVar2 = 7;
                                                        bVar1 = std::operator==(asStack_10,
                                                                                                                                                                
                                                  "com.popcap.pvz2mmschd");
                                                  if (!bVar1) {
                                                    uVar2 = 0xd;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2qqhd");
                                                    if (!bVar1) {
                                                      uVar2 = 0x43;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthd91");
                                                  if (!bVar1) {
                                                    uVar2 = 0x44;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdbddk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x45;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdbdyx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x46;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdbdaqy");
                                                  if (!bVar1) {
                                                    uVar2 = 0x47;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdaz")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x48;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthduc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x49;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdwdj"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x4a;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdxm");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdyyh"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x4c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdxl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdsg")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x4e;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthddl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x4f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdjl")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x50;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdmpt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x51;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthd360"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x52;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdmumayi");
                                                  if (!bVar1) {
                                                    uVar2 = 0x53;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdjs")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x54;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdmt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x56;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdzx")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x59;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdop");
                                                  if (!bVar1) {
                                                    uVar2 = 0x55;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdlx")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x57;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdcw");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhwct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x58;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthd7k")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x5b;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthd4399");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdsn")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x5d;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdbk");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdlwy"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0xb5;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdayyct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb6;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdahytct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb7;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdkpct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb8;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdlxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb9;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhwct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xba;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdzxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbb;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdzxyxct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbc;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdszryct");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbd;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdgdgx");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbe;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdscsf");
                                                  if (!bVar1) {
                                                    uVar2 = 0xbf;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdwhcw");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdgzdx");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdwdsy");
                                                  if (!bVar1) {
                                                    uVar2 = 0xc2;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdszkyct");
                                                  if (!bVar1) {
                                                    uVar2 = 0x5f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdsh")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x60;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdpps");
                                                  if (!bVar1) {
                                                    uVar2 = 0x61;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdaqypc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x62;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdyyss");
                                                  if (!bVar1) {
                                                    uVar2 = 100;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnd")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x65;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdttdt");
                                                  if (!bVar1) {
                                                    uVar2 = 99;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdyk")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x66;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdtyd");
                                                  if (!bVar1) {
                                                    uVar2 = 0x67;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdbbg"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x68;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdhzmp");
                                                  if (!bVar1) {
                                                    uVar2 = 0x69;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdhlg"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x6a;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdzm");
                                                  if (!bVar1) {
                                                    uVar2 = 0x6b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxchdmp");
                                                  if (!bVar1) {
                                                    uVar2 = 0x72;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdPVZ2Prototype");
                                                  if (!bVar1) {
                                                    uVar2 = 0x6d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdls")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x6c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdjj");
                                                  if (!bVar1) {
                                                    uVar2 = 0x6e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdppzs");
                                                  if (!bVar1) {
                                                    uVar2 = 0x73;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdsx")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x71;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.tencent.tmgp.pvz2hdtxyyb");
                                                  if (!bVar1) {
                                                    uVar2 = 0x6f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdamz"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x70;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdkpsj");
                                                  if (!bVar1) {
                                                    uVar2 = 0x74;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdbr")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x75;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdyq");
                                                  if (!bVar1) {
                                                    uVar2 = 0x76;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdnby"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x77;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdqxz");
                                                  if (!bVar1) {
                                                    uVar2 = 0x78;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdltbl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x79;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdczsj");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdkubi");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshumazy");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdnkzs");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdwanka");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdwrsj");
                                                  if (!bVar1) {
                                                    uVar2 = 0x7f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdppyx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x80;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthddev"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0xb2;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdharmony");
                                                  if (!bVar1) {
                                                    uVar2 = 0x81;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxyaz");
                                                  if (!bVar1) {
                                                    uVar2 = 0x82;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdqn")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x83;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthddianyou");
                                                  if (!bVar1) {
                                                    uVar2 = 0x84;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdzhongxin");
                                                  if (!bVar1) {
                                                    uVar2 = 0x85;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshqc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x86;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2345");
                                                  if (!bVar1) {
                                                    uVar2 = 0x87;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdxly"
                                                                           );
                                                    if (!bVar1) {
                                                      uVar2 = 0x88;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthddwmc");
                                                  if (!bVar1) {
                                                    uVar2 = 0x89;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdywwl");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxiaoqi");
                                                  if (!bVar1) {
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdccyx");
                                                  if ((bVar1) ||
                                                     (bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdylehihi"), bVar1)) {
                                                    uVar2 = 0x8b;
                                                  }
                                                  else {
                                                    uVar2 = 0x8c;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdccyx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdqishizs");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxxrjy");
                                                  if (!bVar1) {
                                                    uVar2 = 0x8f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshxb");
                                                  if (!bVar1) {
                                                    uVar2 = 0x90;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxiaoha");
                                                  if (!bVar1) {
                                                    uVar2 = 0x91;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdjrtt");
                                                  if (!bVar1) {
                                                    uVar2 = 0x92;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd233qd");
                                                  if (!bVar1) {
                                                    uVar2 = 0x93;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhaoyoukb");
                                                  if (!bVar1) {
                                                    uVar2 = 0x94;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.g.baidu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa4;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdtw")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0xa6;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdbmsq");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa7;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhbili");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa8;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhourplay");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa9;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.bilibili");
                                                  if (!bVar1) {
                                                    uVar2 = 0xaa;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthd07")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0xab;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthd1test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xac;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xad;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd3test");
                                                  if (!bVar1) {
                                                    uVar2 = 0xae;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd4test");
                                                  if (!bVar1) {
                                                    uVar2 = 0x95;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdkuaishou");
                                                  if (!bVar1) {
                                                    uVar2 = 0xaf;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.kuaishou");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdhwctdp");
                                                  if (!bVar1) {
                                                    uVar2 = 0xb1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.honor");
                                                  if (!bVar1) {
                                                    uVar2 = 0x97;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd2345m");
                                                  if (!bVar1) {
                                                    uVar2 = 0x98;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmeituxx");
                                                  if (!bVar1) {
                                                    uVar2 = 0x99;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.bytedance.gamecenter");
                                                  if (!bVar1) {
                                                    uVar2 = 0x96;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdpapa");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9a;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdshark");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9b;
                                                    bVar1 = std::operator==(asStack_10,
                                                                            "com.popcap.pvz2cthdks")
                                                    ;
                                                    if (!bVar1) {
                                                      uVar2 = 0x9c;
                                                      bVar1 = std::operator==(asStack_10,
                                                                                                                                                            
                                                  "com.popcap.pvz2cthdbazhang");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9d;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd.todaygame");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9e;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdccplay");
                                                  if (!bVar1) {
                                                    uVar2 = 0x9f;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdqszs");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa0;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmigu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa1;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthd4migu");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa2;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdmgtv");
                                                  if (!bVar1) {
                                                    uVar2 = 0xa3;
                                                    bVar1 = std::operator==(asStack_10,
                                                                                                                                                        
                                                  "com.popcap.pvz2cthdxy51");
                                                  if (!bVar1) {
                                                    uVar2 = GetPlatformByNewPackageName();
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* LawnApp::isOppoNewerOptimizationOpen() */

bool __thiscall LawnApp::isOppoNewerOptimizationOpen(LawnApp *this)

{
  int iVar1;
  
  iVar1 = GetPlatform(this);
  return iVar1 == 0x25 || iVar1 == 0x59;
}


/* LawnApp::IsPlatformChannel() */

bool __thiscall LawnApp::IsPlatformChannel(LawnApp *this)

{
  int iVar1;
  
  iVar1 = GetPlatform(this);
  return iVar1 - 0xfU < 0x2b || iVar1 - 0x43U < 0x70;
}


/* LawnApp::IsChannelWithBigDeal() */

bool LawnApp::IsChannelWithBigDeal(void)

{
  int iVar1;
  
  iVar1 = GetPlatform(gLawnApp);
  if ((0x42 < iVar1) && (iVar1 = GetPlatform(gLawnApp), iVar1 < 0xb3)) {
    return true;
  }
  iVar1 = GetPlatform(gLawnApp);
  if ((0xe < iVar1) && (iVar1 = GetPlatform(gLawnApp), iVar1 < 0x3a)) {
    iVar1 = GetPlatform(gLawnApp);
    return iVar1 != 0x33;
  }
  return false;
}


/* LawnApp::IsPlatformHD() */

bool __thiscall LawnApp::IsPlatformHD(LawnApp *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = GetPlatform(this);
  bVar2 = iVar1 == 0 || iVar1 == 6;
  if ((((iVar1 != 0 && iVar1 != 6) && (bVar2 = true, 1 < iVar1 - 8U)) &&
      ((iVar1 - 0xbU & 0xfffffffd) != 0)) && (0x6f < iVar1 - 0x43U)) {
    bVar2 = iVar1 - 0xb5U < 0xe;
  }
  return bVar2;
}


/* LawnApp::IsDev() */

bool __thiscall LawnApp::IsDev(LawnApp *this)

{
  int iVar1;
  
  iVar1 = GetPlatform(this);
  return iVar1 == 0x80;
}


/* LawnApp::GetAndroidSDKInitStatus() */

undefined4 __thiscall LawnApp::GetAndroidSDKInitStatus(LawnApp *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsDev(this);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x365c);
  }
  return uVar2;
}


/* LawnApp::IsAndroidSDKInitEnd() */

undefined4 __thiscall LawnApp::IsAndroidSDKInitEnd(LawnApp *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsDev(this);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(this + 0x3658);
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetAppNameForiCloud() */

void LawnApp::GetAppNameForiCloud(void)

{
  long lVar1;
  undefined4 uVar2;
  LawnApp *in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  uVar2 = GetPlatform(in_x0);
  switch(uVar2) {
  case 1:
    std::string::string(in_x8,"PLATFORM_CHINA_MOBILE");
    nop();
    break;
  case 2:
    std::string::string(in_x8,"PLATFORM_CHINA_UNICOM");
    nop();
    break;
  case 3:
    std::string::string(in_x8,"PLATFORM_CHINA_UNICOM_WIDEBAND");
    nop();
    break;
  case 4:
    std::string::string(in_x8,"PLATFORM_CHINA_TELECOM");
    nop();
    break;
  case 5:
    std::string::string(in_x8,"PLATFORM_CHINA_MOBILE_MM");
    nop();
    break;
  case 6:
    std::string::string(in_x8,"PLATFORM_CHINA_MOBILE");
    nop();
    break;
  case 7:
    std::string::string(in_x8,"PLATFORM_CHINA_MOBILE_MM_SICHUAN");
    nop();
    break;
  case 8:
    std::string::string(in_x8,"PLATFORM_CHINA_UNICOM");
    nop();
    break;
  case 9:
    std::string::string(in_x8,"PLATFORM_CHINA_UNICOM_WIDEBAND");
    nop();
    break;
  case 10:
    std::string::string(in_x8,"PLATFORM_CHINA_UNICOM");
    nop();
    break;
  case 0xb:
    std::string::string(in_x8,"PLATFORM_CHINA_MOBILE_MM");
    nop();
    break;
  case 0xc:
    std::string::string(in_x8,"PLATFORM_QQ");
    nop();
    break;
  case 0xd:
    std::string::string(in_x8,"PLATFORM_QQ");
    nop();
    break;
  default:
    std::string::string(in_x8,"com.popcap.android.pvz2");
    nop();
    break;
  case 0xf:
    std::string::string(in_x8,"PLATFORM_91");
    nop();
    break;
  case 0x10:
    std::string::string(in_x8,"PLATFORM_BAIDU_DUOKU");
    nop();
    break;
  case 0x11:
    std::string::string(in_x8,"PLATFORM_BAIDU_YOUXI");
    nop();
    break;
  case 0x12:
    std::string::string(in_x8,"PLATFORM_BAIDU_IQIYI");
    nop();
    break;
  case 0x13:
    std::string::string(in_x8,"PLATFORM_ANZHI");
    nop();
    break;
  case 0x14:
    std::string::string(in_x8,"PLATFORM_UC");
    nop();
    break;
  case 0x15:
    std::string::string(in_x8,"PLATFORM_WANDOULABS");
    nop();
    break;
  case 0x16:
    std::string::string(in_x8,"PLATFORM_XIAOMI");
    nop();
    break;
  case 0x17:
    std::string::string(in_x8,"PLATFORM_YINGYONGHUI");
    nop();
    break;
  case 0x18:
    std::string::string(in_x8,"PLATFORM_XINLANG");
    nop();
    break;
  case 0x19:
    std::string::string(in_x8,"PLATFORM_SHOUGOU");
    nop();
    break;
  case 0x1a:
    std::string::string(in_x8,"PLATFORM_DANGLE");
    nop();
    break;
  case 0x1b:
    std::string::string(in_x8,"PLATFORM_JINLI");
    nop();
    break;
  case 0x1c:
    std::string::string(in_x8,"PLATFORM_MAOPAOTANG");
    nop();
    break;
  case 0x1d:
    std::string::string(in_x8,"PLATFORM_360");
    nop();
    break;
  case 0x1e:
    std::string::string(in_x8,"PLATFORM_MUMAYI");
    nop();
    break;
  case 0x1f:
    std::string::string(in_x8,"PLATFORM_JINSHAN");
    nop();
    break;
  case 0x20:
    std::string::string(in_x8,"PLATFORM_MOTO");
    nop();
    break;
  case 0x21:
    std::string::string(in_x8,"PLATFORM_LENOVO");
    nop();
    break;
  case 0x22:
    std::string::string(in_x8,"PLATFORM_ZHONGXING");
    nop();
    break;
  case 0x23:
    std::string::string(in_x8,"PLATFORM_CHUANGWEI");
    nop();
    break;
  case 0x24:
    std::string::string(in_x8,"PLATFORM_7K");
    nop();
    break;
  case 0x25:
    std::string::string(in_x8,"PLATFORM_OPPO");
    nop();
    break;
  case 0x26:
    std::string::string(in_x8,"PLATFORM_TELECOM_HUAWEI");
    nop();
    break;
  case 0x27:
    std::string::string(in_x8,"PLATFORM_4399");
    nop();
    break;
  case 0x28:
    std::string::string(in_x8,"PLATFORM_SUNING");
    nop();
    break;
  case 0x29:
    std::string::string(in_x8,"PLATFORM_POPCAP");
    nop();
    break;
  case 0x2a:
    std::string::string(in_x8,"PLATFORM_LEWANYOU");
    nop();
    break;
  case 0x2b:
    std::string::string(in_x8,"PLATFORM_SHOUHU");
    nop();
    break;
  case 0x2c:
    std::string::string(in_x8,"PLATFORM_PPS");
    nop();
    break;
  case 0x2d:
    std::string::string(in_x8,"PLATFORM_AIQIYI");
    nop();
    break;
  case 0x2e:
    std::string::string(in_x8,"PLATFORM_YOUYI");
    nop();
    break;
  case 0x2f:
    std::string::string(in_x8,"PLATFORM_YOUKU");
    nop();
    break;
  case 0x30:
    std::string::string(in_x8,"PLATFORM_NDUO");
    nop();
    break;
  case 0x31:
    std::string::string(in_x8,"PLATFORM_TIANTIANDONGTING");
    nop();
    break;
  case 0x32:
    std::string::string(in_x8,"PLATFORM_TIANYIDA");
    nop();
    break;
  case 0x33:
    std::string::string(in_x8,"PLATFORM_BUBUGAO");
    nop();
    break;
  case 0x34:
    std::string::string(in_x8,"PLATFORM_HANGZHOUMOPIN");
    nop();
    break;
  case 0x35:
    std::string::string(in_x8,"PLATFORM_XUANCAIHUDONGMOPO");
    nop();
    break;
  case 0x36:
    std::string::string(in_x8,"PLATFORM_TENCENT");
    nop();
    break;
  case 0x37:
    std::string::string(in_x8,"PLATFORM_LESHI");
    nop();
    break;
  case 0x38:
    std::string::string(in_x8,"PLATFORM_MEIZU");
    nop();
    break;
  case 0x39:
    std::string::string(in_x8,"PLATFORM_KUPAI");
    nop();
    break;
  case 0x3c:
    std::string::string(in_x8,"PLATFORM_TELECOM_KUPAI");
    nop();
    break;
  case 0x3d:
    std::string::string(in_x8,"PLATFORM_TELECOM_LENOVO");
    nop();
    break;
  case 0x3e:
    std::string::string(in_x8,"PLATFORM_TELECOM_HUAWEI");
    nop();
    break;
  case 0x3f:
    std::string::string(in_x8,"PLATFORM_TELECOM_ZHONGXING");
    nop();
    break;
  case 0x40:
    std::string::string(in_x8,"PLATFORM_TELECOM_ZHONGXINGYOUXI");
    nop();
    break;
  case 0x43:
    std::string::string(in_x8,"PLATFORM_91");
    nop();
    break;
  case 0x44:
    std::string::string(in_x8,"PLATFORM_BAIDU_DUOKU");
    nop();
    break;
  case 0x45:
    std::string::string(in_x8,"PLATFORM_BAIDU_YOUXI");
    nop();
    break;
  case 0x46:
    std::string::string(in_x8,"PLATFORM_BAIDU_IQIYI");
    nop();
    break;
  case 0x47:
    std::string::string(in_x8,"PLATFORM_ANZHI");
    nop();
    break;
  case 0x48:
    std::string::string(in_x8,"PLATFORM_UC");
    nop();
    break;
  case 0x49:
    std::string::string(in_x8,"PLATFORM_WANDOULABS");
    nop();
    break;
  case 0x4a:
    std::string::string(in_x8,"PLATFORM_XIAOMI");
    nop();
    break;
  case 0x4b:
    std::string::string(in_x8,"PLATFORM_YINGYONGHUI");
    nop();
    break;
  case 0x4c:
    std::string::string(in_x8,"PLATFORM_XINLANG");
    nop();
    break;
  case 0x4d:
    std::string::string(in_x8,"PLATFORM_SHOUGOU");
    nop();
    break;
  case 0x4e:
    std::string::string(in_x8,"PLATFORM_DANGLE");
    nop();
    break;
  case 0x4f:
    std::string::string(in_x8,"PLATFORM_JINLI_HD");
    nop();
    break;
  case 0x50:
    std::string::string(in_x8,"PLATFORM_MAOPAOTANG");
    nop();
    break;
  case 0x51:
    std::string::string(in_x8,"PLATFORM_360");
    nop();
    break;
  case 0x52:
    std::string::string(in_x8,"PLATFORM_MUMAYI");
    nop();
    break;
  case 0x53:
    std::string::string(in_x8,"PLATFORM_JINSHAN");
    nop();
    break;
  case 0x54:
    std::string::string(in_x8,"PLATFORM_MOTO");
    nop();
    break;
  case 0x55:
    std::string::string(in_x8,"PLATFORM_LENOVO");
    nop();
    break;
  case 0x56:
    std::string::string(in_x8,"PLATFORM_ZHONGXING");
    nop();
    break;
  case 0x57:
    std::string::string(in_x8,"PLATFORM_CHUANGWEI");
    nop();
    break;
  case 0x58:
    std::string::string(in_x8,"PLATFORM_7K");
    nop();
    break;
  case 0x59:
    std::string::string(in_x8,"PLATFORM_OPPO");
    nop();
    break;
  case 0x5a:
    std::string::string(in_x8,"PLATFORM_TELECOM_HUAWEI");
    nop();
    break;
  case 0x5b:
    std::string::string(in_x8,"PLATFORM_4399");
    nop();
    break;
  case 0x5c:
    std::string::string(in_x8,"PLATFORM_SUNING");
    nop();
    break;
  case 0x5d:
    std::string::string(in_x8,"PLATFORM_POPCAP");
    nop();
    break;
  case 0x5e:
    std::string::string(in_x8,"PLATFORM_LEWANYOU");
    nop();
    break;
  case 0x5f:
    std::string::string(in_x8,"PLATFORM_SHOUHU");
    nop();
    break;
  case 0x60:
    std::string::string(in_x8,"PLATFORM_PPS");
    nop();
    break;
  case 0x61:
    std::string::string(in_x8,"PLATFORM_AIQIYI");
    nop();
    break;
  case 0x62:
    std::string::string(in_x8,"PLATFORM_YOUYI");
    nop();
    break;
  case 99:
    std::string::string(in_x8,"PLATFORM_YOUKU");
    nop();
    break;
  case 100:
    std::string::string(in_x8,"PLATFORM_NDUO");
    nop();
    break;
  case 0x65:
    std::string::string(in_x8,"PLATFORM_TIANTIANDONGTING");
    nop();
    break;
  case 0x66:
    std::string::string(in_x8,"PLATFORM_TIANYIDA");
    nop();
    break;
  case 0x67:
    std::string::string(in_x8,"PLATFORM_BUBUGAO");
    nop();
    break;
  case 0x68:
    std::string::string(in_x8,"PLATFORM_HANGZHOUMOPIN");
    nop();
    break;
  case 0x69:
    std::string::string(in_x8,"PLATFORM_HONGLONGGUO");
    nop();
    break;
  case 0x6a:
    std::string::string(in_x8,"PLATFORM_ZHANGMENG");
    nop();
    break;
  case 0x6b:
    std::string::string(in_x8,"PLATFORM_XUANCAIHUDONGMOPO");
    nop();
    break;
  case 0x6c:
    std::string::string(in_x8,"PLATFORM_JJ_HD");
    nop();
    break;
  case 0x6d:
    std::string::string(in_x8,"PLATFORM_LESHI_HD");
    nop();
    break;
  case 0x6e:
    std::string::string(in_x8,"PLATFORM_PPZHUSHOU_HD");
    nop();
    break;
  case 0x6f:
    std::string::string(in_x8,"PLATFORM_MEIZU_HD");
    nop();
    break;
  case 0x70:
    std::string::string(in_x8,"PLATFORM_KUPAI_HD");
    nop();
    break;
  case 0x71:
    std::string::string(in_x8,"PLATFORM_TENCENT_HD");
    nop();
    break;
  case 0x73:
    std::string::string(in_x8,"PLATFORM_SAMSUNG");
    nop();
    break;
  case 0x74:
    std::string::string(in_x8,"PLATFORM_BAORUAN");
    nop();
    break;
  case 0x75:
    std::string::string(in_x8,"PLATFORM_PENGYOUWAN_HD");
    nop();
    break;
  case 0x76:
    std::string::string(in_x8,"PLATFORM_NUBIYA");
    nop();
    break;
  case 0x77:
    std::string::string(in_x8,"PLATFORM_QIXIAZI");
    nop();
    break;
  case 0x78:
    std::string::string(in_x8,"PLATFORM_TIANTIAN");
    nop();
    break;
  case 0x79:
    std::string::string(in_x8,"PLATFORM_CHUIZI");
    nop();
    break;
  case 0x7a:
    std::string::string(in_x8,"PLATFORM_KUBI");
    nop();
    break;
  case 0x7b:
    std::string::string(in_x8,"PLATFORM_SHUMA");
    nop();
    break;
  case 0x7c:
    std::string::string(in_x8,"PLATFORM_NIUKOU");
    nop();
    break;
  case 0x7d:
    std::string::string(in_x8,"PLATFORM_WANKA");
    nop();
    break;
  case 0x7e:
    std::string::string(in_x8,"PLATFORM_VR");
    nop();
    break;
  case 0x7f:
    std::string::string(in_x8,"PLATFORM_PAPA");
    nop();
    break;
  case 0x80:
    std::string::string(in_x8,"PLATFORM_DEV");
    nop();
    break;
  case 0x81:
    std::string::string(in_x8,"PLATFORM_XYANDROID");
    nop();
    break;
  case 0x82:
    std::string::string(in_x8,"PLATFORM_QINGNING");
    nop();
    break;
  case 0x83:
    std::string::string(in_x8,"PLATFORM_DIANYOU");
    nop();
    break;
  case 0x84:
    std::string::string(in_x8,"PLATFORM_NEW_ZHONGXING");
    nop();
    break;
  case 0x85:
    std::string::string(in_x8,"PLATFORM_SHQC");
    nop();
    break;
  case 0x86:
    std::string::string(in_x8,"PLATFORM_2345");
    nop();
    break;
  case 0x87:
    std::string::string(in_x8,"PLATFORM_JINLIYU");
    nop();
    break;
  case 0x88:
    std::string::string(in_x8,"PLATFORM_DUOWANMC");
    nop();
    break;
  case 0x89:
    std::string::string(in_x8,"PLATFORM_YUEWAN_HD");
    nop();
    break;
  case 0x8a:
    std::string::string(in_x8,"PLATFORM_XIAOQI");
    nop();
    break;
  case 0x8b:
    std::string::string(in_x8,"PLATFORM_CCYX");
    nop();
    break;
  case 0x8c:
    std::string::string(in_x8,"PLATFORM_LEHIHI_HD");
    nop();
    break;
  case 0x8d:
    std::string::string(in_x8,"PLATFORM_QISHIZHUSHOU_HD");
    nop();
    break;
  case 0x8e:
    std::string::string(in_x8,"PLATFORM_XIXIRJY_HD");
    nop();
    break;
  case 0x8f:
    std::string::string(in_x8,"PLATFORM_BAIXUN_HD");
    nop();
    break;
  case 0x90:
    std::string::string(in_x8,"PLATFORM_XIAOHA_HD");
    nop();
    break;
  case 0x91:
    std::string::string(in_x8,"PLATFORM_DOUYIN_HD");
    nop();
    break;
  case 0x92:
    std::string::string(in_x8,"PLATFORM_233QD_HD");
    nop();
    break;
  case 0x93:
    std::string::string(in_x8,"PLATFORM_HAOYOUKB_HD");
    nop();
    break;
  case 0x94:
    std::string::string(in_x8,"PLATFORM_BAIDU_GAME_HD");
    nop();
    break;
  case 0x95:
    std::string::string(in_x8,"PLATFORM_KUAISHOU_HD");
    nop();
    break;
  case 0x96:
    std::string::string(in_x8,"PLATFORM_NEW_PAPA_HD");
    nop();
    break;
  case 0x97:
    std::string::string(in_x8,"PLATFORM_NEW_2345_HD");
    nop();
    break;
  case 0x98:
    std::string::string(in_x8,"PLATFORM_NEW_MEITU_HD");
    nop();
    break;
  case 0x99:
    std::string::string(in_x8,"PLATFORM_BYTEDANCE_HD");
    nop();
    break;
  case 0x9a:
    std::string::string(in_x8,"PLATFORM_SHARK_HD");
    nop();
    break;
  case 0x9b:
    std::string::string(in_x8,"PLATFORM_KS_HD");
    nop();
    break;
  case 0x9c:
    std::string::string(in_x8,"PLATFORM_BAZHANG_HD");
    nop();
    break;
  case 0x9d:
    std::string::string(in_x8,"PLATFORM_TODAYGAME_HD");
    nop();
    break;
  case 0x9e:
    std::string::string(in_x8,"PLATFORM_CCPLAY_HD");
    nop();
    break;
  case 0x9f:
    std::string::string(in_x8,"PLATFORM_QSZS_HD");
    nop();
    break;
  case 0xa0:
    std::string::string(in_x8,"PLATFORM_MIGU_HD");
    nop();
    break;
  case 0xa1:
    std::string::string(in_x8,"PLATFORM_MIGU4_HD");
    nop();
    break;
  case 0xa2:
    std::string::string(in_x8,"PLATFORM_MANGGUO_HD");
    nop();
    break;
  case 0xa3:
    std::string::string(in_x8,"PLATFORM_XIAOY_HD");
    nop();
    break;
  case 0xa4:
    std::string::string(in_x8,"PLATFORM_TEST_TW_HD");
    nop();
    break;
  case 0xa5:
    std::string::string(in_x8,"PLATFORM_CHINA_TELECOM");
    nop();
    break;
  case 0xa6:
    std::string::string(in_x8,"PLATFORM_CHINA_TELECOM_MSQ_HD");
    nop();
    break;
  case 0xa7:
    std::string::string(in_x8,"PLATFORM_HBILI");
    nop();
    break;
  case 0xa8:
    std::string::string(in_x8,"PLATFORM_HOURPLAY");
    nop();
    break;
  case 0xa9:
    std::string::string(in_x8,"PLATFORM_BILIBILI_HD");
    nop();
    break;
  case 0xaa:
    std::string::string(in_x8,"PLATFORM_GONGHUI_HD");
    nop();
    break;
  case 0xab:
    std::string::string(in_x8,"PLATFORM_TEST1_HD");
    nop();
    break;
  case 0xac:
    std::string::string(in_x8,"PLATFORM_TEST2_HD");
    nop();
    break;
  case 0xad:
    std::string::string(in_x8,"PLATFORM_TEST3_HD");
    nop();
    break;
  case 0xae:
    std::string::string(in_x8,"PLATFORM_TEST4_HD");
    nop();
    break;
  case 0xaf:
    std::string::string(in_x8,"PLATFORM_KUAISHOUSHOU_HD");
    nop();
    break;
  case 0xb0:
    std::string::string(in_x8,"PLATFORM_HUAWEI_TV_HD");
    nop();
    break;
  case 0xb1:
    std::string::string(in_x8,"PLATFORM_HONOR_HD");
    nop();
    break;
  case 0xb2:
    std::string::string(in_x8,"PLATFORM_OHOS");
    nop();
    break;
  case 0xb5:
    std::string::string(in_x8,"PLATFORM_TELECOM_AIYINYUE");
    nop();
    break;
  case 0xb6:
    std::string::string(in_x8,"PLATFORM_TELECOM_ANHUIYITUO");
    nop();
    break;
  case 0xb7:
    std::string::string(in_x8,"PLATFORM_TELECOM_KUPAI");
    nop();
    break;
  case 0xb8:
    std::string::string(in_x8,"PLATFORM_TELECOM_LENOVO");
    nop();
    break;
  case 0xb9:
    std::string::string(in_x8,"PLATFORM_TELECOM_HUAWEI");
    nop();
    break;
  case 0xba:
    std::string::string(in_x8,"PLATFORM_TELECOM_ZHONGXING");
    nop();
    break;
  case 0xbb:
    std::string::string(in_x8,"PLATFORM_TELECOM_ZHONGXINGYOUXI");
    nop();
    break;
  case 0xbc:
    std::string::string(in_x8,"PLATFORM_TELECOM_SUZHOURUIYI");
    nop();
    break;
  case 0xbd:
    std::string::string(in_x8,"PLATFORM_TELECOM_GUANGDONGGUANGXIN");
    nop();
    break;
  case 0xbe:
    std::string::string(in_x8,"PLATFORM_TELECOM_SICHUANSIFANG");
    nop();
    break;
  case 0xbf:
    std::string::string(in_x8,"PLATFORM_TELECOM_WUHANCHAOWAN");
    nop();
    break;
  case 0xc0:
    std::string::string(in_x8,"PLATFORM_TELECOM_GUANGZHOUDIANXIN");
    nop();
    break;
  case 0xc1:
    std::string::string(in_x8,"PLATFORM_TELECOM_WUDIANSHIYE");
    nop();
    break;
  case 0xc2:
    std::string::string(in_x8,"PLATFORM_TELECOM_SUZHOUKUYOU");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsQQAndSingleDay() */

void LawnApp::IsQQAndSingleDay(void)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = GetRealBeijingTime(gLawnApp);
  if (0 < local_10) {
    lVar2 = BeijingTime(gLawnApp,&local_10);
    if ((*(int *)(lVar2 + 0x14) == 0x71 && *(int *)(lVar2 + 0x10) == 10) &&
       (*(int *)(lVar2 + 0xc) - 8U < 8)) {
      iVar1 = GetPlatform(gLawnApp);
      uVar3 = 1;
      if ((iVar1 == 0xc) || (iVar1 = GetPlatform(gLawnApp), iVar1 == 0xd)) goto LAB_032682c4;
    }
  }
  uVar3 = 0;
LAB_032682c4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetLevelDaysByLevelString(std::string const&) */

void __thiscall LawnApp::GetLevelDaysByLevelString(LawnApp *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475ffc(asStack_18,param_1,0,2);
  bVar1 = std::operator==(asStack_18,"eg");
  if (bVar1) {
    lVar3 = FUN_05474178(param_1);
    FUN_05475ffc(asStack_10,param_1,5,lVar3 + -5);
    pcVar4 = (char *)FUN_0547429c(asStack_10);
    iVar2 = atoi(pcVar4);
    std::string::~string(asStack_10);
  }
  else {
    bVar1 = std::operator==(asStack_18,"pi");
    if (bVar1) {
      lVar3 = FUN_05474178(param_1);
      FUN_05475ffc(asStack_10,param_1,6,lVar3 + -6);
      pcVar4 = (char *)FUN_0547429c(asStack_10);
      iVar2 = atoi(pcVar4);
      iVar2 = iVar2 + 0xb;
      std::string::~string(asStack_10);
    }
    else {
      bVar1 = std::operator==(asStack_18,"co");
      if (bVar1) {
        lVar3 = FUN_05474178(param_1);
        FUN_05475ffc(asStack_10,param_1,6,lVar3 + -6);
        pcVar4 = (char *)FUN_0547429c(asStack_10);
        iVar2 = atoi(pcVar4);
        iVar2 = iVar2 + 0x15;
        std::string::~string(asStack_10);
      }
      else {
        bVar1 = std::operator==(asStack_18,"ko");
        iVar2 = 0;
        if (bVar1) {
          lVar3 = FUN_05474178(param_1);
          FUN_05475ffc(asStack_10,param_1,6,lVar3 + -6);
          pcVar4 = (char *)FUN_0547429c(asStack_10);
          iVar2 = atoi(pcVar4);
          iVar2 = iVar2 + 0x1f;
          std::string::~string(asStack_10);
        }
      }
    }
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::AddLocalizedLawnStringFile(std::string const&) */

void __thiscall LawnApp::AddLocalizedLawnStringFile(LawnApp *this,string *param_1)

{
  char *pcVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceManager::GetLocaleFolder(SUB81(*(undefined8 *)(this + 0x848),0));
  std::operator+(asStack_10,param_1);
  std::string::~string(asStack_10);
  pcVar1 = (char *)FUN_0547429c(asStack_18);
  TodStringListLoad(pcVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetScreenContentOffset() */

void LawnApp::GetScreenContentOffset(void)

{
  long in_x0;
  float *pfVar1;
  Point *in_x8;
  float local_c;
  long local_8;
  
  local_c = (float)*(int *)(in_x0 + 0xd4);
  local_8 = ___stack_chk_guard;
  pfVar1 = eastl::max_alt<float>((float *)(in_x0 + 0x28d8),&local_c);
  Sexy::Point::Point(in_x8,(*(int *)(gLawnApp + 0x724) - (int)*pfVar1) / 2,
                     (int)((float)*(int *)(gLawnApp + 0x728) - *(float *)(in_x0 + 0x28dc)) / 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowBoard() */

void __thiscall LawnApp::ShowBoard(LawnApp *this)

{
  int iVar1;
  Board *pBVar2;
  float *pfVar3;
  long *plVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"Board Shown");
  nop();
  std::string::~string((string *)local_10);
  nop();
  pBVar2 = ::operator_new(0xe08);
  Board::Board(pBVar2);
  *(Board **)(this + 0x9f0) = pBVar2;
  local_10[0] = (float)*(int *)(this + 0xd4);
  pfVar3 = eastl::max_alt<float>((float *)(this + 0x28d8),local_10);
  (**(code **)(*(long *)pBVar2 + 0x198))(pBVar2,0,0,(int)*pfVar3,*(undefined4 *)(this + 0xd8));
  local_20 = 0;
  local_1c = 0;
  Android::Graphics::GetScreenSizeInPixels
            (*(AndroidAppDriver **)(Sexy::gSexyAppBase + 0x10),&local_20,&local_1c);
  if ((((local_20 == 0x90c || (local_20 == 0x9d8 || (local_20 == 0x99c || local_20 == 0x960))) ||
       (local_20 == 0x924)) && (local_1c == 0x438)) || (2.1 <= (float)local_20 / (float)local_1c)) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18 = (int)(200.0 - (float)iVar1 * 0.5) + 0xe7;
  }
  else {
    local_18 = (int)((float)*(int *)(gLawnApp + 0x724) - *(float *)(this + 0x28d8));
  }
  Sexy::Point::Point((Point *)&local_18);
  pBVar2 = *(Board **)(this + 0x9f0);
  local_14 = (int)((float)*(int *)(gLawnApp + 0x728) - *(float *)(this + 0x28dc));
  Sexy::Point::Point((Point *)local_10,(TPoint *)&local_18);
  Board::SetBoardBaseOffset(pBVar2,(string *)local_10);
  plVar4 = *(long **)(this + 0x9f0);
  (**(code **)(*plVar4 + 0x198))
            (plVar4,local_18,local_14,(int)plVar4[10],(int)*(float *)(this + 0x28dc));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9f0));
  (**(code **)(**(long **)(this + 0x360) + 0xb8))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9f0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9f0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowWorldMap() */

void __thiscall LawnApp::ShowWorldMap(LawnApp *this)

{
  WorldMap *pWVar1;
  float *pfVar2;
  long *plVar3;
  undefined4 local_18;
  undefined4 local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar1 = ::operator_new(0xef8);
  WorldMap::WorldMap(pWVar1);
  *(WorldMap **)(this + 0x2de8) = pWVar1;
  std::string::string((string *)local_10,"WorldMap Shown");
  nop();
  std::string::~string((string *)local_10);
  nop();
  local_10[0] = (float)*(int *)(this + 0xd4);
  pfVar2 = eastl::max_alt<float>((float *)(this + 0x28d8),local_10);
  (**(code **)(**(long **)(this + 0x2de8) + 0x198))
            (*(long **)(this + 0x2de8),0,0,(int)*pfVar2,(int)*(float *)(this + 0x28dc));
  GetScreenContentOffset();
  pWVar1 = *(WorldMap **)(this + 0x2de8);
  Sexy::Point::Point((Point *)local_10,(TPoint *)&local_18);
  WorldMap::SetBaseOffset(pWVar1,(string *)local_10);
  plVar3 = *(long **)(this + 0x2de8);
  (**(code **)(*plVar3 + 0x198))
            (plVar3,local_18,local_14,(int)plVar3[10],*(undefined4 *)((long)plVar3 + 0x54));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de8));
  (**(code **)(**(long **)(this + 0x360) + 0xb8))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::VersionForceUpdate() */

void __thiscall LawnApp::VersionForceUpdate(LawnApp *this)

{
  bool bVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
  bVar1 = std::operator!=(asStack_10,"");
  std::string::~string(asStack_10);
  if (bVar1) {
    pcVar2 = *(code **)(*(long *)this + 0x168);
    Sexy::AndroidAsyncIOFileDriver::GetLoadDataPath();
    (*pcVar2)(this,asStack_10,0);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::WaitingGemCallBack(bool) */

void __thiscall LawnApp::WaitingGemCallBack(LawnApp *this,bool param_1)

{
  int iVar1;
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0325d668(*(undefined8 *)(this + 0x3040),*(undefined8 *)(this + 0x3050));
  if (iVar1 != 0) {
    Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
              ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x3038),(SexyURL *)(ulong)param_1);
  }
  Sexy::Delegate1<bool>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x3038),(Delegate2 *)aDStack_38);
  if (*(PVZ2WaitingDialog **)(this + 0x2e30) != (PVZ2WaitingDialog *)0x0) {
    if (param_1) {
      KillWaitingDialog(this);
    }
    else {
      PVZ2WaitingDialog::SetError(*(PVZ2WaitingDialog **)(this + 0x2e30));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::KillOppoNewerEventUI() */

void __thiscall LawnApp::KillOppoNewerEventUI(LawnApp *this)

{
  if (*(long *)(this + 0x2c88) != 0) {
    UISingletonDialog<OppoNewerEventUI>::CloseDialog();
    MessageRouter::Post((_func_void *)gMessageRouter);
    *(undefined8 *)(this + 0x2c88) = 0;
  }
  return;
}


/* LawnApp::IsServiceAvailable(ServiceFlags) const */

bool LawnApp::IsServiceAvailable(long param_1)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(param_1 + 0x2f40));
  return bVar1;
}


/* LawnApp::HasAnyServiceAvailable() */

undefined8 __thiscall LawnApp::HasAnyServiceAvailable(LawnApp *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsServiceAvailable(this,0x80);
  if ((cVar1 == '\0') && (cVar1 = IsServiceAvailable(this,0x100), cVar1 == '\0')) {
    uVar2 = IsServiceAvailable(this,0x20);
    return uVar2;
  }
  return 1;
}


/* LawnApp::IsFitVersionLimit() const */

char __thiscall LawnApp::IsFitVersionLimit(LawnApp *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = IsServiceAvailable(this,0x200);
  if (cVar1 == '\0') {
    cVar1 = '\x01';
  }
  else {
    iVar3 = Android::Info::SysGetProductVersionCode();
    cVar2 = FUN_0547419c((string *)(this + 0x2f50));
    if ((cVar2 == '\0') && (iVar4 = Version2Int((string *)(this + 0x2f50)), iVar3 < iVar4)) {
      cVar1 = '\0';
    }
    else {
      cVar2 = FUN_0547419c((string *)(this + 0x2f58));
      if ((cVar2 == '\0') && (iVar4 = Version2Int((string *)(this + 0x2f58)), iVar4 < iVar3)) {
        cVar1 = '\0';
      }
    }
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetAboutContentStringId() */

void __thiscall LawnApp::GetAboutContentStringId(LawnApp *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = ___stack_chk_guard;
  iVar3 = GetPlatform(gLawnApp);
  cVar2 = IsServiceAvailable(gLawnApp,0x100000);
  if (cVar2 == '\0') {
    FUN_05478178();
    nop();
  }
  else if ((iVar3 - 0x3cU < 5) || (iVar3 == 4)) {
    FUN_05478178();
    nop();
  }
  else if ((iVar3 - 0xb5U < 0xe) || (iVar3 == 0xa5)) {
    FUN_05478178();
    nop();
  }
  else if (iVar3 - 0xcU < 2) {
    FUN_05478178();
    nop();
  }
  else if (iVar3 == 0x1b) {
    FUN_05478178();
    nop();
  }
  else if (iVar3 == 0x4f) {
    FUN_05478178();
    nop();
  }
  else {
    FUN_05478178();
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::SetServiceAvailable(ServiceFlags, bool) */

void LawnApp::SetServiceAvailable(long param_1)

{
  SetFlag<DebugLogFlags>(param_1 + 0x2f40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetUpdateActivityImage(ActivityImageType, std::string const&) */

void __thiscall LawnApp::GetUpdateActivityImage(undefined8 param_1,int param_2,Sexy *param_3)

{
  long lVar1;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    Sexy::StringToUpper(param_3,___stack_chk_guard);
    std::operator+((string *)&PlantHeadshot::AvatarBigPrefix,asStack_18);
    lVar1 = StringHelper::ToImage(asStack_10,false);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (lVar1 == 0) {
      Sexy::StringToUpper(param_3,extraout_x1);
      std::operator+((string *)&PlantHeadshot::UpdateAvatarBigPrefix,asStack_18);
      lVar1 = StringHelper::ToImage(asStack_10,true);
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
    }
  }
  else {
    lVar1 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


/* LawnApp::IsPVZ2DialogExist() const */

bool __thiscall LawnApp::IsPVZ2DialogExist(LawnApp *this)

{
  long lVar1;
  
  if (*(long *)(this + 0x2e18) != 0) {
    return true;
  }
  lVar1 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
  return lVar1 != 0;
}


/* LawnApp::PushOverlaysToTop() */

void __thiscall LawnApp::PushOverlaysToTop(LawnApp *this)

{
  long lVar1;
  
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e00));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e08));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ef0));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x28d0));
  if (*(long *)(this + 0x2e18) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360));
  }
  lVar1 = UISingletonDialog<UIMessageBox>::GetSingletonPtr();
  if (lVar1 != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  }
  return;
}


/* LawnApp::ShowMainMenu() */

void __thiscall LawnApp::ShowMainMenu(LawnApp *this)

{
  MainMenu *this_00;
  
  UIWidget::ResetUI();
  this_00 = ::operator_new(0x230);
  MainMenu::MainMenu(this_00);
  *(MainMenu **)(this + 0x2e10) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e10));
  MainMenu::Initialize(*(MainMenu **)(this + 0x2e10));
  PushOverlaysToTop(this);
  return;
}


/* LawnApp::ShowWorldPreview(std::string const&) */

void __thiscall LawnApp::ShowWorldPreview(LawnApp *this,string *param_1)

{
  UniverseWorldInfo *this_00;
  
  if (*(long *)(this + 0x2a18) != 0) {
    return;
  }
  this_00 = ::operator_new(0x4a8);
  UniverseWorldInfo::UniverseWorldInfo(this_00,param_1);
  *(UniverseWorldInfo **)(this + 0x2a18) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a18));
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a18));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a18));
  return;
}


/* LawnApp::ShowWorldUnlock(std::string const&) */

void __thiscall LawnApp::ShowWorldUnlock(LawnApp *this,string *param_1)

{
  PVZ2UIUnlockPreview *this_00;
  
  if (*(long *)(this + 0x2df8) != 0) {
    return;
  }
  this_00 = ::operator_new(0x168);
  PVZ2UIUnlockPreview::PVZ2UIUnlockPreview(this_00);
  *(PVZ2UIUnlockPreview **)(this + 0x2df8) = this_00;
  PVZ2UIUnlockPreview::SetupForWorldNamed(this_00,param_1);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2df8));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2df8));
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2df8));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2df8));
  return;
}


/* LawnApp::ShowGetPlantBagUI(Sexy::RtWeakPtr<MagentoProductProps> const&, bool) */

void __thiscall LawnApp::ShowGetPlantBagUI(LawnApp *this,RtWeakPtr *param_1,bool param_2)

{
  GetPlantBagUI *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2db8);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x100);
    GetPlantBagUI::GetPlantBagUI(this_00,param_1,param_2);
    *(GetPlantBagUI **)(this + 0x2db8) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar1 = *(long *)(this + 0x2db8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2db8));
  return;
}


/* LawnApp::ShowGetNewerBagUI(bool, bool) */

void __thiscall LawnApp::ShowGetNewerBagUI(LawnApp *this,bool param_1,bool param_2)

{
  GetNewerBagUI *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2dc0);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x150);
    GetNewerBagUI::GetNewerBagUI(this_00,param_1,param_2);
    *(GetNewerBagUI **)(this + 0x2dc0) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar1 = *(long *)(this + 0x2dc0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dc0));
  return;
}


/* LawnApp::ShowGetGemsRestoreUI() */

void __thiscall LawnApp::ShowGetGemsRestoreUI(LawnApp *this)

{
  GetGemsRestoreUI *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2dc8);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x150);
    ::GetGemsRestoreUI::GetGemsRestoreUI(this_00);
    *(GetGemsRestoreUI **)(this + 0x2dc8) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar1 = *(long *)(this + 0x2dc8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dc8));
  return;
}


/* LawnApp::ShowNetConnectingUI(std::string const&) */

void __thiscall LawnApp::ShowNetConnectingUI(LawnApp *this,string *param_1)

{
  NetConnectingUI *this_00;
  long lVar1;
  
  KillNetConnectingUI(this);
  lVar1 = *(long *)(this + 0x2dd0);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x100);
    NetConnectingUI::NetConnectingUI(this_00,param_1);
    *(NetConnectingUI **)(this + 0x2dd0) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar1 = *(long *)(this + 0x2dd0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dd0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowRewardPlantUI(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall LawnApp::ShowRewardPlantUI(LawnApp *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  RewardPlantUI *pRVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    KillRewardPlantUI(this);
    lVar3 = *(long *)(this + 0x2de0);
    if (lVar3 == 0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      pRVar2 = ::operator_new(0x1b8);
      RewardPlantUI::RewardPlantUI(pRVar2,aRStack_10,1);
      *(RewardPlantUI **)(this + 0x2de0) = pRVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      (**(code **)(**(long **)(this + 0x360) + 0x60))
                (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de0));
      lVar3 = *(long *)(this + 0x2de0);
    }
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
    PushOverlaysToTop(this);
    (**(code **)(**(long **)(this + 0x360) + 0x98))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2de0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowRechargeRewardDisplayer(RechargeNode) */

void __thiscall LawnApp::ShowRechargeRewardDisplayer(LawnApp *this,undefined8 param_2)

{
  RechargeRewardDisplayer *pRVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2a40);
  if (lVar2 == 0) {
    pRVar1 = ::operator_new(0x100);
    RechargeRewardDisplayer::RechargeRewardDisplayer(pRVar1,param_2);
    *(RechargeRewardDisplayer **)(this + 0x2a40) = pRVar1;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pRVar1);
    lVar2 = *(long *)(this + 0x2a40);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a40));
  return;
}


/* LawnApp::ShowRechargeRewardDisplayer(bool, int) */

void __thiscall LawnApp::ShowRechargeRewardDisplayer(LawnApp *this,bool param_1,int param_2)

{
  RechargeRewardDisplayer *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2a40);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x100);
    RechargeRewardDisplayer::RechargeRewardDisplayer(this_00,param_1,param_2);
    *(RechargeRewardDisplayer **)(this + 0x2a40) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar1 = *(long *)(this + 0x2a40);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a40));
  return;
}


/* LawnApp::ShowWaitingDialog(std::wstring const&, int, int, int) */

undefined8 __thiscall
LawnApp::ShowWaitingDialog(LawnApp *this,wstring *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  PVZ2WaitingDialog *this_00;
  long lVar3;
  
  if (*(long *)(this + 0x2e30) != 0) {
    KillWaitingDialog(this);
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  iVar1 = FUN_0325f324(param_3);
  iVar2 = FUN_0325f324(param_4);
  this_00 = ::operator_new(0x230);
  PVZ2WaitingDialog::PVZ2WaitingDialog(this_00,param_1,param_2);
  lVar3 = *(long *)this_00;
  *(PVZ2WaitingDialog **)(this + 0x2e30) = this_00;
  (**(code **)(lVar3 + 0x198))
            (this_00,(*(int *)(this + 0x724) - iVar2) / 2,(*(int *)(this + 0x728) - iVar1) / 2,iVar2
             ,iVar1);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e30));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  return *(undefined8 *)(this + 0x2e30);
}


/* LawnApp::ShowWaitingDialog(std::wstring const&, int) */

undefined8 __thiscall LawnApp::ShowWaitingDialog(LawnApp *this,wstring *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  PVZ2WaitingDialog *this_00;
  long lVar3;
  
  if (*(long *)(this + 0x2e30) != 0) {
    KillWaitingDialog(this);
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  iVar1 = FUN_0325f324(400);
  iVar2 = FUN_0325f324(500);
  this_00 = ::operator_new(0x230);
  PVZ2WaitingDialog::PVZ2WaitingDialog(this_00,param_1,param_2);
  lVar3 = *(long *)this_00;
  *(PVZ2WaitingDialog **)(this + 0x2e30) = this_00;
  (**(code **)(lVar3 + 0x198))
            (this_00,(*(int *)(this + 0x724) - iVar2) / 2,(*(int *)(this + 0x728) - iVar1) / 2,iVar2
            );
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e30));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e30));
  return *(undefined8 *)(this + 0x2e30);
}


/* LawnApp::ShowCustomLevelView() */

void __thiscall LawnApp::ShowCustomLevelView(LawnApp *this)

{
  CustomLevelView *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2bc8);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x118);
    CustomLevelView::CustomLevelView(this_00);
    *(CustomLevelView **)(this + 0x2bc8) = this_00;
    CustomLevelView::InitView(this_00);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bc8));
    lVar1 = *(long *)(this + 0x2bc8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bc8));
  CustomLevelView::CheckUploadedLevels();
  return;
}


/* LawnApp::ShowArenaEndingUI(ArenaResult, std::vector<ZombieRecord, std::allocator<ZombieRecord> >
   const&, bool, int) */

void __thiscall
LawnApp::ShowArenaEndingUI
          (LawnApp *this,undefined8 param_2,undefined8 param_3,undefined1 param_4,undefined8 param_5
          )

{
  ArenaEndingUI *pAVar1;
  
  pAVar1 = *(ArenaEndingUI **)(this + 0x2e38);
  if (pAVar1 == (ArenaEndingUI *)0x0) {
    pAVar1 = ::operator_new(0x198);
    ArenaEndingUI::ArenaEndingUI(pAVar1,param_2,param_3,param_4,param_5);
    *(ArenaEndingUI **)(this + 0x2e38) = pAVar1;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pAVar1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e38));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e38));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e38));
  return;
}


/* LawnApp::ShowPVPMapUI() */

void __thiscall LawnApp::ShowPVPMapUI(LawnApp *this)

{
  long *plVar1;
  PVPMapUI *this_00;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *(long *)(this + 0x2e88);
  if (lVar3 == 0) {
    this_00 = ::operator_new(0x8240);
    PVPMapUI::PVPMapUI(this_00);
    *(PVPMapUI **)(this + 0x2e88) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00 + 8);
    lVar3 = *(long *)(this + 0x2e88) + 8;
    if (*(long *)(this + 0x2e88) == 0) {
      lVar3 = 0;
    }
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
    PushOverlaysToTop(this);
    plVar1 = *(long **)(this + 0x360);
    lVar2 = 0;
    lVar3 = *(long *)(this + 0x2e88);
    pcVar4 = *(code **)(*plVar1 + 0x98);
    if (lVar3 == 0) goto LAB_03269e9c;
  }
  else {
    plVar1 = *(long **)(this + 0x360);
    pcVar4 = *(code **)(*plVar1 + 0x98);
  }
  lVar2 = lVar3 + 8;
LAB_03269e9c:
  (*pcVar4)(plVar1,lVar2);
  return;
}


/* LawnApp::ShowLotteryResultUI() */

undefined8 __thiscall LawnApp::ShowLotteryResultUI(LawnApp *this)

{
  PVZ2UILotteryResult *this_00;
  
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = *(PVZ2UILotteryResult **)(this + 0x2ea0);
  if (this_00 == (PVZ2UILotteryResult *)0x0) {
    this_00 = ::operator_new(0x160);
    PVZ2UILotteryResult::PVZ2UILotteryResult(this_00,*(int *)(this + 0xd4),*(int *)(this + 0xd8));
    *(PVZ2UILotteryResult **)(this + 0x2ea0) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ea0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ea0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ea0));
  return *(undefined8 *)(this + 0x2ea0);
}


/* LawnApp::ShowDailySignRewardWithTW() */

void __thiscall LawnApp::ShowDailySignRewardWithTW(LawnApp *this)

{
  DailySignRewardWithTW *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x9c0);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x140);
    DailySignRewardWithTW::DailySignRewardWithTW(this_00);
    *(DailySignRewardWithTW **)(this + 0x9c0) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar1 = *(long *)(this + 0x9c0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x9c0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9c0));
  return;
}


/* LawnApp::ShowCodeRewardUI() */

void __thiscall LawnApp::ShowCodeRewardUI(LawnApp *this)

{
  CodeRewardUI *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x9c8);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x140);
    CodeRewardUI::CodeRewardUI(this_00);
    *(CodeRewardUI **)(this + 0x9c8) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar1 = *(long *)(this + 0x9c8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x9c8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9c8));
  return;
}


/* LawnApp::ShowSkycityBossWarnig() */

void __thiscall LawnApp::ShowSkycityBossWarnig(LawnApp *this)

{
  SkycityBossWarningInfo *this_00;
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2a70);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0xe0);
    SkycityBossWarningInfo::SkycityBossWarningInfo(this_00);
    *(SkycityBossWarningInfo **)(this + 0x2a70) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar1 = *(long *)(this + 0x2a70);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar1);
  PushOverlaysToTop(this);
  return;
}


/* LawnApp::ShowRedPackOpenUI(int) */

void __thiscall LawnApp::ShowRedPackOpenUI(LawnApp *this,int param_1)

{
  RedPackOpenUI *this_00;
  
  if (*(long *)(this + 0x2a88) != 0) {
    KillRedPackOpenUI(this);
  }
  this_00 = ::operator_new(0x140);
  RedPackOpenUI::RedPackOpenUI(this_00,param_1);
  *(RedPackOpenUI **)(this + 0x2a88) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a88));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a88));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a88));
  return;
}


/* LawnApp::ShowBoxOpenUI(std::string const&) */

void __thiscall LawnApp::ShowBoxOpenUI(LawnApp *this,string *param_1)

{
  BoxOpenUI *this_00;
  long lVar1;
  
  if (*(long *)(this + 0x2a90) != 0) {
    KillBoxOpenUI(this);
  }
  this_00 = ::operator_new(0x120);
  BoxOpenUI::BoxOpenUI(this_00,param_1);
  lVar1 = *(long *)this_00;
  *(BoxOpenUI **)(this + 0x2a90) = this_00;
  (**(code **)(lVar1 + 0x328))(this_00);
  BoxOpenUI::InitView(*(BoxOpenUI **)(this + 0x2a90));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a90));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a90));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a90));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a90));
  return;
}


/* LawnApp::ShowServerBoxOpenUI() */

void __thiscall LawnApp::ShowServerBoxOpenUI(LawnApp *this)

{
  ServerBoxOpenUI *this_00;
  
  if (*(long *)(this + 0x2a98) != 0) {
    KillServerBoxOpenUI(this);
  }
  this_00 = ::operator_new(0x148);
  ServerBoxOpenUI::ServerBoxOpenUI(this_00);
  *(ServerBoxOpenUI **)(this + 0x2a98) = this_00;
  (**(code **)(*(long *)this_00 + 0x328))(this_00);
  BoxOpenUI::InitView(*(BoxOpenUI **)(this + 0x2a98));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a98));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a98));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a98));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a98));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowServerBoxOpenUI(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&, std::wstring) */

void __thiscall LawnApp::ShowServerBoxOpenUI(LawnApp *this,map *param_1,undefined8 param_3)

{
  wstring *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ShowServerBoxOpenUI(this);
  ServerBoxOpenUI::SetContentList(*(ServerBoxOpenUI **)(this + 0x2a98),param_1);
  pwVar1 = *(wstring **)(this + 0x2a98);
  FUN_05477b24(auStack_10,param_3);
  LevelEditorStatueMazeSliderWidget::SetDescription2(pwVar1);
  FUN_05476c50(auStack_10);
  BoxOpenUI::StartPlayingAnimation(*(BoxOpenUI **)(this + 0x2a98));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowPlantOfferOpenUI() */

void __thiscall LawnApp::ShowPlantOfferOpenUI(LawnApp *this)

{
  PlantOfferOpenUI *this_00;
  
  if (*(long *)(this + 0x2aa0) != 0) {
    KillPlantOfferOpenUI(this);
  }
  this_00 = ::operator_new(0x148);
  PlantOfferOpenUI::PlantOfferOpenUI(this_00);
  *(PlantOfferOpenUI **)(this + 0x2aa0) = this_00;
  (**(code **)(*(long *)this_00 + 0x328))(this_00);
  BoxOpenUI::InitView(*(BoxOpenUI **)(this + 0x2aa0));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa0));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2aa0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantOfferOpenUI(std::map<int, int, std::less<int>, std::allocator<std::pair<int
   const, int> > > const&, std::wstring) */

void __thiscall LawnApp::ShowPlantOfferOpenUI(LawnApp *this,map *param_1,undefined8 param_3)

{
  wstring *pwVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ShowPlantOfferOpenUI(this);
  ServerBoxOpenUI::SetContentList(*(ServerBoxOpenUI **)(this + 0x2aa0),param_1);
  pwVar1 = *(wstring **)(this + 0x2aa0);
  FUN_05477b24(auStack_10,param_3);
  LevelEditorStatueMazeSliderWidget::SetDescription2(pwVar1);
  FUN_05476c50(auStack_10);
  BoxOpenUI::StartPlayingAnimation(*(BoxOpenUI **)(this + 0x2aa0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowActiveEntranceUI(ActiveEntranceType) */

void __thiscall LawnApp::ShowActiveEntranceUI(LawnApp *this,undefined8 param_2)

{
  ActiveEntranceUI *pAVar1;
  
  if (*(long *)(this + 0x2db0) != 0) {
    KillActiveEntranceUI(this);
  }
  pAVar1 = ::operator_new(0x118);
  ActiveEntranceUI::ActiveEntranceUI(pAVar1,param_2);
  *(ActiveEntranceUI **)(this + 0x2db0) = pAVar1;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pAVar1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2db0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2db0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2db0));
  return;
}


/* LawnApp::DoNewOptions(bool, bool) */

void __thiscall LawnApp::DoNewOptions(LawnApp *this,bool param_1,bool param_2)

{
  NewOptionsDialog *this_00;
  
  if (*(long *)(this + 0x2e28) != 0) {
    (**(code **)(*(long *)this + 0x3d8))(this);
    return;
  }
  this_00 = ::operator_new(0x288);
  NewOptionsDialog::NewOptionsDialog(this_00,param_1,param_2);
  *(NewOptionsDialog **)(this + 0x2e28) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),this_00);
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),(Widget *)this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x98))(*(long **)(this + 0x360),this_00);
  (**(code **)(*(long *)this + 0x3d8))(this);
  return;
}


/* LawnApp::showSpecifiedWidget(Sexy::Widget*, bool, bool) */

void __thiscall
LawnApp::showSpecifiedWidget(LawnApp *this,Widget *param_1,bool param_2,bool param_3)

{
  if (param_1 != (Widget *)0x0) {
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),param_1);
    PushOverlaysToTop(this);
    if (param_3) {
      Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),param_1);
    }
    if (param_2) {
      (**(code **)(**(long **)(this + 0x360) + 0x98))(*(long **)(this + 0x360),param_1);
      return;
    }
  }
  return;
}


/* LawnApp::ShowEndLevelUI() */

void __thiscall LawnApp::ShowEndLevelUI(LawnApp *this)

{
  EndLevelUI *this_00;
  
  if (*(long *)(this + 0x2e90) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x98))(*(long **)(this + 0x360));
    return;
  }
  this_00 = ::operator_new(0x168);
  EndLevelUI::EndLevelUI(this_00);
  *(EndLevelUI **)(this + 0x2e90) = this_00;
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,0,0,*(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8));
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e90));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e90));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e90));
  return;
}


/* LawnApp::ShowPVZ2Dialog(float, float, PVZ2UIDialog*) */

undefined8 __thiscall
LawnApp::ShowPVZ2Dialog(LawnApp *this,float param_1,float param_2,PVZ2UIDialog *param_3)

{
  char cVar1;
  
  if ((*(long *)(this + 0x2e18) != 0) &&
     (cVar1 = FUN_0325d698(*(undefined1 *)(*(long *)(this + 0x2e18) + 0x1c0)), cVar1 == '\0')) {
    KillPVZ2Dialog(this);
  }
  if (param_3 == (PVZ2UIDialog *)0x0) {
    param_3 = ::operator_new(0x1e8);
    PVZ2UIDialog::PVZ2UIDialog(param_3);
    *(PVZ2UIDialog **)(this + 0x2e18) = param_3;
  }
  else {
    *(PVZ2UIDialog **)(this + 0x2e18) = param_3;
  }
  (**(code **)(*(long *)param_3 + 0x198))
            (param_3,(int)(((float)*(int *)(this + 0x724) - param_1) * 0.5),
             (int)(((float)*(int *)(this + 0x728) - param_2) * 0.5),(int)param_1,(int)param_2);
  if (*(long *)(this + 0x2e20) != 0) {
    return *(undefined8 *)(this + 0x2e18);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e18));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e18));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e18));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e18));
  return *(undefined8 *)(this + 0x2e18);
}


/* LawnApp::ShowPVZ2Dialog(std::wstring const&, std::wstring const&) */

PVZ2UIDialog * __thiscall LawnApp::ShowPVZ2Dialog(LawnApp *this,wstring *param_1,wstring *param_2)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_00;
  
  iVar1 = FUN_0325f324(0x1cc);
  iVar2 = FUN_0325f324(300);
  this_00 = (PVZ2UIDialog *)ShowPVZ2Dialog(this,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_00,param_1);
  PVZ2UIDialog::SetFooterLabel(this_00,param_2);
  return this_00;
}


/* LawnApp::ShowPVZ2DialogOneLine(std::wstring const&) */

PVZ2UIDialog * __thiscall LawnApp::ShowPVZ2DialogOneLine(LawnApp *this,wstring *param_1)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_00;
  
  iVar1 = FUN_0325f324(0x208);
  iVar2 = FUN_0325f324(200);
  this_00 = (PVZ2UIDialog *)ShowPVZ2Dialog(this,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_00,param_1);
  iVar1 = FUN_0325f324(0x6e);
  PVZ2UIDialog::SetHeaderHeight(this_00,iVar1);
  PVZ2UIDialog::Hide(this_00,4);
  return this_00;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowMessageDialog(std::string const&, std::string const&, Sexy::Delegate0 const&) */

void __thiscall
LawnApp::ShowMessageDialog(LawnApp *this,string *param_1,string *param_2,Delegate0 *param_3)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  string *extraout_x1;
  undefined1 auVar4 [16];
  undefined1 auStack_50 [8];
  wstring awStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0325f324(400);
  iVar2 = FUN_0325f324(0xfa);
  auVar4 = ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  this_01 = auVar4._0_8_;
  Sexy::StringToWString((Sexy *)param_1,auVar4._8_8_);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_48);
  FUN_05476c50(awStack_48);
  Sexy::StringToWString((Sexy *)param_2,extraout_x1);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_48);
  FUN_05476c50(awStack_48);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_48,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_48);
  FUN_05478178(awStack_48,L"[BUTTON_OK]",auStack_50);
  Sexy::Delegate0::Delegate0(aDStack_38,param_3);
  PVZ2UIDialog::AddButton(this_01,awStack_48,aDStack_38,0);
  FUN_05476c50(awStack_48);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::showDiffProfileSummary() */

void __thiscall LawnApp::showDiffProfileSummary(LawnApp *this)

{
  ProfileSummaryComparer *this_00;
  long lVar1;
  
  if (*(long *)(this + 0x9e0) == 0) {
    this_00 = ::operator_new(0x1c8);
    ProfileSummaryComparer::ProfileSummaryComparer(this_00,false);
    *(ProfileSummaryComparer **)(this + 0x9e0) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    PushOverlaysToTop(this);
    (**(code **)(**(long **)(this + 0x360) + 0x98))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9e0));
    lVar1 = GetWorldMap(this);
    if (lVar1 != 0) {
      FUN_0325d70c(lVar1 + 0x356,0);
      return;
    }
  }
  return;
}


/* LawnApp::ShowPvpUpgrade(PVPLabItemType) */

void __thiscall LawnApp::ShowPvpUpgrade(LawnApp *this,undefined8 param_2)

{
  PVPSkillUpgrade *this_00;
  uint uVar1;
  
  if (*(long *)(this + 0x2bf0) != 0) {
    return;
  }
  uVar1 = (uint)param_2;
  this_00 = (PVPSkillUpgrade *)0x0;
  if (uVar1 != 0) {
    if (uVar1 < 4) {
      this_00 = ::operator_new(0x108);
      PVPBaseUpgrade::PVPBaseUpgrade((PVPBaseUpgrade *)this_00,param_2);
      *(PVPSkillUpgrade **)(this + 0x2bf0) = this_00;
    }
    else if (uVar1 == 7) {
      this_00 = ::operator_new(0x138);
      PVPSkillUpgrade::PVPSkillUpgrade(this_00);
      *(PVPSkillUpgrade **)(this + 0x2bf0) = this_00;
    }
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2bf0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantStarLevelUpAnimUI(PVZ2UIStarLevelUp::AnimaType, std::string, int) */

void __thiscall
LawnApp::ShowPlantStarLevelUpAnimUI
          (LawnApp *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  PVZ2UIStarLevelUp *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar1 = *(long *)(this + 0x2b40);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x178);
    PVZ2UIStarLevelUp::PVZ2UIStarLevelUp(this_00,*(int *)(this + 0xd4),*(int *)(this + 0xd8));
    *(PVZ2UIStarLevelUp **)(this + 0x2b40) = this_00;
    FUN_05475d88(asStack_10,param_3);
    PVZ2UIStarLevelUp::InitUIView(this_00,param_2,asStack_10,param_4);
    std::string::~string(asStack_10);
    lVar1 = *(long *)(this + 0x2b40);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b40));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b40));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowOpenSurpriseBoxUI(std::string const&) */

void __thiscall LawnApp::ShowOpenSurpriseBoxUI(LawnApp *this,string *param_1)

{
  OpenSurpriseUI *pOVar1;
  long *plVar2;
  Widget *pWVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2aa8) != 0) {
    KillOpenSurpriseBoxUI(this);
  }
  FUN_05475d88(asStack_10,param_1);
  pOVar1 = ::operator_new(0x120);
  OpenSurpriseUI::OpenSurpriseUI(pOVar1,asStack_10);
  *(OpenSurpriseUI **)(this + 0x2aa8) = pOVar1;
  std::string::~string(asStack_10);
  plVar2 = *(long **)(this + 0x2aa8);
  pWVar3 = (Widget *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x328))(plVar2);
    BoxOpenUI::InitView(*(BoxOpenUI **)(this + 0x2aa8));
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa8));
    (**(code **)(**(long **)(this + 0x360) + 0xb0))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa8));
    PushOverlaysToTop(this);
    pWVar3 = *(Widget **)(this + 0x2aa8);
  }
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),pWVar3);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2aa8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LoadLocalLawnStrings() */

void __thiscall LawnApp::LoadLocalLawnStrings(LawnApp *this)

{
  char cVar1;
  char *pcVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,"pvz2_l.txt");
  std::string::~string(asStack_10);
  cVar1 = Sexy::SexyAppBase::FileExists((SexyAppBase *)this,asStack_18);
  if (cVar1 != '\0') {
    pcVar2 = (char *)FUN_0547429c(asStack_18);
    TodStringListLoad(pcVar2);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::SetLocalizedLawnStringFile() */

void __thiscall LawnApp::SetLocalizedLawnStringFile(LawnApp *this)

{
  char *pcVar1;
  ResStreamsManager *pRVar2;
  string *psVar3;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ResourceManager::GetLocaleFolder(SUB81(*(undefined8 *)(this + 0x848),0));
  std::operator+(asStack_10,"properties/LawnStrings.txt");
  std::string::~string(asStack_10);
  psVar3 = *(string **)(this + 0x908);
  std::string::string(asStack_18,"LawnStrings");
  std::string::string(asStack_10,"");
  Sexy::ResStreamsManager::ForceLoadGroup(psVar3,asStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  psVar3 = *(string **)(this + 0x908);
  std::string::string(asStack_18,"CFDLC_LawnStrings");
  std::string::string(asStack_10,"");
  Sexy::ResStreamsManager::ForceLoadGroup(psVar3,asStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  pcVar1 = (char *)FUN_0547429c(asStack_20);
  TodStringListLoad(pcVar1);
  pRVar2 = *(ResStreamsManager **)(this + 0x908);
  std::string::string(asStack_10,"LawnStrings");
  Sexy::ResStreamsManager::DeleteGroup(pRVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = *(ResStreamsManager **)(this + 0x908);
  std::string::string(asStack_10,"CFDLC_LawnStrings");
  Sexy::ResStreamsManager::DeleteGroup(pRVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::TestLuaExecute() */

void LawnApp::TestLuaExecute(void)

{
  char cVar1;
  long lVar2;
  CLuaEngine *this;
  
  lVar2 = Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
  cVar1 = FUN_0325d700(*(undefined1 *)(lVar2 + 0xe51));
  if (cVar1 == '\0') {
    this = (CLuaEngine *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstance();
    Lua::CLuaEngine::ExecuteTableFunction(this,"luaApp","TestExecute");
    return;
  }
  PopReport("Lua Engine is disabled, maybe Lua Pack not loaded",(char *)0x0);
  return;
}


/* LawnApp::ResetDatas() */

void LawnApp::ResetDatas(void)

{
  PVPManager *this;
  ActivityManager *this_00;
  DangerRoomManager *this_01;
  WorldMapActivityBtnTurnChangeManager *this_02;
  
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::Reset(this);
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Reset(this_00);
  WorldMapActionManager::ResetStaticData();
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::Reset(this_01);
  this_02 = (WorldMapActivityBtnTurnChangeManager *)
            Sexy::LazySingleton<WorldMapActivityBtnTurnChangeManager>::GetInstancePtr();
  WorldMapActivityBtnTurnChangeManager::clear(this_02);
  return;
}


/* LawnApp::GetImageInfoFromStringId(std::string const&, int) */

void __thiscall LawnApp::GetImageInfoFromStringId(LawnApp *this,string *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
  if (param_2 != 0) {
    *(int *)(*(long *)(this + 0x848) + 0x208) = param_2;
  }
  Sexy::ResourceManager::GetResInfoForStringIdT<Sexy::Image>
            (*(ResourceManager **)(gLawnApp + 0x848),param_1);
  *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar1;
  return;
}


/* LawnApp::GetUIImageInfoFromStringId(std::string const&) */

void __thiscall LawnApp::GetUIImageInfoFromStringId(LawnApp *this,string *param_1)

{
  GetImageInfoFromStringId(this,param_1,*(int *)(this + 0xd8));
  return;
}


/* LawnApp::TouchMoved(Sexy::Touch const&) */

void __thiscall LawnApp::TouchMoved(LawnApp *this,Touch *param_1)

{
  char cVar1;
  CheatUIPanel *this_00;
  
  this_00 = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  cVar1 = CheatUIPanel::TouchMoved(this_00,param_1);
  if (cVar1 != '\0') {
    return;
  }
  Sexy::SexyAppBase::TouchMoved((SexyAppBase *)this,param_1);
  return;
}


/* LawnApp::TouchesCanceled() */

void __thiscall LawnApp::TouchesCanceled(LawnApp *this)

{
  CheatUIPanel *this_00;
  
  this_00 = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  CheatUIPanel::TouchesCanceled(this_00);
  Sexy::SexyAppBase::TouchesCanceled((SexyAppBase *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPvpCoinStore() */

void LawnApp::ShowPvpCoinStore(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,4);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[PVP_STORE_CLOSE]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonCancel(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::OnPvpCoinBuyButtonUp(UIMessageBox*, int) */

LawnApp * __thiscall LawnApp::OnPvpCoinBuyButtonUp(LawnApp *this,UIMessageBox *param_1,int param_2)

{
  LawnApp *pLVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return this;
  }
  pLVar1 = (LawnApp *)ShowPvpCoinStore();
  return pLVar1;
}


/* LawnApp::ShowChildrenDayUI() */

ChildrenDayUI * LawnApp::ShowChildrenDayUI(void)

{
  ChildrenDayUI *pCVar1;
  char cVar2;
  ChildrenDayUI *pCVar3;
  
  pCVar1 = UISingletonDialog<ChildrenDayUI>::m_pInstance;
  pCVar3 = pCVar1;
  if (UISingletonDialog<ChildrenDayUI>::m_pInstance == (ChildrenDayUI *)0x0) {
    pCVar3 = ::operator_new(0x188);
    ChildrenDayUI::ChildrenDayUI(pCVar3);
    UISingletonDialog<ChildrenDayUI>::m_pInstance = pCVar3;
    cVar2 = (**(code **)(*(long *)pCVar3 + 0x310))(pCVar3);
    pCVar3 = UISingletonDialog<ChildrenDayUI>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<ChildrenDayUI>::m_pInstance != (ChildrenDayUI *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<ChildrenDayUI>::m_pInstance + 0x18))();
      }
      UISingletonDialog<ChildrenDayUI>::m_pInstance = (ChildrenDayUI *)0x0;
      pCVar3 = pCVar1;
    }
  }
  return pCVar3;
}


/* LawnApp::ShowProbabilityDialog(std::wstring const&) */

void __thiscall LawnApp::ShowProbabilityDialog(LawnApp *this,wstring *param_1)

{
  ProbabilityDLG *this_00;
  
  this_00 = (ProbabilityDLG *)UISingletonDialog<ProbabilityDLG>::ShowDialog();
  ProbabilityDLG::InitView(this_00,param_1);
  return;
}


/* LawnApp::KillProbabilityDialog() */

void LawnApp::KillProbabilityDialog(void)

{
  if (UISingletonDialog<ProbabilityDLG>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<ProbabilityDLG>::m_pInstance + 0x318))();
    UISingletonDialog<ProbabilityDLG>::m_pInstance = (long *)0x0;
  }
  return;
}


/* LawnApp::TouchEnded(Sexy::Touch const&) */

void __thiscall LawnApp::TouchEnded(LawnApp *this,Touch *param_1)

{
  char cVar1;
  CheatUIPanel *this_00;
  undefined4 uVar2;
  
  uVar2 = PVZ_RealT();
  *(undefined4 *)(this + 0x3578) = uVar2;
  this_00 = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  cVar1 = CheatUIPanel::TouchEnded(this_00,param_1);
  if (cVar1 != '\0') {
    return;
  }
  Sexy::SexyAppBase::TouchEnded((SexyAppBase *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetImageInfoFromImageRef(Sexy::RtWeakPtr<Sexy::Image>&) */

void LawnApp::GetImageInfoFromImageRef(RtWeakPtr *param_1)

{
  uint uVar1;
  uint uVar2;
  ResourceInfo *pRVar3;
  RtId aRStack_28 [8];
  RtId aRStack_20 [8];
  RtId aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtMixedPtrBase::GetId();
  uVar1 = Sexy::RtId::GetSlotIndex(aRStack_28);
  Sexy::RtMixedPtrBase::GetId();
  uVar2 = Sexy::RtId::GetRevision(aRStack_20);
  Sexy::RtId::RtId(aRStack_18,0x2004,uVar1,uVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtId::~RtId(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* LawnApp::LaunchMoreGamesWebpage() */

void LawnApp::LaunchMoreGamesWebpage(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  PurchaseBroker *this_00;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this);
  PurchaseBroker::LaunchMoreGamesWebpage(this_00);
  return;
}


/* LawnApp::HasPlayerUnlockedFeature(GameFeature) */

void __thiscall LawnApp::HasPlayerUnlockedFeature(undefined8 param_1,undefined8 param_2)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (pPVar1 != (PlayerInfo *)0x0) {
    PlayerInfo::GameFeatureIsUnlocked(pPVar1,param_2);
    return;
  }
  return;
}


/* LawnApp::GetMaxSeedPacketCount() */

int __thiscall LawnApp::GetMaxSeedPacketCount(LawnApp *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = HasPlayerUnlockedFeature(this,0x10);
  iVar2 = 5;
  if (cVar1 != '\0') {
    iVar2 = 6;
  }
  cVar1 = HasPlayerUnlockedFeature(this,0x11);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  cVar1 = HasPlayerUnlockedFeature(this,0x12);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* LawnApp::IsWorldHaveMower(std::string) */

undefined8 __thiscall LawnApp::IsWorldHaveMower(LawnApp *this,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"egypt");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0xd);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"pirate");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0xe);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"cowboy");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0xf);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"kongfu");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x26);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"future");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x27);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"dark");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x2d);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"beach");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x33);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"iceage");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x35);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"skycity");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x38);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"lostcity");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x3f);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"eighties");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x43);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"dino");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x44);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"modern");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x45);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"steam");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x47);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"renai");
  if (bVar1) {
    uVar2 = HasPlayerUnlockedFeature(this,0x48);
    return uVar2;
  }
  bVar1 = std::operator==(param_2,"heian");
  if (!bVar1) {
    return 1;
  }
  uVar2 = HasPlayerUnlockedFeature(this,0x49);
  return uVar2;
}


/* LawnApp::GetMaxPlantfoodCount() */

int __thiscall LawnApp::GetMaxPlantfoodCount(LawnApp *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 != '\0') {
    return 5;
  }
  cVar1 = HasPlayerUnlockedFeature(this,0x18);
  iVar2 = 3;
  if (cVar1 != '\0') {
    iVar2 = 4;
  }
  cVar1 = HasPlayerUnlockedFeature(this,0x1a);
  if (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


/* LawnApp::GetBonusStartingSun() */

int __thiscall LawnApp::GetBonusStartingSun(LawnApp *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int iVar4;
  
  cVar2 = HasPlayerUnlockedFeature(this,0x1b);
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar3 = 0x19;
  }
  cVar2 = HasPlayerUnlockedFeature(this,0x1c);
  iVar4 = iVar3 + 0x19;
  if (cVar2 == '\0') {
    iVar4 = iVar3;
  }
  cVar2 = HasPlayerUnlockedFeature(this,0x1d);
  iVar3 = iVar4 + 0x19;
  if (cVar2 == '\0') {
    iVar3 = iVar4;
  }
  cVar2 = HasPlayerUnlockedFeature(this,0x25);
  iVar4 = iVar3 + 0x19;
  if (cVar2 == '\0') {
    iVar4 = iVar3;
  }
  cVar2 = RiftUtils::IsPlayingRiftLevel();
  if ((cVar2 != '\0') && (cVar2 = RiftUtils::IsRiftTimedLevel(), cVar2 != '\0')) {
    return iVar4;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    cVar2 = PlayerInfo::IsMonthlyCardActivated(this_01,2);
    iVar3 = iVar4 + 0x32;
    if (cVar2 == '\0') {
      iVar3 = iVar4;
    }
    cVar2 = PlayerInfo::IsMonthlyCardActivated(this_01,8);
    iVar1 = iVar3 + 0x32;
    if (cVar2 == '\0') {
      iVar1 = iVar3;
    }
    iVar3 = PlayerInfo::GetMonthVIPState(this_01);
    iVar4 = iVar1 + 0x32;
    if (iVar3 < 1) {
      iVar4 = iVar1;
    }
  }
  return iVar4;
}


/* LawnApp::syncProfileSummaryWithServer() */

void LawnApp::syncProfileSummaryWithServer(void)

{
  char cVar1;
  long lVar2;
  NetworkMgr *pNVar3;
  INetworkMsgProcess *this;
  long *plVar4;
  
  lVar2 = ProfileUtils::Profile();
  if ((lVar2 != 0) && (cVar1 = IsNetworkModuleOK(), cVar1 != '\0')) {
    pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
    this = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(pNVar3);
    if (*(code **)(*(long *)this + 0x28) == INetworkMsgProcess::IsLogined) {
      cVar1 = INetworkMsgProcess::IsLogined(this);
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x28))();
    }
    if (cVar1 == '\0') {
      Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::LoginiCloudServer();
      return;
    }
    pNVar3 = (NetworkMgr *)NetworkMgr::Instance();
    plVar4 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar3);
    if (*(code **)(*plVar4 + 0x2c8) != INetworkMsgProcess::ICloudRequestProfileMd5) {
      (**(code **)(*plVar4 + 0x2c8))();
    }
  }
  return;
}


/* LawnApp::goToMainMenu() */

void LawnApp::goToMainMenu(void)

{
  char cVar1;
  bool bVar2;
  LawnApp *in_x0;
  WorldMap *pWVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar4;
  undefined8 uVar5;
  wchar16 *extraout_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long *plVar6;
  float fVar7;
  
  pWVar3 = (WorldMap *)GetWorldMap(in_x0);
  cVar1 = WorldMap::CanBeClosed(pWVar3);
  if (cVar1 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    if (this_00 != (PlayerInfo *)0x0) {
      lVar4 = GetWorldMap(gLawnApp);
      fVar7 = (float)FUN_0325d714(*(undefined4 *)(lVar4 + 0x338));
      bVar2 = (bool)EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                              ((wchar16 *)this_00,extraout_x1,in_x2,in_x3,in_x4);
      PlayerInfo::SetWorldMapZoomData(this_00,fVar7,bVar2);
    }
    GameStateMgr::ShowMainMenu(gGameStateMgr,2,2);
    plVar6 = *(long **)(in_x0 + 0x360);
    uVar5 = GetTransitionOverlay(gLawnApp);
    (**(code **)(*plVar6 + 0xb0))(plVar6,uVar5);
    PushOverlaysToTop(in_x0);
    return;
  }
  pWVar3 = (WorldMap *)GetWorldMap(in_x0);
  WorldMap::QueueForTransition(pWVar3,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetDangerRoomLevelName() */

void __thiscall LawnApp::GetDangerRoomLevelName(LawnApp *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined1 *__n;
  string *in_x8;
  undefined1 auStack_10 [8];
  long local_8;
  
  __n = auStack_10;
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
switchD_0326c350_caseD_0:
    std::string::append(in_x8,"festival_level_one",(size_t)__n);
  }
  else {
    uVar1 = PlayerInfo::GetCurrentDangerRoomLevel(this_01);
    switch(uVar1) {
    case 0:
      goto switchD_0326c350_caseD_0;
    case 1:
      std::string::append(in_x8,"festival_level_two",(size_t)__n);
      break;
    case 2:
      std::string::append(in_x8,"festival_level_three",(size_t)__n);
      break;
    case 3:
      std::string::append(in_x8,"festival_level_four",(size_t)__n);
      break;
    case 4:
      std::string::append(in_x8,"festival_level_endless",(size_t)__n);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::silenceRelogin() */

void __thiscall LawnApp::silenceRelogin(LawnApp *this)

{
  if (4 < *(int *)(this + 0x35ac)) {
    return;
  }
  *(int *)(this + 0x35ac) = *(int *)(this + 0x35ac) + 1;
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  nop();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::goToUpdateGame() */

void __thiscall LawnApp::goToUpdateGame(LawnApp *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  ::_M_rightmost(this_00);
  PurchaseBroker::GetChannelUpdateUrl();
  (**(code **)(*(long *)this + 0x168))(this,asStack_10,0);
  onConfirmExitGame();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShouldPopSpAds(int) */

bool __thiscall LawnApp::ShouldPopSpAds(LawnApp *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  long lVar4;
  
  iVar2 = GetPlatform(this);
  if (iVar2 == 0x59) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_00);
    if ((param_1 == 0) && (cVar1 = IsServiceAvailable(this,0x8000), cVar1 != '\0')) {
      iVar2 = FUN_0325d6b0(*(undefined4 *)(lVar4 + 0x1368));
      iVar3 = GetDaveShopAdsRate(this);
      return iVar2 < iVar3;
    }
  }
  return false;
}


/* LawnApp::isOppoCukeTipShow() */

byte __thiscall LawnApp::isOppoCukeTipShow(LawnApp *this)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  WaveManager *this_00;
  ProfileMgr *this_01;
  long lVar5;
  
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(this + 0x9f0));
  if (this_00 != (WaveManager *)0x0) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar5 = ProfileMgr::GetCurrentProfile(this_01);
    bVar1 = WaveManager::getIsHasShowOppoTips(this_00);
    cVar2 = isOppoNewerOptimizationOpen(gLawnApp);
    bVar3 = 0;
    if (cVar2 != '\0') {
      iVar4 = FUN_0325d6a8(*(undefined4 *)(lVar5 + 0xdc8));
      bVar3 = (bVar1 | iVar4 != 2) ^ 1;
    }
    return bVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RemoveAllCaches() */

void LawnApp::RemoveAllCaches(void)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  ProfileMgr *this;
  code *pcVar4;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  PakFileDesc aPStack_40 [8];
  char local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PakFileDesc::PakFileDesc(aPStack_40);
  GetFolder(asStack_58,3);
  uVar3 = (**(code **)(*Sexy::gFileDriver + 0x160))(Sexy::gFileDriver,asStack_58,aPStack_40);
  do {
    if (local_38 == '\0') {
      FUN_05475d88(asStack_50,aPStack_40);
      plVar1 = Sexy::gFileDriver;
      pcVar4 = *(code **)(*Sexy::gFileDriver + 0x140);
      FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
      (*pcVar4)(plVar1,asStack_48);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
    }
    cVar2 = (**(code **)(*Sexy::gFileDriver + 0x170))(Sexy::gFileDriver,uVar3,aPStack_40);
  } while (cVar2 != '\0');
  (**(code **)(*Sexy::gFileDriver + 0x178))(Sexy::gFileDriver,uVar3);
  std::string::~string(asStack_58);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_40);
  PakFileDesc::PakFileDesc(aPStack_40);
  GetFolder(asStack_58,4);
  uVar3 = (**(code **)(*Sexy::gFileDriver + 0x160))(Sexy::gFileDriver,asStack_58,aPStack_40);
  do {
    if (local_38 == '\0') {
      FUN_05475d88(asStack_50,aPStack_40);
      plVar1 = Sexy::gFileDriver;
      pcVar4 = *(code **)(*Sexy::gFileDriver + 0x140);
      FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
      (*pcVar4)(plVar1,asStack_48);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
    }
    cVar2 = (**(code **)(*Sexy::gFileDriver + 0x170))(Sexy::gFileDriver,uVar3,aPStack_40);
  } while (cVar2 != '\0');
  (**(code **)(*Sexy::gFileDriver + 0x178))(Sexy::gFileDriver,uVar3);
  std::string::~string(asStack_58);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_40);
  PakFileDesc::PakFileDesc(aPStack_40);
  GetFolder(asStack_58,2);
  uVar3 = (**(code **)(*Sexy::gFileDriver + 0x160))(Sexy::gFileDriver,asStack_58,aPStack_40);
  do {
    if (local_38 == '\0') {
      FUN_05475d88(asStack_50,aPStack_40);
      plVar1 = Sexy::gFileDriver;
      pcVar4 = *(code **)(*Sexy::gFileDriver + 0x140);
      FUN_031dcc6c(asStack_48,asStack_58,asStack_50);
      (*pcVar4)(plVar1,asStack_48);
      std::string::~string(asStack_48);
      std::string::~string(asStack_50);
    }
    cVar2 = (**(code **)(*Sexy::gFileDriver + 0x170))(Sexy::gFileDriver,uVar3,aPStack_40);
  } while (cVar2 != '\0');
  (**(code **)(*Sexy::gFileDriver + 0x178))(Sexy::gFileDriver,uVar3);
  std::string::~string(asStack_58);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aPStack_40);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::ClearAllProfile(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onDoneLoadingProfiles() */

void __thiscall LawnApp::onDoneLoadingProfiles(LawnApp *this)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDoneLoadingProfiles);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Unsubscribe((MessageRouter *)this_00,Message::PersistorLoadComplete,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[0x9ed] = (LawnApp)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OnFetchVersionComplete() */

void __thiscall LawnApp::OnFetchVersionComplete(LawnApp *this)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFetchVersionComplete);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Unsubscribe((MessageRouter *)this_00,Message::FetchVersionComplete,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[0x3028] = (LawnApp)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OnRechargeCheckComplete() */

void __thiscall LawnApp::OnRechargeCheckComplete(LawnApp *this)

{
  undefined *this_00;
  long lVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRechargeCheckComplete);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Unsubscribe
            ((MessageRouter *)this_00,Message::RechargeCheckOnServerComplete,aDStack_38);
  lVar1 = ___stack_chk_guard;
  this[0x3029] = (LawnApp)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::StartRechargeCheck() */

void __thiscall LawnApp::StartRechargeCheck(LawnApp *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  KillPVZ2Dialog(this);
  if (this[0x299e] == (LawnApp)0x0) {
    this[0x3029] = (LawnApp)0x1;
  }
  else {
    this[0x3029] = (LawnApp)0x0;
    this_00 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnRechargeCheckComplete);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
    MessageRouter::Subscribe
              ((MessageRouter *)this_00,Message::RechargeCheckOnServerComplete,aDStack_38);
    PVZRechargeCheckServer::RequestRechargeCheck((PVZRechargeCheckServer *)(this + 0x2ed0),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::CheckForUpdates() */

void __thiscall LawnApp::CheckForUpdates(LawnApp *this)

{
  undefined *this_00;
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x3028] = (LawnApp)0x0;
  this_00 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFetchVersionComplete);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::FetchVersionComplete,aDStack_38);
  PVZVersionNetworkManager::CheckForUpdates((PVZVersionNetworkManager *)(this + 0x2eb0),0);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::needCheckFakeFromServer();
  if (cVar1 != '\0') {
    this[0x299e] = (LawnApp)0x1;
  }
  StartRechargeCheck(this);
  CheckForNetworkContentChanges(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowMessageDialogNoCallback(std::string const&, std::string const&) */

void __thiscall LawnApp::ShowMessageDialogNoCallback(LawnApp *this,string *param_1,string *param_2)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  string *extraout_x1;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0325f324(400);
  iVar2 = FUN_0325f324(0xfa);
  auVar4 = ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  this_01 = auVar4._0_8_;
  Sexy::StringToWString((Sexy *)param_1,auVar4._8_8_);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  Sexy::StringToWString((Sexy *)param_2,extraout_x1);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowMessageDialogWithOKButton(std::string const&, std::string const&, Sexy::Delegate0
   const&) */

void __thiscall
LawnApp::ShowMessageDialogWithOKButton
          (LawnApp *this,string *param_1,string *param_2,Delegate0 *param_3)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  string *extraout_x1;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0325f324(400);
  iVar2 = FUN_0325f324(0xfa);
  auVar4 = ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  this_01 = auVar4._0_8_;
  Sexy::StringToWString((Sexy *)param_1,auVar4._8_8_);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  Sexy::StringToWString((Sexy *)param_2,extraout_x1);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  FUN_05478178(awStack_50,L"[BUTTON_OK]",auStack_58);
  Sexy::Delegate0::Delegate0(aDStack_38,param_3);
  PVZ2UIDialog::AddButton(this_01,awStack_50,aDStack_38,0);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OnFinishedInitDangerRoom(bool) */

void __thiscall LawnApp::OnFinishedInitDangerRoom(LawnApp *this,bool param_1)

{
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    nop();
  }
  else {
    FUN_05478178(awStack_58,L"[NOT_IN_ACTIVITY_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NOT_IN_ACTIVITY_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPVZ2MessageDialog(std::wstring const&, std::wstring const&) */

void __thiscall LawnApp::ShowPVZ2MessageDialog(LawnApp *this,wstring *param_1,wstring *param_2)

{
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZ2UIDialog *)ShowPVZ2Dialog(this,param_1,param_2);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(pPVar1,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OnHandleUpdateGame() */

void __thiscall LawnApp::OnHandleUpdateGame(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  long *plVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsConnectOnWifi();
  if (cVar1 == '\0') {
    KillPVZ2Dialog(this);
    this_00 = gLawnApp;
    iVar2 = FUN_0325f324(400);
    iVar3 = FUN_0325f324(0xfa);
    this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[REVIVE_TIP]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[PVZ_LOGIN_LOW_VERSION_WWAN]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_01,pPVar4,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(auStack_58,L"[PVZ_LOGIN_LOW_SETTING_WIFI]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnOpenSystemSettingUpdateGame);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[PVZ_LOGIN_LOW_ALSO_UPDATE]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,goToUpdateGame);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    plVar5 = (long *)PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_0325ea30(this_01 + 0x1c0);
    cVar1 = IsNetworkModuleOK();
    if (cVar1 == '\0') {
      (**(code **)(*plVar5 + 0x188))(plVar5,1);
    }
  }
  else {
    goToUpdateGame(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::loadPlayerProfiles() */

void __thiscall LawnApp::loadPlayerProfiles(LawnApp *this)

{
  undefined *this_00;
  char cVar1;
  ProfileMgr *this_01;
  string *extraout_x1;
  undefined1 auStack_68 [8];
  Sexy aSStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(aSStack_60);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Init(this_01);
  this[0x9ed] = (LawnApp)0x0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDoneLoadingProfiles);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::PersistorLoadComplete,aDStack_38);
  MessageRouter::Post((_func_void *)gMessageRouter);
  std::string::string(asStack_58,"CurUser");
  cVar1 = Sexy::SexyAppBase::RegistryReadString((string *)this,asStack_58);
  if (cVar1 == '\0') {
    FUN_05478178(asStack_50,&DAT_056f11a8,auStack_68);
    ProfileMgr::LoadAndSetProfile((wstring *)this_01);
    FUN_05476c50(asStack_50);
    nop();
  }
  else {
    Sexy::UTF8StringToWString(aSStack_60,extraout_x1);
    ProfileMgr::LoadAndSetProfile((wstring *)this_01);
    FUN_05476c50(asStack_50);
  }
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_50,"HasDisabledUsageSharing");
  Sexy::SexyAppBase::RegistryReadBoolean((string *)this,(bool *)asStack_50);
  std::string::~string(asStack_50);
  nop();
  std::string::~string((string *)aSStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShareBtnCallBack() */

void LawnApp::ShareBtnCallBack(void)

{
  TextureInfo *pTVar1;
  
  Sexy::LazySingleton<SocialMgr>::GetInstance();
  pTVar1 = (TextureInfo *)Sexy::LazySingleton<SocialMgr>::GetInstance();
  EA::Text::GlyphCache_Memory::EndUpdate(pTVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowShareDialog(std::wstring) */

void __thiscall LawnApp::ShowShareDialog(LawnApp *this,wstring *param_2)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  Mutex *pMVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_0325f324(0x23c);
  iVar2 = FUN_0325f324(600);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  PVZ2UIDialog::SetHeaderLabel(this_01,param_2);
  pMVar3 = (Mutex *)Sexy::LazySingleton<SocialMgr>::GetInstance();
  iVar1 = EA::Thread::Mutex::GetLockCount(pMVar3);
  if (iVar1 == 2) {
    FUN_05478178(auStack_58,L"[SHARE_TO_QQ]",auStack_60);
  }
  else {
    pMVar3 = (Mutex *)Sexy::LazySingleton<SocialMgr>::GetInstance();
    iVar1 = EA::Thread::Mutex::GetLockCount(pMVar3);
    if (iVar1 != 1) {
      FUN_05478178(auStack_58,L"[SHARE_CANCLE]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,KillShareDialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
      goto LAB_0326da58;
    }
    FUN_05478178(auStack_58,L"[SHARE_TO_WECHAT_FRIEND]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,ShareBtnCallBack);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[SHARE_TO_WECHAT_ZONE]",auStack_60);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,ShareBtnCallBack);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[SHARE_CANCLE]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillShareDialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
LAB_0326da58:
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShareWeChatNewWorld() */

void __thiscall LawnApp::ShareWeChatNewWorld(LawnApp *this)

{
  long lVar1;
  wstring *extraout_x1;
  wstring *extraout_x1_00;
  Sexy *__n;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aSStack_18;
  FUN_05478178(asStack_10,L"WORLD");
  ShowShareDialog(this,asStack_10);
  FUN_05476c50(asStack_10);
  nop();
  lVar1 = Sexy::LazySingleton<SocialMgr>::GetInstance();
  TodStringTranslate(L"[SHARE_UNLOCK_NEW_WORLD]");
  Sexy::WStringToUTF8String(aSStack_18,extraout_x1);
  FUN_05474278(lVar1 + 8,asStack_10);
  std::string::~string(asStack_10);
  FUN_05476c50(aSStack_18);
  lVar1 = Sexy::LazySingleton<SocialMgr>::GetInstance();
  TodStringTranslate(L"[SHARE_UNLOCK_NEW_WORLD]");
  Sexy::WStringToUTF8String(aSStack_18,extraout_x1_00);
  FUN_05474278(lVar1 + 0x10,asStack_10);
  std::string::~string(asStack_10);
  FUN_05476c50(aSStack_18);
  lVar1 = Sexy::LazySingleton<SocialMgr>::GetInstance();
  std::string::append((string *)(lVar1 + 0x18),"http://www.qq.com",(size_t)__n);
  lVar1 = Sexy::LazySingleton<SocialMgr>::GetInstance();
  std::string::append((string *)(lVar1 + 0x20),
                      "http://mat1.gtimg.com/www/images/qq2012/qqlogo_1x.png",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowSpAds(int) */

void __thiscall LawnApp::ShowSpAds(LawnApp *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    plVar1 = (long *)EASquared::Instance();
    pcVar2 = *(code **)(*plVar1 + 0x28);
    std::string::string(asStack_58,"EA2Mission");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onWatchDaveShopAds);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<LawnApp,void(LawnApp::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,aCStack_50);
    (*pcVar2)(plVar1,asStack_58,aDStack_38,1,1,0x39);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::TouchBegan(Sexy::Touch const&) */

void __thiscall LawnApp::TouchBegan(LawnApp *this,Touch *param_1)

{
  char cVar1;
  CheatUIPanel *this_00;
  CustomLevelMgr *this_01;
  
  this_00 = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
  cVar1 = CheatUIPanel::TouchBegan(this_00,param_1);
  if (cVar1 == '\0') {
    Sexy::SexyAppBase::TouchBegan((SexyAppBase *)this,param_1);
  }
  this_01 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  CustomLevelMgr::TryResetTutorialSkipTimer(this_01);
  return;
}


/* LawnApp::GetImageFromStringId(std::string const&, int) */

void LawnApp::GetImageFromStringId(string *param_1,int param_2)

{
  undefined4 uVar1;
  string *psVar2;
  int in_w2;
  
  psVar2 = *(string **)(param_1 + 0x848);
  uVar1 = *(undefined4 *)(psVar2 + 0x208);
  if (in_w2 != 0) {
    *(int *)(psVar2 + 0x208) = in_w2;
  }
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::Image>(psVar2,SUB41(param_2,0));
  *(undefined4 *)(*(long *)(param_1 + 0x848) + 0x208) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetImagePointerFromStringId(std::string const&) */

void __thiscall LawnApp::GetImagePointerFromStringId(LawnApp *this,string *param_1)

{
  ResourceInfo *pRVar1;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetImageFromStringId((string *)this,(int)param_1);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar1);
}


/* LawnApp::GetUIImageFromStringId(std::string const&) */

void LawnApp::GetUIImageFromStringId(string *param_1)

{
  int in_w1;
  
  GetImageFromStringId(param_1,in_w1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LoadRsbsExtraProc() */

void LawnApp::LoadRsbsExtraProc(void)

{
  bool bVar1;
  string *psVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0326eec8(DAT_06a9a7b8);
  local_10 = FUN_0326ef18(DAT_06a9a7c0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    psVar2 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar3 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)"LawnApp::LoadRsbsExtraProc() start load rsb %s",uVar3);
    Sexy::ResourceManager::Init
              (*(ResourceManager **)(Sexy::gSexyAppBase + 0x848),0x4b0,
               (int)*(float *)(gLawnApp + 0x28dc),psVar2,psVar2 + 8,true);
    uVar3 = FUN_0547429c(psVar2);
    Sexy::OutputDebugStrF((wchar_t *)"LawnApp::LoadRsbsExtraProc() end load rsb %s",uVar3);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::NeedDelayLoadRSB() */

void LawnApp::NeedDelayLoadRSB(void)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  undefined1 uVar4;
  ResStreamsManager *this;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_0326eec8(DAT_06a9a7b8);
  local_20 = FUN_0326ef18(DAT_06a9a7c0);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = *(ResStreamsManager **)(gLawnApp + 0x908);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(this,psVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    uVar4 = 0;
    if (cVar1 == '\0') goto LAB_0326f188;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  uVar4 = 1;
LAB_0326f188:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::NeedDecompressRsbsExtra() */

void LawnApp::NeedDecompressRsbsExtra(void)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  ResStreamsManager *this;
  undefined8 local_28;
  undefined8 local_20;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = FUN_0326eec8(DAT_06a9a7b8);
  local_20 = FUN_0326ef18(DAT_06a9a7c0);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20),
        cVar1 = '\0', bVar2) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this = *(ResStreamsManager **)(gLawnApp + 0x908);
    std::string::string(asStack_18,"");
    std::string::string(asStack_10,"");
    cVar1 = Sexy::ResStreamsManager::NeedDecompressRsb(this,psVar3,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    if (cVar1 != '\0') break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPvpCoinBuyConfirm() */

void __thiscall LawnApp::ShowPvpCoinBuyConfirm(LawnApp *this)

{
  UIMessageBox *this_00;
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    TodStringTranslate(L"[PVP_COIN_LACK_TIP]");
    TodStringTranslate(L"[PVP_COIN_LACK_TITLE]");
    UIMessageBox::SetMessage(this_00,awStack_58,(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    UIMessageBox::SetShowType(this_00,6);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_PURPLE");
    UIMessageBox::SetBackground(this_00,asStack_50);
    std::string::~string(asStack_50);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnPvpCoinBuyButtonUp);
    Sexy::Delegate2<UIMessageBox*,int>::Delegate2<LawnApp,void(LawnApp::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::AppEnteredBackground() */

void __thiscall LawnApp::AppEnteredBackground(LawnApp *this)

{
  SaveGameMgr *this_00;
  
  BehaviorLog::pause();
  (**(code **)(*(long *)this + 0x3d8))(this);
  this_00 = (SaveGameMgr *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
  SaveGameMgr::TrySaveGame(this_00,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LowMemoryWarning() */

void LawnApp::LowMemoryWarning(void)

{
  SaveGameMgr *this;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_RealT();
  Sexy::StrFormat("LawnApp::LowMemoryWarning at RealT: %.2f",asStack_10,(double)fVar1);
  nop();
  std::string::~string(asStack_10);
  this = (SaveGameMgr *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
  SaveGameMgr::TrySaveGame(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowJoustLeagueInfoScreen() */

void __thiscall LawnApp::ShowJoustLeagueInfoScreen(LawnApp *this)

{
  AdaptorJoustLeagueInfoScreen *this_00;
  
  this_00 = ::operator_new(0x138);
  memset(this_00,0,0x138);
  AdaptorJoustLeagueInfoScreen::AdaptorJoustLeagueInfoScreen(this_00);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  *(AdaptorJoustLeagueInfoScreen **)(this + 0x2c58) = this_00;
  PushOverlaysToTop(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LoadSerializedMapData(std::string const&) */

void __thiscall LawnApp::LoadSerializedMapData(LawnApp *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  PVZDB *pPVar3;
  RtDbTable *pRVar4;
  undefined8 uVar5;
  RtObject *this_00;
  WorldData *pWVar6;
  int extraout_w1;
  string *extraout_x1;
  Sexy aSStack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
  Sexy::RtDbTable::Reset(pRVar4,true);
  Set8BytesTo0(aSStack_40);
  FUN_054757c0(aSStack_40,&DAT_06a9a7d8);
  FUN_054757c0(aSStack_40,param_1);
  Sexy::Upper(aSStack_40,extraout_x1);
  FUN_05474278(aSStack_40,asStack_28);
  std::string::~string(asStack_28);
  Sexy::ResourceManager::GetResourceForStringIdT<Sexy::GenericResFile>
            (*(string **)(gLawnApp + 0x848),SUB81(aSStack_40,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
  if (cVar1 == '\0') {
    pWVar6 = (WorldData *)0x0;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  }
  else {
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_30);
    PVZDB::LoadPackageForTable(pPVar3,0x22,asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar5,0x22);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar2)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId((RtId *)aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pWVar6 = Sexy::RtObject::Cast<WorldData>(this_00);
        if (pWVar6 != (WorldData *)0x0) {
          pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
          pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
          Sexy::RtMixedPtrBase::GetId();
          Sexy::RtDbTable::SetObjectDeletionMode(pRVar4,aRStack_30,2);
          Sexy::RtId::~RtId((RtId *)aRStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          goto LAB_032708bc;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    pWVar6 = (WorldData *)0x0;
LAB_032708bc:
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    pPVar3 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    pRVar4 = (RtDbTable *)PVZDB::GetTable(pPVar3,0x22);
    Sexy::RtDbTable::Reset(pRVar4,false);
  }
  std::string::~string((string *)aSStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pWVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetFormation() */

void __thiscall LawnApp::GetFormation(LawnApp *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint *__ptr;
  undefined8 uVar6;
  Plant *this_00;
  long lVar7;
  NameMapperBase *this_01;
  int extraout_w1;
  uint *puVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  uint *puVar9;
  
  local_8 = ___stack_chk_guard;
  __ptr = malloc(0xb4);
  __ptr[2] = 0;
  __ptr[3] = 0;
  __ptr[0] = 0;
  __ptr[1] = 0;
  __ptr[6] = 0;
  __ptr[7] = 0;
  __ptr[4] = 0;
  __ptr[5] = 0;
  __ptr[10] = 0;
  __ptr[0xb] = 0;
  __ptr[8] = 0;
  __ptr[9] = 0;
  __ptr[0xe] = 0;
  __ptr[0xf] = 0;
  __ptr[0xc] = 0;
  __ptr[0xd] = 0;
  __ptr[0x12] = 0;
  __ptr[0x13] = 0;
  __ptr[0x10] = 0;
  __ptr[0x11] = 0;
  __ptr[0x16] = 0;
  __ptr[0x17] = 0;
  __ptr[0x14] = 0;
  __ptr[0x15] = 0;
  __ptr[0x1a] = 0;
  __ptr[0x1b] = 0;
  __ptr[0x18] = 0;
  __ptr[0x19] = 0;
  __ptr[0x1e] = 0;
  __ptr[0x1f] = 0;
  __ptr[0x1c] = 0;
  __ptr[0x1d] = 0;
  __ptr[0x22] = 0;
  __ptr[0x23] = 0;
  __ptr[0x20] = 0;
  __ptr[0x21] = 0;
  __ptr[0x26] = 0;
  __ptr[0x27] = 0;
  __ptr[0x24] = 0;
  __ptr[0x25] = 0;
  __ptr[0x2a] = 0;
  __ptr[0x2b] = 0;
  __ptr[0x28] = 0;
  __ptr[0x29] = 0;
  __ptr[0x2c] = 0;
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2c);
  while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar3) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar4 = Plant::IsOnBoard(this_00);
    if (cVar4 != '\0') {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      iVar2 = *(int *)(lVar7 + 0x110);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      uVar1 = iVar2 * 9 + *(int *)(lVar7 + 0x114);
      this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      uVar5 = NameMapperBase::GetIdForName(this_01,(string *)(lVar7 + 8));
      *(undefined4 *)
       ((long)__ptr + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) = uVar5;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  Set8BytesTo0();
  Sexy::StrFormat("%d,%d",aIStack_28,5,9);
  FUN_05474278();
  std::string::~string((string *)aIStack_28);
  puVar8 = __ptr;
  do {
    puVar9 = puVar8 + 1;
    Sexy::StrFormat(",%d",aIStack_28,(ulong)*puVar8);
    thunk_FUN_054757c0();
    std::string::~string((string *)aIStack_28);
    puVar8 = puVar9;
  } while (puVar9 != __ptr + 0x2d);
  free(__ptr);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetWorldMapList() */

void __thiscall LawnApp::GetWorldMapList(LawnApp *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  RtObject *this_01;
  WorldMapList *pWVar4;
  ResourceInfo *pRVar5;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x2f00);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x1c);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
      if (bVar2) {
        this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        pWVar4 = Sexy::RtObject::Cast<WorldMapList>(this_01);
        if (pWVar4 != (WorldMapList *)0x0) {
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          break;
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
    }
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  else {
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetChallengeDropItemsList(std::string) */

void LawnApp::GetChallengeDropItemsList
               (TextureInfo *param_1,string *param_2,undefined8 param_3,LineBreakCategory *param_4,
               LineBreakCategory *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  RtObject *this;
  ChallengeDropOutItems *pCVar5;
  long lVar6;
  string *psVar7;
  ProfileMgr *this_00;
  wchar16 *pwVar8;
  ulong uVar9;
  ulong uVar10;
  int extraout_w1;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x40);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pCVar5 = Sexy::RtObject::Cast<ChallengeDropOutItems>(this);
      if (pCVar5 != (ChallengeDropOutItems *)0x0) {
        uVar4 = *(undefined8 *)(pCVar5 + 8);
        lVar6 = FUN_0325d7b8(uVar4,*(undefined8 *)(pCVar5 + 0x10));
        lVar13 = 0;
        goto LAB_03270d5c;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  uVar4 = 0;
  goto LAB_03270d7c;
  while( true ) {
    psVar7 = (string *)FUN_0325d7c4(uVar4,lVar12);
    cVar2 = std::operator==(psVar7,param_2);
    uVar11 = (undefined1)param_3;
    lVar13 = lVar12 + 1;
    if (cVar2 != '\0') break;
LAB_03270d5c:
    lVar12 = lVar13;
    if (lVar12 == lVar6) {
      uVar4 = 0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      goto LAB_03270d7c;
    }
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pwVar8 = (wchar16 *)ProfileMgr::GetCurrentProfile(this_00);
  uVar9 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
  uVar10 = EA::StdC::Spawn((wchar16 *)param_1,(wchar16 **)(uVar9 & 0xffffffff),(bool)uVar11);
  iVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar8,(wchar16 *)(uVar9 & 0xffffffff),
                     (LineBreakCategory *)(uVar10 & 0xffffffff),param_4,param_5);
  lVar13 = (long)iVar3;
  lVar6 = FUN_0325d7c4(*(undefined8 *)(pCVar5 + 8),lVar12);
  if (2 < iVar3) {
    lVar13 = 2;
  }
  uVar4 = FUN_0325d7cc(*(undefined8 *)(lVar6 + 8),lVar13);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
LAB_03270d7c:
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetDropItemsList() */

void LawnApp::GetDropItemsList(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  DropOutItems *pDVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x3f);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      pDVar3 = (DropOutItems *)0x0;
LAB_03270edc:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pDVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pDVar3 = Sexy::RtObject::Cast<DropOutItems>(this);
      if (pDVar3 != (DropOutItems *)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_03270edc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetActivityDropGroup() */

void LawnApp::GetActivityDropGroup(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  ActivityDropGroup *pAVar3;
  int extraout_w1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x3e);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      pAVar3 = (ActivityDropGroup *)0x0;
LAB_03270fcc:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pAVar3);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pAVar3 = Sexy::RtObject::Cast<ActivityDropGroup>(this);
      if (pAVar3 != (ActivityDropGroup *)0x0) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_03270fcc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetServerPHPConfig() */

void __thiscall LawnApp::GetServerPHPConfig(LawnApp *this)

{
  char cVar1;
  PVZDB *pPVar2;
  RtName *this_00;
  undefined8 extraout_x0;
  wstring awStack_28 [8];
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_28,L"PHPServerConfig",aRStack_18);
  nop();
  cVar1 = IsServiceAvailable(this,0x800);
  if (cVar1 != '\0') {
    FUN_05477888(awStack_28,&DAT_056f29d0);
  }
  pPVar2 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (RtName *)PVZDB::GetTable(pPVar2,0x3b);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  Sexy::RtDbTable::GetIdForAlias(this_00);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this_00,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetActivityConfig() */

void LawnApp::GetActivityConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x44);
  Sexy::RtName::RtName(aRStack_18,L"ActivityConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetGachaConfig() */

void LawnApp::GetGachaConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x45);
  Sexy::RtName::RtName(aRStack_18,L"GachaConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetTreasureConfig() */

void LawnApp::GetTreasureConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x4d);
  Sexy::RtName::RtName(aRStack_18,L"TreasureConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetPedTreasureConfig() */

void LawnApp::GetPedTreasureConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x4f);
  Sexy::RtName::RtName(aRStack_18,L"PedTreasureConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetStoreGiftConfig() */

void LawnApp::GetStoreGiftConfig(void)

{
  PVZDB *pPVar1;
  RtName *this;
  undefined8 extraout_x0;
  RtId aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  this = (RtName *)PVZDB::GetTable(pPVar1,0x4a);
  Sexy::RtName::RtName(aRStack_18,L"StoreGiftConfig");
  Sexy::RtDbTable::GetIdForAlias(this);
  Sexy::RtDbTable::GetObjectForId((RtDbTable *)this,aRStack_20);
  nop();
  Sexy::RtId::~RtId(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowDataErrorDialog() */

void __thiscall LawnApp::ShowDataErrorDialog(LawnApp *this)

{
  int iVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::Fake,0x6a);
  if (*(long *)(this + 0x2e20) != 0) {
    KillDataErrorDialog(this);
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  iVar1 = FUN_0325f324(0xfa);
  iVar2 = FUN_0325f324(400);
  pPVar3 = ::operator_new(0x1e8);
  PVZ2UIDialog::PVZ2UIDialog(pPVar3);
  *(PVZ2UIDialog **)(this + 0x2e20) = pPVar3;
  TodStringTranslate(L"[DATA_ERROR_HEADER]");
  PVZ2UIDialog::SetHeaderLabel(pPVar3,awStack_50);
  FUN_05476c50(awStack_50);
  pPVar3 = *(PVZ2UIDialog **)(this + 0x2e20);
  TodStringTranslate(L"[DATA_ERROR_CONTENT]");
  PVZ2UIDialog::SetFooterLabel(pPVar3,awStack_50);
  FUN_05476c50(awStack_50);
  pPVar3 = *(PVZ2UIDialog **)(this + 0x2e20);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,LaunchFAQWebpage);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(pPVar3,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  (**(code **)(**(long **)(this + 0x2e20) + 0x198))
            (*(long **)(this + 0x2e20),(*(int *)(this + 0x724) - iVar2) / 2,
             (*(int *)(this + 0x728) - iVar1) / 2,iVar2,iVar1);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e20));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e20));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e20));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 0x2e20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LogGroupLoadCounts() const */

void __thiscall LawnApp::LogGroupLoadCounts(LawnApp *this)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string((string *)&local_180,"");
  FUN_05462980(auStack_178,(string *)&local_180);
  std::string::~string((string *)&local_180);
  nop();
  Sexy::OutputDebugStrF((wchar_t *)"===================================\n");
  Sexy::OutputDebugStrF((wchar_t *)"LawnApp::LoadGroup Call Counts: \n");
  FUN_054603b8(auStack_168,"LawnApp::LoadGroup Call Counts: \n");
  local_188 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       *)(this + 0x2900));
  while( true ) {
    local_180 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x2900));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_188,(rbtree_iterator *)&local_180);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar4 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)" [%3d] %s\n",(ulong)*(uint *)(lVar3 + 8),uVar4);
    uVar4 = FUN_054603b8(auStack_168,&DAT_0559c968);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar4 = FUN_0546065c(uVar4,*(undefined4 *)(lVar3 + 8));
    uVar4 = FUN_054603b8(uVar4,&DAT_0559c970);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar5 = FUN_0547429c();
    uVar4 = FUN_054603b8(uVar4,uVar5);
    FUN_054603b8(uVar4,&DAT_0559c978);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_188);
  }
  Sexy::OutputDebugStrF((wchar_t *)"LawnApp::PrepareLoadGroup Call Counts: \n");
  FUN_054603b8(auStack_168,"LawnApp::PrepareLoadGroup Call Counts: \n");
  local_188 = std::
              map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              ::begin((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       *)(this + 0x2930));
  while( true ) {
    local_180 = std::
                map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)(this + 0x2930));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_188,(rbtree_iterator *)&local_180);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar4 = FUN_0547429c();
    Sexy::OutputDebugStrF((wchar_t *)" [%3d] %s\n",(ulong)*(uint *)(lVar3 + 8),uVar4);
    uVar4 = FUN_054603b8(auStack_168,&DAT_0559c968);
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar4 = FUN_0546065c(uVar4,*(undefined4 *)(lVar3 + 8));
    uVar4 = FUN_054603b8(uVar4,&DAT_0559c970);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188);
    uVar5 = FUN_0547429c();
    uVar4 = FUN_054603b8(uVar4,uVar5);
    FUN_054603b8(uVar4,&DAT_0559c978);
    std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
              ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_188);
  }
  Sexy::OutputDebugStrF((wchar_t *)"-----------------------------------\n");
  Sexy::LazySingleton<DebugLog>::GetInstancePtr();
  FUN_05462824((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_188,auStack_178);
  std::string::string((string *)&local_180,"PvZ2Debug");
  nop();
  std::string::~string((string *)&local_180);
  nop();
  std::string::~string((string *)&local_188);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsAdChannel(ViewType) */

void __thiscall LawnApp::IsAdChannel(LawnApp *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar1 = true;
  local_8 = ___stack_chk_guard;
  if (param_2 != 0) {
    if (param_2 == 1) {
      GetPlatform(this);
    }
    else if (param_2 == 3) {
      this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(this + 0x3670);
      Android::Util::GetPackageName((Util *)this);
      uVar2 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(this_00);
      uVar3 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(this_00);
      local_18 = FUN_032734dc(uVar2,uVar3,asStack_20);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      std::string::~string(asStack_20);
    }
    else {
      bVar1 = param_2 == 2;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* LawnApp::IsAdActivated() */

undefined8 __thiscall LawnApp::IsAdActivated(LawnApp *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = IsAdChannel(this,0);
  if ((cVar1 == '\0') && (cVar1 = IsAdChannel(this,1), cVar1 == '\0')) {
    uVar2 = IsAdChannel(this,3);
    return uVar2;
  }
  return 1;
}


/* LawnApp::UpdateFrames() */

void __thiscall LawnApp::UpdateFrames(LawnApp *this)

{
  char cVar1;
  TimeMgr *this_00;
  DTimerManager *this_01;
  ProfileMgr *this_02;
  NetworkMgr *this_03;
  ServerTime *this_04;
  PVPManager *this_05;
  ActivityManager *this_06;
  IdentifierMgr *this_07;
  GemOfferMgr *this_08;
  AuthMgr *this_09;
  CustomLevelMgr *this_10;
  TutorialEffectMgr *this_11;
  TGALogMgr *this_12;
  NewPVPMgr *this_13;
  long *plVar2;
  float fVar3;
  
  this_00 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  TimeMgr::Update(this_00);
  Sexy::SexyApp::UpdateFrames((SexyApp *)this);
  this_01 = (DTimerManager *)DTimerManager::getInstane();
  DTimerManager::update(this_01);
  GameStateMgr::Update((GameStateMgr *)(this + 0x9f8));
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Update(this_02);
  cVar1 = IsAdActivated(gLawnApp);
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x18))();
    Sexy::LazySingleton<AbtestMgr>::GetInstance();
    nop();
  }
  if (this[0x302b] != (LawnApp)0x0) {
    Sexy::ResourceManager::SetSoundBankInvaild();
    this[0x302b] = (LawnApp)0x0;
  }
  this_03 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::Update(this_03);
  Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr();
  nop();
  this_04 = (ServerTime *)ServerTime::Instance();
  ServerTime::Update(this_04,0.0);
  this_05 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::Update(this_05);
  this_06 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Update(this_06);
  this_07 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstancePtr();
  IdentifierMgr::Update(this_07);
  this_08 = (GemOfferMgr *)Sexy::LazySingleton<GemOfferMgr>::GetInstance();
  GemOfferMgr::Update(this_08);
  this_09 = (AuthMgr *)Sexy::LazySingleton<AuthMgr>::GetInstance();
  fVar3 = (float)PVZ_RealDt();
  AuthMgr::Update(this_09,fVar3);
  this_10 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
  fVar3 = (float)PVZ_RealDt();
  CustomLevelMgr::Update(this_10,fVar3);
  this_11 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  TutorialEffectMgr::Update(this_11);
  this_12 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::UpdateFrame(this_12);
  Sexy::LazySingleton<SocialShareMgr>::GetInstance();
  nop();
  this_13 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::Update(this_13);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onLoginiCloudServerFinish(bool) */

void __thiscall LawnApp::onLoginiCloudServerFinish(LawnApp *this,bool param_1)

{
  char cVar1;
  long *plVar2;
  NetworkMgr *this_00;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (cVar1 = IsAdActivated(gLawnApp), cVar1 != '\0')) {
    plVar2 = (long *)EASquared::Instance();
    pcVar3 = *(code **)(*plVar2 + 0x10);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    NetworkMgr::GetNewNetWorkProcess(this_00);
    Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
    (*pcVar3)(plVar2,asStack_10);
    std::string::~string(asStack_10);
  }
  setProfileSyncing(this,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsInWatchADBlackList(std::string) */

void __thiscall LawnApp::IsInWatchADBlackList(LawnApp *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x3688);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_032739e8(uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LawnApp() */

void __thiscall LawnApp::LawnApp(LawnApp *this)

{
  undefined *puVar1;
  int iVar2;
  time_t tVar3;
  TimeMgr *this_00;
  LogServer *this_01;
  char *__n;
  size_t sVar4;
  undefined1 auStack_88 [56];
  string local_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ScaledApp::ScaledApp((ScaledApp *)this);
  *(undefined ***)this = &PTR_nop_06610700;
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06610ba8;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0x9d0) = 0;
  GameStateMgr::GameStateMgr((GameStateMgr *)(this + 0x9f8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28e0));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x28f8));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2900));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2930));
  this[0x2960] = (LawnApp)0x1;
  Set8BytesTo0((string *)(this + 0x2970));
  Set8BytesTo0((string *)(this + 0x2978));
  PVZCachedNetworkTableManager::PVZCachedNetworkTableManager
            ((PVZCachedNetworkTableManager *)(this + 0x29a8));
  *(undefined4 *)(this + 0x29fc) = 0;
  this[0x2a10] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x2cb8) = 0;
  *(undefined8 *)(this + 0x2cc0) = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x2ce8));
  Set8BytesTo0((string *)(this + 0x2d40));
  *(undefined8 *)(this + 0x2e48) = 0;
  *(undefined8 *)(this + 0x2e58) = 0;
  *(undefined8 *)(this + 0x2e60) = 0;
  *(undefined8 *)(this + 0x2e68) = 0;
  *(undefined8 *)(this + 0x2e70) = 0;
  *(undefined8 *)(this + 0x2e80) = 0;
  PVZVersionNetworkManager::PVZVersionNetworkManager((PVZVersionNetworkManager *)(this + 0x2eb0));
  PVZRechargeCheckServer::PVZRechargeCheckServer((PVZRechargeCheckServer *)(this + 0x2ed0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x2f00));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f08));
  this[0x2f30] = (LawnApp)0x0;
  this[0x2f31] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x2f34) = 0;
  *(undefined4 *)(this + 0x2f38) = 0;
  Set8BytesTo0((string *)(this + 0x2f48));
  Set8BytesTo0(this + 0x2f50);
  Set8BytesTo0(this + 0x2f58);
  *(undefined4 *)(this + 0x2f60) = 0xffffffff;
  *(undefined4 *)(this + 0x2f64) = 0;
  Set8BytesTo0(this + 0x2f68);
  Set8BytesTo0(this + 0x2f70);
  *(undefined4 *)(this + 0x2f80) = 0xffffffff;
  *(undefined4 *)(this + 0x2f84) = 0xffffffff;
  *(undefined4 *)(this + 0x2f88) = 0;
  *(undefined4 *)(this + 0x2f94) = 0;
  Set8BytesTo0((string *)(this + 0x2f98));
  Set8BytesTo0(this + 0x2fa0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x2fb0),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x2fe0),(DummyInit *)0x0);
  Set8BytesTo0(this + 0x3030);
  Sexy::Delegate1<bool>::Delegate1((DummyInit *)(this + 0x3038));
  this[0x3068] = (LawnApp)0x0;
  RedPacketRewardInfo::RedPacketRewardInfo((RedPacketRewardInfo *)(this + 0x3070));
  PlantTrialConfig::PlantTrialConfig((PlantTrialConfig *)(this + 0x30e0));
  RechargeRewardConfig::RechargeRewardConfig((RechargeRewardConfig *)(this + 0x3190));
  ConsumptionRewardInfo::ConsumptionRewardInfo((ConsumptionRewardInfo *)(this + 0x3208));
  DailyAchievementInfo::DailyAchievementInfo((DailyAchievementInfo *)(this + 0x3240));
  LevelOfTheDayConfigInfo::LevelOfTheDayConfigInfo((LevelOfTheDayConfigInfo *)(this + 0x3390));
  NationalDayRewardConfigInfo::NationalDayRewardConfigInfo
            ((NationalDayRewardConfigInfo *)(this + 0x33b0));
  RebateRewardConfig::RebateRewardConfig((RebateRewardConfig *)(this + 0x33d0));
  StarConvertConfig::StarConvertConfig((StarConvertConfig *)(this + 0x3410));
  LostNetActivityConfig::LostNetActivityConfig((LostNetActivityConfig *)(this + 0x3438));
  PlantAdventureConfig::PlantAdventureConfig((PlantAdventureConfig *)(this + 0x3480));
  WorldCupConfig::WorldCupConfig((WorldCupConfig *)(this + 0x34d0));
  JoustPlantPowerConfig::JoustPlantPowerConfig((JoustPlantPowerConfig *)(this + 0x34f8));
  Set8BytesTo0((string *)(this + 0x3560));
  InvitationPlayerInfo::InvitationPlayerInfo((InvitationPlayerInfo *)(this + 0x3588));
  OfferBundleConfig::OfferBundleConfig((OfferBundleConfig *)(this + 0x35b0));
  Set8BytesTo0((string *)(this + 0x3660));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3670));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x3688));
  gGameStateMgr = (GameStateMgr *)(this + 0x9f8);
  gLawnApp = this;
  std::string::append((string *)(this + 0x2970),"1.0.0",0x559c9d8);
  __n = "1.0.0";
  std::string::append((string *)(this + 0x2978),"1.0.0",0x559c9d8);
  *(undefined4 *)(this + 0x2980) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0x2de8) = 0;
  *(undefined8 *)(this + 0x2df8) = 0;
  *(undefined8 *)(this + 0x2df0) = 0;
  *(undefined8 *)(this + 0x2a18) = 0;
  *(undefined8 *)(this + 0x2a28) = 0;
  *(undefined8 *)(this + 0x2a30) = 0;
  *(undefined8 *)(this + 0x2a38) = 0;
  *(undefined8 *)(this + 0x2a40) = 0;
  *(undefined8 *)(this + 0x2d38) = 0;
  *(undefined8 *)(this + 0x2d48) = 0;
  *(undefined8 *)(this + 0x2d30) = 0;
  *(undefined8 *)(this + 0x2d50) = 0;
  *(undefined8 *)(this + 0x2d58) = 0;
  *(undefined8 *)(this + 0x2aa8) = 0;
  *(undefined8 *)(this + 0x2d70) = 0;
  *(undefined8 *)(this + 0x2d68) = 0;
  *(undefined8 *)(this + 0x2a48) = 0;
  *(undefined8 *)(this + 0x2a50) = 0;
  *(undefined8 *)(this + 0x2a58) = 0;
  *(undefined8 *)(this + 0x2a60) = 0;
  *(undefined8 *)(this + 0x2a68) = 0;
  *(undefined8 *)(this + 0x2a70) = 0;
  *(undefined8 *)(this + 0x2a78) = 0;
  *(undefined8 *)(this + 0x2a80) = 0;
  *(undefined8 *)(this + 0x2a88) = 0;
  *(undefined8 *)(this + 0x2a90) = 0;
  *(undefined8 *)(this + 0x2a98) = 0;
  *(undefined8 *)(this + 0x2aa0) = 0;
  *(undefined8 *)(this + 0x2ab0) = 0;
  *(undefined8 *)(this + 0x2ab8) = 0;
  *(undefined8 *)(this + 0x2ac0) = 0;
  *(undefined8 *)(this + 0x2ac8) = 0;
  *(undefined8 *)(this + 0x2ad0) = 0;
  *(undefined8 *)(this + 0x2ad8) = 0;
  *(undefined8 *)(this + 0x2ae0) = 0;
  *(undefined8 *)(this + 0x2ae8) = 0;
  *(undefined8 *)(this + 11000) = 0;
  *(undefined8 *)(this + 0x2bb8) = 0;
  *(undefined8 *)(this + 0x2bd0) = 0;
  *(undefined8 *)(this + 0x2bc0) = 0;
  *(undefined8 *)(this + 0x2bc8) = 0;
  *(undefined8 *)(this + 0x2b00) = 0;
  *(undefined8 *)(this + 0x2b08) = 0;
  *(undefined8 *)(this + 0x2af0) = 0;
  *(undefined8 *)(this + 0x2b10) = 0;
  *(undefined8 *)(this + 0x2b18) = 0;
  *(undefined8 *)(this + 0x2b20) = 0;
  *(undefined8 *)(this + 0x2b28) = 0;
  *(undefined8 *)(this + 0x2b30) = 0;
  *(undefined8 *)(this + 0x2b38) = 0;
  *(undefined8 *)(this + 0x2b40) = 0;
  *(undefined8 *)(this + 0x2b48) = 0;
  *(undefined8 *)(this + 0x2b50) = 0;
  *(undefined8 *)(this + 0x2b58) = 0;
  *(undefined8 *)(this + 0x2b60) = 0;
  *(undefined8 *)(this + 0x2b68) = 0;
  *(undefined8 *)(this + 0x2b70) = 0;
  *(undefined8 *)(this + 0x2e78) = 0;
  *(undefined8 *)(this + 0x2b78) = 0;
  *(undefined8 *)(this + 0x2b80) = 0;
  *(undefined8 *)(this + 0x2e88) = 0;
  *(undefined8 *)(this + 0x2be0) = 0;
  *(undefined8 *)(this + 0x2be8) = 0;
  *(undefined8 *)(this + 0x2bf0) = 0;
  *(undefined8 *)(this + 0x2bf8) = 0;
  *(undefined8 *)(this + 0x2c00) = 0;
  *(undefined8 *)(this + 0x2c08) = 0;
  *(undefined8 *)(this + 0x2c10) = 0;
  *(undefined8 *)(this + 0x2c18) = 0;
  *(undefined8 *)(this + 0x2c20) = 0;
  *(undefined8 *)(this + 0x2c28) = 0;
  *(undefined8 *)(this + 0x2c30) = 0;
  *(undefined8 *)(this + 0x2c38) = 0;
  *(undefined8 *)(this + 0x2c40) = 0;
  *(undefined8 *)(this + 0x2c48) = 0;
  *(undefined8 *)(this + 0x2c50) = 0;
  *(undefined8 *)(this + 0x2c60) = 0;
  *(undefined8 *)(this + 0x2c68) = 0;
  *(undefined8 *)(this + 0x2c70) = 0;
  *(undefined8 *)(this + 0x2c78) = 0;
  *(undefined8 *)(this + 0x2c80) = 0;
  *(undefined8 *)(this + 0x2c88) = 0;
  *(undefined8 *)(this + 0x2dd8) = 0;
  *(undefined8 *)(this + 0x2d78) = 0;
  *(undefined8 *)(this + 0x2d80) = 0;
  this[0x2f3d] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x2d88) = 0;
  *(undefined8 *)(this + 0x2d90) = 0;
  *(undefined8 *)(this + 0x2d98) = 0;
  *(undefined8 *)(this + 0x2da0) = 0;
  *(undefined8 *)(this + 0x2da8) = 0;
  *(undefined8 *)(this + 0x2db0) = 0;
  *(undefined8 *)(this + 0x2db8) = 0;
  *(undefined8 *)(this + 0x2dc0) = 0;
  *(undefined8 *)(this + 0x2dc8) = 0;
  *(undefined8 *)(this + 0x2dd0) = 0;
  *(undefined8 *)(this + 0x2bd8) = 0;
  *(undefined8 *)(this + 0x2e08) = 0;
  *(undefined8 *)(this + 0x28d0) = 0;
  *(undefined8 *)(this + 0x2e10) = 0;
  *(undefined8 *)(this + 0x28c8) = 0;
  *(undefined8 *)(this + 0x2e00) = 0;
  *(undefined8 *)(this + 0x2ef0) = 0;
  *(undefined8 *)(this + 0x2ef8) = 0;
  this[0x2f3c] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x3538) = 0;
  *(undefined4 *)(this + 0x2f40) = 0;
  std::string::append((string *)(this + 0x2f48),"",(size_t)__n);
  *(undefined8 *)(this + 0x2e28) = 0;
  *(undefined8 *)(this + 0x2e18) = 0;
  *(undefined8 *)(this + 0x2e30) = 0;
  *(undefined8 *)(this + 0x2e90) = 0;
  *(undefined8 *)(this + 0x2ea0) = 0;
  *(undefined8 *)(this + 0x2e98) = 0;
  *(undefined8 *)(this + 0x2ea8) = 0;
  *(undefined8 *)(this + 0x2a20) = 0;
  *(undefined8 *)(this + 0x9e0) = 0;
  *(undefined8 *)(this + 0x2e38) = 0;
  *(undefined8 *)(this + 0x2e40) = 0;
  *(undefined8 *)(this + 0x2e50) = 0;
  *(undefined8 *)(this + 0x2c90) = 0;
  *(undefined8 *)(this + 0x2c98) = 0;
  *(undefined8 *)(this + 0x2ca0) = 0;
  *(undefined8 *)(this + 0x2ca8) = 0;
  *(undefined8 *)(this + 0x2cb0) = 0;
  *(undefined8 *)(this + 0x2cc8) = 0;
  *(undefined8 *)(this + 0x2cd0) = 0;
  std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>::clear
            ((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>> *)
             (this + 0x2ce8));
  *(undefined8 *)(this + 0x2cd8) = 0;
  *(undefined8 *)(this + 0x2ce0) = 0;
  *(undefined8 *)(this + 0x2d18) = 0;
  *(undefined8 *)(this + 0x2d28) = 0;
  this[0x9d8] = (LawnApp)0x0;
  this[0x9e8] = (LawnApp)0x0;
  this[0x9e9] = (LawnApp)0x0;
  this[0x9ea] = (LawnApp)0x0;
  this[0x9eb] = (LawnApp)0x0;
  this[0x9ec] = (LawnApp)0x0;
  std::string::append((string *)(this + 0x2f98),"",(size_t)__n);
  *(undefined4 *)(this + 0x2984) = 0;
  *(undefined4 *)(this + 0x28d8) = 0;
  *(undefined4 *)(this + 0x28dc) = 0;
  *(undefined4 *)(this + 0x2988) = 2;
  this[0x298c] = (LawnApp)0x0;
  this[0x298d] = (LawnApp)0x0;
  this[0x2d20] = (LawnApp)0x0;
  *(undefined4 *)(this + 0xd4) = 800;
  *(undefined4 *)(this + 0xd8) = 600;
  *(undefined4 *)(this + 0xdc) = 0x20;
  tVar3 = time((time_t *)0x0);
  this[0x6b4] = (LawnApp)0x0;
  sVar4 = 0x3feb333333333333;
  *(int *)(this + 0x2964) = (int)tVar3;
  *(undefined4 *)(this + 0x29f8) = 0;
  *(undefined8 *)(this + 0xe0) = 0x3feb333333333333;
  *(undefined8 *)(this + 0xe8) = 0x3feb333333333333;
  this[0x301c] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x3020) = 0;
  std::string::append((string *)(this + 0x2d40),"egypt5",0x3feb333333333333);
  std::string::append((string *)(this + 0xa0),"PopCap/PlantsVsZombies2",sVar4);
  std::string::append((string *)(this + 0x90),"PlantsVsZombies2",sVar4);
  FUN_05478178(auStack_88,L"Plants vs. Zombies 2",local_50);
  nop();
  thunk_FUN_05477b9c(this + 0x98,auStack_88);
  this[0x6d4] = (LawnApp)0x0;
  this[0x9ed] = (LawnApp)0x0;
  this[0x70a] = (LawnApp)0x1;
  this[0x748] = (LawnApp)0x1;
  this[0x718] = (LawnApp)0x1;
  Sexy::SWTri_AddAllDrawTriFuncs();
  *(undefined4 *)(this + 0x6e0) = 0;
  *(undefined8 *)(this + 0x2990) = 0;
  iVar2 = GetStartingResolution();
  SetWidthHeight(this,iVar2);
  this[0x2f21] = (LawnApp)0x0;
  this[0x2f20] = (LawnApp)0x0;
  std::string::string(local_50,"drivers.ios.use_gles20");
  sVar4 = 1;
  Sexy::SexyAppBase::SetBoolean((SexyAppBase *)this,local_50,true);
  std::string::~string(local_50);
  nop();
  this_00 = (TimeMgr *)Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  TimeMgr::Init(this_00);
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  *(undefined8 *)(this + 0x2fa8) = 0;
  this[0x299a] = (LawnApp)0x0;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x2fb0),(Delegate2 *)aDStack_38);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x2fe0),(Delegate2 *)aDStack_38);
  this[0x299b] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x3010) = 0;
  this[0x299c] = (LawnApp)0x0;
  this[0x3028] = (LawnApp)0x1;
  this[0x3029] = (LawnApp)0x1;
  this[0x302a] = (LawnApp)0x1;
  this[0x302b] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x2e20) = 0;
  this[0x299d] = (LawnApp)0x0;
  this[0x299e] = (LawnApp)0x0;
  this[0x299f] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x3018) = 0xffffffff;
  std::vector<GachaGet,std::allocator<GachaGet>>::clear
            ((vector<GachaGet,std::allocator<GachaGet>> *)(this + 0x28e0));
  this[0x29a0] = (LawnApp)0x0;
  this[0x29a1] = (LawnApp)0x0;
  this[0x29a2] = (LawnApp)0x0;
  this[0x2a00] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x2a04) = 0xffffffff;
  *(undefined4 *)(this + 0x2a08) = 0;
  *(undefined8 *)(this + 0x3528) = 0;
  this[0x3530] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x2de0) = 0;
  *(undefined8 *)(this + 0x3540) = 0;
  *(undefined8 *)(this + 0x3558) = 0;
  *(undefined8 *)(this + 0x3548) = 0;
  *(undefined8 *)(this + 0x3550) = 0;
  std::string::append((string *)(this + 0x3560),"",sVar4);
  *(undefined8 *)(this + 0x3570) = 0;
  *(undefined4 *)(this + 0x3578) = 0;
  *(undefined8 *)(this + 0x3580) = 0;
  *(undefined4 *)(this + 0x2a0c) = 0;
  this[0x3520] = (LawnApp)0x0;
  this[0x3521] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x35ac) = 0;
  this[0x35a8] = (LawnApp)0x0;
  this[0x35a9] = (LawnApp)0x0;
  this[0x36a0] = (LawnApp)0x0;
  std::string::append((string *)(this + 0x3660),"",sVar4);
  this[0x3668] = (LawnApp)0x0;
  *(undefined4 *)(this + 0x2f78) = 0x3f800000;
  this[0x2f7c] = (LawnApp)0x0;
  *(undefined8 *)(this + 0x2b88) = 0;
  *(undefined8 *)(this + 0x2b90) = 0;
  *(undefined8 *)(this + 0x2b98) = 0;
  *(undefined8 *)(this + 0x2ba0) = 0;
  *(undefined8 *)(this + 0x2ba8) = 0;
  *(undefined8 *)(this + 0x2bb0) = 0;
  InitAdsStatus(this);
  *(undefined4 *)(this + 0x3658) = 0;
  *(undefined4 *)(this + 0x365c) = 1;
  this_01 = (LogServer *)LogServer::Instance();
  LogServer::Start(this_01);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnFinishedInitDangerRoom);
  MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
            ((MessageRouter *)puVar1,Message::FinishedInitDangerRoom);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFaiicck);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::Faiicck,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMatikck);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::Matikck,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnLuaNotify);
  MessageRouter::
  Subscribe<std::string_const&,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(std::string_const&)>>
            ((MessageRouter *)puVar1,Message::OnLuaNotify);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SetAndroidSDKInitStatus);
  MessageRouter::Subscribe<int,int,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::AndroidSDKInit);
  FUN_05476c50(auStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::Shutdown() */

void __thiscall LawnApp::Shutdown(LawnApp *this)

{
  int iVar1;
  bool bVar2;
  SaveGameMgr *this_00;
  char *pcVar3;
  TGALogMgr *this_01;
  ProfileMgr *this_02;
  undefined8 uVar4;
  RtObject *pRVar5;
  long *extraout_x0;
  long *extraout_x0_00;
  PVZDB *this_03;
  LogServer *this_04;
  int extraout_w1;
  int extraout_w1_00;
  int iVar6;
  void *pvVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (SaveGameMgr *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
  SaveGameMgr::TrySaveGame(this_00,false);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Stop_Master_Audio_Bus");
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_30,"10002");
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_28);
  TGALogMgr::Log(this_01,asStack_30,(vector *)avStack_28);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_28);
  std::string::~string(asStack_30);
  nop();
  if (*(long *)(this + 0x2a20) == 0) {
    if (this[0x3ad] == (LawnApp)0x0) {
      this[0x3ad] = (LawnApp)0x1;
      iVar6 = 0;
      do {
        iVar1 = iVar6 + 1;
        (**(code **)(*(long *)this + 0x280))(this,iVar6);
        iVar6 = iVar1;
      } while (iVar1 != 5);
      if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
        Board::EndLevel(*(Board **)(this + 0x9f0));
        this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::Save(this_02,false,false);
      }
      GameStateMgr::ShutDown((GameStateMgr *)(this + 0x9f8));
      Sexy::SexyAppBase::ProcessSafeDeleteList((SexyAppBase *)this);
      if (*(long *)(this + 0x2f28) != 0) {
        Achievement::Shutdown();
        Leaderboard::Shutdown();
        pvVar7 = *(void **)(this + 0x2f28);
        if (pvVar7 != (void *)0x0) {
          nop();
          AK::FreeHook(pvVar7);
        }
        *(undefined8 *)(this + 0x2f28) = 0;
      }
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(avStack_28,uVar4,0x25);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)avStack_28), bVar2
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)avStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_30);
        Sexy::RtId::~RtId((RtId *)asStack_30);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar2) {
          pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar2 = Sexy::RtObject::IsA<GameObject>(pRVar5);
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            nop();
            if (extraout_x0 != (long *)0x0) {
              (**(code **)(*extraout_x0 + 0x48))();
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)avStack_28,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)avStack_28);
      uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(avStack_28,uVar4,0x8d);
      while( true ) {
        bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)avStack_28);
        if (!bVar2) break;
        Sexy::RtDbTable::Iterator::operator*((Iterator *)avStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)asStack_30);
        Sexy::RtId::~RtId((RtId *)asStack_30);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar2) {
          pRVar5 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          bVar2 = Sexy::RtObject::IsA<GameObject>(pRVar5);
          if (bVar2) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            nop();
            if (extraout_x0_00 != (long *)0x0) {
              (**(code **)(*extraout_x0_00 + 0x48))();
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++((Iterator *)avStack_28,extraout_w1_00);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)avStack_28);
      this_03 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::Shutdown(this_03);
      FilterEffectDisposeForApp();
      FreeGlobalAllocators();
      gResourceManager = 0;
      gAppHeight = 0;
      Sexy::SexyAppBase::Shutdown((SexyAppBase *)this);
      this_04 = (LogServer *)LogServer::Instance();
      LogServer::Stop(this_04);
    }
  }
  else {
    this[0x6d1] = (LawnApp)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowRechargeNotice() */

void __thiscall LawnApp::ShowRechargeNotice(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  char *pcVar4;
  wchar_t *pwVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_0325f324(0x2f4);
  this_00 = gLawnApp;
  iVar3 = FUN_0325f324(0x186);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[RECHARGE_NOTICE_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  iVar2 = GetPlatform(gLawnApp);
  cVar1 = Android::Diag::IsMobileCardType(1);
  if ((cVar1 == '\0') ||
     ((((iVar2 != 1 && (iVar2 != 6)) && (0x2a < iVar2 - 0xfU)) && (0x6f < iVar2 - 0x43U)))) {
    pwVar5 = L"[RECHARGE_NOTICE_DESC]";
  }
  else {
    pwVar5 = L"[RECHARGE_NOTICE_DESC_FOR_LOTTERY]";
  }
  FUN_05478178(awStack_50,pwVar5,auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this_01,3);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowStoreUINow(std::string const&) */

void __thiscall LawnApp::ShowStoreUINow(LawnApp *this,string *param_1)

{
  char *pcVar1;
  StoreUI *this_00;
  
  if (*(StoreUI **)(this + 0x2a38) == (StoreUI *)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x198);
    StoreUI::StoreUI(this_00,param_1);
    *(StoreUI **)(this + 0x2a38) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  }
  else {
    StoreUI::ShowPanel(*(StoreUI **)(this + 0x2a38),param_1);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a38));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a38));
  return;
}


/* LawnApp::KillStoreUI() */

void __thiscall LawnApp::KillStoreUI(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a38));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a38));
  *(undefined8 *)(this + 0x2a38) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantRewardDialog(Sexy::RtWeakPtr<PlantType const>, bool, int, bool, bool) */

void __thiscall
LawnApp::ShowPlantRewardDialog
          (LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3,undefined4 param_4,
          undefined1 param_5,char param_6)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  char *pcVar3;
  PVZ2UIDialog *this_01;
  Widget *pWVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x23c);
  iVar2 = FUN_0325f324(0x175);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
  pWVar4 = ::operator_new(0x110);
  PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
            ((PVZ2UIRewardObjectDisplayer *)pWVar4,aRStack_50,param_3,param_4,0xffffffff,param_5,
             param_6);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  PVZ2UIDialog::SetContents(this_01,pWVar4);
  if (param_6 == '\0') {
    FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,KillPlantRewardDialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aRStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAccessorySwitchDialog(Sexy::RtWeakPtr<PlantType const>) */

void __thiscall LawnApp::ShowAccessorySwitchDialog(LawnApp *this,RtWeakPtrBase *param_2)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  char *pcVar3;
  PVZ2UIDialog *this_01;
  wstring *pwVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  Plant aPStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x23c);
  iVar2 = FUN_0325f324(0x175);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
  pwVar4 = ::operator_new(0x110);
  PVZ2UIRewardObjectDisplayer::PVZ2UIRewardObjectDisplayer
            ((PVZ2UIRewardObjectDisplayer *)pwVar4,aRStack_50,0,0,0xffffffff,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
  Plant::GetFormattedNameString(aPStack_68,aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  FUN_05478178(aRStack_50,&DAT_056f11a8,awStack_58);
  PVZ2UISeedChooserPreviewDisplay::SetDescriptionText(pwVar4);
  FUN_05476c50(aRStack_50);
  nop();
  TodStringTranslate(L"[SWITCH_CONFIRM_TITLE]");
  PuzzleTip::SetTip(pwVar4,aRStack_50);
  FUN_05476c50(aRStack_50);
  TodStringTranslate(L"[SWITCH_CONFIRM_MESSAGE]");
  uVar5 = FUN_054766ec(aPStack_68);
  FUN_05478178(awStack_58,uVar5,auStack_70);
  TodReplaceString(awStack_60,L"{PLANT_NAME_1}",awStack_58);
  FUN_054766c8(awStack_60,aRStack_50);
  FUN_05476c50(aRStack_50);
  FUN_05476c50(awStack_58);
  nop();
  uVar5 = FUN_054766ec(aPStack_68);
  FUN_05478178(awStack_58,uVar5,auStack_70);
  TodReplaceString(awStack_60,L"{PLANT_NAME_2}",awStack_58);
  FUN_054766c8(awStack_60,aRStack_50);
  FUN_05476c50(aRStack_50);
  FUN_05476c50(awStack_58);
  nop();
  FUN_05477b24(aRStack_50,awStack_60);
  PVZ2UIRewardObjectDisplayer::SetDescription(pwVar4,aRStack_50);
  FUN_05476c50(aRStack_50);
  PVZ2UIDialog::SetContents(this_01,(Widget *)pwVar4);
  FUN_05478178(awStack_58,L"[BUTTON_SWITCH]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,DoSwitchAccessory);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aRStack_50);
  PVZ2UIDialog::AddButton(this_01,awStack_58,aDStack_38,0);
  FUN_05476c50(awStack_58);
  nop();
  PVZ2UIDialog::AddCancelButton(this_01);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.7);
  FUN_05476c50(awStack_60);
  FUN_05476c50(aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAccessoryAwardDialog(Sexy::Image*, Sexy::Image*, std::wstring, std::wstring,
   std::wstring) */

void __thiscall
LawnApp::ShowAccessoryAwardDialog
          (LawnApp *this,undefined8 param_1,undefined8 param_2,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  char *pcVar3;
  PVZ2UIDialog *this_01;
  Widget *pWVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x23c);
  iVar2 = FUN_0325f324(0x175);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05477b24(auStack_60,param_4);
  FUN_05477b24(auStack_58,param_5);
  FUN_05477b24(aCStack_50,param_6);
  pWVar4 = ::operator_new(0x108);
  PVZ2UIAccessoryObjectDisplayer::PVZ2UIAccessoryObjectDisplayer
            ((PVZ2UIAccessoryObjectDisplayer *)pWVar4,param_1,param_2,auStack_60,auStack_58,
             aCStack_50);
  FUN_05476c50(aCStack_50);
  FUN_05476c50(auStack_58);
  FUN_05476c50(auStack_60);
  PVZ2UIDialog::SetContents(this_01,pWVar4);
  FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillAccessoryAwardDialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAvatarRewardDialog(Sexy::RtWeakPtr<PlantType const>, std::string const&, std::string
   const&, bool, int, PlantAvatarType, int) */

void __thiscall
LawnApp::ShowAvatarRewardDialog
          (LawnApp *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  char *pcVar3;
  PVZ2UIDialog *this_01;
  PVZ2UIRewardAvatarObjectDisplayer *this_02;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x23c);
  iVar2 = FUN_0325f324(0x175);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,param_2);
  this_02 = ::operator_new(0x110);
  PVZ2UIRewardAvatarObjectDisplayer::PVZ2UIRewardAvatarObjectDisplayer
            (this_02,aRStack_50,param_3,param_4,param_5,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (-1 < param_8) {
    PVZ2UIRewardAvatarObjectDisplayer::SetAvatarIndex(this_02,param_8);
  }
  PVZ2UIDialog::SetContents(this_01,(Widget *)this_02);
  FUN_05478178(auStack_58,L"[CONTINUE_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,KillPlantRewardDialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aRStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowBuyPlantDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall LawnApp::ShowBuyPlantDialog(LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char *pcVar1;
  PVZ2UIBuyPlantDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2ab8);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x1a0);
    PVZ2UIBuyPlantDialog::PVZ2UIBuyPlantDialog(pPVar2,aRStack_10,param_3);
    *(PVZ2UIBuyPlantDialog **)(this + 0x2ab8) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2ab8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab8));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ab8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowBuyAvatarDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
LawnApp::ShowBuyAvatarDialog(LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char *pcVar1;
  PVZ2UIBuyAvatarDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2ac0);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x1a0);
    PVZ2UIBuyAvatarDialog::PVZ2UIBuyAvatarDialog(pPVar2,aRStack_10,param_3);
    *(PVZ2UIBuyAvatarDialog **)(this + 0x2ac0) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2ac0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ac0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ac0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ac0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowBuyGachaDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall LawnApp::ShowBuyGachaDialog(LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char *pcVar1;
  PVZ2UIBuyGachaDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2ac8);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x1a0);
    PVZ2UIBuyGachaDialog::PVZ2UIBuyGachaDialog(pPVar2,aRStack_10,param_3);
    *(PVZ2UIBuyGachaDialog **)(this + 0x2ac8) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2ac8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ac8));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ac8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ac8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowBuyGiftDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall LawnApp::ShowBuyGiftDialog(LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char *pcVar1;
  PVZ2UIBuyGiftDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2ad0);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x198);
    PVZ2UIBuyGiftDialog::PVZ2UIBuyGiftDialog(pPVar2,aRStack_10,param_3);
    *(PVZ2UIBuyGiftDialog **)(this + 0x2ad0) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2ad0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ad0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ad0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ad0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowChooseActivityLevelsDialog() */

void __thiscall LawnApp::ShowChooseActivityLevelsDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapChooseDialog *pWVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  pWVar2 = *(WorldMapChooseDialog **)(this + 0x2b48);
  if (pWVar2 == (WorldMapChooseDialog *)0x0) {
    pWVar2 = ::operator_new(0x138);
    WorldMapChooseDialog::WorldMapChooseDialog(pWVar2,0);
    *(WorldMapChooseDialog **)(this + 0x2b48) = pWVar2;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pWVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b48));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b48));
  return;
}


/* LawnApp::ShowDailyActivityChooseDialog() */

void __thiscall LawnApp::ShowDailyActivityChooseDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapDailyActivityChooseDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(WorldMapDailyActivityChooseDialog **)(this + 0x2b88);
  if (this_00 == (WorldMapDailyActivityChooseDialog *)0x0) {
    this_00 = ::operator_new(0x218);
    WorldMapDailyActivityChooseDialog::WorldMapDailyActivityChooseDialog(this_00,1);
    *(WorldMapDailyActivityChooseDialog **)(this + 0x2b88) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b88));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b88));
  return;
}


/* LawnApp::ShowChallengeChooseDialog() */

void __thiscall LawnApp::ShowChallengeChooseDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapChallengeChooseDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(WorldMapChallengeChooseDialog **)(this + 0x2b90);
  if (this_00 == (WorldMapChallengeChooseDialog *)0x0) {
    this_00 = ::operator_new(0x218);
    WorldMapChallengeChooseDialog::WorldMapChallengeChooseDialog(this_00,1);
    *(WorldMapChallengeChooseDialog **)(this + 0x2b90) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b90));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b90));
  return;
}


/* LawnApp::ShowShopChooseDialog() */

void __thiscall LawnApp::ShowShopChooseDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapShopChooseDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(WorldMapShopChooseDialog **)(this + 0x2b98);
  if (this_00 == (WorldMapShopChooseDialog *)0x0) {
    this_00 = ::operator_new(0x220);
    WorldMapShopChooseDialog::WorldMapShopChooseDialog(this_00,1);
    *(WorldMapShopChooseDialog **)(this + 0x2b98) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b98));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b98));
  return;
}


/* LawnApp::ShowWelfareChooseDialog() */

void __thiscall LawnApp::ShowWelfareChooseDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapWelfareChooseDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(WorldMapWelfareChooseDialog **)(this + 0x2ba0);
  if (this_00 == (WorldMapWelfareChooseDialog *)0x0) {
    this_00 = ::operator_new(0x220);
    WorldMapWelfareChooseDialog::WorldMapWelfareChooseDialog(this_00,1);
    *(WorldMapWelfareChooseDialog **)(this + 0x2ba0) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ba0));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ba0));
  return;
}


/* LawnApp::ShowActivityHome() */

void __thiscall LawnApp::ShowActivityHome(LawnApp *this)

{
  int iVar1;
  char *pcVar2;
  ProfileMgr *this_00;
  long lVar3;
  WorldMapActivityHome *this_01;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  this_01 = *(WorldMapActivityHome **)(this + 0x2b68);
  if (this_01 == (WorldMapActivityHome *)0x0) {
    this_01 = ::operator_new(0x1e0);
    WorldMapActivityHome::WorldMapActivityHome(this_01,1);
    *(WorldMapActivityHome **)(this + 0x2b68) = this_01;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_01);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b68));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b68));
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_0325d6ac(*(undefined4 *)(lVar3 + 0x40));
  if (iVar1 != 0x35) {
    if (iVar1 != 0x23) {
      return;
    }
    WorldMapActivityHome::InitJoustTutotrial(*(WorldMapActivityHome **)(this + 0x2b68));
    return;
  }
  WorldMapActivityHome::InitDangerRoomTutotrial(*(WorldMapActivityHome **)(this + 0x2b68));
  return;
}


/* LawnApp::ShowActivityHomeExtra() */

void __thiscall LawnApp::ShowActivityHomeExtra(LawnApp *this)

{
  char *pcVar1;
  WorldMapActivityHomeExtra *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(WorldMapActivityHomeExtra **)(this + 0x2b70);
  if (this_00 == (WorldMapActivityHomeExtra *)0x0) {
    this_00 = ::operator_new(0x1e8);
    WorldMapActivityHomeExtra::WorldMapActivityHomeExtra(this_00,1);
    *(WorldMapActivityHomeExtra **)(this + 0x2b70) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b70));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b70));
  return;
}


/* LawnApp::ShowActivityCollection() */

void __thiscall LawnApp::ShowActivityCollection(LawnApp *this)

{
  char *pcVar1;
  UIActivityCollection *this_00;
  long lVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  lVar2 = *(long *)(this + 0x2b78);
  if (lVar2 == 0) {
    this_00 = ::operator_new(0x1a0);
    UIActivityCollection::UIActivityCollection(this_00);
    *(UIActivityCollection **)(this + 0x2b78) = this_00;
    (**(code **)(*(long *)this_00 + 0x328))(this_00);
    lVar2 = *(long *)(this + 0x2b78);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b78));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b78));
  return;
}


/* LawnApp::ShowLinkageActivityCollection() */

void __thiscall LawnApp::ShowLinkageActivityCollection(LawnApp *this)

{
  char *pcVar1;
  UILinkageActivityCollection *this_00;
  long lVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  lVar2 = *(long *)(this + 0x2b78);
  if (lVar2 == 0) {
    this_00 = ::operator_new(0x1a0);
    UILinkageActivityCollection::UILinkageActivityCollection(this_00);
    *(UILinkageActivityCollection **)(this + 0x2b78) = this_00;
    (**(code **)(*(long *)this_00 + 0x328))(this_00);
    lVar2 = *(long *)(this + 0x2b78);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b78));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b78));
  return;
}


/* LawnApp::ShowNewPlayerCollection() */

void __thiscall LawnApp::ShowNewPlayerCollection(LawnApp *this)

{
  char *pcVar1;
  UINewPlayerCollection *this_00;
  long lVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  lVar2 = *(long *)(this + 0x2b80);
  if (lVar2 == 0) {
    this_00 = ::operator_new(0x1a0);
    UINewPlayerCollection::UINewPlayerCollection(this_00);
    *(UINewPlayerCollection **)(this + 0x2b80) = this_00;
    UINewPlayerCollection::Init(this_00);
    lVar2 = *(long *)(this + 0x2b80);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b80));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b80));
  return;
}


/* LawnApp::ShowChoosePlantsDialog() */

void __thiscall LawnApp::ShowChoosePlantsDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapChooseDialog *pWVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  pWVar2 = *(WorldMapChooseDialog **)(this + 0x2b50);
  if (pWVar2 == (WorldMapChooseDialog *)0x0) {
    pWVar2 = ::operator_new(0x138);
    WorldMapChooseDialog::WorldMapChooseDialog(pWVar2,1);
    *(WorldMapChooseDialog **)(this + 0x2b50) = pWVar2;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pWVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b50));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b50));
  return;
}


/* LawnApp::ShowChooseWelfareDialog() */

void __thiscall LawnApp::ShowChooseWelfareDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapChooseDialog *pWVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  pWVar2 = *(WorldMapChooseDialog **)(this + 0x2b58);
  if (pWVar2 == (WorldMapChooseDialog *)0x0) {
    pWVar2 = ::operator_new(0x138);
    WorldMapChooseDialog::WorldMapChooseDialog(pWVar2,2);
    *(WorldMapChooseDialog **)(this + 0x2b58) = pWVar2;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pWVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b58));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b58));
  return;
}


/* LawnApp::ShowChooseRiddlesDialog() */

void __thiscall LawnApp::ShowChooseRiddlesDialog(LawnApp *this)

{
  char *pcVar1;
  WorldMapChooseDialog *pWVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  pWVar2 = *(WorldMapChooseDialog **)(this + 0x2b60);
  if (pWVar2 == (WorldMapChooseDialog *)0x0) {
    pWVar2 = ::operator_new(0x138);
    WorldMapChooseDialog::WorldMapChooseDialog(pWVar2,5);
    *(WorldMapChooseDialog **)(this + 0x2b60) = pWVar2;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pWVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b60));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b60));
  return;
}


/* LawnApp::ShowPlantTrialView(std::string) */

void __thiscall LawnApp::ShowPlantTrialView(LawnApp *this,string *param_2)

{
  char *pcVar1;
  PlantTrialViewUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2b00);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x160);
    PlantTrialViewUI::PlantTrialViewUI(this_00,param_2);
    *(PlantTrialViewUI **)(this + 0x2b00) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar2 = *(long *)(this + 0x2b00);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b00));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantLevelUpListView() */

void __thiscall LawnApp::ShowPlantLevelUpListView(LawnApp *this)

{
  char *pcVar1;
  PlantLevelUpListView *pPVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  lVar3 = *(long *)(this + 11000);
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    std::string::string(asStack_10,"");
    pPVar2 = ::operator_new(0x1e0);
    PlantLevelUpListView::PlantLevelUpListView(pPVar2,asStack_10,0);
    *(PlantLevelUpListView **)(this + 11000) = pPVar2;
    std::string::~string(asStack_10);
    nop();
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 11000));
    lVar3 = *(long *)(this + 11000);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 11000));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowArtifactCultivationListView() */

void __thiscall LawnApp::ShowArtifactCultivationListView(LawnApp *this)

{
  char *pcVar1;
  ArtifactCultivationListView *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2bb8);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x198);
    ArtifactCultivationListView::ArtifactCultivationListView(this_00);
    *(ArtifactCultivationListView **)(this + 0x2bb8) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar2 = *(long *)(this + 0x2bb8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bb8));
  ArtifactCultivationListView::TriggerTutorial(*(ArtifactCultivationListView **)(this + 0x2bb8));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  return;
}


/* LawnApp::KillArtifactCultivationListView() */

void __thiscall LawnApp::KillArtifactCultivationListView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2bb8) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bb8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bb8));
    *(undefined8 *)(this + 0x2bb8) = 0;
  }
  return;
}


/* LawnApp::ShowPlantGeneEnhancementView() */

void __thiscall LawnApp::ShowPlantGeneEnhancementView(LawnApp *this)

{
  int iVar1;
  char *pcVar2;
  ProfileMgr *this_00;
  PlantGeneEnhancementView *this_01;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x2bd0);
  if (lVar3 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    this_01 = ::operator_new(0x178);
    PlantGeneEnhancementView::PlantGeneEnhancementView(this_01);
    *(PlantGeneEnhancementView **)(this + 0x2bd0) = this_01;
    PlantGeneEnhancementView::InitView(this_01);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bd0));
    lVar3 = *(long *)(this + 0x2bd0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bd0));
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_0325d6ac(*(undefined4 *)(lVar3 + 0x40));
  if (iVar1 != 0x45) {
    PlantGeneEnhancementView::ShowIfGeneNewAdditionInfo
              (*(PlantGeneEnhancementView **)(this + 0x2bd0));
    return;
  }
  PlantGeneEnhancementView::StartToturial(*(PlantGeneEnhancementView **)(this + 0x2bd0));
  return;
}


/* LawnApp::KillPlantGeneEnhancementView() */

void __thiscall LawnApp::KillPlantGeneEnhancementView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2bd0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bd0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bd0));
    *(undefined8 *)(this + 0x2bd0) = 0;
  }
  return;
}


/* LawnApp::ShowNostalgiaPVZGameView() */

void __thiscall LawnApp::ShowNostalgiaPVZGameView(LawnApp *this)

{
  char *pcVar1;
  NostalgiaPVZGameView *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2bc0);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_Music_Anniversary");
    this_00 = ::operator_new(0xe0);
    NostalgiaPVZGameView::NostalgiaPVZGameView(this_00);
    *(NostalgiaPVZGameView **)(this + 0x2bc0) = this_00;
    NostalgiaPVZGameView::InitView(this_00);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bc0));
    lVar2 = *(long *)(this + 0x2bc0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bc0));
  NostalgiaPVZGameView::TriggerTutorial();
  return;
}


/* LawnApp::KillNostalgiaPVZGameView() */

void __thiscall LawnApp::KillNostalgiaPVZGameView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2bc0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Stop_Music_Anniversary");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bc0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bc0));
    *(undefined8 *)(this + 0x2bc0) = 0;
  }
  return;
}


/* LawnApp::KillGameMaskUI() */

void __thiscall LawnApp::KillGameMaskUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2b08) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0xb8))(*(long **)(this + 0x360));
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    GameMaskUI::DoClose(*(GameMaskUI **)(this + 0x2b08));
    *(undefined8 *)(this + 0x2b08) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowGameMaskUI(Sexy::SexyVector2, int, Sexy::Widget*, std::string) */

void LawnApp::ShowGameMaskUI
               (GameMaskUI *param_1,undefined4 param_2,LawnApp *param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  void *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  KillGameMaskUI(param_3);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  FUN_05475d88(asStack_10,param_6);
  pvVar2 = ::operator_new(0x148);
  GameMaskUI::GameMaskUI(param_1._0_4_,param_2,pvVar2,param_4,param_5,asStack_10);
  *(void **)(param_3 + 0x2b08) = pvVar2;
  std::string::~string(asStack_10);
  (**(code **)(**(long **)(param_3 + 0x360) + 0x60))
            (*(long **)(param_3 + 0x360),*(undefined8 *)(param_3 + 0x2b08));
  (**(code **)(**(long **)(param_3 + 0x360) + 200))
            (*(long **)(param_3 + 0x360),*(undefined8 *)(param_3 + 0x2b08),param_5);
  PushOverlaysToTop(param_3);
  (**(code **)(**(long **)(param_3 + 0x360) + 0x98))
            (*(long **)(param_3 + 0x360),*(undefined8 *)(param_3 + 0x2b08));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillPlantTrialView() */

void __thiscall LawnApp::KillPlantTrialView(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b00));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b00));
  *(undefined8 *)(this + 0x2b00) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::KillPlantLevelUpListView() */

void LawnApp::KillPlantLevelUpListView(void)

{
  char cVar1;
  long *in_x0;
  char *pcVar2;
  long lVar3;
  wchar16 *pwVar4;
  string *psVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Close");
  (**(code **)(*(long *)in_x0[0x6c] + 0x68))((long *)in_x0[0x6c],in_x0[0x55f]);
  (**(code **)(*in_x0 + 0x150))();
  in_x0[0x55f] = 0;
  lVar3 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar3 != 0) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar6 = aLStack_18;
    std::string::string(asStack_10,"AutoTestPlantLevelUp");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_10,pLVar6,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      psVar5 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      std::string::string(asStack_10,"AutoTestPlantLevelUp");
      CheatManager::SetToggleValue(psVar5,SUB81(asStack_10,0));
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowPlantAvatarListView() */

void __thiscall LawnApp::ShowPlantAvatarListView(LawnApp *this)

{
  char *pcVar1;
  PlantAvatarListView *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2b10);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x1c0);
    PlantAvatarListView::PlantAvatarListView(this_00);
    *(PlantAvatarListView **)(this + 0x2b10) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar2 = *(long *)(this + 0x2b10);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b10));
  PlantAvatarListView::TriggerTutorial(*(PlantAvatarListView **)(this + 0x2b10));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  return;
}


/* LawnApp::KillPlantAvatarListView() */

void __thiscall LawnApp::KillPlantAvatarListView(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b10));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2b10));
  *(undefined8 *)(this + 0x2b10) = 0;
  return;
}


/* LawnApp::ShowPlantFamilyUI(int) */

void __thiscall LawnApp::ShowPlantFamilyUI(LawnApp *this,int param_1)

{
  char *pcVar1;
  PlantFamilyUI *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  this_00 = *(PlantFamilyUI **)(this + 0x2af0);
  if (this_00 == (PlantFamilyUI *)0x0) {
    this_00 = ::operator_new(0xe0);
    PlantFamilyUI::PlantFamilyUI(this_00,param_1);
    *(PlantFamilyUI **)(this + 0x2af0) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2af0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2af0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2af0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantLevelUpInfoDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool, bool, int) */

void __thiscall
LawnApp::ShowPlantLevelUpInfoDialog
          (LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3,undefined1 param_4,
          undefined4 param_5)

{
  char *pcVar1;
  PlantLevelUpInfoDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2b28);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x188);
    PlantLevelUpInfoDialog::PlantLevelUpInfoDialog(pPVar2,aRStack_10,param_3,param_4,param_5);
    *(PlantLevelUpInfoDialog **)(this + 0x2b28) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2b28);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b28));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b28));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantAvatarInfoDialog(Sexy::RtWeakPtr<MagentoProductProps>, bool) */

void __thiscall
LawnApp::ShowPlantAvatarInfoDialog(LawnApp *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char *pcVar1;
  PlantAvatarInfoDialog *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2b18);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x138);
    PlantAvatarInfoDialog::PlantAvatarInfoDialog(pPVar2,aRStack_10,param_3);
    *(PlantAvatarInfoDialog **)(this + 0x2b18) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2b18);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b18));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b18));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b18));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantAvatarPackageView(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall LawnApp::ShowPlantAvatarPackageView(LawnApp *this,RtWeakPtrBase *param_2)

{
  char *pcVar1;
  PlantAvatarPackageView *pPVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar3 = *(long *)(this + 0x2b20);
  if (lVar3 == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x140);
    PlantAvatarPackageView::PlantAvatarPackageView(pPVar2,aRStack_10);
    *(PlantAvatarPackageView **)(this + 0x2b20) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    lVar3 = *(long *)(this + 0x2b20);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b20));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b20));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b20));
  PlantAvatarPackageView::ShowGachaIntro2Mask(*(PlantAvatarPackageView **)(this + 0x2b20));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantLevelUpCheckDialog(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall LawnApp::ShowPlantLevelUpCheckDialog(LawnApp *this,RtWeakPtrBase *param_2)

{
  char *pcVar1;
  PlantLevelUpCheckDialog *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  if (*(long *)(this + 0x2b28) == 0) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
    pPVar2 = ::operator_new(0x1e0);
    PlantLevelUpCheckDialog::PlantLevelUpCheckDialog(pPVar2,aRStack_10);
    *(PlantLevelUpCheckDialog **)(this + 0x2b30) = pPVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b30));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b30));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2b30));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowChristmasLotteryReward(std::string, bool, int) */

void __thiscall
LawnApp::ShowChristmasLotteryReward
          (LawnApp *this,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  char *pcVar1;
  ChristmasLotteryReward *pCVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  lVar3 = *(long *)(this + 0x2e78);
  if (lVar3 == 0) {
    FUN_05475d88(asStack_10,param_2);
    pCVar2 = ::operator_new(0x128);
    ChristmasLotteryReward::ChristmasLotteryReward(pCVar2,asStack_10,param_3,param_4);
    *(ChristmasLotteryReward **)(this + 0x2e78) = pCVar2;
    std::string::~string(asStack_10);
    lVar3 = *(long *)(this + 0x2e78);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),lVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e78));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e78));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e78));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowPlantSkillTipsUI(std::wstring&, int, int, int, std::function<void (Sexy::Widget*)>,
   bool) */

void __thiscall
LawnApp::ShowPlantSkillTipsUI
          (LawnApp *this,undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
          ,function *param_6,char param_7)

{
  bool bVar1;
  char *pcVar2;
  PlantSkillTipsUI *pPVar3;
  
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  if ((param_7 == '\0') && (*(Board **)(this + 0x9f0) != (Board *)0x0)) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  pPVar3 = *(PlantSkillTipsUI **)(this + 0x2b38);
  if (pPVar3 == (PlantSkillTipsUI *)0x0) {
    pPVar3 = ::operator_new(0x110);
    PlantSkillTipsUI::PlantSkillTipsUI(pPVar3,param_1,param_2,param_3,param_4);
    *(PlantSkillTipsUI **)(this + 0x2b38) = pPVar3;
  }
  bVar1 = std::function::operator_cast_to_bool(param_6);
  if (bVar1) {
    std::function<void(Sexy::Widget*)>::operator()
              ((function<void(Sexy::Widget*)> *)param_6,(Widget *)pPVar3);
    pPVar3 = *(PlantSkillTipsUI **)(this + 0x2b38);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pPVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2b38));
  return;
}


/* LawnApp::ShowLotteryUI(bool) */

void __thiscall LawnApp::ShowLotteryUI(LawnApp *this,bool param_1)

{
  char *pcVar1;
  LotteryUI *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  this_00 = *(LotteryUI **)(this + 0x2a48);
  if (this_00 == (LotteryUI *)0x0) {
    this_00 = ::operator_new(0x168);
    LotteryUI::LotteryUI(this_00,param_1);
    *(LotteryUI **)(this + 0x2a48) = this_00;
  }
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a48));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a48));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a48));
  return;
}


/* LawnApp::KillLotteryUI() */

void __thiscall LawnApp::KillLotteryUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2a48) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a48));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a48));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a48));
    *(undefined8 *)(this + 0x2a48) = 0;
  }
  return;
}


/* LawnApp::ShowGachaUI(std::string const&, bool) */

void __thiscall LawnApp::ShowGachaUI(LawnApp *this,string *param_1,bool param_2)

{
  char *pcVar1;
  GachaUI *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  this_00 = *(GachaUI **)(this + 0x2a50);
  if (this_00 == (GachaUI *)0x0) {
    this_00 = ::operator_new(0x1b8);
    GachaUI::GachaUI(this_00,param_1,param_2);
    *(GachaUI **)(this + 0x2a50) = this_00;
  }
  GachaUI::Init(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a50));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  return;
}


/* LawnApp::ShowGachaUI(std::string const&, bool, GachaType) */

void __thiscall
LawnApp::ShowGachaUI(LawnApp *this,undefined8 param_1,undefined1 param_2,undefined8 param_4)

{
  char *pcVar1;
  GachaUI *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  this_00 = *(GachaUI **)(this + 0x2a50);
  if (this_00 == (GachaUI *)0x0) {
    this_00 = ::operator_new(0x1b8);
    GachaUI::GachaUI(this_00,param_1,param_2,param_4);
    *(GachaUI **)(this + 0x2a50) = this_00;
  }
  GachaUI::Init(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a50));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
  return;
}


/* LawnApp::KillGachaUI() */

void __thiscall LawnApp::KillGachaUI(LawnApp *this)

{
  char cVar1;
  char *pcVar2;
  
  if (*(long *)(this + 0x2a50) != 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Close");
    cVar1 = (**(code **)(**(long **)(this + 0x360) + 0x70))
                      (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
    if (cVar1 == '\0') {
      if (*(long **)(this + 0x2a50) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x2a50) + 0x18))();
      }
    }
    else {
      (**(code **)(**(long **)(this + 0x360) + 0x68))
                (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a50));
      Sexy::WidgetManager::RemoveBaseModal
                (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a50));
      (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a50));
    }
    *(undefined8 *)(this + 0x2a50) = 0;
  }
  return;
}


/* LawnApp::KillLoginReward() */

void __thiscall LawnApp::KillLoginReward(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2a60) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a60));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a60));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a60));
    *(undefined8 *)(this + 0x2a60) = 0;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* LawnApp::ShowLoginReward() */

void __thiscall LawnApp::ShowLoginReward(LawnApp *this)

{
  char *pcVar1;
  LoginReward *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2a60) != 0) {
    KillLoginReward(this);
  }
  this_00 = ::operator_new(0x100);
  LoginReward::LoginReward(this_00);
  *(LoginReward **)(this + 0x2a60) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a60));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a60));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a60));
  return;
}


/* LawnApp::KillDailySignReward() */

void __thiscall LawnApp::KillDailySignReward(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2a68) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a68));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a68));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a68));
    *(undefined8 *)(this + 0x2a68) = 0;
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* LawnApp::ShowDailySignReward(bool) */

undefined8 __thiscall LawnApp::ShowDailySignReward(LawnApp *this,bool param_1)

{
  char *pcVar1;
  DailySignReward *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2a68) != 0) {
    KillDailySignReward(this);
  }
  this_00 = ::operator_new(0x168);
  DailySignReward::DailySignReward(this_00,param_1);
  *(DailySignReward **)(this + 0x2a68) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a68));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a68));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a68));
  return 1;
}


/* LawnApp::KillPlantAccessoryUI() */

void __thiscall LawnApp::KillPlantAccessoryUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2ab0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab0));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ab0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ab0));
    *(undefined8 *)(this + 0x2ab0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowPlantAccessoryUI(int, Sexy::RtWeakPtr<PlantType const>) */

void __thiscall LawnApp::ShowPlantAccessoryUI(LawnApp *this,int param_1,RtWeakPtrBase *param_3)

{
  char *pcVar1;
  PlantAccessoryUI *pPVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2ab0) != 0) {
    KillPlantAccessoryUI(this);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  pPVar2 = ::operator_new(0x208);
  PlantAccessoryUI::PlantAccessoryUI(pPVar2,aRStack_10);
  *(PlantAccessoryUI **)(this + 0x2ab0) = pPVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab0));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ab0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ab0));
  if (-1 < param_1) {
    PlantAccessoryUI::ToPanel(*(PlantAccessoryUI **)(this + 0x2ab0),param_1);
  }
  PlantAccessoryUI::TriggerTutorial(*(PlantAccessoryUI **)(this + 0x2ab0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillLanternRiddlesUI() */

void __thiscall LawnApp::KillLanternRiddlesUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2a78) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a78));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a78));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a78));
    *(undefined8 *)(this + 0x2a78) = 0;
  }
  return;
}


/* LawnApp::ShowLanternRiddlesUI(bool) */

void __thiscall LawnApp::ShowLanternRiddlesUI(LawnApp *this,bool param_1)

{
  char *pcVar1;
  LanternRiddlesUI *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2a78) != 0) {
    KillLanternRiddlesUI(this);
  }
  this_00 = ::operator_new(0x228);
  LanternRiddlesUI::LanternRiddlesUI(this_00,param_1);
  *(LanternRiddlesUI **)(this + 0x2a78) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a78));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a78));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a78));
  return;
}


/* LawnApp::KillRedPackUI() */

void __thiscall LawnApp::KillRedPackUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2a80) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a80));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a80));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a80));
    *(undefined8 *)(this + 0x2a80) = 0;
  }
  return;
}


/* LawnApp::ShowRedPackUI(FestivalEventType) */

void __thiscall LawnApp::ShowRedPackUI(LawnApp *this,undefined4 param_2)

{
  char *pcVar1;
  RedPackUI *pRVar2;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2a80) != 0) {
    KillRedPackUI(this);
  }
  pRVar2 = ::operator_new(0x1f0);
  RedPackUI::RedPackUI(pRVar2,param_2);
  *(RedPackUI **)(this + 0x2a80) = pRVar2;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pRVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a80));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a80));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a80));
  return;
}


/* LawnApp::KillConsumptionRewardDialog() */

void __thiscall LawnApp::KillConsumptionRewardDialog(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e48) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e48));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e48));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e48));
    *(undefined8 *)(this + 0x2e48) = 0;
  }
  return;
}


/* LawnApp::ShowConsumptionRewardDialog() */

void __thiscall LawnApp::ShowConsumptionRewardDialog(LawnApp *this)

{
  char *pcVar1;
  ConsumptionRewardDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e48) != 0) {
    KillConsumptionRewardDialog(this);
  }
  this_00 = ::operator_new(0x178);
  ConsumptionRewardDialog::ConsumptionRewardDialog(this_00);
  *(ConsumptionRewardDialog **)(this + 0x2e48) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e48));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e48));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e48));
  return;
}


/* LawnApp::KillBirthdayRewardDialog() */

void __thiscall LawnApp::KillBirthdayRewardDialog(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e70) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e70));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e70));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e70));
    *(undefined8 *)(this + 0x2e70) = 0;
  }
  return;
}


/* LawnApp::ShowBirthdayRewardDialog() */

void __thiscall LawnApp::ShowBirthdayRewardDialog(LawnApp *this)

{
  char *pcVar1;
  BirthdayRewardDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e70) != 0) {
    KillBirthdayRewardDialog(this);
  }
  this_00 = ::operator_new(0xf0);
  BirthdayRewardDialog::BirthdayRewardDialog(this_00);
  *(BirthdayRewardDialog **)(this + 0x2e70) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e70));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e70));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e70));
  return;
}


/* LawnApp::KillDailyAchievement() */

void __thiscall LawnApp::KillDailyAchievement(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e50) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e50));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e50));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e50));
    *(undefined8 *)(this + 0x2e50) = 0;
  }
  return;
}


/* LawnApp::ShowDailyAchievement() */

void __thiscall LawnApp::ShowDailyAchievement(LawnApp *this)

{
  char *pcVar1;
  DailyAchievement *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e50) != 0) {
    KillDailyAchievement(this);
  }
  this_00 = ::operator_new(0x140);
  DailyAchievement::DailyAchievement(this_00);
  *(DailyAchievement **)(this + 0x2e50) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e50));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e50));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e50));
  return;
}


/* LawnApp::KillLevelOfTheDayProgressiveAwardDialog() */

void __thiscall LawnApp::KillLevelOfTheDayProgressiveAwardDialog(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e60) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e60));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e60));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e60));
    *(undefined8 *)(this + 0x2e60) = 0;
  }
  return;
}


/* LawnApp::ShowLevelOfTheDayProgressiveAwardDialog() */

void __thiscall LawnApp::ShowLevelOfTheDayProgressiveAwardDialog(LawnApp *this)

{
  char *pcVar1;
  LevelOfTheDay_ProgressiveAwardDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e60) != 0) {
    KillLevelOfTheDayProgressiveAwardDialog(this);
  }
  this_00 = ::operator_new(0x130);
  LevelOfTheDay_ProgressiveAwardDialog::LevelOfTheDay_ProgressiveAwardDialog(this_00);
  *(LevelOfTheDay_ProgressiveAwardDialog **)(this + 0x2e60) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e60));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e60));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e60));
  return;
}


/* LawnApp::KillLevelOfTheDayRewardDialog() */

void __thiscall LawnApp::KillLevelOfTheDayRewardDialog(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e58) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e58));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e58));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e58));
    *(undefined8 *)(this + 0x2e58) = 0;
  }
  return;
}


/* LawnApp::ShowLevelOfTheDayRewardDialog() */

void __thiscall LawnApp::ShowLevelOfTheDayRewardDialog(LawnApp *this)

{
  char *pcVar1;
  LevelOfTheDayRewardDialog *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e58) != 0) {
    KillLevelOfTheDayRewardDialog(this);
  }
  this_00 = ::operator_new(0x1d8);
  LevelOfTheDayRewardDialog::LevelOfTheDayRewardDialog(this_00);
  *(LevelOfTheDayRewardDialog **)(this + 0x2e58) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e58));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e58));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e58));
  return;
}


/* LawnApp::KillPVPZombieLevelUpDialog() */

void __thiscall LawnApp::KillPVPZombieLevelUpDialog(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2e68) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e68));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e68));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2e68));
    *(undefined8 *)(this + 0x2e68) = 0;
  }
  return;
}


/* LawnApp::ShowPVPZombieLevelUpDialog() */

void __thiscall LawnApp::ShowPVPZombieLevelUpDialog(LawnApp *this)

{
  char *pcVar1;
  PVPZombieLevelUpDlg *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2e68) != 0) {
    KillPVPZombieLevelUpDialog(this);
  }
  this_00 = ::operator_new(0xe0);
  PVPZombieLevelUpDlg::PVPZombieLevelUpDlg(this_00);
  *(PVPZombieLevelUpDlg **)(this + 0x2e68) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e68));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e68));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowYetiEscapeDialog() */

void __thiscall LawnApp::ShowYetiEscapeDialog(LawnApp *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  plVar5 = *(long **)(this + 0x9f0);
  local_8 = ___stack_chk_guard;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 800))(plVar5,1);
  }
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x1ea);
  iVar2 = FUN_0325f324(0x118);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[YETI_ESCAPE_DIALOG_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  FUN_05478178(awStack_50,L"[YETI_ESCAPE_DIALOG_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[RESTART_BUTTON]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,YetiEscapeRestartLevel);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::CheckNetWork() */

void __thiscall LawnApp::CheckNetWork(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  PVZ2UIDialog *this_01;
  char *pcVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCancelStore);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_PopUp_General");
    if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
      Board::ClearCursors(*(Board **)(this + 0x9f0));
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::CheckNetWork(std::wstring const&, std::wstring const&) */

void __thiscall LawnApp::CheckNetWork(LawnApp *this,wstring *param_1,wstring *param_2)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  char *pcVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  Color aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsNetworkModuleOK();
  if (cVar1 == '\0') {
    KillPVZ2Dialog(gLawnApp);
    this_00 = gLawnApp;
    iVar2 = FUN_0325f324(400);
    iVar3 = FUN_0325f324(0xfa);
    this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    PVZ2UIDialog::SetHeaderLabel(this_01,param_1);
    PVZ2UIDialog::SetFooterLabel(this_01,param_2);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color(aCStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_01,pPVar4,aCStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(auStack_58,L"[SETTINGS_TITLE]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnOpenSystemSetting);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[DIALOG_YES_SKIP_TUTORIAL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCancelStore);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,aCStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_PopUp_General");
    if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
      Board::ClearCursors(*(Board **)(this + 0x9f0));
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onProfileSummarySelectResult(int) */

void __thiscall LawnApp::onProfileSummarySelectResult(LawnApp *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canDealProfile(gLawnApp);
  if (cVar1 != '\0') {
    setProfileOpened(this,false);
    if (param_1 == 0) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(this_01,true,true);
      setSyncProfileSuccess(this,true);
      this[0x9eb] = (LawnApp)0x1;
      closeDiffProfileSummary(this);
    }
    else {
      if (param_1 == 1) {
        Sexy::LazySingleton<ProfileMgr>::GetInstance();
        cVar1 = ProfileMgr::SyncProfileFromServer();
        this_00 = gLawnApp;
        if (cVar1 == '\0') {
          FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
          FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
          CheckNetWork(this_00,awStack_18,awStack_10);
          FUN_05476c50(awStack_10);
          nop();
          FUN_05476c50(awStack_18);
          nop();
        }
        else {
          setSyncProfileSuccess(this,true);
        }
      }
      this[0x9eb] = (LawnApp)0x1;
      closeDiffProfileSummary(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ChooseProfile(bool) */

void __thiscall LawnApp::ChooseProfile(LawnApp *this,bool param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = canDealProfile(gLawnApp);
  if (cVar1 != '\0') {
    setProfileOpened(this,false);
    if (param_1) {
      this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::Save(this_01,true,true);
      setSyncProfileSuccess(this,true);
    }
    else {
      Sexy::LazySingleton<ProfileMgr>::GetInstance();
      cVar1 = ProfileMgr::SyncProfileFromServer();
      this_00 = gLawnApp;
      if (cVar1 == '\0') {
        FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
        FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
        CheckNetWork(this_00,awStack_18,awStack_10);
        FUN_05476c50(awStack_10);
        nop();
        FUN_05476c50(awStack_18);
        nop();
      }
      else {
        setSyncProfileSuccess(this,true);
      }
    }
    this[0x9eb] = (LawnApp)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onSyncProfileSummaryFinish(bool) */

void __thiscall LawnApp::onSyncProfileSummaryFinish(LawnApp *this,bool param_1)

{
  char cVar1;
  PlayerInfo *this_00;
  WorldMap *this_01;
  ProfileMgr *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    setProfileConnected(this,true);
    cVar1 = canDealProfile(gLawnApp);
    if ((cVar1 != '\0') &&
       (this_00 = (PlayerInfo *)ProfileUtils::Profile(), this_00 != (PlayerInfo *)0x0)) {
      PlayerInfo::GetDeltaOnlineDataSign();
      cVar1 = FUN_0547419c(asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 == '\0') {
        PlayerInfo::UpdateDeltaDataForServer(this_00);
        cVar1 = PlayerInfo::IsOlderThanServerData(this_00);
        if (cVar1 == '\0') {
          pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          ProfileMgr::Save(pPVar2,false,false);
        }
        else {
          cVar1 = isProfileOpened(this);
          if (cVar1 == '\0') {
            this_01 = (WorldMap *)GetWorldMap(gLawnApp);
            cVar1 = WorldMap::IsUserInputEnabled(this_01);
            if (cVar1 != '\0') {
              cVar1 = CheckProfileOpen();
              if (cVar1 == '\0') {
                showDiffProfileSummary(this);
              }
              else {
                ChooseProfile(gLawnApp,false);
              }
              setProfileOpened(this,true);
            }
          }
        }
      }
      else {
        pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        ProfileMgr::Save(pPVar2,true,true);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onSyncProfileToServer(bool) */

void __thiscall LawnApp::onSyncProfileToServer(LawnApp *this,bool param_1)

{
  LawnApp *this_00;
  long lVar1;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetMainMenu(this);
  this_00 = gLawnApp;
  if ((lVar1 == 0) && (this[0x9eb] != (LawnApp)0x0)) {
    if (param_1) {
      this[0x9eb] = (LawnApp)0x0;
      goToMainMenu();
    }
    else {
      FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
      FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
      CheckNetWork(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      FUN_05476c50(awStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onSyncProfileFromServer(bool) */

void __thiscall LawnApp::onSyncProfileFromServer(LawnApp *this,bool param_1)

{
  LawnApp *this_00;
  long lVar1;
  PlayerInfo *this_01;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = GetMainMenu(this);
  this_00 = gLawnApp;
  if ((lVar1 == 0) && (this[0x9eb] != (LawnApp)0x0)) {
    if (param_1) {
      this[0x9eb] = (LawnApp)0x0;
      this_01 = (PlayerInfo *)ProfileUtils::Profile();
      if (this_01 != (PlayerInfo *)0x0) {
        PlayerInfo::SyncOfflineDataFromOnlineData(this_01);
      }
      goToMainMenu();
    }
    else {
      FUN_05478178(awStack_18,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_28);
      FUN_05478178(awStack_10,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_20);
      CheckNetWork(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      FUN_05476c50(awStack_18);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::CheckNetWorkWifiIssue() */

void __thiscall LawnApp::CheckNetWorkWifiIssue(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  char *pcVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsNetworkModuleOK();
  this_00 = gLawnApp;
  if (cVar1 == '\0') {
    iVar2 = FUN_0325f324(400);
    iVar3 = FUN_0325f324(0xfa);
    this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT_FOR_SYNC_PLAYERINFO]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_01,pPVar4,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(auStack_58,L"[SETTINGS_TITLE]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnOpenSystemSetting);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    FUN_05478178(auStack_58,L"[DIALOG_YES_SKIP_TUTORIAL]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnCancelStartGameOffLine);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_PopUp_General");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowRechargeGiftUI(std::string const&) */

void __thiscall LawnApp::ShowRechargeGiftUI(LawnApp *this,string *param_1)

{
  char *pcVar1;
  RechargeGiftUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2c08);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x178);
    RechargeGiftUI::RechargeGiftUI(this_00,param_1);
    *(RechargeGiftUI **)(this + 0x2c08) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar2 = *(long *)(this + 0x2c08);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c08));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c08));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c08));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"RechargeGift");
  return;
}


/* LawnApp::KillRechargeGiftUI() */

void __thiscall LawnApp::KillRechargeGiftUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c08) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c08));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c08));
    *(undefined8 *)(this + 0x2c08) = 0;
  }
  return;
}


/* LawnApp::ShowRechargeRewardUI() */

void __thiscall LawnApp::ShowRechargeRewardUI(LawnApp *this)

{
  RechargeRewardUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c10) != 0) {
    return;
  }
  this_00 = ::operator_new(0x130);
  RechargeRewardUI::RechargeRewardUI(this_00);
  *(RechargeRewardUI **)(this + 0x2c10) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c10));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c10));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c10));
  return;
}


/* LawnApp::KillRechargeRewardUI() */

void __thiscall LawnApp::KillRechargeRewardUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c10) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c10));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c10));
    *(undefined8 *)(this + 0x2c10) = 0;
  }
  return;
}


/* LawnApp::ShowRechargeBundleUI() */

void __thiscall LawnApp::ShowRechargeBundleUI(LawnApp *this)

{
  RechargeBundleUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x9d0) != 0) {
    return;
  }
  this_00 = ::operator_new(0x1a0);
  RechargeBundleUI::RechargeBundleUI(this_00);
  *(RechargeBundleUI **)(this + 0x9d0) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9d0));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9d0));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x9d0));
  return;
}


/* LawnApp::KillRechargeBundleUI() */

void __thiscall LawnApp::KillRechargeBundleUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x9d0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9d0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x9d0));
    *(undefined8 *)(this + 0x9d0) = 0;
  }
  return;
}


/* LawnApp::ShowTwoYearBirthday() */

void __thiscall LawnApp::ShowTwoYearBirthday(LawnApp *this)

{
  TwoYearBirthday *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c18) != 0) {
    return;
  }
  this_00 = ::operator_new(0x118);
  TwoYearBirthday::TwoYearBirthday(this_00);
  *(TwoYearBirthday **)(this + 0x2c18) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c18));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c18));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c18));
  return;
}


/* LawnApp::KillTwoYearBirthday() */

void __thiscall LawnApp::KillTwoYearBirthday(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c18) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c18));
    *(undefined8 *)(this + 0x2c18) = 0;
  }
  return;
}


/* LawnApp::ShowExpPlantRewardView(std::string const&) */

void __thiscall LawnApp::ShowExpPlantRewardView(LawnApp *this,string *param_1)

{
  ExpPlantRewardView *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c28) != 0) {
    return;
  }
  this_00 = ::operator_new(0x138);
  ExpPlantRewardView::ExpPlantRewardView(this_00,param_1);
  *(ExpPlantRewardView **)(this + 0x2c28) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c28));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c28));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c28));
  return;
}


/* LawnApp::KillExpPlantRewardView() */

void __thiscall LawnApp::KillExpPlantRewardView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c28) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c28));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c28));
    *(undefined8 *)(this + 0x2c28) = 0;
  }
  return;
}


/* LawnApp::ShowShareRewardView() */

long __thiscall LawnApp::ShowShareRewardView(LawnApp *this)

{
  ShareRewardView *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c20) != 0) {
    return *(long *)(this + 0x2c20);
  }
  this_00 = ::operator_new(0x108);
  ShareRewardView::ShareRewardView(this_00);
  *(ShareRewardView **)(this + 0x2c20) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c20));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c20));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c20));
  return *(long *)(this + 0x2c20);
}


/* LawnApp::KillShareRewardView() */

void __thiscall LawnApp::KillShareRewardView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c20) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c20));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c20));
    *(undefined8 *)(this + 0x2c20) = 0;
  }
  return;
}


/* LawnApp::ShowShareWechatUI() */

void __thiscall LawnApp::ShowShareWechatUI(LawnApp *this)

{
  ShareWechatUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c40) != 0) {
    return;
  }
  this_00 = ::operator_new(0x100);
  ShareWechatUI::ShareWechatUI(this_00);
  *(ShareWechatUI **)(this + 0x2c40) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c40));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c40));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c40));
  return;
}


/* LawnApp::KillShareWechatUI() */

void __thiscall LawnApp::KillShareWechatUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c40) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c40));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c40));
    *(undefined8 *)(this + 0x2c40) = 0;
  }
  return;
}


/* LawnApp::ShowGemOfferHintUI() */

void __thiscall LawnApp::ShowGemOfferHintUI(LawnApp *this)

{
  GemOfferHintUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c48) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe8);
  GemOfferHintUI::GemOfferHintUI(this_00);
  *(GemOfferHintUI **)(this + 0x2c48) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c48));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c48));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c48));
  return;
}


/* LawnApp::KillGemOfferHintUI() */

void __thiscall LawnApp::KillGemOfferHintUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c48) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c48));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c48));
    *(undefined8 *)(this + 0x2c48) = 0;
  }
  return;
}


/* LawnApp::ShowPlantBundleUI() */

void __thiscall LawnApp::ShowPlantBundleUI(LawnApp *this)

{
  PlantBundleUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c50) != 0) {
    return;
  }
  this_00 = ::operator_new(0x138);
  PlantBundleUI::PlantBundleUI(this_00);
  *(PlantBundleUI **)(this + 0x2c50) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c50));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c50));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c50));
  return;
}


/* LawnApp::KillPlantBundleUI() */

void __thiscall LawnApp::KillPlantBundleUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c50) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c50));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c50));
    *(undefined8 *)(this + 0x2c50) = 0;
  }
  return;
}


/* LawnApp::ShowPlantSpecialOfferUI() */

void __thiscall LawnApp::ShowPlantSpecialOfferUI(LawnApp *this)

{
  PlantSpecialOfferUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c60) != 0) {
    return;
  }
  this_00 = ::operator_new(0x330);
  PlantSpecialOfferUI::PlantSpecialOfferUI(this_00);
  *(PlantSpecialOfferUI **)(this + 0x2c60) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c60));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c60));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c60));
  PlantSpecialOfferUI::RefreshActivity(*(PlantSpecialOfferUI **)(this + 0x2c60));
  return;
}


/* LawnApp::KillPlantSpecialOfferUI() */

void __thiscall LawnApp::KillPlantSpecialOfferUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c60) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c60));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c60));
    *(undefined8 *)(this + 0x2c60) = 0;
  }
  return;
}


/* LawnApp::ShowDangerRoomSpecialOfferUI() */

void __thiscall LawnApp::ShowDangerRoomSpecialOfferUI(LawnApp *this)

{
  DangerRoomSpecialOfferUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c68) != 0) {
    return;
  }
  this_00 = ::operator_new(600);
  DangerRoomSpecialOfferUI::DangerRoomSpecialOfferUI(this_00);
  *(DangerRoomSpecialOfferUI **)(this + 0x2c68) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c68));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c68));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c68));
  DangerRoomSpecialOfferUI::RefreshActivity(*(DangerRoomSpecialOfferUI **)(this + 0x2c68));
  return;
}


/* LawnApp::KillDangerRoomSpecialOfferUI() */

void __thiscall LawnApp::KillDangerRoomSpecialOfferUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c68) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c68));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c68));
    *(undefined8 *)(this + 0x2c68) = 0;
  }
  return;
}


/* LawnApp::ShowRecallOfferUI() */

void __thiscall LawnApp::ShowRecallOfferUI(LawnApp *this)

{
  RecallOfferUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c70) != 0) {
    return;
  }
  this_00 = ::operator_new(0x178);
  RecallOfferUI::RecallOfferUI(this_00);
  *(RecallOfferUI **)(this + 0x2c70) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c70));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c70));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c70));
  RecallOfferUI::RefreshActivity(*(RecallOfferUI **)(this + 0x2c70));
  return;
}


/* LawnApp::KillRecallOfferUI() */

void __thiscall LawnApp::KillRecallOfferUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c70) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c70));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c70));
    *(undefined8 *)(this + 0x2c70) = 0;
  }
  return;
}


/* LawnApp::ShowCollectableAdUI() */

void __thiscall LawnApp::ShowCollectableAdUI(LawnApp *this)

{
  CollectableAdUI *pCVar1;
  char *pcVar2;
  FilesystemSaveGameContext *this_00;
  NDLoginRewardBonus *pNVar3;
  
  if (*(long *)(this + 0x2c78) != 0) {
    return;
  }
  pCVar1 = ::operator_new(0x148);
  CollectableAdUI::CollectableAdUI(pCVar1);
  *(CollectableAdUI **)(this + 0x2c78) = pCVar1;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c78));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c78));
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c78));
  pCVar1 = *(CollectableAdUI **)(this + 0x2c78);
  this_00 = (FilesystemSaveGameContext *)Sexy::LazySingleton<CollectableAdBoxMgr>::GetInstance();
  pNVar3 = (NDLoginRewardBonus *)Sexy::FilesystemSaveGameContext::GetBuffer(this_00);
  CollectableAdUI::RefreshActivity(pCVar1,pNVar3);
  return;
}


/* LawnApp::KillCollectableAdUI() */

void __thiscall LawnApp::KillCollectableAdUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c78) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c78));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c78));
    *(undefined8 *)(this + 0x2c78) = 0;
  }
  return;
}


/* LawnApp::ShowSevenDaysRewardView(std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> > const&) */

void __thiscall LawnApp::ShowSevenDaysRewardView(LawnApp *this,vector *param_1)

{
  NDDailyLoginRewardView *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c30) != 0) {
    return;
  }
  this_00 = ::operator_new(0x108);
  NDDailyLoginRewardView::NDDailyLoginRewardView(this_00,param_1);
  *(NDDailyLoginRewardView **)(this + 0x2c30) = this_00;
  NDDailyLoginRewardView::InitView(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c30));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c30));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c30));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c30));
  return;
}


/* LawnApp::KillSevenDaysRewardView() */

void __thiscall LawnApp::KillSevenDaysRewardView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c30) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c30));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c30));
    *(undefined8 *)(this + 0x2c30) = 0;
  }
  return;
}


/* LawnApp::ShowDailySignActivityRewardView(std::vector<NDLoginRewardBonus,
   std::allocator<NDLoginRewardBonus> > const&) */

void __thiscall LawnApp::ShowDailySignActivityRewardView(LawnApp *this,vector *param_1)

{
  DailySignRewardView *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c38) != 0) {
    return;
  }
  this_00 = ::operator_new(0x108);
  DailySignRewardView::DailySignRewardView(this_00,param_1);
  *(DailySignRewardView **)(this + 0x2c38) = this_00;
  DailySignRewardView::InitView(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c38));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c38));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c38));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c38));
  return;
}


/* LawnApp::KillDailySignActivityRewardView() */

void __thiscall LawnApp::KillDailySignActivityRewardView(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c38) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c38));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c38));
    *(undefined8 *)(this + 0x2c38) = 0;
  }
  return;
}


/* LawnApp::ShowOppoNewerEventUI() */

void __thiscall LawnApp::ShowOppoNewerEventUI(LawnApp *this)

{
  OppoNewerEventUI *this_00;
  char *pcVar1;
  
  if (*(long *)(this + 0x2c88) != 0) {
    return;
  }
  UISingletonDialog<OppoNewerEventUI>::ShowDialog();
  this_00 = (OppoNewerEventUI *)UISingletonDialog<OppoNewerEventUI>::GetSingletonPtr();
  *(OppoNewerEventUI **)(this + 0x2c88) = this_00;
  OppoNewerEventUI::InitView(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c88));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c88));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c88));
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c88));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowGLStoneLotInfoWidget() */

void __thiscall LawnApp::ShowGLStoneLotInfoWidget(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  GLStoneLotInfoWidget *pGVar3;
  undefined8 uVar4;
  long lVar5;
  GLDeliveryInfoWidget *pGVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0x2ce0);
  local_8 = ___stack_chk_guard;
  if (lVar5 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    pGVar3 = ::operator_new(0x228);
    GLStoneLotInfoWidget::GLStoneLotInfoWidget(pGVar3);
    *(GLStoneLotInfoWidget **)(this + 0x2ce0) = pGVar3;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar5 = *(long *)(this + 0x2ce0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ce0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ce0));
  pGVar3 = *(GLStoneLotInfoWidget **)(this + 0x2ce0);
  if (pGVar3 != (GLStoneLotInfoWidget *)0x0) {
    if (*(long *)(this + 0x2c98) != 0) {
      GeilivableLottery::GetTelSexyString();
      GeilivableLottery::GetEmailSexyString();
      pGVar6 = *(GLDeliveryInfoWidget **)(this + 0x2ce0);
      FUN_05477b24(auStack_18,auStack_28);
      FUN_05477b24(auStack_10,auStack_20);
      GLDeliveryInfoWidget::SetDeliveryInfo(pGVar6,auStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      FUN_05476c50(auStack_18);
      uVar1 = FUN_0325d744(*(undefined1 *)(*(long *)(this + 0x2ca0) + 0x129));
      FUN_0325d748(*(long *)(this + 0x2ce0) + 0x131,uVar1);
      FUN_05476c50(auStack_20);
      FUN_05476c50(auStack_28);
      pGVar3 = *(GLStoneLotInfoWidget **)(this + 0x2ce0);
    }
    GLStoneLotInfoWidget::InitView(pGVar3);
    uVar4 = operator|(0x10,0x20);
    uVar4 = operator|(uVar4,0x1000);
    uVar1 = operator|(uVar4,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e4ccccd,*(undefined8 *)(this + 0x2ce0),uVar1);
    (**(code **)(**(long **)(this + 0x2ce0) + 0x310))(*(long **)(this + 0x2ce0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillGLStoneLotInfoWidget() */

void __thiscall LawnApp::KillGLStoneLotInfoWidget(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2ce0) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ce0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ce0));
    *(undefined8 *)(this + 0x2ce0) = 0;
  }
  return;
}


/* LawnApp::KillStoneLottery() */

void __thiscall LawnApp::KillStoneLottery(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  char *pcVar2;
  
  this_00 = gLawnApp;
  cVar1 = IsGLStoneLotInfoWidget(gLawnApp);
  if (cVar1 != '\0') {
    KillGLStoneLotInfoWidget(this_00);
  }
  if (*(long *)(this + 0x2ca0) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ca0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ca0));
    *(undefined8 *)(this + 0x2ca0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowGLDeliveryUI() */

void __thiscall LawnApp::ShowGLDeliveryUI(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  GLDeliveryInfoWidget *pGVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0x2cd8);
  local_8 = ___stack_chk_guard;
  if (lVar5 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    pGVar3 = ::operator_new(0x228);
    GLDeliveryInfoWidget::GLDeliveryInfoWidget(pGVar3);
    *(GLDeliveryInfoWidget **)(this + 0x2cd8) = pGVar3;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar5 = *(long *)(this + 0x2cd8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cd8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cd8));
  pGVar3 = *(GLDeliveryInfoWidget **)(this + 0x2cd8);
  if (pGVar3 != (GLDeliveryInfoWidget *)0x0) {
    if (*(long *)(this + 0x2c98) != 0) {
      GeilivableLottery::GetTelSexyString();
      GeilivableLottery::GetEmailSexyString();
      pGVar3 = *(GLDeliveryInfoWidget **)(this + 0x2cd8);
      FUN_05477b24(auStack_18,auStack_28);
      FUN_05477b24(auStack_10,auStack_20);
      GLDeliveryInfoWidget::SetDeliveryInfo(pGVar3,auStack_18,auStack_10);
      FUN_05476c50(auStack_10);
      FUN_05476c50(auStack_18);
      uVar1 = FUN_0325d758(*(undefined1 *)(*(long *)(this + 0x2c98) + 0x129));
      FUN_0325d75c(*(long *)(this + 0x2cd8) + 0x131,uVar1);
      FUN_05476c50(auStack_20);
      FUN_05476c50(auStack_28);
      pGVar3 = *(GLDeliveryInfoWidget **)(this + 0x2cd8);
    }
    GLDeliveryInfoWidget::InitView(pGVar3);
    uVar4 = operator|(0x10,0x20);
    uVar4 = operator|(uVar4,0x1000);
    uVar1 = operator|(uVar4,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e4ccccd,*(undefined8 *)(this + 0x2cd8),uVar1);
    (**(code **)(**(long **)(this + 0x2cd8) + 0x310))(*(long **)(this + 0x2cd8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillGLDeliveryUI() */

void __thiscall LawnApp::KillGLDeliveryUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cd8) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cd8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cd8));
    *(undefined8 *)(this + 0x2cd8) = 0;
  }
  return;
}


/* LawnApp::KillGeilivableLottery() */

void __thiscall LawnApp::KillGeilivableLottery(LawnApp *this)

{
  LawnApp *this_00;
  char cVar1;
  char *pcVar2;
  
  this_00 = gLawnApp;
  cVar1 = IsGLDeliveryUIValid(gLawnApp);
  if (cVar1 != '\0') {
    KillGLDeliveryUI(this_00);
  }
  if (*(long *)(this + 0x2c98) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c98));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c98));
    *(undefined8 *)(this + 0x2c98) = 0;
  }
  return;
}


/* LawnApp::ShowCBTutorialUI() */

void __thiscall LawnApp::ShowCBTutorialUI(LawnApp *this)

{
  int iVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  undefined8 uVar4;
  char *pcVar5;
  CBTutorialUI *this_01;
  long lVar6;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar3 != (PlayerInfo *)0x0) {
    iVar1 = FUN_0325d6ac(*(undefined4 *)(pPVar3 + 0x40));
    if (iVar1 == 0x34) {
      PlayerInfo::CompleteTutorial(pPVar3,0x34);
    }
    lVar6 = *(long *)(this + 0x2cc0);
    if (lVar6 == 0) {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Store_Open");
      this_01 = ::operator_new(0x170);
      CBTutorialUI::CBTutorialUI(this_01);
      *(CBTutorialUI **)(this + 0x2cc0) = this_01;
      (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
      lVar6 = *(long *)(this + 0x2cc0);
    }
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar6);
    PushOverlaysToTop(this);
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cc0))
    ;
    (**(code **)(**(long **)(this + 0x360) + 0x98))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cc0));
    if (*(CBTutorialUI **)(this + 0x2cc0) != (CBTutorialUI *)0x0) {
      CBTutorialUI::InitView(*(CBTutorialUI **)(this + 0x2cc0));
      uVar4 = operator|(0x10,0x20);
      uVar4 = operator|(uVar4,0x1000);
      uVar2 = operator|(uVar4,0x2000);
      PopingWidget::NormalInit((PopingWidget *)0x3e4ccccd,*(undefined8 *)(this + 0x2cc0),uVar2);
      (**(code **)(**(long **)(this + 0x2cc0) + 0x310))(*(long **)(this + 0x2cc0));
    }
  }
  return;
}


/* LawnApp::KillCBTutorialUI() */

void __thiscall LawnApp::KillCBTutorialUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cc0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cc0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cc0));
    *(undefined8 *)(this + 0x2cc0) = 0;
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::StartLevel(*(Board **)(this + 0x9f0));
    return;
  }
  return;
}


/* LawnApp::KillLostNetActivityUI() */

void __thiscall LawnApp::KillLostNetActivityUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cb8) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    MessageRouter::Post((_func_void *)gMessageRouter);
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cb8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cb8));
    *(undefined8 *)(this + 0x2cb8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowLostNetActivityUI() */

void __thiscall LawnApp::ShowLostNetActivityUI(LawnApp *this)

{
  int iVar1;
  undefined4 uVar2;
  LostNetActivityConfig *this_00;
  undefined8 uVar3;
  HintUI *this_01;
  UIWidget *this_02;
  char *pcVar4;
  LostNetActivityUI *this_03;
  long lVar5;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0x2cb8);
  local_8 = ___stack_chk_guard;
  if (lVar5 == 0) {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_Store_Open");
    this_03 = ::operator_new(0x290);
    LostNetActivityUI::LostNetActivityUI(this_03);
    *(LostNetActivityUI **)(this + 0x2cb8) = this_03;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar5 = *(long *)(this + 0x2cb8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cb8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cb8));
  this_00 = (LostNetActivityConfig *)GetLostNetActivityConfig(gLawnApp);
  iVar1 = LostNetActivityConfig::GetCurrentBonus(this_00);
  if (iVar1 < 1) {
    this_01 = (HintUI *)CreateHintUI(this);
    if (this_01 != (HintUI *)0x0) {
      HintUI::Default1Init(this_01);
      FUN_05478178(awStack_10,L"[NOT_IN_ACTIVITY_TITLE]",auStack_18);
      HintUI::SetContentString(this_01,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      HintUI::ShowHintUI(this_01);
    }
    std::string::string((string *)awStack_10,"UIWorldMapOfflineBundleButton");
    this_02 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
    std::string::~string((string *)awStack_10);
    nop();
    if (this_02 != (UIWidget *)0x0) {
      UIWidget::SetVisible(this_02,false);
    }
    KillLostNetActivityUI(this);
  }
  else if (*(LostNetActivityUI **)(this + 0x2cb8) != (LostNetActivityUI *)0x0) {
    LostNetActivityUI::InitView(*(LostNetActivityUI **)(this + 0x2cb8));
    uVar3 = operator|(0x10,0x20);
    uVar3 = operator|(uVar3,0x1000);
    uVar2 = operator|(uVar3,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e4ccccd,*(undefined8 *)(this + 0x2cb8),uVar2);
    (**(code **)(**(long **)(this + 0x2cb8) + 0x310))(*(long **)(this + 0x2cb8));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::ShowTGPieceTableUI() */

void __thiscall LawnApp::ShowTGPieceTableUI(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  TGPieceTableUI *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x2cc8);
  if (lVar4 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x228);
    TGPieceTableUI::TGPieceTableUI(this_00);
    *(TGPieceTableUI **)(this + 0x2cc8) = this_00;
    (**(code **)(*(long *)this_00 + 0x340))(this_00);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cc8));
    lVar4 = *(long *)(this + 0x2cc8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar4);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cc8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cc8));
  lVar4 = *(long *)(this + 0x2cc8);
  if (lVar4 != 0) {
    uVar3 = operator|(0x10,0x20);
    uVar3 = operator|(uVar3,0x1000);
    uVar1 = operator|(uVar3,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar4,uVar1);
    (**(code **)(**(long **)(this + 0x2cc8) + 0x310))(*(long **)(this + 0x2cc8));
  }
  return;
}


/* LawnApp::KillTGPieceTableUI() */

void __thiscall LawnApp::KillTGPieceTableUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cc8) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cc8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cc8));
    *(undefined8 *)(this + 0x2cc8) = 0;
  }
  return;
}


/* LawnApp::KillTransGenosisUI() */

void __thiscall LawnApp::KillTransGenosisUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cb0) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cb0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cb0));
    *(undefined8 *)(this + 0x2cb0) = 0;
  }
  return;
}


/* LawnApp::ShowTGAvatarPieceTableUI() */

void __thiscall LawnApp::ShowTGAvatarPieceTableUI(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  TGAvatarPieceTableUI *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x2cd0);
  if (lVar4 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x228);
    memset(this_00,0,0x228);
    TGAvatarPieceTableUI::TGAvatarPieceTableUI(this_00);
    lVar4 = *(long *)this_00;
    *(TGAvatarPieceTableUI **)(this + 0x2cd0) = this_00;
    (**(code **)(lVar4 + 0x340))(this_00);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cd0));
    lVar4 = *(long *)(this + 0x2cd0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar4);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cd0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cd0));
  lVar4 = *(long *)(this + 0x2cd0);
  if (lVar4 != 0) {
    uVar3 = operator|(0x10,0x20);
    uVar3 = operator|(uVar3,0x1000);
    uVar1 = operator|(uVar3,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar4,uVar1);
    (**(code **)(**(long **)(this + 0x2cd0) + 0x310))(*(long **)(this + 0x2cd0));
  }
  return;
}


/* LawnApp::KillTGAvatarPieceTableUI() */

void __thiscall LawnApp::KillTGAvatarPieceTableUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2cd0) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cd0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2cd0));
    *(undefined8 *)(this + 0x2cd0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowSalesUI() */

void __thiscall LawnApp::ShowSalesUI(LawnApp *this)

{
  char cVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar3;
  undefined8 uVar4;
  SalesUI *this_02;
  long lVar5;
  CurrentSalesInfo CStack_38;
  char local_37;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::GetCurrentSalesInfo();
    if (local_37 == '\0') {
      cVar1 = PlayerInfo::HasValidSales(this_01);
      CurrentSalesInfo::~CurrentSalesInfo(&CStack_38);
      if (cVar1 == '\0') goto LAB_0327b5fc;
    }
    else {
      CurrentSalesInfo::~CurrentSalesInfo(&CStack_38);
    }
  }
  lVar5 = *(long *)(this + 0x2c90);
  if (lVar5 == 0) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Store_Open");
    this_02 = ::operator_new(0x528);
    SalesUI::SalesUI(this_02);
    *(SalesUI **)(this + 0x2c90) = this_02;
    (**(code **)(*(long *)this_02 + 0x328))(this_02);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c90));
    lVar5 = *(long *)(this + 0x2c90);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
  PushOverlaysToTop(this);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c90));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c90));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::SummerActivity,"TimeLimited_Sales");
  lVar5 = *(long *)(this + 0x2c90);
  if (lVar5 != 0) {
    uVar4 = operator|(0x10,0x20);
    uVar4 = operator|(uVar4,0x1000);
    uVar2 = operator|(uVar4,0x2000);
    PopingWidget::NormalInit((PopingWidget *)0x3e99999a,lVar5,uVar2);
    (**(code **)(**(long **)(this + 0x2c90) + 0x310))(*(long **)(this + 0x2c90));
  }
LAB_0327b5fc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::KillSalesUI() */

void __thiscall LawnApp::KillSalesUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c90) != 0) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c90));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c90));
    *(undefined8 *)(this + 0x2c90) = 0;
  }
  return;
}


/* LawnApp::ShowStarConvert() */

void __thiscall LawnApp::ShowStarConvert(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  StarConvert *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x2d18);
  if (lVar4 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x1c0);
    StarConvert::StarConvert(this_00);
    *(StarConvert **)(this + 0x2d18) = this_00;
    lVar4 = **(long **)(this + 0x360);
    this[0x2d20] = (LawnApp)0x1;
    (**(code **)(lVar4 + 0x60))(*(long **)(this + 0x360));
    lVar4 = *(long *)(this + 0x2d18);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar4);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d18));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d18));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"StarConvert");
  uVar3 = operator|(2,8);
  uVar1 = operator|(uVar3,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0x2d18),uVar1);
  (**(code **)(**(long **)(this + 0x2d18) + 0x310))(*(long **)(this + 0x2d18));
  return;
}


/* LawnApp::KillStarConvert() */

void __thiscall LawnApp::KillStarConvert(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d18) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d18));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d18));
    *(undefined8 *)(this + 0x2d18) = 0;
  }
  return;
}


/* LawnApp::ShowLevelofDayEntrance() */

void __thiscall LawnApp::ShowLevelofDayEntrance(LawnApp *this)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  LevelOfDayEntrance *this_00;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x2d28);
  if (lVar4 == 0) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(600);
    LevelOfDayEntrance::LevelOfDayEntrance(this_00);
    *(LevelOfDayEntrance **)(this + 0x2d28) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar4 = *(long *)(this + 0x2d28);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar4);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d28));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d28));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"LevelofDayEntrance");
  uVar3 = operator|(0x10,0x20);
  uVar3 = operator|(uVar3,0x1000);
  uVar1 = operator|(uVar3,0x2000);
  PopingWidget::NormalInit((PopingWidget *)0x3e99999a,*(undefined8 *)(this + 0x2d28),uVar1);
  (**(code **)(**(long **)(this + 0x2d28) + 0x310))(*(long **)(this + 0x2d28));
  return;
}


/* LawnApp::KillLevelofDayEntrance() */

void __thiscall LawnApp::KillLevelofDayEntrance(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d28) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d28));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d28));
    *(undefined8 *)(this + 0x2d28) = 0;
  }
  return;
}


/* LawnApp::ShowPlantAdventureUI() */

void __thiscall LawnApp::ShowPlantAdventureUI(LawnApp *this)

{
  char *pcVar1;
  PlantAdventureUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2d38);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x178);
    PlantAdventureUI::PlantAdventureUI(this_00);
    *(PlantAdventureUI **)(this + 0x2d38) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar2 = *(long *)(this + 0x2d38);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d38));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d38));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"PlantAdventureUI");
  return;
}


/* LawnApp::KillPlantAdventureUI() */

void __thiscall LawnApp::KillPlantAdventureUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d38) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d38));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d38));
    *(undefined8 *)(this + 0x2d38) = 0;
  }
  SetPlantAdventureTabIndex(this,-1);
  return;
}


/* LawnApp::KillAdventureTeamEditorUI() */

void __thiscall LawnApp::KillAdventureTeamEditorUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d48) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d48));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d48));
    *(undefined8 *)(this + 0x2d48) = 0;
  }
  return;
}


/* LawnApp::ShowAdventureOpenedUI() */

void __thiscall LawnApp::ShowAdventureOpenedUI(LawnApp *this)

{
  char *pcVar1;
  AdventureOpenedUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2d30);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x130);
    AdventureOpenedUI::AdventureOpenedUI(this_00);
    *(AdventureOpenedUI **)(this + 0x2d30) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar2 = *(long *)(this + 0x2d30);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d30));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d30));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"AdventureOpenUI");
  return;
}


/* LawnApp::KillAdventureOpenedUI() */

void __thiscall LawnApp::KillAdventureOpenedUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d30) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d30));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d30));
    *(undefined8 *)(this + 0x2d30) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAdventureBonusUI(int, std::wstring) */

void __thiscall LawnApp::ShowAdventureBonusUI(LawnApp *this,undefined4 param_1,undefined8 param_3)

{
  char *pcVar1;
  AdventureBonusUI *pAVar2;
  long *plVar3;
  undefined1 auStack_10 [8];
  long local_8;
  
  plVar3 = *(long **)(this + 0x2d50);
  local_8 = ___stack_chk_guard;
  if (plVar3 == (long *)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    FUN_05477b24(auStack_10,param_3);
    pAVar2 = ::operator_new(0x1e8);
    AdventureBonusUI::AdventureBonusUI(pAVar2,param_1,auStack_10);
    *(AdventureBonusUI **)(this + 0x2d50) = pAVar2;
    FUN_05476c50(auStack_10);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
    plVar3 = *(long **)(this + 0x2d50);
  }
  (**(code **)(*plVar3 + 0x158))(plVar3,1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d50));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"AdventureBonusUI");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowAdventureBonusUI() */

void __thiscall LawnApp::ShowAdventureBonusUI(LawnApp *this)

{
  long *plVar1;
  char *pcVar2;
  
  plVar1 = *(long **)(this + 0x2d50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    (**(code **)(**(long **)(this + 0x360) + 0xb0))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
    PushOverlaysToTop(this);
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d50))
    ;
    (**(code **)(**(long **)(this + 0x360) + 0x98))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
    MessageRouter::Post<std::string_const&,char_const*>
              ((MessageRouter *)gMessageRouter,Message::OpenUI,"AdventureBonusUI");
    return;
  }
  return;
}


/* LawnApp::KillAdventureBonusUI() */

void __thiscall LawnApp::KillAdventureBonusUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d50) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d50));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d50));
    *(undefined8 *)(this + 0x2d50) = 0;
  }
  return;
}


/* LawnApp::ShowAdventureSurpriseUI(int) */

void __thiscall LawnApp::ShowAdventureSurpriseUI(LawnApp *this,int param_1)

{
  char *pcVar1;
  AdventureSurpriseUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2d58);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x188);
    AdventureSurpriseUI::AdventureSurpriseUI(this_00,param_1);
    *(AdventureSurpriseUI **)(this + 0x2d58) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    lVar2 = *(long *)(this + 0x2d58);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar2);
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d58));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d58));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"AdventureSurpriseUI");
  return;
}


/* LawnApp::KillAdventureSurpriseUI() */

void __thiscall LawnApp::KillAdventureSurpriseUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d58) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d58));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d58));
    *(undefined8 *)(this + 0x2d58) = 0;
  }
  return;
}


/* LawnApp::ShowRedeemRewardUI(std::string const&, std::string const&, std::string const&) */

void __thiscall
LawnApp::ShowRedeemRewardUI(LawnApp *this,string *param_1,string *param_2,string *param_3)

{
  char *pcVar1;
  RedeemRewardUI *this_00;
  
  if (*(RedeemRewardUI **)(this + 0x2dd8) == (RedeemRewardUI *)0x0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x178);
    RedeemRewardUI::RedeemRewardUI(this_00,param_1,param_2,param_3);
    *(RedeemRewardUI **)(this + 0x2dd8) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  }
  else {
    RedeemRewardUI::updateRewardList(*(RedeemRewardUI **)(this + 0x2dd8),param_1,param_2,param_3);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dd8));
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2dd8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dd8));
  RedeemRewardUI::showRewardList(*(RedeemRewardUI **)(this + 0x2dd8));
  return;
}


/* LawnApp::KillRedeemRewardUI() */

void __thiscall LawnApp::KillRedeemRewardUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2dd8) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2dd8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2dd8));
    *(undefined8 *)(this + 0x2dd8) = 0;
  }
  return;
}


/* LawnApp::CreateGoldenEggOpenUI() */

void __thiscall LawnApp::CreateGoldenEggOpenUI(LawnApp *this)

{
  char *pcVar1;
  GoldenEggOpenUI *this_00;
  
  if (*(long *)(this + 0x2d68) != 0) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  this_00 = ::operator_new(0x108);
  GoldenEggOpenUI::GoldenEggOpenUI(this_00);
  *(GoldenEggOpenUI **)(this + 0x2d68) = this_00;
  GoldenEggOpenUI::InitView(this_00);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d68));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GoldenEggOpenUIAddBonus(std::string, int, int) */

void __thiscall
LawnApp::GoldenEggOpenUIAddBonus
          (LawnApp *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  GoldenEggOpenUI *pGVar1;
  string asStack_10 [8];
  long local_8;
  
  pGVar1 = *(GoldenEggOpenUI **)(this + 0x2d68);
  local_8 = ___stack_chk_guard;
  if (pGVar1 == (GoldenEggOpenUI *)0x0) {
    CreateGoldenEggOpenUI(this);
    pGVar1 = *(GoldenEggOpenUI **)(this + 0x2d68);
  }
  FUN_05475d88(asStack_10,param_2);
  GoldenEggOpenUI::AddBonus(pGVar1,asStack_10,param_3,param_4);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowGoldenEggOpenUI() */

void __thiscall LawnApp::ShowGoldenEggOpenUI(LawnApp *this)

{
  char *pcVar1;
  long *plVar2;
  
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d68));
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d68));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d68));
  plVar2 = *(long **)(this + 0x2d68);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
  }
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"GoldenEggOpenUI");
  return;
}


/* LawnApp::KillGoldenEggOpenUI() */

void __thiscall LawnApp::KillGoldenEggOpenUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d68) != 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d68));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d68));
    *(undefined8 *)(this + 0x2d68) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAlmanac(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall LawnApp::ShowAlmanac(LawnApp *this,RtWeakPtrBase *param_2)

{
  char *pcVar1;
  AlmanacWidget *pAVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Open");
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pAVar2 = ::operator_new(0x118);
  AlmanacWidget::AlmanacWidget(pAVar2,aRStack_10);
  *(AlmanacWidget **)(this + 0x2a28) = pAVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a28));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a28));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a28));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillAlmanac() */

void __thiscall LawnApp::KillAlmanac(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a28));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a28));
  *(undefined8 *)(this + 0x2a28) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAwakenWidget(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall LawnApp::ShowAwakenWidget(LawnApp *this,RtWeakPtrBase *param_2)

{
  char *pcVar1;
  ArenaAwakenWidget *pAVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Open");
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pAVar2 = ::operator_new(0x110);
  ArenaAwakenWidget::ArenaAwakenWidget(pAVar2,aRStack_10);
  *(ArenaAwakenWidget **)(this + 0x2a30) = pAVar2;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a30));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a30));
  PushOverlaysToTop(this);
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a30));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::KillAwakenWidget() */

void __thiscall LawnApp::KillAwakenWidget(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Almanac_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a30));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a30));
  *(undefined8 *)(this + 0x2a30) = 0;
  return;
}


/* LawnApp::ShowBoardZombieAlmanacUI(std::vector<std::string, std::allocator<std::string > > const&)
    */

void __thiscall LawnApp::ShowBoardZombieAlmanacUI(LawnApp *this,vector *param_1)

{
  char *pcVar1;
  BoardZombieAlmanacUI *this_00;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x2e98);
  if (lVar2 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    this_00 = ::operator_new(0x130);
    BoardZombieAlmanacUI::BoardZombieAlmanacUI(this_00,param_1);
    *(BoardZombieAlmanacUI **)(this + 0x2e98) = this_00;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
    (**(code **)(**(long **)(this + 0x360) + 0xb0))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2e98));
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2e98))
    ;
    PushOverlaysToTop(this);
    lVar2 = *(long *)(this + 0x2e98);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x98))(*(long **)(this + 0x360),lVar2);
  return;
}


/* LawnApp::ShowGachaDisplayerDialog(GachaType) */

void __thiscall LawnApp::ShowGachaDisplayerDialog(LawnApp *this,undefined4 param_2)

{
  char *pcVar1;
  GachaDisplayerDialog *pGVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x2ea8);
  if (lVar3 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    pGVar2 = ::operator_new(0x110);
    GachaDisplayerDialog::GachaDisplayerDialog(pGVar2,param_2);
    *(GachaDisplayerDialog **)(this + 0x2ea8) = pGVar2;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pGVar2);
    (**(code **)(**(long **)(this + 0x360) + 0xb0))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ea8));
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ea8))
    ;
    PushOverlaysToTop(this);
    lVar3 = *(long *)(this + 0x2ea8);
  }
  (**(code **)(**(long **)(this + 0x360) + 0x98))(*(long **)(this + 0x360),lVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::URLOpenFailed(std::string const&) */

void __thiscall LawnApp::URLOpenFailed(LawnApp *this,string *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  string *extraout_x1;
  code *pcVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyAppBase::URLOpenFailed((string *)this);
  (**(code **)(*(long *)this + 0x280))(this,0);
  Sexy::SexyAppBase::CopyToClipboard((string *)this);
  Sexy::UTF8StringToWString((Sexy *)param_1,extraout_x1);
  uVar1 = FUN_054766ec(auStack_10);
  Sexy::StrFormat(L"[OPEN_URL %ls]",auStack_20,uVar1);
  FUN_05476c50(auStack_10);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_PopUp_General");
  pcVar3 = *(code **)(*(long *)this + 0x250);
  FUN_05478178(auStack_18,L"[OPEN_BROWSER]",auStack_30);
  FUN_05478178(auStack_10,L"[DIALOG_STRING_OK]",auStack_28);
  (*pcVar3)(this,0,1,auStack_18,auStack_20,auStack_10,3);
  FUN_05476c50(auStack_10);
  nop();
  FUN_05476c50(auStack_18);
  nop();
  FUN_05476c50(auStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OpenURL(std::string const&, bool) */

void LawnApp::OpenURL(string *param_1,bool param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_PopUp_General");
  pcVar2 = *(code **)(*(long *)param_1 + 0x250);
  FUN_05478178(auStack_20,L"[OPENING_BROWSER]",auStack_38);
  FUN_05478178(auStack_18,L"[OPENING_BROWSER]",auStack_30);
  FUN_05478178(auStack_10,&DAT_056f11a8,auStack_28);
  (*pcVar2)(param_1,0,1,auStack_20,auStack_18,auStack_10,0);
  FUN_05476c50(auStack_10);
  nop();
  FUN_05476c50(auStack_18);
  nop();
  FUN_05476c50(auStack_20);
  nop();
  Sexy::SexyAppBase::OpenURL(param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::PauseMusic() */

void __thiscall LawnApp::PauseMusic(LawnApp *this)

{
  char *pcVar1;
  
  if (this[0x2f31] != (LawnApp)0x0) {
    if (*(int *)(this + 0x2f34) < 1) {
      Sexy::OutputDebugStrF((wchar_t *)"LawnApp::PauseMusic\n");
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Pause_Master_Audio_Bus");
      *(undefined4 *)(this + 0x2f34) = 1;
      Sexy::OutputDebugStrF
                ((wchar_t *)"LawnApp::PauseMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n",
                 (ulong)(byte)this[0x2f31],1);
      return;
    }
    *(int *)(this + 0x2f34) = *(int *)(this + 0x2f34) + 1;
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"LawnApp::PauseMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n");
  return;
}


/* LawnApp::LostFocus() */

void __thiscall LawnApp::LostFocus(LawnApp *this)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  PauseMusic(this);
  Sexy::SexyAppBase::LostFocus((SexyAppBase *)this);
  if (*(code **)(**(long **)(this + 0x18) + 0x28) != Sexy::IInteractiveAudioDriver::Update) {
    (**(code **)(**(long **)(this + 0x18) + 0x28))();
  }
  (**(code **)(*(long *)this + 0x3d8))(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::onEASquaredAdvertisementsWillOpen() */

void __thiscall LawnApp::onEASquaredAdvertisementsWillOpen(LawnApp *this)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PauseMusic(this);
  std::string::string(asStack_10,"[NET_CONNECTING]");
  ShowNetConnectingUI(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowPowerPKView() */

void __thiscall LawnApp::ShowPowerPKView(LawnApp *this)

{
  char *pcVar1;
  PowerPKWidget *this_00;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(long *)(this + 0x2a58) == 0) {
    this_00 = ::operator_new(0xe8);
    PowerPKWidget::PowerPKWidget(this_00);
    *(PowerPKWidget **)(this + 0x2a58) = this_00;
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  LevelEditorTowerDefendStartingPlantfood::SetValue
            (*(LevelEditorTowerDefendStartingPlantfood **)(this + 0x2a58),100);
  AccessoryContent::SetLevel(*(AccessoryContent **)(this + 0x2a58),0x32);
  (**(code **)(**(long **)(this + 0x360) + 0x60))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a58));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a58));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a58));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2a58));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowGemStoreConfirm(StoreType, bool) */

void __thiscall LawnApp::ShowGemStoreConfirm(LawnApp *this,undefined4 param_2,char param_3)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  char *pcVar3;
  wchar_t *pwVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(this + 0x9f0) != (Board *)0x0) && (*(long *)(this + 0x2be0) == 0)) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  *(undefined4 *)(this + 0x3014) = param_2;
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(400);
  iVar2 = FUN_0325f324(0xfa);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  iVar1 = *(int *)(this + 0x3014);
  if (iVar1 == 0) {
    FUN_05478178(awStack_50,L"[COIN_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pwVar4 = L"[COIN_NOT_ENOUGH_DIALOG_TEXT]";
LAB_0327cfdc:
    FUN_05478178(awStack_50,pwVar4,auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
  }
  else {
    if (iVar1 == 2) {
      FUN_05478178(awStack_50,L"[GEM_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pwVar4 = L"[GEM_NOT_ENOUGH_DIALOG_TEXT]";
      goto LAB_0327cfdc;
    }
    if (iVar1 == 3) {
      FUN_05478178(awStack_50,L"[STAMINA_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pwVar4 = L"[STAMINA_NOT_ENOUGH_DIALOG_TEXT]";
      goto LAB_0327cfdc;
    }
    if (iVar1 == 6) {
      FUN_05478178(awStack_50,L"[LEAF_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pwVar4 = L"[LEAF_NOT_ENOUGH_DIALOG_TEXT]";
      goto LAB_0327cfdc;
    }
    if (iVar1 == 7) {
      FUN_05478178(awStack_50,L"[STONE_NOT_ENOUGH_DIALOG_TITLE]",auStack_58);
      PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      pwVar4 = L"[STONE_NOT_ENOUGH_DIALOG_TEXT]";
      goto LAB_0327cfdc;
    }
  }
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCancelStore);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,1);
  FUN_05476c50(auStack_58);
  nop();
  if (param_3 != '\0') {
    FUN_05478178(auStack_58,L"[GEM_NOT_ENOUGH_DIALOG_YES]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnConfirmQuickGemStore);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    goto LAB_0327cf48;
  }
  if (*(int *)(this + 0x3014) == 6) {
    pwVar4 = L"[LEAF_NOT_ENOUGH_DIALOG_YES]";
LAB_0327d098:
    FUN_05478178(auStack_58,pwVar4,auStack_60);
  }
  else {
    if (*(int *)(this + 0x3014) == 7) {
      pwVar4 = L"[STONE_NOT_ENOUGH_DIALOG_YES]";
      goto LAB_0327d098;
    }
    FUN_05478178(auStack_58,L"[GEM_NOT_ENOUGH_DIALOG_YES]",auStack_60);
  }
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmGemStore);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
LAB_0327cf48:
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::ShowFestivalEntranceUINow(FestivalGameMode) */

void __thiscall LawnApp::ShowFestivalEntranceUINow(LawnApp *this,undefined4 param_2)

{
  char *pcVar1;
  long lVar2;
  FestivalEntranceUI *pFVar3;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar2 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  FUN_0325d724(lVar2 + 8,param_2);
  pFVar3 = ::operator_new(400);
  FestivalEntranceUI::FestivalEntranceUI(pFVar3,param_2);
  *(FestivalEntranceUI **)(this + 0x2d88) = pFVar3;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pFVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d88));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d88));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d88));
  return;
}


/* LawnApp::ShowBuyItemUI(int) */

void __thiscall LawnApp::ShowBuyItemUI(LawnApp *this,int param_1)

{
  char *pcVar1;
  BuyItemUI *pBVar2;
  
  if (*(long *)(this + 0x2c00) != 0) {
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  pBVar2 = ::operator_new(0x128);
  BuyItemUI::BuyItemUI(pBVar2,param_1);
  *(BuyItemUI **)(this + 0x2c00) = pBVar2;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pBVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c00));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c00));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c00));
  return;
}


/* LawnApp::ResumeMusic() */

void __thiscall LawnApp::ResumeMusic(LawnApp *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(this + 0x2f34);
  if (this[0x2f31] != (LawnApp)0x0) {
    *(int *)(this + 0x2f34) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      Sexy::OutputDebugStrF((wchar_t *)"LawnApp::ResumeMusic\n");
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Resume_Master_Audio_Bus");
      Sexy::OutputDebugStrF
                ((wchar_t *)"LawnApp::ResumeMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n",
                 (ulong)(byte)this[0x2f31],(ulong)*(uint *)(this + 0x2f34));
      return;
    }
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"LawnApp::ResumeMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n");
  return;
}


/* LawnApp::GotFocus() */

void __thiscall LawnApp::GotFocus(LawnApp *this)

{
  Sexy::SexyAppBase::GotFocus((SexyAppBase *)this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  ResumeMusic(this);
  return;
}


/* LawnApp::OnOpenSystemSetting() */

void __thiscall LawnApp::OnOpenSystemSetting(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  Android::Util::OpenSystemSetting();
  return;
}


/* LawnApp::OnCancelStore() */

void __thiscall LawnApp::OnCancelStore(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  return;
}


/* LawnApp::OnCancelQuickUnlock() */

void __thiscall LawnApp::OnCancelQuickUnlock(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if (*(long *)(this + 0x9f0) != 0) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  return;
}


/* LawnApp::OnCancelStartGameOffLine() */

void __thiscall LawnApp::OnCancelStartGameOffLine(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  setSyncProfileSuccess(gLawnApp,false);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* LawnApp::KillBattleStatementUI() */

void __thiscall LawnApp::KillBattleStatementUI(LawnApp *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2da8);
  if (lVar1 != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
      lVar1 = *(long *)(this + 0x2da8);
    }
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360),lVar1);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2da8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2da8));
    *(undefined8 *)(this + 0x2da8) = 0;
  }
  return;
}


/* LawnApp::ShowBattleStatementUI(BattleStatementUI::AccountUIType) */

void __thiscall LawnApp::ShowBattleStatementUI(LawnApp *this,int param_2)

{
  BattleStatementUI *pBVar1;
  
  if (*(long *)(this + 0x2da8) != 0) {
    KillBattleStatementUI(this);
  }
  if ((param_2 == 0) && (*(Board **)(this + 0x9f0) != (Board *)0x0)) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
    Board::RemoveBoardResource(*(Board **)(this + 0x9f0));
  }
  pBVar1 = ::operator_new(0x130);
  BattleStatementUI::BattleStatementUI(pBVar1,param_2);
  *(BattleStatementUI **)(this + 0x2da8) = pBVar1;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pBVar1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2da8));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2da8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2da8));
  return;
}


/* LawnApp::KillReviveUI() */

void __thiscall LawnApp::KillReviveUI(LawnApp *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2d78);
  if (lVar1 != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
      lVar1 = *(long *)(this + 0x2d78);
    }
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360),lVar1);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d78));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d78));
    *(undefined8 *)(this + 0x2d78) = 0;
  }
  return;
}


/* LawnApp::ShowReviveUI(ReviveMode) */

void __thiscall LawnApp::ShowReviveUI(LawnApp *this,undefined4 param_2)

{
  ReviveUI *pRVar1;
  
  if (*(long *)(this + 0x2d78) != 0) {
    KillReviveUI(this);
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  pRVar1 = ::operator_new(0x130);
  ReviveUI::ReviveUI(pRVar1,param_2);
  *(ReviveUI **)(this + 0x2d78) = pRVar1;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pRVar1);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d78));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d78));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d78));
  return;
}


/* LawnApp::KillStarLevelChallengeUI() */

void __thiscall LawnApp::KillStarLevelChallengeUI(LawnApp *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2d80);
  if (lVar1 != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
      lVar1 = *(long *)(this + 0x2d80);
    }
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360),lVar1);
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d80));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d80));
    *(undefined8 *)(this + 0x2d80) = 0;
  }
  return;
}


/* LawnApp::ShowStarLevelChallengeUINow(int) */

void __thiscall LawnApp::ShowStarLevelChallengeUINow(LawnApp *this,int param_1)

{
  int iVar1;
  StarLevelChallengeUI *this_00;
  
  if (*(long *)(this + 0x2d80) != 0) {
    KillStarLevelChallengeUI(this);
  }
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  iVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  this_00 = ::operator_new(0x138);
  StarLevelChallengeUI::StarLevelChallengeUI(this_00,iVar1,param_1);
  *(StarLevelChallengeUI **)(this + 0x2d80) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d80));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d80));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d80));
  return;
}


/* LawnApp::onEASquaredAdvertisementsClosed() */

void __thiscall LawnApp::onEASquaredAdvertisementsClosed(LawnApp *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(this + 0x2f34);
  if (this[0x2f31] != (LawnApp)0x0) {
    *(int *)(this + 0x2f34) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      Sexy::OutputDebugStrF((wchar_t *)"LawnApp::ResumeMusic\n");
      pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar2,"Resume_Master_Audio_Bus");
      Sexy::OutputDebugStrF
                ((wchar_t *)"LawnApp::ResumeMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n",
                 (ulong)(byte)this[0x2f31],(ulong)*(uint *)(this + 0x2f34));
      return;
    }
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)"LawnApp::ResumeMusic m_bIsMusicPlaying=%d, m_MusicPausedCount=%d\n");
  return;
}


/* LawnApp::OnOpenSystemSettingUpdateGame() */

void __thiscall LawnApp::OnOpenSystemSettingUpdateGame(LawnApp *this)

{
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  Android::Util::OpenSystemSetting();
  return;
}


/* LawnApp::KillPowerPKView() */

void __thiscall LawnApp::KillPowerPKView(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  if (*(long *)(this + 0x9f0) != 0) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  if (*(long *)(this + 0x2a58) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2a58));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a58));
    *(undefined8 *)(this + 0x2a58) = 0;
  }
  return;
}


/* LawnApp::KillFestivalEntranceUI() */

void __thiscall LawnApp::KillFestivalEntranceUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d88) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d88));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d88));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d88));
    *(undefined8 *)(this + 0x2d88) = 0;
  }
  return;
}


/* LawnApp::ShowFestivalEntranceUI(FestivalGameMode) */

void __thiscall LawnApp::ShowFestivalEntranceUI(LawnApp *this,undefined4 param_2)

{
  char *pcVar1;
  long lVar2;
  FestivalEntranceUI *pFVar3;
  
  if (*(long *)(this + 0x2d88) != 0) {
    KillFestivalEntranceUI(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  lVar2 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  FUN_0325d724(lVar2 + 8,param_2);
  pFVar3 = ::operator_new(400);
  FestivalEntranceUI::FestivalEntranceUI(pFVar3,param_2);
  *(FestivalEntranceUI **)(this + 0x2d88) = pFVar3;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pFVar3);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d88));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d88));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d88));
  return;
}


/* LawnApp::killSummerEventEntranceUI() */

void __thiscall LawnApp::killSummerEventEntranceUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d90) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d90));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d90));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d90));
    *(undefined8 *)(this + 0x2d90) = 0;
  }
  return;
}


/* LawnApp::ShowSummerEventEntranceUI() */

void __thiscall LawnApp::ShowSummerEventEntranceUI(LawnApp *this)

{
  char *pcVar1;
  SummerEventEntranceUI *this_00;
  
  if (*(long *)(this + 0x2d90) != 0) {
    killSummerEventEntranceUI(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = ::operator_new(400);
  SummerEventEntranceUI::SummerEventEntranceUI(this_00);
  *(SummerEventEntranceUI **)(this + 0x2d90) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d90));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d90));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d90));
  return;
}


/* LawnApp::ShowTimeTravelEventEntranceUI() */

void __thiscall LawnApp::ShowTimeTravelEventEntranceUI(LawnApp *this)

{
  char *pcVar1;
  TimeTravelEntranceUI *this_00;
  
  if (*(long *)(this + 0x2d98) != 0) {
    killSummerEventEntranceUI(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = ::operator_new(0x1a8);
  TimeTravelEntranceUI::TimeTravelEntranceUI(this_00);
  *(TimeTravelEntranceUI **)(this + 0x2d98) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d98));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d98));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d98));
  return;
}


/* LawnApp::killTimeTravelEntranceUI() */

void __thiscall LawnApp::killTimeTravelEntranceUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2d98) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d98));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d98));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2d98));
    *(undefined8 *)(this + 0x2d98) = 0;
  }
  return;
}


/* LawnApp::killPlantDefenceEntrance() */

void __thiscall LawnApp::killPlantDefenceEntrance(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2da0) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2da0));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2da0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2da0));
    *(undefined8 *)(this + 0x2da0) = 0;
  }
  return;
}


/* LawnApp::ShowPlantDefenceEntrance() */

void __thiscall LawnApp::ShowPlantDefenceEntrance(LawnApp *this)

{
  char *pcVar1;
  PlantDefenceEntrance *this_00;
  
  if (*(long *)(this + 0x2da0) != 0) {
    killPlantDefenceEntrance(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = ::operator_new(0x1a8);
  PlantDefenceEntrance::PlantDefenceEntrance(this_00);
  *(PlantDefenceEntrance **)(this + 0x2da0) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2da0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2da0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2da0));
  return;
}


/* LawnApp::KillNewerPresentUI() */

void __thiscall LawnApp::KillNewerPresentUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2bf8) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf8));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2bf8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bf8));
    *(undefined8 *)(this + 0x2bf8) = 0;
  }
  return;
}


/* LawnApp::ShowNewerPresentUI(int) */

void __thiscall LawnApp::ShowNewerPresentUI(LawnApp *this,int param_1)

{
  char *pcVar1;
  NewerPresentUI *this_00;
  
  if (*(long *)(this + 0x2bf8) != 0) {
    KillNewerPresentUI(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = ::operator_new(0x118);
  NewerPresentUI::NewerPresentUI(this_00,param_1);
  *(NewerPresentUI **)(this + 0x2bf8) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),this_00);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf8));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2bf8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf8));
  return;
}


/* LawnApp::KillBuyItemUI() */

void __thiscall LawnApp::KillBuyItemUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2c00) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c00));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c00));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2c00));
    *(undefined8 *)(this + 0x2c00) = 0;
  }
  return;
}


/* LawnApp::KillDaveClubUI() */

void __thiscall LawnApp::KillDaveClubUI(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2ca8) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ca8));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ca8));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2ca8));
    *(undefined8 *)(this + 0x2ca8) = 0;
  }
  return;
}


/* LawnApp::ShowDaveClubUI(bool) */

void LawnApp::ShowDaveClubUI(bool param_1)

{
  LawnApp *this;
  char *pcVar1;
  DaveClubUI *this_00;
  
  this = (LawnApp *)(ulong)param_1;
  if (*(long *)(this + 0x2ca8) != 0) {
    KillDaveClubUI(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  this_00 = ::operator_new(0x178);
  DaveClubUI::DaveClubUI(this_00);
  *(DaveClubUI **)(this + 0x2ca8) = this_00;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ca8));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ca8));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ca8));
  return;
}


/* LawnApp::KillCoinStore() */

void __thiscall LawnApp::KillCoinStore(LawnApp *this)

{
  char *pcVar1;
  
  if (*(long *)(this + 0x2be0) != 0) {
    if (*(long *)(this + 0x9f0) != 0) {
      ResumeMusic(this);
      (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
    }
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2be0));
    Sexy::WidgetManager::RemoveBaseModal
              (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2be0));
    (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2be0));
    *(undefined8 *)(this + 0x2be0) = 0;
  }
  return;
}


/* LawnApp::ShowCoinStore(StoreType) */

void __thiscall LawnApp::ShowCoinStore(LawnApp *this,undefined4 param_2)

{
  char *pcVar1;
  CoinStore *pCVar2;
  
  if (*(long *)(this + 0x2be0) != 0) {
    KillCoinStore(this);
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(this + 0x9f0));
    PauseMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),1);
  }
  pCVar2 = ::operator_new(0x1a0);
  CoinStore::CoinStore(pCVar2,param_2);
  *(CoinStore **)(this + 0x2be0) = pCVar2;
  (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360),pCVar2);
  (**(code **)(**(long **)(this + 0x360) + 0xb0))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2be0));
  PushOverlaysToTop(this);
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2be0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2be0));
  return;
}


/* LawnApp::OnConfirmGemStore() */

void __thiscall LawnApp::OnConfirmGemStore(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  if (*(int *)(this + 0x3014) != 2) {
    if (*(int *)(this + 0x3014) == 6) {
      return;
    }
    ShowCoinStore(this,0);
    return;
  }
  ShowCoinStore(this);
  return;
}


/* LawnApp::OnConfirmQuickGemStore() */

void __thiscall LawnApp::OnConfirmQuickGemStore(LawnApp *this)

{
  KillPVZ2Dialog(this);
  if ((*(long *)(this + 0x9f0) != 0) && (*(long *)(this + 0x2be0) == 0)) {
    ResumeMusic(this);
    (**(code **)(**(long **)(this + 0x9f0) + 800))(*(long **)(this + 0x9f0),0);
  }
  ShowCoinStore(this,*(undefined4 *)(this + 0x3014));
  return;
}


/* LawnApp::PlayMusic(char const*) */

void __thiscall LawnApp::PlayMusic(LawnApp *this,char *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(this + 0x2f34) = 0;
  this[0x2f31] = (LawnApp)0x1;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,param_1);
  Sexy::OutputDebugStrF((wchar_t *)"=============PlayMusic - %s\n",param_1);
  return;
}


/* LawnApp::PlayMusicCallback(char const*, Sexy::IInteractiveAudioCallbackListener*) */

void __thiscall
LawnApp::PlayMusicCallback(LawnApp *this,char *param_1,IInteractiveAudioCallbackListener *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 0x2f34) = 0;
  this[0x2f31] = (LawnApp)0x1;
  uVar2 = Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  uVar1 = AudioMgr::SendEventCallback(uVar2,param_1,0xff00,param_2,0);
  *(undefined4 *)(this + 0x2f38) = uVar1;
  return;
}


/* LawnApp::StopMusic(char const*) */

void __thiscall LawnApp::StopMusic(LawnApp *this,char *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(this + 0x2f34) = 0;
  this[0x2f31] = (LawnApp)0x0;
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,param_1);
  Sexy::OutputDebugStrF((wchar_t *)"============= StopMusic - %s\n",param_1);
  return;
}


/* LawnApp::MuteMusic() */

void LawnApp::MuteMusic(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Mute_Music_Bus");
  return;
}


/* LawnApp::UnmuteMusic() */

void LawnApp::UnmuteMusic(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Unmute_Music_Bus");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::CheckVersion() */

void __thiscall LawnApp::CheckVersion(LawnApp *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar4;
  char *pcVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PVZVersionNetworkManager::CheckVersionApp((PVZVersionNetworkManager *)(this + 0x2eb0));
  this_00 = gLawnApp;
  if (iVar1 == 2) {
    iVar2 = FUN_0325f324(0x1ea);
    iVar3 = FUN_0325f324(0x118);
    this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[VERSION_FORCE_UPDATE_HEAD]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_01,pPVar4,(Color *)&PrimeText_Game::Color_Generic_Title);
    FUN_05478178(awStack_50,L"[VERSION_FORCE_UPDATE_TEXT]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar4 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_01,pPVar4,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
    FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,VersionForceUpdate);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_PopUp_General");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != 2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowFakeSaveWarning(int) */

void __thiscall LawnApp::ShowFakeSaveWarning(LawnApp *this,int param_1)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  char *pcVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this[0x302a] = (LawnApp)0x0;
  local_8 = ___stack_chk_guard;
  KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x1ea);
  iVar2 = FUN_0325f324(0x118);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[DIALOG_WARNING]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  Sexy::StrFormat(L"[DIA_FAKE_SAVE_WARNING_%d]",awStack_50,(ulong)(uint)param_1);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCopySaveWarningOK);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RequestGetRechargeAmoutFromServer() */

void __thiscall LawnApp::RequestGetRechargeAmoutFromServer(LawnApp *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  char *pcVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  this[0x3029] = (LawnApp)0x0;
  iVar1 = FUN_0325f324(0x1ea);
  iVar2 = FUN_0325f324(0x118);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[NEED_CONNTECT_INTERNET_FOR_RECHARGE_CHECK_HEAD]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  FUN_05478178(awStack_50,L"[NEED_CONNTECT_INTERNET_FOR_RECHARGE_CHECK_TEXT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[DIALOG_STRING_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StartRechargeCheck);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowConfirmExitGame() */

void __thiscall LawnApp::ShowConfirmExitGame(LawnApp *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  PrimeTypeface *pPVar3;
  char *pcVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  KillPVZ2Dialog(gLawnApp);
  this_00 = gLawnApp;
  iVar1 = FUN_0325f324(0x1ea);
  iVar2 = FUN_0325f324(0x118);
  this_01 = (PVZ2UIDialog *)ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[EXIT_GAME_HEADER]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
  PVZ2UIDialog::SetHeaderFont(this_01,pPVar3,(Color *)&PrimeText_Game::Color_Generic_Title);
  FUN_05478178(awStack_50,L"[EXIT_GAME_INFO]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  pPVar3 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  Sexy::Color::Color((Color *)awStack_50,1);
  PVZ2UIDialog::SetFooterFont(this_01,pPVar3,(Color *)awStack_50);
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onConfirmExitGame);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[BUTTON_CANCEL]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCancelExitGame);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::PhysicalKeyDown(int) */

char __thiscall LawnApp::PhysicalKeyDown(LawnApp *this,int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  
  cVar1 = '\0';
  if (param_1 == 0xf1) {
    if ((((((*(long *)(this + 0x2e18) != 0) || (cVar1 = IsCoinStoreShowing(this), cVar1 != '\0')) ||
          (cVar1 = IsWorldPreviewShowing(this), cVar1 != '\0')) ||
         ((cVar1 = IsNewerPresentUIShowing(this), cVar1 != '\0' ||
          (cVar1 = IsReviveUIShowing(this), cVar1 != '\0')))) ||
        ((cVar1 = IsFestivalEntranceUIShowing(this), cVar1 != '\0' ||
         ((*(CrazyNPCManager **)(this + 0x2e00) != (CrazyNPCManager *)0x0 &&
          (cVar1 = CrazyNPCManager::IsNarrationActive(*(CrazyNPCManager **)(this + 0x2e00)),
          cVar1 != '\0')))))) ||
       ((*(long *)(this + 0x28d0) != 0 &&
        (cVar1 = FUN_0325d740(*(undefined1 *)(*(long *)(this + 0x28d0) + 0x130)), cVar1 != '\0'))))
    {
      return '\x01';
    }
    iVar2 = GameStateMgr::GetState((GameStateMgr *)(this + 0x9f8));
    if (iVar2 == 5) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      cVar1 = '\x01';
    }
    else {
      if ((iVar2 != 6) && (iVar2 != 4)) {
        return '\x01';
      }
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_01 = (PurchaseBroker *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_rightmost(this_00);
      cVar1 = PurchaseBroker::ExitGame(this_01);
      if (cVar1 == '\0') {
        ShowConfirmExitGame(this);
        cVar1 = '\x01';
      }
    }
  }
  return cVar1;
}


/* LawnApp::KillPvpCoinStore() */

void __thiscall LawnApp::KillPvpCoinStore(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2be8));
  Sexy::WidgetManager::RemoveBaseModal
            (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2be8));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2be8));
  *(undefined8 *)(this + 0x2be8) = 0;
  return;
}


/* LawnApp::KillPvpUpgrade() */

void __thiscall LawnApp::KillPvpUpgrade(LawnApp *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Close");
  (**(code **)(**(long **)(this + 0x360) + 0x68))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2bf0));
  Sexy::WidgetManager::RemoveBaseModal
            (*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2bf0));
  (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2bf0));
  *(undefined8 *)(this + 0x2bf0) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetRelativeParentPosition(HomeActityType, Sexy::SexyVector2&, std::string&) */

void __thiscall
LawnApp::GetRelativeParentPosition
          (LawnApp *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  uVar2 = FUN_0326dd24(DAT_06a9a848);
  uVar3 = FUN_0326dd74(DAT_06a9a850);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_0326dd74(DAT_06a9a850);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = *(long *)(this + 0x2b90);
    if (lVar4 == 0) goto LAB_0327f620;
    (**(code **)(*(long *)(lVar4 + 0xe0) + 0x18))((string *)&local_10,lVar4 + 0xe0,local_24[0]);
    FUN_05474278(param_4,(string *)&local_10);
    std::string::~string((string *)&local_10);
    (**(code **)(**(long **)(this + 0x2b90) + 0x360))(*(long **)(this + 0x2b90),local_24[0],param_3)
    ;
    lVar4 = *(long *)(this + 0x2b90);
  }
  else {
    uVar2 = FUN_0326dd24(DAT_06a9a868);
    uVar3 = FUN_0326dd74(DAT_06a9a870);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                         (uVar2,uVar3,local_24);
    local_10 = FUN_0326dd74(DAT_06a9a870);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      lVar4 = *(long *)(this + 0x2b88);
      if (lVar4 == 0) goto LAB_0327f620;
      (**(code **)(*(long *)(lVar4 + 0xe0) + 0x18))((string *)&local_10,lVar4 + 0xe0,local_24[0]);
      FUN_05474278(param_4,(string *)&local_10);
      std::string::~string((string *)&local_10);
      (**(code **)(**(long **)(this + 0x2b88) + 0x360))
                (*(long **)(this + 0x2b88),local_24[0],param_3);
      lVar4 = *(long *)(this + 0x2b88);
    }
    else {
      uVar2 = FUN_0326dd24(DAT_06a9ad68);
      uVar3 = FUN_0326dd74(DAT_06a9ad70);
      local_18 = std::
                 find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                           (uVar2,uVar3,local_24);
      local_10 = FUN_0326dd74(DAT_06a9ad70);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar1) {
        lVar4 = *(long *)(this + 0x2b98);
        if (lVar4 == 0) {
LAB_0327f620:
          uVar2 = 0;
          goto LAB_0327f4a0;
        }
        (**(code **)(*(long *)(lVar4 + 0xe0) + 0x18))((string *)&local_10,lVar4 + 0xe0,local_24[0]);
        FUN_05474278(param_4,(string *)&local_10);
        std::string::~string((string *)&local_10);
        (**(code **)(**(long **)(this + 0x2b98) + 0x360))
                  (*(long **)(this + 0x2b98),local_24[0],param_3);
        lVar4 = *(long *)(this + 0x2b98);
      }
      else {
        uVar2 = FUN_0326dd24(DAT_06a9ac48);
        uVar3 = FUN_0326dd74(DAT_06a9ac50);
        local_18 = std::
                   find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                             (uVar2,uVar3,local_24);
        local_10 = FUN_0326dd74(DAT_06a9ac50);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10)
        ;
        if ((!bVar1) || (lVar4 = *(long *)(this + 0x2ba0), lVar4 == 0)) goto LAB_0327f620;
        (**(code **)(*(long *)(lVar4 + 0xe0) + 0x18))((string *)&local_10,lVar4 + 0xe0,local_24[0]);
        FUN_05474278(param_4,(string *)&local_10);
        std::string::~string((string *)&local_10);
        (**(code **)(**(long **)(this + 0x2ba0) + 0x360))
                  (*(long **)(this + 0x2ba0),local_24[0],param_3);
        lVar4 = *(long *)(this + 0x2ba0);
      }
    }
  }
  uVar2 = (**(code **)(*(long *)(lVar4 + 0xe0) + 0x20))(lVar4 + 0xe0,local_24[0]);
LAB_0327f4a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowActivityInnerWidget(HomeActityType, bool) */

void __thiscall
LawnApp::ShowActivityInnerWidget(LawnApp *this,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  uVar2 = FUN_0326dd24(DAT_06a9a848);
  uVar3 = FUN_0326dd74(DAT_06a9a850);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_0326dd74(DAT_06a9a850);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) && (lVar4 = *(long *)(this + 0x2b90), lVar4 != 0)) {
    (**(code **)(*(long *)(lVar4 + 0xe0) + 0x28))(lVar4 + 0xe0,local_24[0],param_3);
  }
  uVar2 = FUN_0326dd24(DAT_06a9a868);
  uVar3 = FUN_0326dd74(DAT_06a9a870);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_0326dd74(DAT_06a9a870);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) && (lVar4 = *(long *)(this + 0x2b88), lVar4 != 0)) {
    (**(code **)(*(long *)(lVar4 + 0xe0) + 0x28))(lVar4 + 0xe0,local_24[0],param_3);
  }
  uVar2 = FUN_0326dd24(DAT_06a9ad68);
  uVar3 = FUN_0326dd74(DAT_06a9ad70);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_0326dd74(DAT_06a9ad70);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) && (lVar4 = *(long *)(this + 0x2b98), lVar4 != 0)) {
    (**(code **)(*(long *)(lVar4 + 0xe0) + 0x28))(lVar4 + 0xe0,local_24[0],param_3);
  }
  uVar2 = FUN_0326dd24(DAT_06a9ac48);
  uVar3 = FUN_0326dd74(DAT_06a9ac50);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<HomeActityType_const*,std::vector<HomeActityType,std::allocator<HomeActityType>>>,HomeActityType>
                       (uVar2,uVar3,local_24);
  local_10 = FUN_0326dd74(DAT_06a9ac50);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if ((bVar1) && (lVar4 = *(long *)(this + 0x2ba0), lVar4 != 0)) {
    (**(code **)(*(long *)(lVar4 + 0xe0) + 0x28))(lVar4 + 0xe0,local_24[0],param_3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowAdventureTeamEditorUI(WorldDungeonInfo) */

void __thiscall LawnApp::ShowAdventureTeamEditorUI(LawnApp *this,WorldDungeonInfo *param_2)

{
  char *pcVar1;
  AdventureTeamEditorUI *pAVar2;
  long lVar3;
  WorldDungeonInfo aWStack_68 [96];
  long local_8;
  
  lVar3 = *(long *)(this + 0x2d48);
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Menu_Store_Open");
    WorldDungeonInfo::WorldDungeonInfo(aWStack_68,param_2);
    pAVar2 = ::operator_new(0x248);
    AdventureTeamEditorUI::AdventureTeamEditorUI(pAVar2,aWStack_68);
    *(AdventureTeamEditorUI **)(this + 0x2d48) = pAVar2;
    WorldDungeonInfo::~WorldDungeonInfo(aWStack_68);
    (**(code **)(**(long **)(this + 0x360) + 0x60))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d48));
    lVar3 = *(long *)(this + 0x2d48);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
  PushOverlaysToTop(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2d48));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2d48));
  AdventureTeamEditorUI::TriggerTutorial(*(AdventureTeamEditorUI **)(this + 0x2d48));
  MessageRouter::Post<std::string_const&,char_const*>
            ((MessageRouter *)gMessageRouter,Message::OpenUI,"AdventureTeamEditorUI");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowGeilivableLottery(bool) */

void LawnApp::ShowGeilivableLottery(bool param_1)

{
  char cVar1;
  byte bVar2;
  LawnApp *this;
  char *pcVar3;
  wchar16 *pwVar4;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  GeilivableLottery *this_02;
  byte in_w1;
  long lVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this = (LawnApp *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = IsChannelWithBigDeal();
  if (cVar1 != '\0') {
    lVar5 = *(long *)(this + 0x2c98);
    if (lVar5 == 0) {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Store_Open");
      this_02 = ::operator_new(0x368);
      GeilivableLottery::GeilivableLottery(this_02);
      *(GeilivableLottery **)(this + 0x2c98) = this_02;
      (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
      lVar5 = *(long *)(this + 0x2c98);
    }
    (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
    PushOverlaysToTop(this);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2c98))
    ;
    (**(code **)(**(long **)(this + 0x360) + 0x98))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2c98));
    if (*(long *)(this + 0x2c98) != 0) {
      pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
      pLVar6 = aLStack_28;
      std::string::string(asStack_20,"DisableNetworkRefresh");
      bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                        (pwVar4,(wchar16 *)asStack_20,pLVar6,in_x3,in_x4);
      if (bVar2 < in_w1) {
        std::string::~string(asStack_20);
        nop();
        this_00 = (NetworkMgr *)NetworkMgr::Instance();
        this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
                   &DAT_05750df0,1,aLStack_28);
        cVar1 = INetworkMsgProcess::RequestActivityList(this_01,(vector *)asStack_20,0,true);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
        if (cVar1 == '\0') {
          ShowNetworkError(this);
        }
      }
      else {
        std::string::~string(asStack_20);
        nop();
        GeilivableLottery::ShowWindow(*(GeilivableLottery **)(this + 0x2c98));
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowStoneLottery(bool) */

void LawnApp::ShowStoneLottery(bool param_1)

{
  char cVar1;
  byte bVar2;
  LawnApp *this;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar3;
  BaseBufferResource *this_02;
  long lVar4;
  char *pcVar5;
  wchar16 *pwVar6;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  StoneLottery *this_05;
  byte in_w1;
  LineBreakCategory *pLVar7;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this = (LawnApp *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    lVar3 = FUN_0325d6a4(*(undefined8 *)(this_01 + 0xa70));
    this_02 = (BaseBufferResource *)ServerTime::Instance();
    lVar4 = Sexy::BaseBufferResource::GetPtr(this_02);
    cVar1 = isSameDay(this,lVar3,lVar4);
    if (cVar1 == '\0') {
      PlayerInfo::ResetLotteryConsumptionGems(this_01,true);
    }
  }
  lVar3 = *(long *)(this + 0x2ca0);
  if (lVar3 == 0) {
    pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar5,"Play_UI_Menu_Store_Open");
    this_05 = ::operator_new(0x370);
    StoneLottery::StoneLottery(this_05);
    *(StoneLottery **)(this + 0x2ca0) = this_05;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar3 = *(long *)(this + 0x2ca0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar3);
  PushOverlaysToTop(this);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2ca0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2ca0));
  if (*(long *)(this + 0x2ca0) != 0) {
    pwVar6 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar7 = aLStack_28;
    std::string::string(asStack_20,"DisableNetworkRefresh");
    bVar2 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar6,(wchar16 *)asStack_20,pLVar7,in_x3,in_x4);
    if (bVar2 < in_w1) {
      std::string::~string(asStack_20);
      nop();
      this_03 = (NetworkMgr *)NetworkMgr::Instance();
      this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
                 &DAT_05750e00,1,aLStack_28);
      cVar1 = INetworkMsgProcess::RequestActivityList(this_04,(vector *)asStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
      if (cVar1 == '\0') {
        ShowNetworkError(this);
      }
    }
    else {
      std::string::~string(asStack_20);
      nop();
      (**(code **)(**(long **)(this + 0x2ca0) + 0x338))(*(long **)(this + 0x2ca0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowTransGenosisUI(bool) */

void LawnApp::ShowTransGenosisUI(bool param_1)

{
  byte bVar1;
  char cVar2;
  LawnApp *this;
  char *pcVar3;
  wchar16 *pwVar4;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  TransGenosisUI *this_02;
  byte in_w1;
  long lVar5;
  LineBreakCategory *pLVar6;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  this = (LawnApp *)(ulong)param_1;
  lVar5 = *(long *)(this + 0x2cb0);
  local_8 = ___stack_chk_guard;
  if (lVar5 == 0) {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Store_Open");
    this_02 = ::operator_new(0x4f0);
    TransGenosisUI::TransGenosisUI(this_02);
    *(TransGenosisUI **)(this + 0x2cb0) = this_02;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    lVar5 = *(long *)(this + 0x2cb0);
  }
  (**(code **)(**(long **)(this + 0x360) + 0xb0))(*(long **)(this + 0x360),lVar5);
  PushOverlaysToTop(this);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Map_PopUp_Reward");
  Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(this + 0x360),*(Widget **)(this + 0x2cb0));
  (**(code **)(**(long **)(this + 0x360) + 0x98))
            (*(long **)(this + 0x360),*(undefined8 *)(this + 0x2cb0));
  if (*(long *)(this + 0x2cb0) != 0) {
    pwVar4 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar6 = aLStack_28;
    std::string::string(asStack_20,"DisableNetworkRefresh");
    bVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar4,(wchar16 *)asStack_20,pLVar6,in_x3,in_x4);
    if (bVar1 < in_w1) {
      std::string::~string(asStack_20);
      nop();
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
                 &DAT_05750e10,1,aLStack_28);
      cVar2 = INetworkMsgProcess::RequestActivityList(this_01,(vector *)asStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
      if (cVar2 == '\0') {
        ShowNetworkError(this);
      }
    }
    else {
      std::string::~string(asStack_20);
      nop();
      TransGenosisUI::ShowWindow(*(TransGenosisUI **)(this + 0x2cb0));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DrawPiecesInRect(Sexy::Graphics*, int, Sexy::TRect<int>&) */

void __thiscall
LawnApp::DrawPiecesInRect(LawnApp *this,Graphics *param_1,int param_2,TRect *param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  NameMapperBase *this_00;
  undefined8 uVar7;
  SeedPacketUtils *this_01;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar8;
  string *psVar9;
  long lVar10;
  PlantAccessoryMgr *this_03;
  Image *pIVar11;
  float fVar12;
  float fVar13;
  string asStack_98 [8];
  string asStack_90 [8];
  string asStack_88 [4];
  int iStack_84;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_80 [8];
  int local_78;
  Insets aIStack_70 [32];
  string asStack_50 [16];
  Insets aIStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Graphics *)0x0) {
    if (param_2 != 0) {
      cVar2 = IsNameMapperContainsId(gLawnApp,param_2);
      if (cVar2 != '\0') {
        GetNameMapperInfo((int)gLawnApp);
        FUN_05475d88(asStack_98,apStack_80);
        if (local_78 == 2) {
          this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          this_02 = (RtWeakPtr *)SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,asStack_98);
          fVar13 = ((float)*(int *)(param_3 + 8) * 0.98) / (float)*(int *)(this_02 + 0x28);
          fVar12 = ((float)*(int *)(param_3 + 0xc) * 0.98) / (float)*(int *)(this_02 + 0x2c);
          iVar4 = FUN_0325f324(3);
          iVar6 = *(int *)param_3;
          iVar5 = FUN_0325f324(2);
          iVar1 = *(int *)(param_3 + 4);
          Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this_02 + 0x170));
          GetImageOffset(asStack_88,(RtId *)aIStack_40);
          Sexy::RtId::~RtId((RtId *)aIStack_40);
          UIWidget::ConvertPSDImageOffsetToUISpace((int *)asStack_88,&iStack_84,1536.0);
          Sexy::Insets::Insets
                    (aIStack_70,
                     (int)((float)(iVar6 - iVar4) + (float)*(int *)(this_02 + 0x30) * fVar13),
                     (int)((float)(iVar1 - iVar5) + (float)*(int *)(this_02 + 0x34) * fVar12),
                     (int)(fVar13 * (float)*(int *)(this_02 + 0x28)),
                     (int)(fVar12 * (float)*(int *)(this_02 + 0x2c)));
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar8,(TRect *)aIStack_70,(TRect *)(this_02 + 0x20));
          Sexy::Insets::Insets
                    (aIStack_40,
                     (int)((float)(iVar6 - iVar4) + (float)*(int *)(this_02 + 0x18) * fVar13),
                     (int)((float)(iVar1 - iVar5) + (float)*(int *)(this_02 + 0x1c) * fVar12),
                     (int)(fVar13 * (float)*(int *)(this_02 + 0x10)),
                     (int)(fVar12 * (float)*(int *)(this_02 + 0x14)));
          bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
          if (bVar3) {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
            pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar10 + 0x48));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar8,(TRect *)aIStack_40,(TRect *)(this_02 + 8));
          }
        }
        else if (local_78 == 4) {
          Set8BytesTo0(asStack_90);
          iVar6 = AvatarChipNameMapperServerID::GetInstance();
          NameMapperBase::GetNameForId(iVar6);
          psVar9 = (string *)
                   Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
          ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar9);
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aIStack_70);
          if (cVar2 == '\0') {
            psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr()
            ;
            ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_40);
            thunk_FUN_05475e00(asStack_90,lVar10 + 0x48);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_40);
          }
          else {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_70);
            thunk_FUN_05475e00(asStack_90,lVar10 + 0x60);
          }
          pIVar11 = (Image *)StringHelper::ToImage(asStack_90,false);
          if (pIVar11 != (Image *)0x0) {
            Sexy::Graphics::DrawImage
                      (param_1,pIVar11,*(int *)param_3,*(int *)(param_3 + 4),*(int *)(param_3 + 8),
                       *(int *)(param_3 + 0xc));
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_70);
          std::string::~string(asStack_88);
          std::string::~string(asStack_90);
        }
        else if (local_78 == 6) {
          this_03 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          PlantAccessoryMgr::GetAccessoryUIInfo(this_03,asStack_98);
          GetGameItemInfoByName(asStack_98,0x20,0);
          pIVar11 = (Image *)StringHelper::ToImage(asStack_50,param_2 == 0);
          if (pIVar11 != (Image *)0x0) {
            Sexy::Graphics::DrawImage
                      (param_1,pIVar11,*(int *)param_3,*(int *)(param_3 + 4),*(int *)(param_3 + 8),
                       *(int *)(param_3 + 0xc));
          }
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aIStack_70);
          TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aIStack_40);
        }
        else if (local_78 == 0) {
          this_00 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
          cVar2 = NameMapperBase::ContainsId(this_00,param_2);
          if (cVar2 != '\0') {
            Sexy::Insets::Insets(aIStack_40,(Insets *)param_3);
            uVar7 = NewAvatar::GetNewAvatarPieceImage(param_2);
            DrawAdaptiveImage(param_1,aIStack_40,uVar7);
          }
        }
        std::string::~string(asStack_98);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_80);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::IsHintUIValid(int) */

bool __thiscall LawnApp::IsHintUIValid(LawnApp *this,int param_1)

{
  long *plVar1;
  int local_4;
  
  local_4 = param_1;
  plVar1 = (long *)std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>
                   ::operator[]((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>
                                 *)(this + 0x2ce8),&local_4);
  return *plVar1 != 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetNewHintUIIndex(HintUI*) */

void __thiscall LawnApp::GetNewHintUIIndex(LawnApp *this,HintUI *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  do {
    cVar1 = IsHintUIValid(this,local_c);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)
               std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>::
               operator[]((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>
                           *)(this + 0x2ce8),&local_c);
      *puVar2 = param_1;
      iVar3 = local_c;
      goto LAB_03285824;
    }
    local_c = local_c + 1;
  } while (local_c < 1000);
  (**(code **)(*(long *)this + 0x150))(this,param_1);
  iVar3 = -1;
LAB_03285824:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* LawnApp::GetHintUI(int) */

undefined8 __thiscall LawnApp::GetHintUI(LawnApp *this,int param_1)

{
  undefined8 *puVar1;
  int local_4;
  
  local_4 = param_1;
  puVar1 = (undefined8 *)
           std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>::
           operator[]((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>
                       *)(this + 0x2ce8),&local_4);
  return *puVar1;
}


/* LawnApp::ShowHintUI(int) */

void __thiscall LawnApp::ShowHintUI(LawnApp *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  Widget *pWVar4;
  HintUI *this_00;
  long *plVar5;
  WidgetManager *this_01;
  code *pcVar6;
  
  cVar1 = IsHintUIValid(this,param_1);
  if (cVar1 == '\0') {
    return;
  }
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Menu_Store_Open");
  plVar5 = *(long **)(this + 0x360);
  pcVar6 = *(code **)(*plVar5 + 0xb0);
  uVar3 = GetHintUI(this,param_1);
  (*pcVar6)(plVar5,uVar3);
  PushOverlaysToTop(this);
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Map_PopUp_Reward");
  this_01 = *(WidgetManager **)(this + 0x360);
  pWVar4 = (Widget *)GetHintUI(this,param_1);
  Sexy::WidgetManager::AddBaseModal(this_01,pWVar4);
  plVar5 = *(long **)(this + 0x360);
  pcVar6 = *(code **)(*plVar5 + 0x98);
  uVar3 = GetHintUI(this,param_1);
  (*pcVar6)(plVar5,uVar3);
  this_00 = (HintUI *)GetHintUI(this,param_1);
  HintUI::ShowHintUI(this_00);
  return;
}


/* LawnApp::KillHintUI(int) */

void __thiscall LawnApp::KillHintUI(LawnApp *this,int param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int local_4;
  
  local_4 = param_1;
  cVar1 = IsHintUIValid(this,param_1);
  if (cVar1 != '\0') {
    uVar2 = GetHintUI(this,local_4);
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_Store_Close");
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360),uVar2);
    (**(code **)(*(long *)this + 0x150))(this,uVar2);
    puVar4 = (undefined8 *)
             std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>::
             operator[]((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>
                         *)(this + 0x2ce8),&local_4);
    *puVar4 = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchFAQWebpage() */

void __thiscall LawnApp::LaunchFAQWebpage(LawnApp *this)

{
  string *psVar1;
  Sexy *this_00;
  ulong uVar2;
  undefined8 uVar3;
  string *psVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_60);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar4 = asStack_48;
  std::string::string(asStack_40,"fr");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"fr/",(size_t)psVar4);
  std::string::~string(asStack_40);
  nop();
  psVar4 = asStack_48;
  std::string::string(asStack_40,"es");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"sp/",(size_t)psVar4);
  std::string::~string(asStack_40);
  nop();
  psVar4 = asStack_48;
  std::string::string(asStack_40,"it");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"it/",(size_t)psVar4);
  std::string::~string(asStack_40);
  nop();
  psVar4 = asStack_48;
  std::string::string(asStack_40,"de");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"gr/",(size_t)psVar4);
  std::string::~string(asStack_40);
  nop();
  psVar4 = asStack_48;
  std::string::string(asStack_40,"pt");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar1,"pt-br/",(size_t)psVar4);
  std::string::~string(asStack_40);
  nop();
  Sexy::GetLocale(this_00);
  uVar2 = FUN_05474184(asStack_40);
  if (2 < uVar2) {
    psVar4 = (string *)0xffffffffffffffff;
    FUN_0547500c(asStack_40,2);
  }
  uVar3 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(asStack_60,uVar3);
  std::string::~string(asStack_40);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  TodStringTranslate(L"[SETTINGS_HELP_URL]");
  Sexy::WStringToString((Sexy *)amStack_38,(wstring *)0x0,(bool *)psVar4);
  FUN_05476c50(amStack_38);
  FUN_05475d88(asStack_50,asStack_58);
  std::string::string(asStack_40,"{LOCALEINSERT}");
  TodReplaceString(asStack_50,asStack_40,asStack_60);
  FUN_05474278(asStack_50,amStack_38);
  std::string::~string((string *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  std::string::string(asStack_40,"{PCPID}");
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetAccountName();
  TodReplaceString(asStack_50,asStack_40,asStack_48);
  FUN_05474278(asStack_50,amStack_38);
  std::string::~string((string *)amStack_38);
  std::string::~string(asStack_48);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)this + 0x168))(this,asStack_50,0);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchEULAWebpage() */

void __thiscall LawnApp::LaunchEULAWebpage(LawnApp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Sexy *this_00;
  ulong uVar4;
  undefined8 uVar5;
  UISettingLargeTextEnunciation *this_01;
  string *psVar6;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"AppStore");
  GetPackageName(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  bVar1 = std::operator==(asStack_60,"com.popcap.pvz2cthdhwctdp");
  if (bVar1) {
    this_01 = (UISettingLargeTextEnunciation *)
              UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog();
    std::string::string(asStack_38,"EULA_TXT");
    UISettingLargeTextEnunciation::Init(this_01,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_60);
  }
  else {
    Set8BytesTo0(asStack_58);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    psVar6 = asStack_48;
    std::string::string(asStack_40,"pt");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"br",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    psVar6 = asStack_48;
    std::string::string(asStack_40,"zh");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"sc",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    Sexy::GetLocale(this_00);
    uVar4 = FUN_05474184(asStack_40);
    if (2 < uVar4) {
      psVar6 = (string *)0xffffffffffffffff;
      FUN_0547500c(asStack_40,2);
    }
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(asStack_58,uVar5);
    cVar2 = FUN_0547419c(asStack_58);
    if (cVar2 != '\0') {
      thunk_FUN_05475e00(asStack_58,asStack_40);
    }
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    TodStringTranslate(L"[SETTINGS_EULA_URL_ANDROID]");
    Sexy::WStringToString((Sexy *)asStack_38,(wstring *)0x0,(bool *)psVar6);
    FUN_05476c50(asStack_38);
    FUN_05475d88(asStack_48,asStack_50);
    std::string::string(asStack_40,"{LOCALE}");
    TodReplaceString(asStack_48,asStack_40,asStack_58);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchPrivacyWebpage() */

void __thiscall LawnApp::LaunchPrivacyWebpage(LawnApp *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  string *psVar4;
  Sexy *this_00;
  ulong uVar5;
  undefined8 uVar6;
  string *psVar7;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"AppStore");
  GetPackageName(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  bVar1 = std::operator==(asStack_60,"com.popcap.pvz2cthdhwctdp");
  if (bVar1) {
    iVar3 = UISingletonDialog<UIPrivacyDialog>::ShowDialog();
    UIPrivacyDialog::SetType(iVar3);
    std::string::~string(asStack_60);
  }
  else {
    Set8BytesTo0(asStack_58);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    psVar7 = asStack_48;
    std::string::string(asStack_40,"pt");
    psVar4 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar4,"br",(size_t)psVar7);
    std::string::~string(asStack_40);
    nop();
    psVar7 = asStack_48;
    std::string::string(asStack_40,"zh");
    psVar4 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar4,"sc",(size_t)psVar7);
    std::string::~string(asStack_40);
    nop();
    Sexy::GetLocale(this_00);
    uVar5 = FUN_05474184(asStack_40);
    if (2 < uVar5) {
      psVar7 = (string *)0xffffffffffffffff;
      FUN_0547500c(asStack_40,2);
    }
    uVar6 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(asStack_58,uVar6);
    cVar2 = FUN_0547419c(asStack_58);
    if (cVar2 != '\0') {
      thunk_FUN_05475e00(asStack_58,asStack_40);
    }
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    TodStringTranslate(L"[SETTINGS_PRIVACY_URL_ANDROID]");
    Sexy::WStringToString((Sexy *)asStack_38,(wstring *)0x0,(bool *)psVar7);
    FUN_05476c50(asStack_38);
    FUN_05475d88(asStack_48,asStack_50);
    std::string::string(asStack_40,"{LOCALE}");
    TodReplaceString(asStack_48,asStack_40,asStack_58);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchTermsOfServiceWebpage() */

void __thiscall LawnApp::LaunchTermsOfServiceWebpage(LawnApp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Sexy *this_00;
  ulong uVar4;
  undefined8 uVar5;
  UISettingLargeTextEnunciation *this_01;
  string *psVar6;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"AppStore");
  GetPackageName(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  bVar1 = std::operator==(asStack_60,"com.popcap.pvz2cthdhwctdp");
  if (bVar1) {
    this_01 = (UISettingLargeTextEnunciation *)
              UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog();
    std::string::string(asStack_38,"EULA_TXT");
    UISettingLargeTextEnunciation::Init(this_01,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_60);
  }
  else {
    Set8BytesTo0(asStack_58);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    psVar6 = asStack_48;
    std::string::string(asStack_40,"pt");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"br",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    psVar6 = asStack_48;
    std::string::string(asStack_40,"zh");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"sc",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    Sexy::GetLocale(this_00);
    uVar4 = FUN_05474184(asStack_40);
    if (2 < uVar4) {
      psVar6 = (string *)0xffffffffffffffff;
      FUN_0547500c(asStack_40,2);
    }
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(asStack_58,uVar5);
    cVar2 = FUN_0547419c(asStack_58);
    if (cVar2 != '\0') {
      thunk_FUN_05475e00(asStack_58,asStack_40);
    }
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    TodStringTranslate(L"[SETTINGS_TERMSOFSERVICE_URL_ANDROID]");
    Sexy::WStringToString((Sexy *)asStack_38,(wstring *)0x0,(bool *)psVar6);
    FUN_05476c50(asStack_38);
    FUN_05475d88(asStack_48,asStack_50);
    std::string::string(asStack_40,"{LOCALE}");
    TodReplaceString(asStack_48,asStack_40,asStack_58);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchPersonalWebpage() */

void __thiscall LawnApp::LaunchPersonalWebpage(LawnApp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Sexy *this_00;
  ulong uVar4;
  undefined8 uVar5;
  UISettingLargeTextEnunciation *this_01;
  string *psVar6;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"AppStore");
  GetPackageName(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  bVar1 = std::operator==(asStack_60,"com.popcap.pvz2cthdhwctdp");
  if (bVar1) {
    this_01 = (UISettingLargeTextEnunciation *)
              UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog();
    std::string::string(asStack_38,"EULA_TXT");
    UISettingLargeTextEnunciation::Init(this_01,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_60);
  }
  else {
    Set8BytesTo0(asStack_58);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    psVar6 = asStack_48;
    std::string::string(asStack_40,"pt");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"br",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    psVar6 = asStack_48;
    std::string::string(asStack_40,"zh");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"sc",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    Sexy::GetLocale(this_00);
    uVar4 = FUN_05474184(asStack_40);
    if (2 < uVar4) {
      psVar6 = (string *)0xffffffffffffffff;
      FUN_0547500c(asStack_40,2);
    }
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(asStack_58,uVar5);
    cVar2 = FUN_0547419c(asStack_58);
    if (cVar2 != '\0') {
      thunk_FUN_05475e00(asStack_58,asStack_40);
    }
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    TodStringTranslate(L"[SETTINGS_PERSONAL_URL_ANDROID]");
    Sexy::WStringToString((Sexy *)asStack_38,(wstring *)0x0,(bool *)psVar6);
    FUN_05476c50(asStack_38);
    FUN_05475d88(asStack_48,asStack_50);
    std::string::string(asStack_40,"{LOCALE}");
    TodReplaceString(asStack_48,asStack_40,asStack_58);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchInventoryWebpage() */

void __thiscall LawnApp::LaunchInventoryWebpage(LawnApp *this)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  Sexy *this_00;
  ulong uVar4;
  undefined8 uVar5;
  UISettingLargeTextEnunciation *this_01;
  string *psVar6;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"AppStore");
  GetPackageName(this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  bVar1 = std::operator==(asStack_60,"com.popcap.pvz2cthdhwctdp");
  if (bVar1) {
    this_01 = (UISettingLargeTextEnunciation *)
              UISingletonDialog<UISettingLargeTextEnunciation>::ShowDialog();
    std::string::string(asStack_38,"EULA_TXT");
    UISettingLargeTextEnunciation::Init(this_01,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::~string(asStack_60);
  }
  else {
    Set8BytesTo0(asStack_58);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
           *)asStack_38);
    psVar6 = asStack_48;
    std::string::string(asStack_40,"pt");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"br",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    psVar6 = asStack_48;
    std::string::string(asStack_40,"zh");
    psVar3 = (string *)
             std::
             map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
             ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                           *)asStack_38,asStack_40);
    std::string::append(psVar3,"sc",(size_t)psVar6);
    std::string::~string(asStack_40);
    nop();
    Sexy::GetLocale(this_00);
    uVar4 = FUN_05474184(asStack_40);
    if (2 < uVar4) {
      psVar6 = (string *)0xffffffffffffffff;
      FUN_0547500c(asStack_40,2);
    }
    uVar5 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)asStack_38,asStack_40);
    thunk_FUN_05475e00(asStack_58,uVar5);
    cVar2 = FUN_0547419c(asStack_58);
    if (cVar2 != '\0') {
      thunk_FUN_05475e00(asStack_58,asStack_40);
    }
    std::string::~string(asStack_40);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)asStack_38);
    TodStringTranslate(L"[SETTINGS_INVENTORY_URL_ANDROID]");
    Sexy::WStringToString((Sexy *)asStack_38,(wstring *)0x0,(bool *)psVar6);
    FUN_05476c50(asStack_38);
    FUN_05475d88(asStack_48,asStack_50);
    std::string::string(asStack_40,"{LOCALE}");
    TodReplaceString(asStack_48,asStack_40,asStack_58);
    FUN_05474278(asStack_48,asStack_38);
    std::string::~string(asStack_38);
    std::string::~string(asStack_40);
    nop();
    (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
    std::string::~string(asStack_48);
    std::string::~string(asStack_50);
    std::string::~string(asStack_58);
    std::string::~string(asStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchTmallSotreWebpage() */

void __thiscall LawnApp::LaunchTmallSotreWebpage(LawnApp *this)

{
  char cVar1;
  string *psVar2;
  Sexy *this_00;
  ulong uVar3;
  undefined8 uVar4;
  string *psVar5;
  string asStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_58);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar5 = asStack_48;
  std::string::string(asStack_40,"pt");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar2,"br",(size_t)psVar5);
  std::string::~string(asStack_40);
  nop();
  psVar5 = asStack_48;
  std::string::string(asStack_40,"zh");
  psVar2 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_40);
  std::string::append(psVar2,"sc",(size_t)psVar5);
  std::string::~string(asStack_40);
  nop();
  Sexy::GetLocale(this_00);
  uVar3 = FUN_05474184(asStack_40);
  if (2 < uVar3) {
    psVar5 = (string *)0xffffffffffffffff;
    FUN_0547500c(asStack_40,2);
  }
  uVar4 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_40);
  thunk_FUN_05475e00(asStack_58,uVar4);
  cVar1 = FUN_0547419c(asStack_58);
  if (cVar1 != '\0') {
    thunk_FUN_05475e00(asStack_58,asStack_40);
  }
  std::string::~string(asStack_40);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  TodStringTranslate(L"[TMALL_STORE_URL]");
  Sexy::WStringToString((Sexy *)amStack_38,(wstring *)0x0,(bool *)psVar5);
  FUN_05476c50(amStack_38);
  FUN_05475d88(asStack_48,asStack_50);
  std::string::string(asStack_40,"{LOCALE}");
  TodReplaceString(asStack_48,asStack_40,asStack_58);
  FUN_05474278(asStack_48,amStack_38);
  std::string::~string((string *)amStack_38);
  std::string::~string(asStack_40);
  nop();
  (**(code **)(*(long *)this + 0x168))(this,asStack_48,0);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::PrepareLoadGroup(std::string const&) */

void __thiscall LawnApp::PrepareLoadGroup(LawnApp *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  ResourceGroup *this_01;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ResourceGroup *)
            Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),param_1);
  if (this_01 == (ResourceGroup *)0x0) {
    uVar7 = FUN_0547429c(param_1);
    Sexy::StrFormat("[Resources][ERROR] Failed to find resgroup: %s",(string *)&local_10,uVar7);
    nop();
    std::string::~string((string *)&local_10);
  }
  else {
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x2900);
    piVar4 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                  *)(this + 0x2930),param_1);
    *piVar4 = *piVar4 + 1;
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(this_00,param_1);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar3 == '\0') {
      piVar4 = (int *)std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[](this_00,param_1);
      iVar1 = *piVar4;
    }
    else {
      puVar6 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::operator[](this_00,param_1);
      *puVar6 = 0;
      piVar4 = (int *)std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[](this_00,param_1);
      iVar1 = *piVar4;
    }
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
      FUN_05475d88((string *)&local_10,param_1);
      cVar3 = FUN_03263be0((string *)&local_10);
      std::string::~string((string *)&local_10);
      if (cVar3 != '\0') {
        *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = *(undefined4 *)(this + 0xd8);
      }
      Sexy::ResourceGroup::Preload(this_01);
      *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar2;
    }
    piVar4 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    *piVar4 = *piVar4 + 1;
    std::operator+(param_1,"_Dynamic");
    lVar5 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_18);
    if (lVar5 != 0) {
      PrepareLoadGroup(this,(string *)&local_18);
    }
    FUN_031f5e7c((string *)&local_10,"CFDLC_",param_1);
    lVar5 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_10);
    if (lVar5 != 0) {
      PrepareLoadGroup(this,(string *)&local_10);
    }
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::PrepareLoadGroups(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::PrepareLoadGroups(LawnApp *this,vector *param_1)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_0325d79c(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)FUN_0325d7a8(uVar4,uVar3);
    PrepareLoadGroup(this,psVar1);
    uVar3 = uVar3 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::empty
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::StartInitialLoad() */

void __thiscall LawnApp::StartInitialLoad(LawnApp *this)

{
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PrepareLoadGroups(this,(vector *)&DAT_06a9a7a0);
  TodStringTranslate(L"[NUMBER_FORMAT_SEPARATOR_COUNT]");
  TodStringTranslate(L"[NUMBER_FORMAT_SEPARATOR]");
  Sexy::Locale::SetSeperators(awStack_18,awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LoadGroup(std::string const&) */

void __thiscall LawnApp::LoadGroup(LawnApp *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  char cVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"LoadGroup");
  nop();
  std::string::~string((string *)&local_10);
  nop();
  cVar1 = internalLoadGroup(this,param_1);
  if (cVar1 == '\0') {
    uVar4 = FUN_0547429c(param_1);
    Sexy::ResourceManager::GetErrorText();
    uVar5 = FUN_0547429c((string *)&local_10);
    uVar6 = FUN_0547429c(this + 0x78);
    Sexy::StrFormat("[%s] LoadGroup failed. Error: %s more info: %s",(exception_ptr *)&local_18,
                    uVar4,uVar5,uVar6);
    std::string::~string((string *)&local_10);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string((string *)&local_10,"PvZ2Debug");
    nop();
    std::string::~string((string *)&local_10);
    nop();
    FUN_05474ff8(this + 0x78);
    std::string::~string((string *)&local_18);
  }
  else {
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x2900);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(this_00,param_1);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar1 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::operator[](this_00,param_1);
      *puVar7 = 0;
    }
    piVar2 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    *piVar2 = *piVar2 + 1;
    std::operator+(param_1,"_Dynamic");
    lVar3 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_18);
    if (lVar3 != 0) {
      LoadGroup(this,(string *)&local_18);
    }
    FUN_031f5e7c((string *)&local_10,"CFDLC_",param_1);
    lVar3 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_10);
    if (lVar3 != 0) {
      LoadGroup(this,(string *)&local_10);
    }
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::ShowNewWorldDialog(std::string) */

void LawnApp::ShowNewWorldDialog(ReceivedDataCallback *param_1)

{
  LawnApp *pLVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  PVZ2UIDialog *this;
  WorldDataManager *this_00;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [40];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(param_1 + 0x3030));
  pLVar1 = gLawnApp;
  std::string::string(asStack_60,"UI_WorldPreview");
  LoadGroup(pLVar1,asStack_60);
  std::string::~string(asStack_60);
  nop();
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_UI_Map_PopUp_Reward");
  if (*(Board **)(param_1 + 0x9f0) != (Board *)0x0) {
    Board::ClearCursors(*(Board **)(param_1 + 0x9f0));
    (**(code **)(**(long **)(param_1 + 0x9f0) + 800))(*(long **)(param_1 + 0x9f0),1);
  }
  pLVar1 = gLawnApp;
  iVar3 = FUN_0325f324(0x23c);
  iVar4 = FUN_0325f324(500);
  this = (PVZ2UIDialog *)ShowPVZ2Dialog(pLVar1,(float)iVar3,(float)iVar4,(PVZ2UIDialog *)0x0);
  FUN_05478178(auStack_68,L"[GOTO_NEW_WORLD]",auStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,GotoNewWorld);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,asStack_60);
  PVZ2UIDialog::AddButton(this,auStack_68,aDStack_38,0);
  FUN_05476c50(auStack_68);
  nop();
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar6 = WorldDataManager::FindEventByLevelName(this_00,(string *)(param_1 + 0x3030));
  bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"pirate");
  if (bVar2) {
    pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_PIRATE";
  }
  else {
    bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"cowboy");
    if (bVar2) {
      pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_COWBOY";
    }
    else {
      bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"kongfu");
      if (bVar2) {
        pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_KONGFU";
      }
      else {
        bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"future");
        if (!bVar2) {
          bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"dark");
          if (bVar2) {
            pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_DARK";
            goto LAB_0328dc98;
          }
          bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"beach");
          if (bVar2) {
            pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_BEACH";
            goto LAB_0328dc98;
          }
          bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"iceage");
          if (bVar2) {
            pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_ICEAGE";
            goto LAB_0328dc98;
          }
          bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"skycity");
          if (bVar2) {
            pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_SKYCITY";
            goto LAB_0328dc98;
          }
          bVar2 = std::operator==((string *)(*(long *)(lVar6 + 0xe8) + 0x38),"lostcity");
          if (bVar2) {
            pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_LOSTCITY";
            goto LAB_0328dc98;
          }
        }
        pcVar5 = "IMAGE_UI_WORLD_PREVIEW_WORLD_PREVIEW_FUTURE";
      }
    }
  }
LAB_0328dc98:
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_60,pcVar5);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)asStack_60);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
            ((CachedUIResourcePtr<Sexy::Image> *)asStack_60);
  Sexy::Point::Point((Point *)asStack_60,0x14,0);
  PVZ2UIDialog::SetImage(this,uVar7,asStack_60);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::LoadGroups(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::LoadGroups(LawnApp *this,vector *param_1)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_0325d79c(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)FUN_0325d7a8(uVar4,uVar3);
    LoadGroup(this,psVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::FinalizeGroupLoad(std::string const&) */

void __thiscall LawnApp::FinalizeGroupLoad(LawnApp *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_01;
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = internalLoadGroup(this,param_1);
  if (cVar1 == '\0') {
    uVar7 = FUN_0547429c(param_1);
    Sexy::ResourceManager::GetErrorText();
    uVar5 = FUN_0547429c((string *)&local_10);
    uVar6 = FUN_0547429c(this + 0x78);
    Sexy::StrFormat("[%s] FinalizeGroupLoad failed. Error: %s more info: %s",(string *)&local_18,
                    uVar7,uVar5,uVar6);
    std::string::~string((string *)&local_10);
    Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    operator|(2,4);
    std::string::string((string *)&local_10,"PvZ2Debug");
    nop();
    std::string::~string((string *)&local_10);
    nop();
    FUN_05474ff8(this + 0x78);
    std::string::~string((string *)&local_18);
  }
  else {
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x2930);
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    *piVar3 = *piVar3 + -1;
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    if (*piVar3 < 0) {
      this_01 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 *)(this + 0x2900);
      uVar9 = 0;
      local_18 = std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::find(this_01,param_1);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)this_01);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar2) {
        puVar8 = (uint *)std::
                         map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         ::operator[](this_01,param_1);
        uVar9 = (ulong)*puVar8;
      }
      uVar7 = FUN_0547429c(param_1);
      puVar8 = (uint *)std::
                       map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       ::operator[](this_00,param_1);
      Sexy::StrFormat("[Resources][ERROR] FinalizeGroupLoad on %s dropped preload refcount below 0!!! {preload refcount: %d, refcount %d}"
                      ,(string *)&local_10,uVar7,(ulong)*puVar8,uVar9);
      nop();
      std::string::~string((string *)&local_10);
    }
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    if (*piVar3 == 0) {
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      erase((string *)this_00);
    }
    std::operator+(param_1,"_Dynamic");
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_18);
    if (lVar4 != 0) {
      FinalizeGroupLoad(this,(string *)&local_18);
    }
    FUN_031f5e7c((string *)&local_10,"CFDLC_",param_1);
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_10);
    if (lVar4 != 0) {
      FinalizeGroupLoad(this,(string *)&local_10);
    }
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::FinalizeGroupLoads(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::FinalizeGroupLoads(LawnApp *this,vector *param_1)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_0325d79c(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)FUN_0325d7a8(uVar4,uVar3);
    FinalizeGroupLoad(this,psVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* LawnApp::FinishInitialLoad() */

void __thiscall LawnApp::FinishInitialLoad(LawnApp *this)

{
  FinalizeGroupLoads(this,(vector *)&DAT_06a9a7a0);
  GenerateFonts(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DeleteGroup(std::string const&) */

void __thiscall LawnApp::DeleteGroup(LawnApp *this,string *param_1)

{
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_00;
  undefined4 uVar1;
  char cVar2;
  ResourceGroup *this_01;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_10,"DeleteGroup");
  nop();
  std::string::~string((string *)&local_10);
  nop();
  if (this[0x3ad] == (LawnApp)0x0) {
    this_01 = (ResourceGroup *)
              Sexy::ResourceManager::GetResourceGroupNamed
                        (*(ResourceManager **)(this + 0x848),param_1);
    if (this_01 == (ResourceGroup *)0x0) {
      uVar6 = FUN_0547429c(param_1);
      Sexy::StrFormat("[Resources][ERROR] Failed to find resgroup: %s",(string *)&local_10,uVar6);
      nop();
      std::string::~string((string *)&local_10);
    }
    this_00 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               *)(this + 0x2900);
    local_18 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::find(this_00,param_1);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)
               std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::operator[](this_00,param_1);
      *puVar5 = 0;
    }
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    *piVar3 = *piVar3 + -1;
    piVar3 = (int *)std::
                    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    ::operator[](this_00,param_1);
    if (*piVar3 == 0) {
      uVar1 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
      FUN_05475d88((string *)&local_10,param_1);
      cVar2 = FUN_03263be0((string *)&local_10);
      std::string::~string((string *)&local_10);
      if (cVar2 != '\0') {
        *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = *(undefined4 *)(this + 0xd8);
      }
      if ((this_01 != (ResourceGroup *)0x0) &&
         (cVar2 = Sexy::ResourceGroup::Unload(this_01), cVar2 == '\0')) {
        uVar6 = FUN_0547429c(param_1);
        Sexy::StrFormat("[Resources][ERROR] DeleteGroup failed to ->Unload resgroup %s!",
                        (string *)&local_10,uVar6);
        nop();
        std::string::~string((string *)&local_10);
      }
      *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar1;
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      erase((string *)this_00);
    }
    else {
      piVar3 = (int *)std::
                      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                      ::operator[](this_00,param_1);
      if (*piVar3 < 0) {
        uVar6 = FUN_0547429c(param_1);
        puVar7 = (uint *)std::
                         map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                         ::operator[](this_00,param_1);
        uVar8 = FUN_0547429c(this + 0x78);
        Sexy::StrFormat("[%s] DeleteGroup, ref: %d more info: %s",(exception_ptr *)&local_18,uVar6,
                        (ulong)*puVar7,uVar8);
        Sexy::LazySingleton<DebugLog>::GetInstancePtr();
        operator|(2,4);
        std::string::string((string *)&local_10,"PvZ2Debug");
        nop();
        std::string::~string((string *)&local_10);
        nop();
        FUN_05474ff8(this + 0x78);
        std::
        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
        ::erase((string *)this_00);
        std::string::~string((string *)&local_18);
      }
    }
    std::operator+(param_1,"_Dynamic");
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_18);
    if (lVar4 != 0) {
      DeleteGroup(this,(string *)&local_18);
    }
    FUN_031f5e7c((string *)&local_10,"CFDLC_",param_1);
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),(string *)&local_10);
    if (lVar4 != 0) {
      DeleteGroup(this,(string *)&local_10);
    }
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::KillNewWorldDialog() */

void __thiscall LawnApp::KillNewWorldDialog(LawnApp *this)

{
  LawnApp *this_00;
  long *plVar1;
  undefined1 *__n;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = gLawnApp;
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_WorldPreview");
  DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::append((string *)(this + 0x3030),"",(size_t)__n);
  KillPVZ2Dialog(gLawnApp);
  plVar1 = *(long **)(this + 0x9f0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 800))(plVar1,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GotoNewWorld() */

void __thiscall LawnApp::GotoNewWorld(LawnApp *this)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,this + 0x3030);
  KillNewWorldDialog(this);
  bVar1 = std::operator!=(asStack_10,"");
  if (bVar1) {
    WorldMap::SwitchToGameLevel(*(WorldMap **)(this + 0x2de8),asStack_10,0,1);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::DeleteGroups(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall LawnApp::DeleteGroups(LawnApp *this,vector *param_1)

{
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)param_1;
    uVar2 = FUN_0325d79c(uVar4,*(undefined8 *)(param_1 + 8));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)FUN_0325d7a8(uVar4,uVar3);
    DeleteGroup(this,psVar1);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* LawnApp::DeleteAlwaysLoadedGroups() */

void __thiscall LawnApp::DeleteAlwaysLoadedGroups(LawnApp *this)

{
  DeleteGroups(this,(vector *)&DAT_06a9a7a0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GetGroupLoadProgress(std::string const&) */

void __thiscall LawnApp::GetGroupLoadProgress(LawnApp *this,string *param_1)

{
  undefined8 uVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_20,param_1);
  uVar1 = GetGroupLoadProgress(this,(vector *)avStack_20);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::IsGroupLoadComplete(std::string const&) */

void __thiscall LawnApp::IsGroupLoadComplete(LawnApp *this,string *param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  ResourceManager *this_00;
  long lVar4;
  float fVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = *(undefined4 *)(*(long *)(this + 0x848) + 0x208);
  FUN_05475d88(asStack_10);
  cVar2 = FUN_03263be0(asStack_10);
  std::string::~string(asStack_10);
  if (cVar2 != '\0') {
    *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = *(undefined4 *)(this + 0xd8);
  }
  cVar2 = Sexy::ResStreamsManager::IsGroupLoaded(*(ResStreamsManager **)(this + 0x908),param_1);
  if ((cVar2 == '\0') || (fVar5 = (float)GetGroupLoadProgress(this,param_1), fVar5 < 1.0)) {
LAB_0328e758:
    this_00 = *(ResourceManager **)(this + 0x848);
    *(undefined4 *)(this_00 + 0x208) = uVar1;
  }
  else {
    std::operator+(param_1,"_Dynamic");
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),asStack_18);
    if ((lVar4 != 0) &&
       ((cVar3 = Sexy::ResStreamsManager::IsGroupLoaded
                           (*(ResStreamsManager **)(this + 0x908),asStack_18), cVar3 == '\0' ||
        (fVar5 = (float)GetGroupLoadProgress(this,asStack_18), fVar5 < 1.0)))) {
LAB_0328e7f8:
      std::string::~string(asStack_18);
      goto LAB_0328e758;
    }
    FUN_031f5e7c(asStack_10,"CFDLC_",param_1);
    lVar4 = Sexy::ResourceManager::GetResourceGroupNamed
                      (*(ResourceManager **)(this + 0x848),asStack_10);
    if (lVar4 == 0) {
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      *(undefined4 *)(*(long *)(this + 0x848) + 0x208) = uVar1;
      goto LAB_0328e770;
    }
    cVar2 = Sexy::ResStreamsManager::IsGroupLoaded(*(ResStreamsManager **)(this + 0x908),asStack_10)
    ;
    if (cVar2 == '\0') {
      std::string::~string(asStack_10);
      goto LAB_0328e7f8;
    }
    fVar5 = (float)GetGroupLoadProgress(this,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    this_00 = *(ResourceManager **)(this + 0x848);
    *(undefined4 *)(this_00 + 0x208) = uVar1;
    if (1.0 <= fVar5) goto LAB_0328e770;
  }
  lVar4 = Sexy::ResourceManager::GetResourceGroupNamed(this_00,param_1);
  cVar2 = lVar4 == 0;
LAB_0328e770:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* LawnApp::IsGroupLoadComplete(std::vector<std::string, std::allocator<std::string > > const&) */

undefined1 __thiscall LawnApp::IsGroupLoadComplete(LawnApp *this,vector *param_1)

{
  char cVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)param_1;
    uVar3 = FUN_0325d79c(uVar5,*(undefined8 *)(param_1 + 8));
    if (uVar3 <= uVar4) {
      return 1;
    }
    psVar2 = (string *)FUN_0325d7a8(uVar5,uVar4);
    uVar4 = uVar4 + 1;
    cVar1 = IsGroupLoadComplete(this,psVar2);
  } while (cVar1 != '\0');
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::GatherGachaLogInfo(std::vector<GachaRewardUI*, std::allocator<GachaRewardUI*> >) */

void __thiscall LawnApp::GatherGachaLogInfo(LawnApp *this,undefined8 *param_2)

{
  vector<GachaGet,std::allocator<GachaGet>> *this_00;
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  string *psVar7;
  ulong uVar8;
  string asStack_48 [8];
  RtMixedPtrBase aRStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  PACommand aPStack_20 [8];
  undefined1 auStack_18 [8];
  undefined4 local_10;
  long local_8;
  
  this_00 = (vector<GachaGet,std::allocator<GachaGet>> *)(this + 0x28e0);
  local_8 = ___stack_chk_guard;
  std::vector<GachaGet,std::allocator<GachaGet>>::clear(this_00);
  for (uVar8 = 0; uVar4 = FUN_0325d76c(*param_2,param_2[1]), uVar8 < uVar4; uVar8 = uVar8 + 1) {
    GiftPlantAvatarData::GiftPlantAvatarData((GiftPlantAvatarData *)aPStack_20);
    plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
    bVar3 = std::operator==((string *)(*plVar5 + 0x10),"plant");
    if (bVar3) {
      std::string::string(asStack_38,"iOS PvZ2 Plant Store");
      psVar7 = asStack_48;
      std::string::string(asStack_30,"Plant Pieces");
      std::string::string(asStack_28,"plant");
      plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
      Magento::FindStoreProduct
                ((Magento *)asStack_38,asStack_30,asStack_28,(string *)(*plVar5 + 0x18),psVar7);
      std::string::~string(asStack_28);
      nop();
      std::string::~string(asStack_30);
      nop();
      std::string::~string(asStack_38);
      nop();
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_40);
      if (cVar2 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
        uVar1 = *(undefined4 *)(lVar6 + 0x90);
        plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
        thunk_FUN_05475e00(auStack_18,*plVar5 + 0x18);
        plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
        thunk_FUN_05475e00(aPStack_20,*plVar5 + 0x10);
        local_10 = uVar1;
        std::vector<GachaGet,std::allocator<GachaGet>>::push_back(this_00,(GachaGet *)aPStack_20);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    else {
      plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
      bVar3 = std::operator==((string *)(*plVar5 + 0x10),"plant_piece");
      if (!bVar3) {
        plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
        std::operator==((string *)(*plVar5 + 0x10),"avatar_piece");
      }
      plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
      thunk_FUN_05475e00(auStack_18,*plVar5 + 0x18);
      plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
      thunk_FUN_05475e00(aPStack_20,*plVar5 + 0x10);
      plVar5 = (long *)FUN_0325d778(*param_2,uVar8);
      local_10 = *(undefined4 *)(*plVar5 + 0x30);
      std::vector<GachaGet,std::allocator<GachaGet>>::push_back(this_00,(GachaGet *)aPStack_20);
    }
    Sexy::PACommand::~PACommand(aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::Init(LawnApp::InitReason, int) */

void __thiscall LawnApp::Init(LawnApp *this,int param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  LawnApp LVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  IdentifierMgr *pIVar11;
  AudioMgr *pAVar12;
  LevelChange *pLVar13;
  time_t tVar14;
  LuaUpdateMgr *this_00;
  WorldMapCamera *this_01;
  UIUpdateMgr *pUVar15;
  ProfileMgr *this_02;
  ObjectTypeDirectory<PlantType> *pOVar16;
  ObjectTypeDirectory<PowerPropertySheet> *pOVar17;
  ObjectTypeDirectory<ZombieType> *pOVar18;
  ObjectTypeDirectory<CreatureType> *pOVar19;
  ObjectTypeDirectory<GridItemType> *pOVar20;
  ObjectTypeDirectory<EffectObjectType> *pOVar21;
  ObjectTypeDirectory<CollectableType> *pOVar22;
  ObjectTypeDirectory<PresentType> *pOVar23;
  ObjectTypeDirectory<PresentTable> *pOVar24;
  ObjectTypeDirectory<PowerupType> *pOVar25;
  ObjectTypeDirectory<GameFeatureType> *pOVar26;
  ObjectTypeDirectory<ToolPacketProps> *pOVar27;
  ObjectTypeDirectory<TrainingType> *pOVar28;
  ObjectTypeDirectory<HotUIColor> *this_03;
  ObjectTypeDirectory<HotUIColorAlias> *this_04;
  ObjectTypeDirectory<LevelScoringRules> *pOVar29;
  ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *this_05;
  PVZDB *pPVar30;
  NetworkMgr *this_06;
  ServerTime *this_07;
  long lVar31;
  ObjectTypeDirectory<BonusType> *pOVar32;
  undefined8 uVar33;
  RtId *pRVar34;
  RtObject *this_08;
  GamePropertySheet *pGVar35;
  CrazyNPCManager *this_09;
  TransitionOverlayWidget *this_10;
  BusyAnimationManager *this_11;
  PostProcessOverlayWidget *this_12;
  string *psVar36;
  LogServer *this_13;
  WechatMgr *this_14;
  ViewContainerMgr *this_15;
  AchievementDriverMgr *this_16;
  ShareDriverMgr *this_17;
  TGALogMgr *pTVar37;
  MetricsCollector *this_18;
  Range_conflict *this_19;
  ResourceInfo *pRVar38;
  LevelUtils *this_20;
  SeedPacketUtils *this_21;
  time_t __time1;
  TextureInfo *pTVar39;
  uint extraout_w1;
  uint uVar40;
  uint extraout_w1_00;
  int extraout_w1_01;
  undefined8 *__n;
  ResourceManager *pRVar41;
  PACommand *this_22;
  float fVar42;
  double dVar43;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  RtId aRStack_240 [8];
  TGABagData aTStack_238 [8];
  TGABagData aTStack_230 [8];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  string local_1f8 [24];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  Delegate0 aDStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Android::Util::StartPNS(1);
  plVar10 = (long *)Sexy::IAntiHackDriver::CreateAntiHackDriver();
  if ((plVar10 == (long *)0x0) || (cVar3 = (**(code **)(*plVar10 + 0x10))(), cVar3 == '\0')) {
    InstallTracker::SetInstallDate();
    pIVar11 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    IdentifierMgr::Init(pIVar11);
    this[0x2f21] = (LawnApp)0x0;
    this[0x2f20] = (LawnApp)0x0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x2f00),(RtWeakPtr *)&local_198);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_198);
    *(undefined4 *)(this + 0x2968) = 0;
    bVar2 = param_2 == 0;
    *(undefined4 *)(this + 0x296c) = 0;
    if (bVar2) {
      this_18 = ::operator_new(0x280);
      MetricsCollector::MetricsCollector(this_18);
      *(MetricsCollector **)(this + 0x2ef8) = this_18;
      MetricsCollector::Init(this_18);
      tVar14 = time((time_t *)0x0);
      *(time_t *)(this + 0x3540) = tVar14;
      tVar14 = time((time_t *)0x0);
      uVar9 = operator|(0x10,8);
      FUN_05462470(aDStack_178,uVar9);
      thunk_FUN_05460424(auStack_168,tVar14);
      FUN_05462824((string *)&local_1c8,aDStack_178);
      uVar9 = Sexy::Rand(100);
      std::string::string((string *)&local_198,"");
      FUN_05462980(aDStack_178,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198);
      std::string::~string((string *)&local_198);
      nop();
      FUN_0546065c(auStack_168,uVar9);
      FUN_05462824((string *)&local_1b0,aDStack_178);
      FUN_031dcc6c((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198,
                   (string *)&local_1c8,(string *)&local_1b0);
      FUN_05474278(this + 0x3560,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198);
      std::string::~string((string *)&local_198);
      MessageRouter::Post((_func_void *)gMessageRouter);
      MessageRouter::Post((_func_void *)gMessageRouter);
      std::string::~string((string *)&local_1b0);
      std::string::~string((string *)&local_1c8);
      FUN_054617bc(aDStack_178);
      (**(code **)(*(long *)this + 0x188))(this);
      this[0x106] = (LawnApp)0x1;
      this[0x2998] = (LawnApp)0x0;
      this[0x2999] = (LawnApp)0x0;
      this[0x6f0] = (LawnApp)0x1;
      gResourceManager = *(undefined8 *)(this + 0x848);
      *(undefined4 *)(this + 0x5cc) = 0x42055556;
    }
    else {
      pAVar12 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::Term(pAVar12);
    }
    if (*(long *)(this + 0x2a20) != 0) {
      (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
      (**(code **)(*(long *)this + 0x150))(this,*(undefined8 *)(this + 0x2a20));
      *(undefined8 *)(this + 0x2a20) = 0;
    }
    if (*(long *)(this + 0x2e00) != 0) {
      (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
      if (*(long **)(this + 0x2e00) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x2e00) + 0x18))();
        *(undefined8 *)(this + 0x2e00) = 0;
      }
    }
    if (*(long *)(this + 0x2e08) != 0) {
      (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
      if (*(long **)(this + 0x2e08) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x2e08) + 0x18))();
        *(undefined8 *)(this + 0x2e08) = 0;
      }
    }
    if (*(long *)(this + 0x28d0) != 0) {
      (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
      if (*(long **)(this + 0x28d0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x28d0) + 0x18))();
        *(undefined8 *)(this + 0x28d0) = 0;
      }
    }
    if (*(long *)(this + 0x2ef0) != 0) {
      (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
      if (*(long **)(this + 0x2ef0) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x2ef0) + 0x18))();
        *(undefined8 *)(this + 0x2ef0) = 0;
      }
    }
    if (!bVar2) {
      std::string::string((string *)&local_198,"LoadingFonts");
      DeleteGroup(this,(string *)&local_198);
      std::string::~string((string *)&local_198);
      nop();
      std::string::string((string *)&local_198,"Packages");
      DeleteGroup(this,(string *)&local_198);
      std::string::~string((string *)&local_198);
      nop();
      WorldMapUtils::DestroyWorldData();
    }
    this_22 = *(PACommand **)(this + 0x3538);
    if (this_22 != (PACommand *)0x0) {
      Sexy::PACommand::~PACommand(this_22);
      AK::FreeHook(this_22);
      *(undefined8 *)(this + 0x3538) = 0;
    }
    cVar3 = '\0';
    std::string::string((string *)&local_198,"packages");
    GetFolder((string *)&local_1c8,3);
    std::operator+((string *)&local_1c8,"/hotpackagestorage");
    pLVar13 = ::operator_new(0x10);
    ProfileConversionResults::LevelChange::LevelChange
              (pLVar13,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198,
               (string *)&local_1b0);
    *(LevelChange **)(this + 0x3538) = pLVar13;
    std::string::~string((string *)&local_1b0);
    std::string::~string((string *)&local_1c8);
    std::string::~string((string *)&local_198);
    nop();
    gPackageProvider = *(PackageContentsProvider **)(this + 0x3538);
    PackageContentsProvider::ClearOverridePackageFolder(gPackageProvider);
    Sexy::ResourceManager::Clear(*(ResourceManager **)(this + 0x848));
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x2900));
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x2930));
    if (param_3 != 0) {
      cVar3 = SetWidthHeight(this,param_3);
    }
    iVar8 = *(int *)(this + 0xd8);
    cVar4 = DeviceNeeds50MBResolutionChange();
    if (cVar4 != '\0') {
      cVar3 = '\x01';
      SetWidthHeight(this,0x300);
    }
    SetWidthHeight(this,(int)(float)iVar8);
    cVar4 = ChenckStartShowProgressBar(this);
    if (bVar2) {
      pTVar39 = (TextureInfo *)Sexy::LazySingleton<Lua::CLuaEngine>::GetInstancePtr();
      EA::Text::GlyphCache_Memory::EndUpdate(pTVar39);
    }
    tVar14 = time((time_t *)0x0);
    if (cVar4 != '\0') {
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::Decompress,0);
    }
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"dynamic.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesDynamic.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,false);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    Android::Util::NotifyDecompressStage();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"init.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesInit.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    Android::Util::NotifyDecompressStage();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"uicommon.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesUICommon.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    Android::Util::NotifyDecompressStage();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"uiactive3.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesUIActive3.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    Android::Util::NotifyDecompressStage();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"uiactive.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesUIActive.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"egypt.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesEgypt.rton");
    Sexy::ResourceManager::Init
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"LuaAct.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesLuaAct.rton");
    Sexy::ResourceManager::InitForDecompressRsbFile
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    Android::Util::NotifyDecompressStage();
    fVar42 = *(float *)(this + 0x28dc);
    pRVar41 = *(ResourceManager **)(Sexy::gSexyAppBase + 0x848);
    std::string::string((string *)&local_1b0,"update.rsb");
    std::string::string((string *)&local_198,"properties\\resourcesUpdate.rton");
    Sexy::ResourceManager::InitForDecompressRsbFile
              (pRVar41,0x4b0,(int)fVar42,(string *)&local_1b0,(string *)&local_198,true);
    std::string::~string((string *)&local_198);
    nop();
    std::string::~string((string *)&local_1b0);
    nop();
    this_00 = (LuaUpdateMgr *)Sexy::LazySingleton<LuaUpdateMgr>::GetInstance();
    LuaUpdateMgr::Init(this_00);
    this_01 = (WorldMapCamera *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    WorldMapCamera::SetUseClipViewport(this_01,true);
    pUVar15 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    UIUpdateMgr::Init(pUVar15);
    pUVar15 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    UIUpdateMgr::LoadUIUpdateRSB(pUVar15);
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    cVar5 = ProfileMgr::IsSaveDataExist(this_02);
    LVar6 = (LawnApp)0x0;
    if (cVar5 != '\0') {
      LVar6 = this[0x929];
    }
    this[0x29a2] = LVar6;
    if (cVar4 != '\0') {
      __time1 = time((time_t *)0x0);
      dVar43 = difftime(__time1,tVar14);
      *(double *)(this + 0x3548) = dVar43;
      MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::Decompress,1);
    }
    tVar14 = time((time_t *)0x0);
    *(time_t *)(this + 0x3558) = tVar14;
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::GameLoad,0);
    ScaledApp::SetResolution((ScaledApp *)this,(int)*(float *)(this + 0x28dc));
    *(undefined4 *)(*(long *)(this + 0x848) + 0x20c) = 0;
    if ((cVar3 != '\0') && (plVar10 = (long *)GetTransitionOverlay(this), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x198))
                (plVar10,0,0,*(undefined4 *)(this + 0xd4),*(undefined4 *)(this + 0xd8));
    }
    if (!bVar2) {
      CachedResourcePtrBase::FlushAllCachedIds();
      this_21 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      SeedPacketUtils::InvalidateCachedPacketRenderData(this_21);
    }
    SetLocalizedLawnStringFile(this);
    Sexy::SexyAppBase::LoadProperties((SexyAppBase *)this);
    pOVar16 = (ObjectTypeDirectory<PlantType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::Clear(pOVar16);
    pOVar17 = (ObjectTypeDirectory<PowerPropertySheet> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::GetInstancePtr();
    ObjectTypeDirectory<PowerPropertySheet>::Clear(pOVar17);
    pOVar18 = (ObjectTypeDirectory<ZombieType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::Clear(pOVar18);
    pOVar19 = (ObjectTypeDirectory<CreatureType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
    ObjectTypeDirectory<CreatureType>::Clear(pOVar19);
    pOVar20 = (ObjectTypeDirectory<GridItemType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::Clear(pOVar20);
    pOVar21 = (ObjectTypeDirectory<EffectObjectType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
    ObjectTypeDirectory<EffectObjectType>::Clear(pOVar21);
    pOVar22 = (ObjectTypeDirectory<CollectableType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::Clear(pOVar22);
    pOVar23 = (ObjectTypeDirectory<PresentType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
    ObjectTypeDirectory<PresentType>::Clear(pOVar23);
    pOVar24 = (ObjectTypeDirectory<PresentTable> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::GetInstancePtr();
    ObjectTypeDirectory<PresentTable>::Clear(pOVar24);
    pOVar25 = (ObjectTypeDirectory<PowerupType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    ObjectTypeDirectory<PowerupType>::Clear(pOVar25);
    pOVar26 = (ObjectTypeDirectory<GameFeatureType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::GetInstancePtr();
    ObjectTypeDirectory<GameFeatureType>::Clear(pOVar26);
    pOVar27 = (ObjectTypeDirectory<ToolPacketProps> *)
              Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::GetInstancePtr();
    ObjectTypeDirectory<ToolPacketProps>::Clear(pOVar27);
    pOVar28 = (ObjectTypeDirectory<TrainingType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::Clear(pOVar28);
    this_03 = (ObjectTypeDirectory<HotUIColor> *)
              Sexy::LazySingleton<ObjectTypeDirectory<HotUIColor>>::GetInstancePtr();
    ObjectTypeDirectory<HotUIColor>::Clear(this_03);
    this_04 = (ObjectTypeDirectory<HotUIColorAlias> *)
              Sexy::LazySingleton<ObjectTypeDirectory<HotUIColorAlias>>::GetInstancePtr();
    ObjectTypeDirectory<HotUIColorAlias>::Clear(this_04);
    pOVar29 = (ObjectTypeDirectory<LevelScoringRules> *)
              Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::GetInstancePtr();
    ObjectTypeDirectory<LevelScoringRules>::Clear(pOVar29);
    this_05 = (ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>>::
              GetInstancePtr();
    ObjectTypeDirectory<PrimeText_PotentialTypeface_Alias>::Clear(this_05);
    pPVar30 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::ReleaseAllPackages(pPVar30);
    std::string::string((string *)&local_198,"LoadingFonts");
    LoadGroup(this,(string *)&local_198);
    std::string::~string((string *)&local_198);
    nop();
    std::string::string((string *)&local_198,"Packages");
    LoadGroup(this,(string *)&local_198);
    std::string::~string((string *)&local_198);
    nop();
    pPVar30 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::InitializeTables(pPVar30);
    pPVar30 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::LoadAllPackages(pPVar30);
    if (!bVar2) {
      this_20 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
      LevelUtils::InitializeMetaDataStore(this_20);
    }
    this_06 = (NetworkMgr *)NetworkMgr::Instance();
    NetworkMgr::Init(this_06);
    loadPlayerProfiles(this);
    this_07 = (ServerTime *)ServerTime::Instance();
    ServerTime::GetServerTimeFromNet(this_07,(CServerTimeHandler *)0x0,false);
    Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    Sexy::IAsyncNetworkTask::GetName();
    lVar31 = FUN_05474184((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                          &local_198);
    std::string::~string((string *)&local_198);
    if (lVar31 == 0) {
      pIVar11 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
      IdentifierMgr::TryIdentifierInit(pIVar11);
    }
    pOVar16 = (ObjectTypeDirectory<PlantType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::Init(pOVar16,6);
    pOVar17 = (ObjectTypeDirectory<PowerPropertySheet> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PowerPropertySheet>>::GetInstancePtr();
    ObjectTypeDirectory<PowerPropertySheet>::Init(pOVar17,8);
    pOVar18 = (ObjectTypeDirectory<ZombieType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::Init(pOVar18,9);
    pOVar19 = (ObjectTypeDirectory<CreatureType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
    ObjectTypeDirectory<CreatureType>::Init(pOVar19,0xb);
    pOVar20 = (ObjectTypeDirectory<GridItemType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::Init(pOVar20,0xd);
    pOVar21 = (ObjectTypeDirectory<EffectObjectType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<EffectObjectType>>::GetInstancePtr();
    ObjectTypeDirectory<EffectObjectType>::Init(pOVar21,0xe);
    pOVar22 = (ObjectTypeDirectory<CollectableType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::Init(pOVar22,0xf);
    pOVar23 = (ObjectTypeDirectory<PresentType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PresentType>>::GetInstancePtr();
    ObjectTypeDirectory<PresentType>::Init(pOVar23,0x11);
    pOVar24 = (ObjectTypeDirectory<PresentTable> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PresentTable>>::GetInstancePtr();
    ObjectTypeDirectory<PresentTable>::Init(pOVar24,0x10);
    pOVar25 = (ObjectTypeDirectory<PowerupType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PowerupType>>::GetInstancePtr();
    ObjectTypeDirectory<PowerupType>::Init(pOVar25,0x15);
    pOVar26 = (ObjectTypeDirectory<GameFeatureType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<GameFeatureType>>::GetInstancePtr();
    ObjectTypeDirectory<GameFeatureType>::Init(pOVar26,0x16);
    pOVar27 = (ObjectTypeDirectory<ToolPacketProps> *)
              Sexy::LazySingleton<ObjectTypeDirectory<ToolPacketProps>>::GetInstancePtr();
    ObjectTypeDirectory<ToolPacketProps>::Init(pOVar27,0x17);
    pOVar32 = (ObjectTypeDirectory<BonusType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<BonusType>>::GetInstancePtr();
    ObjectTypeDirectory<BonusType>::Init(pOVar32,0x18);
    pOVar28 = (ObjectTypeDirectory<TrainingType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    ObjectTypeDirectory<TrainingType>::Init(pOVar28,0x5d);
    pOVar29 = (ObjectTypeDirectory<LevelScoringRules> *)
              Sexy::LazySingleton<ObjectTypeDirectory<LevelScoringRules>>::GetInstancePtr();
    ObjectTypeDirectory<LevelScoringRules>::Init(pOVar29,0x95);
    LocalProfileSaveData::LoadLocalProfileSaveData();
    BonusType::ResetBonusNumSign();
    Magento::InitMagentoDataSign();
    iVar8 = *(int *)(gLawnApp + 0xd8);
    if (iVar8 == 0x600) {
      uVar33 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198,uVar33
                 ,0x12);
      while (bVar7 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_198), bVar7
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_198);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_1b0,(RtWeakPtrBase *)&local_1c8);
        pRVar38 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_1b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0)
        ;
        Sexy::RtId::~RtId((RtId *)&local_1c8);
        iVar8 = (uint)*(ushort *)(pRVar38 + 0x30) << 1;
        *(short *)(pRVar38 + 0x30) = (short)iVar8;
        *(short *)(pRVar38 + 0x32) = *(short *)(pRVar38 + 0x32) << 1;
        if (pRVar38[0x68] == (ResourceInfo)0x0) {
          Sexy::SexyVector2::operator*=((SexyVector2 *)(pRVar38 + 0x60),2.0);
          iVar8 = extraout_w1_01;
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_198,iVar8);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_198);
      iVar8 = *(int *)(gLawnApp + 0xd8);
    }
    if ((iVar8 - 0x140U & 0xffffffbf) == 0) {
      uVar33 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198,uVar33
                 ,0x12);
      while (bVar7 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)&local_198), bVar7
            ) {
        Sexy::RtDbTable::Iterator::operator*((Iterator *)&local_198);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_1b0,(RtWeakPtrBase *)&local_1c8);
        pRVar38 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_1b0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1b0)
        ;
        Sexy::RtId::~RtId((RtId *)&local_1c8);
        *(ushort *)(pRVar38 + 0x30) = *(ushort *)(pRVar38 + 0x30) >> 1;
        uVar40 = (uint)(*(ushort *)(pRVar38 + 0x32) >> 1);
        *(ushort *)(pRVar38 + 0x32) = *(ushort *)(pRVar38 + 0x32) >> 1;
        if (pRVar38[0x68] == (ResourceInfo)0x0) {
          Sexy::SexyVector2::operator/=((SexyVector2 *)(pRVar38 + 0x60),2.0);
          uVar40 = extraout_w1_00;
        }
        Sexy::RtDbTable::Iterator::operator++((Iterator *)&local_198,uVar40);
      }
      Sexy::RtDbTable::Iterator::~Iterator((Iterator *)&local_198);
    }
    uVar33 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::RtName::RtName((RtName *)&local_198,L"DefaultGameProps");
    PVZDB::GetIdByAlias(aRStack_240,uVar33,5,
                        (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198
                       );
    Sexy::RtName::~RtName((RtName *)&local_198);
    pRVar34 = (RtId *)Sexy::RtDb::GetDb();
    this_08 = (RtObject *)Sexy::RtDb::GetObjectForId(pRVar34);
    pGVar35 = Sexy::RtObject::Cast<GamePropertySheet>(this_08);
    pOVar16 = (ObjectTypeDirectory<PlantType> *)
              Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::SortTypes(pOVar16,(vector *)(pGVar35 + 0x10));
    if (bVar2) {
      Sexy::SexyApp::Init((SexyApp *)this);
      GameStateMgr::Initialize((GameStateMgr *)(this + 0x9f8),1);
    }
    else {
      nop();
    }
    nop();
    pAVar12 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::Init(pAVar12);
    this_09 = ::operator_new(0x290);
    CrazyNPCManager::CrazyNPCManager(this_09);
    *(CrazyNPCManager **)(this + 0x2e00) = this_09;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    this_10 = ::operator_new(0x100);
    TransitionOverlayWidget::TransitionOverlayWidget(this_10);
    *(TransitionOverlayWidget **)(this + 0x2e08) = this_10;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    this_11 = ::operator_new(0x138);
    BusyAnimationManager::BusyAnimationManager(this_11);
    *(BusyAnimationManager **)(this + 0x28d0) = this_11;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    this_12 = ::operator_new(0xf8);
    PostProcessOverlayWidget::PostProcessOverlayWidget(this_12);
    *(PostProcessOverlayWidget **)(this + 0x2ef0) = this_12;
    (**(code **)(**(long **)(this + 0x360) + 0x60))(*(long **)(this + 0x360));
    PushOverlaysToTop(this);
    if (bVar2) {
      (**(code **)(*(long *)this + 0x200))(*(undefined8 *)(this + 0xe8),this);
      (**(code **)(*(long *)this + 0x1f8))(*(undefined8 *)(this + 0xe0),this);
      this_19 = ::operator_new(0x10);
      SexyURL::Range::clear(this_19);
      *(Range_conflict **)(this + 0x2f28) = this_19;
      puVar1 = gMessageRouter;
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onGameCenterAuthenticationChanged);
      local_270 = local_228;
      uStack_268 = uStack_220;
      local_260 = local_218;
      MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
                ((MessageRouter *)puVar1,Message::GameCenterAuthenticationChanged,&local_270);
      Achievement::Init(*(GameCenterProxy **)(this + 0x2f28));
      Leaderboard::Init(*(GameCenterProxy **)(this + 0x2f28));
      nop();
      SetUsageSharingSystemStates(this);
    }
    psVar36 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string((string *)&local_198,"FakePurchaseLoop");
    CheatManager::SetToggleValue
              (psVar36,SUB81((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_198,0));
    std::string::~string((string *)&local_198);
    nop();
    this_13 = (LogServer *)LogServer::Instance();
    LogServer::updateLogServerAddress(this_13);
    Android::UI::FinishShowProgressBar();
    PVZVersionNetworkManager::CheckVersionFiles();
    RedPacketRewardInfo::InitDate((RedPacketRewardInfo *)(this + 0x3070));
    PlantTrialConfig::InitTableDate((PlantTrialConfig *)(this + 0x30e0));
    ConsumptionRewardInfo::InitDate((ConsumptionRewardInfo *)(this + 0x3208));
    DailyAchievementInfo::InitDate((DailyAchievementInfo *)(this + 0x3240));
    LevelOfTheDayConfigInfo::InitDate((LevelOfTheDayConfigInfo *)(this + 0x3390));
    NationalDayRewardConfigInfo::InitDate((NationalDayRewardConfigInfo *)(this + 0x33b0));
    RebateRewardConfig::InitDate((RebateRewardConfig *)(this + 0x33d0));
    RechargeRewardConfig::Init((RechargeRewardConfig *)(this + 0x3190));
    PlantAdventureConfig::Refresh((PlantAdventureConfig *)(this + 0x3480));
    StarConvertConfig::Refresh((StarConvertConfig *)(this + 0x3410));
    LostNetActivityConfig::Refresh((LostNetActivityConfig *)(this + 0x3438));
    OfferBundleConfig::Refresh((OfferBundleConfig *)(this + 0x35b0));
    WorldCupConfig::Refresh((WorldCupConfig *)(this + 0x34d0));
    JoustPlantPowerConfig::Refresh((JoustPlantPowerConfig *)(this + 0x34f8));
    *(undefined4 *)(this + 0x34c8) = 0xffffffff;
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onProfileSummarySelectResult);
    local_290 = local_210;
    uStack_288 = uStack_208;
    local_280 = local_200;
    MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(int)>>
              ((MessageRouter *)puVar1,Message::ProfileSummarySelectResult,&local_290);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSyncProfileSummaryFinish);
    MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::SyncProfileSummaryFinish,&local_270);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onLoginiCloudServerFinish);
    local_270 = local_1e0;
    uStack_268 = uStack_1d8;
    local_260 = local_1d0;
    MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::LoginiCloudServerFinish,&local_270);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSyncProfileToServer);
    local_270 = local_1c8;
    uStack_268 = uStack_1c0;
    local_260 = local_1b8;
    MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::SyncProfileToServerFinish,&local_270);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSyncProfileFromServer);
    local_270 = local_1b0;
    uStack_268 = uStack_1a8;
    local_260 = local_1a0;
    MessageRouter::Subscribe<bool,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(bool)>>
              ((MessageRouter *)puVar1,Message::SyncProfileFromServerFinish,&local_270);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEASquaredAdvertisementsWillOpen);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              (aDStack_178,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::EASquaredAdvertisementsWillOpen,aDStack_178);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEASquaredAdvertisementsClosed);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              (aDStack_178,
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_198);
    MessageRouter::Subscribe
              ((MessageRouter *)puVar1,Message::EASquaredAdvertisementsClosed,aDStack_178);
    puVar1 = gMessageRouter;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onEASquaredFlowEnded);
    __n = &local_2b0;
    local_2a0 = local_188;
    local_2b0 = local_198;
    uStack_2a8 = uStack_190;
    MessageRouter::
    Subscribe<std::string_const&,int,int,Sexy::CBMemberTranslatorX<LawnApp,void(LawnApp::*)(std::string_const&,int,int)>>
              ((MessageRouter *)puVar1,Message::EASquaredFlowEnded);
    ResetDatas();
    this_14 = (WechatMgr *)Sexy::LazySingleton<WechatMgr>::GetInstance();
    WechatMgr::InitializeSDK(this_14);
    this_15 = (ViewContainerMgr *)Sexy::LazySingleton<ViewContainerMgr>::GetInstance();
    ViewContainerMgr::InitializeSDK(this_15);
    this_16 = (AchievementDriverMgr *)Sexy::LazySingleton<AchievementDriverMgr>::GetInstance();
    AchievementDriverMgr::InitializeSDK(this_16);
    this_17 = (ShareDriverMgr *)Sexy::LazySingleton<ShareDriverMgr>::GetInstance();
    ShareDriverMgr::InitializeSDK(this_17);
    TGABagData::TGABagData(aTStack_238);
    std::string::append((string *)aTStack_238,"6",(size_t)__n);
    pTVar37 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGABagData::TGABagData(aTStack_230,aTStack_238);
    TGALogMgr::LogAppLaunch(pTVar37,aTStack_230);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_230);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_238);
    Sexy::RtId::~RtId(aRStack_240);
  }
  else {
    std::string::string((string *)&local_210,"5rip6aao5o-Q56S6");
    nop();
    std::string::string(local_1f8,
                        "55uX54mI5ri45oiP6ZqP5pe25Y-v6IO95Lya5bSp5rqD77yM6K-35L2_55So5q2j54mI5ri45oiP"
                       );
    nop();
    std::string::string((string *)&local_1e0,"56Gu5a6a");
    nop();
    base64_decode_url_safe((string *)&local_210);
    base64_decode_url_safe(local_1f8);
    base64_decode_url_safe((string *)&local_1e0);
    Android::UI::ShowAlertDialog((string *)&local_1c8,(string *)&local_1b0,(string *)&local_198,1);
    std::string::~string((string *)&local_198);
    std::string::~string((string *)&local_1b0);
    std::string::~string((string *)&local_1c8);
    Sexy::SexySleep((Sexy *)0x1388,extraout_w1);
    Android::Device::ExitApp();
    std::string::~string((string *)&local_1e0);
    std::string::~string(local_1f8);
    std::string::~string((string *)&local_210);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::LaunchNewVersionUrl() */

void LawnApp::LaunchNewVersionUrl(void)

{
  bool bVar1;
  Version *in_x0;
  bool *in_x2;
  string asStack_108 [8];
  wstring awStack_100 [8];
  Sexy aSStack_f8 [8];
  PVZVersion aPStack_f0 [80];
  string asStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Version::LoadedRSB(in_x0);
  Sexy::ToWString(asStack_a0);
  TodStringTranslate(awStack_100);
  Sexy::WStringToString(aSStack_f8,(wstring *)0x0,in_x2);
  FUN_05476c50(aSStack_f8);
  FUN_05476c50(awStack_100);
  bVar1 = std::operator==(asStack_108,"");
  if (bVar1) {
    std::string::~string(asStack_108);
    PVZVersion::~PVZVersion(aPStack_f0);
  }
  else {
    (**(code **)(*(long *)in_x0 + 0x168))();
    std::string::~string(asStack_108);
    PVZVersion::~PVZVersion(aPStack_f0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RefreshTransGenosisUI() */

void __thiscall LawnApp::RefreshTransGenosisUI(LawnApp *this)

{
  char cVar1;
  int iVar2;
  TransGenosisUI *pTVar3;
  TGConfig aTStack_148 [96];
  TGConfig aTStack_e8 [96];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2cb0) != 0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_0325d72c(local_80);
    if (cVar1 != '\0') {
      TGConfig::TGConfig(aTStack_148);
      cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aTStack_148);
      if (cVar1 == '\0') {
        KillTransGenosisUI(this);
      }
      else {
        pTVar3 = *(TransGenosisUI **)(this + 0x2cb0);
        TGConfig::TGConfig(aTStack_e8,aTStack_148);
        TransGenosisUI::SetConfig(pTVar3,aTStack_e8);
        TGConfig::~TGConfig(aTStack_e8);
      }
      TGConfig::~TGConfig(aTStack_148);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RefreshGeilivableLottery() */

void __thiscall LawnApp::RefreshGeilivableLottery(LawnApp *this)

{
  char cVar1;
  int iVar2;
  StoneLottery *pSVar3;
  string asStack_110 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_108 [48];
  GeilivableLotteryConfig aGStack_d8 [8];
  int local_d0;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2c98) != 0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_0325d72c(local_80);
    if (cVar1 != '\0') {
      GeilivableLotteryConfig::GeilivableLotteryConfig(aGStack_d8);
      cVar1 = IsChannelWithBigDeal();
      if (((cVar1 == '\0') ||
          (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aGStack_d8), cVar1 == '\0'))
         || (iVar2 = FUN_0325d788(local_a0,local_98), local_70 <= (iVar2 < 1))) {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_108);
        GeilivableLottery::OnNotifyRefresh(SUB81(*(undefined8 *)(this + 0x2c98),0),(set *)0x0);
        std::set<int,std::less<int>,std::allocator<int>>::~set
                  ((set<int,std::less<int>,std::allocator<int>> *)amStack_108);
      }
      else {
        pSVar3 = *(StoneLottery **)(this + 0x2c98);
        FUN_05475d88(asStack_110,auStack_b0);
        FUN_05475d88((string *)amStack_108,auStack_a8);
        StoneLottery::SetDeliveryInfo(pSVar3,asStack_110,(string *)amStack_108);
        std::string::~string((string *)amStack_108);
        std::string::~string(asStack_110);
        StoneLottery::SetPrizeWinOrNot(*(StoneLottery **)(this + 0x2c98),0 < local_c0);
        GeilivableLottery::SetInitInfo
                  (*(GeilivableLottery **)(this + 0x2c98),local_d0,0,0,0,local_bc);
        GeilivableLottery::SetBonusList(*(GeilivableLottery **)(this + 0x2c98),(vector *)&local_a0);
        FUN_0325d750(*(long *)(this + 0x2c98) + 0x2fc,local_b8);
      }
      GeilivableLotteryConfig::~GeilivableLotteryConfig(aGStack_d8);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RefreshStoneLottery() */

void __thiscall LawnApp::RefreshStoneLottery(LawnApp *this)

{
  char cVar1;
  int iVar2;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_f8 [48];
  StoneLotteryConfig aSStack_c8 [8];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  bool local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  byte local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x2ca0) != 0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_0325d72c(local_80);
    if (cVar1 != '\0') {
      StoneLotteryConfig::StoneLotteryConfig(aSStack_c8);
      cVar1 = IsChannelWithBigDeal();
      if (((cVar1 == '\0') ||
          (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aSStack_c8), cVar1 == '\0'))
         || (iVar2 = FUN_0325d788(local_a8,local_a0), local_70 <= (iVar2 < 1))) {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_f8);
        (**(code **)(**(long **)(this + 0x2ca0) + 0x340))(*(long **)(this + 0x2ca0),0,amStack_f8);
        std::set<int,std::less<int>,std::allocator<int>>::~set
                  ((set<int,std::less<int>,std::allocator<int>> *)amStack_f8);
      }
      else {
        StoneLottery::SetInitInfo
                  (*(StoneLottery **)(this + 0x2ca0),local_c0,local_bc,local_b8,local_b4,local_b0);
        StoneLottery::SetBonusList(*(StoneLottery **)(this + 0x2ca0),(vector *)&local_a8);
      }
      StoneLotteryConfig::~StoneLotteryConfig(aSStack_c8);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::RefreshSalesInfo() */

void LawnApp::RefreshSalesInfo(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined4 *puVar7;
  undefined8 local_150;
  undefined8 local_148;
  ActiveSalesConfig aAStack_140 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_138 [24];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_120 [24];
  ServerSalesInfo SStack_108;
  char local_107;
  undefined1 auStack_100 [8];
  vector<SalesObject,std::allocator<SalesObject>> avStack_f8 [24];
  vector<SalesPriceList,std::allocator<SalesPriceList>> avStack_e0 [24];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  undefined1 auStack_78 [8];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar6);
  cVar4 = FUN_0325d72c(local_80);
  if (cVar4 != '\0') {
    ActiveSalesConfig::ActiveSalesConfig(aAStack_140);
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar4 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aAStack_140);
    if ((this_00 == (PlayerInfo *)0x0) || (cVar4 == '\0')) {
      ActiveSalesConfig::~ActiveSalesConfig(aAStack_140);
    }
    else {
      FUN_0325d69c(this_00 + 0x350,0);
      PlayerInfo::SetActiveServerConfigValid(this_00,true);
      ServerSalesInfo::ServerSalesInfo(&SStack_108);
      SStack_108 = (ServerSalesInfo)0x1;
      thunk_FUN_05475e00(auStack_100,auStack_78);
      local_107 = local_70;
      if (local_70 != '\0') {
        local_150 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(avStack_138);
        local_148 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_138);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_150,(__normal_iterator *)&local_148),
              bVar5) {
          puVar7 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
          uVar1 = *puVar7;
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          ActiveSalesObject::ActiveSalesObject((ActiveSalesObject *)&local_c8);
          local_c8 = uVar1;
          local_c4 = uVar2;
          local_c0 = uVar3;
          std::vector<SalesObject,std::allocator<SalesObject>>::push_back
                    (avStack_f8,(SalesObject *)&local_c8);
          __gnu_cxx::
          __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
          ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                        *)&local_150);
        }
        local_150 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin(avStack_120);
        local_148 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(avStack_120);
        while (bVar5 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_150,(__normal_iterator *)&local_148),
              bVar5) {
          puVar7 = (undefined4 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_150);
          local_c4 = puVar7[1];
          local_c8 = *puVar7;
          std::vector<SalesPriceList,std::allocator<SalesPriceList>>::push_back
                    (avStack_e0,(SalesPriceList *)&local_c8);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_150);
        }
      }
      ServerSalesInfo::ServerSalesInfo((ServerSalesInfo *)&local_c8,&SStack_108);
      PlayerInfo::SetServerSalesInfo(this_00,(ServerSalesInfo *)&local_c8);
      ServerSalesInfo::~ServerSalesInfo((ServerSalesInfo *)&local_c8);
      PlayerInfo::RefreshLocalSalesConfig(this_00,false);
      FUN_0325d69c(this_00 + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this_00);
      ServerSalesInfo::~ServerSalesInfo(&SStack_108);
      ActiveSalesConfig::~ActiveSalesConfig(aAStack_140);
    }
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* LawnApp::~LawnApp() */

void __thiscall LawnApp::~LawnApp(LawnApp *this)

{
  ProfileMgr *this_00;
  AudioMgr *this_01;
  long lVar1;
  NetworkMgr *this_02;
  
  *(undefined ***)(this + 8) = &PTR_DialogButtonPress_06610ba8;
  *(undefined ***)this = &PTR_nop_06610700;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long *)(this + 0x9f0) != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::Save(this_00,false,false);
  }
  if (*(MetricsCollector **)(this + 0x2ef8) != (MetricsCollector *)0x0) {
    MetricsCollector::Term(*(MetricsCollector **)(this + 0x2ef8));
    if (*(long **)(this + 0x2ef8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2ef8) + 8))();
      *(undefined8 *)(this + 0x2ef8) = 0;
    }
  }
  this_01 = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::Term(this_01);
  if (*(Board **)(this + 0x9f0) != (Board *)0x0) {
    Board::EndLevel(*(Board **)(this + 0x9f0));
    (**(code **)(**(long **)(this + 0x360) + 0x68))
              (*(long **)(this + 0x360),*(undefined8 *)(this + 0x9f0));
    if (*(long **)(this + 0x9f0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x9f0) + 0x18))();
      *(undefined8 *)(this + 0x9f0) = 0;
    }
  }
  if (*(long *)(this + 0x2a20) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2a20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2a20) + 0x18))();
      *(undefined8 *)(this + 0x2a20) = 0;
    }
  }
  if (*(long *)(this + 0x2e08) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2e08) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2e08) + 0x18))();
      *(undefined8 *)(this + 0x2e08) = 0;
    }
  }
  if (*(long *)(this + 0x28d0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x28d0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28d0) + 0x18))();
      *(undefined8 *)(this + 0x28d0) = 0;
    }
  }
  if (*(long *)(this + 0x2a28) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2a28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2a28) + 0x18))();
      *(undefined8 *)(this + 0x2a28) = 0;
    }
  }
  if (*(long *)(this + 0x2a30) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2a30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2a30) + 0x18))();
      *(undefined8 *)(this + 0x2a30) = 0;
    }
  }
  if (*(long *)(this + 0x2e00) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2e00) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2e00) + 0x18))();
      *(undefined8 *)(this + 0x2e00) = 0;
    }
  }
  if (*(long *)(this + 0x2ef0) != 0) {
    (**(code **)(**(long **)(this + 0x360) + 0x68))(*(long **)(this + 0x360));
    if (*(long **)(this + 0x2ef0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x2ef0) + 0x18))();
      *(undefined8 *)(this + 0x2ef0) = 0;
    }
  }
  lVar1 = NetworkMgr::Instance();
  if ((lVar1 != 0) && (this_02 = (NetworkMgr *)NetworkMgr::Instance(), this_02 != (NetworkMgr *)0x0)
     ) {
    NetworkMgr::~NetworkMgr(this_02);
    AK::FreeHook(this_02);
  }
  Sexy::SexyAppBase::ProcessSafeDeleteList((SexyAppBase *)this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3688));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x3670));
  std::string::~string((string *)(this + 0x3660));
  OfferBundleConfig::~OfferBundleConfig((OfferBundleConfig *)(this + 0x35b0));
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)(this + 0x3588));
  std::string::~string((string *)(this + 0x3560));
  JoustPlantPowerConfig::~JoustPlantPowerConfig((JoustPlantPowerConfig *)(this + 0x34f8));
  WorldCupConfig::~WorldCupConfig((WorldCupConfig *)(this + 0x34d0));
  PlantAdventureConfig::~PlantAdventureConfig((PlantAdventureConfig *)(this + 0x3480));
  LostNetActivityConfig::~LostNetActivityConfig((LostNetActivityConfig *)(this + 0x3438));
  StarConvertConfig::~StarConvertConfig((StarConvertConfig *)(this + 0x3410));
  RebateRewardConfig::~RebateRewardConfig((RebateRewardConfig *)(this + 0x33d0));
  NationalDayRewardConfigInfo::~NationalDayRewardConfigInfo
            ((NationalDayRewardConfigInfo *)(this + 0x33b0));
  LevelOfTheDayConfigInfo::~LevelOfTheDayConfigInfo((LevelOfTheDayConfigInfo *)(this + 0x3390));
  DailyAchievementInfo::~DailyAchievementInfo((DailyAchievementInfo *)(this + 0x3240));
  ConsumptionRewardInfo::~ConsumptionRewardInfo((ConsumptionRewardInfo *)(this + 0x3208));
  RechargeRewardConfig::~RechargeRewardConfig((RechargeRewardConfig *)(this + 0x3190));
  PlantTrialConfig::~PlantTrialConfig((PlantTrialConfig *)(this + 0x30e0));
  RedPacketRewardInfo::~RedPacketRewardInfo((RedPacketRewardInfo *)(this + 0x3070));
  std::string::~string((string *)(this + 0x3030));
  std::string::~string((string *)(this + 0x2fa0));
  std::string::~string((string *)(this + 0x2f98));
  std::string::~string((string *)(this + 0x2f70));
  std::string::~string((string *)(this + 0x2f68));
  std::string::~string((string *)(this + 0x2f58));
  std::string::~string((string *)(this + 0x2f50));
  std::string::~string((string *)(this + 0x2f48));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2f08));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x2f00));
  PVZVersionNetworkManager::~PVZVersionNetworkManager((PVZVersionNetworkManager *)(this + 0x2eb0));
  std::string::~string((string *)(this + 0x2d40));
  std::map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>>::~map
            ((map<int,HintUI*,std::less<int>,std::allocator<std::pair<int_const,HintUI*>>> *)
             (this + 0x2ce8));
  PVZCachedNetworkTableManager::~PVZCachedNetworkTableManager
            ((PVZCachedNetworkTableManager *)(this + 0x29a8));
  std::string::~string((string *)(this + 0x2978));
  std::string::~string((string *)(this + 0x2970));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x2930));
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x2900));
  std::vector<GachaGet,std::allocator<GachaGet>>::~vector
            ((vector<GachaGet,std::allocator<GachaGet>> *)(this + 0x28e0));
  GameStateMgr::~GameStateMgr((GameStateMgr *)(this + 0x9f8));
  ScaledApp::~ScaledApp((ScaledApp *)this);
  return;
}


/* LawnApp::~LawnApp() */

void __thiscall LawnApp::~LawnApp(LawnApp *this)

{
  ~LawnApp(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::DrawScreen() */

void __thiscall LawnApp::DrawScreen(LawnApp *this)

{
  TutorialEffectMgr *this_00;
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyAppBase::DrawScreen((SexyAppBase *)this);
  Sexy::Graphics::Graphics(aGStack_d0,*(Image **)(*(long *)(this + 0x360) + 0x88));
  GameStateMgr::Draw((GameStateMgr *)(this + 0x9f8),aGStack_d0);
  this_00 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  TutorialEffectMgr::Draw(this_00,aGStack_d0);
  Sexy::Graphics::~Graphics(aGStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LawnApp::OnLuaNotify(std::string const&) */

void __thiscall LawnApp::OnLuaNotify(LawnApp *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  DangerRoomManager *this_00;
  long lVar4;
  UniverseMap *this_01;
  ProfileMgr *this_02;
  Value *this_03;
  char *pcVar5;
  char *__nptr;
  char *__nptr_00;
  AdsRewardUI *this_04;
  string asStack_88 [8];
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"OpenTrainingRoom");
  if (bVar1) {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::SetMainDialogVisible(this_00,false);
    lVar4 = GetWorldMap(this);
    this_01 = (UniverseMap *)FUN_0325d71c(*(undefined8 *)(lVar4 + 0x2b0));
    UniverseMap::TransitionToUniverse(this_01,true);
  }
  else {
    bVar1 = std::operator!=(param_1,"OpenUI");
    if (!bVar1) {
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      lVar4 = ProfileMgr::GetCurrentProfile(this_02);
      if (lVar4 != 0) {
        PlayerInfo::GetLuaShareJson();
        this_03 = (Value *)Sexy::StructuredData::ObjectForPath(aSStack_80,"$.OpenUI");
        if ((((this_03 != (Value *)0x0) &&
             (pcVar5 = (char *)Sexy::StructuredData::Value::StringForName
                                         (this_03,"UiType",(char *)0x0), pcVar5 != (char *)0x0)) &&
            (__nptr = (char *)Sexy::StructuredData::Value::StringForName
                                        (this_03,"Param1",(char *)0x0), __nptr != (char *)0x0)) &&
           (__nptr_00 = (char *)Sexy::StructuredData::Value::StringForName
                                          (this_03,"Param2",(char *)0x0), __nptr_00 != (char *)0x0))
        {
          std::string::string(asStack_88,"AdsRewardUI");
          bVar1 = std::operator==(pcVar5,asStack_88);
          std::string::~string(asStack_88);
          nop();
          if ((bVar1) &&
             (this_04 = (AdsRewardUI *)UISingletonDialog<AdsRewardUI>::ShowDialog(),
             this_04 != (AdsRewardUI *)0x0)) {
            iVar2 = atoi(__nptr);
            iVar3 = atoi(__nptr_00);
            AdsRewardUI::setReward(this_04,iVar2,iVar3);
            AdsRewardUI::setTitleShow(this_04,false);
          }
        }
        Sexy::StructuredData::~StructuredData(aSStack_80);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LawnApp::GetBoardZombieAlmanacUI() */

undefined8 __thiscall LawnApp::GetBoardZombieAlmanacUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e98);
}


/* LawnApp::GetAdsMapLimit() */

undefined8 LawnApp::GetAdsMapLimit(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LawnApp::IsInModule(ModuleInfo) */

bool __thiscall LawnApp::IsInModule(LawnApp *this,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = operator&(param_2,*(undefined4 *)(this + 0x29fc));
  return iVar1 != 0;
}


/* LawnApp::GetNarrationSystem() */

undefined8 __thiscall LawnApp::GetNarrationSystem(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e00);
}


/* LawnApp::SetLastCompletedLevel(std::string const&) */

void LawnApp::SetLastCompletedLevel(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x2f98);
  return;
}


/* LawnApp::IsPauseMenuOpen() */

bool __thiscall LawnApp::IsPauseMenuOpen(LawnApp *this)

{
  return *(long *)(this + 0x2e28) != 0;
}


/* LawnApp::GetPlantTrialConfig() */

LawnApp * __thiscall LawnApp::GetPlantTrialConfig(LawnApp *this)

{
  return this + 0x30e0;
}


/* LawnApp::GetPlantAdventureConfig() */

LawnApp * __thiscall LawnApp::GetPlantAdventureConfig(LawnApp *this)

{
  return this + 0x3480;
}


/* LawnApp::GetPlantTrialView() */

undefined8 __thiscall LawnApp::GetPlantTrialView(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2b00);
}


/* LawnApp::getRedPackUI() */

undefined8 __thiscall LawnApp::getRedPackUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2a80);
}


/* LawnApp::getPlantSpecialOfferUI() */

undefined8 __thiscall LawnApp::getPlantSpecialOfferUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c60);
}


/* LawnApp::HasSpecialGemOffer() */

LawnApp __thiscall LawnApp::HasSpecialGemOffer(LawnApp *this)

{
  return this[0x35a9];
}


/* LawnApp::GetRechargeRewardConfigInfo() */

LawnApp * __thiscall LawnApp::GetRechargeRewardConfigInfo(LawnApp *this)

{
  return this + 0x3190;
}


/* LawnApp::GetStarConvertConfig() */

LawnApp * __thiscall LawnApp::GetStarConvertConfig(LawnApp *this)

{
  return this + 0x3410;
}


/* LawnApp::GetOfferBundleConfig() */

LawnApp * __thiscall LawnApp::GetOfferBundleConfig(LawnApp *this)

{
  return this + 0x35b0;
}


/* LawnApp::SetSpecialGemOffer(bool) */

void __thiscall LawnApp::SetSpecialGemOffer(LawnApp *this,bool param_1)

{
  this[0x35a9] = (LawnApp)param_1;
  return;
}


/* LawnApp::GetGameMaskUI() */

undefined8 __thiscall LawnApp::GetGameMaskUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2b08);
}


/* LawnApp::GetCustomLevelEvaluationParam() */

undefined4 __thiscall LawnApp::GetCustomLevelEvaluationParam(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f78);
}


/* LawnApp::IsActivityCollectionValid() */

bool __thiscall LawnApp::IsActivityCollectionValid(LawnApp *this)

{
  return *(long *)(this + 0x2b78) != 0;
}


/* LawnApp::GetAndClearQueuedArcadeUnlockSource() */

undefined8 LawnApp::GetAndClearQueuedArcadeUnlockSource(void)

{
  long in_x0;
  undefined8 in_x8;
  
  FUN_05475d88();
  FUN_05474ff8(in_x0 + 0x2fa0);
  return in_x8;
}


/* LawnApp::GetArtifactCultivationListView() */

undefined8 __thiscall LawnApp::GetArtifactCultivationListView(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2bb8);
}


/* LawnApp::GetPlantGeneEnhancementView() */

undefined8 __thiscall LawnApp::GetPlantGeneEnhancementView(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2bd0);
}


/* LawnApp::GetJoustPlantPowerConfig() */

LawnApp * __thiscall LawnApp::GetJoustPlantPowerConfig(LawnApp *this)

{
  return this + 0x34f8;
}


/* LawnApp::IsPlantAdventureUIValid() */

bool __thiscall LawnApp::IsPlantAdventureUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d38) != 0;
}


/* LawnApp::IsAdventureOpenedUIValid() */

bool __thiscall LawnApp::IsAdventureOpenedUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d30) != 0;
}


/* LawnApp::IsStoneLotteryValid() */

bool __thiscall LawnApp::IsStoneLotteryValid(LawnApp *this)

{
  return *(long *)(this + 0x2ca0) != 0;
}


/* LawnApp::GetStoneLottery() const */

undefined8 __thiscall LawnApp::GetStoneLottery(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ca0);
}


/* LawnApp::IsBattleStatementUIShow() */

bool __thiscall LawnApp::IsBattleStatementUIShow(LawnApp *this)

{
  return *(long *)(this + 0x2da8) != 0;
}


/* LawnApp::SetShouldBackToMapAtDangerRoom(bool) */

void __thiscall LawnApp::SetShouldBackToMapAtDangerRoom(LawnApp *this,bool param_1)

{
  this[0x3068] = (LawnApp)param_1;
  return;
}


/* LawnApp::GetShouldBackToMapAtDangerRoom() */

LawnApp __thiscall LawnApp::GetShouldBackToMapAtDangerRoom(LawnApp *this)

{
  return this[0x3068];
}


/* LawnApp::GetAdsMissionLimit() */

undefined8 LawnApp::GetAdsMissionLimit(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LawnApp::GetQiHooLogin() */

LawnApp __thiscall LawnApp::GetQiHooLogin(LawnApp *this)

{
  return this[0x3530];
}


/* LawnApp::SetLoadingDuration(double) */

void __thiscall LawnApp::SetLoadingDuration(LawnApp *this,double param_1)

{
  *(double *)(this + 0x3550) = param_1;
  return;
}


/* LawnApp::GetLoadingBeginTime() */

undefined8 __thiscall LawnApp::GetLoadingBeginTime(LawnApp *this)

{
  return *(undefined8 *)(this + 0x3558);
}


/* LawnApp::GetEndLevelUI() */

undefined8 __thiscall LawnApp::GetEndLevelUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e90);
}


/* LawnApp::GetGachaDisplayerDialog() */

undefined8 __thiscall LawnApp::GetGachaDisplayerDialog(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ea8);
}


/* LawnApp::GetMagentoLanguage() const */

undefined4 __thiscall LawnApp::GetMagentoLanguage(LawnApp *this)

{
  return *(undefined4 *)(this + 0x3010);
}


/* LawnApp::IsUsingSpecialBackground() */

LawnApp __thiscall LawnApp::IsUsingSpecialBackground(LawnApp *this)

{
  return this[0x2f7c];
}


/* LawnApp::setCanDealProfile(bool) */

void __thiscall LawnApp::setCanDealProfile(LawnApp *this,bool param_1)

{
  this[0x9ea] = (LawnApp)param_1;
  return;
}


/* LawnApp::GetQiHooPlatform() const */

undefined8 __thiscall LawnApp::GetQiHooPlatform(LawnApp *this)

{
  return *(undefined8 *)(this + 0x3528);
}


/* LawnApp::SetQiHooLogin(bool) */

void __thiscall LawnApp::SetQiHooLogin(LawnApp *this,bool param_1)

{
  this[0x3530] = (LawnApp)param_1;
  return;
}


/* LawnApp::GetIsNewUser() */

LawnApp __thiscall LawnApp::GetIsNewUser(LawnApp *this)

{
  return this[0x3668];
}


/* LawnApp::GetStartLoadingTime() */

undefined8 __thiscall LawnApp::GetStartLoadingTime(LawnApp *this)

{
  return *(undefined8 *)(this + 0x3540);
}


/* LawnApp::GetDecompressDuration() */

undefined1  [16] __thiscall LawnApp::GetDecompressDuration(LawnApp *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + 0x3548);
  auVar1._8_8_ = 0;
  return auVar1;
}


/* LawnApp::GetLoadingDuration() */

undefined1  [16] __thiscall LawnApp::GetLoadingDuration(LawnApp *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + 0x3550);
  auVar1._8_8_ = 0;
  return auVar1;
}


/* LawnApp::GetSessionId() */

undefined8 LawnApp::GetSessionId(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LawnApp::GetPlantLevelUpListView() */

undefined8 __thiscall LawnApp::GetPlantLevelUpListView(LawnApp *this)

{
  return *(undefined8 *)(this + 11000);
}


/* LawnApp::GetPlantAvatarListView() */

undefined8 __thiscall LawnApp::GetPlantAvatarListView(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2b10);
}


/* LawnApp::GetRedPacketRewardInfo() */

LawnApp * __thiscall LawnApp::GetRedPacketRewardInfo(LawnApp *this)

{
  return this + 0x3070;
}


/* LawnApp::getRedPackOpenUI() */

undefined8 __thiscall LawnApp::getRedPackOpenUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2a88);
}


/* LawnApp::IsAdventureSurpriseUIValid() */

bool __thiscall LawnApp::IsAdventureSurpriseUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d58) != 0;
}


/* LawnApp::GetConsumptionRewardInfo() */

LawnApp * __thiscall LawnApp::GetConsumptionRewardInfo(LawnApp *this)

{
  return this + 0x3208;
}


/* LawnApp::getBoxOpenUI() */

undefined8 __thiscall LawnApp::getBoxOpenUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2a90);
}


/* LawnApp::GetPlantAdventureUI() const */

undefined8 __thiscall LawnApp::GetPlantAdventureUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d38);
}


/* LawnApp::GetAdventureTeamEditorUI() const */

undefined8 __thiscall LawnApp::GetAdventureTeamEditorUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d48);
}


/* LawnApp::getSurpriseBoxOpenUI() */

undefined8 __thiscall LawnApp::getSurpriseBoxOpenUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2aa8);
}


/* LawnApp::IsAdventureTeamEditorUIValid() */

bool __thiscall LawnApp::IsAdventureTeamEditorUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d48) != 0;
}


/* LawnApp::GetAdventureBonusUI() const */

undefined8 __thiscall LawnApp::GetAdventureBonusUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d50);
}


/* LawnApp::GetAdventureSurpriseUI() const */

undefined8 __thiscall LawnApp::GetAdventureSurpriseUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d58);
}


/* LawnApp::GetPlantAdventureTabIndex() */

undefined4 __thiscall LawnApp::GetPlantAdventureTabIndex(LawnApp *this)

{
  return *(undefined4 *)(this + 0x34c8);
}


/* LawnApp::isSyncProfileSuccess() */

LawnApp __thiscall LawnApp::isSyncProfileSuccess(LawnApp *this)

{
  return this[0x9e8];
}


/* LawnApp::isProfileSyncing() */

LawnApp __thiscall LawnApp::isProfileSyncing(LawnApp *this)

{
  return this[0x9e9];
}


/* LawnApp::getProfileConnected() */

LawnApp __thiscall LawnApp::getProfileConnected(LawnApp *this)

{
  return this[0x9ec];
}


/* LawnApp::GetLotteryResultUI() */

undefined8 __thiscall LawnApp::GetLotteryResultUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ea0);
}


/* LawnApp::SetOpenActivityGameUI(FestivalGameMode) */

void __thiscall LawnApp::SetOpenActivityGameUI(LawnApp *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x3018) = param_2;
  return;
}


/* LawnApp::GetWorldInfoUI() */

undefined8 __thiscall LawnApp::GetWorldInfoUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2a18);
}


/* LawnApp::IsGMInfoExtraType() */

byte __thiscall LawnApp::IsGMInfoExtraType(LawnApp *this)

{
  byte bVar1;
  
  bVar1 = FUN_0547419c(this + 0x2f48);
  return bVar1 ^ 1;
}


/* LawnApp::GetGMInfoExtraType() */

undefined8 LawnApp::GetGMInfoExtraType(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* LawnApp::GetProfileCreatedTime() */

LawnApp * __thiscall LawnApp::GetProfileCreatedTime(LawnApp *this)

{
  return this + 0x3660;
}


/* LawnApp::GetMusicCallbackID() */

undefined4 __thiscall LawnApp::GetMusicCallbackID(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f38);
}


/* LawnApp::ClearMusicCallbackID() */

void __thiscall LawnApp::ClearMusicCallbackID(LawnApp *this)

{
  *(undefined4 *)(this + 0x2f38) = 0;
  return;
}


/* LawnApp::SetIsInited(bool) */

void __thiscall LawnApp::SetIsInited(LawnApp *this,bool param_1)

{
  this[0x35a8] = (LawnApp)param_1;
  return;
}


/* LawnApp::GetChoosePlantsDialog() */

undefined8 __thiscall LawnApp::GetChoosePlantsDialog(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2b50);
}


/* LawnApp::GetWorldPreview() */

undefined8 __thiscall LawnApp::GetWorldPreview(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2df0);
}


/* LawnApp::IsDailySignRewardShowing() */

bool __thiscall LawnApp::IsDailySignRewardShowing(LawnApp *this)

{
  return *(long *)(this + 0x2a68) != 0;
}


/* LawnApp::GetLastCompletedLevel() */

LawnApp * __thiscall LawnApp::GetLastCompletedLevel(LawnApp *this)

{
  return this + 0x2f98;
}


/* LawnApp::IsLoginSuccess() */

LawnApp __thiscall LawnApp::IsLoginSuccess(LawnApp *this)

{
  return this[0x3521];
}


/* LawnApp::IsChoosePlantsDialogValid() */

bool __thiscall LawnApp::IsChoosePlantsDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b50) != 0;
}


/* LawnApp::IsChooseWelfareDialogValid() */

bool __thiscall LawnApp::IsChooseWelfareDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b58) != 0;
}


/* LawnApp::IsChooseActivityLevelsDialogValid() */

bool __thiscall LawnApp::IsChooseActivityLevelsDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b48) != 0;
}


/* LawnApp::IsActivityHomeValid() */

bool __thiscall LawnApp::IsActivityHomeValid(LawnApp *this)

{
  return *(long *)(this + 0x2b68) != 0;
}


/* LawnApp::IsActivityHomeExtraValid() */

bool __thiscall LawnApp::IsActivityHomeExtraValid(LawnApp *this)

{
  return *(long *)(this + 0x2b70) != 0;
}


/* LawnApp::IsChallengeChooseDialogValid() */

bool __thiscall LawnApp::IsChallengeChooseDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b90) != 0;
}


/* LawnApp::IsDailyActivityChooseDialogValid() */

bool __thiscall LawnApp::IsDailyActivityChooseDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b88) != 0;
}


/* LawnApp::IsShopChooseDialogValid() */

bool __thiscall LawnApp::IsShopChooseDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b98) != 0;
}


/* LawnApp::IsWelfareChooseDialogValid() */

bool __thiscall LawnApp::IsWelfareChooseDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2ba0) != 0;
}


/* LawnApp::GetScrollBanner() */

undefined8 __thiscall LawnApp::GetScrollBanner(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ba8);
}


/* LawnApp::AddModuleInfo(ModuleInfo) */

void LawnApp::AddModuleInfo(long param_1)

{
  operator|=(param_1 + 0x29fc);
  return;
}


/* LawnApp::RemoveModuleInfo(ModuleInfo) */

void __thiscall LawnApp::RemoveModuleInfo(LawnApp *this,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = operator~(param_2);
  operator&=(this + 0x29fc,uVar1);
  return;
}


/* LawnApp::IsValidRechargeBundleUI() */

bool __thiscall LawnApp::IsValidRechargeBundleUI(LawnApp *this)

{
  return *(long *)(this + 0x9d0) != 0;
}


/* LawnApp::SetLoginSuccess(bool) */

void __thiscall LawnApp::SetLoginSuccess(LawnApp *this,bool param_1)

{
  this[0x3521] = (LawnApp)param_1;
  return;
}


/* LawnApp::SetPaymentResultInfo(PaymentResultInfo&) */

void __thiscall LawnApp::SetPaymentResultInfo(LawnApp *this,PaymentResultInfo *param_1)

{
  InvitationPlayerInfo::operator=
            ((InvitationPlayerInfo *)(this + 0x3588),(InvitationPlayerInfo *)param_1);
  return;
}


/* LawnApp::IsNeedRefreshLoginDays(bool) */

void __thiscall LawnApp::IsNeedRefreshLoginDays(LawnApp *this,bool param_1)

{
  this[0x2f3d] = (LawnApp)param_1;
  return;
}


/* LawnApp::QueueUnlocksFromArcadeLevel(std::string const&) */

void LawnApp::QueueUnlocksFromArcadeLevel(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x2fa0);
  return;
}


/* LawnApp::GetLevelOfTheDayRewardDialog() */

undefined8 __thiscall LawnApp::GetLevelOfTheDayRewardDialog(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e58);
}


/* LawnApp::GetRebateRewardConfig() */

LawnApp * __thiscall LawnApp::GetRebateRewardConfig(LawnApp *this)

{
  return this + 0x33d0;
}


/* LawnApp::GetLevelOfTheDayConfigInfo() */

LawnApp * __thiscall LawnApp::GetLevelOfTheDayConfigInfo(LawnApp *this)

{
  return this + 0x3390;
}


/* LawnApp::GetNationalDayRewardConfigInfo() */

LawnApp * __thiscall LawnApp::GetNationalDayRewardConfigInfo(LawnApp *this)

{
  return this + 0x33b0;
}


/* LawnApp::IsStarConvertIValid() */

bool __thiscall LawnApp::IsStarConvertIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d18) != 0;
}


/* LawnApp::GetStarConvert() const */

undefined8 __thiscall LawnApp::GetStarConvert(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d18);
}


/* LawnApp::IsStarConvertOpened() */

LawnApp __thiscall LawnApp::IsStarConvertOpened(LawnApp *this)

{
  return this[0x2d20];
}


/* LawnApp::IsLevelofDayEntranceValid() */

bool __thiscall LawnApp::IsLevelofDayEntranceValid(LawnApp *this)

{
  return *(long *)(this + 0x2d28) != 0;
}


/* LawnApp::GetArenaEndingUI() */

undefined8 __thiscall LawnApp::GetArenaEndingUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e38);
}


/* LawnApp::IsTGPieceTableUIValid() */

bool __thiscall LawnApp::IsTGPieceTableUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2cc8) != 0;
}


/* LawnApp::GetTGPieceTableUI() const */

undefined8 __thiscall LawnApp::GetTGPieceTableUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2cc8);
}


/* LawnApp::IsTGAvatarPieceTableUIValid() */

bool __thiscall LawnApp::IsTGAvatarPieceTableUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2cd0) != 0;
}


/* LawnApp::GetTGAvatarPieceTableUI() const */

undefined8 __thiscall LawnApp::GetTGAvatarPieceTableUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2cd0);
}


/* LawnApp::SetAccessoryBonusUI(DailyAccessoryBonusUI*) */

void __thiscall LawnApp::SetAccessoryBonusUI(LawnApp *this,DailyAccessoryBonusUI *param_1)

{
  *(DailyAccessoryBonusUI **)(this + 0x2d60) = param_1;
  return;
}


/* LawnApp::IsGoldenEggOpenUIValid() */

bool __thiscall LawnApp::IsGoldenEggOpenUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d68) != 0;
}


/* LawnApp::SetGoldenEggUI(GoldenEggUI*) */

void __thiscall LawnApp::SetGoldenEggUI(LawnApp *this,GoldenEggUI *param_1)

{
  *(GoldenEggUI **)(this + 0x2d70) = param_1;
  return;
}


/* LawnApp::GetMaxAdsPerDay() */

undefined4 __thiscall LawnApp::GetMaxAdsPerDay(LawnApp *this)

{
  return *(undefined4 *)(this + 0x2f88);
}


/* LawnApp::GetTwoYearBirthday() const */

undefined8 __thiscall LawnApp::GetTwoYearBirthday(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c18);
}


/* LawnApp::GetPlantBundleUI() const */

undefined8 __thiscall LawnApp::GetPlantBundleUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c50);
}


/* LawnApp::GetWorldCupConfig() */

LawnApp * __thiscall LawnApp::GetWorldCupConfig(LawnApp *this)

{
  return this + 0x34d0;
}


/* LawnApp::IsChooseRiddlesDialogValid() */

bool __thiscall LawnApp::IsChooseRiddlesDialogValid(LawnApp *this)

{
  return *(long *)(this + 0x2b60) != 0;
}


/* LawnApp::GetLevelOfTheDayProgressiveAwardDialog() */

undefined8 __thiscall LawnApp::GetLevelOfTheDayProgressiveAwardDialog(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2e60);
}


/* LawnApp::IsCanSetWaitingGem() */

bool __thiscall LawnApp::IsCanSetWaitingGem(LawnApp *this)

{
  int iVar1;
  
  iVar1 = FUN_050c9d84(*(undefined8 *)(this + 0x3040),*(undefined8 *)(this + 0x3050));
  return iVar1 == 0;
}


/* LawnApp::IsGachaUIShowing() */

bool __thiscall LawnApp::IsGachaUIShowing(LawnApp *this)

{
  return *(long *)(this + 0x2a50) != 0;
}


/* LawnApp::getLanternRiddlesUI() */

undefined8 __thiscall LawnApp::getLanternRiddlesUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2a78);
}


/* LawnApp::IsRechargeGiftUIValid() */

bool __thiscall LawnApp::IsRechargeGiftUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2c08) != 0;
}


/* LawnApp::GetRechargeGiftUI() const */

undefined8 __thiscall LawnApp::GetRechargeGiftUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2c08);
}


/* LawnApp::GetLevelofDayEntrance() const */

undefined8 __thiscall LawnApp::GetLevelofDayEntrance(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d28);
}


/* LawnApp::GetAdventureOpenedUI() const */

undefined8 __thiscall LawnApp::GetAdventureOpenedUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d30);
}


/* LawnApp::IsAdventureBonusUIValid() */

bool __thiscall LawnApp::IsAdventureBonusUIValid(LawnApp *this)

{
  return *(long *)(this + 0x2d50) != 0;
}


/* LawnApp::GetGoldenEggOpenUI() const */

undefined8 __thiscall LawnApp::GetGoldenEggOpenUI(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2d68);
}


/* LawnApp::IsWorldUnlockShowing() */

bool __thiscall LawnApp::IsWorldUnlockShowing(LawnApp *this)

{
  return *(long *)(this + 0x2df8) != 0;
}


/* LawnApp::GetGameCenterProxy() const */

undefined8 __thiscall LawnApp::GetGameCenterProxy(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2f28);
}


/* LawnApp::GetPostProcessing() */

undefined8 __thiscall LawnApp::GetPostProcessing(LawnApp *this)

{
  return *(undefined8 *)(this + 0x2ef0);
}


/* LawnApp::NeedRefreshLoginDays() */

LawnApp __thiscall LawnApp::NeedRefreshLoginDays(LawnApp *this)

{
  return this[0x2f3d];
}


/* LawnApp::RefreshConsumptionRewardInfo() */

void __thiscall LawnApp::RefreshConsumptionRewardInfo(LawnApp *this)

{
  ConsumptionRewardInfo::InitDate((ConsumptionRewardInfo *)(this + 0x3208));
  return;
}


/* LawnApp::RefreshPlantAdventureConfig() */

void __thiscall LawnApp::RefreshPlantAdventureConfig(LawnApp *this)

{
  PlantAdventureConfig::Refresh((PlantAdventureConfig *)(this + 0x3480));
  return;
}


/* LawnApp::RefreshStarConvertConfig() */

void __thiscall LawnApp::RefreshStarConvertConfig(LawnApp *this)

{
  StarConvertConfig::Refresh((StarConvertConfig *)(this + 0x3410));
  return;
}


/* LawnApp::SetAutoSmokingStart() */

void __thiscall LawnApp::SetAutoSmokingStart(LawnApp *this)

{
  this[0x3520] = (LawnApp)0x1;
  return;
}

