// Class: HintWord


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HintWord::HintWord() */

void __thiscall HintWord::HintWord(HintWord *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(this,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Insets::Insets((Insets *)(this + 8),0,0,0,0);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
  *(undefined8 *)(this + 0x18) = uVar2;
  Sexy::Color::Color((Color *)(this + 0x20),1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x30) = 5;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HintWord::HintWord(HintWord const&) */

void __thiscall HintWord::HintWord(HintWord *this,HintWord *param_1)

{
  FUN_05477b24();
  Sexy::Insets::Insets((Insets *)(this + 8),(Insets *)(param_1 + 8));
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  Sexy::Insets::Insets((Insets *)(this + 0x20),(Insets *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}

