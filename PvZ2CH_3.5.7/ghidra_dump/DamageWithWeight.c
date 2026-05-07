// Class: DamageWithWeight


/* DamageWithWeight::DamageWithWeight() */

void __thiscall DamageWithWeight::DamageWithWeight(DamageWithWeight *this)

{
  *(undefined4 *)this = 100;
  *(undefined4 *)(this + 4) = 1;
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 8));
  return;
}


/* DamageWithWeight::DamageWithWeight(DamageWithWeight const&) */

void __thiscall DamageWithWeight::DamageWithWeight(DamageWithWeight *this,DamageWithWeight *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 8),(DamageInfoProps *)(param_1 + 8));
  return;
}


/* DamageWithWeight::TEMPNAMEPLACEHOLDERVALUE(DamageWithWeight const&) */

DamageWithWeight * __thiscall
DamageWithWeight::operator=(DamageWithWeight *this,DamageWithWeight *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar1;
  DamageInfoProps::operator=((DamageInfoProps *)(this + 8),(DamageInfoProps *)(param_1 + 8));
  return this;
}


/* DamageWithWeight::~DamageWithWeight() */

void __thiscall DamageWithWeight::~DamageWithWeight(DamageWithWeight *this)

{
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 8));
  return;
}

