// Class: UIPennyGiftBoxReward


/* UIPennyGiftBoxReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIPennyGiftBoxReward::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyGiftBoxReward::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIPennyGiftBoxReward::ScrollTargetReached(UIPennyGiftBoxReward *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIPennyGiftBoxReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIPennyGiftBoxReward::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIPennyGiftBoxReward::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIPennyGiftBoxReward::ScrollTargetInterrupted(UIPennyGiftBoxReward *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::GetLayoutName() */

void __thiscall UIPennyGiftBoxReward::GetLayoutName(UIPennyGiftBoxReward *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyGiftBoxReward");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::Update() */

void __thiscall UIPennyGiftBoxReward::Update(UIPennyGiftBoxReward *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Timer4");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a84);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
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


/* UIPennyGiftBoxReward::UIPennyGiftBoxReward() */

void __thiscall UIPennyGiftBoxReward::UIPennyGiftBoxReward(UIPennyGiftBoxReward *this)

{
  undefined8 uVar1;
  
  UISingletonDialog<UIPennyGiftBoxReward>::UISingletonDialog
            ((UISingletonDialog<UIPennyGiftBoxReward> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069e9ea0;
  *(undefined **)(this + 0xd8) = &DAT_069ea200;
  *(undefined ***)(this + 0x138) = &PTR__UIPennyGiftBoxReward_069ea248;
  PennyGiftBoxData::PennyGiftBoxData((PennyGiftBoxData *)(this + 0x150));
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  *(undefined8 *)(this + 0x148) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::InitTotalReward() */

void __thiscall UIPennyGiftBoxReward::InitTotalReward(UIPennyGiftBoxReward *this)

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
  PennyGiftTotalRewardItem *this_02;
  undefined8 uVar12;
  int *piVar13;
  ulong uVar14;
  Image *pIVar15;
  UIWidgetImage *pUVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  Insets aIStack_28 [16];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  uVar18 = 0;
  iVar17 = 0;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_18,"UIImage_Tab2_BG1");
  pUVar10 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_18);
  std::string::~string((string *)&local_18);
  nop();
  (**(code **)(*(long *)pUVar10 + 0x80))(pUVar10,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_04e790b0(0xf);
  iVar3 = FUN_04e790b0(10);
  iVar4 = FUN_04e790b0(0x1e);
  iVar20 = *(int *)(pUVar10 + 0x50);
  iVar5 = FUN_04e790b0(200);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar20 - iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  uVar19 = 0;
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar2 = FUN_04e790b0(0x82);
  uVar6 = FUN_04e790b0(0x5a);
  lVar11 = FUN_04e76f20(*(undefined8 *)(this + 0x230),*(undefined8 *)(this + 0x238));
  iVar20 = iVar17;
  if (lVar11 != 0) {
    do {
      Sexy::Insets::Insets((Insets *)&local_18);
      iVar17 = (int)uVar19 >> 1;
      if ((uVar18 & 1) == 0) {
        iVar3 = FUN_04e790b0(100);
        local_18 = iVar17 * (iVar3 + iVar2);
        local_14 = FUN_04e790b0((uint)uVar18 & 1);
      }
      else {
        iVar3 = FUN_04e790b0(0x73);
        iVar4 = FUN_04e790b0(100);
        local_18 = iVar3 + iVar17 * (iVar4 + iVar2);
        local_14 = FUN_04e790b0(0x6e);
      }
      local_10 = iVar2;
      local_c = uVar6;
      this_02 = ::operator_new(0x118);
      PennyGiftTotalRewardItem::PennyGiftTotalRewardItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,(string *)&local_18);
      uVar12 = FUN_04e76f18(*(undefined8 *)(this + 0x230),uVar18);
      (**(code **)(*(long *)this_02 + 0x310))(this_02,uVar19,uVar12);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar5 = local_10;
      uVar12 = *(undefined8 *)(this + 0x230);
      iVar17 = local_10 + local_18;
      iVar3 = *(int *)(this + 0x224);
      piVar13 = (int *)FUN_04e76f18(uVar12,uVar18);
      iVar4 = *piVar13;
      if (iVar3 < iVar4) {
        if (uVar18 == 0) {
          iVar5 = 0;
        }
        else {
          piVar13 = (int *)FUN_04e76f18(uVar12,uVar18 - 1);
          iVar5 = *piVar13;
        }
        if (iVar3 < iVar5) {
          uVar14 = FUN_04e76f20(uVar12,*(undefined8 *)(this + 0x238));
        }
        else {
          iVar9 = FUN_04e790b0(0x73);
          iVar4 = iVar4 - iVar5;
          iVar1 = 0;
          if (iVar4 != 0) {
            iVar1 = (iVar9 * (iVar3 - iVar5)) / iVar4;
          }
          uVar14 = FUN_04e76f20(uVar12,*(undefined8 *)(this + 0x238));
          iVar20 = iVar20 + iVar1;
        }
      }
      else {
        iVar3 = iVar5 / 2 + *(int *)(this_02 + 0x48);
        uVar14 = FUN_04e76f20(uVar12,*(undefined8 *)(this + 0x238));
        iVar20 = iVar3 + iVar5 / 2;
        if (uVar18 != uVar14 - 1) {
          iVar20 = iVar3;
        }
      }
      uVar18 = uVar18 + 1;
      uVar19 = uVar18 & 0xffffffff;
    } while (uVar18 < uVar14);
  }
  *(int *)(this_01 + 0x50) = iVar17;
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0120);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_04e790b0(0);
  uVar7 = FUN_04e790b0(0x5a);
  uVar8 = FUN_04e790b0(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar17,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0540);
  pUVar16 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(pUVar16,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(pUVar16,(string *)&local_18,0.0);
  uVar6 = FUN_04e790b0(0);
  uVar7 = FUN_04e790b0(0x5a);
  uVar8 = FUN_04e790b0(0x14);
  (**(code **)(*(long *)pUVar16 + 0x198))(pUVar16,uVar6,uVar7,iVar20,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,pUVar16);
  (**(code **)(*(long *)pUVar10 + 0x60))(pUVar10,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::InitPersonReward() */

void __thiscall UIPennyGiftBoxReward::InitPersonReward(UIPennyGiftBoxReward *this)

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
  PennyGiftRewardItem *this_04;
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
  (**(code **)(*(long *)pUVar14 + 0x80))(pUVar14,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_04e790b0(0xf);
  iVar5 = FUN_04e790b0(8);
  iVar6 = FUN_04e790b0(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,iVar4,iVar5,*(int *)(pUVar14 + 0x50) - iVar6,
             *(int *)(pUVar14 + 0x54) - iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_28);
  iVar4 = FUN_04e790b0(10);
  iVar5 = FUN_04e790b0(0x46);
  iVar6 = FUN_04e790b0(0x32);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0120);
  this_02 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_02,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_02,(string *)&local_18,0.0);
  uVar7 = FUN_04e790b0(0);
  uVar8 = FUN_04e790b0(0x36);
  uVar10 = local_20;
  uVar9 = FUN_04e790b0(0x14);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,uVar7,uVar8,uVar10,uVar9);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  pIVar15 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba0540);
  this_03 = ::operator_new(0x118);
  UIWidgetImage::UIWidgetImage(this_03,pIVar15);
  local_18 = 3;
  UIWidgetImage::SetImageType(this_03,(string *)&local_18,0.0);
  uVar10 = FUN_04e790b0(0);
  uVar7 = FUN_04e790b0(0x36);
  uVar8 = FUN_04e790b0(0x14);
  (**(code **)(*(long *)this_03 + 0x198))(this_03,uVar10,uVar7,local_20,uVar8);
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
  uVar16 = *(undefined8 *)(this + 0x248);
  for (uVar24 = 0; uVar17 = FUN_04e76f20(uVar16,*(undefined8 *)(this + 0x250)), uVar24 < uVar17;
      uVar24 = uVar24 + 1) {
    iVar11 = FUN_04e790b0(0);
    Sexy::Insets::Insets((Insets *)&local_18,iVar26,iVar11,iVar5,iVar6);
    this_04 = ::operator_new(0x118);
    PennyGiftRewardItem::PennyGiftRewardItem(this_04);
    (**(code **)(*(long *)this_04 + 0x1a0))(this_04,(string *)&local_18);
    uVar16 = *(undefined8 *)(this + 0x248);
    bVar3 = (int)uVar24 != 0;
    lVar18 = FUN_04e76f20(uVar16,*(undefined8 *)(this + 0x250));
    uVar22 = bVar3;
    if (uVar24 == lVar18 - 1U) {
      uVar22 = 2;
    }
    uVar16 = FUN_04e76f18(uVar16,uVar24);
    (**(code **)(*(long *)this_04 + 0x310))(this_04,uVar24 & 0xffffffff,uVar16,uVar22);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_04);
    iVar11 = local_18 + local_10;
    pAVar19 = (ActivityTypeID *)FUN_04e76f18(*(undefined8 *)(this + 0x248),uVar24);
    std::to_string<ActivityTypeID>(pAVar19);
    Sexy::ToWString(asStack_38);
    this_05 = ::operator_new(0x108);
    UIWidgetText::UIWidgetText(this_05,awStack_30);
    FUN_05476c50(awStack_30);
    std::string::~string(asStack_38);
    iVar2 = local_18;
    iVar12 = FUN_04e790b0(0x20);
    iVar1 = local_14 + local_c;
    iVar13 = FUN_04e790b0(4);
    iVar25 = local_10;
    uVar10 = FUN_04e790b0(0x16);
    (**(code **)(*(long *)this_05 + 0x198))(this_05,iVar2 - iVar12,iVar1 + iVar13,iVar25,uVar10);
    uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
    FUN_04e76c78(this_05 + 0xe8,uVar16);
    FUN_04e76c80(this_05 + 0xe0,4);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_05);
    uVar16 = *(undefined8 *)(this + 0x248);
    iVar1 = *(int *)(this + 0x228);
    piVar20 = (int *)FUN_04e76f18(uVar16,uVar24);
    iVar2 = *piVar20;
    if (iVar1 < iVar2) {
      if (bVar3) {
        piVar20 = (int *)FUN_04e76f18(uVar16,uVar24 - 1);
        iVar25 = *piVar20;
      }
      else {
        iVar25 = 0;
      }
      if (iVar25 <= iVar1) {
        iVar13 = FUN_04e790b0(0x55);
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


/* UIPennyGiftBoxReward::~UIPennyGiftBoxReward() */

void __thiscall UIPennyGiftBoxReward::~UIPennyGiftBoxReward(UIPennyGiftBoxReward *this)

{
  *(undefined **)(this + 0xd8) = &DAT_069ea200;
  *(undefined ***)this = &PTR_GetClass_069e9ea0;
  *(undefined ***)(this + 0x138) = &PTR__UIPennyGiftBoxReward_069ea248;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PennyGiftBoxData::~PennyGiftBoxData((PennyGiftBoxData *)(this + 0x150));
  UISingletonDialog<UIPennyGiftBoxReward>::~UISingletonDialog
            ((UISingletonDialog<UIPennyGiftBoxReward> *)this);
  return;
}


/* non-virtual thunk to UIPennyGiftBoxReward::~UIPennyGiftBoxReward() */

void __thiscall UIPennyGiftBoxReward::~UIPennyGiftBoxReward(UIPennyGiftBoxReward *this)

{
  ~UIPennyGiftBoxReward(this + -0x138);
  return;
}


/* UIPennyGiftBoxReward::~UIPennyGiftBoxReward() */

void __thiscall UIPennyGiftBoxReward::~UIPennyGiftBoxReward(UIPennyGiftBoxReward *this)

{
  ~UIPennyGiftBoxReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIPennyGiftBoxReward::~UIPennyGiftBoxReward() */

void __thiscall UIPennyGiftBoxReward::~UIPennyGiftBoxReward(UIPennyGiftBoxReward *this)

{
  ~UIPennyGiftBoxReward(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::Refresh() */

void __thiscall UIPennyGiftBoxReward::Refresh(UIPennyGiftBoxReward *this)

{
  long lVar1;
  UIWidgetText *pUVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  PennyGiftBoxData::operator=((PennyGiftBoxData *)(this + 0x150),(PennyGiftBoxData *)(lVar1 + 8));
  InitTotalReward(this);
  InitPersonReward(this);
  std::string::string(asStack_10,"UIText_TokenNums");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 200));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_20,"UIText_Consume");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 0xe0));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Total_Buy_Times");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 0xdc));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
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
/* UIPennyGiftBoxReward::InitView() */

void __thiscall UIPennyGiftBoxReward::InitView(UIPennyGiftBoxReward *this)

{
  long lVar1;
  UIWidgetText *pUVar2;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  PennyGiftBoxData::operator=((PennyGiftBoxData *)(this + 0x150),(PennyGiftBoxData *)(lVar1 + 8));
  InitTotalReward(this);
  InitPersonReward(this);
  std::string::string(asStack_10,"UIText_TokenNums");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 200));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::string(asStack_20,"UIText_Consume");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 0xe0));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"UIText_Total_Buy_Times");
  pUVar2 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_20);
  lVar1 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar1 + 0xdc));
  Sexy::ToWString(asStack_18);
  PuzzleTip::SetTip(pUVar2,asStack_10);
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
/* UIPennyGiftBoxReward::OnCreate() */

