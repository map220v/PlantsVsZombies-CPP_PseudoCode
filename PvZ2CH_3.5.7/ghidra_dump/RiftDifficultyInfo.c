// Class: RiftDifficultyInfo


/* RiftDifficultyInfo::~RiftDifficultyInfo() */

void __thiscall RiftDifficultyInfo::~RiftDifficultyInfo(RiftDifficultyInfo *this)

{
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::~vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 8));
  return;
}


/* RiftDifficultyInfo::RiftDifficultyInfo(RiftDifficultyInfo const&) */

void __thiscall
RiftDifficultyInfo::RiftDifficultyInfo(RiftDifficultyInfo *this,RiftDifficultyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* RiftDifficultyInfo::TEMPNAMEPLACEHOLDERVALUE(RiftDifficultyInfo const&) */

RiftDifficultyInfo * __thiscall
RiftDifficultyInfo::operator=(RiftDifficultyInfo *this,RiftDifficultyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

