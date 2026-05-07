// Class: CallofWishBundlePage


/* CallofWishBundlePage::ScrollTargetReached(Sexy::ScrollWidget*) */

void CallofWishBundlePage::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishBundlePage::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
CallofWishBundlePage::ScrollTargetReached(CallofWishBundlePage *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* CallofWishBundlePage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void CallofWishBundlePage::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to CallofWishBundlePage::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
CallofWishBundlePage::ScrollTargetInterrupted(CallofWishBundlePage *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishBundlePage::Update() */

void __thiscall CallofWishBundlePage::Update(CallofWishBundlePage *this)

{
  TimeUtil aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  TimeUtil::GetTimeCountdown(3,0x2a4f);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  FUN_054766c8(this + 0xe8,aTStack_10);
  FUN_05476c50(aTStack_10);
  TimeUtil::GetTimeCountdown(1,-1);
  TimeUtil::GetTimeCountdownFormat(aTStack_10,0);
  FUN_054766c8(this + 0xf0,aTStack_10);
  FUN_05476c50(aTStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishBundlePage::~CallofWishBundlePage() */

void __thiscall CallofWishBundlePage::~CallofWishBundlePage(CallofWishBundlePage *this)

{
  *(undefined ***)this = &PTR_GetClass_066f2680;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishBundlePage_066f29b0;
  FUN_05476c50(this + 0xf0);
  FUN_05476c50(this + 0xe8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to CallofWishBundlePage::~CallofWishBundlePage() */

void __thiscall CallofWishBundlePage::~CallofWishBundlePage(CallofWishBundlePage *this)

{
  ~CallofWishBundlePage(this + -0xd8);
  return;
}


/* CallofWishBundlePage::~CallofWishBundlePage() */

void __thiscall CallofWishBundlePage::~CallofWishBundlePage(CallofWishBundlePage *this)

{
  ~CallofWishBundlePage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CallofWishBundlePage::~CallofWishBundlePage() */

void __thiscall CallofWishBundlePage::~CallofWishBundlePage(CallofWishBundlePage *this)

{
  ~CallofWishBundlePage(this + -0xd8);
  return;
}


/* CallofWishBundlePage::CallofWishBundlePage() */

void __thiscall CallofWishBundlePage::CallofWishBundlePage(CallofWishBundlePage *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066f2680;
  *(undefined ***)(this + 0xd8) = &PTR__CallofWishBundlePage_066f29b0;
  FUN_05476574(this + 0xe8);
  FUN_05476574(this + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishBundlePage::InitView(CallofWishTab, int, int) */

void __thiscall
CallofWishBundlePage::InitView
          (CallofWishBundlePage *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  CallofWishBundleItem *pCVar9;
  undefined4 *puVar10;
  code *pcVar11;
  ulong uVar12;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar11 = *(code **)(*(long *)this + 0x198);
  *(undefined4 *)(this + 0xe0) = param_2;
  (*pcVar11)(this,0,0,param_3,param_4);
  (**(code **)(*(long *)this + 0x80))(this,1,1);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  iVar2 = FUN_039d34f4(10);
  iVar3 = FUN_039d34f4(0x69);
  iVar4 = FUN_039d34f4(0x14);
  iVar1 = *(int *)(this + 0x50);
  iVar5 = FUN_039d34f4(0x122);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar3,iVar1 - iVar4,iVar5);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_28);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,1);
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  (**(code **)(*(long *)this_01 + 0x198))
            (this_01,0,0,*(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x54));
  iVar3 = FUN_039d34f4(0x14);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_039d34f4(10);
  iVar2 = *(int *)(this_01 + 0x54);
  iVar1 = ((iVar1 - iVar3) + iVar4 * -2) / 3;
  if (*(int *)(this + 0xe0) == 3) {
    uVar12 = 0;
    iVar3 = 0;
    while( true ) {
      lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      uVar7 = FUN_039d2760(*(undefined8 *)(lVar6 + 0x70),*(undefined8 *)(lVar6 + 0x78));
      if (uVar7 <= uVar12) break;
      lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      piVar8 = (int *)FUN_039d2790(*(undefined8 *)(lVar6 + 0x70),uVar12);
      if (-1 < *piVar8) {
        pCVar9 = ::operator_new(0x110);
        CallofWishBundleItem::CallofWishBundleItem(pCVar9);
        iVar4 = FUN_039d34f4(10);
        iVar4 = (iVar4 + iVar1) * iVar3;
        iVar3 = iVar3 + 1;
        Sexy::Insets::Insets(aIStack_18,iVar4,0,iVar1,iVar2);
        (**(code **)(*(long *)pCVar9 + 0x1a0))(pCVar9,aIStack_18);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,pCVar9);
        lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
        puVar10 = (undefined4 *)FUN_039d2790(*(undefined8 *)(lVar6 + 0x70),uVar12);
        CallofWishBundleItem::InitView(pCVar9,param_2,uVar12 & 0xffffffff,*puVar10);
      }
      uVar12 = uVar12 + 1;
    }
  }
  else if (*(int *)(this + 0xe0) == 4) {
    uVar12 = 0;
    while( true ) {
      lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      uVar7 = FUN_039d2760(*(undefined8 *)(lVar6 + 0x88),*(undefined8 *)(lVar6 + 0x90));
      if (uVar7 <= uVar12) break;
      lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
      piVar8 = (int *)FUN_039d2790(*(undefined8 *)(lVar6 + 0x70),uVar12);
      if (-1 < *piVar8) {
        pCVar9 = ::operator_new(0x110);
        CallofWishBundleItem::CallofWishBundleItem(pCVar9);
        iVar3 = FUN_039d34f4(10);
        Sexy::Insets::Insets(aIStack_18,(iVar3 + iVar1) * (int)uVar12,0,iVar1,iVar2);
        (**(code **)(*(long *)pCVar9 + 0x1a0))(pCVar9,aIStack_18);
        (**(code **)(*(long *)this_01 + 0x60))(this_01,pCVar9);
        lVar6 = Sexy::LazySingleton<CallofWishManager>::GetInstancePtr();
        puVar10 = (undefined4 *)FUN_039d2790(*(undefined8 *)(lVar6 + 0x88),uVar12);
        CallofWishBundleItem::InitView(pCVar9,param_2,uVar12 & 0xffffffff,*puVar10);
      }
      uVar12 = uVar12 + 1;
    }
  }
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishBundlePage::Draw(Sexy::Graphics*) */

void __thiscall CallofWishBundlePage::Draw(CallofWishBundlePage *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xe0) == 4) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1348);
    iVar1 = FUN_039d34f4(0x5a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),iVar1);
    TodStringTranslate(L"[CALL_OF_WISH_BUY_TIPS_2]");
    iVar1 = FUN_039d34f4(0);
    iVar2 = FUN_039d34f4(0x199);
    iVar3 = FUN_039d34f4(0x244);
    iVar4 = FUN_039d34f4(0x1a);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
    Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,(Color *)aIStack_28,5,1);
    FUN_05476c50(auStack_30);
  }
  else if (*(int *)(this + 0xe0) == 3) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1320);
    iVar1 = FUN_039d34f4(0x5a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,0,0,*(int *)(this + 0x50),iVar1);
    TodStringTranslate(L"[CALL_OF_WISH_BUY_TIPS_3]");
    iVar1 = FUN_039d34f4(0);
    iVar2 = FUN_039d34f4(0x197);
    iVar3 = FUN_039d34f4(0x244);
    iVar4 = FUN_039d34f4(0x1a);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,(Color *)aIStack_28,3,1);
    FUN_05476c50(auStack_30);
    TodStringTranslate(L"[GACHA_TIME_COUNT_DOWN]");
    iVar1 = FUN_039d34f4(0x151);
    iVar2 = FUN_039d34f4(0x19a);
    iVar3 = FUN_039d34f4(0x78);
    iVar4 = FUN_039d34f4(0x16);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_28,0x66,0x37,0);
    WriteWordInRect(param_1,auStack_30,aIStack_18,uVar5,(Color *)aIStack_28,5,1);
    FUN_05476c50(auStack_30);
    iVar1 = FUN_039d34f4(0x1ca);
    iVar2 = FUN_039d34f4(0x19a);
    iVar3 = FUN_039d34f4(0x72);
    iVar4 = FUN_039d34f4(0x16);
    Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac11f0);
    Draw3SliceImage(param_1,aIStack_18,uVar5);
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1580);
    iVar1 = FUN_039d34f4(0x1cb);
    iVar2 = FUN_039d34f4(0x199);
    iVar3 = FUN_039d34f4(0x1a);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
    iVar1 = FUN_039d34f4(0x1e7);
    iVar2 = FUN_039d34f4(0x19a);
    iVar3 = FUN_039d34f4(0x49);
    iVar4 = FUN_039d34f4(0x15);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0xf0,(Color *)aIStack_28,uVar5,aIStack_18,5,1);
  }
  iVar1 = FUN_039d34f4(0x37);
  iVar2 = FUN_039d34f4(0x23);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac15a8);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  TodStringTranslate(L"[ACTIVITY_TIME_DOWN]");
  iVar1 = FUN_039d34f4(0xaa);
  iVar2 = FUN_039d34f4(0x3c);
  iVar3 = FUN_039d34f4(100);
  iVar4 = FUN_039d34f4(0x19);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  iVar1 = FUN_039d34f4(0x118);
  iVar2 = FUN_039d34f4(0x3c);
  iVar3 = FUN_039d34f4(0x6e);
  iVar4 = FUN_039d34f4(0x16);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar4);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac11f0);
  Draw3SliceImage(param_1,aIStack_18,uVar5);
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1580);
  iVar1 = FUN_039d34f4(0x113);
  iVar2 = FUN_039d34f4(0x3a);
  iVar3 = FUN_039d34f4(0x1e);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_039d34f4(0x127);
  iVar2 = FUN_039d34f4(0x3d);
  iVar3 = FUN_039d34f4(0x5a);
  iVar4 = FUN_039d34f4(0x16);
  Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0xe8,aIStack_28,uVar5,aIStack_18,5,1);
  iVar1 = FUN_039d34f4(0x5f);
  iVar2 = FUN_039d34f4(0x136);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac1378);
  Draw9SliceImage(param_1,aIStack_18,uVar5);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

