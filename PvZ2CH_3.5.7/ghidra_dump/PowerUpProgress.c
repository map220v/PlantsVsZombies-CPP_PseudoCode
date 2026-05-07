// Class: PowerUpProgress


/* PowerUpProgress::IsEqual(PowerUpProgress const&) const */

bool __thiscall PowerUpProgress::IsEqual(PowerUpProgress *this,PowerUpProgress *param_1)

{
  return *(long *)(param_1 + 8) == *(long *)(this + 8);
}


/* PowerUpProgress::PowerUpProgress(PowerUpProgress&&) */

void __thiscall PowerUpProgress::PowerUpProgress(PowerUpProgress *this,PowerUpProgress *param_1)

{
  IArcadeProgressData<PowerUpProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpProgress> *)this,(IArcadeProgressData *)param_1);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined ***)this = &PTR_nop_06611d80;
  return;
}


/* PowerUpProgress::MakeDelta(PowerUpProgress const&) const */

PowerUpProgress * PowerUpProgress::MakeDelta(PowerUpProgress *param_1)

{
  PowerUpProgress *in_x1;
  PowerUpProgress *in_x8;
  
  PowerUpProgress(in_x8,in_x1);
  return in_x8;
}


/* PowerUpProgress::PowerUpProgress() */

void __thiscall PowerUpProgress::PowerUpProgress(PowerUpProgress *this)

{
  IArcadeProgressData<PowerUpProgress>::IArcadeProgressData
            ((IArcadeProgressData<PowerUpProgress> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR_nop_06611d80;
  return;
}


/* PowerUpProgress::TEMPNAMEPLACEHOLDERVALUE(PowerUpProgress const&) */

PowerUpProgress * __thiscall
PowerUpProgress::operator=(PowerUpProgress *this,PowerUpProgress *param_1)

{
  FUN_032fe478(this,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}


/* PowerUpProgress::TEMPNAMEPLACEHOLDERVALUE(PowerUpProgress&&) */

PowerUpProgress * __thiscall
PowerUpProgress::operator=(PowerUpProgress *this,PowerUpProgress *param_1)

{
  FUN_0365a658(this,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

