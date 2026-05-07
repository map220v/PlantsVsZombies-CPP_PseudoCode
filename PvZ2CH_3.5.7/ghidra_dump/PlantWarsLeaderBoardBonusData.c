// Class: PlantWarsLeaderBoardBonusData


/* PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData(PlantWarsLeaderBoardBonusData&&) */

void __thiscall
PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
          (PlantWarsLeaderBoardBonusData *this,PlantWarsLeaderBoardBonusData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* PlantWarsLeaderBoardBonusData::~PlantWarsLeaderBoardBonusData() */

void __thiscall
PlantWarsLeaderBoardBonusData::~PlantWarsLeaderBoardBonusData(PlantWarsLeaderBoardBonusData *this)

{
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::~vector
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)(this + 8));
  return;
}


/* PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData(PlantWarsLeaderBoardBonusData
   const&) */

void __thiscall
PlantWarsLeaderBoardBonusData::PlantWarsLeaderBoardBonusData
          (PlantWarsLeaderBoardBonusData *this,PlantWarsLeaderBoardBonusData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::vector
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return;
}


/* PlantWarsLeaderBoardBonusData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsLeaderBoardBonusData const&) */

PlantWarsLeaderBoardBonusData * __thiscall
PlantWarsLeaderBoardBonusData::operator=
          (PlantWarsLeaderBoardBonusData *this,PlantWarsLeaderBoardBonusData *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>>::operator=
            ((vector<PlantWarsStarRewardData,std::allocator<PlantWarsStarRewardData>> *)(this + 8),
             (vector *)(param_1 + 8));
  return this;
}

