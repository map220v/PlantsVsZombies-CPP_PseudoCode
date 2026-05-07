// Class: LevelBasedModifier_DefaultNoPlantfoodProps


/* LevelBasedModifier_DefaultNoPlantfoodProps::GetModuleClass() const */

long * LevelBasedModifier_DefaultNoPlantfoodProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelBasedModifier_DefaultNoPlantfoodModule::sClass != (long *)0x0) {
    return LevelBasedModifier_DefaultNoPlantfoodModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelBasedModifier_DefaultNoPlantfoodModule::sClass = plVar1;
  uVar2 = LevelBasedModifierModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultNoPlantfoodModule",uVar2,
            LevelBasedModifier_DefaultNoPlantfoodModule::StaticNew);
  LevelBasedModifier_DefaultNoPlantfoodModule::StaticClassInit();
  return LevelBasedModifier_DefaultNoPlantfoodModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelBasedModifier_DefaultNoPlantfoodProps::StaticClassInit() */

void LevelBasedModifier_DefaultNoPlantfoodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelBasedModifier_DefaultNoPlantfoodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_033fec28,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::StaticGetClass() */

long * LevelBasedModifier_DefaultNoPlantfoodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultNoPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::GetClass() const */

long * LevelBasedModifier_DefaultNoPlantfoodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"LevelBasedModifier_DefaultNoPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::LevelBasedModifier_DefaultNoPlantfoodProps() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodProps::LevelBasedModifier_DefaultNoPlantfoodProps
          (LevelBasedModifier_DefaultNoPlantfoodProps *this)

{
  LevelBasedModifierModuleProps::LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  *(undefined ***)this = &PTR_GetClass_0661f5e0;
  return;
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::StaticNew() */

LevelBasedModifier_DefaultNoPlantfoodProps *
LevelBasedModifier_DefaultNoPlantfoodProps::StaticNew(void)

{
  LevelBasedModifier_DefaultNoPlantfoodProps *this;
  
  this = ::operator_new(0x60);
  LevelBasedModifier_DefaultNoPlantfoodProps(this);
  return this;
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::~LevelBasedModifier_DefaultNoPlantfoodProps() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodProps::~LevelBasedModifier_DefaultNoPlantfoodProps
          (LevelBasedModifier_DefaultNoPlantfoodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0661f5e0;
  LevelBasedModifierModuleProps::~LevelBasedModifierModuleProps
            ((LevelBasedModifierModuleProps *)this);
  return;
}


/* LevelBasedModifier_DefaultNoPlantfoodProps::~LevelBasedModifier_DefaultNoPlantfoodProps() */

void __thiscall
LevelBasedModifier_DefaultNoPlantfoodProps::~LevelBasedModifier_DefaultNoPlantfoodProps
          (LevelBasedModifier_DefaultNoPlantfoodProps *this)

{
  ~LevelBasedModifier_DefaultNoPlantfoodProps(this);
  AK::FreeHook(this);
  return;
}

