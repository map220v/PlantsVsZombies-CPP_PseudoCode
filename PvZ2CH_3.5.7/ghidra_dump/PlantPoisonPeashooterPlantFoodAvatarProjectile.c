// Class: PlantPoisonPeashooterPlantFoodAvatarProjectile


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile()
    */

void __thiscall
PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile
          (PlantPoisonPeashooterPlantFoodAvatarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699c5c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterPlantFoodAvatarProjectile_0699c7c0;
  PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile
            ((PlantPoisonPeashooterPlantFoodProjectile *)this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile()
    */

void __thiscall
PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile
          (PlantPoisonPeashooterPlantFoodAvatarProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodAvatarProjectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile()
    */

void __thiscall
PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile
          (PlantPoisonPeashooterPlantFoodAvatarProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodAvatarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile()
    */

void __thiscall
PlantPoisonPeashooterPlantFoodAvatarProjectile::~PlantPoisonPeashooterPlantFoodAvatarProjectile
          (PlantPoisonPeashooterPlantFoodAvatarProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodAvatarProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticClassInit() */

void PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantPoisonPeashooterPlantFoodAvatarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc84a8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticGetClass() */

long * PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantPoisonPeashooterPlantFoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPoisonPeashooterPlantFoodAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::GetClass() const */

long * PlantPoisonPeashooterPlantFoodAvatarProjectile::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantPoisonPeashooterPlantFoodProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPoisonPeashooterPlantFoodAvatarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::PlantPoisonPeashooterPlantFoodAvatarProjectile()
    */

void __thiscall
PlantPoisonPeashooterPlantFoodAvatarProjectile::PlantPoisonPeashooterPlantFoodAvatarProjectile
          (PlantPoisonPeashooterPlantFoodAvatarProjectile *this)

{
  PlantPoisonPeashooterPlantFoodProjectile::PlantPoisonPeashooterPlantFoodProjectile
            ((PlantPoisonPeashooterPlantFoodProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0699c5c0;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterPlantFoodAvatarProjectile_0699c7c0;
  return;
}


/* PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticNew() */

PlantPoisonPeashooterPlantFoodAvatarProjectile *
PlantPoisonPeashooterPlantFoodAvatarProjectile::StaticNew(void)

{
  PlantPoisonPeashooterPlantFoodAvatarProjectile *this;
  
  this = ::operator_new(0x1d8);
  PlantPoisonPeashooterPlantFoodAvatarProjectile(this);
  return this;
}

