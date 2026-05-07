// Class: CallofWishTrainPage


/* CallofWishTrainPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void CallofWishTrainPage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishTrainPage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CallofWishTrainPage::ScrollTargetReached(CallofWishTrainPage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* CallofWishTrainPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CallofWishTrainPage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishTrainPage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CallofWishTrainPage::ScrollTargetInterrupted(CallofWishTrainPage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainPage::Update() */

void __thiscall CallofWishTrainPage::Update(CallofWishTrainPage *this)

{
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  TimeUtil::GetTimeCountdown(3,0x2a4f);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  FUN_054766c8(this + 0xf0,aTStack_10);
  FUN_05476c50(aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTrainPage::~CallofWishTrainPage() */

void __thiscall CallofWishTrainPage::~CallofWishTrainPage(CallofWishTrainPage *this)

{
  *(undefined ***)this = &PTR_GetClass_066f2d70;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishTrainPage_066f30a8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066f30f0;
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CallofWishTrainPage::~CallofWishTrainPage() */

void __thiscall CallofWishTrainPage::~CallofWishTrainPage(CallofWishTrainPage *this)

{
  ~CallofWishTrainPage(this + -0xd8);
  return;
}


/* CallofWishTrainPage::~CallofWishTrainPage() */

void __thiscall CallofWishTrainPage::~CallofWishTrainPage(CallofWishTrainPage *this)

{
  ~CallofWishTrainPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CallofWishTrainPage::~CallofWishTrainPage() */

void __thiscall CallofWishTrainPage::~CallofWishTrainPage(CallofWishTrainPage *this)

{
  ~CallofWishTrainPage(this + -0xd8);
  return;
}


/* CallofWishTrainPage::CallofWishTrainPage() */

void __thiscall CallofWishTrainPage::CallofWishTrainPage(CallofWishTrainPage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_066f2d70;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishTrainPage_066f30a8;
  *(undefined ***)(this + 0xe0) = &PTR_ButtonPress_066f30f0;
  FUN_05476574(this + 0xf0);
  *(undefined8 *)(this + 0xf8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainPage::InitView(CallofWishTab, int, int) */

void __thiscall
CallofWishTrainPage::InitView
          (CallofWishTrainPage *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  CallofWishTrainItem *pCVar7;
  CallofWishReward *pCVar8;
  long lVar9;
  ulong uVar10;
  PVZ2UIButton *pPVar11;
  undefined8 uVar12;
  code *pcVar13;
  long *plVar14;
  ulong uVar15;
  Insets aIStack_88 [16];
  Insets aIStack_78 [56];
  CallofWishReward aCStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar13 = *(code **)(*(long *)this + 0x198);
  *(undefined4 *)(this + 0xe8) = param_2;
  (*pcVar13)(this,0,0,param_3,param_4);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  *(undefined8 *)(this + 0xf8) = 0;
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  iVar1 = FUN_039d34f4(5);
  iVar2 = FUN_039d34f4(0x6e);
  iVar3 = FUN_039d34f4(10);
  iVar6 = *(int *)(this + 0x50);
  iVar4 = FUN_039d34f4(0xfa);
  Sexy::Insets::Insets(aIStack_88,iVar1,iVar2,iVar6 - iVar3,iVar4);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_88);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  uVar5 = FUN_039d34f4(10);
  iVar6 = *(int *)(this_01 + 0x50);
  iVar1 = (int)((float)*(int *)(this_01 + 0x54) * 0.4);
  if (*(int *)(this + 0xe8) == 5) {
    uVar15 = 0;
    while( true ) {
      lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      uVar10 = FUN_039d2798(*(undefined8 *)(lVar9 + 0xa8),*(undefined8 *)(lVar9 + 0xb0));
      if (uVar10 <= uVar15) break;
      pCVar7 = ::operator_new(0x100);
      CallofWishTrainItem::CallofWishTrainItem(pCVar7);
      iVar2 = FUN_039d34f4(uVar5);
      Sexy::Insets::Insets(aIStack_78,0,(iVar2 + iVar1) * (int)uVar15,iVar6,iVar1);
      (**(code **)(*(long *)pCVar7 + 0x1a0))(pCVar7,aIStack_78);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pCVar7);
      lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      pCVar8 = (CallofWishReward *)FUN_039d27c0(*(undefined8 *)(lVar9 + 0xa8),uVar15);
      CallofWishReward::CallofWishReward(aCStack_40,pCVar8);
      CallofWishTrainItem::InitView(pCVar7,param_2,uVar15 & 0xffffffff,aCStack_40);
      PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)aCStack_40);
      uVar15 = uVar15 + 1;
    }
    iVar6 = FUN_039d34f4(uVar5);
    lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    iVar2 = FUN_039d2798(*(undefined8 *)(lVar9 + 0xa8),*(undefined8 *)(lVar9 + 0xb0));
    *(int *)(this_01 + 0x54) = (iVar6 + iVar1) * iVar2;
  }
  else if (*(int *)(this + 0xe8) == 6) {
    uVar15 = 0;
    while( true ) {
      lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      uVar10 = FUN_039d2798(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0));
      if (uVar10 <= uVar15) break;
      pCVar7 = ::operator_new(0x100);
      CallofWishTrainItem::CallofWishTrainItem(pCVar7);
      iVar2 = FUN_039d34f4(uVar5);
      Sexy::Insets::Insets(aIStack_78,0,(iVar2 + iVar1) * (int)uVar15,iVar6,iVar1);
      (**(code **)(*(long *)pCVar7 + 0x1a0))(pCVar7,aIStack_78);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,pCVar7);
      lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      pCVar8 = (CallofWishReward *)FUN_039d27c0(*(undefined8 *)(lVar9 + 200),uVar15);
      CallofWishReward::CallofWishReward(aCStack_40,pCVar8);
      CallofWishTrainItem::InitView(pCVar7,param_2,uVar15 & 0xffffffff,aCStack_40);
      PlantWarsStarRewardData::~PlantWarsStarRewardData((PlantWarsStarRewardData *)aCStack_40);
      uVar15 = uVar15 + 1;
    }
    iVar6 = FUN_039d34f4(uVar5);
    lVar9 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
    iVar2 = FUN_039d2798(*(undefined8 *)(lVar9 + 200),*(undefined8 *)(lVar9 + 0xd0));
    *(int *)(this_01 + 0x54) = (iVar6 + iVar1) * iVar2;
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (*(long *)(this + 0xf8) == 0) {
    TodStringTranslate(L"[CALL_OF_WISH_JUMP]");
    Sexy::Color::Color((Color *)aCStack_40,1);
    pPVar11 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar11,0x1fa,(ButtonListener *)(this + 0xe0),(wstring *)aIStack_78,
               (Color *)aCStack_40);
    *(PVZ2UIButton **)(this + 0xf8) = pPVar11;
    FUN_05476c50((wstring *)aIStack_78);
    pPVar11 = *(PVZ2UIButton **)(this + 0xf8);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_78,&DAT_06ac1450,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aCStack_40,&DAT_06ac14f8,3);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)aIStack_78,(PVZ2UIImage *)aCStack_40);
    plVar14 = *(long **)(this + 0xf8);
    pcVar13 = *(code **)(*plVar14 + 0x1a0);
    iVar6 = FUN_039d34f4(400);
    iVar1 = FUN_039d34f4(0x181);
    iVar2 = FUN_039d34f4(0x8c);
    iVar3 = FUN_039d34f4(0x2d);
    Sexy::Insets::Insets((Insets *)aCStack_40,iVar6,iVar1,iVar2,iVar3);
    (*pcVar13)(plVar14,(Insets *)aCStack_40);
    plVar14 = *(long **)(this + 0xf8);
    pcVar13 = *(code **)(*plVar14 + 800);
    uVar12 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZShaoEr_26_ThickOutline);
    (*pcVar13)(plVar14,uVar12);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishTrainPage::ButtonDepress(int) */

