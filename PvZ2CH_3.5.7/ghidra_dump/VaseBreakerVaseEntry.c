// Class: VaseBreakerVaseEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerVaseEntry::VaseBreakerVaseEntry() */

void __thiscall VaseBreakerVaseEntry::VaseBreakerVaseEntry(VaseBreakerVaseEntry *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

