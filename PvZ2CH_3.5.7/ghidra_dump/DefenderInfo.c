// Class: DefenderInfo


/* DefenderInfo::DefenderInfo() */

void __thiscall DefenderInfo::DefenderInfo(DefenderInfo *this)

{
  FUN_05476574();
  FUN_054772c4(this,&DAT_056f11a8);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


/* DefenderInfo::TEMPNAMEPLACEHOLDERVALUE(DefenderInfo const&) */

DefenderInfo * __thiscall DefenderInfo::operator=(DefenderInfo *this,DefenderInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  thunk_FUN_05477b9c();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return this;
}


/* DefenderInfo::DefenderInfo(DefenderInfo const&) */

void __thiscall DefenderInfo::DefenderInfo(DefenderInfo *this,DefenderInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_05477b24();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return;
}


/* DefenderInfo::TEMPNAMEPLACEHOLDERVALUE(DefenderInfo&&) */

DefenderInfo * __thiscall DefenderInfo::operator=(DefenderInfo *this,DefenderInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_054766c8();
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar3;
  return this;
}

