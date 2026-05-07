// Class: RiftBossReward


/* RiftBossReward::~RiftBossReward() */

void __thiscall RiftBossReward::~RiftBossReward(RiftBossReward *this)

{
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x48));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x30));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x18));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)this);
  return;
}


/* RiftBossReward::TEMPNAMEPLACEHOLDERVALUE(RiftBossReward const&) */

RiftBossReward * __thiscall RiftBossReward::operator=(RiftBossReward *this,RiftBossReward *param_1)

{
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)this,(vector *)param_1);
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  return this;
}

