// Class: SunbankTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunbankTutorialIntroProperties::StaticClassInit() */

void SunbankTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunbankTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0449bda0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunbankTutorialIntroProperties::StaticGetClass() */

long * SunbankTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunbankTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunbankTutorialIntroProperties::GetClass() const */

long * SunbankTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SunbankTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunbankTutorialIntroProperties::GetModuleClass() const */

long * SunbankTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SunbankTutorialIntro::sClass != (long *)0x0) {
    return SunbankTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SunbankTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SunbankTutorialIntro",uVar2,SunbankTutorialIntro::StaticNew);
  SunbankTutorialIntro::StaticClassInit();
  return SunbankTutorialIntro::sClass;
}


/* SunbankTutorialIntroProperties::SunbankTutorialIntroProperties() */

void __thiscall
SunbankTutorialIntroProperties::SunbankTutorialIntroProperties(SunbankTutorialIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06851b10;
  return;
}


/* SunbankTutorialIntroProperties::StaticNew() */

SunbankTutorialIntroProperties * SunbankTutorialIntroProperties::StaticNew(void)

{
  SunbankTutorialIntroProperties *this;
  
  this = ::operator_new(0x78);
  SunbankTutorialIntroProperties(this);
  return this;
}


/* SunbankTutorialIntroProperties::~SunbankTutorialIntroProperties() */

void __thiscall
SunbankTutorialIntroProperties::~SunbankTutorialIntroProperties
          (SunbankTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06851b10;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* SunbankTutorialIntroProperties::~SunbankTutorialIntroProperties() */

void __thiscall
SunbankTutorialIntroProperties::~SunbankTutorialIntroProperties
          (SunbankTutorialIntroProperties *this)

{
  ~SunbankTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}

