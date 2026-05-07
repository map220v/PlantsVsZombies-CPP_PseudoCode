// Class: UIUnchartedEntry


/* UIUnchartedEntry::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIUnchartedEntry::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUnchartedEntry::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIUnchartedEntry::ScrollTargetReached(UIUnchartedEntry *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIUnchartedEntry::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIUnchartedEntry::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIUnchartedEntry::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIUnchartedEntry::ScrollTargetInterrupted(UIUnchartedEntry *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::GetLayoutName() */

void __thiscall UIUnchartedEntry::GetLayoutName(UIUnchartedEntry *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIUnchartedEntry");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::RefreshRewardsList(int) */

void UIUnchartedEntry::RefreshRewardsList(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  string asStack_10 [8];
  long local_8;
  
  uVar5 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_0382d6dc(0);
  plVar13 = *(long **)(uVar5 + 0x150);
  iVar4 = FUN_0382d6dc(5);
  iVar1 = *(int *)((long)plVar13 + 0x54);
  (**(code **)(*plVar13 + 0x80))(plVar13,1,1);
  uVar11 = 0;
  iVar16 = iVar3;
  while( true ) {
    puVar7 = (undefined8 *)
             FUN_0382d4c0(*(undefined8 *)(uVar5 + 0x168),(long)*(int *)(uVar5 + 0x144));
    uVar15 = *puVar7;
    uVar8 = FUN_0382d4e4(uVar15,puVar7[1]);
    if (uVar8 <= uVar11) break;
    piVar6 = (int *)FUN_0382d4f8(uVar15,uVar11);
    plVar13 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar6,piVar6[1],true);
    (**(code **)(*plVar13 + 0x198))(plVar13,iVar16,iVar3,iVar1,iVar1);
    (**(code **)(**(long **)(uVar5 + 0x150) + 0x60))(*(long **)(uVar5 + 0x150),plVar13);
    uVar11 = uVar11 + 1;
    iVar16 = iVar16 + iVar1 + iVar4;
  }
  uVar14 = puVar7[0xd];
  uVar15 = puVar7[0xe];
  *(undefined1 *)(uVar5 + 0x140) = 1;
  lVar9 = FUN_0382d504(uVar14,uVar15);
  lVar12 = 0;
  do {
    if (lVar12 == lVar9) {
      FUN_05475d88(asStack_10,puVar7 + 4);
      cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(asStack_10);
      goto joined_r0x0382dc20;
    }
    lVar10 = FUN_0382d518(uVar14,lVar12);
    lVar12 = lVar12 + 1;
  } while (*(int *)(lVar10 + 0x7c) == 2);
  *(undefined1 *)(uVar5 + 0x140) = 0;
  FUN_05475d88(asStack_10,puVar7 + 4);
  cVar2 = PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(asStack_10);
joined_r0x0382dc20:
  if ((cVar2 != '\0') ||
     (cVar2 = PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(asStack_10), cVar2 != '\0')) {
    *(undefined1 *)(uVar5 + 0x140) = 0;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::Update() */

void __thiscall UIUnchartedEntry::Update(UIUnchartedEntry *this)

{
  UIWidgetText *pUVar1;
  UnchartedModeNetworkMgr *this_00;
  long lVar2;
  long lVar3;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  lVar2 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)*(int *)(this + 0x144));
  lVar2 = UnchartedModeNetworkMgr::GetWorldEndTime(this_00,(string *)(lVar2 + 0x20));
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,(float)(lVar2 - lVar3),0);
  PuzzleTip::SetTip(pUVar1,aTStack_10);
  FUN_05476c50(aTStack_10);
  std::string::~string(asStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::ButtonDepress(int) */

void __thiscall UIUnchartedEntry::ButtonDepress(UIUnchartedEntry *this,int param_1)

{
  string *psVar1;
  long lVar2;
  ActivityDescriptionManager *this_00;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x16) {
    UISingletonDialog<UIUnchartedEntry>::CloseDialog();
    GameStateMgr::QueueWarpTunnel(gGameStateMgr);
    lVar2 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)*(int *)(this + 0x144));
    PVZ2UnchartedModeUtils::GoToUnchartedModeWorldMap((string *)(lVar2 + 0x20),(bool)this[0x140]);
  }
  else if (param_1 < 0x17) {
    if (param_1 == 0xb) {
      this_00 = (ActivityDescriptionManager *)
                Sexy::LazySingleton<ActivityDescriptionManager>::GetInstancePtr();
      TodStringTranslate(L"[UNCHARTED_ENTRY_DESCRIPTION]");
      TodStringTranslate(L"[UNCHARTED_ENTRY_DESCRIPTION_TITLE]");
      ActivityDescriptionManager::ShowDescription(this_00,awStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      FUN_05476c50(awStack_18);
    }
  }
  else if (param_1 == 0x21) {
    psVar1 = (string *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    lVar2 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)*(int *)(this + 0x144));
    Sexy::IPurchaseAdapter::RequestPay(psVar1,(string *)(lVar2 + 0x20));
    UISingletonDialog<UIUnchartedFestivalReward>::ShowDialog();
  }
  else if (param_1 == 0x58) {
    UISingletonDialog<UIUnchartedEntry>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIUnchartedEntry::ButtonDepress(int) */

void __thiscall UIUnchartedEntry::ButtonDepress(UIUnchartedEntry *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::RefreshByPrefixWorld(int) */

void __thiscall UIUnchartedEntry::RefreshByPrefixWorld(UIUnchartedEntry *this,int param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  UIWidgetText *pUVar4;
  UIWidgetImage *pUVar5;
  UnchartedModeNetworkMgr *pUVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  string asStack_10 [8];
  long local_8;
  
  lVar9 = (long)param_1;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
  if (*(int *)(lVar3 + 0x3c) != 0) {
    std::string::string(asStack_10,"UIText_Timer");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pUVar4 + 0x158))(pUVar4,1);
    std::string::~string(asStack_10);
    nop();
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    if (*(int *)(lVar3 + 0x38) != 0) goto LAB_0382e2a8;
    std::string::string(asStack_10,"UIImage_CloseMask");
    pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    (**(code **)(*(long *)pUVar5 + 0x158))(pUVar5,1);
    std::string::~string(asStack_10);
    nop();
    pUVar6 = (UnchartedModeNetworkMgr *)
             Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    FUN_05475d88(asStack_10,lVar3 + 0x20);
    cVar1 = UnchartedModeNetworkMgr::CheckHasAvailableRewards(pUVar6,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"UIImage_ShopTips");
      pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      lVar3 = *(long *)pUVar5;
    }
    else {
      std::string::string(asStack_10,"UIImage_ShopTips");
      pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      lVar3 = *(long *)pUVar5;
    }
    (**(code **)(lVar3 + 0x158))(pUVar5,cVar1 != '\0');
    std::string::~string(asStack_10);
    nop();
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_anniversary");
    if (bVar2) {
LAB_0382e414:
      std::string::string(asStack_10,"UIButton_SHOP");
      plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
      lVar3 = *plVar7;
    }
    else {
      lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
      bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_anniversary_halloween");
      if (bVar2) goto LAB_0382e414;
      lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
      bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_anniversary_halloween_202411");
      if (bVar2) goto LAB_0382e414;
      lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
      bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_iceage");
      if ((!bVar2) || (cVar1 = PVZ2UnchartedModeUtils::IsHardMode(), cVar1 == '\0'))
      goto LAB_0382e2a8;
      std::string::string(asStack_10,"UIButton_SHOP");
      plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_10);
      lVar3 = *plVar7;
    }
    (**(code **)(lVar3 + 0x158))(plVar7,0);
    std::string::~string(asStack_10);
    nop();
    goto LAB_0382e2a8;
  }
  bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_iceage");
  if (bVar2) {
LAB_0382e2e8:
    std::string::string(asStack_10,"UIText_Timer");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    lVar3 = *(long *)pUVar4;
    uVar8 = 1;
  }
  else {
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_spring_festival_2024");
    if (bVar2) goto LAB_0382e2e8;
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_arborday");
    if (bVar2) goto LAB_0382e2e8;
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_childrensday");
    if (bVar2) goto LAB_0382e2e8;
    lVar3 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),lVar9);
    bVar2 = std::operator==((string *)(lVar3 + 0x20),"uncharted_needforspeed_202406");
    if (bVar2) goto LAB_0382e2e8;
    std::string::string(asStack_10,"UIText_Timer");
    pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
    lVar3 = *(long *)pUVar4;
    uVar8 = 0;
  }
  (**(code **)(lVar3 + 0x158))(pUVar4,uVar8);
  std::string::~string(asStack_10);
  nop();
