// Class: RedPacketRankRewardInfo


/* RedPacketRankRewardInfo::~RedPacketRankRewardInfo() */

void __thiscall RedPacketRankRewardInfo::~RedPacketRankRewardInfo(RedPacketRankRewardInfo *this)

{
  std::vector<RankRewardEntity,std::allocator<RankRewardEntity>>::~vector
            ((vector<RankRewardEntity,std::allocator<RankRewardEntity>> *)(this + 8));
  return;
}


/* RedPacketRankRewardInfo::RedPacketRankRewardInfo(RedPacketRankRewardInfo&&) */

void __thiscall
RedPacketRankRewardInfo::RedPacketRankRewardInfo
          (RedPacketRankRewardInfo *this,RedPacketRankRewardInfo *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* RedPacketRankRewardInfo::RedPacketRankRewardInfo(RedPacketRankRewardInfo const&) */

void __thiscall
RedPacketRankRewardInfo::RedPacketRankRewardInfo
          (RedPacketRankRewardInfo *this,RedPacketRankRewardInfo *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<RankRewardEntity,std::allocator<RankRewardEntity>>::vector
            ((vector<RankRewardEntity,std::allocator<RankRewardEntity>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* RedPacketRankRewardInfo::TEMPNAMEPLACEHOLDERVALUE(RedPacketRankRewardInfo const&) */

RedPacketRankRewardInfo * __thiscall
RedPacketRankRewardInfo::operator=(RedPacketRankRewardInfo *this,RedPacketRankRewardInfo *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  std::vector<RankRewardEntity,std::allocator<RankRewardEntity>>::operator=
            ((vector<RankRewardEntity,std::allocator<RankRewardEntity>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}


/* RedPacketRankRewardInfo::RedPacketRankRewardInfo() */

void __thiscall RedPacketRankRewardInfo::RedPacketRankRewardInfo(RedPacketRankRewardInfo *this)

{
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}

