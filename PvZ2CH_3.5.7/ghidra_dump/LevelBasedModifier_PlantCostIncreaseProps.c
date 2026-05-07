// Class: LevelBasedModifier_PlantCostIncreaseProps


/* LevelBasedModifier_PlantCostIncreaseProps::GetModuleClass() const */

long * LevelBasedModifier_PlantCostIncreaseProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_PlantCostIncreaseModule::sClass != (long *)0x0) {
    return LevelBasedModifier_PlantCostIncreaseModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_PlantCostIncreaseModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCostIncreaseModule",uVar2,
            LevelBasedModifier_PlantCostIncreaseModule::StaticNew);
  LevelBasedModifier_PlantCostIncreaseModule::StaticClassInit();
  return LevelBasedModifier_PlantCostIncreaseModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_PlantCostIncreaseProps::StaticClassInit() */

void LevelBasedModifier_PlantCostIncreaseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_PlantCostIncreaseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fcd70,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_PlantCostIncreaseProps::StaticGetClass() */

long * LevelBasedModifier_PlantCostIncreaseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCostIncreaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantCostIncreaseProps::GetClass() const */

long * LevelBasedModifier_PlantCostIncreaseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCostIncreaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantCostIncreaseProps::LevelBasedModifier_PlantCostIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCostIncreaseProps::LevelBasedModifier_PlantCostIncreaseProps
          (LevelBasedModifier_PlantCostIncreaseProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e8e0;
  return;
}


/* LevelBasedModifier_PlantCostIncreaseProps::StaticNew() */

LevelBasedModifier_PlantCostIncreaseProps *
LevelBasedModifier_PlantCostIncreaseProps::StaticNew(void)

{
  LevelBasedModifier_PlantCostIncreaseProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_PlantCostIncreaseProps(this);
  return this;
}


/* LevelBasedModifier_PlantCostIncreaseProps::~LevelBasedModifier_PlantCostIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCostIncreaseProps::~LevelBasedModifier_PlantCostIncreaseProps
          (LevelBasedModifier_PlantCostIncreaseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e8e0;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_PlantCostIncreaseProps::~LevelBasedModifier_PlantCostIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCostIncreaseProps::~LevelBasedModifier_PlantCostIncreaseProps
          (LevelBasedModifier_PlantCostIncreaseProps *this)

{
  ~LevelBasedModifier_PlantCostIncreaseProps(this);
  AK::FreeHook(this);
  return;
}

