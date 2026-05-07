// Class: LevelBasedModifier_ZombieSpeedModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieSpeedModule::StaticClassInit() */

void LevelBasedModifier_ZombieSpeedModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieSpeedModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fb34c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieSpeedModule::StaticGetClass() */

long * LevelBasedModifier_ZombieSpeedModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieSpeedModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieSpeedModule::LevelBasedModifier_ZombieSpeedModule() */

void __thiscall
LevelBasedModifier_ZombieSpeedModule::LevelBasedModifier_ZombieSpeedModule
          (LevelBasedModifier_ZombieSpeedModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661df80;
  return;
}


/* LevelBasedModifier_ZombieSpeedModule::StaticNew() */

LevelBasedModifier_ZombieSpeedModule * LevelBasedModifier_ZombieSpeedModule::StaticNew(void)

{
  LevelBasedModifier_ZombieSpeedModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_ZombieSpeedModule(this);
  return this;
}


/* LevelBasedModifier_ZombieSpeedModule::~LevelBasedModifier_ZombieSpeedModule() */

void __thiscall
LevelBasedModifier_ZombieSpeedModule::~LevelBasedModifier_ZombieSpeedModule
          (LevelBasedModifier_ZombieSpeedModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661df80;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_ZombieSpeedModule::~LevelBasedModifier_ZombieSpeedModule() */

void __thiscall
LevelBasedModifier_ZombieSpeedModule::~LevelBasedModifier_ZombieSpeedModule
          (LevelBasedModifier_ZombieSpeedModule *this)

{
  ~LevelBasedModifier_ZombieSpeedModule(this);
  AK::FreeHook(this);
  return;
}

