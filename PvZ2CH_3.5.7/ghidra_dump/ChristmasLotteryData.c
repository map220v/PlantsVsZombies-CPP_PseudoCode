// Class: ChristmasLotteryData


/* ChristmasLotteryData::ChristmasLotteryData() */

void __thiscall ChristmasLotteryData::ChristmasLotteryData(ChristmasLotteryData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 99;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 5;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x10));
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::clear
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x28));
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::clear
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x40));
  return;
}


/* ChristmasLotteryData::~ChristmasLotteryData() */

void __thiscall ChristmasLotteryData::~ChristmasLotteryData(ChristmasLotteryData *this)

{
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::~vector
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x40));
  std::vector<GachaRewardItem,std::allocator<GachaRewardItem>>::~vector
            ((vector<GachaRewardItem,std::allocator<GachaRewardItem>> *)(this + 0x28));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x10));
  return;
}

