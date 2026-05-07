// Class: GoldenEggInfo


/* GoldenEggInfo::~GoldenEggInfo() */

void __thiscall GoldenEggInfo::~GoldenEggInfo(GoldenEggInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  return;
}


/* GoldenEggInfo::GoldenEggInfo() */

void __thiscall GoldenEggInfo::GoldenEggInfo(GoldenEggInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *this = (GoldenEggInfo)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x38));
  return;
}


/* GoldenEggInfo::GoldenEggInfo(GoldenEggInfo const&) */

void __thiscall GoldenEggInfo::GoldenEggInfo(GoldenEggInfo *this,GoldenEggInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GoldenEggInfo GVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  GVar7 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *this = GVar7;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar1;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  return;
}


/* GoldenEggInfo::TEMPNAMEPLACEHOLDERVALUE(GoldenEggInfo const&) */

GoldenEggInfo * __thiscall GoldenEggInfo::operator=(GoldenEggInfo *this,GoldenEggInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  GoldenEggInfo GVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  GVar7 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *this = GVar7;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar1;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x38),(vector *)(param_1 + 0x38));
  return this;
}

