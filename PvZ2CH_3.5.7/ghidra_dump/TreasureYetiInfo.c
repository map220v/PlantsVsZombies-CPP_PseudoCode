// Class: TreasureYetiInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasureYetiInfo::TreasureYetiInfo() */

void __thiscall TreasureYetiInfo::TreasureYetiInfo(TreasureYetiInfo *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"none");
  nop();
  lVar2 = ___stack_chk_guard;
  *(undefined8 *)(this + 8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TreasureYetiInfo::TEMPNAMEPLACEHOLDERVALUE(TreasureYetiInfo const&) */

TreasureYetiInfo * __thiscall
TreasureYetiInfo::operator=(TreasureYetiInfo *this,TreasureYetiInfo *param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}


/* TreasureYetiInfo::TreasureYetiInfo(TreasureYetiInfo const&) */

void __thiscall TreasureYetiInfo::TreasureYetiInfo(TreasureYetiInfo *this,TreasureYetiInfo *param_1)

{
  undefined8 uVar1;
  
  FUN_05475d88();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

