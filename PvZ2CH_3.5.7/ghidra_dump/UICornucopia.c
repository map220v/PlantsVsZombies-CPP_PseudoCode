// Class: UICornucopia


/* UICornucopia::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICornucopia::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICornucopia::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UICornucopia::ScrollTargetReached(UICornucopia *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UICornucopia::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICornucopia::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICornucopia::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UICornucopia::ScrollTargetInterrupted(UICornucopia *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::GetLayoutName() */

void __thiscall UICornucopia::GetLayoutName(UICornucopia *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICornucopia");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICornucopia::CloseMainTips() */

void __thiscall UICornucopia::CloseMainTips(UICornucopia *this)

{
  if (*(long *)(this + 0x148) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x148))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
  }
  return;
}


/* UICornucopia::GetServerTotalIndex(int) */

undefined4 __thiscall UICornucopia::GetServerTotalIndex(UICornucopia *this,int param_1)

{
  undefined4 uVar1;
  
  if (99999 < param_1) {
    return 3;
  }
  uVar1 = 2;
  if (param_1 < 50000) {
    uVar1 = 1;
  }
  return uVar1;
}


/* UICornucopia::IsSlotUse(int) */

undefined8 __thiscall UICornucopia::IsSlotUse(UICornucopia *this,int param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 400);
  lVar2 = FUN_04e54150(uVar5,*(undefined8 *)(this + 0x198));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    plVar3 = (long *)FUN_04e5415c(uVar5,lVar4);
    iVar1 = FUN_04e54074(*(undefined4 *)(*plVar3 + 0x10c));
    lVar4 = lVar4 + 1;
  } while (iVar1 != param_1);
  return 1;
}


/* UICornucopia::FindEmptySlot() */