LAB_0382e2a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::CreateRewardContainer() */

void __thiscall UIUnchartedEntry::CreateRewardContainer(UIUnchartedEntry *this)

{
  int iVar1;
  int iVar2;
  UIWidgetImage *pUVar3;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  string asStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Right");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar3 + 0x80))(pUVar3,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  *(Widget **)(this + 0x150) = this_01;
  iVar1 = FUN_0382d6dc(10);
  iVar2 = FUN_0382d6dc(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar1,*(int *)(pUVar3 + 0x50) - iVar2,
             *(int *)(pUVar3 + 0x54) - iVar2);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(**(long **)(this + 0x150) + 0x198))(*(long **)(this + 0x150),0,0,local_10,local_c);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,*(undefined8 *)(this + 0x150));
  (**(code **)(*(long *)pUVar3 + 0x60))(pUVar3,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::RefreshOtherUI(int) */

void __thiscall UIUnchartedEntry::RefreshOtherUI(UIUnchartedEntry *this,int param_1)

{
  UIWidgetText *this_00;
  UIWidgetImage *this_01;
  long lVar1;
  Image *pIVar2;
  string *extraout_x1;
  string asStack_38 [8];
  Sexy aSStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"KeyNumText");
  this_00 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::StrFormat("%d/%d",asStack_38,(ulong)*(uint *)(this + 0x160),(ulong)*(uint *)(this + 0x164));
  UIWidgetText::SetString(this_00,asStack_38);
  std::string::string(asStack_10,"KeyBank");
  this_01 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)param_1);
  FUN_05475d88(aSStack_30,lVar1 + 0x20);
  std::string::string(asStack_28,"IMAGE_UI_UNCHARTED_");
  Sexy::StringToUpper(aSStack_30,extraout_x1);
  std::operator+(asStack_28,asStack_20);
  std::operator+(asStack_18,"_HUD_WORLDMAP_KEY_BANK");
  pIVar2 = (Image *)StringHelper::ToImage(asStack_10,true);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  UIWidgetImage::SetImage(this_01,pIVar2);
  std::string::~string((string *)aSStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::RefreshThemeBackground(int) */

void __thiscall UIUnchartedEntry::RefreshThemeBackground(UIUnchartedEntry *this,int param_1)

{
  UIWidgetImage *this_00;
  UIWidgetText *this_01;
  long lVar1;
  UIWidgetImage *pUVar2;
  string *extraout_x1;
  Sexy aSStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ThemeBackground");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"WorldName");
  this_01 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)param_1);
  UIWidgetText::SetString(this_01,(string *)(lVar1 + 0x20));
  (**(code **)(*(long *)this_01 + 0x158))(this_01,0);
  std::string::string(asStack_10,"UIImage_CloseMask");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  (**(code **)(*(long *)pUVar2 + 0x158))(pUVar2,0);
  std::string::~string(asStack_10);
  nop();
  lVar1 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)param_1);
  FUN_05475d88(aSStack_30,lVar1 + 0x20);
  std::string::string(asStack_28,"IMAGE_UI_UNCHARTED_");
  Sexy::StringToUpper(aSStack_30,extraout_x1);
  std::operator+(asStack_28,asStack_20);
  std::operator+(asStack_18,"_MAIN_VIEW_BG");
  UIWidgetImage::SetImage(this_00,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::~string((string *)aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedEntry::UIUnchartedEntry() */

void __thiscall UIUnchartedEntry::UIUnchartedEntry(UIUnchartedEntry *this)

{
  UISingletonDialog<UIUnchartedEntry>::UISingletonDialog
            ((UISingletonDialog<UIUnchartedEntry> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (UIUnchartedEntry)0x0;
  *(undefined ***)this = &PTR_GetClass_066a6070;
  *(undefined ***)(this + 0x138) = &PTR__UIUnchartedEntry_066a6418;
  *(undefined **)(this + 0xd8) = &DAT_066a63d0;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  UnchartedModeMainEntryData::UnchartedModeMainEntryData
            ((UnchartedModeMainEntryData *)(this + 0x158));
  return;
}


/* UIUnchartedEntry::DoClickTab(int) */

void __thiscall UIUnchartedEntry::DoClickTab(UIUnchartedEntry *this,int param_1)

{
  if (*(int *)(this + 0x144) != param_1) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    *(int *)(this + 0x144) = param_1;
    RefreshThemeBackground(this,param_1);
    RefreshRewardsList((int)this);
    RefreshOtherUI(this,*(int *)(this + 0x144));
    RefreshByPrefixWorld(this,*(int *)(this + 0x144));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::UIUnchartedSelectTab,param_1);
    return;
  }
  return;
}


/* UIUnchartedEntry::onClickTab(int) */

void __thiscall UIUnchartedEntry::onClickTab(UIUnchartedEntry *this,int param_1)

{
  if (*(int *)(this + 0x144) != param_1) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    *(int *)(this + 0x144) = param_1;
    RefreshThemeBackground(this,param_1);
    RefreshRewardsList((int)this);
    RefreshOtherUI(this,*(int *)(this + 0x144));
    RefreshByPrefixWorld(this,*(int *)(this + 0x144));
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::UIUnchartedSelectTab,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::InitTab() */

void __thiscall UIUnchartedEntry::InitTab(UIUnchartedEntry *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar7;
  UIUnchartedTab *pUVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  string asStack_78 [8];
  UIUnchartedTab *local_70;
  undefined8 local_68;
  undefined8 local_60;
  string asStack_50 [24];
  Delegate1<int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_50,"TabContainer");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_50);
  std::string::~string(asStack_50);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  lVar7 = plVar6[10];
  uVar1 = *(undefined4 *)((long)plVar6 + 0x54);
  pcVar11 = *(code **)(*(long *)this_00 + 0x198);
  this_00[0x59] = (PVZ2UIScrollingWidget)0x0;
  (*pcVar11)(this_00,0,0,(int)lVar7,uVar1);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  uVar1 = *(undefined4 *)(this_00 + 0x50);
  uVar2 = *(undefined4 *)(this_00 + 0x54);
  this_01[0x59] = (Widget)0x0;
  (**(code **)(*(long *)this_01 + 0x198))(this_01,0,0,uVar1,uVar2);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*plVar6 + 0x60))(plVar6,this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  uVar12 = 0;
  while( true ) {
    uVar14 = *(undefined8 *)(this + 0x168);
    uVar9 = FUN_0382d4a0(uVar14,*(undefined8 *)(this + 0x170));
    if (uVar9 <= uVar12) break;
    lVar7 = FUN_0382d4c0(uVar14,uVar12);
    FUN_05475d88(asStack_78,lVar7 + 0x20);
    FUN_05475d88(asStack_50,asStack_78);
    lVar7 = FUN_0382d4a0(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
    pUVar8 = ::operator_new(0x358);
    UIUnchartedTab::UIUnchartedTab(pUVar8,uVar12 & 0xffffffff,asStack_50,uVar12 == lVar7 - 1U);
    local_70 = pUVar8;
    std::string::~string(asStack_50);
    pUVar8 = local_70;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onClickTab);
    Sexy::Delegate1<int>::Delegate1<UIUnchartedEntry,void(UIUnchartedEntry::*)(int)>
              (aDStack_38,asStack_50);
    UIUnchartedTab::SetCallback(pUVar8,aDStack_38);
    std::vector<UIUnchartedTab*,std::allocator<UIUnchartedTab*>>::push_back
              ((vector<UIUnchartedTab*,std::allocator<UIUnchartedTab*>> *)&local_68,&local_70);
    std::string::~string(asStack_78);
    uVar12 = uVar12 + 1;
  }
  iVar4 = FUN_0382d6dc(0xf);
  iVar5 = FUN_0382d6dc(10);
  iVar3 = *(int *)(this_01 + 0x50) + iVar4 * -2;
  uVar12 = 0;
  iVar13 = iVar4;
  while( true ) {
    uVar14 = local_68;
    uVar9 = FUN_0382d4d0(local_68,local_60);
    if (uVar9 <= uVar12) break;
    puVar10 = (undefined8 *)FUN_0382d4dc(uVar14,uVar12);
    (**(code **)(*(long *)*puVar10 + 0x198))((long *)*puVar10,iVar4,iVar13,iVar3,iVar3);
    puVar10 = (undefined8 *)FUN_0382d4dc(local_68,uVar12);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,*puVar10);
    uVar12 = uVar12 + 1;
    iVar13 = iVar13 + iVar5 + iVar3;
  }
  std::vector<UIUnchartedTab*,std::allocator<UIUnchartedTab*>>::~vector
            ((vector<UIUnchartedTab*,std::allocator<UIUnchartedTab*>> *)&local_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIUnchartedEntry::~UIUnchartedEntry() */

void __thiscall UIUnchartedEntry::~UIUnchartedEntry(UIUnchartedEntry *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6070;
  *(undefined **)(this + 0xd8) = &DAT_066a63d0;
  *(undefined ***)(this + 0x138) = &PTR__UIUnchartedEntry_066a6418;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  UnchartedModeMainEntryData::~UnchartedModeMainEntryData
            ((UnchartedModeMainEntryData *)(this + 0x158));
  UISingletonDialog<UIUnchartedEntry>::~UISingletonDialog
            ((UISingletonDialog<UIUnchartedEntry> *)this);
  return;
}


/* non-virtual thunk to UIUnchartedEntry::~UIUnchartedEntry() */

void __thiscall UIUnchartedEntry::~UIUnchartedEntry(UIUnchartedEntry *this)

{
  ~UIUnchartedEntry(this + -0x138);
  return;
}


/* UIUnchartedEntry::~UIUnchartedEntry() */

void __thiscall UIUnchartedEntry::~UIUnchartedEntry(UIUnchartedEntry *this)

{
  ~UIUnchartedEntry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIUnchartedEntry::~UIUnchartedEntry() */

void __thiscall UIUnchartedEntry::~UIUnchartedEntry(UIUnchartedEntry *this)

{
  ~UIUnchartedEntry(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::LoadData() */

void __thiscall UIUnchartedEntry::LoadData(UIUnchartedEntry *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_138 [24];
  char local_120;
  UnchartedModeMainEntryData aUStack_b8 [176];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_120 != '\0') {
    UnchartedModeMainEntryData::UnchartedModeMainEntryData(aUStack_b8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_138,(RtObject *)(this + 0x158));
    if (cVar1 == '\0') {
      Sexy::OutputDebugStrF((wchar_t *)"UIUnchartedEntry::LoadData() LoardData failed!");
    }
    UnchartedModeMainEntryData::~UnchartedModeMainEntryData(aUStack_b8);
  }
  ActiveItem::~ActiveItem(aAStack_138);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::Init() */

void __thiscall UIUnchartedEntry::Init(UIUnchartedEntry *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  long lVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  long *plVar8;
  size_t in_x2;
  string asStack_138 [8];
  string asStack_130 [8];
  TGAUnchartedData aTStack_128 [8];
  string asStack_120 [136];
  DString aDStack_98 [144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LoadData(this);
  InitTab(this);
  CreateRewardContainer(this);
  iVar3 = FUN_0382d4a0(*(undefined8 *)(this + 0x168),*(undefined8 *)(this + 0x170));
  DoClickTab(this,iVar3 + -1);
  TGAUnchartedData::TGAUnchartedData(aTStack_128);
  DString::DString(aDStack_98,1);
  pcVar4 = (char *)DString::c_str(aDStack_98);
  std::string::append((string *)aTStack_128,pcVar4,in_x2);
  DString::~DString(aDStack_98);
  iVar3 = PVZ2UnchartedModeUtils::GetCurrentStarCount();
  DString::DString(aDStack_98,iVar3);
  pcVar4 = (char *)DString::c_str(aDStack_98);
  std::string::append(asStack_120,pcVar4,in_x2);
  DString::~DString(aDStack_98);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAUnchartedData::TGAUnchartedData((TGAUnchartedData *)aDStack_98,aTStack_128);
  TGALogMgr::LogUncharted(pTVar5,aDStack_98);
  TGAUnchartedData::~TGAUnchartedData((TGAUnchartedData *)aDStack_98);
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetTimeLimitWorld();
  lVar6 = FUN_0382d4c0(*(undefined8 *)(this + 0x168),(long)*(int *)(this + 0x144));
  FUN_05475d88(asStack_130,lVar6 + 0x20);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((pPVar7 != (PlayerInfo *)0x0) &&
     (iVar3 = FUN_0382d49c(*(undefined4 *)(pPVar7 + 0x40)), iVar3 == 0)) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x46);
    if ((cVar1 == '\0') && (bVar2 = std::operator==(asStack_138,"uncharted_special"), bVar2)) {
      plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x338))(plVar8,0x46);
      }
    }
    else {
      cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x47);
      if ((cVar1 == '\0') && (bVar2 = std::operator==(asStack_138,"uncharted_anniversary"), bVar2))
      {
        plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x338))(plVar8,0x47);
        }
      }
      else {
        cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x48);
        if ((cVar1 == '\0') &&
           (bVar2 = std::operator==(asStack_138,"uncharted_anniversary_halloween"), bVar2)) {
          plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x338))(plVar8,0x48);
          }
        }
        else {
          cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x49);
          if (cVar1 == '\0') {
            FUN_05475d88(aDStack_98,asStack_130);
            cVar1 = PVZ2UnchartedModeUtils::IsTutorialWorld(aDStack_98);
            if (cVar1 == '\0') {
              std::string::~string((string *)aDStack_98);
            }
            else {
              bVar2 = std::operator==(asStack_130,"uncharted_iceage");
              std::string::~string((string *)aDStack_98);
              if (bVar2) {
                plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x338))(plVar8,0x49);
                }
                goto LAB_0382fa00;
              }
            }
          }
          cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x4d);
          if (cVar1 == '\0') {
            FUN_05475d88(aDStack_98,asStack_130);
            cVar1 = PVZ2UnchartedModeUtils::IsTutorialWorld(aDStack_98);
            if (cVar1 == '\0') {
              std::string::~string((string *)aDStack_98);
            }
            else {
              bVar2 = std::operator==(asStack_130,"uncharted_childrensday");
              std::string::~string((string *)aDStack_98);
              if (bVar2) {
                plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x338))(plVar8,0x4d);
                }
                goto LAB_0382fa00;
              }
            }
          }
          cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x50);
          if (cVar1 == '\0') {
            FUN_05475d88(aDStack_98,asStack_130);
            cVar1 = PVZ2UnchartedModeUtils::IsTutorialWorld(aDStack_98);
            if (cVar1 == '\0') {
              std::string::~string((string *)aDStack_98);
            }
            else {
              bVar2 = std::operator==(asStack_130,"uncharted_needforspeed_202406");
              std::string::~string((string *)aDStack_98);
              if (bVar2) {
                plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x338))(plVar8,0x50);
                }
                goto LAB_0382fa00;
              }
            }
          }
          cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x4a);
          if (cVar1 == '\0') {
            FUN_05475d88(aDStack_98,asStack_130);
            cVar1 = PVZ2UnchartedModeUtils::IsTutorialWorld(aDStack_98);
            if (cVar1 == '\0') {
              std::string::~string((string *)aDStack_98);
            }
            else {
              bVar2 = std::operator==(asStack_130,"uncharted_spring_festival_2024");
              std::string::~string((string *)aDStack_98);
              if (bVar2) {
                plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x338))(plVar8,0x4a);
                }
                goto LAB_0382fa00;
              }
            }
          }
          cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar7,0x4b);
          if (cVar1 == '\0') {
            FUN_05475d88(aDStack_98,asStack_130);
            cVar1 = PVZ2UnchartedModeUtils::IsTutorialWorld(aDStack_98);
            if (cVar1 == '\0') {
              std::string::~string((string *)aDStack_98);
            }
            else {
              bVar2 = std::operator==(asStack_130,"uncharted_arborday");
              std::string::~string((string *)aDStack_98);
              if ((bVar2) &&
                 (plVar8 = (long *)LawnApp::GetWorldMap(gLawnApp), plVar8 != (long *)0x0)) {
                (**(code **)(*plVar8 + 0x338))(plVar8,0x4b);
              }
            }
          }
        }
      }
    }
  }
LAB_0382fa00:
  std::string::~string(asStack_130);
  std::string::~string(asStack_138);
  TGAUnchartedData::~TGAUnchartedData(aTStack_128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUnchartedEntry::OnCreate() */

void __thiscall UIUnchartedEntry::OnCreate(UIUnchartedEntry *this)

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
  Init(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* UIUnchartedEntry::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
UIUnchartedEntry::DrawAll(UIUnchartedEntry *this,ModalFlags *param_1,Graphics *param_2)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (pPVar3 != (PlayerInfo *)0x0) {
    iVar2 = FUN_0382d49c(*(undefined4 *)(pPVar3 + 0x40));
    if ((iVar2 == 0x46) &&
       (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x46), cVar1 == '\0')) {
      LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
      return;
    }
  }
  return;
}

