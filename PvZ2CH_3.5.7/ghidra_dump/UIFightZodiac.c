// Class: UIFightZodiac


/* UIFightZodiac::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIFightZodiac::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFightZodiac::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIFightZodiac::ScrollTargetReached(UIFightZodiac *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UIFightZodiac::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIFightZodiac::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIFightZodiac::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIFightZodiac::ScrollTargetInterrupted(UIFightZodiac *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* UIFightZodiac::TabSelectionChanged(int) */

int UIFightZodiac::TabSelectionChanged(int param_1)

{
  return param_1;
}


/* non-virtual thunk to UIFightZodiac::TabSelectionChanged(int) */

void __thiscall UIFightZodiac::TabSelectionChanged(UIFightZodiac *this,int param_1)

{
  TabSelectionChanged((int)this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::GetLayoutName() */

void __thiscall UIFightZodiac::GetLayoutName(UIFightZodiac *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFightZodiacDave");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIFightZodiac::closeDescriptionWidget() */

void __thiscall UIFightZodiac::closeDescriptionWidget(UIFightZodiac *this)

{
  if (*(long *)(this + 0x1b0) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x1b0))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x1b0));
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::StartEffect(int, int) */

void UIFightZodiac::StartEffect(int param_1,int param_2)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIImage_Prograss_Bg");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)(ulong)(uint)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar1[0x59] = (UIWidgetImage)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::setZodiacIndex(int) */

void __thiscall UIFightZodiac::setZodiacIndex(UIFightZodiac *this,int param_1)

{
  UIWidgetText *pUVar1;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x14c) = param_1;
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[FIGHT_ZODIAC_INDEX]");
  TodReplaceNumberString(awStack_10,L"{NUM}",*(int *)(this + 0x14c));
  FUN_05476c50(awStack_10);
  std::string::string((string *)awStack_10,"UIText_Num");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  nop();
  PuzzleTip::SetTip(pUVar1,auStack_18);
  FUN_05476c50(auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::updateTimer() */

void __thiscall UIFightZodiac::updateTimer(UIFightZodiac *this)

{
  UIWidgetText *pUVar1;
  UIWidgetText *pUVar2;
  UIWidgetText *pUVar3;
  UIWidgetText *pUVar4;
  float fVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Refresh");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Timer");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Refresh2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Timer2");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  fVar5 = (float)TimeUtil::GetTimeCountdown(1,0x2a45);
  FUN_039cb3b0(asStack_10,(int)fVar5);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  fVar5 = (float)TimeUtil::GetTimeCountdown(3,0x2a45);
  FUN_039cb3b0(asStack_10,(int)fVar5);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  fVar5 = (float)TimeUtil::GetTimeCountdown(1,0x2a45);
  FUN_039cb3b0(asStack_10,(int)fVar5);
  PuzzleTip::SetTip(pUVar3,asStack_10);
  FUN_05476c50(asStack_10);
  fVar5 = (float)TimeUtil::GetTimeCountdown(3,0x2a45);
  FUN_039cb3b0(asStack_10,(int)fVar5);
  PuzzleTip::SetTip(pUVar4,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::setFireWorksNumber(int) */

void __thiscall UIFightZodiac::setFireWorksNumber(UIFightZodiac *this,int param_1)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_Item");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x150));
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::setZodiacHP(int, bool) */

void __thiscall UIFightZodiac::setZodiacHP(UIFightZodiac *this,int param_1,bool param_2)

{
  UIWidgetImage *pUVar1;
  UIWidgetImage *pUVar2;
  UIWidgetText *pUVar3;
  PVZ2UIButton *pPVar4;
  UIWidgetAnim *pUVar5;
  undefined1 *__n;
  undefined1 auStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x148) = param_1;
  __n = auStack_40;
  std::string::string(asStack_30,"UIImage_Prograss");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"UIImage_Prograss_Bg");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  *(int *)(pUVar1 + 0x50) =
       (int)((float)*(int *)(this + 0x148) * (float)*(int *)(pUVar2 + 0x50) * 0.02);
  std::string::string(asStack_30,"UIText_Prograss");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x148));
  std::operator+(asStack_30,"/50");
  std::string::~string(asStack_30);
  Sexy::ToWString(asStack_38);
  PuzzleTip::SetTip(pUVar3,asStack_30);
  FUN_05476c50(asStack_30);
  std::string::string(asStack_30,"UIButton_Use10");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_30);
  std::string::~string(asStack_30);
  nop();
  if (*(int *)(this + 0x148) < 10) {
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,1);
  }
  else {
    (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,0);
  }
  if (!param_2) {
    std::string::string(asStack_30,"UIAnim_Zodiac");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_30);
    std::string::~string(asStack_30);
    nop();
    std::string::string(asStack_30,"gift");
    nop();
    if (this[0x168] == (UIFightZodiac)0x0) {
      if (this[0x167] == (UIFightZodiac)0x0) {
        std::string::append(asStack_30,"gift1",(size_t)__n);
      }
    }
    else {
      std::string::append(asStack_30,"die",(size_t)__n);
    }
    std::string::append(asStack_30,"idle",(size_t)__n);
    FUN_039cbf1c(afStack_28,this);
    UIWidgetAnim::SetLabel(pUVar5,asStack_30,afStack_28);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
    StartEffect((int)this,*(int *)(this + 0x148));
    std::string::~string(asStack_30);
  }
  std::string::~string(asStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::closeRewardDisplay() */

void __thiscall UIFightZodiac::closeRewardDisplay(UIFightZodiac *this)

{
  UIWidgetAnim *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIAnim_Zodiac");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"idle");
  UIWidgetAnim::SetLabel((string *)pUVar1);
  std::string::~string(asStack_10);
  nop();
  this[0x169] = (UIFightZodiac)0x0;
  if (this[0x168] != (UIFightZodiac)0x0) {
    setZodiacIndex(this,*(int *)(this + 0x14c) + 1);
    setZodiacHP(this,0x32,true);
    this[0x168] = (UIFightZodiac)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::onBuyGacha(int) */

void UIFightZodiac::onBuyGacha(int param_1)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"mat_fireworks");
  iVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  setFireWorksNumber((UIFightZodiac *)(ulong)(uint)param_1,iVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::UpdateFireWorksNumber() */

void __thiscall UIFightZodiac::UpdateFireWorksNumber(UIFightZodiac *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_fireworks");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  setFireWorksNumber(this,iVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::showDescriptionWidget() */

void __thiscall UIFightZodiac::showDescriptionWidget(UIFightZodiac *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1b0) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x1b0) = this_00;
    TodStringTranslate(L"[FIGHT_ZODIAC_DESCRIPTION]");
    TodStringTranslate(L"[FIGHT_ZODIAC_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x1b0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIFightZodiac,void(UIFightZodiac::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1b0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1b0));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1b0));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1b0));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::showDisplayBoardWidget() */

void __thiscall UIFightZodiac::showDisplayBoardWidget(UIFightZodiac *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  CustomDisplayBoardDialog *this_00;
  long lVar8;
  int iVar9;
  int iVar10;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a8) == 0) {
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0dc0);
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    iVar10 = (int)((float)iVar1 * 1.2);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0dc0);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar7);
    iVar1 = (*(int *)(this + 0x50) - iVar10) / 2;
    iVar9 = (int)((float)iVar2 * 1.2);
    iVar2 = (*(int *)(this + 0x54) - iVar9) / 2;
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar10,iVar9);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0de8);
    iVar3 = SalesProgressBar::GetCurrentLevel(pSVar7);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0de8);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac0de8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2 - iVar3,iVar5 + iVar10,iVar4 + iVar9);
    this_00 = ::operator_new(0x100);
    CustomDisplayBoardDialog::CustomDisplayBoardDialog
              (this_00,(string *)(this + 0x170),(TRect *)aIStack_28);
    lVar8 = *(long *)this_00;
    *(CustomDisplayBoardDialog **)(this + 0x1a8) = this_00;
    (**(code **)(lVar8 + 0x1a0))(this_00,aIStack_18);
    CustomDisplayBoard::InitView(*(CustomDisplayBoard **)(this + 0x1a8));
    CustomDisplayBoard::SetAvatarIndex((int)*(undefined8 *)(this + 0x1a8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x1a8));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x1a8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::UIFightZodiac() */

