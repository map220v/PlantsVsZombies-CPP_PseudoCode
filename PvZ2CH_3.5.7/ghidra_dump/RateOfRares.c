// Class: RateOfRares


/* RateOfRares::~RateOfRares() */

void __thiscall RateOfRares::~RateOfRares(RateOfRares *this)

{
  FUN_05476c50(this + 0x38);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RateOfRares::RateOfRares() */

void __thiscall RateOfRares::RateOfRares(RateOfRares *this)

{
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  Sexy::Insets::Insets((Insets *)(this + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  FUN_05478178(this + 0x38,&DAT_056f11a8,auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

