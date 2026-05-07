// Class: IntroEvilDaveProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroEvilDaveProperties::StaticClassInit() */

void IntroEvilDaveProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroEvilDaveProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e485e8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroEvilDaveProperties::StaticGetClass() */

long * IntroEvilDaveProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroEvilDaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroEvilDaveProperties::GetClass() const */

long * IntroEvilDaveProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroEvilDaveProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroEvilDaveProperties::GetModuleClass() const */

long * IntroEvilDaveProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroEvilDave::sClass != (long *)0x0) {
    return IntroEvilDave::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroEvilDave::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroEvilDave",uVar2,IntroEvilDave::StaticNew);
  IntroEvilDave::StaticClassInit();
  return IntroEvilDave::sClass;
}


/* IntroEvilDaveProperties::IntroEvilDaveProperties() */

void __thiscall IntroEvilDaveProperties::IntroEvilDaveProperties(IntroEvilDaveProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678b380;
  return;
}


/* IntroEvilDaveProperties::StaticNew() */

IntroEvilDaveProperties * IntroEvilDaveProperties::StaticNew(void)

{
  IntroEvilDaveProperties *this;
  
  this = ::operator_new(0x78);
  IntroEvilDaveProperties(this);
  return this;
}


/* IntroEvilDaveProperties::~IntroEvilDaveProperties() */

void __thiscall IntroEvilDaveProperties::~IntroEvilDaveProperties(IntroEvilDaveProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678b380;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroEvilDaveProperties::~IntroEvilDaveProperties() */

void __thiscall IntroEvilDaveProperties::~IntroEvilDaveProperties(IntroEvilDaveProperties *this)

{
  ~IntroEvilDaveProperties(this);
  AK::FreeHook(this);
  return;
}

