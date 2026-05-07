// Class: StoneLotteryButton


/* StoneLotteryButton::~StoneLotteryButton() */

void __thiscall StoneLotteryButton::~StoneLotteryButton(StoneLotteryButton *this)

{
  *(undefined ***)this = &PTR_GetClass_066c4c30;
  *(undefined ***)(this + 0x198) = &PTR__StoneLotteryButton_066c4f88;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  FUN_05476c50(this + 0x328);
  FUN_05476c50(this + 800);
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to StoneLotteryButton::~StoneLotteryButton() */

void __thiscall StoneLotteryButton::~StoneLotteryButton(StoneLotteryButton *this)

{
  ~StoneLotteryButton(this + -0x198);
  return;
}


/* StoneLotteryButton::~StoneLotteryButton() */

void __thiscall StoneLotteryButton::~StoneLotteryButton(StoneLotteryButton *this)

{
  ~StoneLotteryButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StoneLotteryButton::~StoneLotteryButton() */

void __thiscall StoneLotteryButton::~StoneLotteryButton(StoneLotteryButton *this)

{
  ~StoneLotteryButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StoneLotteryButton::StoneLotteryButton(int, Sexy::ButtonListener*) */

void __thiscall
StoneLotteryButton::StoneLotteryButton(StoneLotteryButton *this,int param_1,ButtonListener *param_2)

{
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(awStack_20,&DAT_056f11a8,auStack_28);
  Sexy::Color::Color(aCStack_18,1);
  PVZ2UIButton::PVZ2UIButton((PVZ2UIButton *)this,param_1,param_2,awStack_20,aCStack_18);
  FUN_05476c50(awStack_20);
  nop();
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined ***)this = &PTR_GetClass_066c4c30;
  *(undefined ***)(this + 0x198) = &PTR__StoneLotteryButton_066c4f88;
  Sexy::Insets::Insets((Insets *)(this + 0x300));
  Sexy::Insets::Insets((Insets *)(this + 0x310));
  FUN_05478178(this + 800,&DAT_056f11a8,aCStack_18);
  nop();
  FUN_05478178(this + 0x328,&DAT_056f11a8,aCStack_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

