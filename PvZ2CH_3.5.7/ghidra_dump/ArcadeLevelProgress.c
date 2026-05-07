// Class: ArcadeLevelProgress


/* ArcadeLevelProgress::IsEqual(ArcadeLevelProgress const&) const */

bool __thiscall ArcadeLevelProgress::IsEqual(ArcadeLevelProgress *this,ArcadeLevelProgress *param_1)

{
  if (*(long *)(param_1 + 8) != *(long *)(this + 8)) {
    return false;
  }
  return *(int *)(param_1 + 0x10) == *(int *)(this + 0x10);
}


/* ArcadeLevelProgress::ArcadeLevelProgress(ArcadeLevelProgress&&) */

void __thiscall
ArcadeLevelProgress::ArcadeLevelProgress(ArcadeLevelProgress *this,ArcadeLevelProgress *param_1)

{
  undefined4 uVar1;
  
  IArcadeProgressData<ArcadeLevelProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadeLevelProgress> *)this,(IArcadeProgressData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR_nop_06611d20;
  return;
}


/* ArcadeLevelProgress::MakeDelta(ArcadeLevelProgress const&) const */

ArcadeLevelProgress * ArcadeLevelProgress::MakeDelta(ArcadeLevelProgress *param_1)

{
  ArcadeLevelProgress *in_x1;
  ArcadeLevelProgress *in_x8;
  
  ArcadeLevelProgress(in_x8,in_x1);
  return in_x8;
}


/* ArcadeLevelProgress::ArcadeLevelProgress() */

void __thiscall ArcadeLevelProgress::ArcadeLevelProgress(ArcadeLevelProgress *this)

{
  IArcadeProgressData<ArcadeLevelProgress>::IArcadeProgressData
            ((IArcadeProgressData<ArcadeLevelProgress> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_nop_06611d20;
  return;
}


/* ArcadeLevelProgress::TEMPNAMEPLACEHOLDERVALUE(ArcadeLevelProgress const&) */

ArcadeLevelProgress * __thiscall
ArcadeLevelProgress::operator=(ArcadeLevelProgress *this,ArcadeLevelProgress *param_1)

{
  undefined4 uVar1;
  
  FUN_032fe470(this,*(undefined4 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}


/* ArcadeLevelProgress::TEMPNAMEPLACEHOLDERVALUE(ArcadeLevelProgress&&) */

ArcadeLevelProgress * __thiscall
ArcadeLevelProgress::operator=(ArcadeLevelProgress *this,ArcadeLevelProgress *param_1)

{
  undefined4 uVar1;
  
  FUN_0365a648(this,*(undefined4 *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = uVar1;
  return this;
}

