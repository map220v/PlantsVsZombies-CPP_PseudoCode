// Class: CardTargetCursorConfig


/* CardTargetCursorConfig::~CardTargetCursorConfig() */

void __thiscall CardTargetCursorConfig::~CardTargetCursorConfig(CardTargetCursorConfig *this)

{
  CardTargetCursorAnim::~CardTargetCursorAnim((CardTargetCursorAnim *)(this + 8));
  std::string::~string((string *)this);
  return;
}


/* CardTargetCursorConfig::CardTargetCursorConfig(CardTargetCursorConfig const&) */

void __thiscall
CardTargetCursorConfig::CardTargetCursorConfig
          (CardTargetCursorConfig *this,CardTargetCursorConfig *param_1)

{
  FUN_05475d88();
  CardTargetCursorAnim::CardTargetCursorAnim
            ((CardTargetCursorAnim *)(this + 8),(CardTargetCursorAnim *)(param_1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursorConfig::CardTargetCursorConfig() */

void __thiscall CardTargetCursorConfig::CardTargetCursorConfig(CardTargetCursorConfig *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"CardTargetCursor");
  nop();
  CardTargetCursorAnim::CardTargetCursorAnim((CardTargetCursorAnim *)(this + 8));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

