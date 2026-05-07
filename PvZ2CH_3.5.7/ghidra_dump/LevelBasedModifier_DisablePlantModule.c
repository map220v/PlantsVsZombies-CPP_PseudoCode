// Class: LevelBasedModifier_DisablePlantModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DisablePlantModule::StaticClassInit() */

void LevelBasedModifier_DisablePlantModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DisablePlantModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fcf84,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DisablePlantModule::StaticGetClass() */

long * LevelBasedModifier_DisablePlantModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DisablePlantModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DisablePlantModule::LevelBasedModifier_DisablePlantModule() */

void __thiscall
LevelBasedModifier_DisablePlantModule::LevelBasedModifier_DisablePlantModule
          (LevelBasedModifier_DisablePlantModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661e990;
  return;
}


/* LevelBasedModifier_DisablePlantModule::StaticNew() */

LevelBasedModifier_DisablePlantModule * LevelBasedModifier_DisablePlantModule::StaticNew(void)

{
  LevelBasedModifier_DisablePlantModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_DisablePlantModule(this);
  return this;
}


/* LevelBasedModifier_DisablePlantModule::~LevelBasedModifier_DisablePlantModule() */

void __thiscall
LevelBasedModifier_DisablePlantModule::~LevelBasedModifier_DisablePlantModule
          (LevelBasedModifier_DisablePlantModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661e990;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_DisablePlantModule::~LevelBasedModifier_DisablePlantModule() */

void __thiscall
LevelBasedModifier_DisablePlantModule::~LevelBasedModifier_DisablePlantModule
          (LevelBasedModifier_DisablePlantModule *this)

{
  ~LevelBasedModifier_DisablePlantModule(this);
  AK::FreeHook(this);
  return;
}

