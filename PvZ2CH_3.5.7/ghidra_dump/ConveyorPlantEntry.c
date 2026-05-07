// Class: ConveyorPlantEntry


/* ConveyorPlantEntry::ConveyorPlantEntry() */

void __thiscall ConveyorPlantEntry::ConveyorPlantEntry(ConveyorPlantEntry *this)

{
  Set8BytesTo0();
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 8) = 1000;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0x3dcccccd;
  *(undefined4 *)(this + 0x10) = 0x41200000;
  return;
}


/* ConveyorPlantEntry::ConveyorPlantEntry(ConveyorPlantEntry const&) */

void __thiscall
ConveyorPlantEntry::ConveyorPlantEntry(ConveyorPlantEntry *this,ConveyorPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_05475d88();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}


/* ConveyorPlantEntry::ConveyorPlantEntry(ConveyorPlantEntry&&) */

void __thiscall
ConveyorPlantEntry::ConveyorPlantEntry(ConveyorPlantEntry *this,ConveyorPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_05474148();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}


/* ConveyorPlantEntry::TEMPNAMEPLACEHOLDERVALUE(ConveyorPlantEntry const&) */

ConveyorPlantEntry * __thiscall
ConveyorPlantEntry::operator=(ConveyorPlantEntry *this,ConveyorPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  thunk_FUN_05475e00();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return this;
}


/* ConveyorPlantEntry::TEMPNAMEPLACEHOLDERVALUE(ConveyorPlantEntry&&) */

ConveyorPlantEntry * __thiscall
ConveyorPlantEntry::operator=(ConveyorPlantEntry *this,ConveyorPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_05474278();
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x1c) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return this;
}

