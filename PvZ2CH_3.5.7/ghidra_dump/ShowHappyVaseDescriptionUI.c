// Class: ShowHappyVaseDescriptionUI


/* ShowHappyVaseDescriptionUI::~ShowHappyVaseDescriptionUI() */

void __thiscall
ShowHappyVaseDescriptionUI::~ShowHappyVaseDescriptionUI(ShowHappyVaseDescriptionUI *this)

{
  *(undefined ***)this = &PTR_GetClass_066fbe80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fc1a8;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ShowHappyVaseDescriptionUI::~ShowHappyVaseDescriptionUI() */

void __thiscall
ShowHappyVaseDescriptionUI::~ShowHappyVaseDescriptionUI(ShowHappyVaseDescriptionUI *this)

{
  ~ShowHappyVaseDescriptionUI(this);
  AK::FreeHook(this);
  return;
}


/* ShowHappyVaseDescriptionUI::ShowHappyVaseDescriptionUI() */

void __thiscall
ShowHappyVaseDescriptionUI::ShowHappyVaseDescriptionUI(ShowHappyVaseDescriptionUI *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_066fbe80;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066fc1a8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowHappyVaseDescriptionUI::InitView() */

void __thiscall ShowHappyVaseDescriptionUI::InitView(ShowHappyVaseDescriptionUI *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  PVZ2UIButton *this_00;
  undefined8 uVar5;
  code *pcVar6;
  wstring awStack_78 [56];
  Insets aIStack_40 [56];
  long local_8;
  
  this[0x59] = (ShowHappyVaseDescriptionUI)0x0;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,0,0,*(undefined4 *)(gLawnApp + 0xd4),*(undefined4 *)(gLawnApp + 0xd8));
  TodStringTranslate(L"[DIALOG_STRING_OK]");
  Sexy::Color::Color((Color *)aIStack_40,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (this_00,0xc,(ButtonListener *)(this + 0xd8),awStack_78,(Color *)aIStack_40);
  FUN_05476c50(awStack_78);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)awStack_78,&DAT_06ac2b68,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)aIStack_40,&DAT_06ac2c30,3);
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)awStack_78,(PVZ2UIImage *)aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 0x1a0);
  iVar2 = FUN_03a0fa3c(0x78);
  iVar3 = FUN_03a0fa3c(0x87);
  iVar1 = *(int *)(this + 0x54);
  iVar4 = FUN_03a0fa3c(0x2d);
  Sexy::Insets::Insets(aIStack_40,(*(int *)(this + 0x50) - iVar2) / 2,iVar3 + iVar1 / 2,iVar2,iVar4)
  ;
  (*pcVar6)(this_00,aIStack_40);
  pcVar6 = *(code **)(*(long *)this_00 + 800);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_HardShadow);
  (*pcVar6)(this_00,uVar5);
  (**(code **)(*(long *)this + 0x60))(this,this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShowHappyVaseDescriptionUI::ButtonDepress(int) */

ShowHappyVaseDescriptionUI * __thiscall
ShowHappyVaseDescriptionUI::ButtonDepress(ShowHappyVaseDescriptionUI *this,int param_1)

{
  UIHappyVaseBreaker *this_00;
  ShowHappyVaseDescriptionUI *pSVar1;
  
  if ((param_1 == 0xc) &&
     (this_00 = (UIHappyVaseBreaker *)UISingletonDialog<UIHappyVaseBreaker>::GetSingletonPtr(),
     this = (ShowHappyVaseDescriptionUI *)0x0, this_00 != (UIHappyVaseBreaker *)0x0)) {
    pSVar1 = (ShowHappyVaseDescriptionUI *)UIHappyVaseBreaker::closeDescription(this_00);
    return pSVar1;
  }
  return this;
}


/* non-virtual thunk to ShowHappyVaseDescriptionUI::ButtonDepress(int) */

void __thiscall
ShowHappyVaseDescriptionUI::ButtonDepress(ShowHappyVaseDescriptionUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShowHappyVaseDescriptionUI::Draw(Sexy::Graphics*) */

void __thiscall ShowHappyVaseDescriptionUI::Draw(ShowHappyVaseDescriptionUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03a0fa3c(600);
  iVar2 = FUN_03a0fa3c(400);
  Sexy::Insets::Insets
            (aIStack_18,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar2);
  uVar4 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ac2d58);
  Draw9SliceImage(param_1,aIStack_18,uVar4);
  TodStringTranslate(L"[HAPPY_VASE_BREAKER_DES_TITLE]");
  iVar1 = FUN_03a0fa3c(600);
  iVar2 = FUN_03a0fa3c(0x17c);
  iVar3 = FUN_03a0fa3c(0x32);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  TodStringTranslate(L"[HAPPY_VASE_BREAKER_DESCRIPTION]");
  iVar1 = FUN_03a0fa3c(500);
  iVar2 = FUN_03a0fa3c(0x104);
  iVar3 = FUN_03a0fa3c(0xfa);
  Sexy::Insets::Insets
            (aIStack_28,(*(int *)(this + 0x50) - iVar1) / 2,(*(int *)(this + 0x54) - iVar2) / 2,
             iVar1,iVar3);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_20);
  Sexy::Color::Color((Color *)aIStack_18,0);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar4,aIStack_18,0,1);
  FUN_05476c50(auStack_30);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

