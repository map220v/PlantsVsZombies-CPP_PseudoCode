// Class: CreatureConditionTracker


/* CreatureConditionTracker::GetDrawScale() */

undefined4 __thiscall CreatureConditionTracker::GetDrawScale(CreatureConditionTracker *this)

{
  EntityConditionTracker<Creature,CreatureConditions>::computeCachedValues
            ((EntityConditionTracker<Creature,CreatureConditions> *)this);
  return *(undefined4 *)(this + 0x78);
}


/* CreatureConditionTracker::CreatureConditionTracker() */

void __thiscall CreatureConditionTracker::CreatureConditionTracker(CreatureConditionTracker *this)

{
  int iVar1;
  
  iVar1 = EA::Text::PolygonFont::GetFontType();
  EntityConditionTracker<Creature,CreatureConditions>::EntityConditionTracker
            ((EntityConditionTracker<Creature,CreatureConditions> *)this,iVar1);
  *(undefined ***)this = &PTR__CreatureConditionTracker_06903270;
  return;
}


/* CreatureConditionTracker::~CreatureConditionTracker() */

void __thiscall CreatureConditionTracker::~CreatureConditionTracker(CreatureConditionTracker *this)

{
  *(undefined ***)this = &PTR__CreatureConditionTracker_06903270;
  EntityConditionTracker<Creature,CreatureConditions>::~EntityConditionTracker
            ((EntityConditionTracker<Creature,CreatureConditions> *)this);
  return;
}


/* CreatureConditionTracker::~CreatureConditionTracker() */

void __thiscall CreatureConditionTracker::~CreatureConditionTracker(CreatureConditionTracker *this)

{
  ~CreatureConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* CreatureConditionTracker::SetAdditionalValue(CreatureConditions, float) */

void __thiscall
CreatureConditionTracker::SetAdditionalValue
          (undefined4 param_1,CreatureConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_04815828(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  return;
}


/* CreatureConditionTracker::recomputeSpeed(bool) */

void __thiscall
CreatureConditionTracker::recomputeSpeed(CreatureConditionTracker *this,bool param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (!param_1) {
    fVar3 = 1.0;
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::HasCondition
                      ((EntityConditionTracker<Creature,CreatureConditions> *)this,3);
    if (cVar1 != '\0') {
      lVar2 = FUN_04815828(*(undefined8 *)(this + 0x20),3);
      fVar3 = *(float *)(lVar2 + 0xc);
      if (fVar3 <= 0.0) {
        fVar3 = 1.0;
      }
    }
    cVar1 = EntityConditionTracker<Creature,CreatureConditions>::HasCondition
                      ((EntityConditionTracker<Creature,CreatureConditions> *)this,0);
    if (cVar1 != '\0') {
      fVar3 = fVar3 + fVar3;
    }
  }
  *(float *)(this + 0x38) = fVar3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureConditionTracker::recomputeScaleAndColor() */

void __thiscall CreatureConditionTracker::recomputeScaleAndColor(CreatureConditionTracker *this)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x4c) = local_18;
  *(undefined8 *)(this + 0x54) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x5c) = local_18;
  *(undefined8 *)(this + 100) = uStack_10;
  uVar1 = EntityModifierToFlag(0x10);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,false);
  uVar1 = EntityModifierToFlag(8);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreatureConditionTracker::recomputeModifierValues() */

void __thiscall CreatureConditionTracker::recomputeModifierValues(CreatureConditionTracker *this)

{
  uint uVar1;
  
  recomputeSpeed(this,false);
  uVar1 = EntityModifierToFlag(2);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,false);
  uVar1 = EntityModifierToFlag(4);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar1,false);
  recomputeScaleAndColor(this);
  return;
}

