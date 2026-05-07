// Class: IntroFishingProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroFishingProperties::StaticClassInit() */

void IntroFishingProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroFishingProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_047c7d34,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroFishingProperties::StaticGetClass() */

long * IntroFishingProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroFishingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroFishingProperties::GetClass() const */

long * IntroFishingProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroFishingProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroFishingProperties::IntroFishingProperties() */

void __thiscall IntroFishingProperties::IntroFishingProperties(IntroFishingProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068e4860;
  return;
}


/* IntroFishingProperties::StaticNew() */

IntroFishingProperties * IntroFishingProperties::StaticNew(void)

{
  IntroFishingProperties *this;
  
  this = ::operator_new(0x78);
  IntroFishingProperties(this);
  return this;
}


/* IntroFishingProperties::~IntroFishingProperties() */

void __thiscall IntroFishingProperties::~IntroFishingProperties(IntroFishingProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068e4860;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroFishingProperties::~IntroFishingProperties() */

void __thiscall IntroFishingProperties::~IntroFishingProperties(IntroFishingProperties *this)

{
  ~IntroFishingProperties(this);
  AK::FreeHook(this);
  return;
}


/* IntroFishingProperties::GetModuleClass() const */

long * IntroFishingProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroFishing::sClass != (long *)0x0) {
    return IntroFishing::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroFishing::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroFishing",uVar2,IntroFishing::StaticNew);
  IntroFishing::StaticClassInit();
  return IntroFishing::sClass;
}

