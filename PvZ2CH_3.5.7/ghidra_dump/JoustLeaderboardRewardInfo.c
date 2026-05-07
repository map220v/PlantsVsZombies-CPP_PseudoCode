// Class: JoustLeaderboardRewardInfo


/* JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo() */

void __thiscall
JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo(JoustLeaderboardRewardInfo *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo() */

void __thiscall
JoustLeaderboardRewardInfo::~JoustLeaderboardRewardInfo(JoustLeaderboardRewardInfo *this)

{
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::~vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 8));
  return;
}


/* JoustLeaderboardRewardInfo::TEMPNAMEPLACEHOLDERVALUE(JoustLeaderboardRewardInfo const&) */

JoustLeaderboardRewardInfo * __thiscall
JoustLeaderboardRewardInfo::operator=
          (JoustLeaderboardRewardInfo *this,JoustLeaderboardRewardInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo(JoustLeaderboardRewardInfo const&) */

void __thiscall
JoustLeaderboardRewardInfo::JoustLeaderboardRewardInfo
          (JoustLeaderboardRewardInfo *this,JoustLeaderboardRewardInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* JoustLeaderboardRewardInfo::TEMPNAMEPLACEHOLDERVALUE(JoustLeaderboardRewardInfo&&) */

JoustLeaderboardRewardInfo * __thiscall
JoustLeaderboardRewardInfo::operator=
          (JoustLeaderboardRewardInfo *this,JoustLeaderboardRewardInfo *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::operator=
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

