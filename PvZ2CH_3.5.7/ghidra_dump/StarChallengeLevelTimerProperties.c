// Class: StarChallengeLevelTimerProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeLevelTimerProperties::StaticClassInit() */

void StarChallengeLevelTimerProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeLevelTimerProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_036d0e00,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeLevelTimerProperties::StaticGetClass() */

long * StarChallengeLevelTimerProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeLevelTimerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeLevelTimerProperties::GetClass() const */

long * StarChallengeLevelTimerProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeLevelTimerProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeLevelTimerProperties::GetModuleClass() const */

long * StarChallengeLevelTimerProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeLevelTimer::sClass != (long *)0x0) {
    return StarChallengeLevelTimer::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeLevelTimer::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeLevelTimer",uVar2,StarChallengeLevelTimer::StaticNew);
  StarChallengeLevelTimer::StaticClassInit();
  return StarChallengeLevelTimer::sClass;
}


/* StarChallengeLevelTimerProperties::StarChallengeLevelTimerProperties() */

void __thiscall
StarChallengeLevelTimerProperties::StarChallengeLevelTimerProperties
          (StarChallengeLevelTimerProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066825d0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* StarChallengeLevelTimerProperties::StaticNew() */

StarChallengeLevelTimerProperties * StarChallengeLevelTimerProperties::StaticNew(void)

{
  StarChallengeLevelTimerProperties *this;
  
  this = ::operator_new(0x48);
  StarChallengeLevelTimerProperties(this);
  return this;
}


/* StarChallengeLevelTimerProperties::~StarChallengeLevelTimerProperties() */

void __thiscall
StarChallengeLevelTimerProperties::~StarChallengeLevelTimerProperties
          (StarChallengeLevelTimerProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066825d0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeLevelTimerProperties::~StarChallengeLevelTimerProperties() */

void __thiscall
StarChallengeLevelTimerProperties::~StarChallengeLevelTimerProperties
          (StarChallengeLevelTimerProperties *this)

{
  ~StarChallengeLevelTimerProperties(this);
  AK::FreeHook(this);
  return;
}

