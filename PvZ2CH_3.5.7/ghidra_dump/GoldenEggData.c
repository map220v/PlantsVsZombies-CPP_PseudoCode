// Class: GoldenEggData


/* GoldenEggData::GoldenEggData() */

void __thiscall GoldenEggData::GoldenEggData(GoldenEggData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<GoldenEggProbility,std::allocator<GoldenEggProbility>>::clear
            ((vector<GoldenEggProbility,std::allocator<GoldenEggProbility>> *)(this + 0x38));
  return;
}


/* GoldenEggData::~GoldenEggData() */

void __thiscall GoldenEggData::~GoldenEggData(GoldenEggData *this)

{
  std::vector<GoldenEggProbility,std::allocator<GoldenEggProbility>>::~vector
            ((vector<GoldenEggProbility,std::allocator<GoldenEggProbility>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  return;
}