int __thiscall UICornucopia::FindEmptySlot(UICornucopia *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = IsSlotUse(this,iVar2);
    if (cVar1 == '\0') {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5);
  return -1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitCornucopiaProgressTips() */

void __thiscall UICornucopia::InitCornucopiaProgressTips(UICornucopia *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CornucopiaProgressTipsUI *this_00;
  UIWidgetImage *pUVar4;
  wstring *pwVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x150) == 0) {
    this_00 = ::operator_new(0xf8);
    CornucopiaProgressTipsUI::CornucopiaProgressTipsUI(this_00);
    *(CornucopiaProgressTipsUI **)(this + 0x150) = this_00;
    uVar1 = FUN_04e56010(0x91);
    uVar2 = FUN_04e56010(3);
    uVar3 = FUN_04e56010(0x1e);
    (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
    pwVar5 = *(wstring **)(this + 0x150);
    TodStringTranslate(L"[CORNUCOPIA_PROGRESS_TIPS_INFO]");
    TouchWidget::SetTouchDescription(pwVar5);
    FUN_05476c50(asStack_10);
    std::string::string(asStack_10,"UIImage_13");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (pUVar4 != (UIWidgetImage *)0x0) {
      (**(code **)(*(long *)pUVar4 + 0x60))(pUVar4,*(undefined8 *)(this + 0x150));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::GoToTaskView() */

void __thiscall UICornucopia::GoToTaskView(UICornucopia *this)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,2);
  UITabControl::SetTabSelected(this_00,pUVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::UpdateQuit() */

void __thiscall UICornucopia::UpdateQuit(UICornucopia *this)

{
  long lVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  if (*(long *)(this + 0x1b8) - lVar1 < 0) {
    UISingletonDialog<UICornucopia>::CloseDialog();
  }
  if ((*(long *)(this + 0x1b0) - lVar1 < 0) && (this[0x1c9] == (UICornucopia)0x0)) {
    std::string::string(asStack_10,"UIImage_TabMask1");
    pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_TabMask2");
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"UIImage_TabMask3");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    this[0x1c9] = (UICornucopia)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::UpdateTimer() */

void __thiscall UICornucopia::UpdateTimer(UICornucopia *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (*(long *)(this + 0x1c0) != 0) {
    lVar1 = LawnApp::GetRealServerTime(gLawnApp);
    lVar3 = *(long *)(this + 0x1b0);
    if (2 < *(int *)(this + 0x1ac)) {
      lVar3 = *(long *)(this + 0x1b8);
    }
    lVar3 = lVar3 - lVar1;
    LawnApp::GetRealBeijingTime(gLawnApp);
    if ((lVar3 < 0x15181) && (lVar3 < 1)) {
      uVar2 = *(undefined8 *)(this + 0x1c0);
      std::string::string(asStack_18,"[CORNUCOPIA_ACTIVITY_TIME_OVER]");
      StringHelper::ToStringValue(asStack_18);
      PuzzleTip::SetTip(uVar2,asStack_10);
      FUN_05476c50(asStack_10);
      std::string::~string(asStack_18);
      nop();
    }
    else {
      uVar2 = *(undefined8 *)(this + 0x1c0);
      TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,(float)lVar3,0);
      PuzzleTip::SetTip(uVar2,asStack_10);
      FUN_05476c50(asStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICornucopia::Update() */

void __thiscall UICornucopia::Update(UICornucopia *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  UpdateTimer(this);
  UpdateQuit(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::SetExpireTimeType(int) */

void __thiscall UICornucopia::SetExpireTimeType(UICornucopia *this,int param_1)

{
  int iVar1;
  UIWidgetText *pUVar2;
  UIWidgetText *pUVar3;
  UIWidgetText *pUVar4;
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1ac) = param_1;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIText_ActivityTimeLeft");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_ShopTimeLeft");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_LeaderBoardTimeLeft");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  iVar1 = *(int *)(this + 0x1ac);
  if (iVar1 < 3) {
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,1);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    *(UIWidgetText **)(this + 0x1c0) = pUVar2;
  }
  else if (iVar1 == 3) {
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,0);
    *(UIWidgetText **)(this + 0x1c0) = pUVar3;
  }
  else if (iVar1 == 4) {
    (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    *(UIWidgetText **)(this + 0x1c0) = pUVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICornucopia::TabSelectionChanged(int) */

void __thiscall UICornucopia::TabSelectionChanged(UICornucopia *this,int param_1)

{
  if (param_1 == 1) {
    SetExpireTimeType(this,0);
    return;
  }
  if (param_1 == 2) {
    SetExpireTimeType(this,1);
    return;
  }
  if (param_1 == 3) {
    SetExpireTimeType(this,2);
    return;
  }
  if (param_1 != 4) {
    if (param_1 != 5) {
      return;
    }
    SetExpireTimeType(this,4);
    return;
  }
  SetExpireTimeType(this,3);
  return;
}


/* non-virtual thunk to UICornucopia::TabSelectionChanged(int) */

void __thiscall UICornucopia::TabSelectionChanged(UICornucopia *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::EnableGachaButtonStatus(bool) */

void __thiscall UICornucopia::EnableGachaButtonStatus(UICornucopia *this,bool param_1)

{
  bool bVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIButton *pPVar3;
  PVZ2UIButton *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = !param_1;
  std::string::string(asStack_10,"UIButton_Gacha_One");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_Gacha_Ten");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIButton_1");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,bVar1);
  (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,bVar1);
  (**(code **)(*(long *)pPVar4 + 0x188))(pPVar4,bVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::ShowMainTips() */

void __thiscall UICornucopia::ShowMainTips(UICornucopia *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x148) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x148) = this_00;
    TodStringTranslate(L"[CORNUCOPIA_MAIN_TIPS_INFO]");
    TodStringTranslate(L"[REVIVE_TIP]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x148);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,CloseMainTips);
    Sexy::Delegate0::Delegate0<UICornucopia,void(UICornucopia::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x148));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x148));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::GachaForItems(int) */

void __thiscall UICornucopia::GachaForItems(UICornucopia *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIMessageBox *pUVar2;
  Image *pIVar3;
  long lVar4;
  wstring awStack_68 [8];
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_50,"mat_cornucopia_ticket");
  iVar1 = PlayerInfo::GetMaterialNum(this_01,asStack_50);
  std::string::~string(asStack_50);
  nop();
  if (iVar1 < param_1) {
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar2,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[MAT_CORNUCOPIA_TICKET_NOT_ENOUGH]");
      TodStringTranslate(L"[BUTTON_OK]");
      UIMessageBox::SetMessage(pUVar2,awStack_60,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar2,pIVar3);
      std::string::~string(asStack_50);
      nop();
      lVar4 = UIMessageBox::GetButtonCancel(pUVar2);
      thunk_FUN_05477b9c(lVar4 + 0xd8,awStack_58);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  else {
    *(int *)(this + 0x158) = param_1;
    pUVar2 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (pUVar2 != (UIMessageBox *)0x0) {
      UIMessageBox::SetShowType(pUVar2,6);
      TodStringTranslate(L"[REVIVE_TIP]");
      Sexy::StrFormat(L"%d",awStack_60,(ulong)(uint)param_1);
      TodStringTranslate(L"[CORNUCOPIA_GACHA_CONFIRM]");
      TodReplaceString((wstring *)asStack_50,L"{NUMS}",awStack_60);
      FUN_05476c50(asStack_50);
      UIMessageBox::SetMessage(pUVar2,awStack_58,awStack_68);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(pUVar2,pIVar3);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,GachaConfirm);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<UICornucopia,void(UICornucopia::*)(UIMessageBox*,int)>(aDStack_38,asStack_50);
      UIMessageBox::SetCallback(pUVar2,aDStack_38);
      FUN_05476c50(awStack_58);
      FUN_05476c50(awStack_60);
      FUN_05476c50(awStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::UICornucopia() */

void __thiscall UICornucopia::UICornucopia(UICornucopia *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<UICornucopia>::UISingletonDialog((UISingletonDialog<UICornucopia> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_069e2340;
  *(undefined **)(this + 0xd8) = &DAT_069e26a8;
  *(undefined **)(this + 0x138) = &DAT_069e26f0;
  *(undefined ***)(this + 0x140) = &PTR__UICornucopia_069e2708;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x158) = 1;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  this[0x1c8] = (UICornucopia)0x0;
  this[0x1c9] = (UICornucopia)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,CloseRewardDisplay);
  Sexy::Delegate0::Delegate0<UICornucopia,void(UICornucopia::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ResultClosed,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBubbleGenerate);
  Sexy::Delegate0::Delegate0<UICornucopia,void(UICornucopia::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::CornucopiaBubbleGenerate,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnShopBuyFinish);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<bool,S2C_ShopItemPurchaseInfo_const*,Sexy::CBMemberTranslatorX<UICornucopia,void(UICornucopia::*)(bool,S2C_ShopItemPurchaseInfo_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyShopBuyFinishDetails,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_b0 = local_50;
  uStack_a8 = uStack_48;
  local_a0 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UICornucopia,void(UICornucopia::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICornucopia::~UICornucopia() */

void __thiscall UICornucopia::~UICornucopia(UICornucopia *this)

{
  *(undefined ***)this = &PTR_GetClass_069e2340;
  *(undefined ***)(this + 0x140) = &PTR__UICornucopia_069e2708;
  *(undefined **)(this + 0xd8) = &DAT_069e26a8;
  *(undefined **)(this + 0x138) = &DAT_069e26f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>>::~vector
            ((vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>> *)(this + 400)
            );
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x178));
  std::vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>>::~vector
            ((vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>> *)
             (this + 0x160));
  UISingletonDialog<UICornucopia>::~UISingletonDialog((UISingletonDialog<UICornucopia> *)this);
  return;
}


/* non-virtual thunk to UICornucopia::~UICornucopia() */

void __thiscall UICornucopia::~UICornucopia(UICornucopia *this)

{
  ~UICornucopia(this + -0x140);
  return;
}


/* UICornucopia::~UICornucopia() */

void __thiscall UICornucopia::~UICornucopia(UICornucopia *this)

{
  ~UICornucopia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICornucopia::~UICornucopia() */

void __thiscall UICornucopia::~UICornucopia(UICornucopia *this)

{
  ~UICornucopia(this + -0x140);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitTasks() */

void __thiscall UICornucopia::InitTasks(UICornucopia *this)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long *plVar6;
  long lVar7;
  long *extraout_x0;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"UIImage_TaskBG");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar2 = FUN_04e56010(0xf);
  iVar3 = FUN_04e56010(0x1e);
  Sexy::Insets::Insets
            (aIStack_40,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,*(int *)(pUVar5 + 0x54) - iVar3)
  ;
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar2 = *(int *)(this_01 + 0x50);
  iVar3 = FUN_04e56010(0x8c);
  iVar4 = Sexy::LazySingleton<CornucopiaGradeTaskManager>::GetInstancePtr();
  HappyVaseBreakerTaskManager::GetTasksByGroupID(iVar4 + 8,true);
  uVar11 = 0;
  while( true ) {
    uVar1 = local_20;
    uVar9 = FUN_04e541e8(local_20,local_18);
    if (uVar9 <= uVar11) break;
    plVar6 = (long *)FUN_04e541f4(uVar1,uVar11);
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(*plVar6 + 0x20));
    lVar7 = (**(code **)(*plVar6 + 0x58))();
    FUN_04e53f60(*(undefined8 *)(lVar7 + 0x18));
    nop();
    iVar4 = FUN_04e56010(10);
    Sexy::Insets::Insets(aIStack_30,0,(iVar4 + iVar3) * (int)uVar11,iVar2,iVar3);
    (**(code **)(*extraout_x0 + 0x1a0))(extraout_x0,aIStack_30);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,extraout_x0);
    puVar8 = (undefined8 *)FUN_04e541f4(local_20,uVar11);
    (**(code **)(*extraout_x0 + 0x318))(extraout_x0,*puVar8);
    uVar11 = uVar11 + 1;
  }
  iVar2 = FUN_04e56010(10);
  pcVar10 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x54) = (iVar2 + iVar3) * (int)uVar9;
  (*pcVar10)(this_00,this_01);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_00);
  std::vector<GeneralTask*,std::allocator<GeneralTask*>>::~vector
            ((vector<GeneralTask*,std::allocator<GeneralTask*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::GiftReward() */

void __thiscall UICornucopia::GiftReward(UICornucopia *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2824];
  string asStack_1e0 [472];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_04e55f58(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_1e0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RequestGachaItems(int) */

void __thiscall UICornucopia::RequestGachaItems(UICornucopia *this,int param_1)

{
  string *this_00;
  DNetwork *this_01;
  char *__s;
  string *__n;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2832];
  string asStack_1d8 [464];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = asStack_d40;
  std::string::string(asStack_ce8,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (param_1 < 2) {
    __s = "0";
  }
  else {
    __s = "1";
  }
  std::string::append(this_00,__s,(size_t)__n);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04e55ea0(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1d8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICornucopia::GachaConfirm(UIMessageBox*, int) */

void __thiscall UICornucopia::GachaConfirm(UICornucopia *this,UIMessageBox *param_1,int param_2)

{
  UISingletonDialog<UIMessageBox>::CloseDialog();
  if (param_2 != 1) {
    return;
  }
  RequestGachaItems(this,*(int *)(this + 0x158));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::FillLeaderBoardDummyData(std::vector<CornucopiaRankData,
   std::allocator<CornucopiaRankData> >&, int) */

void UICornucopia::FillLeaderBoardDummyData(vector *param_1,int param_2)

{
  int iVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  int in_w2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar2;
  undefined8 local_28;
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  local_20 [24];
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(ulong)(uint)param_2;
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>::reserve
            ((vector<CornucopiaRankData,std::allocator<CornucopiaRankData>> *)in_x8,(long)in_w2);
  iVar1 = FUN_04e54178(*(undefined8 *)this,*(undefined8 *)(this + 8));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)in_x8);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>(local_20,(__normal_iterator *)&local_28);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::begin(this);
  std::
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  ::end(this);
  std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>::
  insert<__gnu_cxx::__normal_iterator<CornucopiaRankData*,std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>>,void>
            ();
  CornucopiaRankData::CornucopiaRankData((CornucopiaRankData *)local_20);
  if (0 < in_w2 - iVar1) {
    do {
      iVar2 = iVar2 + 1;
      std::vector<CornucopiaRankData,std::allocator<CornucopiaRankData>>::push_back
                ((vector<CornucopiaRankData,std::allocator<CornucopiaRankData>> *)in_x8,
                 (CornucopiaRankData *)local_20);
    } while (in_w2 - iVar1 != iVar2);
  }
  PakRecord::~PakRecord((PakRecord *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::ShowRewardPreview() */

void UICornucopia::ShowRewardPreview(void)

{
  UICornucopiaBonusDetail *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  CornucopiaData aCStack_150 [288];
  vector avStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UICornucopiaBonusDetail *)UICornucopiaBonusDetail::create(true);
  if (this != (UICornucopiaBonusDetail *)0x0) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
    pCVar1 = (CornucopiaData *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_00);
    CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
    UICornucopiaBonusDetail::InitPlantsList(this,avStack_30);
    UICornucopiaBonusDetail::updateItems(this,avStack_30);
    CornucopiaData::~CornucopiaData(aCStack_150);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitGachaButtons() */

void __thiscall UICornucopia::InitGachaButtons(UICornucopia *this)

{
  bool bVar1;
  PVZ2UIButton *pPVar2;
  PVZ2UIButton *pPVar3;
  undefined8 *puVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar5;
  PVZ2UIButton *pPVar6;
  undefined8 local_158;
  undefined8 local_150 [3];
  undefined1 local_138;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_150,"UIButton_Gacha_One");
  pPVar2 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_150);
  std::string::~string((string *)local_150);
  nop();
  local_158 = FUN_04e58bb8(*(undefined8 *)(pPVar2 + 8));
  local_150[0] = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(pPVar2 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_158,(rbtree_iterator *)local_150),
        bVar1) {
    puVar4 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_158);
    pPVar3 = (PVZ2UIButton *)*puVar4;
    if (pPVar3 != pPVar2) {
      *(uint *)(pPVar3 + 0x60) = *(uint *)(pPVar3 + 0x60) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_158);
  }
  std::string::string((string *)local_150,"UIButton_Gacha_Ten");
  pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_150);
  std::string::~string((string *)local_150);
  nop();
  local_158 = FUN_04e58bb8(*(undefined8 *)(pPVar3 + 8));
  local_150[0] = std::
                 __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                           ((TaskResource **)(pPVar3 + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_158,(rbtree_iterator *)local_150),
        bVar1) {
    puVar4 = (undefined8 *)
             std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                       ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_158);
    pPVar6 = (PVZ2UIButton *)*puVar4;
    if (pPVar6 != pPVar3) {
      *(uint *)(pPVar6 + 0x60) = *(uint *)(pPVar6 + 0x60) | 0x10;
    }
    std::_List_const_iterator<Sexy::FontLayer>::operator++
              ((_List_const_iterator<Sexy::FontLayer> *)&local_158);
  }
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar5 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData((CornucopiaData *)local_150,pCVar5);
  (**(code **)(*(long *)pPVar2 + 0x188))(pPVar2,local_138);
  (**(code **)(*(long *)pPVar3 + 0x188))(pPVar3,local_138);
  CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshTickets() */

void __thiscall UICornucopia::RefreshTickets(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetText *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string asStack_158 [8];
  CornucopiaData aCStack_150 [136];
  int local_c8 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  std::string::string(asStack_158,"UIText_Ticket");
  this_01 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  if (this_01 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_c8);
    UIWidgetText::SetString(this_01,asStack_158);
    std::string::~string(asStack_158);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  std::string::string(asStack_158,"mat_cornucopia_ticket");
  PlayerInfo::SetMaterialNum(this_03,asStack_158,local_c8[0]);
  std::string::~string(asStack_158);
  nop();
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshTotalGacha() */

void __thiscall UICornucopia::RefreshTotalGacha(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetText *pUVar2;
  undefined1 auStack_168 [8];
  wstring awStack_160 [8];
  string asStack_158 [8];
  CornucopiaData aCStack_150 [144];
  int local_c0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  std::string::string(asStack_158,"UIText_GachaCount");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    FUN_05478178(asStack_158,L"[CORNUCOPIA_TOTAL_GACHA_TITLE]",auStack_168);
    TodReplaceNumberString((wstring *)asStack_158,L"{NUMS}",local_c0);
    FUN_05476c50(asStack_158);
    nop();
    PuzzleTip::SetTip(pUVar2,awStack_160);
    FUN_05476c50(awStack_160);
  }
  std::string::string(asStack_158,"UIText_Gift_GachaCount");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  FUN_05478178(awStack_160,L"[CORNUCOPIA_GIFT_GACHA_COUNT_TITLE]",auStack_168);
  TodReplaceNumberString(awStack_160,L"{NUMS}",local_c0);
  PuzzleTip::SetTip(pUVar2,asStack_158);
  FUN_05476c50(asStack_158);
  FUN_05476c50(awStack_160);
  nop();
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshHarvestLimitTime() */

void __thiscall UICornucopia::RefreshHarvestLimitTime(UICornucopia *this)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar2;
  UIWidgetText *pUVar3;
  undefined8 uVar4;
  string asStack_188 [8];
  string asStack_180 [8];
  string asStack_178 [8];
  string asStack_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  CornucopiaData aCStack_150 [160];
  int local_b0;
  vector avStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar2 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar2);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_168,avStack_60);
  iVar1 = FUN_04e540cc(local_168,local_160);
  std::string::string(asStack_188,"0:0:0");
  nop();
  std::string::string(asStack_180,"0:0:0");
  nop();
  if (local_b0 <= iVar1) {
    uVar4 = FUN_04e540d8(local_168,(long)(local_b0 + -1));
    thunk_FUN_05475e00(asStack_188,uVar4);
    if (local_b0 < iVar1) {
      uVar4 = FUN_04e540d8(local_168,(long)local_b0);
      thunk_FUN_05475e00(asStack_180,uVar4);
    }
  }
  std::string::string(asStack_170,"UIText_CurrentLevelTime");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_170);
  std::string::~string(asStack_170);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    UIWidgetText::SetString(pUVar3,asStack_188);
  }
  std::string::string(asStack_170,"UIText_NextLevelTime");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_170);
  std::string::~string(asStack_170);
  nop();
  if (pUVar3 != (UIWidgetText *)0x0) {
    if (local_b0 == 10) {
      std::string::string(asStack_178,"[CORNUCOPIA_MAX_LEVEL]");
      StringHelper::ToStringValue(asStack_178);
      PuzzleTip::SetTip(pUVar3,asStack_170);
      FUN_05476c50(asStack_170);
      std::string::~string(asStack_178);
      nop();
    }
    else {
      UIWidgetText::SetString(pUVar3,asStack_180);
    }
  }
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_168);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshPlayerLevel() */

void __thiscall UICornucopia::RefreshPlayerLevel(UICornucopia *this)

{
  int iVar1;
  undefined4 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar3;
  UIWidgetText *pUVar4;
  UIWidgetText *pUVar5;
  UIWidgetText *pUVar6;
  UIWidgetImage *pUVar7;
  float fVar8;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  wstring awStack_170 [8];
  wstring awStack_168 [8];
  undefined1 auStack_160 [8];
  string asStack_158 [8];
  CornucopiaData aCStack_150 [152];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar3 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar3);
  std::string::string(asStack_158,"UIText_PlayerLevel");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  std::string::string(asStack_158,"UIText_Task_PlayerLevel");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  std::string::string(asStack_158,"UIText_Task_Level");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  Sexy::StrFormat(L"%d",auStack_178,(ulong)local_b0);
  if (pUVar4 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar4,auStack_178);
  }
  if (pUVar5 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar5,auStack_178);
  }
  if (pUVar6 != (UIWidgetText *)0x0) {
    PuzzleTip::SetTip(pUVar6,auStack_178);
  }
  Sexy::StrFormat(L"%d",awStack_170,(ulong)local_b4);
  Sexy::StrFormat(L"%d",awStack_168,(ulong)local_b8);
  std::operator+(awStack_170,L"/");
  std::operator+((wstring *)asStack_158,awStack_168);
  FUN_05476c50(asStack_158);
  std::string::string(asStack_158,"UIText_LevelExp");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  if (pUVar4 != (UIWidgetText *)0x0) {
    if (local_b0 == 10) {
      FUN_05478178(asStack_158,&DAT_056f11a8,auStack_180);
      PuzzleTip::SetTip(pUVar4,asStack_158);
      FUN_05476c50(asStack_158);
      nop();
    }
    else {
      PuzzleTip::SetTip(pUVar4,auStack_160);
    }
  }
  if (local_b0 == 10) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = (float)(int)local_b4 / (float)(int)local_b8;
  }
  std::string::string(asStack_158,"UIImage_LevelExpBg");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  iVar1 = FUN_04e53fa0(*(undefined4 *)(pUVar7 + 0x50));
  uVar2 = FUN_04e53fa4(*(undefined4 *)(pUVar7 + 0x54));
  std::string::string(asStack_158,"UIImage_LevelExp");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,0,0,(int)((float)iVar1 * fVar8),uVar2);
  std::string::string(asStack_158,"UIImage_Task_LevelExpBg");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  iVar1 = FUN_04e53fa0(*(undefined4 *)(pUVar7 + 0x50));
  uVar2 = FUN_04e53fa4(*(undefined4 *)(pUVar7 + 0x54));
  std::string::string(asStack_158,"UIImage_Task_LevelExp");
  pUVar7 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  (**(code **)(*(long *)pUVar7 + 0x198))(pUVar7,0,0,(int)((float)iVar1 * fVar8),uVar2);
  FUN_05476c50(auStack_160);
  FUN_05476c50(awStack_168);
  FUN_05476c50(awStack_170);
  FUN_05476c50(auStack_178);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshCornucoppiaProgress() */

