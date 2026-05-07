// Class: PVPZombieData


/* PVPZombieData::PVPZombieData() */

void __thiscall PVPZombieData::PVPZombieData(PVPZombieData *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (PVPZombieData)0x1;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (PVPZombieData)0x1;
  return;
}


/* PVPZombieData::PVPZombieData(PVPZombieData const&) */

void __thiscall PVPZombieData::PVPZombieData(PVPZombieData *this,PVPZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVPZombieData PVar3;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 8);
  PVar3 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = PVar3;
  *(undefined4 *)(this + 0x10) = uVar2;
  return;
}


/* PVPZombieData::TEMPNAMEPLACEHOLDERVALUE(PVPZombieData const&) */

PVPZombieData * __thiscall PVPZombieData::operator=(PVPZombieData *this,PVPZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVPZombieData PVar3;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 8);
  PVar3 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = PVar3;
  *(undefined4 *)(this + 0x10) = uVar2;
  return this;
}


/* PVPZombieData::PVPZombieData(PVPZombieData&&) */

void __thiscall PVPZombieData::PVPZombieData(PVPZombieData *this,PVPZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVPZombieData PVar3;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 8);
  PVar3 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = PVar3;
  *(undefined4 *)(this + 0x10) = uVar2;
  return;
}


/* PVPZombieData::TEMPNAMEPLACEHOLDERVALUE(PVPZombieData&&) */

PVPZombieData * __thiscall PVPZombieData::operator=(PVPZombieData *this,PVPZombieData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PVPZombieData PVar3;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 8);
  PVar3 = param_1[0xc];
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  this[0x14] = param_1[0x14];
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = PVar3;
  *(undefined4 *)(this + 0x10) = uVar2;
  return this;
}

