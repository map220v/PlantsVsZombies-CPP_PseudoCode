// Class: InitialPlantEntry


/* InitialPlantEntry::InitialPlantEntry() */

void __thiscall InitialPlantEntry::InitialPlantEntry(InitialPlantEntry *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x24] = (InitialPlantEntry)0x0;
  return;
}


/* InitialPlantEntry::InitialPlantEntry(InitialPlantEntry const&) */

void __thiscall
InitialPlantEntry::InitialPlantEntry(InitialPlantEntry *this,InitialPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)this,(vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  return;
}


/* InitialPlantEntry::InitialPlantEntry(InitialPlantEntry&&) */

void __thiscall
InitialPlantEntry::InitialPlantEntry(InitialPlantEntry *this,InitialPlantEntry *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)this,
             (vector *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  this[0x24] = param_1[0x24];
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x20) = uVar3;
  return;
}