void __thiscall UICornucopia::RefreshCornucoppiaProgress(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetAnim *pUVar2;
  ulong uVar3;
  UIWidgetText *pUVar4;
  string asStack_160 [8];
  string asStack_158 [8];
  CornucopiaData aCStack_150 [192];
  uint local_90;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  std::string::string(asStack_158,"UIAnim_Cornucopia");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetAnim>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  uVar3 = GetServerTotalIndex(this,local_90);
  Sexy::StrFormat("idle%d",asStack_160,uVar3 & 0xffffffff);
  UIWidgetAnim::SetLabel((string *)pUVar2);
  std::string::string(asStack_158,"UIText_ServerTotalGem");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  if (pUVar4 != (UIWidgetText *)0x0) {
    Sexy::StrFormat(L"%d",asStack_158,(ulong)local_90);
    PuzzleTip::SetTip(pUVar4,asStack_158);
    FUN_05476c50(asStack_158);
  }
  std::string::~string(asStack_160);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICornucopia::CloseRewardDisplay() */

void __thiscall UICornucopia::CloseRewardDisplay(UICornucopia *this)

{
  if (*(int *)(this + 0x1a8) != 1) {
    return;
  }
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  RefreshCornucoppiaProgress(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshNextLevelProgress() */

void __thiscall UICornucopia::RefreshNextLevelProgress(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetText *pUVar2;
  undefined1 auStack_170 [8];
  wstring awStack_168 [8];
  undefined1 auStack_160 [8];
  wstring awStack_158 [8];
  CornucopiaData aCStack_150 [152];
  int local_b8;
  int local_b4;
  int local_b0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  Sexy::StrFormat(L"%d",awStack_168,(ulong)(uint)(local_b8 - local_b4));
  TodStringTranslate(L"[CORNUCOPIA_NEXT_LEVEL_DESC]");
  TodReplaceString(awStack_158,L"{NUMS}",awStack_168);
  FUN_05476c50(awStack_158);
  std::string::string((string *)awStack_158,"UIText_Task_LevelExpProgress");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)awStack_158);
  std::string::~string((string *)awStack_158);
  nop();
  if (pUVar2 != (UIWidgetText *)0x0) {
    if (local_b0 == 10) {
      FUN_05478178(awStack_158,&DAT_056f11a8,auStack_170);
      PuzzleTip::SetTip(pUVar2,awStack_158);
      FUN_05476c50(awStack_158);
      nop();
    }
    else {
      PuzzleTip::SetTip(pUVar2,auStack_160);
    }
  }
  FUN_05476c50(auStack_160);
  FUN_05476c50(awStack_168);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshGiftDesc() */

void __thiscall UICornucopia::RefreshGiftDesc(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetText *pUVar2;
  undefined1 auStack_168 [8];
  wstring awStack_160 [8];
  string asStack_158 [8];
  CornucopiaData aCStack_150 [144];
  int local_c0;
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  std::string::string(asStack_158,"UIText_Gift_Reward");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  FUN_05478178(awStack_160,L"[GEM_REWARD]",auStack_168);
  TodReplaceNumberString(awStack_160,L"{NUM}",local_18);
  PuzzleTip::SetTip(pUVar2,asStack_158);
  FUN_05476c50(asStack_158);
  FUN_05476c50(awStack_160);
  nop();
  std::string::string(asStack_158,"UIText_Gift_GachaCount");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  FUN_05478178(awStack_160,L"[CORNUCOPIA_GIFT_GACHA_COUNT_TITLE]",auStack_168);
  TodReplaceNumberString(awStack_160,L"{NUMS}",local_c0);
  PuzzleTip::SetTip(pUVar2,asStack_158);
  FUN_05476c50(asStack_158);
  FUN_05476c50(awStack_160);
  nop();
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshMask() */

void __thiscall UICornucopia::RefreshMask(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  UIWidgetImage *pUVar2;
  UIWidgetImage *pUVar3;
  UIWidgetImage *pUVar4;
  UIWidgetImage *pUVar5;
  string asStack_158 [8];
  CornucopiaData aCStack_150 [24];
  undefined1 local_138;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  std::string::string(asStack_158,"UIImage_TabMask1");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  std::string::string(asStack_158,"UIImage_TabMask2");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  std::string::string(asStack_158,"UIImage_TabMask3");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  std::string::string(asStack_158,"UIImage_TabMask4");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,local_138);
  (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,local_138);
  (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,local_138);
  (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,0);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RefreshMaterial() */

void __thiscall UICornucopia::RefreshMaterial(UICornucopia *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  UIWidgetText *this_03;
  int local_160 [2];
  string asStack_158 [8];
  CornucopiaData aCStack_150 [140];
  int local_c4;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar1 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  std::string::string(asStack_158,"mat_cornucopia_emblem");
  PlayerInfo::SetMaterialNum(this_02,asStack_158,local_c4);
  std::string::~string(asStack_158);
  nop();
  local_160[0] = local_c4;
  std::string::string(asStack_158,"UIText_Currency");
  this_03 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_158);
  std::string::~string(asStack_158);
  nop();
  if (this_03 != (UIWidgetText *)0x0) {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_160);
    UIWidgetText::SetString(this_03,asStack_158);
    std::string::~string(asStack_158);
  }
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitPresent() */

void __thiscall UICornucopia::InitPresent(UICornucopia *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UIWidgetImage *pUVar13;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  CornucopiaData *pCVar14;
  long lVar15;
  NewTreasureWidget *this_03;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  WorldLevelPackageBonusWidget *this_04;
  Image *pIVar19;
  UIWidgetImage *this_05;
  int iVar20;
  code *pcVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  Insets aIStack_180 [16];
  ulong local_170;
  undefined8 local_168;
  ulong local_160;
  ulong local_158;
  string asStack_150 [88];
  undefined8 local_f8;
  undefined8 local_f0;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_150,"UIImage_Present_Background");
  pUVar13 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_150);
  std::string::~string(asStack_150);
  nop();
  if (pUVar13 != (UIWidgetImage *)0x0) {
    (**(code **)(*(long *)pUVar13 + 0x80))(pUVar13,1,1);
  }
  uVar24 = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar14 = (CornucopiaData *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_02);
  CornucopiaData::CornucopiaData((CornucopiaData *)asStack_150,pCVar14);
  iVar3 = FUN_04e56010(5);
  iVar4 = FUN_04e56010(0x14);
  iVar6 = *(int *)(pUVar13 + 0x50);
  iVar5 = FUN_04e56010(10);
  Sexy::Insets::Insets(aIStack_180,iVar3,iVar3,iVar6 - iVar4,*(int *)(pUVar13 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_180);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_180);
  iVar6 = FUN_04e56010(0);
  uVar1 = *(undefined4 *)(this_00 + 0x54);
  iVar3 = (int)((float)*(int *)(this_00 + 0x50) * 0.3030303);
  lVar15 = FUN_04e541a8(local_f8,local_f0);
  uVar22 = 0;
  if (lVar15 == 0) {
LAB_04e5f998:
    iVar4 = FUN_04e56010(5);
    pcVar21 = *(code **)(*(long *)pUVar13 + 0x60);
    *(int *)(this_01 + 0x50) = iVar6 + (iVar4 + iVar3) * (int)uVar22;
    (*pcVar21)(pUVar13,this_00);
    (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
    this_01[0x59] = (Widget)0x0;
    CornucopiaData::~CornucopiaData((CornucopiaData *)asStack_150);
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_04e5f69c:
  uVar22 = 0;
  this_03 = ::operator_new(0x118);
  NewTreasureWidget::NewTreasureWidget(this_03);
  iVar4 = FUN_04e56010(5);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,iVar6 + (iVar4 + iVar3) * (int)uVar24,iVar6,iVar3,uVar1);
  (**(code **)(*(long *)this_03 + 0x318))(this_03,uVar24 & 0xffffffff);
  iVar4 = FUN_04e56010(0xa0);
  puVar16 = (undefined8 *)FUN_04e541bc(local_f8,uVar24);
  iVar5 = FUN_04e541c8(*puVar16,puVar16[1]);
  Sexy::Insets::Insets((Insets *)&local_170);
  iVar7 = FUN_04e56010(0x4b);
  iVar8 = FUN_04e56010(0x28);
  iVar9 = FUN_04e56010(5);
  iVar10 = FUN_04e56010(0);
LAB_04e5f79c:
  do {
    puVar16 = (undefined8 *)FUN_04e541bc(local_f8,uVar24);
    uVar23 = *puVar16;
    uVar17 = FUN_04e541c8(uVar23,puVar16[1]);
    if (uVar17 <= uVar22) break;
    piVar18 = (int *)FUN_04e541dc(uVar23,uVar22);
    iVar20 = *piVar18;
    iVar11 = piVar18[1];
    this_04 = ::operator_new(0xf0);
    WorldLevelPackageBonusWidget::WorldLevelPackageBonusWidget(this_04,iVar20,iVar11);
    iVar20 = iVar7 + iVar9;
    if (uVar22 == 0) {
LAB_04e5f808:
      iVar11 = iVar20;
      iVar20 = 0;
    }
    else {
      iVar11 = 0;
      iVar20 = 0;
      if ((int)uVar22 != 1) goto LAB_04e5f808;
      iVar20 = iVar8 + iVar10;
      if (iVar5 == 3) {
        uVar22 = uVar22 + 1;
        Sexy::Insets::Insets
                  ((Insets *)&local_160,(iVar3 - iVar7) / 2,iVar4 + iVar8 + iVar10,iVar7,iVar8);
        local_168 = local_158;
        uVar17 = local_168;
        local_168._4_4_ = (undefined4)(local_158 >> 0x20);
        uVar2 = local_168._4_4_;
        local_170 = local_160;
        local_168 = uVar17;
        (**(code **)(*(long *)this_04 + 0x198))
                  (this_04,local_160 & 0xffffffff,local_160 >> 0x20,local_158 & 0xffffffff,uVar2);
        (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
        goto LAB_04e5f79c;
      }
    }
    Sexy::Insets::Insets
              ((Insets *)&local_160,((iVar3 + iVar7 * -2) - iVar9) / 2 + iVar11,iVar4 + iVar20,iVar7
               ,iVar8);
    local_168 = local_158;
    uVar17 = local_168;
    local_168._4_4_ = (undefined4)(local_158 >> 0x20);
    uVar2 = local_168._4_4_;
    local_170 = local_160;
    local_168 = uVar17;
    (**(code **)(*(long *)this_04 + 0x198))
              (this_04,local_160 & 0xffffffff,local_160 >> 0x20,local_158 & 0xffffffff,uVar2);
    (**(code **)(*(long *)this_03 + 0x60))(this_03,this_04);
    if (uVar22 == 0) {
      pIVar19 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f1c8);
      this_05 = ::operator_new(0x118);
      UIWidgetImage::UIWidgetImage(this_05,pIVar19);
      iVar11 = FUN_04e56010(0x14);
      iVar20 = *(int *)(this_04 + 0x48);
      iVar12 = FUN_04e56010(0x17);
      (**(code **)(*(long *)this_05 + 0x198))
                (this_05,iVar11 + iVar20,*(int *)(this_04 + 0x4c) - iVar12,iVar8,iVar8);
      (**(code **)(*(long *)this_03 + 0x60))(this_03,this_05);
    }
    uVar22 = uVar22 + 1;
  } while( true );
  uVar24 = uVar24 + 1;
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
  uVar22 = FUN_04e541a8(local_f8,local_f0);
  if (uVar22 <= uVar24) goto LAB_04e5f998;
  goto LAB_04e5f69c;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitShopWidgets(CornucopiaData const&) */

void __thiscall UICornucopia::InitShopWidgets(UICornucopia *this,CornucopiaData *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  Widget *pWVar13;
  ulong uVar14;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  CornucopiaShopCommonWidget *pCVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  NameMapperBase *this_02;
  ProfileMgr *pPVar19;
  PlayerInfo *pPVar20;
  code *pcVar21;
  CornucopiaShopCommonWidget *local_48;
  Insets aIStack_40 [16];
  Insets aIStack_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>>::clear
            ((vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>> *)
             (this + 0x160));
  std::string::string((string *)&local_20,"Widget_Shop");
  pWVar13 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  (**(code **)(*(long *)pWVar13 + 0x80))(pWVar13,1,1);
  uVar14 = FUN_04e540e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
  iVar4 = FUN_04e53fa0(*(undefined4 *)(pWVar13 + 0x50));
  iVar5 = FUN_04e53fa4(*(undefined4 *)(pWVar13 + 0x54));
  iVar6 = FUN_04e56010(6);
  iVar7 = FUN_04e56010(1);
  iVar8 = FUN_04e56010(0x14);
  iVar9 = FUN_04e56010(10);
  iVar2 = (iVar4 + iVar6 * -2 + iVar8 * -2) / 3;
  this_00 = ::operator_new(0x248);
  iVar4 = iVar8 + (iVar5 + iVar7 * -2 + iVar9 * -2) / 2;
  iVar9 = iVar4 + iVar9;
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  iVar5 = FUN_04e53fa0(*(undefined4 *)(pWVar13 + 0x50));
  iVar10 = FUN_04e53fa4(*(undefined4 *)(pWVar13 + 0x54));
  Sexy::Insets::Insets(aIStack_40,0,0,iVar5,iVar10);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_40);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)pWVar13 + 0x60))(pWVar13,this_00);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar11 = FUN_04e53fa0(*(undefined4 *)(pWVar13 + 0x50));
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,uVar11,iVar7 + iVar9 * (int)((float)uVar14 * 0.33333334));
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  uVar14 = 0;
  while( true ) {
    iVar5 = (int)uVar14;
    uVar17 = FUN_04e540e0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
    if (uVar17 <= uVar14) break;
    Sexy::Insets::Insets
              (aIStack_30,iVar6 + (iVar2 + iVar8) * (iVar5 % 3),iVar7 + iVar9 * (iVar5 / 3),iVar2,
               iVar4);
    CommonRewardItemData::CommonRewardItemData((CommonRewardItemData *)&local_20);
    piVar18 = (int *)FUN_04e5411c(*(undefined8 *)(param_1 + 0xa8),uVar14);
    local_20 = *piVar18;
    local_1c = piVar18[1];
    local_18 = piVar18[5];
    local_14 = piVar18[2];
    this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
    cVar3 = NameMapperBase::ContainsId(this_02,local_20);
    if (cVar3 == '\0') {
      lVar16 = FUN_04e5411c(*(undefined8 *)(param_1 + 0xa8),uVar14);
      local_10 = (uint)(*(int *)(lVar16 + 0xc) != *(int *)(lVar16 + 0x10));
    }
    else {
      pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar20 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
      uVar12 = PlayerInfo::IsArtifactUnlocked(pPVar20,local_20);
      local_10 = uVar12 & 0xff ^ 1;
    }
    pCVar15 = ::operator_new(0x1d0);
    CornucopiaShopCommonWidget::CornucopiaShopCommonWidget(pCVar15,iVar5);
    pcVar21 = *(code **)(*(long *)pCVar15 + 0x1a0);
    pCVar15[0x59] = (CornucopiaShopCommonWidget)0x0;
    local_48 = pCVar15;
    (*pcVar21)(pCVar15,aIStack_30);
    FUN_04e5406c(local_48 + 0x1c0,-iVar8);
    lVar16 = FUN_04e5411c(*(undefined8 *)(param_1 + 0xa8),uVar14);
    bVar1 = *(int *)(lVar16 + 0x20) <= *(int *)(param_1 + 0xa0);
    uVar11 = 2;
    if (bVar1) {
      uVar11 = 1;
    }
    FUN_04e54064(local_48 + 0x1a0,uVar11);
    FUN_04e54054(local_48 + 0x170,bVar1);
    pCVar15 = local_48;
    lVar16 = FUN_04e5411c(*(undefined8 *)(param_1 + 0xa8),uVar14);
    CornucopiaShopCommonWidget::SetLockDescriptionIndex(pCVar15,*(int *)(lVar16 + 0x20));
    pCVar15 = local_48;
    lVar16 = FUN_04e5411c(*(undefined8 *)(param_1 + 0xa8),uVar14);
    CornucopiaShopCommonWidget::SetBuyTimes(pCVar15,*(int *)(lVar16 + 0xc),*(int *)(lVar16 + 0x10));
    (**(code **)(*(long *)local_48 + 0x310))(local_48,(string *)&local_20);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,local_48);
    std::vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>>::push_back
              ((vector<CornucopiaShopCommonWidget*,std::allocator<CornucopiaShopCommonWidget*>> *)
               (this + 0x160),&local_48);
    uVar14 = uVar14 + 1;
  }
  pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar20 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
  std::string::string((string *)&local_20,"mat_cornucopia_emblem");
  PlayerInfo::SetMaterialNum(pPVar20,(string *)&local_20,*(int *)(param_1 + 0x8c));
  std::string::~string((string *)&local_20);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UICornucopia::UpdateShopUI(CornucopiaData const&) */

