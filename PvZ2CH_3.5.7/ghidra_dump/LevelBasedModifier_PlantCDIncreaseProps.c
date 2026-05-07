// Class: LevelBasedModifier_PlantCDIncreaseProps


/* LevelBasedModifier_PlantCDIncreaseProps::GetModuleClass() const */

long * LevelBasedModifier_PlantCDIncreaseProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_PlantCDIncreaseModule::sClass != (long *)0x0) {
    return LevelBasedModifier_PlantCDIncreaseModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_PlantCDIncreaseModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCDIncreaseModule",uVar2,
            LevelBasedModifier_PlantCDIncreaseModule::StaticNew);
  LevelBasedModifier_PlantCDIncreaseModule::StaticClassInit();
  return LevelBasedModifier_PlantCDIncreaseModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_PlantCDIncreaseProps::StaticClassInit() */

void LevelBasedModifier_PlantCDIncreaseProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_PlantCDIncreaseProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fd5c0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_PlantCDIncreaseProps::StaticGetClass() */

long * LevelBasedModifier_PlantCDIncreaseProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCDIncreaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantCDIncreaseProps::GetClass() const */

long * LevelBasedModifier_PlantCDIncreaseProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantCDIncreaseProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantCDIncreaseProps::LevelBasedModifier_PlantCDIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCDIncreaseProps::LevelBasedModifier_PlantCDIncreaseProps
          (LevelBasedModifier_PlantCDIncreaseProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661ebc0;
  return;
}


/* LevelBasedModifier_PlantCDIncreaseProps::StaticNew() */

LevelBasedModifier_PlantCDIncreaseProps * LevelBasedModifier_PlantCDIncreaseProps::StaticNew(void)

{
  LevelBasedModifier_PlantCDIncreaseProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_PlantCDIncreaseProps(this);
  return this;
}


/* LevelBasedModifier_PlantCDIncreaseProps::~LevelBasedModifier_PlantCDIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCDIncreaseProps::~LevelBasedModifier_PlantCDIncreaseProps
          (LevelBasedModifier_PlantCDIncreaseProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661ebc0;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_PlantCDIncreaseProps::~LevelBasedModifier_PlantCDIncreaseProps() */

void __thiscall
LevelBasedModifier_PlantCDIncreaseProps::~LevelBasedModifier_PlantCDIncreaseProps
          (LevelBasedModifier_PlantCDIncreaseProps *this)

{
  ~LevelBasedModifier_PlantCDIncreaseProps(this);
  AK::FreeHook(this);
  return;
}

