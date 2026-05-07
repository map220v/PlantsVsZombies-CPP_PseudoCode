// Class: SunBombChallengeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunBombChallengeProperties::StaticClassInit() */

void SunBombChallengeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunBombChallengeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0449d1c0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunBombChallengeProperties::StaticGetClass() */

long * SunBombChallengeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunBombChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBombChallengeProperties::GetClass() const */

long * SunBombChallengeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SunBombChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunBombChallengeProperties::GetModuleClass() const */

long * SunBombChallengeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SunBombChallengeModule::sClass != (long *)0x0) {
    return SunBombChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SunBombChallengeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"SunBombChallengeModule",uVar2,SunBombChallengeModule::StaticNew);
  SunBombChallengeModule::StaticClassInit();
  return SunBombChallengeModule::sClass;
}


/* SunBombChallengeProperties::SunBombChallengeProperties() */

void __thiscall
SunBombChallengeProperties::SunBombChallengeProperties(SunBombChallengeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0x41c80000;
  *(undefined ***)this = &PTR_GetClass_06851cd0;
  *(undefined4 *)(this + 0x44) = 0x42a00000;
  *(undefined4 *)(this + 0x48) = 0x447a0000;
  *(undefined4 *)(this + 0x4c) = 0x43fa0000;
  return;
}


/* SunBombChallengeProperties::StaticNew() */

SunBombChallengeProperties * SunBombChallengeProperties::StaticNew(void)

{
  SunBombChallengeProperties *this;
  
  this = ::operator_new(0x50);
  SunBombChallengeProperties(this);
  return this;
}


/* SunBombChallengeProperties::~SunBombChallengeProperties() */

void __thiscall
SunBombChallengeProperties::~SunBombChallengeProperties(SunBombChallengeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06851cd0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* SunBombChallengeProperties::~SunBombChallengeProperties() */

void __thiscall
SunBombChallengeProperties::~SunBombChallengeProperties(SunBombChallengeProperties *this)

{
  ~SunBombChallengeProperties(this);
  AK::FreeHook(this);
  return;
}

