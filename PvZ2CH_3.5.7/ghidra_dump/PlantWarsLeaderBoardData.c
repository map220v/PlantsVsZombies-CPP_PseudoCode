// Class: PlantWarsLeaderBoardData


/* PlantWarsLeaderBoardData::PlantWarsLeaderBoardData(PlantWarsLeaderBoardData&&) */

void __thiscall
PlantWarsLeaderBoardData::PlantWarsLeaderBoardData
          (PlantWarsLeaderBoardData *this,PlantWarsLeaderBoardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* PlantWarsLeaderBoardData::~PlantWarsLeaderBoardData() */

void __thiscall PlantWarsLeaderBoardData::~PlantWarsLeaderBoardData(PlantWarsLeaderBoardData *this)

{
  std::vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>>::~vector
            ((vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>> *)
             (this + 8));
  return;
}


/* PlantWarsLeaderBoardData::PlantWarsLeaderBoardData(PlantWarsLeaderBoardData const&) */

void __thiscall
PlantWarsLeaderBoardData::PlantWarsLeaderBoardData
          (PlantWarsLeaderBoardData *this,PlantWarsLeaderBoardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>>::vector
            ((vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>> *)
             (this + 8),(vector *)(param_1 + 8));
  return;
}


/* PlantWarsLeaderBoardData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsLeaderBoardData const&) */

PlantWarsLeaderBoardData * __thiscall
PlantWarsLeaderBoardData::operator=
          (PlantWarsLeaderBoardData *this,PlantWarsLeaderBoardData *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  std::vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>>::operator=
            ((vector<PlantWarsLeaderBoardLineData,std::allocator<PlantWarsLeaderBoardLineData>> *)
             (this + 8),(vector *)(param_1 + 8));
  return this;
}

