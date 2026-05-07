// Class: SignButton


/* SignButton::~SignButton() */

void __thiscall SignButton::~SignButton(SignButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06932490;
  *(undefined ***)(this + 0x198) = &PTR__SignButton_069327e8;
  FUN_05476c50(this + 0x310);
  FUN_05476c50(this + 0x300);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to SignButton::~SignButton() */

void __thiscall SignButton::~SignButton(SignButton *this)

{
  ~SignButton(this + -0x198);
  return;
}


/* SignButton::~SignButton() */

void __thiscall SignButton::~SignButton(SignButton *this)

{
  ~SignButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SignButton::~SignButton() */

void __thiscall SignButton::~SignButton(SignButton *this)

{
  ~SignButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SignButton::SignButton(int, Sexy::ButtonListener*, std::wstring const&, Sexy::Color const&) */

void __thiscall
SignButton::SignButton
          (SignButton *this,int param_1,ButtonListener *param_2,wstring *param_3,Color *param_4)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_06932490;
  *(undefined ***)(this + 0x198) = &PTR__SignButton_069327e8;
  FUN_05476574(this + 0x300);
  FUN_05476574(this + 0x310);
  std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_GEM");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x308) = uVar1;
  std::string::~string(asStack_10);
  nop();
  FUN_054772c4(this + 0x300,&DAT_056f11a8);
  FUN_054772c4(this + 0x310,&DAT_056f11a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SignButton::SetDescription(std::wstring) */

void __thiscall SignButton::SetDescription(SignButton *this,wstring *param_2)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(param_2);
  FUN_054766c8(this + 0x300,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SignButton::SetDiamondCount(int) */

void SignButton::SetDiamondCount(int param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8((ulong)(uint)param_1 + 0x310,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SignButton::Draw(Sexy::Graphics*) */

void __thiscall SignButton::Draw(SignButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SalesProgressBar *this_00;
  ulong uVar7;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  iVar5 = DAT_06b7a760;
  if (((DAT_06b7b128 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b7b128), iVar5 = DAT_06b7a760, iVar4 != 0)) {
    iVar5 = FUN_04a3aff4(0x14);
    DAT_06b7a760 = iVar5;
    __cxa_guard_release(&DAT_06b7b128);
  }
  iVar4 = DAT_06b7a764;
  if (((DAT_06b7a848 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b7a848), iVar4 = DAT_06b7a764, iVar1 != 0)) {
    iVar4 = FUN_04a3aff4(0x28);
    DAT_06b7a764 = iVar4;
    __cxa_guard_release(&DAT_06b7a848);
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x308));
  this_00 = *(SalesProgressBar **)(this + 0x308);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar5,iVar4,iVar1 << 1,iVar2 << 1);
  uVar7 = DAT_06b7a9f8 & 1;
  iVar5 = DAT_06b7a7c0;
  if (((DAT_06b7a9f8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b7a9f8), iVar5 = DAT_06b7a7c0, iVar4 != 0)) {
    iVar5 = FUN_04a3aff4(uVar7);
    DAT_06b7a7c0 = iVar5;
    __cxa_guard_release(&DAT_06b7a9f8);
  }
  iVar4 = DAT_06b7a8c8;
  if (((DAT_06b7aa90 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b7aa90), iVar4 = DAT_06b7a8c8, iVar1 != 0)) {
    iVar4 = FUN_04a3aff4(0x11);
    DAT_06b7a8c8 = iVar4;
    __cxa_guard_release(&DAT_06b7aa90);
  }
  iVar1 = DAT_06b7a748;
  if (((DAT_06b7b068 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b7b068), iVar1 = DAT_06b7a748, iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x50) + iVar5 * -2;
    DAT_06b7a748 = iVar1;
    __cxa_guard_release(&DAT_06b7b068);
  }
  iVar2 = DAT_06b7aa60;
  if (((DAT_06b7b108 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b7b108), iVar2 = DAT_06b7aa60, iVar3 != 0)) {
    iVar2 = *(int *)(this + 0x54);
    DAT_06b7aa60 = iVar2 / 2;
    __cxa_guard_release(&DAT_06b7b108);
    iVar2 = iVar2 / 2;
  }
  Sexy::Insets::Insets((Insets *)&local_28,iVar5,iVar4,iVar1,iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x300,(Insets *)&local_28,uVar6,(Insets *)&local_18,2,1);
  if (((DAT_06b7aef0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b7aef0), iVar5 != 0)) {
    DAT_06b7ab78 = FUN_04a3aff4(5);
    __cxa_guard_release(&DAT_06b7aef0);
  }
  iVar5 = DAT_06b7ace0;
  if (((DAT_06b7aea8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b7aea8), iVar5 = DAT_06b7ace0, iVar4 != 0)) {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x308));
    iVar5 = iVar5 + DAT_06b7a760 + DAT_06b7ab78;
    DAT_06b7ace0 = iVar5;
    __cxa_guard_release(&DAT_06b7aea8);
  }
  iVar4 = DAT_06b7af70;
  if (((DAT_06b7b0d0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b7b0d0), iVar1 = DAT_06b7a764, iVar4 = DAT_06b7af70,
     iVar2 != 0)) {
    DAT_06b7af70 = DAT_06b7a764;
    __cxa_guard_release(&DAT_06b7b0d0);
    iVar4 = iVar1;
  }
  iVar1 = DAT_06b7a7b8;
  if (((DAT_06b7aee8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b7aee8), iVar1 = DAT_06b7a7b8, iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x50);
    DAT_06b7a7b8 = iVar1 / 2;
    __cxa_guard_release(&DAT_06b7aee8);
    iVar1 = iVar1 / 2;
  }
  iVar2 = DAT_06b7a7bc;
  if (((DAT_06b7ab38 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b7ab38), iVar2 = DAT_06b7a7bc, iVar3 != 0)) {
    iVar2 = *(int *)(this + 0x54);
    DAT_06b7a7bc = iVar2 / 2;
    __cxa_guard_release(&DAT_06b7ab38);
    iVar2 = iVar2 / 2;
  }
  Sexy::Insets::Insets((Insets *)&local_18,iVar5,iVar4,iVar1,iVar2);
  local_28 = local_18;
  uStack_20 = uStack_10;
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color((Color *)&local_18,1);
  WriteWordInRect(param_1,this + 0x310,(Insets *)&local_28,uVar6,(Insets *)&local_18,2,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

