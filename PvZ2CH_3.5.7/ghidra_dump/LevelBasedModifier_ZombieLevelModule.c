// Class: LevelBasedModifier_ZombieLevelModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_ZombieLevelModule::StaticClassInit() */

void LevelBasedModifier_ZombieLevelModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_ZombieLevelModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033faf24,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_ZombieLevelModule::StaticGetClass() */

long * LevelBasedModifier_ZombieLevelModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_ZombieLevelModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_ZombieLevelModule::LevelBasedModifier_ZombieLevelModule() */

void __thiscall
LevelBasedModifier_ZombieLevelModule::LevelBasedModifier_ZombieLevelModule
          (LevelBasedModifier_ZombieLevelModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661de10;
  return;
}


/* LevelBasedModifier_ZombieLevelModule::StaticNew() */

LevelBasedModifier_ZombieLevelModule * LevelBasedModifier_ZombieLevelModule::StaticNew(void)

{
  LevelBasedModifier_ZombieLevelModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_ZombieLevelModule(this);
  return this;
}


/* LevelBasedModifier_ZombieLevelModule::~LevelBasedModifier_ZombieLevelModule() */

void __thiscall
LevelBasedModifier_ZombieLevelModule::~LevelBasedModifier_ZombieLevelModule
          (LevelBasedModifier_ZombieLevelModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661de10;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_ZombieLevelModule::~LevelBasedModifier_ZombieLevelModule() */

void __thiscall
LevelBasedModifier_ZombieLevelModule::~LevelBasedModifier_ZombieLevelModule
          (LevelBasedModifier_ZombieLevelModule *this)

{
  ~LevelBasedModifier_ZombieLevelModule(this);
  AK::FreeHook(this);
  return;
}

