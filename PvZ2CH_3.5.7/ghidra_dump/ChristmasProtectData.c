// Class: ChristmasProtectData


/* ChristmasProtectData::ChristmasProtectData() */

void __thiscall ChristmasProtectData::ChristmasProtectData(ChristmasProtectData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 3;
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::clear
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x10));
  return;
}


/* ChristmasProtectData::~ChristmasProtectData() */

void __thiscall ChristmasProtectData::~ChristmasProtectData(ChristmasProtectData *this)

{
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::~vector
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x10));
  return;
}

