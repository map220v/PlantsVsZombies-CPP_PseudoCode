// Class: ZombossLastStandMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossLastStandMinigameProperties::StaticClassInit() */

void ZombossLastStandMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossLastStandMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04753b68,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossLastStandMinigameProperties::StaticGetClass() */

long * ZombossLastStandMinigameProperties::StaticGetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossLastStandMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossLastStandMinigameProperties::GetClass() const */

long * ZombossLastStandMinigameProperties::GetClass(void)

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
  uVar2 = StandardLevelIntroProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossLastStandMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossLastStandMinigameProperties::GetModuleClass() const */

long * ZombossLastStandMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombossLastStandMinigameModule::sClass != (long *)0x0) {
    return ZombossLastStandMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombossLastStandMinigameModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossLastStandMinigameModule",uVar2,ZombossLastStandMinigameModule::StaticNew)
  ;
  ZombossLastStandMinigameModule::StaticClassInit();
  return ZombossLastStandMinigameModule::sClass;
}


/* ZombossLastStandMinigameProperties::ZombossLastStandMinigameProperties() */

void __thiscall
ZombossLastStandMinigameProperties::ZombossLastStandMinigameProperties
          (ZombossLastStandMinigameProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x80) = 2;
  this[0x84] = (ZombossLastStandMinigameProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_068cc560;
  Set8BytesTo0(this + 0x88);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x90) = 1;
  *(undefined4 *)(this + 0x94) = 1;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


/* ZombossLastStandMinigameProperties::StaticNew() */

ZombossLastStandMinigameProperties * ZombossLastStandMinigameProperties::StaticNew(void)

{
  ZombossLastStandMinigameProperties *this;
  
  this = ::operator_new(0xa0);
  ZombossLastStandMinigameProperties(this);
  return this;
}


/* ZombossLastStandMinigameProperties::~ZombossLastStandMinigameProperties() */

void __thiscall
ZombossLastStandMinigameProperties::~ZombossLastStandMinigameProperties
          (ZombossLastStandMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068cc560;
  std::string::~string((string *)(this + 0x88));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ZombossLastStandMinigameProperties::~ZombossLastStandMinigameProperties() */

void __thiscall
ZombossLastStandMinigameProperties::~ZombossLastStandMinigameProperties
          (ZombossLastStandMinigameProperties *this)

{
  ~ZombossLastStandMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

