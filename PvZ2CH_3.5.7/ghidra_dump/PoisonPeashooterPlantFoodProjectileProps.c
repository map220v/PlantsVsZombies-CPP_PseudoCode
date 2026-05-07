// Class: PoisonPeashooterPlantFoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PoisonPeashooterPlantFoodProjectileProps::StaticClassInit() */

void PoisonPeashooterPlantFoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PoisonPeashooterPlantFoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc7e50,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PoisonPeashooterPlantFoodProjectileProps::StaticGetClass() */

long * PoisonPeashooterPlantFoodProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonPeashooterPlantFoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonPeashooterPlantFoodProjectileProps::GetClass() const */

long * PoisonPeashooterPlantFoodProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PoisonPeashooterPlantFoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PoisonPeashooterPlantFoodProjectileProps::~PoisonPeashooterPlantFoodProjectileProps() */

void __thiscall
PoisonPeashooterPlantFoodProjectileProps::~PoisonPeashooterPlantFoodProjectileProps
          (PoisonPeashooterPlantFoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0699c4a0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* PoisonPeashooterPlantFoodProjectileProps::~PoisonPeashooterPlantFoodProjectileProps() */

void __thiscall
PoisonPeashooterPlantFoodProjectileProps::~PoisonPeashooterPlantFoodProjectileProps
          (PoisonPeashooterPlantFoodProjectileProps *this)

{
  ~PoisonPeashooterPlantFoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* PoisonPeashooterPlantFoodProjectileProps::PoisonPeashooterPlantFoodProjectileProps() */

void __thiscall
PoisonPeashooterPlantFoodProjectileProps::PoisonPeashooterPlantFoodProjectileProps
          (PoisonPeashooterPlantFoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0699c4a0;
  *(undefined4 *)(this + 0x1e0) = 0x43960000;
  return;
}


/* PoisonPeashooterPlantFoodProjectileProps::StaticNew() */

PoisonPeashooterPlantFoodProjectileProps * PoisonPeashooterPlantFoodProjectileProps::StaticNew(void)

{
  PoisonPeashooterPlantFoodProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  PoisonPeashooterPlantFoodProjectileProps(this);
  return this;
}

