// Class: LevelBasedModifier_PlantDamageReducedModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_PlantDamageReducedModule::StaticClassInit() */

void LevelBasedModifier_PlantDamageReducedModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_PlantDamageReducedModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fc734,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_PlantDamageReducedModule::StaticGetClass() */

long * LevelBasedModifier_PlantDamageReducedModule::StaticGetClass(void)

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
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantDamageReducedModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantDamageReducedModule::LevelBasedModifier_PlantDamageReducedModule() */

void __thiscall
LevelBasedModifier_PlantDamageReducedModule::LevelBasedModifier_PlantDamageReducedModule
          (LevelBasedModifier_PlantDamageReducedModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661e6b0;
  return;
}


/* LevelBasedModifier_PlantDamageReducedModule::StaticNew() */

LevelBasedModifier_PlantDamageReducedModule *
LevelBasedModifier_PlantDamageReducedModule::StaticNew(void)

{
  LevelBasedModifier_PlantDamageReducedModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_PlantDamageReducedModule(this);
  return this;
}


/* LevelBasedModifier_PlantDamageReducedModule::~LevelBasedModifier_PlantDamageReducedModule() */

void __thiscall
LevelBasedModifier_PlantDamageReducedModule::~LevelBasedModifier_PlantDamageReducedModule
          (LevelBasedModifier_PlantDamageReducedModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661e6b0;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_PlantDamageReducedModule::~LevelBasedModifier_PlantDamageReducedModule() */

void __thiscall
LevelBasedModifier_PlantDamageReducedModule::~LevelBasedModifier_PlantDamageReducedModule
          (LevelBasedModifier_PlantDamageReducedModule *this)

{
  ~LevelBasedModifier_PlantDamageReducedModule(this);
  AK::FreeHook(this);
  return;
}

