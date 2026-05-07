// Class: PennyGiftBoxBundle


/* PennyGiftBoxBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void PennyGiftBoxBundle::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftBoxBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftBoxBundle::ScrollTargetReached(PennyGiftBoxBundle *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* PennyGiftBoxBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PennyGiftBoxBundle::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftBoxBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftBoxBundle::ScrollTargetInterrupted(PennyGiftBoxBundle *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxBundle::GetLayoutName() */

void __thiscall PennyGiftBoxBundle::GetLayoutName(PennyGiftBoxBundle *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"PennyGiftBoxBundle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* PennyGiftBoxBundle::~PennyGiftBoxBundle() */

void __thiscall PennyGiftBoxBundle::~PennyGiftBoxBundle(PennyGiftBoxBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_069ea600;
  *(undefined **)(this + 0xd8) = &DAT_069ea960;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftBoxBundle_069ea9a8;
  UISingletonDialog<PennyGiftBoxBundle>::~UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxBundle> *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxBundle::~PennyGiftBoxBundle() */

void __thiscall PennyGiftBoxBundle::~PennyGiftBoxBundle(PennyGiftBoxBundle *this)

{
  ~PennyGiftBoxBundle(this + -0x138);
  return;
}


/* PennyGiftBoxBundle::~PennyGiftBoxBundle() */

void __thiscall PennyGiftBoxBundle::~PennyGiftBoxBundle(PennyGiftBoxBundle *this)

{
  ~PennyGiftBoxBundle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxBundle::~PennyGiftBoxBundle() */

void __thiscall PennyGiftBoxBundle::~PennyGiftBoxBundle(PennyGiftBoxBundle *this)

{
  ~PennyGiftBoxBundle(this + -0x138);
  return;
}


/* PennyGiftBoxBundle::PennyGiftBoxBundle() */

void __thiscall PennyGiftBoxBundle::PennyGiftBoxBundle(PennyGiftBoxBundle *this)

{
  UISingletonDialog<PennyGiftBoxBundle>::UISingletonDialog
            ((UISingletonDialog<PennyGiftBoxBundle> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_069ea600;
  *(undefined **)(this + 0xd8) = &DAT_069ea960;
  *(undefined ***)(this + 0x138) = &PTR__PennyGiftBoxBundle_069ea9a8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxBundle::InitView() */

void __thiscall PennyGiftBoxBundle::InitView(PennyGiftBoxBundle *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  PennyGiftBoxBundleItem *this_03;
  PennyGiftBoxGrowData *pPVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  Insets aIStack_90 [16];
  string asStack_80 [16];
  string asStack_70 [8];
  vector avStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_70,"UIImage_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_70);
  std::string::~string(asStack_70);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  std::string::string(asStack_80,"UIImage_Banner");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_80);
  std::string::string(asStack_70,"IMAGE_UI_PENNYGIFTBOX_BANNER1_1");
  UIWidgetImage::SetImage(this_00,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_80);
  nop();
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_04e790b0(0xf);
  iVar2 = FUN_04e790b0(0x1e);
  Sexy::Insets::Insets
            (aIStack_90,iVar1,iVar1,*(int *)(pUVar5 + 0x50) - iVar2,*(int *)(pUVar5 + 0x54) - iVar2)
  ;
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_90);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar3 = FUN_04e790b0(10);
  iVar4 = FUN_04e790b0(0xaa);
  iVar1 = *(int *)(this_02 + 0x54);
  uVar10 = 0;
  iVar2 = 0;
  while( true ) {
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    uVar8 = FUN_04e76ec8(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28));
    if (uVar8 <= uVar10) break;
    this_03 = ::operator_new(0x108);
    PennyGiftBoxBundleItem::PennyGiftBoxBundleItem(this_03);
    Sexy::Insets::Insets((Insets *)asStack_80,iVar2,0,iVar4,iVar1);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_80);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    pPVar6 = (PennyGiftBoxGrowData *)FUN_04e76eb8(*(undefined8 *)(lVar7 + 0x20),uVar10);
    PennyGiftBoxGrowData::PennyGiftBoxGrowData((PennyGiftBoxGrowData *)asStack_70,pPVar6);
    PennyGiftBoxBundleItem::InitView(this_03,(int)uVar10,avStack_68);
    PennyGiftBoxGrowData::~PennyGiftBoxGrowData((PennyGiftBoxGrowData *)asStack_70);
    uVar10 = uVar10 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  iVar1 = FUN_04e76ec8(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28));
  pcVar9 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x50) = iVar1 * (iVar3 + iVar4) - iVar3;
  (*pcVar9)(this_01,this_02);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxBundle::OnCreate() */

void __thiscall PennyGiftBoxBundle::OnCreate(PennyGiftBoxBundle *this)

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
/* PennyGiftBoxBundle::Refresh() */

void __thiscall PennyGiftBoxBundle::Refresh(PennyGiftBoxBundle *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  UIWidgetImage *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  PennyGiftBoxBundleItem *this_03;
  PennyGiftBoxGrowData *pPVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  Insets aIStack_90 [16];
  string asStack_80 [16];
  string asStack_70 [8];
  vector avStack_68 [96];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_70,"UIImage_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_70);
  std::string::~string(asStack_70);
  nop();
  (**(code **)(*(long *)pUVar5 + 0x80))(pUVar5,1,1);
  std::string::string(asStack_80,"UIImage_Banner");
  this_00 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_80);
  std::string::string(asStack_70,"IMAGE_UI_PENNYGIFTBOX_BANNER1_1");
  UIWidgetImage::SetImage(this_00,asStack_70);
  std::string::~string(asStack_70);
  nop();
  std::string::~string(asStack_80);
  nop();
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0x138));
  iVar1 = FUN_04e790b0(0xf);
  iVar2 = FUN_04e790b0(0x1e);
  Sexy::Insets::Insets
            (aIStack_90,iVar1,iVar1,*(int *)(pUVar5 + 0x50) - iVar2,*(int *)(pUVar5 + 0x54) - iVar2)
  ;
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_90);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  iVar3 = FUN_04e790b0(10);
  iVar4 = FUN_04e790b0(0xaa);
  iVar1 = *(int *)(this_02 + 0x54);
  uVar10 = 0;
  iVar2 = 0;
  while( true ) {
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    uVar8 = FUN_04e76ec8(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28));
    if (uVar8 <= uVar10) break;
    this_03 = ::operator_new(0x108);
    PennyGiftBoxBundleItem::PennyGiftBoxBundleItem(this_03);
    Sexy::Insets::Insets((Insets *)asStack_80,iVar2,0,iVar4,iVar1);
    (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_80);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,this_03);
    lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
    pPVar6 = (PennyGiftBoxGrowData *)FUN_04e76eb8(*(undefined8 *)(lVar7 + 0x20),uVar10);
    PennyGiftBoxGrowData::PennyGiftBoxGrowData((PennyGiftBoxGrowData *)asStack_70,pPVar6);
    PennyGiftBoxBundleItem::InitView(this_03,(int)uVar10,avStack_68);
    PennyGiftBoxGrowData::~PennyGiftBoxGrowData((PennyGiftBoxGrowData *)asStack_70);
    uVar10 = uVar10 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
  }
  lVar7 = Sexy::LazySingleton<PennyGiftBoxManager>::GetInstancePtr();
  iVar1 = FUN_04e76ec8(*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28));
  pcVar9 = *(code **)(*(long *)this_01 + 0x60);
  *(int *)(this_02 + 0x50) = iVar1 * (iVar3 + iVar4) - iVar3;
  (*pcVar9)(this_01,this_02);
  (**(code **)(*(long *)pUVar5 + 0x60))(pUVar5,this_01);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

