// Class: LevelBasedModifier_PlantDamageReducedProps


/* LevelBasedModifier_PlantDamageReducedProps::GetModuleClass() const */

long * LevelBasedModifier_PlantDamageReducedProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_PlantDamageReducedModule::sClass != (long *)0x0) {
    return LevelBasedModifier_PlantDamageReducedModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_PlantDamageReducedModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantDamageReducedModule",uVar2,
            LevelBasedModifier_PlantDamageReducedModule::StaticNew);
  LevelBasedModifier_PlantDamageReducedModule::StaticClassInit();
  return LevelBasedModifier_PlantDamageReducedModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_PlantDamageReducedProps::StaticClassInit() */

void LevelBasedModifier_PlantDamageReducedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_PlantDamageReducedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fc948,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_PlantDamageReducedProps::StaticGetClass() */

long * LevelBasedModifier_PlantDamageReducedProps::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantDamageReducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantDamageReducedProps::GetClass() const */

long * LevelBasedModifier_PlantDamageReducedProps::GetClass(void)

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
  uVar2 = LevelBasedModifierModuleProps::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantDamageReducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantDamageReducedProps::LevelBasedModifier_PlantDamageReducedProps() */

void __thiscall
LevelBasedModifier_PlantDamageReducedProps::LevelBasedModifier_PlantDamageReducedProps
          (LevelBasedModifier_PlantDamageReducedProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e770;
  return;
}


/* LevelBasedModifier_PlantDamageReducedProps::StaticNew() */

LevelBasedModifier_PlantDamageReducedProps *
LevelBasedModifier_PlantDamageReducedProps::StaticNew(void)

{
  LevelBasedModifier_PlantDamageReducedProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_PlantDamageReducedProps(this);
  return this;
}


/* LevelBasedModifier_PlantDamageReducedProps::~LevelBasedModifier_PlantDamageReducedProps() */

void __thiscall
LevelBasedModifier_PlantDamageReducedProps::~LevelBasedModifier_PlantDamageReducedProps
          (LevelBasedModifier_PlantDamageReducedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e770;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_PlantDamageReducedProps::~LevelBasedModifier_PlantDamageReducedProps() */

void __thiscall
LevelBasedModifier_PlantDamageReducedProps::~LevelBasedModifier_PlantDamageReducedProps
          (LevelBasedModifier_PlantDamageReducedProps *this)

{
  ~LevelBasedModifier_PlantDamageReducedProps(this);
  AK::FreeHook(this);
  return;
}

