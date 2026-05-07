// Class: UIDragonTreasure


/* UIDragonTreasure::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIDragonTreasure::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDragonTreasure::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIDragonTreasure::ScrollTargetReached(UIDragonTreasure *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIDragonTreasure::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIDragonTreasure::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIDragonTreasure::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIDragonTreasure::ScrollTargetInterrupted(UIDragonTreasure *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::GetLayoutName() */

void __thiscall UIDragonTreasure::GetLayoutName(UIDragonTreasure *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIDragonTreasure");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIDragonTreasure::closeDescriptionWidget() */

void __thiscall UIDragonTreasure::closeDescriptionWidget(UIDragonTreasure *this)

{
  if (*(long *)(this + 0x210) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],*(Widget **)(this + 0x210))
    ;
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x210));
    *(undefined8 *)(this + 0x210) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::InitShop() */

void __thiscall UIDragonTreasure::InitShop(UIDragonTreasure *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DragonTreasureShopWidget *this_02;
  DragonTreasureShopData *pDVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Tab3_BG");
  iVar10 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_0349abdc(0xf);
  iVar2 = FUN_0349abdc(10);
  iVar3 = FUN_0349abdc(0x1e);
  iVar5 = *(int *)(pUVar6 + 0x50);
  iVar4 = FUN_0349abdc(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar1,iVar2,iVar5 - iVar3,*(int *)(pUVar6 + 0x54) - iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar5 = FUN_0349abdc(10);
  iVar1 = FUN_0349abdc(0x96);
  iVar2 = FUN_0349abdc(0xaf);
  iVar3 = FUN_0349abdc(0);
  uVar12 = 0;
  while( true ) {
    uVar11 = (uint)uVar12;
    uVar8 = FUN_03499f6c(*(undefined8 *)(this + 0x1e0),*(undefined8 *)(this + 0x1e8));
    if (uVar8 <= uVar12) break;
    this_02 = ::operator_new(0x110);
    DragonTreasureShopWidget::DragonTreasureShopWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar3 + (iVar1 + iVar5) * (uVar11 & 3),
               iVar3 + (iVar5 + iVar2) * ((int)uVar11 >> 2),iVar1,iVar2);
    pDVar7 = (DragonTreasureShopData *)FUN_03499f94(*(undefined8 *)(this + 0x1e0),uVar12);
    DragonTreasureShopWidget::InitView(this_02,uVar11,pDVar7);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    iVar10 = *(int *)(this_02 + 0x4c) + *(int *)(this_02 + 0x54);
    uVar12 = uVar12 + 1;
  }
  lVar9 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar10;
  (**(code **)(lVar9 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::InitTeasure() */

void __thiscall UIDragonTreasure::InitTeasure(UIDragonTreasure *this)

{
  ulong uVar1;
  undefined4 uVar2;
  UIWidgetImage *pUVar3;
  UIWidgetText *pUVar4;
  Widget *pWVar5;
  PVZ2UIButton *pPVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar10 = 0;
  std::string::string(asStack_10,"UIImage_Btn1_Mat");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Btn1_Cost");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Btn1_Name");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIImage_Btn2_Mat");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
  pUVar3[0x6d] = (UIWidgetImage)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Btn2_Cost");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Btn2_Name");
  pUVar4 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  pUVar4[0x6d] = (UIWidgetText)0x0;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Widget_AwardMaskCont");
  pWVar5 = UI::Dialog::GetWidget<Sexy::Widget>((Dialog *)this,asStack_10);
  pWVar5[0x6d] = (Widget)0x0;
  std::string::~string(asStack_10);
  nop();
  do {
    lVar10 = lVar10 + 1;
    Sexy::StrFormat("UIImage_Frame%d",asStack_10,lVar10);
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    (**(code **)(*(long *)pUVar3 + 0x80))(pUVar3,1,1);
    Sexy::StrFormat("UIImage_FrameMask%d",asStack_10,lVar10);
    pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,0);
    pUVar3[0x6d] = (UIWidgetImage)0x0;
  } while (lVar10 != 0xf);
  bVar12 = false;
  lVar10 = FUN_03499f14(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
  if (lVar10 == 0xf) {
    iVar13 = 0;
    uVar14 = 0;
    do {
      while( true ) {
        uVar1 = uVar14 + 1;
        Sexy::StrFormat("UIImage_Frame%d",asStack_10,uVar1);
        pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        (**(code **)(*(long *)pUVar3 + 0x80))(pUVar3,1,1);
        piVar7 = (int *)FUN_03499f08(*(undefined8 *)(this + 0x178),uVar14);
        plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],false);
        uVar2 = FUN_0349abdc(0);
        (**(code **)(*plVar8 + 0x198))
                  (plVar8,uVar2,uVar2,*(undefined4 *)(pUVar3 + 0x50),*(undefined4 *)(pUVar3 + 0x54))
        ;
        (**(code **)(*(long *)pUVar3 + 0x60))(pUVar3,plVar8);
        uVar11 = *(undefined8 *)(this + 0x178);
        lVar10 = FUN_03499f08(uVar11,uVar14);
        uVar14 = uVar1;
        if (*(int *)(lVar10 + 8) != 2) break;
        iVar13 = iVar13 + 1;
        Sexy::StrFormat("UIImage_FrameMask%d",asStack_10,uVar1);
        pUVar3 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
        std::string::~string(asStack_10);
        (**(code **)(*(long *)pUVar3 + 0x158))(pUVar3,1);
        uVar9 = FUN_03499f14(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180));
        if (uVar9 <= uVar1) goto LAB_0349be20;
      }
      uVar9 = FUN_03499f14(uVar11,*(undefined8 *)(this + 0x180));
    } while (uVar1 < uVar9);
