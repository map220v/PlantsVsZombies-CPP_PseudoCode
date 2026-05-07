// Class: SpecialWaveData


/* SpecialWaveData::SpecialWaveData(int, float, float, bool) */

void __thiscall
SpecialWaveData::SpecialWaveData
          (SpecialWaveData *this,int param_1,float param_2,float param_3,bool param_4)

{
  *(float *)(this + 4) = param_2;
  *(int *)this = param_1;
  this[0xc] = (SpecialWaveData)param_4;
  *(float *)(this + 8) = param_3;
  return;
}


/* SpecialWaveData::SpecialWaveData() */

void __thiscall SpecialWaveData::SpecialWaveData(SpecialWaveData *this)

{
  *(undefined4 *)this = 0;
  this[0xc] = (SpecialWaveData)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0x3f800000;
  return;
}

