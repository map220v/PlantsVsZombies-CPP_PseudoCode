// Class: MinigameCopycatsTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MinigameCopycatsTutorialIntroProperties::StaticClassInit() */

void MinigameCopycatsTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MinigameCopycatsTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04f61c54,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MinigameCopycatsTutorialIntroProperties::StaticGetClass() */

long * MinigameCopycatsTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MinigameCopycatsTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinigameCopycatsTutorialIntroProperties::GetClass() const */

long * MinigameCopycatsTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MinigameCopycatsTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MinigameCopycatsTutorialIntroProperties::GetModuleClass() const */

long * MinigameCopycatsTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MinigameCopycatsTutorialIntro::sClass != (long *)0x0) {
    return MinigameCopycatsTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MinigameCopycatsTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"MinigameCopycatsTutorialIntro",uVar2,MinigameCopycatsTutorialIntro::StaticNew);
  MinigameCopycatsTutorialIntro::StaticClassInit();
  return MinigameCopycatsTutorialIntro::sClass;
}


/* MinigameCopycatsTutorialIntroProperties::MinigameCopycatsTutorialIntroProperties() */

void __thiscall
MinigameCopycatsTutorialIntroProperties::MinigameCopycatsTutorialIntroProperties
          (MinigameCopycatsTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06a21240;
  Sexy::Point::Point((Point *)(this + 0x78));
  return;
}


/* MinigameCopycatsTutorialIntroProperties::StaticNew() */

MinigameCopycatsTutorialIntroProperties * MinigameCopycatsTutorialIntroProperties::StaticNew(void)

{
  MinigameCopycatsTutorialIntroProperties *this;
  
  this = ::operator_new(0x80);
  MinigameCopycatsTutorialIntroProperties(this);
  return this;
}


/* MinigameCopycatsTutorialIntroProperties::~MinigameCopycatsTutorialIntroProperties() */

void __thiscall
MinigameCopycatsTutorialIntroProperties::~MinigameCopycatsTutorialIntroProperties
          (MinigameCopycatsTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06a21240;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* MinigameCopycatsTutorialIntroProperties::~MinigameCopycatsTutorialIntroProperties() */

void __thiscall
MinigameCopycatsTutorialIntroProperties::~MinigameCopycatsTutorialIntroProperties
          (MinigameCopycatsTutorialIntroProperties *this)

{
  ~MinigameCopycatsTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

