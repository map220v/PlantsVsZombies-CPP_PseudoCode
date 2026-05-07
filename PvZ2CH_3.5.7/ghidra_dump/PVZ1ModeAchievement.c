// Class: PVZ1ModeAchievement


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::ObtainReward(int) */

void __thiscall PVZ1ModeAchievement::ObtainReward(PVZ1ModeAchievement *this,int param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("UIImage_Reward_Finish%d",asStack_10,(ulong)(param_1 + 1));
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  if (pUVar1 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar1 + 0x158))(pUVar1,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievement::ScrollTargetReached(Sexy::ScrollWidget*) */

void PVZ1ModeAchievement::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeAchievement::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PVZ1ModeAchievement::ScrollTargetReached(PVZ1ModeAchievement *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PVZ1ModeAchievement::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PVZ1ModeAchievement::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PVZ1ModeAchievement::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PVZ1ModeAchievement::ScrollTargetInterrupted(PVZ1ModeAchievement *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::GetLayoutName() */

void __thiscall PVZ1ModeAchievement::GetLayoutName(PVZ1ModeAchievement *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPVZ1ModeAchievement");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PVZ1ModeAchievement::GetIntegralGrade() */

undefined1 __thiscall PVZ1ModeAchievement::GetIntegralGrade(PVZ1ModeAchievement *this)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(this + 0x140);
  uVar2 = 6;
  if ((((iVar1 < 0x1b) && (uVar2 = 5, iVar1 < 0x17)) && (uVar2 = 4, iVar1 < 0x12)) &&
     ((uVar2 = 3, iVar1 < 0xe && (uVar2 = 2, iVar1 < 9)))) {
    return 4 < iVar1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::RefreshProgressBar() */

void __thiscall PVZ1ModeAchievement::RefreshProgressBar(PVZ1ModeAchievement *this)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *this_00;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_10,"UIImage_Progress_Back");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  std::string::string((string *)local_10,"UIImage_Progress_Bar");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (*(int *)(this + 0x140) < 0x1c) {
    if (*(int *)(this + 0x140) < 3) {
      local_10[0] = 2;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    else {
      local_10[0] = 5;
      UIWidgetImage::SetImageType(this_00,(string *)local_10,0.0);
    }
    *(int *)(this_00 + 0x50) = (*(int *)(pUVar1 + 0x50) * *(int *)(this + 0x140)) / 0x1b;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::RefreshCoinBank() */

void __thiscall PVZ1ModeAchievement::RefreshCoinBank(PVZ1ModeAchievement *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_CoinNum");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("%d / %d",asStack_18,(ulong)*(uint *)(this + 0x140),(ulong)*(uint *)(this + 0x144)
                 );
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievement::UpdateIntegral() */

void __thiscall PVZ1ModeAchievement::UpdateIntegral(PVZ1ModeAchievement *this)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  iVar1 = GetIntegralGrade(this);
  do {
    uVar6 = *(undefined8 *)(this + 0x148);
    uVar3 = FUN_04dd8c20(uVar6,*(undefined8 *)(this + 0x150));
    uVar5 = uVar4;
    do {
      uVar4 = uVar5 + 1;
      if (uVar3 <= uVar5) {
        RefreshProgressBar(this);
        RefreshCoinBank(this);
        return;
      }
      puVar2 = (undefined8 *)FUN_04dd8c2c(uVar6,uVar5);
      uVar5 = uVar4;
    } while ((PVZ1ModeAchievementRewardButton *)*puVar2 == (PVZ1ModeAchievementRewardButton *)0x0);
    PVZ1ModeAchievementRewardButton::UpdateButtonState
              ((PVZ1ModeAchievementRewardButton *)*puVar2,iVar1);
  } while( true );
}


/* PVZ1ModeAchievement::AddIntegral(int) */

void __thiscall PVZ1ModeAchievement::AddIntegral(PVZ1ModeAchievement *this,int param_1)

{
  *(int *)(this + 0x140) = *(int *)(this + 0x140) + param_1;
  UpdateIntegral(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::ButtonDepress(int) */

void __thiscall PVZ1ModeAchievement::ButtonDepress(PVZ1ModeAchievement *this,int param_1)

{
  LawnApp *this_00;
  PVZ2UIDialog *pPVar1;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x58) {
    UISingletonDialog<PVZ1ModeAchievement>::CloseDialog();
  }
  else if (param_1 == 200) {
    FUN_05478178(awStack_58,L"[PVZ1_ACHIEVEMENT_INFO_BTN_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PVZ1_ACHIEVEMENT_INFO_BTN_TEXT]",auStack_60);
    pPVar1 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    PVZ2UIDialog::SetFooterAlign(pPVar1,0);
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar1,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1ModeAchievement::ButtonDepress(int) */

void __thiscall PVZ1ModeAchievement::ButtonDepress(PVZ1ModeAchievement *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::PVZ1ModeAchievement() */

void __thiscall PVZ1ModeAchievement::PVZ1ModeAchievement(PVZ1ModeAchievement *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PVZ1ModeAchievement>::UISingletonDialog
            ((UISingletonDialog<PVZ1ModeAchievement> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined ***)this = &PTR_GetClass_069c79d0;
  *(undefined **)(this + 0xd8) = &DAT_069c7d30;
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeAchievement_069c7d78;
  *(undefined4 *)(this + 0x144) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVZ1");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::~PVZ1ModeAchievement() */

void __thiscall PVZ1ModeAchievement::~PVZ1ModeAchievement(PVZ1ModeAchievement *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0x138) = &PTR__PVZ1ModeAchievement_069c7d78;
  *(undefined **)(this + 0xd8) = &DAT_069c7d30;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_069c79d0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_Lottery_Result");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"RenderEffects");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"RenderEffects");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Material");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadshotFrame");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PVZ1");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Chest");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>>::
  ~vector((vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>>
           *)(this + 0x148));
  UISingletonDialog<PVZ1ModeAchievement>::~UISingletonDialog
            ((UISingletonDialog<PVZ1ModeAchievement> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PVZ1ModeAchievement::~PVZ1ModeAchievement() */

void __thiscall PVZ1ModeAchievement::~PVZ1ModeAchievement(PVZ1ModeAchievement *this)

{
  ~PVZ1ModeAchievement(this + -0x138);
  return;
}


/* PVZ1ModeAchievement::~PVZ1ModeAchievement() */

void __thiscall PVZ1ModeAchievement::~PVZ1ModeAchievement(PVZ1ModeAchievement *this)

{
  ~PVZ1ModeAchievement(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievement::~PVZ1ModeAchievement() */

void __thiscall PVZ1ModeAchievement::~PVZ1ModeAchievement(PVZ1ModeAchievement *this)

{
  ~PVZ1ModeAchievement(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::HasCompletedAllTasks() */

void PVZ1ModeAchievement::HasCompletedAllTasks(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [36];
  int local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar3 = Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar3 + 8,true);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
      uVar5 = 1;
LAB_04ddc0d4:
      std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
                ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)avStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
    plVar4 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar4 + 0x20));
    PlayerInfo::GetPvZ1AchievementInfo(iVar2);
    if (local_14 != 3) {
      uVar5 = 0;
      goto LAB_04ddc0d4;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::InitReward(PVZ1ModeAchievementData const&) */

void __thiscall
PVZ1ModeAchievement::InitReward(PVZ1ModeAchievement *this,PVZ1ModeAchievementData *param_1)

{
  int iVar1;
  long lVar2;
  UIWidgetImage *pUVar3;
  PVZ1ModeAchievementRewardDisplay *this_00;
  vector *pvVar4;
  PVZ1ModeAchievementRewardButton *this_01;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  PVZ1ModeAchievementRewardButton *local_20;
  string asStack_18 [16];
  long local_8;
  
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>>::
  clear((vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>> *
        )(this + 0x148));
  lVar2 = FUN_04dd8c34(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  if (lVar2 != 0) {
    do {
      iVar7 = (int)uVar8;
      iVar1 = GetIntegralGrade(this);
      Sexy::StrFormat("UIImage_Reward_Back%d",asStack_18,(ulong)(iVar7 + 1U));
      pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      this_00 = ::operator_new(0x120);
      PVZ1ModeAchievementRewardDisplay::PVZ1ModeAchievementRewardDisplay(this_00);
      pcVar10 = *(code **)(*(long *)this_00 + 0x1a0);
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(pUVar3 + 0x50),*(int *)(pUVar3 + 0x54))
      ;
      (*pcVar10)(this_00,asStack_18);
      pvVar4 = (vector *)FUN_04dd8c48(*(undefined8 *)(param_1 + 0x48),uVar8);
      PVZ1ModeAchievementRewardDisplay::SetReawrd(this_00,pvVar4);
      (**(code **)(*(long *)pUVar3 + 0x60))(pUVar3,this_00);
      this_01 = ::operator_new(0xe0);
      PVZ1ModeAchievementRewardButton::PVZ1ModeAchievementRewardButton(this_01);
      pcVar10 = *(code **)(*(long *)this_01 + 0x1a0);
      local_20 = this_01;
      Sexy::Insets::Insets((Insets *)asStack_18,0,0,*(int *)(pUVar3 + 0x50),*(int *)(pUVar3 + 0x54))
      ;
      (*pcVar10)(this_01,asStack_18);
      PVZ1ModeAchievementRewardButton::SetData(local_20,iVar7 < iVar1,iVar7);
      (**(code **)(*(long *)pUVar3 + 0x60))(pUVar3,local_20);
      std::vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>>
      ::push_back((vector<PVZ1ModeAchievementRewardButton*,std::allocator<PVZ1ModeAchievementRewardButton*>>
                   *)(this + 0x148),&local_20);
      Sexy::StrFormat("UIImage_Reward_Finish%d",asStack_18,(ulong)(iVar7 + 1U));
      pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
      std::string::~string(asStack_18);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_04dd8bec(uVar9,*(undefined8 *)(param_1 + 0x38));
      if (uVar8 < uVar5) {
        piVar6 = (int *)FUN_04dd8bf8(uVar9,uVar8);
        if (*piVar6 != 1) goto LAB_04ddcf24;
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3);
      }
      else {
LAB_04ddcf24:
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
      }
      uVar8 = uVar8 + 1;
      uVar5 = FUN_04dd8c34(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    } while (uVar8 < uVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::InitTasks(PVZ1ModeAchievementData const&) */

void PVZ1ModeAchievement::InitTasks(PVZ1ModeAchievementData *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this;
  Widget *this_00;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  PVZ1ModeAchievementTaskWidget *this_01;
  undefined8 *puVar9;
  RtObject *this_02;
  PvZ1AchievementData *pPVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  int iVar14;
  GeneralTask *local_68;
  undefined8 local_60;
  Insets aIStack_58 [16];
  undefined8 local_48 [2];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeAchievement::InitTasks Enter");
  std::string::string((string *)&local_20,"UIImage_Task_List");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar5 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
    this = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this,(ScrollWidgetListener *)(param_1 + 0x138));
    iVar2 = FUN_04dd93e4(0xf);
    iVar3 = FUN_04dd93e4(0x1e);
    Sexy::Insets::Insets
              (aIStack_58,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,
               *(int *)(pUVar5 + 0x54) - iVar3);
    (**(code **)(*(long *)this + 0x1a0))(this,aIStack_58);
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this,2);
    this_00 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_00);
    (**(code **)(*(long *)this_00 + 0x198))
              (this_00,0,0,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
    uVar4 = FUN_04dd93e4(8);
    iVar2 = *(int *)(this_00 + 0x50);
    iVar14 = (int)((float)*(int *)(this_00 + 0x54) * 0.2857143);
    iVar3 = Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr();
    HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar3 + 8,true);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)local_48), bVar1)
    {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      local_68 = (GeneralTask *)*plVar6;
      if (*(int *)(local_68 + 0x14) == 2) {
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)local_48), bVar1)
    {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      local_68 = (GeneralTask *)*plVar6;
      if (*(int *)(local_68 + 0x14) == 1) {
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)local_48), bVar1)
    {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      local_68 = (GeneralTask *)*plVar6;
      if (*(int *)(local_68 + 0x14) == 0) {
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_38);
    local_48[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(avStack_38);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_60,(__normal_iterator *)local_48), bVar1)
    {
      plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
      local_68 = (GeneralTask *)*plVar6;
      if (*(int *)(local_68 + 0x14) == 3) {
        std::vector<GeneralTask*,std::allocator<GeneralTask*>>::push_back
                  ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20,&local_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
    }
    uVar7 = FUN_04dd8c54(local_20,local_18);
    Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeAchievement vecTask.size() = %d",uVar7);
    uVar13 = 0;
    while( true ) {
      uVar7 = local_20;
      uVar11 = FUN_04dd8c54(local_20,local_18);
      if (uVar11 <= uVar13) break;
      plVar6 = (long *)FUN_04dd8c60(uVar7,uVar13);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
      lVar8 = (**(code **)(*plVar6 + 0x58))();
      FUN_04dd8b50(*(undefined8 *)(lVar8 + 0x18));
      nop();
      iVar3 = FUN_04dd93e4(uVar4);
      Sexy::Insets::Insets((Insets *)local_48,0,(iVar3 + iVar14) * (int)uVar13,iVar2,iVar14);
      (**(code **)(*(long *)this_01 + 0x1a0))(this_01,(Insets *)local_48);
      (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
      puVar9 = (undefined8 *)FUN_04dd8c60(local_20,uVar13);
      PVZ1ModeAchievementTaskWidget::SetTask(this_01,(GeneralTask *)*puVar9);
      plVar6 = (long *)FUN_04dd8c60(local_20,uVar13);
      this_02 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
      pPVar10 = Sexy::RtObject::Cast<PvZ1AchievementData>(this_02);
      *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + *(int *)(pPVar10 + 0x50);
      uVar13 = uVar13 + 1;
    }
    iVar2 = FUN_04dd93e4(uVar4);
    pcVar12 = *(code **)(*(long *)this + 0x60);
    *(int *)(this_00 + 0x54) = (iVar2 + iVar14) * (int)uVar11;
    (*pcVar12)(this,this_00);
    (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this);
    std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
              ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
    std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
              ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)avStack_38);
  }
  std::string::string((string *)&local_20,"UIImage_Task_Mask");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)param_1,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  if (pUVar5 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::InitView() */

void __thiscall PVZ1ModeAchievement::InitView(PVZ1ModeAchievement *this)

{
  char cVar1;
  int iVar2;
  PVZ1ModeAchievementData aPStack_e8 [20];
  undefined4 local_d4;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04dd8bdc(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    PVZ1ModeAchievementData::PVZ1ModeAchievementData(aPStack_e8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aPStack_e8);
    if (cVar1 != '\0') {
      InitReward(this,aPStack_e8);
      InitTasks((PVZ1ModeAchievementData *)this);
      *(undefined4 *)(this + 0x140) = local_d4;
      UpdateIntegral(this);
    }
    PVZ1ModeAchievementData::~PVZ1ModeAchievementData(aPStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievement::OnCreate() */

void __thiscall PVZ1ModeAchievement::OnCreate(PVZ1ModeAchievement *this)

{
  char cVar1;
  int iVar2;
  UIWidgetBackground *pUVar3;
  long lVar4;
  TGALogMgr *this_00;
  size_t __n;
  string asStack_b0 [40];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_b0,"Background_0");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_b0);
  std::string::~string(asStack_b0);
  nop();
  iVar2 = *(int *)(this + 0x50) - *(int *)(pUVar3 + 0x50);
  __n = (size_t)(uint)(iVar2 - (iVar2 >> 0x1f));
  *(int *)(pUVar3 + 0x48) = iVar2 / 2;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_04dd8bdc(local_80);
  if ((cVar1 != '\0') && (local_70 != '\0')) {
    lVar4 = Sexy::LazySingleton<PvZ1AchievementManager>::GetInstancePtr();
    GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
    InitView(this);
    TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)asStack_b0);
    std::string::append(asStack_b0,"1",__n);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogPVZ1Achievement(this_00,(TGAPVZ1Achievement *)asStack_b0);
    TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)asStack_b0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