void __thiscall UIFightZodiac::UIFightZodiac(UIFightZodiac *this)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  undefined1 *__n;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = auStack_58;
  UISingletonDialog<UIFightZodiac>::UISingletonDialog((UISingletonDialog<UIFightZodiac> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined4 *)(this + 0x158) = 3;
  *(undefined ***)this = &PTR_GetClass_066f0330;
  *(undefined **)(this + 0xd8) = &DAT_066f0698;
  *(undefined **)(this + 0x138) = &DAT_066f06e0;
  *(undefined ***)(this + 0x140) = &PTR__UIFightZodiac_066f06f8;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  Set8BytesTo0((string *)(this + 0x170));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_NewAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_HeadShot_BigAvatar");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_50,"UI_PlantSpecialOffer");
  LawnApp::LoadGroup(pLVar2,(string *)&local_50);
  std::string::~string((string *)&local_50);
  nop();
  *(undefined8 *)(this + 0x1a8) = 0;
  std::vector<ProgressDisappear*,std::allocator<ProgressDisappear*>>::clear
            ((vector<ProgressDisappear*,std::allocator<ProgressDisappear*>> *)(this + 400));
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  std::string::append((string *)(this + 0x170),"sunflower",(size_t)__n);
  this[0x169] = (UIFightZodiac)0x0;
  this[0x168] = (UIFightZodiac)0x0;
  this[0x167] = (UIFightZodiac)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,closeRewardDisplay);
  Sexy::Delegate0::Delegate0<UIFightZodiac,void(UIFightZodiac::*)()>(aDStack_38,(string *)&local_50)
  ;
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ResultClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onBuyGacha);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<UIFightZodiac,void(UIFightZodiac::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyLionDanceGacha,&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::~UIFightZodiac() */

void __thiscall UIFightZodiac::~UIFightZodiac(UIFightZodiac *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_066f0698;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_066f0330;
  *(undefined **)(this + 0x138) = &DAT_066f06e0;
  *(undefined ***)(this + 0x140) = &PTR__UIFightZodiac_066f06f8;
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
  std::string::string(asStack_10,"UI_NewAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigAvatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantSpecialOffer");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ProgressDisappear*,std::allocator<ProgressDisappear*>>::~vector
            ((vector<ProgressDisappear*,std::allocator<ProgressDisappear*>> *)(this + 400));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x178));
  std::string::~string((string *)(this + 0x170));
  UISingletonDialog<UIFightZodiac>::~UISingletonDialog((UISingletonDialog<UIFightZodiac> *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIFightZodiac::~UIFightZodiac() */

void __thiscall UIFightZodiac::~UIFightZodiac(UIFightZodiac *this)

{
  ~UIFightZodiac(this + -0x140);
  return;
}


/* UIFightZodiac::~UIFightZodiac() */

void __thiscall UIFightZodiac::~UIFightZodiac(UIFightZodiac *this)

{
  ~UIFightZodiac(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIFightZodiac::~UIFightZodiac() */

void __thiscall UIFightZodiac::~UIFightZodiac(UIFightZodiac *this)

{
  ~UIFightZodiac(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::FightZodiacWithFireWorks(int) */

void __thiscall UIFightZodiac::FightZodiacWithFireWorks(UIFightZodiac *this,int param_1)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  long lVar2;
  undefined8 uVar3;
  DNetwork *this_01;
  int local_d54 [3];
  wstring awStack_d48 [8];
  wstring awStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2048];
  string asStack_4e8 [1248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  if (*(int *)(this + 0x150) < param_1) {
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(this_00,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[FIGHT_ZODIAC_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(this_00,awStack_d40,awStack_d48);
      std::string::string(asStack_ce8,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar1 = (Image *)StringHelper::ToImage(asStack_ce8,false);
      UIMessageBox::SetBackground(this_00,pIVar1);
      std::string::~string(asStack_ce8);
      nop();
      lVar2 = UIMessageBox::GetButtonCancel(this_00);
      thunk_FUN_05477b9c(lVar2 + 0xd8,amStack_d18);
      FUN_05476c50(amStack_d18);
      FUN_05476c50(awStack_d40);
      FUN_05476c50(awStack_d48);
    }
  }
  else {
    this[0x169] = (UIFightZodiac)0x1;
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_d18);
    std::string::string((string *)awStack_d40,"n");
    uVar3 = std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,(string *)awStack_d40);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
    FUN_05474278(uVar3,asStack_ce8);
    std::string::~string(asStack_ce8);
    std::string::~string((string *)awStack_d40);
    nop();
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_039cbec0(afStack_d38,this,local_d54[0]);
    std::string::string((string *)awStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_4e8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               (string *)awStack_d40,0);
    std::string::~string((string *)awStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_d18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::ButtonDepress(int) */

void __thiscall UIFightZodiac::ButtonDepress(UIFightZodiac *this,int param_1)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x169] == (UIFightZodiac)0x0) {
    if (param_1 == 0x6e) {
      UISingletonDialog<UIFightZodiacReward>::ShowDialog();
    }
    else if (param_1 < 0x6f) {
      if (param_1 == 0x58) {
        UISingletonDialog<UIFightZodiac>::CloseDialog();
      }
      else if (param_1 == 100) {
        std::string::string(asStack_10,"UITabControl_0");
        this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (this_00 != (UITabControl *)0x0) {
          pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,2);
          UITabControl::SetTabSelected(this_00,pUVar1);
        }
      }
      else if (param_1 == 0x2a) {
        showDescriptionWidget(this);
      }
    }
    else if (param_1 == 0x82) {
      FightZodiacWithFireWorks(this,10);
    }
    else if (param_1 == 0x8c) {
      showDisplayBoardWidget(this);
    }
    else if (param_1 == 0x78) {
      FightZodiacWithFireWorks(this,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIFightZodiac::ButtonDepress(int) */

void __thiscall UIFightZodiac::ButtonDepress(UIFightZodiac *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::showRewardDisplay() */

void __thiscall UIFightZodiac::showRewardDisplay(UIFightZodiac *this)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x178);
    uVar3 = FUN_039cb378(uVar5,*(undefined8 *)(this + 0x180));
    if (uVar3 <= uVar4) break;
    piVar1 = (int *)FUN_039cb384(uVar5,uVar4);
    piVar1 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                    operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)amStack_38,piVar1);
    piVar2 = (int *)FUN_039cb384(*(undefined8 *)(this + 0x178),uVar4);
    *piVar1 = piVar2[1];
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_50,piVar2);
    uVar4 = uVar4 + 1;
  }
  UIRedPacketResult::create((map *)amStack_38,(vector *)avStack_50,true);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_50);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::CheckTips(bool) */

void __thiscall UIFightZodiac::CheckTips(UIFightZodiac *this,bool param_1)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  UIWidgetImage *pUVar3;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  UIFightZodiac UVar4;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar2,4);
  UVar4 = (UIFightZodiac)0x1;
  if (cVar1 != '\0') {
    UVar4 = this[0x164];
  }
  if (((this[0x165] == (UIFightZodiac)0x0) || (UVar4 == (UIFightZodiac)0x0)) ||
     (*(int *)(this + 0x160) < *(int *)(this + 0x15c))) {
    std::string::string(asStack_20,"UIImage_Tips");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    if (param_1) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      local_30[1] = 1;
      local_30[0] = L'⩅';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20,
                 (pair *)apStack_28);
      this_01 = (NetworkMgr *)NetworkMgr::Instance();
      this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
      INetworkMsgProcess::RequestActivityList(this_02,(vector *)asStack_20,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)asStack_20);
    }
  }
  else {
    std::string::string(asStack_20,"UIImage_Tips");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_20);
    std::string::~string(asStack_20);
    nop();
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::InitView() */

