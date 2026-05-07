// Class: PlantConditionTracker


/* PlantConditionTracker::getConditionMaxCount() const */

undefined8 PlantConditionTracker::getConditionMaxCount(void)

{
  return 0x2b;
}


/* PlantConditionTracker::PlantConditionTracker() */

void __thiscall PlantConditionTracker::PlantConditionTracker(PlantConditionTracker *this)

{
  int iVar1;
  
  iVar1 = getConditionMaxCount();
  EntityConditionTracker<Plant,PlantConditions>::EntityConditionTracker
            ((EntityConditionTracker<Plant,PlantConditions> *)this,iVar1);
  *(undefined ***)this = &PTR__PlantConditionTracker_06799c40;
  return;
}


/* PlantConditionTracker::~PlantConditionTracker() */

void __thiscall PlantConditionTracker::~PlantConditionTracker(PlantConditionTracker *this)

{
  *(undefined ***)this = &PTR__PlantConditionTracker_06799c40;
  EntityConditionTracker<Plant,PlantConditions>::~EntityConditionTracker
            ((EntityConditionTracker<Plant,PlantConditions> *)this);
  return;
}


/* PlantConditionTracker::~PlantConditionTracker() */

void __thiscall PlantConditionTracker::~PlantConditionTracker(PlantConditionTracker *this)

{
  ~PlantConditionTracker(this);
  AK::FreeHook(this);
  return;
}


/* PlantConditionTracker::SetAdditionalValue(PlantConditions, float) */

void __thiscall
PlantConditionTracker::SetAdditionalValue
          (undefined4 param_1,PlantConditionTracker *this,int param_3)

