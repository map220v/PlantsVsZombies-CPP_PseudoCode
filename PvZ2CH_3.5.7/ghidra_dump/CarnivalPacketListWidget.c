// Class: CarnivalPacketListWidget


/* CarnivalPacketListWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void CarnivalPacketListWidget::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CarnivalPacketListWidget::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CarnivalPacketListWidget::ScrollTargetReached(CarnivalPacketListWidget *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* CarnivalPacketListWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CarnivalPacketListWidget::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CarnivalPacketListWidget::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CarnivalPacketListWidget::ScrollTargetInterrupted
          (CarnivalPacketListWidget *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* CarnivalPacketListWidget::~CarnivalPacketListWidget() */

void __thiscall CarnivalPacketListWidget::~CarnivalPacketListWidget(CarnivalPacketListWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_066e7430;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e7768;
  *(undefined ***)(this + 0xe0) = &PTR__CarnivalPacketListWidget_066e77b0;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CarnivalPacketListWidget::~CarnivalPacketListWidget() */

void __thiscall CarnivalPacketListWidget::~CarnivalPacketListWidget(CarnivalPacketListWidget *this)

{
  ~CarnivalPacketListWidget(this + -0xe0);
  return;
}


/* CarnivalPacketListWidget::~CarnivalPacketListWidget() */

void __thiscall CarnivalPacketListWidget::~CarnivalPacketListWidget(CarnivalPacketListWidget *this)

{
  ~CarnivalPacketListWidget(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarnivalPacketListWidget::~CarnivalPacketListWidget() */

void __thiscall CarnivalPacketListWidget::~CarnivalPacketListWidget(CarnivalPacketListWidget *this)

{
  ~CarnivalPacketListWidget(this + -0xe0);
  return;
}


/* CarnivalPacketListWidget::CarnivalPacketListWidget() */

void __thiscall CarnivalPacketListWidget::CarnivalPacketListWidget(CarnivalPacketListWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066e7430;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e7768;
  *(undefined ***)(this + 0xe0) = &PTR__CarnivalPacketListWidget_066e77b0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalPacketListWidget::InitView(std::vector<std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> >, std::allocator<std::vector<S2C_BonusInfo,
   std::allocator<S2C_BonusInfo> > > > const&) */

void __thiscall CarnivalPacketListWidget::InitView(CarnivalPacketListWidget *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  CarnivalPacket *this_02;
  vector *pvVar10;
  ulong uVar11;
  PVZ2UIButton *this_03;
  code *pcVar12;
  ulong uVar13;
  int iVar14;
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0x59] = (CarnivalPacketListWidget)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar1 = FUN_039ac220(300);
  iVar14 = *(int *)(this + 0x50);
  iVar2 = FUN_039ac220(0x19);
  iVar3 = FUN_039ac220(200);
  iVar7 = *(int *)(this + 0x54);
  iVar4 = FUN_039ac220(0x46);
  iVar5 = FUN_039ac220(0x226);
  iVar6 = FUN_039ac220(0x136);
  Sexy::Insets::Insets
            (aIStack_88,(iVar14 / 2 - iVar1) + iVar2,(iVar7 / 2 - iVar3) + iVar4,iVar5,iVar6);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_88);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_88);
  iVar7 = FUN_039ac220(10);
  uVar8 = FUN_039ac220(0x136);
  iVar1 = FUN_039ac220(0xcd);
  uVar13 = 0;
  iVar14 = 0;
  while( true ) {
    uVar11 = FUN_039ab0d8(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar11 <= uVar13) break;
    this_02 = ::operator_new(0x100);
    CarnivalPacket::CarnivalPacket(this_02);
    uVar9 = FUN_039ac220(0);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar14,uVar9,iVar1,uVar8);
    pvVar10 = (vector *)FUN_039ab0ec(*(undefined8 *)param_1,uVar13);
    CarnivalPacket::InitView(this_02,(int)uVar13,pvVar10);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar13 = uVar13 + 1;
    iVar14 = iVar14 + iVar7 + iVar1;
  }
  pcVar12 = *(code **)(*(long *)this + 0x60);
  *(int *)(this_01 + 0x50) = (int)uVar11 * (iVar7 + iVar1) - iVar7;
  (*pcVar12)(this,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_90);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_03 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_03,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06abf8e8,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06abf840,2);
  PVZ2UIButton::SetDialogStates(this_03,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar1 = FUN_039ac220(300);
  iVar14 = *(int *)(this + 0x50);
  iVar2 = FUN_039ac220(0x23);
  iVar3 = FUN_039ac220(200);
  iVar7 = *(int *)(this + 0x54);
  iVar4 = FUN_039ac220(0xb);
  uVar8 = FUN_039ac220(0x32);
  uVar9 = FUN_039ac220(0x34);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,(iVar1 + iVar14 / 2) - iVar2,(iVar7 / 2 - iVar3) - iVar4,uVar8,uVar9);
  (**(code **)(*(long *)this + 0x60))(this,this_03);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalPacketListWidget::ButtonDepress(int) */

void __thiscall CarnivalPacketListWidget::ButtonDepress(CarnivalPacketListWidget *this,int param_1)

{
  PVZ1ModeSelectLevel *this_00;
  
  if (param_1 != 0x58) {
    return;
  }
  this_00 = (PVZ1ModeSelectLevel *)UISingletonDialog<UICarnival>::GetSingletonPtr();
  PVZ1ModeSelectLevel::closeDescriptionWidget(this_00);
  return;
}


/* non-virtual thunk to CarnivalPacketListWidget::ButtonDepress(int) */

void __thiscall CarnivalPacketListWidget::ButtonDepress(CarnivalPacketListWidget *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalPacketListWidget::Draw(Sexy::Graphics*) */

void __thiscall CarnivalPacketListWidget::Draw(CarnivalPacketListWidget *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_039ac220(300);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039ac220(200);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(600);
  iVar6 = FUN_039ac220(400);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf6c8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[TICKET_BUY]");
  iVar3 = FUN_039ac220(300);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039ac220(200);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(600);
  iVar6 = FUN_039ac220(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