void __thiscall CallofWishTrainPage::ButtonDepress(CallofWishTrainPage *this,int param_1)

{
  UICallofWish *this_00;
  
  if (param_1 != 0x1fa) {
    return;
  }
  this_00 = (UICallofWish *)UISingletonDialog<UICallofWish>::GetSingletonPtr();
  UICallofWish::SetCurrentTab(this_00,1);
  return;
}


/* non-virtual thunk to CallofWishTrainPage::ButtonDepress(int) */

void __thiscall CallofWishTrainPage::ButtonDepress(CallofWishTrainPage *this,int param_1)

{
  ButtonDepress(this + -0xe0,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishTrainPage::Draw(Sexy::Graphics*) */

void __thiscall CallofWishTrainPage::Draw(CallofWishTrainPage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe8) == 5) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1528;
  }
  else {
    if (*(int *)(this + 0xe8) != 6) goto LAB_039dc214;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac14c8;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_039d34f4(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),iVar1);
LAB_039dc214:
  iVar1 = FUN_039d34f4(0x5f);
  iVar2 = FUN_039d34f4(0x118);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1378);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[ACTIVITY_TIME_DOWN]");
  iVar1 = FUN_039d34f4(5);
  iVar2 = FUN_039d34f4(0x189);
  iVar3 = FUN_039d34f4(0x6e);
  iVar4 = FUN_039d34f4(0x23);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color(aCStack_28,0x66,0x37,0);
  WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,aCStack_28,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_039d34f4(0x7d);
  iVar2 = FUN_039d34f4(0x189);
  iVar3 = FUN_039d34f4(0x8c);
  iVar4 = FUN_039d34f4(0x1e);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac11f0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1580);
  iVar1 = FUN_039d34f4(0x73);
  iVar2 = FUN_039d34f4(0x187);
  iVar3 = FUN_039d34f4(0x2a);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_039d34f4(0x96);
  iVar2 = FUN_039d34f4(0x18b);
  iVar3 = FUN_039d34f4(0x6e);
  iVar4 = FUN_039d34f4(0x1e);
  Sexy::Insets::Insets((Insets *)aCStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xf0,aCStack_28,uVar5,aIStack_18,5,1);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

