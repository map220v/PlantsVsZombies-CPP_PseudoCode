// Class: TreasurePavilionRewardPool


/* TreasurePavilionRewardPool::ScrollTargetReached(Sexy::ScrollWidget*) */

void TreasurePavilionRewardPool::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TreasurePavilionRewardPool::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
TreasurePavilionRewardPool::ScrollTargetReached
          (TreasurePavilionRewardPool *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* TreasurePavilionRewardPool::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void TreasurePavilionRewardPool::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to TreasurePavilionRewardPool::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
TreasurePavilionRewardPool::ScrollTargetInterrupted
          (TreasurePavilionRewardPool *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* TreasurePavilionRewardPool::~TreasurePavilionRewardPool() */

void __thiscall
TreasurePavilionRewardPool::~TreasurePavilionRewardPool(TreasurePavilionRewardPool *this)

{
  *(undefined ***)this = &PTR_GetClass_066460c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066463f8;
  *(undefined ***)(this + 0xe0) = &PTR__TreasurePavilionRewardPool_06646440;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to TreasurePavilionRewardPool::~TreasurePavilionRewardPool() */

void __thiscall
TreasurePavilionRewardPool::~TreasurePavilionRewardPool(TreasurePavilionRewardPool *this)

{
  ~TreasurePavilionRewardPool(this + -0xe0);
  return;
}


/* TreasurePavilionRewardPool::~TreasurePavilionRewardPool() */

void __thiscall
TreasurePavilionRewardPool::~TreasurePavilionRewardPool(TreasurePavilionRewardPool *this)

{
  ~TreasurePavilionRewardPool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TreasurePavilionRewardPool::~TreasurePavilionRewardPool() */

void __thiscall
TreasurePavilionRewardPool::~TreasurePavilionRewardPool(TreasurePavilionRewardPool *this)

{
  ~TreasurePavilionRewardPool(this + -0xe0);
  return;
}


/* TreasurePavilionRewardPool::TreasurePavilionRewardPool() */

void __thiscall
TreasurePavilionRewardPool::TreasurePavilionRewardPool(TreasurePavilionRewardPool *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066460c0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066463f8;
  *(undefined ***)(this + 0xe0) = &PTR__TreasurePavilionRewardPool_06646440;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasurePavilionRewardPool::InitView(std::vector<std::wstring, std::allocator<std::wstring > >
   const&, std::vector<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> >,
   std::allocator<std::vector<S2C_BonusInfo, std::allocator<S2C_BonusInfo> > > > const&) */

void __thiscall
TreasurePavilionRewardPool::InitView
          (TreasurePavilionRewardPool *this,vector *param_1,vector *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  ulong uVar8;
  ulong uVar9;
  PVZ2UIButton *this_02;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  wstring *pwVar13;
  UIWidgetText *this_03;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_80 [8];
  wstring awStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x59] = (TreasurePavilionRewardPool)0x0;
  uVar17 = 0;
  iVar1 = FUN_034a1d14(600);
  iVar2 = FUN_034a1d14(500);
  iVar7 = *(int *)(gLawnApp + 0xd4);
  iVar6 = *(int *)(gLawnApp + 0xd8);
  iVar3 = FUN_034a1d14(0x14);
  (**(code **)(*(long *)this + 0x198))
            (this,iVar7 / 2 - iVar1 / 2,(iVar6 / 2 - iVar2 / 2) - iVar3,iVar1,iVar2);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xe0));
  uVar4 = FUN_034a1d14(0x19);
  uVar5 = FUN_034a1d14(0x46);
  iVar6 = FUN_034a1d14(0x32);
  iVar7 = *(int *)(this + 0x50);
  iVar1 = FUN_034a1d14(100);
  (**(code **)(*(long *)this_00 + 0x198))
            (this_00,uVar4,uVar5,iVar7 - iVar6,*(int *)(this + 0x54) - iVar1);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar7 = FUN_034a1d14(0);
  uVar15 = *(undefined8 *)param_1;
  uVar8 = FUN_034a1810(uVar15,*(undefined8 *)(param_1 + 8));
  do {
    if (uVar17 < uVar8) {
      pwVar13 = (wstring *)FUN_034a181c(uVar15,uVar17);
      this_03 = ::operator_new(0x108);
      UIWidgetText::UIWidgetText(this_03,pwVar13);
      uVar4 = FUN_034a1d14(0);
      uVar5 = FUN_034a1d14(0x28);
      (**(code **)(*(long *)this_03 + 0x198))
                (this_03,uVar4,iVar7,*(undefined4 *)(this_01 + 0x50),uVar5);
      pcVar16 = *(code **)(*(long *)this_03 + 0x170);
      Sexy::Color::Color((Color *)aPStack_40,0);
      (*pcVar16)(this_03,0,aPStack_40);
      UIWidgetText::SetFontIndex(this_03,0x9f);
      FUN_034a191c(this_03 + 0xe0);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_03);
    }
    iVar6 = FUN_034a1d14(0x32);
    uVar18 = *(undefined8 *)param_2;
    iVar7 = iVar7 + iVar6;
    uVar9 = FUN_034a17e4(uVar18,*(undefined8 *)(param_2 + 8));
    uVar8 = 0;
    iVar6 = iVar7;
    if (uVar17 < uVar9) {
      while( true ) {
        puVar12 = (undefined8 *)FUN_034a1824(uVar18,uVar17);
        uVar15 = *puVar12;
        uVar9 = FUN_034a17c4(uVar15,puVar12[1]);
        if (uVar9 <= uVar8) break;
        piVar10 = (int *)FUN_034a1804(uVar15,uVar8);
        plVar11 = (long *)UIRewardFrameSelect::CreateUIRewardFrame(*piVar10,piVar10[1],true);
        iVar6 = FUN_034a1d14(0xf);
        iVar1 = FUN_034a1d14(0x5a);
        uVar4 = FUN_034a1d14(0x46);
        (**(code **)(*plVar11 + 0x198))
                  (plVar11,iVar6 + ((int)uVar8 % 6) * iVar1,iVar7 + iVar1 * ((int)uVar8 / 6),uVar4,
                   uVar4);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,plVar11);
        uVar18 = *(undefined8 *)param_2;
        iVar6 = *(int *)((long)plVar11 + 0x4c) + *(int *)((long)plVar11 + 0x54);
        uVar8 = uVar8 + 1;
      }
    }
    uVar17 = uVar17 + 1;
    iVar7 = FUN_034a1d14(0x14);
    iVar7 = iVar6 + iVar7;
    uVar15 = *(undefined8 *)param_1;
    uVar8 = FUN_034a1810(uVar15,*(undefined8 *)(param_1 + 8));
  } while ((uVar17 < uVar8) ||
          (uVar9 = FUN_034a17e4(uVar18,*(undefined8 *)(param_2 + 8)), uVar17 < uVar9));
  lVar14 = *(long *)this_00;
  *(int *)(this_01 + 0x54) = iVar7;
  (**(code **)(lVar14 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  FUN_05478178(awStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  this_02 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_02,0x58,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aPStack_40);
  FUN_05476c50(awStack_78);
  nop();
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06aa3090,2);
  PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06aa3338,2);
  PVZ2UIButton::SetDialogStates(this_02,(PVZ2UIImage *)awStack_78,aPStack_40);
  iVar6 = FUN_034a1d14(0x23);
  iVar7 = *(int *)(this + 0x50);
  iVar1 = FUN_034a1d14(10);
  uVar4 = FUN_034a1d14(0x35);
  (**(code **)(*(long *)this_02 + 0x198))(this_02,iVar7 - iVar6,-iVar1,uVar4,uVar4);
  (**(code **)(*(long *)this + 0x60))(this,this_02);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TreasurePavilionRewardPool::ButtonDepress(int) */

void __thiscall
TreasurePavilionRewardPool::ButtonDepress(TreasurePavilionRewardPool *this,int param_1)

{
  UITreasurePavilion *this_00;
  
  if (param_1 != 0x58) {
    return;
  }
  this_00 = (UITreasurePavilion *)UISingletonDialog<UITreasurePavilion>::GetSingletonPtr();
  UITreasurePavilion::CloseTreasurePavilionRewardPool(this_00);
  return;
}


/* non-virtual thunk to TreasurePavilionRewardPool::ButtonDepress(int) */

void __thiscall
TreasurePavilionRewardPool::ButtonDepress(TreasurePavilionRewardPool *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasurePavilionRewardPool::Draw(Sexy::Graphics*) */

void __thiscall TreasurePavilionRewardPool::Draw(TreasurePavilionRewardPool *this,Graphics *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3368);
  Draw9SliceImage(param_1,aIStack_18,uVar2);
  TodStringTranslate(L"[REWARD_POOL]");
  iVar1 = FUN_034a1d14(0x46);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar2,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

