// Class: UICarnival


/* UICarnival::ScrollTargetReached(Sexy::ScrollWidget*) */

void UICarnival::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICarnival::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UICarnival::ScrollTargetReached(UICarnival *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x140));
  return;
}


/* UICarnival::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UICarnival::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UICarnival::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UICarnival::ScrollTargetInterrupted(UICarnival *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x140));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::GetLayoutName() */

void __thiscall UICarnival::GetLayoutName(UICarnival *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UICarnival");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UICarnival::closeDescriptionWidget() */

void __thiscall UICarnival::closeDescriptionWidget(UICarnival *this)

{
  if (*(long *)(this + 0x170) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x170))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x170));
    *(undefined8 *)(this + 0x170) = 0;
  }
  return;
}


/* UICarnival::OnBuyBundle() */

void __thiscall UICarnival::OnBuyBundle(UICarnival *this)

{
  *(int *)(this + 400) = *(int *)(this + 400) + 1;
  *(int *)(this + 0x194) = *(int *)(this + 0x194) + 1;
  return;
}


/* UICarnival::CloseBundlePreview() */

void __thiscall UICarnival::CloseBundlePreview(UICarnival *this)

{
  if (*(long *)(this + 0x160) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x160))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x160));
    *(undefined8 *)(this + 0x160) = 0;
  }
  return;
}


/* UICarnival::ShowPacketList() */

void __thiscall UICarnival::ShowPacketList(UICarnival *this)

{
  CarnivalPacketListWidget *this_00;
  
  if (*(long *)(this + 0x168) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe8);
  CarnivalPacketListWidget::CarnivalPacketListWidget(this_00);
  *(CarnivalPacketListWidget **)(this + 0x168) = this_00;
  CarnivalPacketListWidget::InitView(this_00,(vector *)(this + 0x1e0));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x168));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x168));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x168));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x168));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::Update() */

void __thiscall UICarnival::Update(UICarnival *this)

{
  UIWidgetText *pUVar1;
  long lVar2;
  PVZ2UIButton *pPVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_TimeLeft_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a6a);
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Daily_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(1,0);
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,0);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_18,"UIText_Flash_Sale_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  lVar4 = *(long *)(this + 0x150);
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  TimeUtil::GetTimeCountdownFormat((TimeUtil *)asStack_10,(float)(lVar4 - lVar2),0);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  nop();
  fVar5 = (float)PVZ_T();
  lVar2 = *(long *)(this + 0x158);
  if ((float)lVar2 < fVar5) {
    std::string::string(asStack_18,"UIButton_Refresh");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_18);
    TodStringTranslate(L"[BUTTON_REFRESH]");
    PVZ2UIButton::SetLabelText(pPVar3,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    nop();
    std::string::string(asStack_10,"UIButton_Refresh");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    lVar4 = *(long *)pPVar3;
  }
  else {
    std::string::string(asStack_20,"UIButton_Refresh");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_20);
    lVar4 = *(long *)(this + 0x158);
    fVar6 = (float)PVZ_T();
    local_24 = (int)((float)lVar4 - fVar6);
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
    Sexy::ToWString(asStack_18);
    PVZ2UIButton::SetLabelText(pPVar3,(wstring *)asStack_10);
    FUN_05476c50(asStack_10);
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    nop();
    std::string::string(asStack_10,"UIButton_Refresh");
    pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
    lVar4 = *(long *)pPVar3;
  }
  (**(code **)(lVar4 + 0x188))(pPVar3,fVar5 <= (float)lVar2);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::Refresh() */

void __thiscall UICarnival::Refresh(UICarnival *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar1;
  undefined4 local_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"mat_carnival_ticket");
  local_24 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_24);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Buy_Times");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 400));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Total_Buy_Times");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x194));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::OnBuyCarnivalPacket(int) */

