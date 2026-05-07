// Class: CarnivalBundlePreview


/* CarnivalBundlePreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void CarnivalBundlePreview::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CarnivalBundlePreview::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CarnivalBundlePreview::ScrollTargetReached(CarnivalBundlePreview *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* CarnivalBundlePreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CarnivalBundlePreview::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CarnivalBundlePreview::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CarnivalBundlePreview::ScrollTargetInterrupted(CarnivalBundlePreview *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* CarnivalBundlePreview::~CarnivalBundlePreview() */

void __thiscall CarnivalBundlePreview::~CarnivalBundlePreview(CarnivalBundlePreview *this)

{
  *(undefined ***)this = &PTR_GetClass_066e6cf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e7028;
  *(undefined ***)(this + 0xe0) = &PTR__CarnivalBundlePreview_066e7070;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CarnivalBundlePreview::~CarnivalBundlePreview() */

void __thiscall CarnivalBundlePreview::~CarnivalBundlePreview(CarnivalBundlePreview *this)

{
  ~CarnivalBundlePreview(this + -0xe0);
  return;
}


/* CarnivalBundlePreview::~CarnivalBundlePreview() */

void __thiscall CarnivalBundlePreview::~CarnivalBundlePreview(CarnivalBundlePreview *this)

{
  ~CarnivalBundlePreview(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarnivalBundlePreview::~CarnivalBundlePreview() */

void __thiscall CarnivalBundlePreview::~CarnivalBundlePreview(CarnivalBundlePreview *this)

{
  ~CarnivalBundlePreview(this + -0xe0);
  return;
}


/* CarnivalBundlePreview::CarnivalBundlePreview() */

void __thiscall CarnivalBundlePreview::CarnivalBundlePreview(CarnivalBundlePreview *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066e6cf0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066e7028;
  *(undefined ***)(this + 0xe0) = &PTR__CarnivalBundlePreview_066e7070;
  return;
}


/* CarnivalBundlePreview::ButtonDepress(int) */

void __thiscall CarnivalBundlePreview::ButtonDepress(CarnivalBundlePreview *this,int param_1)

{
  UICarnival *this_00;
  
  if (param_1 != 0x58) {
    return;
  }
  this_00 = (UICarnival *)UISingletonDialog<UICarnival>::GetSingletonPtr();
  UICarnival::CloseBundlePreview(this_00);
  return;
}


/* non-virtual thunk to CarnivalBundlePreview::ButtonDepress(int) */

void __thiscall CarnivalBundlePreview::ButtonDepress(CarnivalBundlePreview *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundlePreview::Draw(Sexy::Graphics*) */

void __thiscall CarnivalBundlePreview::Draw(CarnivalBundlePreview *this,Graphics *param_1)

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
  iVar3 = FUN_039ac220(0xf2);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039ac220(200);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(0x1e5);
  iVar6 = FUN_039ac220(400);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf6c8);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  TodStringTranslate(L"[FLASH_SALE_NOTICE]");
  iVar3 = FUN_039ac220(0xf2);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039ac220(200);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(0x1e5);
  iVar6 = FUN_039ac220(0x46);
  Sexy::Insets::Insets(aIStack_28,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar7,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar3 = FUN_039ac220(0xde);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039ac220(0x82);
  iVar2 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(0x1bd);
  iVar6 = FUN_039ac220(0x136);
  Sexy::Insets::Insets(aIStack_18,iVar1 / 2 - iVar3,iVar2 / 2 - iVar4,iVar5,iVar6);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06abf898);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalBundlePreview::InitView(std::vector<CarnivalBundleData,
   std::allocator<CarnivalBundleData> >&) */

void __thiscall CarnivalBundlePreview::InitView(CarnivalBundlePreview *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  CarnivalBundle *this_02;
  CarnivalBundleData *pCVar12;
  ulong uVar13;
  PVZ2UIButton *this_03;
  code *pcVar14;
  ulong uVar15;
  int iVar16;
  undefined1 auStack_90 [8];
  Insets aIStack_88 [16];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  this[0x59] = (CarnivalBundlePreview)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar1 = FUN_039ac220(0xf2);
  iVar16 = *(int *)(this + 0x50);
  iVar2 = FUN_039ac220(0x19);
  iVar3 = FUN_039ac220(0x14);
  iVar4 = FUN_039ac220(200);
  iVar9 = *(int *)(this + 0x54);
  iVar5 = FUN_039ac220(0x46);
  iVar6 = FUN_039ac220(0xf);
  iVar7 = FUN_039ac220(0x18b);
  iVar8 = FUN_039ac220(0x118);
  Sexy::Insets::Insets
            (aIStack_88,(iVar16 / 2 - iVar1) + iVar2 + iVar3,(iVar9 / 2 - iVar4) + iVar5 + iVar6,
             iVar7,iVar8);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_88);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_88);
  iVar9 = FUN_039ac220(0x23);
  uVar10 = FUN_039ac220(0x118);
  iVar1 = FUN_039ac220(0xb4);
  uVar15 = 0;
  iVar16 = 0;
  while( true ) {
    uVar13 = FUN_039ab08c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8));
    if (uVar13 <= uVar15) break;
    this_02 = ::operator_new(0x178);
    CarnivalBundle::CarnivalBundle(this_02);
    uVar11 = FUN_039ac220(0);
    (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar16,uVar11,iVar1,uVar10);
    pCVar12 = (CarnivalBundleData *)FUN_039ab0c8(*(undefined8 *)param_1,uVar15);
    CarnivalBundle::InitView(this_02,3,pCVar12);
    (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
    uVar15 = uVar15 + 1;
    iVar16 = iVar16 + iVar9 + iVar1;
  }
  pcVar14 = *(code **)(*(long *)this + 0x60);
  *(int *)(this_01 + 0x50) = (int)uVar13 * (iVar9 + iVar1) - iVar9;
  (*pcVar14)(this,this_00);
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
  iVar1 = FUN_039ac220(0xf2);
  iVar16 = *(int *)(this + 0x50);
  iVar2 = FUN_039ac220(0x1c0);
  iVar3 = FUN_039ac220(200);
  iVar9 = *(int *)(this + 0x54);
  iVar4 = FUN_039ac220(5);
  uVar10 = FUN_039ac220(0x30);
  (**(code **)(*(long *)this_03 + 0x198))
            (this_03,(iVar16 / 2 - iVar1) + iVar2,(iVar9 / 2 - iVar3) - iVar4,uVar10,uVar10);
  (**(code **)(*(long *)this + 0x60))(this,this_03);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

