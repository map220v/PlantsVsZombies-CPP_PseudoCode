// Class: LevelOfTheDayModuleProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayModuleProperties::StaticClassInit() */

void LevelOfTheDayModuleProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDayModuleProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_049c79c4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayModuleProperties::StaticGetClass() */

long * LevelOfTheDayModuleProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayModuleProperties::GetClass() const */

long * LevelOfTheDayModuleProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayModuleProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayModuleProperties::GetModuleClass() const */

long * LevelOfTheDayModuleProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelOfTheDayModule::sClass != (long *)0x0) {
    return LevelOfTheDayModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelOfTheDayModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayModule",uVar2,LevelOfTheDayModule::StaticNew);
  LevelOfTheDayModule::StaticClassInit();
  return LevelOfTheDayModule::sClass;
}


/* LevelOfTheDayModuleProperties::LevelOfTheDayModuleProperties() */

void __thiscall
LevelOfTheDayModuleProperties::LevelOfTheDayModuleProperties(LevelOfTheDayModuleProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06927100;
  return;
}


/* LevelOfTheDayModuleProperties::StaticNew() */

LevelOfTheDayModuleProperties * LevelOfTheDayModuleProperties::StaticNew(void)

{
  LevelOfTheDayModuleProperties *this;
  
  this = ::operator_new(0x40);
  LevelOfTheDayModuleProperties(this);
  return this;
}


/* LevelOfTheDayModuleProperties::~LevelOfTheDayModuleProperties() */

void __thiscall
LevelOfTheDayModuleProperties::~LevelOfTheDayModuleProperties(LevelOfTheDayModuleProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06927100;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* LevelOfTheDayModuleProperties::~LevelOfTheDayModuleProperties() */

void __thiscall
LevelOfTheDayModuleProperties::~LevelOfTheDayModuleProperties(LevelOfTheDayModuleProperties *this)

{
  ~LevelOfTheDayModuleProperties(this);
  AK::FreeHook(this);
  return;
}