void UICarnival::OnBuyCarnivalPacket(int param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  UIWidgetText *pUVar1;
  Dialog *this_01;
  undefined4 uStack_24;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  this_01 = (Dialog *)(ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  std::string::string(asStack_10,"mat_carnival_ticket");
  uStack_24 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_20,"UIText_Ticket");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>(this_01,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&uStack_24);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Buy_Times");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>(this_01,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this_01 + 400));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Total_Buy_Times");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>(this_01,asStack_20);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this_01 + 0x194));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::TabSelectionChanged(int) */

void __thiscall UICarnival::TabSelectionChanged(UICarnival *this,int param_1)

{
  Widget *pWVar1;
  TGALogMgr *this_00;
  code *__n;
  string asStack_40 [8];
  string asStack_38 [32];
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    std::string::string(asStack_38,"Widget_Buy_Times");
    pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_38);
    (**(code **)(*(long *)pWVar1 + 0x158))(pWVar1,0);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"Widget_Daily_Gift");
    pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_38);
    (**(code **)(*(long *)pWVar1 + 0x158))(pWVar1,1);
    std::string::~string(asStack_38);
    nop();
  }
  else if (param_1 == 2) {
    std::string::string(asStack_38,"Widget_Buy_Times");
    pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_38);
    (**(code **)(*(long *)pWVar1 + 0x158))(pWVar1,1);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"Widget_Daily_Gift");
    pWVar1 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_38);
    __n = *(code **)(*(long *)pWVar1 + 0x158);
    (*__n)(pWVar1,0);
    std::string::~string(asStack_38);
    nop();
    TGACarnivalData::TGACarnivalData((TGACarnivalData *)asStack_38);
    std::string::append(asStack_38,"6",(size_t)__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 400));
    FUN_05474278(auStack_18,asStack_40);
    std::string::~string(asStack_40);
    this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCarnivalData(this_00,(TGACarnivalData *)asStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICarnival::TabSelectionChanged(int) */

void __thiscall UICarnival::TabSelectionChanged(UICarnival *this,int param_1)

{
  TabSelectionChanged(this + -0x138,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::showDescriptionWidget() */

void __thiscall UICarnival::showDescriptionWidget(UICarnival *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x170) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x170) = this_00;
    TodStringTranslate(L"[CARNIVAL_DESCRIPTION_1]");
    TodStringTranslate(L"[CARNIVAL_DESCRIPTION_2]");
    TodStringTranslate(L"[CARNIVAL_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_60,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    FUN_05476c50(awStack_60);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x170);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UICarnival,void(UICarnival::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x170));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x170));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::InitTotalReward() */

void __thiscall UICarnival::InitTotalReward(UICarnival *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  UIWidgetImage *pUVar10;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar11;
  CarnivalTotalRewardItem *this_02;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  Image *pIVar15;
  UIWidgetImage *pUVar16;
  UIWidgetText *pUVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  string asStack_38 [8];
  string asStack_30 [8];
  Insets aIStack_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  uVar19 = 0;
  iVar18 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIImage_Tab2_BG1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_039ac220(0xf);
  iVar3 = FUN_039ac220(10);
  iVar4 = FUN_039ac220(0x1e);
  iVar21 = *(int *)(pUVar10 + 0x50);
  iVar5 = FUN_039ac220(200);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar21 - iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  uVar20 = 0;
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar2 = FUN_039ac220(0x82);
  uVar6 = FUN_039ac220(0x5a);
  lVar11 = FUN_039ab0f8(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
  iVar21 = iVar18;
  if (lVar11 != 0) {
    do {
      Sexy::Insets::Insets((Insets *)&local_18);
      iVar18 = (int)uVar20 >> 1;
      if ((uVar19 & 1) == 0) {
        iVar3 = FUN_039ac220(100);
        local_18 = iVar18 * (iVar3 + iVar2);
        local_14 = FUN_039ac220((uint)uVar19 & 1);
      }
      else {
        iVar3 = FUN_039ac220(0x73);
        iVar4 = FUN_039ac220(100);
        local_18 = iVar3 + iVar18 * (iVar4 + iVar2);
        local_14 = FUN_039ac220(0x6e);
      }
      local_10 = iVar2;
      local_c = uVar6;
      this_02 = ::operator_new(0x118);
      CarnivalTotalRewardItem::CarnivalTotalRewardItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(string *)&local_18);
      uVar12 = FUN_039ab120(*(undefined8 *)(this + 0x1f8),uVar19);
      (**(code **)(*(long *)this_02 + 0x310))(this_02,uVar20,uVar12);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar5 = local_10;
      uVar12 = *(undefined8 *)(this + 0x1f8);
      iVar18 = local_10 + local_18;
      iVar3 = *(int *)(this + 0x194);
      piVar13 = (int *)FUN_039ab120(uVar12,uVar19);
      iVar4 = *piVar13;
      if (iVar3 < iVar4) {
        if (uVar19 == 0) {
          iVar5 = 0;
        }
        else {
          piVar13 = (int *)FUN_039ab120(uVar12,uVar19 - 1);
          iVar5 = *piVar13;
        }
        if (iVar3 < iVar5) {
          uVar14 = FUN_039ab0f8(uVar12,*(undefined8 *)(this + 0x200));
        }
        else {
          iVar9 = FUN_039ac220(0x73);
          iVar4 = iVar4 - iVar5;
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = (iVar9 * (iVar3 - iVar5)) / iVar4;
          }
          uVar14 = FUN_039ab0f8(uVar12,*(undefined8 *)(this + 0x200));
          iVar21 = iVar21 + iVar1;
        }
      }
      else {
        iVar3 = iVar5 / 2 + *(int *)(this_02 + 0x48);
        uVar14 = FUN_039ab0f8(uVar12,*(undefined8 *)(this + 0x200));
        iVar21 = iVar3 + iVar5 / 2;
        if (uVar19 != uVar14 - 1) {
          iVar21 = iVar3;
        }
      }
      uVar19 = uVar19 + 1;
      uVar20 = uVar19 & 0xffffffff;
    } while (uVar19 < uVar14);
  }
  *(int *)(this_01 + 0x50) = iVar18;
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf598);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_039ac220(0);
  uVar7 = FUN_039ac220(0x5a);
  uVar8 = FUN_039ac220(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar18,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf770);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_039ac220(0);
  uVar7 = FUN_039ac220(0x5a);
  uVar8 = FUN_039ac220(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar21,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  std::string::string(asStack_38,"UIText_Total_Buy_Times");
  pUVar17 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x194));
  Sexy::ToWString(asStack_30);
  PuzzleTip::SetTip(pUVar17,(string *)&local_18);
  FUN_05476c50((string *)&local_18);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::InitPersonReward() */

void __thiscall UICarnival::InitPersonReward(UICarnival *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  UIWidgetImage *pUVar14;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  Image *pIVar15;
  UIWidgetImage *this_02;
  UIWidgetImage *this_03;
  undefined8 uVar16;
  ulong uVar17;
  CarnivalRewardItem *this_04;
  long lVar18;
  ActivityTypeID *pAVar19;
  UIWidgetText *this_05;
  int *piVar20;
  code *pcVar21;
  undefined1 uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  int iVar26;
  string asStack_38 [8];
  wstring awStack_30 [8];
  Insets aIStack_28 [8];
  undefined4 local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  iVar23 = 0;
  local_8 = ___stack_chk_guard;
  iVar26 = 0;
  std::string::string((string *)&local_18,"UIImage_Tab2_BG2");
  iVar11 = 0;
  pUVar14 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_039ac220(0xf);
  iVar5 = FUN_039ac220(8);
  iVar6 = FUN_039ac220(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,iVar4,iVar5,*(int *)(pUVar14 + 0x50) - iVar6,
             *(int *)(pUVar14 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar4 = FUN_039ac220(10);
  iVar5 = FUN_039ac220(0x55);
  iVar6 = FUN_039ac220(0x3c);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf598);
  this_02 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_02,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_02,(string *)&local_18,0.0);
  uVar7 = FUN_039ac220(0);
  uVar8 = FUN_039ac220(0x40);
  uVar10 = local_20;
  uVar9 = FUN_039ac220(0x14);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar7,uVar8,uVar10,uVar9);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf770);
  this_03 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_03,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_03,(string *)&local_18,0.0);
  uVar10 = FUN_039ac220(0);
  uVar7 = FUN_039ac220(0x40);
  uVar8 = FUN_039ac220(0x14);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,uVar10,uVar7,local_20,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
  uVar16 = *(undefined8 *)(this + 0x210);
  for (uVar24 = 0; uVar17 = FUN_039ab0f8(uVar16,*(undefined8 *)(this + 0x218)), uVar24 < uVar17;
      uVar24 = uVar24 + 1) {
    iVar11 = FUN_039ac220(0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar26,iVar11,iVar5,iVar6);
    this_04 = ::operator_new(0x118);
    CarnivalRewardItem::CarnivalRewardItem(this_04);
    (**(code **)(*(long *)this_04 + 0x1a0))(this_04,(string *)&local_18);
    uVar16 = *(undefined8 *)(this + 0x210);
    bVar3 = (int)uVar24 != 0;
    lVar18 = FUN_039ab0f8(uVar16,*(undefined8 *)(this + 0x218));
    uVar22 = bVar3;
    if (uVar24 == lVar18 - 1U) {
      uVar22 = 2;
    }
    uVar16 = FUN_039ab120(uVar16,uVar24);
    (**(code **)(*(long *)this_04 + 0x310))(this_04,uVar24 & 0xffffffff,uVar16,uVar22);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
    iVar11 = local_18 + local_10;
    pAVar19 = (ActivityTypeID *)FUN_039ab120(*(undefined8 *)(this + 0x210),uVar24);
    std::to_string<ActivityTypeID>(pAVar19);
    Sexy::ToWString(asStack_38);
    this_05 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_05,awStack_30);
    FUN_05476c50(awStack_30);
    std::string::~string(asStack_38);
    iVar2 = local_18;
    iVar1 = local_14 + local_c;
    iVar12 = FUN_039ac220(4);
    iVar25 = local_10;
    uVar10 = FUN_039ac220(0x16);
    (**(code **)(*(long *)this_05 + 0x198))(this_05,iVar2,iVar1 + iVar12,iVar25,uVar10);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_039aae4c(this_05 + 0xe8,uVar16);
    FUN_039aae54(this_05 + 0xe0,5);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_05);
    uVar16 = *(undefined8 *)(this + 0x210);
    iVar1 = *(int *)(this + 400);
    piVar20 = (int *)FUN_039ab120(uVar16,uVar24);
    iVar2 = *piVar20;
    if (iVar1 < iVar2) {
      if (bVar3) {
        piVar20 = (int *)FUN_039ab120(uVar16,uVar24 - 1);
        iVar25 = *piVar20;
      }
      else {
        iVar25 = 0;
      }
      if (iVar25 <= iVar1) {
        iVar13 = FUN_039ac220(0x5f);
        iVar2 = iVar2 - iVar25;
        iVar12 = 0;
        if (iVar2 != 0) {
          iVar12 = (iVar13 * (iVar1 - iVar25)) / iVar2;
        }
        iVar23 = iVar23 + iVar12;
      }
    }
    else {
      iVar23 = *(int *)(this_04 + 0x48) + local_10;
    }
    iVar26 = iVar26 + iVar4 + iVar5;
  }
  lVar18 = *(long *)pUVar14;
  *(int *)(this_01 + 0x50) = iVar11;
  *(int *)(this_02 + 0x50) = iVar11;
  pcVar21 = *(code **)(lVar18 + 0x60);
  *(int *)(this_03 + 0x50) = iVar23;
  (*pcVar21)(pUVar14,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UICarnival::UICarnival() */

void __thiscall UICarnival::UICarnival(UICarnival *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UICarnival>::UISingletonDialog((UISingletonDialog<UICarnival> *)this);
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x138));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x140));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined ***)this = &PTR_GetClass_066e7e80;
  *(undefined **)(this + 0xd8) = &DAT_066e81e8;
  *(undefined **)(this + 0x138) = &DAT_066e8230;
  *(undefined ***)(this + 0x140) = &PTR__UICarnival_066e8248;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  CarnivalData::CarnivalData((CarnivalData *)(this + 0x178));
  uVar2 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(this + 0x148) = uVar2;
  fVar3 = (float)PVZ_T();
  *(long *)(this + 0x158) = (long)fVar3;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBuyCarnivalPacket);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<UICarnival,void(UICarnival::*)(int)>>
            ((MessageRouter *)puVar1,Message::BuyCarnivalPacket,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UICarnival,void(UICarnival::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_70);
  return;
}


