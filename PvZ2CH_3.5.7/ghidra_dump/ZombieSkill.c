// Class: ZombieSkill


/* ZombieSkill::ZombieSkill() */

void __thiscall ZombieSkill::ZombieSkill(ZombieSkill *this)

{
  undefined4 uVar1;
  
  ZombieSkillData::ZombieSkillData((ZombieSkillData *)this);
  this[0x10] = (ZombieSkill)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* ZombieSkill::ZombieSkill(ZombieSkillData const&) */

void __thiscall ZombieSkill::ZombieSkill(ZombieSkill *this,ZombieSkillData *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0x10] = (ZombieSkill)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}


/* ZombieSkill::GetSkillWeight() const */

undefined4 __thiscall ZombieSkill::GetSkillWeight(ZombieSkill *this)

{
  return *(undefined4 *)(this + 4);
}


/* ZombieSkill::ResetSkillTime() */

void __thiscall ZombieSkill::ResetSkillTime(ZombieSkill *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  this[0x10] = (ZombieSkill)0x0;
  *(float *)(this + 0xc) = fVar1 + *(float *)this;
  return;
}


/* ZombieSkill::UpdateSkillTime() */

void __thiscall ZombieSkill::UpdateSkillTime(ZombieSkill *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xc) < fVar1) {
    this[0x10] = (ZombieSkill)0x1;
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0xc) = uVar2;
  }
  return;
}

