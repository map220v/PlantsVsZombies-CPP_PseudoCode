// Class: PVZ2UIImageButton


/* PVZ2UIImageButton::SetTitle(std::wstring) */

void PVZ2UIImageButton::SetTitle(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x330);
  return;
}


/* PVZ2UIImageButton::~PVZ2UIImageButton() */

void __thiscall PVZ2UIImageButton::~PVZ2UIImageButton(PVZ2UIImageButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069ca130;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIImageButton_069ca490;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069ca4b8;
  FUN_05476c50(this + 0x330);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to PVZ2UIImageButton::~PVZ2UIImageButton() */

void __thiscall PVZ2UIImageButton::~PVZ2UIImageButton(PVZ2UIImageButton *this)

{
  ~PVZ2UIImageButton(this + -0x198);
  return;
}


/* PVZ2UIImageButton::~PVZ2UIImageButton() */

void __thiscall PVZ2UIImageButton::~PVZ2UIImageButton(PVZ2UIImageButton *this)

{
  ~PVZ2UIImageButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ2UIImageButton::~PVZ2UIImageButton() */

void __thiscall PVZ2UIImageButton::~PVZ2UIImageButton(PVZ2UIImageButton *this)

{
  ~PVZ2UIImageButton(this + -0x198);
  return;
}


/* PVZ2UIImageButton::ButtonDepress(int) */

void __thiscall PVZ2UIImageButton::ButtonDepress(PVZ2UIImageButton *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)(this + 0xd4) == param_1) &&
     (iVar1 = FUN_04de43b4(*(undefined8 *)(this + 0x340),*(undefined8 *)(this + 0x350)), iVar1 != 0)
     ) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x338));
    return;
  }
  return;
}


/* non-virtual thunk to PVZ2UIImageButton::ButtonDepress(int) */

void __thiscall PVZ2UIImageButton::ButtonDepress(PVZ2UIImageButton *this,int param_1)

{
  ButtonDepress(this + -0x300,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageButton::UpdateParams() */

void __thiscall PVZ2UIImageButton::UpdateParams(PVZ2UIImageButton *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(LotteryResultProgressBar **)(this + 0x328) == (LotteryResultProgressBar *)0x0) {
    Sexy::Insets::Insets((Insets *)&local_18,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  else {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x328));
    iVar3 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x328));
    iVar4 = FUN_04de441c();
    iVar1 = *(int *)(this + 0x54) + iVar4 * -2;
    iVar2 = (int)((float)iVar1 / ((float)iVar3 / (float)iVar2));
    Sexy::Insets::Insets((Insets *)&local_18,iVar4,iVar4,iVar2,iVar1);
    *(undefined8 *)(this + 0x308) = local_18;
    *(undefined8 *)(this + 0x310) = uStack_10;
    Sexy::Insets::Insets
              ((Insets *)&local_18,iVar4 + iVar2,0,(*(int *)(this + 0x50) - iVar4) - iVar2,
               *(int *)(this + 0x54));
    *(undefined8 *)(this + 0x318) = local_18;
    *(undefined8 *)(this + 800) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageButton::PVZ2UIImageButton(int) */

void __thiscall PVZ2UIImageButton::PVZ2UIImageButton(PVZ2UIImageButton *this,int param_1)

{
  undefined1 auStack_58 [8];
  wstring awStack_50 [8];
  Color aCStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_50,&DAT_056f11a8,auStack_58);
  Sexy::Color::Color(aCStack_48,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,(ButtonListener *)(this + 0x300),awStack_50,aCStack_48);
  FUN_05476c50(awStack_50);
  nop();
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0x300));
  *(undefined ***)this = &PTR_GetClass_069ca130;
  *(undefined ***)(this + 0x198) = &PTR__PVZ2UIImageButton_069ca490;
  *(undefined ***)(this + 0x300) = &PTR_ButtonPress_069ca4b8;
  Sexy::Insets::Insets((Insets *)(this + 0x308));
  Sexy::Insets::Insets((Insets *)(this + 0x318));
  FUN_05476574(this + 0x330);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x338),(DummyInit *)0x0);
  *(undefined8 *)(this + 0x328) = 0;
  FUN_054772c4(this + 0x330,&DAT_056f11a8);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x338),(Delegate2 *)aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UIImageButton::Draw(Sexy::Graphics*) */

void __thiscall PVZ2UIImageButton::Draw(PVZ2UIImageButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  SalesProgressBar *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  if (*(LotteryResultProgressBar **)(this + 0x328) != (LotteryResultProgressBar *)0x0) {
    iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x328));
    this_00 = *(SalesProgressBar **)(this + 0x328);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,iVar2);
    Sexy::Graphics::DrawImage(param_1,(Image *)this_00,(TRect *)(this + 0x308),(TRect *)aIStack_18);
  }
  uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x330,this + 0x318,uVar3,aIStack_18,5,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