void __thiscall UIFightZodiac::InitView(UIFightZodiac *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UIFightZodiac *this_00;
  long lVar8;
  undefined4 *puVar9;
  UIWidgetImage *pUVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  NameMapperBase *pNVar14;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidgetText *pUVar15;
  PVZ2UIScrollingWidget *this_03;
  Widget *this_04;
  FightZodiacGachaWidget *this_05;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  string asStack_128 [16];
  ActiveItem aAStack_118 [8];
  undefined4 local_110;
  char local_100;
  FightZodiacData aFStack_98 [20];
  int local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar5);
  cVar4 = FUN_039cb308(local_110);
  if ((cVar4 == '\0') || (local_100 == '\0')) goto LAB_039d0c4c;
  FightZodiacData::FightZodiacData(aFStack_98);
  cVar4 = ActiveItem::GetDataSerialized(aAStack_118,(RtObject *)aFStack_98);
  if (cVar4 != '\0') {
    lVar17 = 0;
    lVar8 = FUN_039cb320(local_38,local_30);
    if (lVar8 != 0) {
      do {
        puVar9 = (undefined4 *)FUN_039cb348(local_38,lVar17);
        if (puVar9[3] == 1) {
          uVar1 = *puVar9;
          uVar2 = puVar9[2];
          *(undefined4 *)(this + 0x15c) = puVar9[1];
          *(undefined4 *)(this + 0x158) = uVar1;
          *(undefined4 *)(this + 0x160) = uVar2;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar8);
    }
    iVar6 = FUN_039cbfd4(0xf);
    iVar7 = FUN_039cbfd4(0x3c);
    std::string::string(asStack_128,"UIImage_Right");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
    std::string::~string(asStack_128);
    nop();
    uVar18 = 0;
    iVar5 = iVar6;
    while( true ) {
      uVar11 = FUN_039cb350(local_78,local_70);
      if (uVar11 <= uVar18) break;
      Sexy::Insets::Insets((Insets *)asStack_128,iVar5,iVar6,iVar7,iVar7);
      piVar12 = (int *)FUN_039cb364(local_78,uVar18);
      plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,0,true);
      (**(code **)(*plVar13 + 0x1a0))(plVar13,asStack_128);
      (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,plVar13);
      uVar18 = uVar18 + 1;
      iVar5 = iVar5 + iVar6 + iVar7;
    }
    std::string::string(asStack_128,"UIImage_Reward");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
    std::string::~string(asStack_128);
    nop();
    piVar12 = (int *)FUN_039cb364(local_50,0);
    plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar12,piVar12[1],true);
    (**(code **)(*plVar13 + 0x198))
              (plVar13,0,0,*(undefined4 *)(pUVar10 + 0x50),*(undefined4 *)(pUVar10 + 0x54));
    (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,plVar13);
    pNVar14 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    piVar12 = (int *)FUN_039cb364(local_50,0);
    cVar4 = NameMapperBase::ContainsId(pNVar14,*piVar12);
    if (cVar4 == '\0') {
      pNVar14 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      piVar12 = (int *)FUN_039cb364(local_50,0);
      cVar4 = NameMapperBase::ContainsId(pNVar14,*piVar12);
      if (cVar4 != '\0') {
        iVar5 = AvatarChipNameMapperServerID::GetInstance();
        goto LAB_039d0e9c;
      }
      pNVar14 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
      piVar12 = (int *)FUN_039cb364(local_50,0);
      cVar4 = NameMapperBase::ContainsId(pNVar14,*piVar12);
      if (cVar4 != '\0') {
        piVar12 = (int *)FUN_039cb364(local_50,0);
        NewAvatar::GetPlantNameByAvatarPieceID(*piVar12);
        goto LAB_039d0ebc;
      }
    }
    else {
      iVar5 = PlantChipNameMapperServerID::GetInstance();
LAB_039d0e9c:
      FUN_039cb364(local_50,0);
      NameMapperBase::GetNameForId(iVar5);
LAB_039d0ebc:
      FUN_05474278(this + 0x170,asStack_128);
      std::string::~string(asStack_128);
    }
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    uVar18 = 0;
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string(asStack_128,"mat_fireworks");
    PlayerInfo::SetMaterialNum(this_02,asStack_128,local_84);
    std::string::~string(asStack_128);
    nop();
    setFireWorksNumber(this,local_84);
    setZodiacIndex(this,local_80);
    setZodiacHP(this,local_7c,true);
    this[0x164] = (UIFightZodiac)(local_60 != 0);
    *(undefined4 *)(this + 0x154) = local_58;
    this[0x165] = (UIFightZodiac)(local_5c != 0);
    std::string::string(asStack_128,"UIImage_Mat_1");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
    pUVar10[0x6d] = (UIWidgetImage)0x0;
    std::string::~string(asStack_128);
    nop();
    std::string::string(asStack_128,"UIText_Use_1");
    pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_128);
    pUVar15[0x6d] = (UIWidgetText)0x0;
    std::string::~string(asStack_128);
    nop();
    std::string::string(asStack_128,"UIImage_Mat_10");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
    pUVar10[0x6d] = (UIWidgetImage)0x0;
    std::string::~string(asStack_128);
    nop();
    std::string::string(asStack_128,"UIText_Use_10");
    pUVar15 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_128);
    pUVar15[0x6d] = (UIWidgetText)0x0;
    std::string::~string(asStack_128);
    nop();
    std::string::string(asStack_128,"UIImage_Bg_2");
    pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_128);
    std::string::~string(asStack_128);
    nop();
    iVar5 = FUN_039cbfd4(0xf);
    iVar6 = FUN_039cbfd4(0x14);
    this_03 = ::operator_new(0x248);
    PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x140));
    (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_03);
    (**(code **)(*(long *)this_03 + 0x198))
              (this_03,iVar5,iVar5,iVar5 * -2 + *(int *)(pUVar10 + 0x50),
               iVar5 * -2 + *(int *)(pUVar10 + 0x54));
    Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_03,1);
    this_04 = ::operator_new(0xd8);
    Sexy::Widget::Widget(this_04);
    (**(code **)(*(long *)this_04 + 0x198))
              (this_04,0,0,*(undefined4 *)(this_03 + 0x50),*(undefined4 *)(this_03 + 0x54));
    iVar5 = *(int *)(this_04 + 0x54);
    iVar7 = (int)((double)(iVar6 * -3 + *(int *)(this_03 + 0x50)) * 0.3225806451612903);
    do {
      Sexy::Insets::Insets((Insets *)asStack_128,(iVar6 + iVar7) * (int)uVar18,0,iVar7,iVar5);
      this_05 = ::operator_new(0xe8);
      FightZodiacGachaWidget::FightZodiacGachaWidget(this_05);
      (**(code **)(*(long *)this_05 + 0x1a0))(this_05,asStack_128);
      uVar3 = local_20;
      uVar11 = FUN_039cb314(local_20,local_18);
      if (uVar18 < uVar11) {
        piVar12 = (int *)FUN_039cb370(uVar3,uVar18);
        FightZodiacGachaWidget::setIndex(this_05,(int)uVar18,*piVar12);
      }
      uVar18 = uVar18 + 1;
      (**(code **)(*(long *)this_04 + 0x60))(this_04,this_05);
    } while (uVar18 != 4);
    pcVar16 = *(code **)(*(long *)this_03 + 0x60);
    *(int *)(this_04 + 0x50) = iVar6 * 3 + iVar7 * 4;
    (*pcVar16)(this_03,this_04);
  }
  FightZodiacData::~FightZodiacData(aFStack_98);
LAB_039d0c4c:
  this_00 = (UIFightZodiac *)UISingletonDialog<UIFightZodiac>::GetSingletonPtr();
  CheckTips(this_00,false);
  ActiveItem::~ActiveItem(aAStack_118);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFightZodiac::OnCreate() */

void __thiscall UIFightZodiac::OnCreate(UIFightZodiac *this)

{
  UIWidgetBackground *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(int *)(pUVar1 + 0x48) = (*(int *)(this + 0x50) - *(int *)(pUVar1 + 0x50)) / 2;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIFightZodiac::Update() */

void __thiscall UIFightZodiac::Update(UIFightZodiac *this)

{
  Sexy::WidgetContainer::Update((WidgetContainer *)this);
  updateTimer(this);
  return;
}