LAB_0349be20:
    bVar12 = 4 < iVar13;
  }
  std::string::string(asStack_10,"UIButton_Reset");
  pPVar6 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pPVar6 + 0x158))(pPVar6,bVar12);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::RefreshInfo() */

void __thiscall UIDragonTreasure::RefreshInfo(UIDragonTreasure *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar1;
  UIWidgetText *pUVar2;
  undefined4 local_20;
  undefined4 local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::string::string(asStack_10,"UIText_Crystal_Number");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UIText_Integral_Number");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_dragon_treasure_crystal");
  local_20 = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"mat_dragon_treasure_integral");
  local_1c = PlayerInfo::GetMaterialNum(this_01,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(this + 0x160) = local_1c;
  *(undefined4 *)(this + 0x15c) = local_20;
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_20);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar1,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::to_string<ActivityTypeID>((ActivityTypeID *)&local_1c);
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::showDescriptionWidget() */

void __thiscall UIDragonTreasure::showDescriptionWidget(UIDragonTreasure *this)

{
  ActivityDescriptionUI *this_00;
  PlantWarsLevelSelectUI *pPVar1;
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x210) == 0) {
    this_00 = ::operator_new(0x128);
    ActivityDescriptionUI::ActivityDescriptionUI(this_00);
    *(ActivityDescriptionUI **)(this + 0x210) = this_00;
    TodStringTranslate(L"[DRAGON_TREASURE_DESCRIPTION]");
    TodStringTranslate(L"[DRAGON_TREASURE_DESCRIPTION_TITLE]");
    ActivityDescriptionUI::InitView(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    FUN_05476c50(awStack_58);
    pPVar1 = *(PlantWarsLevelSelectUI **)(this + 0x210);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,closeDescriptionWidget);
    Sexy::Delegate0::Delegate0<UIDragonTreasure,void(UIDragonTreasure::*)()>(aDStack_38,awStack_50);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar1,aDStack_38);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x210));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x210));
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal
              (*(WidgetManager **)(gLawnApp + 0x360),*(Widget **)(this + 0x210));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x210));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::InitBundle() */

