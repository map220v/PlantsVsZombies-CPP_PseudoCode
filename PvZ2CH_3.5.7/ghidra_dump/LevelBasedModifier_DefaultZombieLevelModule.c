// Class: LevelBasedModifier_DefaultZombieLevelModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DefaultZombieLevelModule::StaticClassInit() */

void LevelBasedModifier_DefaultZombieLevelModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DefaultZombieLevelModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fe1c4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DefaultZombieLevelModule::StaticGetClass() */

long * LevelBasedModifier_DefaultZombieLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultZombieLevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultZombieLevelModule::LevelBasedModifier_DefaultZombieLevelModule() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelModule::LevelBasedModifier_DefaultZombieLevelModule
          (LevelBasedModifier_DefaultZombieLevelModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661f240;
  return;
}


/* LevelBasedModifier_DefaultZombieLevelModule::StaticNew() */

LevelBasedModifier_DefaultZombieLevelModule *
LevelBasedModifier_DefaultZombieLevelModule::StaticNew(void)

{
  LevelBasedModifier_DefaultZombieLevelModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_DefaultZombieLevelModule(this);
  return this;
}


/* LevelBasedModifier_DefaultZombieLevelModule::~LevelBasedModifier_DefaultZombieLevelModule() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelModule::~LevelBasedModifier_DefaultZombieLevelModule
          (LevelBasedModifier_DefaultZombieLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661f240;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_DefaultZombieLevelModule::~LevelBasedModifier_DefaultZombieLevelModule() */

void __thiscall
LevelBasedModifier_DefaultZombieLevelModule::~LevelBasedModifier_DefaultZombieLevelModule
          (LevelBasedModifier_DefaultZombieLevelModule *this)

{
  ~LevelBasedModifier_DefaultZombieLevelModule(this);
  AK::FreeHook(this);
  return;
}

