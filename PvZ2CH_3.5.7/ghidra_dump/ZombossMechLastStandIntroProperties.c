// Class: ZombossMechLastStandIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossMechLastStandIntroProperties::StaticClassInit() */

void ZombossMechLastStandIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossMechLastStandIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0475b9d8,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossMechLastStandIntroProperties::StaticGetClass() */

long * ZombossMechLastStandIntroProperties::StaticGetClass(void)

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
  uVar2 = LastStandMinigameProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossMechLastStandIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossMechLastStandIntroProperties::GetClass() const */

long * ZombossMechLastStandIntroProperties::GetClass(void)

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
  uVar2 = LastStandMinigameProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossMechLastStandIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossMechLastStandIntroProperties::GetModuleClass() const */

long * ZombossMechLastStandIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossMechLastStandIntro::sClass != (long *)0x0) {
    return ZombossMechLastStandIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossMechLastStandIntro::sClass = plVar1;
  uVar2 = LastStandMinigameModule::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossMechLastStandIntro",uVar2,ZombossMechLastStandIntro::StaticNew);
  ZombossMechLastStandIntro::StaticClassInit();
  return ZombossMechLastStandIntro::sClass;
}


/* ZombossMechLastStandIntroProperties::ZombossMechLastStandIntroProperties() */

void __thiscall
ZombossMechLastStandIntroProperties::ZombossMechLastStandIntroProperties
          (ZombossMechLastStandIntroProperties *this)

{
  LastStandMinigameProperties::LastStandMinigameProperties((LastStandMinigameProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068ccc90;
  return;
}


/* ZombossMechLastStandIntroProperties::StaticNew() */

ZombossMechLastStandIntroProperties * ZombossMechLastStandIntroProperties::StaticNew(void)

{
  ZombossMechLastStandIntroProperties *this;
  
  this = ::operator_new(0x98);
  ZombossMechLastStandIntroProperties(this);
  return this;
}


/* ZombossMechLastStandIntroProperties::~ZombossMechLastStandIntroProperties() */

void __thiscall
ZombossMechLastStandIntroProperties::~ZombossMechLastStandIntroProperties
          (ZombossMechLastStandIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068ccc90;
  LastStandMinigameProperties::~LastStandMinigameProperties((LastStandMinigameProperties *)this);
  return;
}


/* ZombossMechLastStandIntroProperties::~ZombossMechLastStandIntroProperties() */

void __thiscall
ZombossMechLastStandIntroProperties::~ZombossMechLastStandIntroProperties
          (ZombossMechLastStandIntroProperties *this)

{
  ~ZombossMechLastStandIntroProperties(this);
  AK::FreeHook(this);
  return;
}

