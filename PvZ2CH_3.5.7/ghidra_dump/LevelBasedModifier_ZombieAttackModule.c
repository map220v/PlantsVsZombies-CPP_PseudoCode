// Class: LevelBasedModifier_ZombieAttackModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieAttackModule::StaticClassInit() */

void LevelBasedModifier_ZombieAttackModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieAttackModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fbabc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieAttackModule::StaticGetClass() */

long * LevelBasedModifier_ZombieAttackModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieAttackModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieAttackModule::LevelBasedModifier_ZombieAttackModule() */

void __thiscall
LevelBasedModifier_ZombieAttackModule::LevelBasedModifier_ZombieAttackModule
          (LevelBasedModifier_ZombieAttackModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661e260;
  return;
}


/* LevelBasedModifier_ZombieAttackModule::StaticNew() */

LevelBasedModifier_ZombieAttackModule * LevelBasedModifier_ZombieAttackModule::StaticNew(void)

{
  LevelBasedModifier_ZombieAttackModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_ZombieAttackModule(this);
  return this;
}


/* LevelBasedModifier_ZombieAttackModule::~LevelBasedModifier_ZombieAttackModule() */

void __thiscall
LevelBasedModifier_ZombieAttackModule::~LevelBasedModifier_ZombieAttackModule
          (LevelBasedModifier_ZombieAttackModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661e260;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_ZombieAttackModule::~LevelBasedModifier_ZombieAttackModule() */

void __thiscall
LevelBasedModifier_ZombieAttackModule::~LevelBasedModifier_ZombieAttackModule
          (LevelBasedModifier_ZombieAttackModule *this)

{
  ~LevelBasedModifier_ZombieAttackModule(this);
  AK::FreeHook(this);
  return;
}

