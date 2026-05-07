// Class: PlantWarsWorldData


/* PlantWarsWorldData::PlantWarsWorldData() */

void __thiscall PlantWarsWorldData::PlantWarsWorldData(PlantWarsWorldData *this)

{
  Set8BytesTo0();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x40));
  PlantWarsStarRewardData::PlantWarsStarRewardData((PlantWarsStarRewardData *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* PlantWarsWorldData::~PlantWarsWorldData() */

void __thiscall PlantWarsWorldData::~PlantWarsWorldData(PlantWarsWorldData *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x88));
  PlantWarsLeaderBoardData::~PlantWarsLeaderBoardData((PlantWarsLeaderBoardData *)(this + 0x60));
  PlantWarsLeaderBoardBonusData::~PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)(this + 0x40));
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::~vector
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)
             (this + 0x28));
  std::vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>>::~vector
            ((vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>> *)(this + 0x10));
  std::string::~string((string *)this);
  return;
}


/* PlantWarsWorldData::PlantWarsWorldData(PlantWarsWorldData const&) */

void __thiscall
PlantWarsWorldData::PlantWarsWorldData(PlantWarsWorldData *this,PlantWarsWorldData *param_1)

{
  FUN_05475d88();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>>::vector
            ((vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::vector
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)(this + 0x40),
             (PlantWarsLeaderBoardBonusData *)(param_1 + 0x40));
  PlantWarsLeaderBoardData::PlantWarsLeaderBoardData
            ((PlantWarsLeaderBoardData *)(this + 0x60),(PlantWarsLeaderBoardData *)(param_1 + 0x60))
  ;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x88),(vector *)(param_1 + 0x88));
  return;
}


/* PlantWarsWorldData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsWorldData const&) */

PlantWarsWorldData * __thiscall
PlantWarsWorldData::operator=(PlantWarsWorldData *this,PlantWarsWorldData *param_1)

{
  thunk_FUN_05475e00();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>>::operator=
            ((vector<PlantWarsLevelData,std::allocator<PlantWarsLevelData>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::operator=
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  PlantWarsLeaderBoardBonusData::operator=
            ((PlantWarsLeaderBoardBonusData *)(this + 0x40),
             (PlantWarsLeaderBoardBonusData *)(param_1 + 0x40));
  PlantWarsLeaderBoardData::operator=
            ((PlantWarsLeaderBoardData *)(this + 0x60),(PlantWarsLeaderBoardData *)(param_1 + 0x60))
  ;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x88),(vector *)(param_1 + 0x88));
  return this;
}


/* PlantWarsWorldData::PlantWarsWorldData(PlantWarsWorldData&&) */

void __thiscall
PlantWarsWorldData::PlantWarsWorldData(PlantWarsWorldData *this,PlantWarsWorldData *param_1)

{
  FUN_05474148();
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x28),(vector *)(param_1 + 0x28));
  PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
            ((PlantWarsLeaderBoardBonusData *)(this + 0x40),
             (PlantWarsLeaderBoardBonusData *)(param_1 + 0x40));
  PlantWarsLeaderBoardData::PlantWarsLeaderBoardData
            ((PlantWarsLeaderBoardData *)(this + 0x60),(PlantWarsLeaderBoardData *)(param_1 + 0x60))
  ;
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x88),(vector *)(param_1 + 0x88));
  return;
}