/* UICarnival::~UICarnival() */

void __thiscall UICarnival::~UICarnival(UICarnival *this)

{
  *(undefined ***)this = &PTR_GetClass_066e7e80;
  *(undefined **)(this + 0x138) = &DAT_066e8230;
  *(undefined **)(this + 0xd8) = &DAT_066e81e8;
  *(undefined ***)(this + 0x140) = &PTR__UICarnival_066e8248;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  CarnivalData::~CarnivalData((CarnivalData *)(this + 0x178));
  UISingletonDialog<UICarnival>::~UISingletonDialog((UISingletonDialog<UICarnival> *)this);
  return;
}


/* non-virtual thunk to UICarnival::~UICarnival() */

void __thiscall UICarnival::~UICarnival(UICarnival *this)

{
  ~UICarnival(this + -0x140);
  return;
}


/* UICarnival::~UICarnival() */

void __thiscall UICarnival::~UICarnival(UICarnival *this)

{
  ~UICarnival(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UICarnival::~UICarnival() */

void __thiscall UICarnival::~UICarnival(UICarnival *this)

{
  ~UICarnival(this + -0x140);
  return;
}


/* UICarnival::ShowBundlePreview() */

void __thiscall UICarnival::ShowBundlePreview(UICarnival *this)

{
  CarnivalBundlePreview *this_00;
  
  if (*(long *)(this + 0x160) != 0) {
    return;
  }
  this_00 = ::operator_new(0xe8);
  CarnivalBundlePreview::CarnivalBundlePreview(this_00);
  *(CarnivalBundlePreview **)(this + 0x160) = this_00;
  CarnivalBundlePreview::InitView(this_00,(vector *)(this + 0x1c8));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
  LawnApp::PushOverlaysToTop(gLawnApp);
  Sexy::WidgetManager::AddBaseModal
            (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x160));
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x160));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::InitBundle() */

