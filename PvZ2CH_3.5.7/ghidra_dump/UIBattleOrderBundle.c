// Class: UIBattleOrderBundle


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderBundle::GetLayoutName() */

void __thiscall UIBattleOrderBundle::GetLayoutName(UIBattleOrderBundle *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBattleOrderBundle");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBattleOrderBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIBattleOrderBundle::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBattleOrderBundle::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UIBattleOrderBundle::ScrollTargetReached(UIBattleOrderBundle *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIBattleOrderBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIBattleOrderBundle::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBattleOrderBundle::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UIBattleOrderBundle::ScrollTargetInterrupted(UIBattleOrderBundle *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* UIBattleOrderBundle::~UIBattleOrderBundle() */

void __thiscall UIBattleOrderBundle::~UIBattleOrderBundle(UIBattleOrderBundle *this)

{
  *(undefined ***)this = &PTR_GetClass_06702150;
  *(undefined **)(this + 0xd8) = &DAT_067024b0;
  *(undefined ***)(this + 0x138) = &PTR__UIBattleOrderBundle_067024f8;
  UISingletonDialog<UIBattleOrderBundle>::~UISingletonDialog
            ((UISingletonDialog<UIBattleOrderBundle> *)this);
  return;
}


/* non-virtual thunk to UIBattleOrderBundle::~UIBattleOrderBundle() */

void __thiscall UIBattleOrderBundle::~UIBattleOrderBundle(UIBattleOrderBundle *this)

{
  ~UIBattleOrderBundle(this + -0x138);
  return;
}


/* UIBattleOrderBundle::~UIBattleOrderBundle() */

void __thiscall UIBattleOrderBundle::~UIBattleOrderBundle(UIBattleOrderBundle *this)

{
  ~UIBattleOrderBundle(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIBattleOrderBundle::~UIBattleOrderBundle() */

void __thiscall UIBattleOrderBundle::~UIBattleOrderBundle(UIBattleOrderBundle *this)

{
  ~UIBattleOrderBundle(this + -0x138);
  return;
}


/* UIBattleOrderBundle::ButtonDepress(int) */

void __thiscall UIBattleOrderBundle::ButtonDepress(UIBattleOrderBundle *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UIBattleOrderBundle>::CloseDialog();
  return;
}


/* non-virtual thunk to UIBattleOrderBundle::ButtonDepress(int) */

void __thiscall UIBattleOrderBundle::ButtonDepress(UIBattleOrderBundle *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIBattleOrderBundle::UIBattleOrderBundle() */

void __thiscall UIBattleOrderBundle::UIBattleOrderBundle(UIBattleOrderBundle *this)

{
  UISingletonDialog<UIBattleOrderBundle>::UISingletonDialog
            ((UISingletonDialog<UIBattleOrderBundle> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_06702150;
  *(undefined **)(this + 0xd8) = &DAT_067024b0;
  *(undefined ***)(this + 0x138) = &PTR__UIBattleOrderBundle_067024f8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBattleOrderBundle::InitView(std::vector<std::vector<BattleOrderBundle,
   std::allocator<BattleOrderBundle> >, std::allocator<std::vector<BattleOrderBundle,
   std::allocator<BattleOrderBundle> > > > const&, std::vector<int, std::allocator<int> > const&) */

void __thiscall
UIBattleOrderBundle::InitView(UIBattleOrderBundle *this,vector *param_1,vector *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UIWidgetImage *pUVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  BattleOrderBundleWidget *this_02;
  int *piVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIImage_Background");
  pUVar5 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0x138));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar2 = FUN_03a2d914(5);
  iVar3 = FUN_03a2d914(10);
  Sexy::Insets::Insets
            ((Insets *)asStack_18,iVar2,iVar2,*(int *)(pUVar5 + 0x50) - iVar3,
             *(int *)(pUVar5 + 0x54) - iVar3);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,asStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,asStack_18);
  iVar2 = FUN_03a2d914(0);
  uVar1 = *(undefined4 *)(this_00 + 0x54);
  iVar3 = (int)((float)*(int *)(this_00 + 0x50) * 0.35714287);
  uVar9 = 0;
  while( true ) {
    uVar7 = FUN_03a2bdf8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar7 <= uVar9) break;
    this_02 = ::operator_new(0x120);
    BattleOrderBundleWidget::BattleOrderBundleWidget(this_02);
    iVar4 = FUN_03a2d914(5);
    (**(code **)(*(long *)this_02 + 0x198))
              (this_02,iVar2 + (iVar4 + iVar3) * (int)uVar9,iVar2,iVar3,uVar1);
    (**(code **)(*(long *)this_02 + 0x318))(this_02,uVar9 & 0xffffffff);
    piVar6 = (int *)FUN_03a2bcf8(*(undefined8 *)param_2,uVar9);
    TemplateBundleWidget::SetLimit((TemplateBundleWidget *)this_02,*piVar6);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar9 = uVar9 + 1;
  }
  iVar4 = FUN_03a2d914(5);
  pcVar8 = *(code **)(*(long *)pUVar5 + 0x60);
  *(int *)(this_01 + 0x50) = iVar2 + (iVar4 + iVar3) * (int)uVar7;
  (*pcVar8)(pUVar5,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  this_01[0x59] = (Widget)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

