// Class: IdNameInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IdNameInfo::IdNameInfo() */

void __thiscall IdNameInfo::IdNameInfo(IdNameInfo *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  *(undefined4 *)(this + 8) = 0;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

