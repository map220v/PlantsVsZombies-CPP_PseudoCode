// Class: HeroPlantSaveInfo


/* HeroPlantSaveInfo::~HeroPlantSaveInfo() */

void __thiscall HeroPlantSaveInfo::~HeroPlantSaveInfo(HeroPlantSaveInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


void __thiscall HeroPlantSaveInfo::~HeroPlantSaveInfo(HeroPlantSaveInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


void __thiscall HeroPlantSaveInfo::~HeroPlantSaveInfo(HeroPlantSaveInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


void __thiscall HeroPlantSaveInfo::~HeroPlantSaveInfo(HeroPlantSaveInfo *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}


/* HeroPlantSaveInfo::HeroPlantSaveInfo() */

void __thiscall HeroPlantSaveInfo::HeroPlantSaveInfo(HeroPlantSaveInfo *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* HeroPlantSaveInfo::TEMPNAMEPLACEHOLDERVALUE(HeroPlantSaveInfo const&) */

HeroPlantSaveInfo * __thiscall
HeroPlantSaveInfo::operator=(HeroPlantSaveInfo *this,HeroPlantSaveInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x10),(vector *)(param_1 + 0x10));
  return this;
}

