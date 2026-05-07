// Class: RiftLeaderboardRewardInfo


/* RiftLeaderboardRewardInfo::RiftLeaderboardRewardInfo(RiftLeaderboardRewardInfo const&) */

void __thiscall
RiftLeaderboardRewardInfo::RiftLeaderboardRewardInfo
          (RiftLeaderboardRewardInfo *this,RiftLeaderboardRewardInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::vector
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* RiftLeaderboardRewardInfo::TEMPNAMEPLACEHOLDERVALUE(RiftLeaderboardRewardInfo const&) */

RiftLeaderboardRewardInfo * __thiscall
RiftLeaderboardRewardInfo::operator=
          (RiftLeaderboardRewardInfo *this,RiftLeaderboardRewardInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<RiftBonusInfo,std::allocator<RiftBonusInfo>>::operator=
            ((vector<RiftBonusInfo,std::allocator<RiftBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

