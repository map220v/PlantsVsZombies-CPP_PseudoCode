// Class: Lv5Switch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Lv5Switch::Lv5Switch() */

void __thiscall Lv5Switch::Lv5Switch(Lv5Switch *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  this[8] = (Lv5Switch)0x0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

