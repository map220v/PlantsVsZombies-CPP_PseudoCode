// Class: LevelBasedModifier_DefaultNoPlantfoodModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DefaultNoPlantfoodModule::StaticClassInit() */

void LevelBasedModifier_DefaultNoPlantfoodModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DefaultNoPlantfoodModule");
    (*pcVar2)(plVar1,asStack_10,FUN_033fea14,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DefaultNoPlantfoodModule::StaticGetClass() */

long * LevelBasedModifier_DefaultNoPlantfoodModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultNoPlantfoodModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultNoPlantfoodModule::LevelBasedModifier_DefaultNoPlantfoodModule() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodModule::LevelBasedModifier_DefaultNoPlantfoodModule
          (LevelBasedModifier_DefaultNoPlantfoodModule *this)

{
  LevelBasedModifierModule::LevelBasedModifierModule((LevelBasedModifierModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0661f520;
  return;
}


/* LevelBasedModifier_DefaultNoPlantfoodModule::StaticNew() */

LevelBasedModifier_DefaultNoPlantfoodModule *
LevelBasedModifier_DefaultNoPlantfoodModule::StaticNew(void)

{
  LevelBasedModifier_DefaultNoPlantfoodModule *this;
  
  this = ::operator_new(0x20);
  LevelBasedModifier_DefaultNoPlantfoodModule(this);
  return this;
}


/* LevelBasedModifier_DefaultNoPlantfoodModule::~LevelBasedModifier_DefaultNoPlantfoodModule() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodModule::~LevelBasedModifier_DefaultNoPlantfoodModule
          (LevelBasedModifier_DefaultNoPlantfoodModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0661f520;
  LevelBasedModifierModule::~LevelBasedModifierModule((LevelBasedModifierModule *)this);
  return;
}


/* LevelBasedModifier_DefaultNoPlantfoodModule::~LevelBasedModifier_DefaultNoPlantfoodModule() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodModule::~LevelBasedModifier_DefaultNoPlantfoodModule
          (LevelBasedModifier_DefaultNoPlantfoodModule *this)

{
  ~LevelBasedModifier_DefaultNoPlantfoodModule(this);
  AK::FreeHook(this);
  return;
}

