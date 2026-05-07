// Class: LevelBasedModifier_SunReducedModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_SunReducedModule::StaticClassInit() */

void LevelBasedModifier_SunReducedModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_SunReducedModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fc30c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_SunReducedModule::StaticGetClass() */

long * LevelBasedModifier_SunReducedModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_SunReducedModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_SunReducedModule::LevelBasedModifier_SunReducedModule() */

void __thiscall
LevelBasedModifier_SunReducedModule::LevelBasedModifier_SunReducedModule
          (LevelBasedModifier_SunReducedModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661e540;
  return;
}


/* LevelBasedModifier_SunReducedModule::StaticNew() */

LevelBasedModifier_SunReducedModule * LevelBasedModifier_SunReducedModule::StaticNew(void)

{
  LevelBasedModifier_SunReducedModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_SunReducedModule(this);
  return this;
}


/* LevelBasedModifier_SunReducedModule::~LevelBasedModifier_SunReducedModule() */

void __thiscall
LevelBasedModifier_SunReducedModule::~LevelBasedModifier_SunReducedModule
          (LevelBasedModifier_SunReducedModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661e540;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_SunReducedModule::~LevelBasedModifier_SunReducedModule() */

void __thiscall
LevelBasedModifier_SunReducedModule::~LevelBasedModifier_SunReducedModule
          (LevelBasedModifier_SunReducedModule *this)

{
  ~LevelBasedModifier_SunReducedModule(this);
  AK::FreeHook(this);
  return;
}

