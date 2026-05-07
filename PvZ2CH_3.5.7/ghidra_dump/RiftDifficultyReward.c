// Class: RiftDifficultyReward


/* RiftDifficultyReward::~RiftDifficultyReward() */

void __thiscall RiftDifficultyReward::~RiftDifficultyReward(RiftDifficultyReward *this)

{
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)(this + 0x40));
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)(this + 0x20));
  RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)this);
  return;
}


/* RiftDifficultyReward::TEMPNAMEPLACEHOLDERVALUE(RiftDifficultyReward const&) */

RiftDifficultyReward * __thiscall
RiftDifficultyReward::operator=(RiftDifficultyReward *this,RiftDifficultyReward *param_1)

{
  RiftDifficultyInfo::operator=((RiftDifficultyInfo *)this,(RiftDifficultyInfo *)param_1);
  RiftDifficultyInfo::operator=
            ((RiftDifficultyInfo *)(this + 0x20),(RiftDifficultyInfo *)(param_1 + 0x20));
  RiftDifficultyInfo::operator=
            ((RiftDifficultyInfo *)(this + 0x40),(RiftDifficultyInfo *)(param_1 + 0x40));
  return this;
}


/* RiftDifficultyReward::RiftDifficultyReward(RiftDifficultyReward const&) */

void __thiscall
RiftDifficultyReward::RiftDifficultyReward(RiftDifficultyReward *this,RiftDifficultyReward *param_1)

{
  RiftDifficultyInfo::RiftDifficultyInfo((RiftDifficultyInfo *)this,(RiftDifficultyInfo *)param_1);
  RiftDifficultyInfo::RiftDifficultyInfo
            ((RiftDifficultyInfo *)(this + 0x20),(RiftDifficultyInfo *)(param_1 + 0x20));
  RiftDifficultyInfo::RiftDifficultyInfo
            ((RiftDifficultyInfo *)(this + 0x40),(RiftDifficultyInfo *)(param_1 + 0x40));
  return;
}


/* RiftDifficultyReward::RiftDifficultyReward() */

void __thiscall RiftDifficultyReward::RiftDifficultyReward(RiftDifficultyReward *this)

{
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)this);
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)(this + 0x20));
  ChristmasProtectInfo::ChristmasProtectInfo((ChristmasProtectInfo *)(this + 0x40));
  return;
}


/* RiftDifficultyReward::RiftDifficultyReward(RiftDifficultyReward&&) */

void __thiscall
RiftDifficultyReward::RiftDifficultyReward(RiftDifficultyReward *this,RiftDifficultyReward *param_1)

{
  PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)this,(PlantWarsLeaderBoardBonusData *)param_1);
  PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)(this + 0x20),
             (PlantWarsLeaderBoardBonusData *)(param_1 + 0x20));
  PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)(this + 0x40),
             (PlantWarsLeaderBoardBonusData *)(param_1 + 0x40));
  return;
}

