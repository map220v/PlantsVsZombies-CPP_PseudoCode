// Class: UITreasurePavilionBundle


/* UITreasurePavilionBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void UITreasurePavilionBundle::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITreasurePavilionBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UITreasurePavilionBundle::ScrollTargetReached(UITreasurePavilionBundle *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UITreasurePavilionBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UITreasurePavilionBundle::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UITreasurePavilionBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UITreasurePavilionBundle::ScrollTargetInterrupted
          (UITreasurePavilionBundle *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilionBundle::GetLayoutName() */

void __thiscall UITreasurePavilionBundle::GetLayoutName(UITreasurePavilionBundle *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UITreasurePavilionBundle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UITreasurePavilionBundle::~UITreasurePavilionBundle() */

void __thiscall UITreasurePavilionBundle::~UITreasurePavilionBundle(UITreasurePavilionBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_06645960;
  *(undefined **)(this + 0xd8) = &DAT_06645cc0;
  *(undefined ***)(this + 0x138) = &PTR__UITreasurePavilionBundle_06645d08;
  UISingletonDialog<UITreasurePavilionBundle>::~UISingletonDialog
            ((UISingletonDialog<UITreasurePavilionBundle> *)this);
  return;
}


/* non-virtual thunk to UITreasurePavilionBundle::~UITreasurePavilionBundle() */

void __thiscall UITreasurePavilionBundle::~UITreasurePavilionBundle(UITreasurePavilionBundle *this)

{
  ~UITreasurePavilionBundle(this + -0x138);
  return;
}


/* UITreasurePavilionBundle::~UITreasurePavilionBundle() */

void __thiscall UITreasurePavilionBundle::~UITreasurePavilionBundle(UITreasurePavilionBundle *this)

{
  ~UITreasurePavilionBundle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UITreasurePavilionBundle::~UITreasurePavilionBundle() */

void __thiscall UITreasurePavilionBundle::~UITreasurePavilionBundle(UITreasurePavilionBundle *this)

{
  ~UITreasurePavilionBundle(this + -0x138);
  return;
}


/* UITreasurePavilionBundle::ButtonDepress(int) */

void __thiscall UITreasurePavilionBundle::ButtonDepress(UITreasurePavilionBundle *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UITreasurePavilionBundle>::CloseDialog();
  return;
}


/* non-virtual thunk to UITreasurePavilionBundle::ButtonDepress(int) */

void __thiscall UITreasurePavilionBundle::ButtonDepress(UITreasurePavilionBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UITreasurePavilionBundle::UITreasurePavilionBundle() */

void __thiscall UITreasurePavilionBundle::UITreasurePavilionBundle(UITreasurePavilionBundle *this)

{
  UISingletonDialog<UITreasurePavilionBundle>::UISingletonDialog
            ((UISingletonDialog<UITreasurePavilionBundle> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06645960;
  *(undefined **)(this + 0xd8) = &DAT_06645cc0;
  *(undefined ***)(this + 0x138) = &PTR__UITreasurePavilionBundle_06645d08;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITreasurePavilionBundle::InitView(TreasurePavilionData&) */

void __thiscall
UITreasurePavilionBundle::InitView(UITreasurePavilionBundle *this,TreasurePavilionData *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UIWidgetImage *pUVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  TreasurePavilionBundle *this_02;
  vector *pvVar7;
  int *piVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Content");
  pUVar6 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)pUVar6 + 0x80))(pUVar6,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  iVar2 = FUN_034a1d14(10);
  iVar3 = FUN_034a1d14(0x14);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar6 + 0x50) - iVar3,
             *(int *)(pUVar6 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_034a1d14(10);
  iVar4 = FUN_034a1d14(0xb4);
  uVar1 = *(undefined4 *)(this_01 + 0x54);
  iVar5 = FUN_034a1d14(0);
  uVar11 = 0;
  iVar2 = iVar5;
  while( true ) {
    uVar9 = FUN_034a17e4(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
    if (uVar9 <= uVar11) break;
    this_02 = ::operator_new(0xf8);
    TreasurePavilionBundle::TreasurePavilionBundle(this_02);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar2,iVar5,iVar4,uVar1);
    pvVar7 = (vector *)FUN_034a17f8(*(undefined8 *)(param_1 + 0x78),uVar11);
    piVar8 = (int *)FUN_034a17bc(*(undefined8 *)(param_1 + 0x90),uVar11);
    TreasurePavilionBundle::InitView(this_02,(int)uVar11,pvVar7,*piVar8);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar11 = uVar11 + 1;
    iVar2 = iVar2 + iVar3 + iVar4;
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

