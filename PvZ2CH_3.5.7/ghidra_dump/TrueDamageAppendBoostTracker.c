// Class: TrueDamageAppendBoostTracker


/* TrueDamageAppendBoostTracker::TrueDamageAppendBoostTracker() */

void __thiscall
TrueDamageAppendBoostTracker::TrueDamageAppendBoostTracker(TrueDamageAppendBoostTracker *this)

{
  PlantBoostTracker::PlantBoostTracker((PlantBoostTracker *)this);
  *(undefined ***)this = &PTR_nop_066a6fa0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* TrueDamageAppendBoostTracker::InitData(float, float, float, float) */

void __thiscall
TrueDamageAppendBoostTracker::InitData
          (TrueDamageAppendBoostTracker *this,float param_1,float param_2,float param_3,
          float param_4)

{
  undefined4 uVar1;
  
  *(float *)(this + 0x10) = param_2;
  *(float *)(this + 0x14) = param_3;
  *(float *)(this + 0x18) = param_4;
  *(float *)(this + 0xc) = param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


/* TrueDamageAppendBoostTracker::Update(Plant*) */

void __thiscall
TrueDamageAppendBoostTracker::Update(TrueDamageAppendBoostTracker *this,Plant *param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar2) {
    fVar2 = (float)PVZ_T();
    fVar2 = (float)Sexy::SexyMath::Fabs(fVar2 - *(float *)(this + 0x20));
    if (1.0 < fVar2) {
      fVar2 = (float)Sexy::Rand(1.0);
      if (fVar2 < *(float *)(this + 0xc)) {
        lVar1 = Plant::ApplyCondition(*(undefined4 *)(this + 0x10),0,param_1,0x1c);
        *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(this + 0x18);
        fVar2 = (float)PVZ_T();
        *(float *)(this + 0x1c) = *(float *)(this + 0x10) + *(float *)(this + 0x14) + fVar2;
      }
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 0x20) = uVar3;
      return;
    }
  }
  return;
}

