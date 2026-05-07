// Class: VanillaPlantFoodProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VanillaPlantFoodProjectileProps::StaticClassInit() */

void VanillaPlantFoodProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"VanillaPlantFoodProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03967670,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VanillaPlantFoodProjectileProps::StaticGetClass() */

long * VanillaPlantFoodProjectileProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"VanillaPlantFoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaPlantFoodProjectileProps::GetClass() const */

long * VanillaPlantFoodProjectileProps::GetClass(void)

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
  (*pcVar3)(plVar1,"VanillaPlantFoodProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VanillaPlantFoodProjectileProps::~VanillaPlantFoodProjectileProps() */

void __thiscall
VanillaPlantFoodProjectileProps::~VanillaPlantFoodProjectileProps
          (VanillaPlantFoodProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066d5d90;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* VanillaPlantFoodProjectileProps::~VanillaPlantFoodProjectileProps() */

void __thiscall
VanillaPlantFoodProjectileProps::~VanillaPlantFoodProjectileProps
          (VanillaPlantFoodProjectileProps *this)

{
  ~VanillaPlantFoodProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* VanillaPlantFoodProjectileProps::VanillaPlantFoodProjectileProps() */

void __thiscall
VanillaPlantFoodProjectileProps::VanillaPlantFoodProjectileProps
          (VanillaPlantFoodProjectileProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_066d5d90;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1e4));
  *(undefined4 *)(this + 0x1e0) = 0x447a0000;
  return;
}


/* VanillaPlantFoodProjectileProps::StaticNew() */

VanillaPlantFoodProjectileProps * VanillaPlantFoodProjectileProps::StaticNew(void)

{
  VanillaPlantFoodProjectileProps *this;
  
  this = ::operator_new(0x1f0);
  VanillaPlantFoodProjectileProps(this);
  return this;
}