{
  long lVar1;
  
  lVar1 = FUN_03f513f8(*(undefined8 *)(this + 0x20),(long)param_3);
  *(undefined4 *)(lVar1 + 0xc) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantConditionTracker::recomputeDrawValues() */

void __thiscall PlantConditionTracker::recomputeDrawValues(PlantConditionTracker *this)

{
  Color *this_00;
  PlantConditionTracker *pPVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  EntityCondition *pEVar6;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this_00 = (Color *)(this + 0x5c);
  local_8 = ___stack_chk_guard;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)this_00 = local_18;
  *(undefined8 *)(this + 100) = uStack_10;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x4c) = local_18;
  *(undefined8 *)(this + 0x54) = uStack_10;
  cVar2 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                    ((EntityConditionTracker<Plant,PlantConditions> *)this,4);
  if (cVar2 != '\0') {
    pEVar6 = (EntityCondition *)FUN_03f513f8(*(undefined8 *)(this + 0x20),4);
    Sexy::Color::Color((Color *)&local_18,1);
    calculateConditionColor_FlashWhiteAlpha(pEVar6,(Color *)&local_18,(Color *)(this + 0x4c));
  }
  cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                    ((EntityConditionTracker<Plant,PlantConditions> *)this,3);
  bVar4 = cVar3 != '\0';
  if (bVar4) {
    pEVar6 = (EntityCondition *)FUN_03f513f8(*(undefined8 *)(this + 0x20),3);
    Sexy::Color::Color((Color *)&local_18,1);
    calculateConditionColor_Flash(pEVar6,(Color *)&local_18,this_00);
  }
  cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                    ((EntityConditionTracker<Plant,PlantConditions> *)this,0xd);
  if ((cVar3 == '\0') &&
     (cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                        ((EntityConditionTracker<Plant,PlantConditions> *)this,0xe), cVar3 == '\0'))
  {
    cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                      ((EntityConditionTracker<Plant,PlantConditions> *)this,0xb);
  }
  else {
    bVar4 = true;
    Sexy::Color::Color((Color *)aIStack_28,0,300,0x200);
    Sexy::Color::operator*(this_00,(Color *)aIStack_28);
    *(undefined8 *)this_00 = local_18;
    *(undefined8 *)(this + 100) = uStack_10;
    cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                      ((EntityConditionTracker<Plant,PlantConditions> *)this,0xb);
  }
  if (cVar3 != '\0') {
    bVar4 = true;
    Sexy::Insets::Insets(aIStack_28,0x9b,0x9b,0x9b,0xc4);
    Sexy::Color::operator*(this_00,(Color *)aIStack_28);
    *(undefined8 *)this_00 = local_18;
    *(undefined8 *)(this + 100) = uStack_10;
  }
  cVar3 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                    ((EntityConditionTracker<Plant,PlantConditions> *)this,5);
  if (cVar3 != '\0') {
    bVar4 = true;
    Sexy::Insets::Insets(aIStack_28,0xff,0xff,0xff,0xc4);
    Sexy::Color::operator*(this_00,(Color *)aIStack_28);
    *(undefined8 *)this_00 = local_18;
    *(undefined8 *)(this + 100) = uStack_10;
  }
  pPVar1 = this + 0x48;
  uVar5 = EntityModifierToFlag(0x10);
  SetFlag<unsigned_int>((uint *)pPVar1,uVar5,bVar4);
  uVar5 = EntityModifierToFlag(8);
  SetFlag<unsigned_int>((uint *)pPVar1,uVar5,cVar2 != '\0');
  uVar5 = EntityModifierToFlag(0x20);
  bVar4 = (bool)EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,0x29);
  SetFlag<unsigned_int>((uint *)pPVar1,uVar5,bVar4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantConditionTracker::recomputeModifierValues() */

void __thiscall PlantConditionTracker::recomputeModifierValues(PlantConditionTracker *this)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                    ((EntityConditionTracker<Plant,PlantConditions> *)this,1);
  if (((((cVar1 == '\0') &&
        (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                           ((EntityConditionTracker<Plant,PlantConditions> *)this,0x19),
        cVar1 == '\0')) &&
       (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,6), cVar1 == '\0'))
      && ((((cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                               ((EntityConditionTracker<Plant,PlantConditions> *)this,2),
            cVar1 == '\0' &&
            (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                               ((EntityConditionTracker<Plant,PlantConditions> *)this,0x1d),
            cVar1 == '\0')) &&
           ((cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                               ((EntityConditionTracker<Plant,PlantConditions> *)this,0x16),
            cVar1 == '\0' &&
            ((cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                                ((EntityConditionTracker<Plant,PlantConditions> *)this,0x12),
             cVar1 == '\0' &&
             (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                                ((EntityConditionTracker<Plant,PlantConditions> *)this,0x18),
             cVar1 == '\0')))))) &&
          (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                             ((EntityConditionTracker<Plant,PlantConditions> *)this,0x23),
          cVar1 == '\0')))) &&
     ((((cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                           ((EntityConditionTracker<Plant,PlantConditions> *)this,0x24),
        cVar1 == '\0' &&
        (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                           ((EntityConditionTracker<Plant,PlantConditions> *)this,0x25),
        cVar1 == '\0')) &&
       (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,0x26),
       cVar1 == '\0')) &&
      ((cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,0x27),
       cVar1 == '\0' &&
       (cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,0x28),
       cVar1 == '\0')))))) {
    cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                      ((EntityConditionTracker<Plant,PlantConditions> *)this,0);
    if (cVar1 == '\0') {
      cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                        ((EntityConditionTracker<Plant,PlantConditions> *)this,0xd);
      if (cVar1 == '\0') {
        cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                          ((EntityConditionTracker<Plant,PlantConditions> *)this,0xc);
        if (cVar1 == '\0') {
          cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                            ((EntityConditionTracker<Plant,PlantConditions> *)this,0x1b);
          if (cVar1 == '\0') {
            cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                              ((EntityConditionTracker<Plant,PlantConditions> *)this,0xb);
            if (cVar1 == '\0') {
              cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                                ((EntityConditionTracker<Plant,PlantConditions> *)this,0xe);
              if (cVar1 == '\0') {
                cVar1 = EntityConditionTracker<Plant,PlantConditions>::HasCondition
                                  ((EntityConditionTracker<Plant,PlantConditions> *)this,0x1f);
                if (cVar1 == '\0') {
                  fVar5 = 0.0;
                  fVar7 = 1.0;
                  bVar4 = false;
                  fVar6 = 1.0;
                }
                else {
                  bVar4 = false;
                  fVar5 = 0.0;
                  fVar7 = 1.25;
                  fVar6 = 1.0;
                }
              }
              else {
                bVar4 = false;
                fVar5 = 0.0;
                fVar7 = 0.25;
                fVar6 = 1.0;
              }
            }
            else {
              fVar5 = 0.0;
              fVar7 = 0.0;
              bVar4 = false;
              fVar6 = fVar5;
            }
          }
          else {
            lVar3 = FUN_03f513f8(*(undefined8 *)(this + 0x20),0x1b);
            fVar6 = 1.0;
            bVar4 = false;
            if (*(float *)(lVar3 + 0xc) <= 0.0) {
              fVar5 = 0.01;
              fVar7 = 1.0;
            }
            else {
              fVar5 = *(float *)(lVar3 + 0xc) * 0.01;
              fVar7 = fVar6;
            }
          }
        }
        else {
          fVar6 = 1.0;
          fVar5 = 0.1;
          fVar7 = 1.0;
          bVar4 = false;
        }
      }
      else {
        fVar5 = 0.0;
        fVar6 = 1.0;
        fVar7 = 0.5;
        bVar4 = false;
      }
    }
    else {
      fVar6 = 0.5;
      fVar5 = 0.0;
      fVar7 = 0.5;
      bVar4 = false;
    }
  }
  else {
    fVar5 = 0.0;
    bVar4 = true;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  *(float *)(this + 0x38) = fVar7;
  *(float *)(this + 0x3c) = fVar6;
  *(float *)(this + 0x40) = fVar5;
  uVar2 = EntityModifierToFlag(2);
  SetFlag<unsigned_int>((uint *)(this + 0x48),uVar2,bVar4);
  recomputeDrawValues(this);
  return;
}


/* PlantConditionTracker::PlantConditionTracker(PlantConditionTracker const&) */

void __thiscall
PlantConditionTracker::PlantConditionTracker
          (PlantConditionTracker *this,PlantConditionTracker *param_1)

{
  EntityConditionTracker<Plant,PlantConditions>::EntityConditionTracker
            ((EntityConditionTracker<Plant,PlantConditions> *)this,(EntityConditionTracker *)param_1
            );
  *(undefined ***)this = &PTR__PlantConditionTracker_06799c40;
  return;
}

