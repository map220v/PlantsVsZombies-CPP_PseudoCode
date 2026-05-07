// Class: AwardEntry


/* AwardEntry::AwardEntry(AwardType, std::string const&, int, int) */

void __thiscall
AwardEntry::AwardEntry
          (AwardEntry *this,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

{
  *(undefined4 *)this = param_2;
  FUN_05475d88(this + 8,param_3);
  *(undefined4 *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x14) = param_5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AwardEntry::AwardEntry() */

void __thiscall AwardEntry::AwardEntry(AwardEntry *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