void __thiscall UICarnival::InitBundle(UICarnival *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  UIWidgetImage *pUVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *pWVar10;
  ulong uVar11;
  CarnivalBundle *pCVar12;
  CarnivalBundleData *pCVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  string asStack_60 [8];
  string asStack_58 [8];
  Insets aIStack_50 [16];
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_40,"UIImage_Tab1_BG");
  pUVar9 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  (**(code **)(*(long *)pUVar9 + 0x80))(pUVar9,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x140));
  pWVar10 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar10);
  iVar2 = FUN_039ac220(0xf);
  iVar3 = FUN_039ac220(10);
  iVar4 = FUN_039ac220(0x1e);
  iVar8 = *(int *)(pUVar9 + 0x50);
  iVar5 = FUN_039ac220(0x14);
  Sexy::Insets::Insets(aIStack_50,iVar2,iVar3,iVar8 - iVar4,*(int *)(pUVar9 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_50);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)pWVar10 + 0x1a0))(pWVar10,aIStack_50);
  iVar3 = FUN_039ac220(10);
  uVar6 = FUN_039ac220(0x118);
  iVar4 = FUN_039ac220(0xb4);
  iVar8 = iVar3 + iVar4;
  uVar18 = 0;
  iVar2 = 0;
  while( true ) {
    uVar11 = FUN_039ab08c(*(undefined8 *)(this + 0x198),*(undefined8 *)(this + 0x1a0));
    if (uVar11 <= uVar18) break;
    pCVar12 = ::operator_new(0x178);
    CarnivalBundle::CarnivalBundle(pCVar12);
    uVar7 = FUN_039ac220(0);
    (**(code **)(*(long *)pCVar12 + 0x198))(pCVar12,iVar2,uVar7,iVar4,uVar6);
    pCVar13 = (CarnivalBundleData *)FUN_039ab0c8(*(undefined8 *)(this + 0x198),uVar18);
    CarnivalBundle::InitView(pCVar12,*(int *)pCVar13,pCVar13);
    (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pCVar12);
    uVar18 = uVar18 + 1;
    iVar2 = iVar2 + iVar8;
  }
  uVar11 = 0;
  iVar2 = (int)uVar18 * iVar8;
  while( true ) {
    uVar14 = FUN_039ab08c(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
    if (uVar14 <= uVar11) break;
    pCVar12 = ::operator_new(0x178);
    CarnivalBundle::CarnivalBundle(pCVar12);
    uVar7 = FUN_039ac220(0);
    (**(code **)(*(long *)pCVar12 + 0x198))(pCVar12,iVar2,uVar7,iVar4,uVar6);
    pCVar13 = (CarnivalBundleData *)FUN_039ab0c8(*(undefined8 *)(this + 0x1b0),uVar11);
    CarnivalBundle::InitView(pCVar12,0,pCVar13);
    (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pCVar12);
    uVar11 = uVar11 + 1;
    iVar2 = iVar2 + iVar8;
  }
  pcVar17 = *(code **)(*(long *)pUVar9 + 0x60);
  *(int *)(pWVar10 + 0x50) = ((int)uVar18 + (int)uVar11) * iVar8 - iVar3;
  (*pcVar17)(pUVar9,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,pWVar10);
  cVar1 = std::vector<CarnivalBundleData,std::allocator<CarnivalBundleData>>::empty
                    ((vector<CarnivalBundleData,std::allocator<CarnivalBundleData>> *)(this + 0x1c8)
                    );
  if (cVar1 == '\0') {
    lVar15 = FUN_039ab0c8(*(undefined8 *)(this + 0x1c8),0);
    FUN_05475d88(asStack_60,lVar15 + 0x60);
    local_40.tm_zone = (char *)0x0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40.tm_hour = 0;
    local_40.tm_mday = 0;
    local_40.tm_mon = 0;
    local_40.tm_year = 0;
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    FUN_05475ffc(asStack_58,asStack_60,0,8);
    iVar8 = StringHelper::ToInt(asStack_58);
    std::string::~string(asStack_58);
    FUN_05475ffc(asStack_58,asStack_60,8,0xffffffffffffffff);
    iVar2 = StringHelper::ToInt(asStack_58);
    std::string::~string(asStack_58);
    local_40.tm_mday = iVar8 % 100;
    local_40.tm_hour = iVar2 / 10000;
    local_40.tm_year = iVar8 / 10000 + -0x76c;
    local_40.tm_mon = (iVar8 % 10000) / 100 + -1;
    local_40.tm_min = (iVar2 % 10000) / 100;
    local_40.tm_sec = iVar2 % 100;
    lVar15 = Sexy::GetTimegm(&local_40);
    lVar16 = Sexy::GetBJTimeOffset();
    *(long *)(this + 0x150) = lVar15 - lVar16;
    std::string::~string(asStack_60);
  }
  else {
    std::string::string((string *)&local_40,"Widget_Flash_Sale_Preview");
    pWVar10 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,(string *)&local_40);
    (**(code **)(*(long *)pWVar10 + 0x158))(pWVar10,0);
    std::string::~string((string *)&local_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::ButtonDepress(int) */

void __thiscall UICarnival::ButtonDepress(UICarnival *this,int param_1)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  TGALogMgr *this_02;
  size_t __n;
  float fVar1;
  wchar_t local_48 [2];
  pair<wchar_t_const,wchar_t> apStack_40 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [48];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x65) {
    __n = ___stack_chk_guard;
    ShowBundlePreview(this);
    TGACarnivalData::TGACarnivalData((TGACarnivalData *)avStack_38);
    std::string::append((string *)avStack_38,"5",__n);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogCarnivalData(this_02,(TGACarnivalData *)avStack_38);
    DropGroupNode::~DropGroupNode((DropGroupNode *)avStack_38);
  }
  else if (param_1 < 0x66) {
    if (param_1 == 0x42) {
      fVar1 = (float)PVZ_T();
      *(long *)(this + 0x158) = (long)(fVar1 + 3.0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
      local_48[1] = 1;
      local_48[0] = L'⩪';
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_40,local_48,local_48 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38,
                 (pair *)apStack_40);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_38,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_38);
    }
    else if (param_1 == 0x58) {
      UISingletonDialog<UICarnival>::CloseDialog();
    }
  }
  else if (param_1 == 0x66) {
    ShowPacketList(this);
  }
  else if (param_1 == 0x457) {
    showDescriptionWidget(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UICarnival::ButtonDepress(int) */

void __thiscall UICarnival::ButtonDepress(UICarnival *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall UICarnival::OnNotifyRefreshActivityList(UICarnival *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_9c = 0x2a6a;
    local_98 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_9c);
    local_90 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_98,(rbtree_iterator *)&local_90);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_039aae5c(local_80);
      if (((cVar2 != '\0') && (local_70 != '\0')) &&
         (cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x178)),
         cVar2 != '\0')) {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        std::string::string((string *)&local_90,"mat_carnival_ticket");
        PlayerInfo::SetMaterialNum(this_01,(string *)&local_90,*(int *)(this + 0x18c));
        std::string::~string((string *)&local_90);
        nop();
        InitBundle(this);
        Refresh(this);
      }
      ActiveItem::~ActiveItem(aAStack_88);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::InitView() */

