// Class: CustomLevelFilterSelectAllButton


/* CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton() */

void __thiscall
CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton
          (CustomLevelFilterSelectAllButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06664800;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelFilterSelectAllButton_06664b60;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06664b88;
  FUN_05476c50(this + 0x310);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton() */

void __thiscall
CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton
          (CustomLevelFilterSelectAllButton *this)

{
  ~CustomLevelFilterSelectAllButton(this + -0x198);
  return;
}


/* CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton() */

void __thiscall
CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton
          (CustomLevelFilterSelectAllButton *this)

{
  ~CustomLevelFilterSelectAllButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton() */

void __thiscall
CustomLevelFilterSelectAllButton::~CustomLevelFilterSelectAllButton
          (CustomLevelFilterSelectAllButton *this)

{
  ~CustomLevelFilterSelectAllButton(this + -0x198);
  return;
}


/* CustomLevelFilterSelectAllButton::SetClickCallback(Sexy::Delegate1<int>) */

void __thiscall
CustomLevelFilterSelectAllButton::SetClickCallback
          (CustomLevelFilterSelectAllButton *this,Delegate2 *param_2)

{
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x318),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelFilterSelectAllButton::CustomLevelFilterSelectAllButton(int) */

void __thiscall
CustomLevelFilterSelectAllButton::CustomLevelFilterSelectAllButton
          (CustomLevelFilterSelectAllButton *this,int param_1)

{
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_06664800;
  *(undefined ***)(this + 0x198) = &PTR__CustomLevelFilterSelectAllButton_06664b60;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_06664b88;
  FUN_05476574(this + 0x310);
  Sexy::Delegate1<int>::Delegate1((DummyInit *)(this + 0x318));
  this[0x308] = (CustomLevelFilterSelectAllButton)0x0;
  FUN_054772c4(this + 0x310,&DAT_056f11a8);
  this[0x59] = (CustomLevelFilterSelectAllButton)0x0;
  Sexy::Delegate1<int>::Delegate1(aDStack_38);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x318),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelFilterSelectAllButton::ButtonDepress(int) */

void __thiscall
CustomLevelFilterSelectAllButton::ButtonDepress(CustomLevelFilterSelectAllButton *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_035e5c44(*(undefined8 *)(this + 800),*(undefined8 *)(this + 0x330));
  if (iVar1 == 0) {
    return;
  }
  Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()
            ((Delegate1wRet<bool,SexyURL_const&> *)(this + 0x318),(SexyURL *)(ulong)(uint)param_1);
  return;
}


/* non-virtual thunk to CustomLevelFilterSelectAllButton::ButtonDepress(int) */

void __thiscall
CustomLevelFilterSelectAllButton::ButtonDepress(CustomLevelFilterSelectAllButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelFilterSelectAllButton::Draw(Sexy::Graphics*) */

void __thiscall
CustomLevelFilterSelectAllButton::Draw(CustomLevelFilterSelectAllButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  undefined8 uVar8;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_035e74e0(5);
  iVar1 = *(int *)(this + 0x54);
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f40);
  iVar1 = iVar1 + iVar2 * -2;
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1,iVar1);
  pLVar6 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f40);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
  pSVar7 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa7f40);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
  Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
  Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  if (this[0x308] != (CustomLevelFilterSelectAllButton)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
    Sexy::Insets::Insets(aIStack_28,iVar2,iVar2,iVar1,iVar1);
    pLVar6 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa80f8);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar3,iVar4);
    Sexy::Graphics::DrawImage(param_1,pIVar5,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  iVar3 = FUN_035e74e0(10);
  iVar3 = iVar2 + iVar1 + iVar3;
  Sexy::Insets::Insets(aIStack_28,iVar3,0,*(int *)(this + 0x50) - iVar3,*(int *)(this + 0x54));
  uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  Sexy::Insets::Insets(aIStack_18,0x57,0x37,0,0xff);
  WriteWordInRect(param_1,this + 0x310,aIStack_28,uVar8,aIStack_18,3,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

