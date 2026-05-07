// Class: CloudImageInfo


/* CloudImageInfo::CloudImageInfo() */

void __thiscall CloudImageInfo::CloudImageInfo(CloudImageInfo *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0x3f99999a;
  return;
}


/* CloudImageInfo::SetType(int) */

void __thiscall CloudImageInfo::SetType(CloudImageInfo *this,int param_1)

{
  long lVar1;
  CachedResourcePtr<Sexy::Image> *this_00;
  
  *(int *)(this + 8) = param_1;
  if (param_1 == 1) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad5320;
  }
  else if (param_1 == 2) {
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad53a0;
  }
  else {
    if (param_1 != 0) {
      return;
    }
    this_00 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad5280;
  }
  lVar1 = CachedResourcePtr<Sexy::Image>::operator->(this_00);
  *(float *)(this + 0x10) = (float)*(int *)(lVar1 + 0x38) * *(float *)(this + 0xc);
  return;
}


/* CloudImageInfo::Reset() */

void __thiscall CloudImageInfo::Reset(CloudImageInfo *this)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  iVar1 = Sexy::Rand(800);
  iVar1 = FUN_03cf8460(iVar1 + 1000);
  *(float *)this = (float)iVar1;
  iVar1 = Sexy::Rand(0x1c2);
  iVar1 = FUN_03cf8460(iVar1 + 100);
  fVar3 = (float)iVar1;
  *(float *)(this + 4) = fVar3;
  iVar1 = FUN_03cf8460(400);
  if ((float)iVar1 < fVar3) {
    fVar3 = (float)RandRangeFloat(1.4,1.8);
    *(float *)(this + 0x14) = fVar3 + 1.2;
  }
  else {
    iVar1 = FUN_03cf8460(0xfa);
    if ((float)iVar1 < fVar3) {
      fVar3 = (float)RandRangeFloat(0.8,1.2);
      *(float *)(this + 0x14) = fVar3 + 1.2;
    }
    else {
      fVar3 = (float)RandRangeFloat(0.1,0.4);
      *(float *)(this + 0x14) = fVar3 + 1.2;
    }
  }
  uVar2 = RandRangeFloat(0.6,1.2);
  *(undefined4 *)(this + 0xc) = uVar2;
  SetType(this,*(int *)(this + 8));
  return;
}


/* CloudImageInfo::Update() */

void __thiscall CloudImageInfo::Update(CloudImageInfo *this)

{
  float fVar1;
  
  fVar1 = *(float *)this;
  *(float *)this = fVar1 - *(float *)(this + 0x14);
  if (-*(float *)(this + 0x10) < fVar1 - *(float *)(this + 0x14)) {
    return;
  }
  Reset(this);
  return;
}