void __thiscall UICarnival::InitView(UICarnival *this)

{
  char cVar1;
  int iVar2;
  UITabControl *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_039aae5c(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x178)), cVar1 != '\0'))
  {
    std::string::string(asStack_90,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_90);
    std::string::~string(asStack_90);
    nop();
    if (this_00 != (UITabControl *)0x0) {
      UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x138));
    }
    (**(code **)(*(long *)this + 0x340))(this,1);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    std::string::string(asStack_90,"mat_carnival_ticket");
    PlayerInfo::SetMaterialNum(this_02,asStack_90,*(int *)(this + 0x18c));
    std::string::~string(asStack_90);
    nop();
    InitBundle(this);
    InitTotalReward(this);
    InitPersonReward(this);
    Refresh(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICarnival::OnCreate() */

void __thiscall UICarnival::OnCreate(UICarnival *this)

{
  uint uVar1;
  UIWidgetBackground *pUVar2;
  TGALogMgr *this_00;
  size_t __n;
  string asStack_40 [8];
  string asStack_38 [8];
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_38,"Background_0");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetBackground>((Dialog *)this,asStack_38);
  std::string::~string(asStack_38);
  nop();
  uVar1 = (*(int *)(this + 0x50) - *(int *)(pUVar2 + 0x50)) / 2;
  __n = (size_t)uVar1;
  *(uint *)(pUVar2 + 0x48) = uVar1;
  InitView(this);
  TGACarnivalData::TGACarnivalData((TGACarnivalData *)asStack_38);
  std::string::append(asStack_38,"1",__n);
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x18c));
  FUN_05474278(auStack_30,asStack_40);
  std::string::~string(asStack_40);
  this_00 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogCarnivalData(this_00,(TGACarnivalData *)asStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

