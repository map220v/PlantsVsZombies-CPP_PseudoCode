// Class: PlantWarsLeaderBoardLineData


/* PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData() */

void __thiscall
PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData(PlantWarsLeaderBoardLineData *this)

{
  Set8BytesTo0(this + 0x10);
  return;
}


/* PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData(PlantWarsLeaderBoardLineData const&)
    */

void __thiscall
PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
          (PlantWarsLeaderBoardLineData *this,PlantWarsLeaderBoardLineData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  return;
}


/* PlantWarsLeaderBoardLineData::TEMPNAMEPLACEHOLDERVALUE(PlantWarsLeaderBoardLineData const&) */

PlantWarsLeaderBoardLineData * __thiscall
PlantWarsLeaderBoardLineData::operator=
          (PlantWarsLeaderBoardLineData *this,PlantWarsLeaderBoardLineData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  thunk_FUN_05475e00(this + 0x10,param_1 + 0x10);
  return this;
}


/* PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData(PlantWarsLeaderBoardLineData&&) */

void __thiscall
PlantWarsLeaderBoardLineData::PlantWarsLeaderBoardLineData
          (PlantWarsLeaderBoardLineData *this,PlantWarsLeaderBoardLineData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  return;
}

