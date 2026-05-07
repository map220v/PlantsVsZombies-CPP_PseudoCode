// Class: LevelBasedModifier_PlantPacketsProps


/* LevelBasedModifier_PlantPacketsProps::GetModuleClass() const */

long * LevelBasedModifier_PlantPacketsProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_PlantPacketsModule::sClass != (long *)0x0) {
    return LevelBasedModifier_PlantPacketsModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_PlantPacketsModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantPacketsModule",uVar2,
            LevelBasedModifier_PlantPacketsModule::StaticNew);
  LevelBasedModifier_PlantPacketsModule::StaticClassInit();
  return LevelBasedModifier_PlantPacketsModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_PlantPacketsProps::StaticClassInit() */

void LevelBasedModifier_PlantPacketsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_PlantPacketsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fc0f8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_PlantPacketsProps::StaticGetClass() */

long * LevelBasedModifier_PlantPacketsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantPacketsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantPacketsProps::GetClass() const */

long * LevelBasedModifier_PlantPacketsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_PlantPacketsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_PlantPacketsProps::LevelBasedModifier_PlantPacketsProps() */

void __thiscall
LevelBasedModifier_PlantPacketsProps::LevelBasedModifier_PlantPacketsProps
          (LevelBasedModifier_PlantPacketsProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661e490;
  return;
}


/* LevelBasedModifier_PlantPacketsProps::StaticNew() */

LevelBasedModifier_PlantPacketsProps * LevelBasedModifier_PlantPacketsProps::StaticNew(void)

{
  LevelBasedModifier_PlantPacketsProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_PlantPacketsProps(this);
  return this;
}


/* LevelBasedModifier_PlantPacketsProps::~LevelBasedModifier_PlantPacketsProps() */

void __thiscall
LevelBasedModifier_PlantPacketsProps::~LevelBasedModifier_PlantPacketsProps
          (LevelBasedModifier_PlantPacketsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661e490;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_PlantPacketsProps::~LevelBasedModifier_PlantPacketsProps() */

void __thiscall
LevelBasedModifier_PlantPacketsProps::~LevelBasedModifier_PlantPacketsProps
          (LevelBasedModifier_PlantPacketsProps *this)

{
  ~LevelBasedModifier_PlantPacketsProps(this);
  AK::FreeHook(this);
  return;
}