void __thiscall UIPennyGiftBoxReward::OnCreate(UIPennyGiftBoxReward *this)

{
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string(asStack_10,"Background_0");
  lVar1 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0;
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyGiftBoxReward::ButtonDepress(int) */

void __thiscall UIPennyGiftBoxReward::ButtonDepress(UIPennyGiftBoxReward *this,int param_1)

{
  char cVar1;
  UIPennyGiftBox *this_00;
  UIMessageBox *this_01;
  Image *pIVar2;
  long lVar3;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04e76788();
  if (cVar1 == '\0') {
    cVar1 = TimeUtil::IsToday(*(long *)(this + 0x148));
    if (cVar1 == '\0') {
      this_01 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      UIMessageBox::SetShowType(this_01,4);
      TodStringTranslate(L"[REVIVE_TIP]");
      TodStringTranslate(L"[BUTTON_OK]");
      TodStringTranslate(L"[ACTIVITY_PASS_DAY]");
      UIMessageBox::SetMessage(this_01,awStack_18,awStack_28);
      std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
      pIVar2 = (Image *)StringHelper::ToImage(asStack_10,false);
      UIMessageBox::SetBackground(this_01,pIVar2);
      std::string::~string(asStack_10);
      nop();
      lVar3 = UIMessageBox::GetButtonCancel(this_01);
      thunk_FUN_05477b9c(lVar3 + 0xd8,auStack_20);
      FUN_05476c50(awStack_18);
      FUN_05476c50(auStack_20);
      FUN_05476c50(awStack_28);
    }
    else if (param_1 == 0) {
      this_00 = (UIPennyGiftBox *)UISingletonDialog<UIPennyGiftBox>::GetSingletonPtr();
      UIPennyGiftBox::SetCurrentTab(this_00,3);
    }
  }
  else {
    UISingletonDialog<UIPennyGiftBox>::CloseDialog();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIPennyGiftBoxReward::ButtonDepress(int) */

void __thiscall UIPennyGiftBoxReward::ButtonDepress(UIPennyGiftBoxReward *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

