// Class: GuessGameCostButton


/* GuessGameCostButton::~GuessGameCostButton() */

void __thiscall GuessGameCostButton::~GuessGameCostButton(GuessGameCostButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06988400;
  *(undefined ***)(this + 0x198) = &PTR__GuessGameCostButton_06988758;
  FUN_05476c50(this + 0x308);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to GuessGameCostButton::~GuessGameCostButton() */

void __thiscall GuessGameCostButton::~GuessGameCostButton(GuessGameCostButton *this)

{
  ~GuessGameCostButton(this + -0x198);
  return;
}


/* GuessGameCostButton::~GuessGameCostButton() */

void __thiscall GuessGameCostButton::~GuessGameCostButton(GuessGameCostButton *this)

{
  ~GuessGameCostButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GuessGameCostButton::~GuessGameCostButton() */

void __thiscall GuessGameCostButton::~GuessGameCostButton(GuessGameCostButton *this)

{
  ~GuessGameCostButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCostButton::GuessGameCostButton(int, Sexy::ButtonListener*, std::wstring const&,
   Sexy::Color const&) */

void __thiscall
GuessGameCostButton::GuessGameCostButton
          (GuessGameCostButton *this,int param_1,ButtonListener *param_2,wstring *param_3,
          Color *param_4)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR_GetClass_06988400;
  *(undefined ***)(this + 0x198) = &PTR__GuessGameCostButton_06988758;
  FUN_05476574(this + 0x308);
  std::string::string(asStack_10,"IMAGE_UI_XXXX");
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0x300) = uVar1;
  std::string::~string(asStack_10);
  nop();
  FUN_054772c4(this + 0x308,&DAT_056f11a8);
  *(undefined4 *)(this + 0x310) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCostButton::SetCount(int) */

void __thiscall GuessGameCostButton::SetCount(GuessGameCostButton *this,int param_1)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x310) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",auStack_10);
  FUN_054766c8(this + 0x308,auStack_10);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GuessGameCostButton::Draw(Sexy::Graphics*) */

void __thiscall GuessGameCostButton::Draw(GuessGameCostButton *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  SalesProgressBar *this_00;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZ2UIButton::Draw((PVZ2UIButton *)this,param_1);
  iVar5 = DAT_06b91100;
  if (((DAT_06b90d98 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b90d98), iVar5 = DAT_06b91100, iVar4 != 0)) {
    iVar5 = FUN_04c4a134(0x14);
    DAT_06b91100 = iVar5;
    __cxa_guard_release(&DAT_06b90d98);
  }
  iVar4 = DAT_06b91104;
  if (((DAT_06b90da0 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_06b90da0), iVar4 = DAT_06b91104, iVar1 != 0)) {
    iVar4 = FUN_04c4a134(0x28);
    DAT_06b91104 = iVar4;
    __cxa_guard_release(&DAT_06b90da0);
  }
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x300));
  this_00 = *(SalesProgressBar **)(this + 0x300);
  iVar2 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Graphics::DrawImage(param_1,(Image *)this_00,iVar5,iVar4,iVar1,iVar2);
  if (((DAT_06b90ce0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_06b90ce0), iVar5 != 0)) {
    DAT_06b90d38 = FUN_04c4a134(5);
    __cxa_guard_release(&DAT_06b90ce0);
  }
  iVar5 = DAT_06b90d68;
  if (((DAT_06b91390 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&DAT_06b91390), iVar5 = DAT_06b90d68, iVar4 != 0)) {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x300));
    iVar5 = iVar5 + DAT_06b91100 + DAT_06b90d38;
    DAT_06b90d68 = iVar5;
    __cxa_guard_release(&DAT_06b91390);
  }
  iVar4 = DAT_06b91388;
  if (((DAT_06b90c38 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b90c38), iVar1 = DAT_06b91104, iVar4 = DAT_06b91388,
     iVar2 != 0)) {
    DAT_06b91388 = DAT_06b91104;
    __cxa_guard_release(&DAT_06b90c38);
    iVar4 = iVar1;
  }
  iVar1 = DAT_06b90ee0;
  if (((DAT_06b91380 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_06b91380), iVar1 = DAT_06b90ee0, iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x50);
    DAT_06b90ee0 = iVar1 / 2;
    __cxa_guard_release(&DAT_06b91380);
    iVar1 = iVar1 / 2;
  }
  iVar2 = DAT_06b91458;
  if (((DAT_06b91670 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_06b91670), iVar2 = DAT_06b91458, iVar3 != 0)) {
    iVar2 = *(int *)(this + 0x54);
    DAT_06b91458 = iVar2 / 2;
    __cxa_guard_release(&DAT_06b91670);
    iVar2 = iVar2 / 2;
  }
  Sexy::Insets::Insets(aIStack_28,iVar5,iVar4,iVar1,iVar2);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_40_ThickOutline);
  Sexy::Color::Color(aCStack_18,1);
  WriteWordInRect(param_1,this + 0x308,aIStack_28,uVar6,aCStack_18,2,1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

