// Class: PennyGiftSelectLine


/* PennyGiftSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void PennyGiftSelectLine::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftSelectLine::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftSelectLine::ScrollTargetReached(PennyGiftSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* PennyGiftSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void PennyGiftSelectLine::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to PennyGiftSelectLine::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
PennyGiftSelectLine::ScrollTargetInterrupted(PennyGiftSelectLine *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* PennyGiftSelectLine::~PennyGiftSelectLine() */

void __thiscall PennyGiftSelectLine::~PennyGiftSelectLine(PennyGiftSelectLine *this)

{
  *(undefined ***)this = &PTR_GetClass_069e8230;
  *(undefined ***)(this + 0xd8) = &PTR__PennyGiftSelectLine_069e8560;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069e85a8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to PennyGiftSelectLine::~PennyGiftSelectLine() */

void __thiscall PennyGiftSelectLine::~PennyGiftSelectLine(PennyGiftSelectLine *this)

{
  ~PennyGiftSelectLine(this + -0xd8);
  return;
}


/* PennyGiftSelectLine::~PennyGiftSelectLine() */

void __thiscall PennyGiftSelectLine::~PennyGiftSelectLine(PennyGiftSelectLine *this)

{
  ~PennyGiftSelectLine(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftSelectLine::~PennyGiftSelectLine() */

void __thiscall PennyGiftSelectLine::~PennyGiftSelectLine(PennyGiftSelectLine *this)

{
  ~PennyGiftSelectLine(this + -0xd8);
  return;
}


/* PennyGiftSelectLine::SetSelect() */

void __thiscall PennyGiftSelectLine::SetSelect(PennyGiftSelectLine *this)

{
  PennyGiftSelectButton::SetSelect(*(PennyGiftSelectButton **)(this + 0xf0));
  return;
}


/* PennyGiftSelectLine::PennyGiftSelectLine() */

void __thiscall PennyGiftSelectLine::PennyGiftSelectLine(PennyGiftSelectLine *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined ***)this = &PTR_GetClass_069e8230;
  *(undefined ***)(this + 0xd8) = &PTR__PennyGiftSelectLine_069e8560;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_069e85a8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftSelectLine::InitView(int, PennyGiftBoxConfigData const&) */

void __thiscall
PennyGiftSelectLine::InitView(PennyGiftSelectLine *this,int param_1,PennyGiftBoxConfigData *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  PennyGiftSelectButton *this_00;
  PVZ2UIScrollingWidget *this_01;
  Widget *this_02;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  Insets aIStack_18 [16];
  long local_8;
  
  *(int *)(this + 0xe8) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x100);
  PennyGiftSelectButton::PennyGiftSelectButton(this_00);
  *(PennyGiftSelectButton **)(this + 0xf0) = this_00;
  uVar1 = FUN_04e790b0(0x1e);
  uVar2 = FUN_04e790b0(5);
  uVar3 = FUN_04e790b0(0x46);
  (**(code **)(*(long *)this_00 + 0x198))(this_00,uVar1,uVar2,uVar3,uVar3);
  PennyGiftSelectButton::InitView
            (*(PennyGiftSelectButton **)(this + 0xf0),this,*(int *)(this + 0xe8));
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf0));
  iVar4 = FUN_04e790b0(200);
  iVar5 = FUN_04e790b0(300);
  Sexy::Insets::Insets(aIStack_18,iVar4,0,iVar5,*(int *)(this + 0x54));
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xd8));
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_18);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  this_02 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_02);
  (**(code **)(*(long *)this_02 + 0x198))
            (this_02,0,0,*(undefined4 *)(this_01 + 0x50),*(undefined4 *)(this_01 + 0x54));
  uVar10 = 0;
  while( true ) {
    uVar11 = *(undefined8 *)param_2;
    uVar9 = FUN_04e76e2c(uVar11,*(undefined8 *)(param_2 + 8));
    if (uVar9 <= uVar10) break;
    puVar6 = (undefined8 *)FUN_04e76e40(uVar11,uVar10);
    piVar7 = (int *)FUN_04e76e4c(*puVar6,0);
    plVar8 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar7,piVar7[1],true);
    iVar4 = FUN_04e790b0(0x5a);
    uVar1 = FUN_04e790b0(5);
    uVar2 = FUN_04e790b0(0x46);
    (**(code **)(*plVar8 + 0x198))(plVar8,iVar4 * (int)uVar10,uVar1,uVar2,uVar2);
    (**(code **)(*(long *)this_02 + 0x60))(this_02,plVar8);
    *(int *)(this_02 + 0x50) = (int)plVar8[9] + (int)plVar8[10];
    uVar10 = uVar10 + 1;
  }
  (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
  (**(code **)(*(long *)this + 0x60))(this,this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftSelectLine::Draw(Sexy::Graphics*) */

void __thiscall PennyGiftSelectLine::Draw(PennyGiftSelectLine *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Image *pIVar4;
  undefined8 uVar5;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba06f0);
  iVar1 = FUN_04e790b0(0x78);
  iVar2 = FUN_04e790b0(0x14);
  iVar3 = FUN_04e790b0(0x28);
  Sexy::Graphics::DrawImage(param_1,pIVar4,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_04e790b0(0xb4);
  iVar2 = FUN_04e790b0(0x14a);
  Sexy::Insets::Insets(aIStack_18,iVar1,0,iVar2,*(int *)(this + 0x54));
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ba07f0);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

