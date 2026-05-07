// Class: stRewardInfo


/* stRewardInfo::~stRewardInfo() */

void __thiscall stRewardInfo::~stRewardInfo(stRewardInfo *this)

{
  std::vector<stAward,std::allocator<stAward>>::~vector
            ((vector<stAward,std::allocator<stAward>> *)(this + 0x18));
  std::vector<stAward,std::allocator<stAward>>::~vector
            ((vector<stAward,std::allocator<stAward>> *)this);
  return;
}

