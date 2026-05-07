// Class: RandomRewardData


/* RandomRewardData::TEMPNAMEPLACEHOLDERVALUE(RandomRewardData const&) */

RandomRewardData * __thiscall
RandomRewardData::operator=(RandomRewardData *this,RandomRewardData *param_1)

{
  AutumnHarvestRewardPlayerData::operator=
            ((AutumnHarvestRewardPlayerData *)this,(AutumnHarvestRewardPlayerData *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


/* RandomRewardData::RandomRewardData(RandomRewardData const&) */

void __thiscall RandomRewardData::RandomRewardData(RandomRewardData *this,RandomRewardData *param_1)

{
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)this,(GroupInfo *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}


/* RandomRewardData::RandomRewardData() */

void __thiscall RandomRewardData::RandomRewardData(RandomRewardData *this)

{
  GridItemCardGameTowerGenerateData::GridItemCardGameTowerGenerateData
            ((GridItemCardGameTowerGenerateData *)this);
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


/* RandomRewardData::RandomRewardData(RandomRewardData&&) */

void __thiscall RandomRewardData::RandomRewardData(RandomRewardData *this,RandomRewardData *param_1)

{
  Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)this,(GroupInfo *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return;
}

