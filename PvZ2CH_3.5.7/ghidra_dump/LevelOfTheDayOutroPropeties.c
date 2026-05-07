// Class: LevelOfTheDayOutroPropeties


/* LevelOfTheDayOutroPropeties::GetModuleClass() const */

long * LevelOfTheDayOutroPropeties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (LevelOfTheDayOutro::sClass != (long *)0x0) {
    return LevelOfTheDayOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  LevelOfTheDayOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayOutro",uVar2,LevelOfTheDayOutro::StaticNew);
  LevelOfTheDayOutro::StaticClassInit();
  return LevelOfTheDayOutro::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayOutroPropeties::StaticClassInit() */

void LevelOfTheDayOutroPropeties::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDayOutroPropeties");
    (*pcVar2)(plVar1,asStack_10,FUN_049c1e98,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayOutroPropeties::StaticGetClass() */

long * LevelOfTheDayOutroPropeties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayOutroPropeties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayOutroPropeties::GetClass() const */

long * LevelOfTheDayOutroPropeties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayOutroPropeties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayOutroPropeties::LevelOfTheDayOutroPropeties() */

void __thiscall
LevelOfTheDayOutroPropeties::LevelOfTheDayOutroPropeties(LevelOfTheDayOutroPropeties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06926c60;
  return;
}


/* LevelOfTheDayOutroPropeties::StaticNew() */

LevelOfTheDayOutroPropeties * LevelOfTheDayOutroPropeties::StaticNew(void)

{
  LevelOfTheDayOutroPropeties *this;
  
  this = ::operator_new(0x40);
  LevelOfTheDayOutroPropeties(this);
  return this;
}


/* LevelOfTheDayOutroPropeties::~LevelOfTheDayOutroPropeties() */

void __thiscall
LevelOfTheDayOutroPropeties::~LevelOfTheDayOutroPropeties(LevelOfTheDayOutroPropeties *this)

{
  *(undefined ***)this = &PTR_GetClass_06926c60;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* LevelOfTheDayOutroPropeties::~LevelOfTheDayOutroPropeties() */

void __thiscall
LevelOfTheDayOutroPropeties::~LevelOfTheDayOutroPropeties(LevelOfTheDayOutroPropeties *this)

{
  ~LevelOfTheDayOutroPropeties(this);
  AK::FreeHook(this);
  return;
}

