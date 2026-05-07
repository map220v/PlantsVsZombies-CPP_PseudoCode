// Class: NewPVPGameEventPositionData


/* NewPVPGameEventPositionData::NewPVPGameEventPositionData(NewPVPGameEventPositionData::PositionType,
   float, float) */

void __thiscall
NewPVPGameEventPositionData::NewPVPGameEventPositionData
          (undefined4 param_1,undefined4 param_2,NewPVPGameEventPositionData *this,
          undefined4 param_4)

{
  *(undefined4 *)(this + 4) = param_1;
  *(undefined4 *)this = param_4;
  *(undefined4 *)(this + 8) = param_2;
  return;
}