void __thiscall UICornucopia::UpdateShopUI(UICornucopia *this,CornucopiaData *param_1)

{
  InitShopWidgets(this,param_1);
  RefreshMaterial(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::GoToShopView() */

void __thiscall UICornucopia::GoToShopView(UICornucopia *this)

{
  UITabControl *this_00;
  UITabContent *pUVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  CornucopiaData *pCVar2;
  string asStack_150 [328];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_150,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_150);
  std::string::~string(asStack_150);
  nop();
  pUVar1 = (UITabContent *)UITabControl::GetTab(this_00,4);
  UITabControl::SetTabSelected(this_00,pUVar1);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar2 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_01);
  CornucopiaData::CornucopiaData((CornucopiaData *)asStack_150,pCVar2);
  UpdateShopUI(this,(CornucopiaData *)asStack_150);
  CornucopiaData::~CornucopiaData((CornucopiaData *)asStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::BubbleGenerate(int, long) */

void __thiscall UICornucopia::BubbleGenerate(UICornucopia *this,int param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Widget *pWVar3;
  CornucopiaBubbleWidget *this_00;
  string asStack_18 [8];
  CornucopiaBubbleWidget *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("Harvest_Item_%d",asStack_18);
  pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_18);
  if (pWVar3 != (Widget *)0x0) {
    (**(code **)(*(long *)pWVar3 + 0x80))(pWVar3,1,1);
    uVar1 = *(undefined4 *)(pWVar3 + 0x50);
    uVar2 = *(undefined4 *)(pWVar3 + 0x54);
    this_00 = ::operator_new(0x130);
    CornucopiaBubbleWidget::CornucopiaBubbleWidget(this_00,param_1,param_2);
    local_10 = this_00;
    (**(code **)(*(long *)this_00 + 0x198))(this_00,0,0,uVar1,uVar2);
    (**(code **)(*(long *)pWVar3 + 0x60))(pWVar3,local_10);
    std::vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>>::push_back
              ((vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>> *)
               (this + 400),&local_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitBubble() */

void __thiscall UICornucopia::InitBubble(UICornucopia *this)

{
  uint uVar1;
  undefined8 uVar2;
  Widget *pWVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  string asStack_150 [24];
  char local_138;
  undefined8 local_88;
  undefined8 local_80;
  int local_70;
  long local_68;
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>>::clear
            ((vector<CornucopiaBubbleWidget*,std::allocator<CornucopiaBubbleWidget*>> *)(this + 400)
            );
  do {
    Sexy::StrFormat("Harvest_Item_%d",asStack_150,uVar7);
    pWVar3 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_150);
    if (pWVar3 != (Widget *)0x0) {
      (**(code **)(*(long *)pWVar3 + 0x80))(pWVar3,1,1);
    }
    uVar1 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar1;
    std::string::~string(asStack_150);
  } while (uVar1 != 5);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar4 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData((CornucopiaData *)asStack_150,pCVar4);
  uVar7 = 0;
  if (local_138 == '\0') {
    while( true ) {
      uVar2 = local_88;
      uVar6 = FUN_04e5409c(local_88,local_80);
      if (uVar6 <= uVar7) break;
      lVar5 = FUN_04e54090(uVar2,uVar7);
      BubbleGenerate(this,*(int *)(lVar5 + 8),0);
      uVar7 = uVar7 + 1;
    }
    if (uVar6 != 5) {
      BubbleGenerate(this,local_70,local_68);
    }
  }
  CornucopiaData::~CornucopiaData((CornucopiaData *)asStack_150);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::OnBubbleGenerate() */

void __thiscall UICornucopia::OnBubbleGenerate(UICornucopia *this)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar3;
  int *piVar4;
  long lVar5;
  CornucopiaData aCStack_150 [160];
  int local_b0;
  undefined8 local_48;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FindEmptySlot(this);
  if (iVar2 != -1) {
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
    pCVar3 = (CornucopiaData *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_end(this_00);
    CornucopiaData::CornucopiaData(aCStack_150,pCVar3);
    piVar4 = (int *)FUN_04e54148(local_48,(long)(local_b0 + -1));
    iVar1 = *piVar4;
    lVar5 = LawnApp::GetRealServerTime(gLawnApp);
    BubbleGenerate(this,iVar2,lVar5 + iVar1);
    CornucopiaData::~CornucopiaData(aCStack_150);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::NotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall
UICornucopia::NotifyRefreshActivityList(UICornucopia *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CornucopiaMgr *this_00;
  int local_1dc;
  undefined8 local_1d8;
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1dc = 0x2a6f;
    local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
    local_150[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04e5407c(local_1c8);
      if ((cVar2 != '\0') && (local_1b8 != '\0')) {
        CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
        cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
        if (cVar2 != '\0') {
          this_00 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
          CornucopiaMgr::LoadData(this_00,(CornucopiaData *)local_150);
          UpdateShopUI(this,(CornucopiaData *)local_150);
          RefreshTickets(this);
          RefreshPlayerLevel(this);
          RefreshNextLevelProgress(this);
          RefreshHarvestLimitTime(this);
          RefreshTotalGacha(this);
        }
        CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
      }
      ActiveItem::~ActiveItem(aAStack_1d0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::OnShopBuyFinish(bool, S2C_ShopItemPurchaseInfo const*) */

void __thiscall
UICornucopia::OnShopBuyFinish(UICornucopia *this,bool param_1,S2C_ShopItemPurchaseInfo *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  NameMapperBase *this_00;
  ulong uVar5;
  undefined8 *puVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  CornucopiaData *pCVar7;
  int *piVar8;
  undefined4 *puVar9;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  CornucopiaMgr *this_04;
  char *pcVar10;
  TGALogMgr *this_05;
  DString *__n;
  ulong uVar11;
  undefined8 uVar12;
  int local_354;
  DString aDStack_350 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_340 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_328 [48];
  GAME_ITEM_INFO aGStack_2f8 [16];
  string asStack_2e8 [32];
  undefined1 auStack_2c8 [8];
  string asStack_2c0 [140];
  undefined4 local_234;
  undefined8 local_218;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (*(int *)(param_2 + 0x14) == 0xf)) {
    iVar1 = *(int *)(param_2 + 0x20);
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    std::string::string(asStack_2c0,"mat_cornucopia_emblem");
    iVar3 = NameMapperBase::GetIdForName(this_00,asStack_2c0);
    std::string::~string(asStack_2c0);
    nop();
    if (iVar1 == iVar3) {
      uVar12 = *(undefined8 *)(this + 0x160);
      uVar11 = 0;
      uVar5 = FUN_04e54128(uVar12,*(undefined8 *)(this + 0x168));
      if (uVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_04e54134(uVar12,uVar11);
          if ((CornucopiaShopCommonWidget *)*puVar6 != (CornucopiaShopCommonWidget *)0x0) {
            cVar2 = CornucopiaShopCommonWidget::CheckShopItem
                              ((CornucopiaShopCommonWidget *)*puVar6,param_2);
            if (cVar2 != '\0') {
              puVar6 = (undefined8 *)FUN_04e54134(*(undefined8 *)(this + 0x160),uVar11);
              CornucopiaShopCommonWidget::UpdateShopCommonWidget
                        ((S2C_ShopItemPurchaseInfo *)*puVar6);
              break;
            }
            uVar12 = *(undefined8 *)(this + 0x160);
            uVar5 = FUN_04e54128(uVar12,*(undefined8 *)(this + 0x168));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
      ProfileChangeItemAmount(*(int *)(param_2 + 0x20),-*(int *)(param_2 + 0x24),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_2c0);
      this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
      pCVar7 = (CornucopiaData *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_01);
      CornucopiaData::CornucopiaData((CornucopiaData *)asStack_2c0,pCVar7);
      piVar8 = (int *)FUN_04e5413c(local_218,(long)*(int *)(param_2 + 0x18));
      local_354 = *piVar8;
      ProfileChangeItemAmount(local_354,*(int *)(param_2 + 0x1c),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_2f8);
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_328);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_340);
      puVar9 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_328,&local_354);
      *puVar9 = *(undefined4 *)(param_2 + 0x1c);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_340,&local_354);
      UIRedPacketResult::create((map *)amStack_328,(vector *)avStack_340,true);
      uVar4 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar4);
      std::string::string((string *)aGStack_2f8,"");
      FUN_05462980(auStack_178,aGStack_2f8);
      std::string::~string((string *)aGStack_2f8);
      nop();
      uVar12 = FUN_0546065c(auStack_168,local_354);
      uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
      uVar12 = FUN_0546065c(uVar12,*(undefined4 *)(param_2 + 0x1c));
      FUN_054603b8(uVar12,&DAT_05594620);
      this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
      __n = aDStack_350;
      std::string::string((string *)aGStack_2f8,"mat_cornucopia_emblem");
      uVar4 = PlayerInfo::GetMaterialNum(this_03,(string *)aGStack_2f8);
      std::string::~string((string *)aGStack_2f8);
      nop();
      local_234 = uVar4;
      this_04 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
      CornucopiaMgr::LoadData(this_04,(CornucopiaData *)asStack_2c0);
      RefreshMaterial(this);
      TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)aGStack_2f8);
      DString::DString(aDStack_350,6);
      pcVar10 = (char *)DString::c_str(aDStack_350);
      std::string::append((string *)aGStack_2f8,pcVar10,(size_t)__n);
      DString::~DString(aDStack_350);
      DString::DString(aDStack_350,*(int *)(param_2 + 0x24));
      pcVar10 = (char *)DString::c_str(aDStack_350);
      std::string::append(asStack_2e8,pcVar10,(size_t)__n);
      DString::~DString(aDStack_350);
      FUN_05462824(aDStack_350,auStack_178);
      FUN_05474278(auStack_2c8,aDStack_350);
      std::string::~string((string *)aDStack_350);
      this_05 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogMgr::LogCornucopiaData(this_05,(TGACornucopiaData *)aGStack_2f8);
      TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)aGStack_2f8);
      FUN_054617bc(auStack_178);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_340);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_328
                );
      CornucopiaData::~CornucopiaData((CornucopiaData *)asStack_2c0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::InitGift() */

void __thiscall UICornucopia::InitGift(UICornucopia *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar5;
  UIWidgetText *pUVar6;
  UIWidgetImage *this_01;
  ulong uVar7;
  Image *pIVar8;
  UIWidgetText *pUVar9;
  UIWidgetText *pUVar10;
  UIWidgetText *pUVar11;
  Widget *pWVar12;
  long lVar13;
  string *extraout_x0;
  long *plVar14;
  string *extraout_x0_00;
  PVZ2UIButton *this_02;
  CachedUIResourcePtr<Sexy::Image> *this_03;
  byte bVar15;
  code *pcVar16;
  string asStack_188 [8];
  string asStack_180 [8];
  string asStack_178 [8];
  string asStack_170 [8];
  wstring awStack_168 [8];
  undefined4 local_160 [4];
  CornucopiaData aCStack_150 [24];
  char local_138;
  byte local_100;
  int local_c0;
  byte local_bc;
  int local_ac [7];
  int local_90 [30];
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar5 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData(aCStack_150,pCVar5);
  std::string::string((string *)local_160,"UIText_Gift_Gem");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_90);
  UIWidgetText::SetString(pUVar6,(string *)local_160);
  std::string::~string((string *)local_160);
  std::string::string((string *)local_160,"UIImage_Gift_Center");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  uVar7 = GetServerTotalIndex(this,local_90[0]);
  Sexy::StrFormat("IMAGE_UI_CORNUCOPIA_TREASURE_BOWL_%d",asStack_188,uVar7 & 0xffffffff);
  pIVar8 = (Image *)StringHelper::ToImage(asStack_188,false);
  UIWidgetImage::SetImage(this_01,pIVar8);
  std::string::string((string *)local_160,"UIText_Gift_Strip_1");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  std::string::string((string *)local_160,"UIText_Gift_Strip_2");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  std::string::string((string *)local_160,"UIText_Gift_Strip_3");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  std::string::string((string *)local_160,"UIText_Gift_Strip_4");
  pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  FUN_05478178(awStack_168,L"[CORNUCOPIA_GIFT_REWARD_STRIP_1]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUM}",(int)((double)local_90[0] * 0.005));
  PuzzleTip::SetTip(pUVar6,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  FUN_05478178(awStack_168,L"[CORNUCOPIA_GIFT_REWARD_STRIP_2]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUM}",(int)((double)local_90[0] * 0.0025));
  PuzzleTip::SetTip(pUVar9,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  FUN_05478178(awStack_168,L"[CORNUCOPIA_GIFT_REWARD_STRIP_3]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUM}",(int)((double)local_90[0] * 0.002));
  PuzzleTip::SetTip(pUVar10,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  FUN_05478178(awStack_168,L"[CORNUCOPIA_GIFT_REWARD_STRIP_4]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUM}",(int)((double)local_90[0] * 0.001));
  PuzzleTip::SetTip(pUVar11,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  std::string::string((string *)local_160,"Widget_Gift_Rank");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  if (local_bc == 0) {
    TodStringTranslate(L"[PLANT_FAMILY_LOCKED]");
    pUVar6 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_160);
    FUN_05476c50((string *)local_160);
    (**(code **)(*(long *)pUVar6 + 0x198))
              (pUVar6,0,0,*(undefined4 *)(pWVar12 + 0x50),*(undefined4 *)(pWVar12 + 0x54));
    pcVar16 = *(code **)(*(long *)pUVar6 + 0x170);
    Sexy::Color::Color((Color *)local_160,0x66,0x37,0);
    (*pcVar16)(pUVar6,0,(string *)local_160);
    FUN_04e54e28(pUVar6 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar6,0xa4);
    (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,pUVar6);
    goto LAB_04e63cac;
  }
  if (local_ac[0] == 1) {
    this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f948;
LAB_04e64204:
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_03);
    pUVar6 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage((UIWidgetImage *)pUVar6,pIVar8);
    uVar3 = FUN_04e56010(0xf);
    uVar4 = FUN_04e56010(0x28);
    (**(code **)(*(long *)pUVar6 + 0x198))(pUVar6,uVar3,uVar3,uVar4,uVar4);
    local_160[0] = 9;
    UIWidgetImage::SetImageType((UIWidgetImage *)pUVar6,(string *)local_160,0.0);
  }
  else {
    if (local_ac[0] == 2) {
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f9f0;
      goto LAB_04e64204;
    }
    if (local_ac[0] == 3) {
      this_03 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b9f970;
      goto LAB_04e64204;
    }
    if (local_ac[0] - 4U < 0x1f1) {
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_ac);
      Sexy::ToWString((string *)awStack_168);
      pUVar6 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_160);
      FUN_05476c50((string *)local_160);
      std::string::~string((string *)awStack_168);
      (**(code **)(*(long *)pUVar6 + 0x198))
                (pUVar6,0,0,*(undefined4 *)(pWVar12 + 0x50),*(undefined4 *)(pWVar12 + 0x54));
      pcVar16 = *(code **)(*(long *)pUVar6 + 0x170);
      Sexy::Color::Color((Color *)local_160,0x66,0x37,0);
    }
    else {
      std::string::string((string *)awStack_168,"500+");
      Sexy::ToWString((string *)awStack_168);
      pUVar6 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(pUVar6,(wstring *)local_160);
      FUN_05476c50((string *)local_160);
      std::string::~string((string *)awStack_168);
      nop();
      (**(code **)(*(long *)pUVar6 + 0x198))
                (pUVar6,0,0,*(undefined4 *)(pWVar12 + 0x50),*(undefined4 *)(pWVar12 + 0x54));
      pcVar16 = *(code **)(*(long *)pUVar6 + 0x170);
      Sexy::Color::Color((Color *)local_160,0x66,0x37,0);
    }
    (*pcVar16)(pUVar6,0,(string *)local_160);
    FUN_04e54e28(pUVar6 + 0xe0);
    UIWidgetText::SetFontIndex(pUVar6,0xa4);
  }
  (**(code **)(*(long *)pWVar12 + 0x60))(pWVar12,pUVar6);
LAB_04e63cac:
  std::string::string((string *)local_160,"Widget_Gift_Headshot");
  pWVar12 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  lVar13 = DSingleton<UserInfo>::getInstance();
  iVar2 = FUN_04e54088(*(undefined4 *)(lVar13 + 0x24));
  DSingleton<HeadshotConfig>::getInstance();
  nop();
  DString::DString((DString *)local_160,iVar2);
  DString::operator_cast_to_string((DString *)local_160);
  std::string::string(asStack_170,"plant");
  std::string::string((string *)awStack_168,"init");
  DIniFile::getItem(extraout_x0,asStack_178,asStack_170);
  std::string::~string((string *)awStack_168);
  nop();
  std::string::~string(asStack_170);
  nop();
  std::string::~string(asStack_178);
  DString::~DString((DString *)local_160);
  bVar1 = std::operator==(asStack_180,"init");
  if (bVar1) {
    iVar2 = 0x61aa;
  }
  plVar14 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(iVar2,1,false);
  uVar3 = FUN_04e56010(5);
  uVar4 = FUN_04e56010(0x3c);
  (**(code **)(*plVar14 + 0x198))(plVar14,uVar3,uVar3,uVar4,uVar4);
  lVar13 = *(long *)pWVar12;
  *(undefined1 *)((long)plVar14 + 0x6d) = 0;
  (**(code **)(lVar13 + 0x60))(pWVar12,plVar14);
  std::string::string((string *)local_160,"UIText_Gift_Name");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  DSingleton<UserInfo>::getInstance();
  nop();
  UIWidgetText::SetString(pUVar6,extraout_x0_00);
  std::string::string((string *)local_160,"UIText_Gift_Reward");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  FUN_05478178(awStack_168,L"[GEM_REWARD]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUM}",local_18);
  PuzzleTip::SetTip(pUVar6,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  std::string::string((string *)local_160,"UIText_Gift_GachaCount");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  FUN_05478178(awStack_168,L"[CORNUCOPIA_GIFT_GACHA_COUNT_TITLE]",asStack_170);
  TodReplaceNumberString(awStack_168,L"{NUMS}",local_c0);
  PuzzleTip::SetTip(pUVar6,(string *)local_160);
  FUN_05476c50((string *)local_160);
  FUN_05476c50(awStack_168);
  nop();
  std::string::string((string *)local_160,"UIButton_Gift_Obtain");
  this_02 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  bVar15 = local_100;
  if ((local_100 == 0) && (bVar15 = 1, local_138 != '\0')) {
    bVar15 = local_bc ^ 1;
  }
  (**(code **)(*(long *)this_02 + 0x188))(this_02,bVar15);
  if (local_100 != 0) {
    TodStringTranslate(L"[PLANT_OBTAINED]");
    PVZ2UIButton::SetLabelText(this_02,(wstring *)local_160);
    FUN_05476c50((string *)local_160);
  }
  std::string::string((string *)local_160,"UIText_Gift_Tips");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)local_160);
  std::string::~string((string *)local_160);
  nop();
  TodStringTranslate(L"[CORNUCOPIA_GIFT_REWARD_ADD_UP_ANDROID]");
  PuzzleTip::SetTip(pUVar6,(string *)local_160);
  FUN_05476c50((string *)local_160);
  std::string::~string(asStack_180);
  std::string::~string(asStack_188);
  CornucopiaData::~CornucopiaData(aCStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::OnCreate() */

void __thiscall UICornucopia::OnCreate(UICornucopia *this)

{
  int iVar1;
  Widget *pWVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar3;
  long lVar4;
  UIWidgetImage *this_01;
  Image *pIVar5;
  UITabControl *this_02;
  char *pcVar6;
  TGALogMgr *this_03;
  string *extraout_x1;
  string *__n;
  string asStack_218 [16];
  string asStack_208 [8];
  string asStack_200 [8];
  string asStack_1f8 [8];
  string asStack_1f0 [32];
  ActiveItem aAStack_1d0 [80];
  undefined8 local_180;
  string asStack_150 [136];
  int local_c8;
  int local_c4;
  int local_b0;
  int local_14;
  Sexy aSStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_150,"Background_0");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,asStack_150);
  std::string::~string(asStack_150);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
  pCVar3 = (CornucopiaData *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_end(this_00);
  CornucopiaData::CornucopiaData((CornucopiaData *)asStack_150,pCVar3);
  lVar4 = Sexy::LazySingleton<CornucopiaGradeTaskManager>::GetInstancePtr();
  GeneralTaskManager::Initialize((GeneralTaskManager *)(lVar4 + 8));
  std::string::string(asStack_208,"UIImage_Cornucopia_Main");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_208);
  std::string::~string(asStack_208);
  nop();
  Sexy::StringToUpper(aSStack_10,extraout_x1);
  std::operator+("IMAGE_UI_CORNUCOPIA_BG_",asStack_218);
  pIVar5 = (Image *)StringHelper::ToImage(asStack_208,false);
  UIWidgetImage::SetImage(this_01,pIVar5);
  std::string::~string(asStack_208);
  std::string::~string(asStack_218);
  InitGachaButtons(this);
  InitCornucopiaProgressTips(this);
  InitShopWidgets(this,(CornucopiaData *)asStack_150);
  InitBubble(this);
  InitGift(this);
  InitPresent(this);
  InitTasks(this);
  RefreshMaterial(this);
  RefreshTickets(this);
  RefreshTotalGacha(this);
  RefreshHarvestLimitTime(this);
  RefreshCornucoppiaProgress(this);
  RefreshPlayerLevel(this);
  RefreshNextLevelProgress(this);
  RefreshMask(this);
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  *(undefined8 *)(this + 0x1b8) = local_180;
  *(long *)(this + 0x1b0) = (long)local_14;
  __n = asStack_218;
  std::string::string(asStack_208,"UITabControl_0");
  this_02 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_208);
  std::string::~string(asStack_208);
  nop();
  if (this_02 != (UITabControl *)0x0) {
    UITabControl::SetListener(this_02,(TabControlListener *)(this + 0x138));
  }
  SetExpireTimeType(this,0);
  TGALuckyChestData::TGALuckyChestData((TGALuckyChestData *)asStack_208);
  DString::DString((DString *)asStack_218,1);
  pcVar6 = (char *)DString::c_str((DString *)asStack_218);
  std::string::append(asStack_208,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_218);
  DString::DString((DString *)asStack_218,local_c8);
  pcVar6 = (char *)DString::c_str((DString *)asStack_218);
  std::string::append(asStack_200,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_218);
  DString::DString((DString *)asStack_218,local_c4);
  pcVar6 = (char *)DString::c_str((DString *)asStack_218);
  std::string::append(asStack_1f8,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_218);
  DString::DString((DString *)asStack_218,local_b0);
  pcVar6 = (char *)DString::c_str((DString *)asStack_218);
  std::string::append(asStack_1f0,pcVar6,(size_t)__n);
  DString::~DString((DString *)asStack_218);
  this_03 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCornucopiaData(this_03,(TGACornucopiaData *)asStack_208);
  TGALuckyChestData::~TGALuckyChestData((TGALuckyChestData *)asStack_208);
  ActiveItem::~ActiveItem(aAStack_1d0);
  CornucopiaData::~CornucopiaData((CornucopiaData *)asStack_150);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::RequestGiftLeaderBoard(int) */

void __thiscall UICornucopia::RequestGiftLeaderBoard(UICornucopia *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2816];
  string asStack_1e8 [480];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"gi");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_04e55fb4(afStack_d38,this,param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_1e8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICornucopia::ButtonDepress(int) */

void __thiscall UICornucopia::ButtonDepress(UICornucopia *this,int param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  CornucopiaData *pCVar1;
  CornucopiaData aCStack_150 [328];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x3e9) {
    ShowRewardPreview();
  }
  else if (param_1 < 0x3ea) {
    if (param_1 == 0x195) {
      GiftReward(this);
    }
    else if (param_1 < 0x196) {
      if (400 < param_1) {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
        pCVar1 = (CornucopiaData *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end(this_00);
        CornucopiaData::CornucopiaData(aCStack_150,pCVar1);
        RequestGiftLeaderBoard(this,param_1 + -0x191);
        CornucopiaData::~CornucopiaData(aCStack_150);
      }
    }
    else if (param_1 == 1000) {
      UISingletonDialog<UICornucopia>::CloseDialog();
    }
  }
  else if (param_1 == 0x3eb) {
    GachaForItems(this,10);
  }
  else if (param_1 < 0x3eb) {
    GachaForItems(this,1);
  }
  else if (param_1 == 0x3ec) {
    GoToTaskView(this);
  }
  else if (param_1 == 0x3ed) {
    ShowMainTips(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICornucopia::ButtonDepress(int) */

void __thiscall UICornucopia::ButtonDepress(UICornucopia *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

