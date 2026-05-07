// Class: ChristmasAccessoryData


/* ChristmasAccessoryData::ChristmasAccessoryData() */

void __thiscall ChristmasAccessoryData::ChristmasAccessoryData(ChristmasAccessoryData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* ChristmasAccessoryData::~ChristmasAccessoryData() */

void __thiscall ChristmasAccessoryData::~ChristmasAccessoryData(ChristmasAccessoryData *this)

{
  std::vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>>::~vector
            ((vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>> *)
             (this + 0x50));
  std::vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>>::~vector
            ((vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>> *)
             (this + 0x38));
  std::vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>>::~vector
            ((vector<ChristmasAccessoryBonus,std::allocator<ChristmasAccessoryBonus>> *)
             (this + 0x20));
  return;
}

