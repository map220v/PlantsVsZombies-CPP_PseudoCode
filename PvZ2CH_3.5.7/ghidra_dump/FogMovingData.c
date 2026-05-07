// Class: FogMovingData


/* FogMovingData::FogMovingData() */

void __thiscall FogMovingData::FogMovingData(FogMovingData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}


/* FogMovingData::FogMovingData(int, float, int, int) */

void __thiscall
FogMovingData::FogMovingData(FogMovingData *this,int param_1,float param_2,int param_3,int param_4)

{
  *(float *)(this + 4) = param_2;
  *(int *)this = param_1;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}

