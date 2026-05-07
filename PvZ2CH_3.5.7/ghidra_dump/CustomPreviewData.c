// Class: CustomPreviewData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomPreviewData::CustomPreviewData() */

void __thiscall CustomPreviewData::CustomPreviewData(CustomPreviewData *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  std::string::string((string *)this,"");
  nop();
  std::string::string((string *)(this + 8),"");
  nop();
  this[0x10] = (CustomPreviewData)0x0;
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomPreviewData::CustomPreviewData(CustomPreviewData const&) */

void __thiscall
CustomPreviewData::CustomPreviewData(CustomPreviewData *this,CustomPreviewData *param_1)

{
  undefined4 uVar1;
  CustomPreviewData CVar2;
  
  FUN_05475d88();
  FUN_05475d88(this + 8,param_1 + 8);
  CVar2 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this[0x10] = CVar2;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* CustomPreviewData::CustomPreviewData(CustomPreviewData&&) */

void __thiscall
CustomPreviewData::CustomPreviewData(CustomPreviewData *this,CustomPreviewData *param_1)

{
  undefined4 uVar1;
  CustomPreviewData CVar2;
  
  FUN_05474148();
  FUN_05474148(this + 8,param_1 + 8);
  CVar2 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this[0x10] = CVar2;
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* CustomPreviewData::TEMPNAMEPLACEHOLDERVALUE(CustomPreviewData const&) */

CustomPreviewData * __thiscall
CustomPreviewData::operator=(CustomPreviewData *this,CustomPreviewData *param_1)

{
  undefined4 uVar1;
  CustomPreviewData CVar2;
  
  thunk_FUN_05475e00();
  thunk_FUN_05475e00(this + 8,param_1 + 8);
  CVar2 = param_1[0x10];
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  this[0x10] = CVar2;
  *(undefined4 *)(this + 0x14) = uVar1;
  return this;
}

