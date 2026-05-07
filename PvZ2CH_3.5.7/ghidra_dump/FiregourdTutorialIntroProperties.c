// Class: FiregourdTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FiregourdTutorialIntroProperties::StaticClassInit() */

void FiregourdTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"FiregourdTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce3350,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FiregourdTutorialIntroProperties::StaticGetClass() */

long * FiregourdTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FiregourdTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FiregourdTutorialIntroProperties::GetClass() const */

long * FiregourdTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"FiregourdTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FiregourdTutorialIntroProperties::FiregourdTutorialIntroProperties() */

void __thiscall
FiregourdTutorialIntroProperties::FiregourdTutorialIntroProperties
          (FiregourdTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06760de0;
  return;
}


/* FiregourdTutorialIntroProperties::StaticNew() */

FiregourdTutorialIntroProperties * FiregourdTutorialIntroProperties::StaticNew(void)

{
  FiregourdTutorialIntroProperties *this;
  
  this = ::operator_new(0x78);
  FiregourdTutorialIntroProperties(this);
  return this;
}


/* FiregourdTutorialIntroProperties::~FiregourdTutorialIntroProperties() */

void __thiscall
FiregourdTutorialIntroProperties::~FiregourdTutorialIntroProperties
          (FiregourdTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06760de0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* FiregourdTutorialIntroProperties::~FiregourdTutorialIntroProperties() */

void __thiscall
FiregourdTutorialIntroProperties::~FiregourdTutorialIntroProperties
          (FiregourdTutorialIntroProperties *this)

{
  ~FiregourdTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* FiregourdTutorialIntroProperties::GetModuleClass() const */

long * FiregourdTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (FiregourdTutorialIntro::sClass != (long *)0x0) {
    return FiregourdTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  FiregourdTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"FiregourdTutorialIntro",uVar2,FiregourdTutorialIntro::StaticNew);
  FiregourdTutorialIntro::StaticClassInit();
  return FiregourdTutorialIntro::sClass;
}

