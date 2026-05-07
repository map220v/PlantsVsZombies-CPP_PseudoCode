// Class: ValidateDamageInfoData


/* ValidateDamageInfoData::ValidateDamageInfoData() */

void __thiscall ValidateDamageInfoData::ValidateDamageInfoData(ValidateDamageInfoData *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* ValidateDamageInfoData::ValidateDamageInfoData(int, int, float) */

void __thiscall
ValidateDamageInfoData::ValidateDamageInfoData
          (ValidateDamageInfoData *this,int param_1,int param_2,float param_3)

{
  *(float *)(this + 8) = param_3;
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

