// Class: CustomWaveEvent


/* CustomWaveEvent::~CustomWaveEvent() */

void __thiscall CustomWaveEvent::~CustomWaveEvent(CustomWaveEvent *this)

{
  Sexy::SharedRenderTarget::Pool::Entry::~Entry((Entry *)(this + 0x80));
  CustomWaveEventFrostWind::~CustomWaveEventFrostWind((CustomWaveEventFrostWind *)(this + 0x60));
  PakRecord::~PakRecord((PakRecord *)(this + 0x40));
  GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData
            ((GridItemCardGameZombieActionData *)(this + 0x28));
  WorldResourceLoadState::~WorldResourceLoadState((WorldResourceLoadState *)this);
  return;
}


/* CustomWaveEvent::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEvent&&) */

CustomWaveEvent * __thiscall
CustomWaveEvent::operator=(CustomWaveEvent *this,CustomWaveEvent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  CustomWaveEventSandStorm::operator=
            ((CustomWaveEventSandStorm *)this,(CustomWaveEventSandStorm *)param_1);
  PlacementInfo::operator=((PlacementInfo *)(this + 0x28),(PlacementInfo *)(param_1 + 0x28));
  TowerDefendRoadInfo::operator=
            ((TowerDefendRoadInfo *)(this + 0x40),(TowerDefendRoadInfo *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar2;
  CustomWaveEventFrostWind::operator=
            ((CustomWaveEventFrostWind *)(this + 0x60),(CustomWaveEventFrostWind *)(param_1 + 0x60))
  ;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x78) = uVar1;
  CustomWaveEventSummonZombie::operator=
            ((CustomWaveEventSummonZombie *)(this + 0x80),
             (CustomWaveEventSummonZombie *)(param_1 + 0x80));
  return this;
}


/* CustomWaveEvent::CustomWaveEvent() */

void __thiscall CustomWaveEvent::CustomWaveEvent(CustomWaveEvent *this)

{
  CustomWaveEventSandStorm::CustomWaveEventSandStorm((CustomWaveEventSandStorm *)this);
  PlacementInfo::PlacementInfo((PlacementInfo *)(this + 0x28));
  EvilDavePlantEntry::EvilDavePlantEntry((EvilDavePlantEntry *)(this + 0x40));
  CustomWaveEventDinoRun::CustomWaveEventDinoRun((CustomWaveEventDinoRun *)(this + 0x50));
  Sexy::LeaderboardEntry::FieldData::FieldData((FieldData *)(this + 0x58));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x60));
  Sexy::LeaderboardEntry::FieldData::FieldData((FieldData *)(this + 0x78));
  Sexy::LeaderboardEntry::FieldData::FieldData((FieldData *)(this + 0x7c));
  CustomWaveEventSummonZombie::CustomWaveEventSummonZombie
            ((CustomWaveEventSummonZombie *)(this + 0x80));
  return;
}


/* CustomWaveEvent::CustomWaveEvent(CustomWaveEvent const&) */

void __thiscall CustomWaveEvent::CustomWaveEvent(CustomWaveEvent *this,CustomWaveEvent *param_1)

{
  undefined4 uVar1;
  
  CustomWaveEventSandStorm::CustomWaveEventSandStorm
            ((CustomWaveEventSandStorm *)this,(CustomWaveEventSandStorm *)param_1);
  PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
            ((PlantWarsLeaderBoardLineData *)(this + 0x28),
             (PlantWarsLeaderBoardLineData *)(param_1 + 0x28));
  AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory
            ((AutumnHarvestLotteryHistory *)(this + 0x40),
             (AutumnHarvestLotteryHistory *)(param_1 + 0x40));
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = uVar1;
  CustomWaveEventFrostWind::CustomWaveEventFrostWind
            ((CustomWaveEventFrostWind *)(this + 0x60),(CustomWaveEventFrostWind *)(param_1 + 0x60))
  ;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x78) = uVar1;
  CustomWaveEventSummonZombie::CustomWaveEventSummonZombie
            ((CustomWaveEventSummonZombie *)(this + 0x80),
             (CustomWaveEventSummonZombie *)(param_1 + 0x80));
  return;
}


/* CustomWaveEvent::CustomWaveEvent(CustomWaveEvent&&) */

void __thiscall CustomWaveEvent::CustomWaveEvent(CustomWaveEvent *this,CustomWaveEvent *param_1)

{
  undefined4 uVar1;
  
  NetworkfthShopContentData::NetworkfthShopContentData
            ((NetworkfthShopContentData *)this,(NetworkfthShopContentData *)param_1);
  PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
            ((PlantWarsLeaderBoardLineData *)(this + 0x28),
             (PlantWarsLeaderBoardLineData *)(param_1 + 0x28));
  AutumnHarvestLotteryHistory::AutumnHarvestLotteryHistory
            ((AutumnHarvestLotteryHistory *)(this + 0x40),
             (AutumnHarvestLotteryHistory *)(param_1 + 0x40));
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = uVar1;
  Sexy::PIInterpolator::PIInterpolator
            ((PIInterpolator *)(this + 0x60),(PIInterpolator *)(param_1 + 0x60));
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x78) = uVar1;
  CustomWaveEventSummonZombie::CustomWaveEventSummonZombie
            ((CustomWaveEventSummonZombie *)(this + 0x80),
             (CustomWaveEventSummonZombie *)(param_1 + 0x80));
  return;
}


/* CustomWaveEvent::TEMPNAMEPLACEHOLDERVALUE(CustomWaveEvent const&) */

CustomWaveEvent * __thiscall
CustomWaveEvent::operator=(CustomWaveEvent *this,CustomWaveEvent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  CustomWaveEventSandStorm::operator=
            ((CustomWaveEventSandStorm *)this,(CustomWaveEventSandStorm *)param_1);
  PlantWarsLeaderBoardLineData::operator=
            ((PlantWarsLeaderBoardLineData *)(this + 0x28),
             (PlantWarsLeaderBoardLineData *)(param_1 + 0x28));
  AutumnHarvestLotteryHistory::operator=
            ((AutumnHarvestLotteryHistory *)(this + 0x40),
             (AutumnHarvestLotteryHistory *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x50) = uVar2;
  CustomWaveEventFrostWind::operator=
            ((CustomWaveEventFrostWind *)(this + 0x60),(CustomWaveEventFrostWind *)(param_1 + 0x60))
  ;
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x78) = uVar1;
  CustomWaveEventSummonZombie::operator=
            ((CustomWaveEventSummonZombie *)(this + 0x80),
             (CustomWaveEventSummonZombie *)(param_1 + 0x80));
  return this;
}