void __thiscall UIDragonTreasure::InitBundle(UIDragonTreasure *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  DragonTreasureBundleWidget *this_02;
  vector *pvVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = 0;
  std::string::string(asStack_18,"UIImage_Tab2_BG");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_0349abdc(10);
  iVar3 = FUN_0349abdc(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_0349abdc(10);
  iVar4 = FUN_0349abdc(0xb4);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  iVar5 = FUN_0349abdc(0);
  iVar2 = iVar5;
  while( true ) {
    iVar12 = (int)uVar13;
    uVar9 = FUN_03499f44(*(undefined8 *)(this + 0x1b0),*(undefined8 *)(this + 0x1b8));
    if (uVar9 <= uVar13) break;
    this_02 = ::operator_new(0xf8);
    DragonTreasureBundleWidget::DragonTreasureBundleWidget(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,iVar5,iVar4,uVar1);
    pvVar7 = (vector *)FUN_03499f58(*(undefined8 *)(this + 0x1b0),uVar13);
    uVar14 = *(undefined8 *)(this + 0x1c8);
    uVar9 = FUN_03499ae4(uVar14,*(undefined8 *)(this + 0x1d0));
    iVar11 = 0;
    if (uVar13 < uVar9) {
      piVar8 = (int *)FUN_03499f64(uVar14,uVar13);
      iVar11 = *piVar8;
    }
    uVar13 = uVar13 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
    DragonTreasureBundleWidget::InitView(this_02,iVar12,pvVar7,iVar11);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  }
  pcVar10 = *(code **)(*(long *)this_00 + 0x60);
  *(int *)(this_01 + 0x50) = (iVar5 * 2 - iVar3) + (iVar3 + iVar4) * (int)uVar9;
  (*pcVar10)(this_00,this_01);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIDragonTreasure::UIDragonTreasure() */

void __thiscall UIDragonTreasure::UIDragonTreasure(UIDragonTreasure *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIDragonTreasure>::UISingletonDialog
            ((UISingletonDialog<UIDragonTreasure> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  this[0x140] = (UIDragonTreasure)0x0;
  *(undefined ***)this = &PTR_GetClass_06643e50;
  *(undefined **)(this + 0xd8) = &DAT_066441b0;
  *(undefined ***)(this + 0x138) = &PTR__UIDragonTreasure_066441f8;
  DragonTreasureData::DragonTreasureData((DragonTreasureData *)(this + 0x148));
  *(undefined8 *)(this + 0x210) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIDragonTreasure,void(UIDragonTreasure::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* UIDragonTreasure::~UIDragonTreasure() */

void __thiscall UIDragonTreasure::~UIDragonTreasure(UIDragonTreasure *this)

{
  *(undefined ***)(this + 0x138) = &PTR__UIDragonTreasure_066441f8;
  *(undefined ***)this = &PTR_GetClass_06643e50;
  *(undefined **)(this + 0xd8) = &DAT_066441b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  DragonTreasureData::~DragonTreasureData((DragonTreasureData *)(this + 0x148));
  UISingletonDialog<UIDragonTreasure>::~UISingletonDialog
            ((UISingletonDialog<UIDragonTreasure> *)this);
  return;
}


/* non-virtual thunk to UIDragonTreasure::~UIDragonTreasure() */

void __thiscall UIDragonTreasure::~UIDragonTreasure(UIDragonTreasure *this)

{
  ~UIDragonTreasure(this + -0x138);
  return;
}


/* UIDragonTreasure::~UIDragonTreasure() */

void __thiscall UIDragonTreasure::~UIDragonTreasure(UIDragonTreasure *this)

{
  ~UIDragonTreasure(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIDragonTreasure::~UIDragonTreasure() */

void __thiscall UIDragonTreasure::~UIDragonTreasure(UIDragonTreasure *this)

{
  ~UIDragonTreasure(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::Reset() */

void __thiscall UIDragonTreasure::Reset(UIDragonTreasure *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [3096];
  string asStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0349aac8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_d0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* UIDragonTreasure::Lottery() */

void __thiscall UIDragonTreasure::Lottery(UIDragonTreasure *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [3088];
  string asStack_d8 [208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_0349ab24(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_d8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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
/* UIDragonTreasure::ButtonDepress(int) */

void __thiscall UIDragonTreasure::ButtonDepress(UIDragonTreasure *this,int param_1)

{
  int iVar1;
  int iVar2;
  UITabControl *this_00;
  UITabContent *pUVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *pPVar5;
  UIMessageBox *pUVar6;
  Image *pIVar7;
  long lVar8;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  wstring awStack_30 [8];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x65) {
    if (*(int *)(this + 0x170) == 0) {
      pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
      std::string::string(asStack_10,"mat_dragon_treasure_crystal");
      iVar2 = PlayerInfo::GetMaterialNum(pPVar5,asStack_10);
      iVar1 = *(int *)(this + 0x164);
      std::string::~string(asStack_10);
      nop();
      if (iVar2 < iVar1) {
        pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
        if (pUVar6 != (UIMessageBox *)0x0) {
          UIMessageBox::SetShowType(pUVar6,4);
          TodStringTranslate(L"[REVIVE_TIP]");
          TodStringTranslate(L"[BUTTON_OK]");
          FUN_05478178(awStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
          FUN_05478178(asStack_10,L"[MAT_DRAGON_TREASURE_CRYSTAL]",auStack_38);
          TodReplaceString(awStack_18,L"{NAME}",(wstring *)asStack_10);
          FUN_05476c50(asStack_10);
          nop();
          FUN_05476c50(awStack_18);
          nop();
          UIMessageBox::SetMessage(pUVar6,awStack_20,awStack_30);
          std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
          pIVar7 = (Image *)StringHelper::ToImage(asStack_10,false);
          UIMessageBox::SetBackground(pUVar6,pIVar7);
          std::string::~string(asStack_10);
          nop();
          lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
          thunk_FUN_05477b9c(lVar8 + 0xd8,auStack_28);
          FUN_05476c50(awStack_20);
          FUN_05476c50(auStack_28);
          FUN_05476c50(awStack_30);
        }
      }
      else {
        Lottery(this);
      }
    }
    else {
      UISingletonDialog<UIDragonTreasureSelect>::ShowDialog();
    }
  }
  else if (param_1 < 0x66) {
    if (param_1 == 0xb) {
      showDescriptionWidget(this);
    }
    else if (param_1 == 0x58) {
      UISingletonDialog<UIDragonTreasure>::CloseDialog();
    }
  }
  else if (param_1 == 0x66) {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    std::string::string(asStack_10,"mat_dragon_treasure_crystal");
    iVar2 = PlayerInfo::GetMaterialNum(pPVar5,asStack_10);
    iVar1 = *(int *)(this + 0x168);
    std::string::~string(asStack_10);
    nop();
    if (iVar2 < iVar1) {
      pUVar6 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (pUVar6 != (UIMessageBox *)0x0) {
        UIMessageBox::SetShowType(pUVar6,4);
        TodStringTranslate(L"[REVIVE_TIP]");
        TodStringTranslate(L"[BUTTON_OK]");
        FUN_05478178(awStack_18,L"[THE_MATERIAL_NOT_ENOUGH]",auStack_40);
        FUN_05478178(asStack_10,L"[MAT_DRAGON_TREASURE_CRYSTAL]",auStack_38);
        TodReplaceString(awStack_18,L"{NAME}",(wstring *)asStack_10);
        FUN_05476c50(asStack_10);
        nop();
        FUN_05476c50(awStack_18);
        nop();
        UIMessageBox::SetMessage(pUVar6,awStack_20,awStack_30);
        std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
        pIVar7 = (Image *)StringHelper::ToImage(asStack_10,false);
        UIMessageBox::SetBackground(pUVar6,pIVar7);
        std::string::~string(asStack_10);
        nop();
        lVar8 = UIMessageBox::GetButtonCancel(pUVar6);
        thunk_FUN_05477b9c(lVar8 + 0xd8,auStack_28);
        FUN_05476c50(awStack_20);
        FUN_05476c50(auStack_28);
        FUN_05476c50(awStack_30);
      }
    }
    else {
      Reset(this);
    }
  }
  else if (param_1 == 0x12e) {
    std::string::string(asStack_10,"UITabControl_0");
    this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (UITabControl *)0x0) {
      pUVar3 = (UITabContent *)UITabControl::GetTab(this_00,2);
      UITabControl::SetTabSelected(this_00,pUVar3);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIDragonTreasure::ButtonDepress(int) */

void __thiscall UIDragonTreasure::ButtonDepress(UIDragonTreasure *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::RequestNetwork() */

void __thiscall UIDragonTreasure::RequestNetwork(UIDragonTreasure *this)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_30 [2];
  pair<wchar_t_const,wchar_t> apStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[1] = 1;
  local_30[0] = L'⩿';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_28,local_30,local_30 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20,
             (pair *)apStack_28);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,true);
  this[0x140] = (UIDragonTreasure)0x1;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::InitView() */

void __thiscall UIDragonTreasure::InitView(UIDragonTreasure *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  size_t __n;
  string asStack_d8 [8];
  string asStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [56];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03499ad8(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x148)), cVar1 != '\0'))
  {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    std::string::string(asStack_d0,"mat_dragon_treasure_crystal");
    PlayerInfo::SetMaterialNum(this_01,asStack_d0,*(int *)(this + 0x15c));
    std::string::~string(asStack_d0);
    nop();
    std::string::string(asStack_d0,"mat_dragon_treasure_integral");
    __n = (size_t)*(uint *)(this + 0x160);
    PlayerInfo::SetMaterialNum(this_01,asStack_d0,*(uint *)(this + 0x160));
    std::string::~string(asStack_d0);
    nop();
    InitTeasure(this);
    InitBundle(this);
    InitShop(this);
    RefreshInfo(this);
    TGATourismOctoberData::TGATourismOctoberData((TGATourismOctoberData *)asStack_d0);
    std::string::append(asStack_d0,"1",__n);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x15c));
    FUN_05474278(auStack_c8,asStack_d8);
    std::string::~string(asStack_d8);
    std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0x160));
    FUN_05474278(auStack_c0,asStack_d8);
    std::string::~string(asStack_d8);
    this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGALogMgr::LogDragonTreasure(this_02,(TGADragonTreasureData *)asStack_d0);
    TGATourismOctoberData::~TGATourismOctoberData((TGATourismOctoberData *)asStack_d0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::OnCreate() */

void __thiscall UIDragonTreasure::OnCreate(UIDragonTreasure *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragonTreasure::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
UIDragonTreasure::OnNotifyRefreshActivityList(UIDragonTreasure *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x140] != (UIDragonTreasure)0x0) {
    local_1c = 0x2a7f;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      this[0x140] = (UIDragonTreasure)0x0;
      InitView(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

