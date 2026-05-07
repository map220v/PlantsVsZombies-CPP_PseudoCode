// Class: PneumaticPlantEntry


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PneumaticPlantEntry::PneumaticPlantEntry() */

void __thiscall PneumaticPlantEntry::PneumaticPlantEntry(PneumaticPlantEntry *this)

{
  undefined4 uVar1;
  
  Set8BytesTo0();
  *(undefined4 *)(this + 8) = 1000;
  uVar1 = _FUN_042f1c34;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x10) = 0x41200000;
  return;
}


/* PneumaticPlantEntry::PneumaticPlantEntry(PneumaticPlantEntry const&) */

void __thiscall
PneumaticPlantEntry::PneumaticPlantEntry(PneumaticPlantEntry *this,PneumaticPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}


/* PneumaticPlantEntry::TEMPNAMEPLACEHOLDERVALUE(PneumaticPlantEntry&&) */

PneumaticPlantEntry * __thiscall
PneumaticPlantEntry::operator=(PneumaticPlantEntry *this,PneumaticPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return this;
}


/* PneumaticPlantEntry::PneumaticPlantEntry(PneumaticPlantEntry&&) */

void __thiscall
PneumaticPlantEntry::PneumaticPlantEntry(PneumaticPlantEntry *this,PneumaticPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}

