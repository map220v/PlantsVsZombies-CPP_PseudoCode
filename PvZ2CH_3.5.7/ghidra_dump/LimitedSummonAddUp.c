// Class: LimitedSummonAddUp


/* LimitedSummonAddUp::ScrollTargetReached(Sexy::ScrollWidget*) */

void LimitedSummonAddUp::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitedSummonAddUp::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LimitedSummonAddUp::ScrollTargetReached(LimitedSummonAddUp *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* LimitedSummonAddUp::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LimitedSummonAddUp::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LimitedSummonAddUp::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LimitedSummonAddUp::ScrollTargetInterrupted(LimitedSummonAddUp *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUp::GetLayoutName() */

void __thiscall LimitedSummonAddUp::GetLayoutName(LimitedSummonAddUp *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"LimitedSummonAddUp");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* LimitedSummonAddUp::~LimitedSummonAddUp() */

void __thiscall LimitedSummonAddUp::~LimitedSummonAddUp(LimitedSummonAddUp *this)

{
  *(undefined ***)this = &PTR_GetClass_066e2d90;
  *(undefined **)(this + 0xd8) = &DAT_066e30f0;
  *(undefined ***)(this + 0x138) = &PTR__LimitedSummonAddUp_066e3138;
  UISingletonDialog<LimitedSummonAddUp>::~UISingletonDialog
            ((UISingletonDialog<LimitedSummonAddUp> *)this);
  return;
}


/* non-virtual thunk to LimitedSummonAddUp::~LimitedSummonAddUp() */

void __thiscall LimitedSummonAddUp::~LimitedSummonAddUp(LimitedSummonAddUp *this)

{
  ~LimitedSummonAddUp(this + -0x138);
  return;
}


/* LimitedSummonAddUp::~LimitedSummonAddUp() */

void __thiscall LimitedSummonAddUp::~LimitedSummonAddUp(LimitedSummonAddUp *this)

{
  ~LimitedSummonAddUp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitedSummonAddUp::~LimitedSummonAddUp() */

void __thiscall LimitedSummonAddUp::~LimitedSummonAddUp(LimitedSummonAddUp *this)

{
  ~LimitedSummonAddUp(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUp::Update() */

void __thiscall LimitedSummonAddUp::Update(LimitedSummonAddUp *this)

{
  UIWidgetText *pUVar1;
  string asStack_18 [8];
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  std::string::string(asStack_18,"UIText_Timer");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_18);
  TimeUtil::GetTimeCountdown(3,0x2a66);
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


/* LimitedSummonAddUp::LimitedSummonAddUp() */

void __thiscall LimitedSummonAddUp::LimitedSummonAddUp(LimitedSummonAddUp *this)

{
  UISingletonDialog<LimitedSummonAddUp>::UISingletonDialog
            ((UISingletonDialog<LimitedSummonAddUp> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066e2d90;
  *(undefined **)(this + 0xd8) = &DAT_066e30f0;
  *(undefined ***)(this + 0x138) = &PTR__LimitedSummonAddUp_066e3138;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUp::InitView() */

void __thiscall LimitedSummonAddUp::InitView(LimitedSummonAddUp *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *this_00;
  long lVar7;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  LimitedSummonAddUpItem *this_03;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Background");
  uVar11 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  std::string::string(asStack_30,"UIImage_Banner");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0x11c));
  std::operator+("IMAGE_UI_LIMITEDSUMMON_BANNER3_",asStack_28);
  UIWidgetImage::SetImage(this_00,asStack_18);
  std::string::~string(asStack_18);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_0399a924(0xf);
  iVar3 = FUN_0399a924(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_28,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar4 = FUN_0399a924(10);
  iVar2 = *(int *)(this_02 + 0x50);
  iVar5 = FUN_0399a924(100);
  iVar3 = 0;
  while( true ) {
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar10 = (int)uVar11;
    uVar8 = FUN_03999570(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
    bVar1 = uVar8 <= uVar11;
    uVar11 = uVar11 + 1;
    if (bVar1) break;
    this_03 = ::operator_new(0x100);
    LimitedSummonAddUpItem::LimitedSummonAddUpItem(this_03);
    Sexy::Insets::Insets((Insets *)asStack_18,0,iVar3,iVar2,iVar5);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_18);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    LimitedSummonAddUpItem::InitView(this_03,iVar10);
    iVar3 = iVar3 + iVar4 + iVar5;
  }
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  iVar2 = FUN_03999570(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
  pcVar9 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x54) = iVar2 * (iVar4 + iVar5) - iVar4;
  (*pcVar9)(this_01,this_02);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonAddUp::OnCreate() */

void __thiscall LimitedSummonAddUp::OnCreate(LimitedSummonAddUp *this)

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
/* LimitedSummonAddUp::Refresh() */

void __thiscall LimitedSummonAddUp::Refresh(LimitedSummonAddUp *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  UIWidgetImage *this_00;
  long lVar7;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  LimitedSummonAddUpItem *this_03;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  ulong uVar11;
  string asStack_30 [8];
  string asStack_28 [16];
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Background");
  uVar11 = 0;
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  std::string::string(asStack_30,"UIImage_Banner");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_30);
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar7 + 0x11c));
  std::operator+("IMAGE_UI_LIMITEDSUMMON_BANNER3_",asStack_28);
  UIWidgetImage::SetImage(this_00,asStack_18);
  std::string::~string(asStack_18);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  nop();
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_0399a924(0xf);
  iVar3 = FUN_0399a924(0x1e);
  Sexy::Insets::Insets
            ((Insets *)asStack_28,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,2);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar4 = FUN_0399a924(10);
  iVar2 = *(int *)(this_02 + 0x50);
  iVar5 = FUN_0399a924(100);
  iVar3 = 0;
  while( true ) {
    lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
    iVar10 = (int)uVar11;
    uVar8 = FUN_03999570(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
    bVar1 = uVar8 <= uVar11;
    uVar11 = uVar11 + 1;
    if (bVar1) break;
    this_03 = ::operator_new(0x100);
    LimitedSummonAddUpItem::LimitedSummonAddUpItem(this_03);
    Sexy::Insets::Insets((Insets *)asStack_18,0,iVar3,iVar2,iVar5);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_18);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    LimitedSummonAddUpItem::InitView(this_03,iVar10);
    iVar3 = iVar3 + iVar4 + iVar5;
  }
  lVar7 = Sexy::LazySingleton<LimitedSummonManager>::GetInstancePtr();
  iVar2 = FUN_03999570(*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)(lVar7 + 0x70));
  pcVar9 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x54) = iVar2 * (iVar4 + iVar5) - iVar4;
  (*pcVar9)(this_01,this_02);
  (**(code **)(*(long *)pUVar6 + 0x60))(pUVar6,this_01);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonAddUp::ButtonDepress(int) */

void __thiscall LimitedSummonAddUp::ButtonDepress(LimitedSummonAddUp *this,int param_1)

{
  UILimitedSummon *this_00;
  
  if (param_1 != 0x191) {
    return;
  }
  this_00 = (UILimitedSummon *)UISingletonDialog<UILimitedSummon>::GetSingletonPtr();
  UILimitedSummon::SetCurrentTab(this_00,1);
  return;
}


/* non-virtual thunk to LimitedSummonAddUp::ButtonDepress(int) */

void __thiscall LimitedSummonAddUp::ButtonDepress(LimitedSummonAddUp *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

