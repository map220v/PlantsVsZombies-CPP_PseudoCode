// Class: GridItemConditionTracker


/* GridItemConditionTracker::getConditionMaxCount() const */

undefined8 GridItemConditionTracker::getConditionMaxCount(void)

{
  return 9;
}


/* GridItemConditionTracker::GridItemConditionTracker() */

void __thiscall GridItemConditionTracker::GridItemConditionTracker(GridItemConditionTracker *this)

{
  int iVar1;
  
  iVar1 = getConditionMaxCount();
  EntityConditionTracker<GridItem,GridItemConditions>::EntityConditionTracker
            ((EntityConditionTracker<GridItem,GridItemConditions> *)this,iVar1);
  *(undefined ***)this = &PTR__GridItemConditionTracker_067871a0;
  return;
}


/* GridItemConditionTracker::~GridItemConditionTracker() */

void __thiscall GridItemConditionTracker::~GridItemConditionTracker(GridItemConditionTracker *this)

{
  *(undefined ***)this = &PTR__GridItemConditionTracker_067871a0;
  EntityConditionTracker<GridItem,GridItemConditions>::~EntityConditionTracker
            ((EntityConditionTracker<GridItem,GridItemConditions> *)this);
  return;
}


/* GridItemConditionTracker::~GridItemConditionTracker() */

void __thiscall GridItemConditionTracker::~GridItemConditionTracker(GridItemConditionTracker *this)

{
  ~GridItemConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* GridItemConditionTracker::SetAdditionalValue(GridItemConditions, float) */

void __thiscall
GridItemConditionTracker::SetAdditionalValue
          (undefined4 param_1,GridItemConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_03e27bf8(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemConditionTracker::recomputeDrawValues() */

void __thiscall GridItemConditionTracker::recomputeDrawValues(GridItemConditionTracker *this)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  EntityCondition *pEVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x5c) = local_18;
  *(undefined8 *)(this + 100) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x4c) = local_18;
  *(undefined8 *)(this + 0x54) = uStack_10;
  cVar1 = EntityConditionTracker<GridItem,GridItemConditions>::HasCondition
                    ((EntityConditionTracker<GridItem,GridItemConditions> *)this,1);
  if (cVar1 != '\0') {
    pEVar4 = (EntityCondition *)FUN_03e27bf8(*(undefined8 *)(this + 0x20),1);
    Sexy::Color::Color((Color *)&local_18,1);
    calculateConditionColor_FlashWhiteAlpha(pEVar4,(Color *)&local_18,(Color *)(this + 0x4c));
  }
  cVar2 = EntityConditionTracker<GridItem,GridItemConditions>::HasCondition
                    ((EntityConditionTracker<GridItem,GridItemConditions> *)this);
  if (cVar2 != '\0') {
    pEVar4 = (EntityCondition *)FUN_03e27bf8(*(undefined8 *)(this + 0x20),0);
    Sexy::Color::Color((Color *)&local_18,1);
    calculateConditionColor_Flash(pEVar4,(Color *)&local_18,(Color *)(this + 0x5c));
  }
  uVar3 = EntityModifierToFlag(0x10);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar3,cVar2 != '\0');
  uVar3 = EntityModifierToFlag(8);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar3,cVar1 != '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemConditionTracker::recomputeModifierValues() */

void __thiscall GridItemConditionTracker::recomputeModifierValues(GridItemConditionTracker *this)

{
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined4 *)(this + 0x40) = 0;
  recomputeDrawValues(this);
  return;
}

