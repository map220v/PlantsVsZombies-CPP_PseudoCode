// Class: PlantAdventureInfo


/* PlantAdventureInfo::PlantAdventureInfo() */

void __thiscall PlantAdventureInfo::PlantAdventureInfo(PlantAdventureInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *this = (PlantAdventureInfo)0x0;
  this[1] = (PlantAdventureInfo)0x0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* PlantAdventureInfo::PlantAdventureInfo(PlantAdventureInfo const&) */

void __thiscall
PlantAdventureInfo::PlantAdventureInfo(PlantAdventureInfo *this,PlantAdventureInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PlantAdventureInfo PVar10;
  PlantAdventureInfo PVar11;
  
  PVar10 = *param_1;
  PVar11 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *this = PVar10;
  this[1] = PVar11;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x24) = uVar9;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* PlantAdventureInfo::PlantAdventureInfo(PlantAdventureInfo&&) */

void __thiscall
PlantAdventureInfo::PlantAdventureInfo(PlantAdventureInfo *this,PlantAdventureInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PlantAdventureInfo PVar10;
  PlantAdventureInfo PVar11;
  
  PVar10 = *param_1;
  PVar11 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *this = PVar10;
  this[1] = PVar11;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x24) = uVar9;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  return;
}


/* PlantAdventureInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAdventureInfo&&) */

PlantAdventureInfo * __thiscall
PlantAdventureInfo::operator=(PlantAdventureInfo *this,PlantAdventureInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PlantAdventureInfo PVar10;
  PlantAdventureInfo PVar11;
  
  PVar10 = *param_1;
  PVar11 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *this = PVar10;
  this[1] = PVar11;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x24) = uVar9;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return this;
}


/* PlantAdventureInfo::TEMPNAMEPLACEHOLDERVALUE(PlantAdventureInfo const&) */

PlantAdventureInfo * __thiscall
PlantAdventureInfo::operator=(PlantAdventureInfo *this,PlantAdventureInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  PlantAdventureInfo PVar10;
  PlantAdventureInfo PVar11;
  
  PVar10 = *param_1;
  PVar11 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *this = PVar10;
  this[1] = PVar11;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar6;
  *(undefined4 *)(this + 0x1c) = uVar7;
  *(undefined4 *)(this + 0x20) = uVar8;
  *(undefined4 *)(this + 0x24) = uVar9;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  return this;
}

