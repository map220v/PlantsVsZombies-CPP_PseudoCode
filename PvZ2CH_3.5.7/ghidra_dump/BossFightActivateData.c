// Class: BossFightActivateData


/* BossFightActivateData::BossFightActivateData() */

void __thiscall BossFightActivateData::BossFightActivateData(BossFightActivateData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* BossFightActivateData::~BossFightActivateData() */

void __thiscall BossFightActivateData::~BossFightActivateData(BossFightActivateData *this)

{
  std::vector<BossFightBonus,std::allocator<BossFightBonus>>::~vector
            ((vector<BossFightBonus,std::allocator<BossFightBonus>> *)(this + 0x20));
  std::vector<BossLevel,std::allocator<BossLevel>>::~vector
            ((vector<BossLevel,std::allocator<BossLevel>> *)(this + 8));
  return;
}

