// Class: EntrySortValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EntrySortValue::EntrySortValue() */

void __thiscall EntrySortValue::EntrySortValue(EntrySortValue *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::string::string((string *)(this + 8),"");
  nop();
  *(undefined4 *)(this + 0x10) = 0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EntrySortValue::TEMPNAMEPLACEHOLDERVALUE(EntrySortValue const&) */

EntrySortValue * __thiscall EntrySortValue::operator=(EntrySortValue *this,EntrySortValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}


/* EntrySortValue::EntrySortValue(EntrySortValue const&) */

void __thiscall EntrySortValue::EntrySortValue(EntrySortValue *this,EntrySortValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05475d88(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* EntrySortValue::EntrySortValue(EntrySortValue&&) */

void __thiscall EntrySortValue::EntrySortValue(EntrySortValue *this,EntrySortValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474148(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return;
}


/* EntrySortValue::TEMPNAMEPLACEHOLDERVALUE(EntrySortValue&&) */

EntrySortValue * __thiscall EntrySortValue::operator=(EntrySortValue *this,EntrySortValue *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  FUN_05474278(this + 8,param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  return this;
}

