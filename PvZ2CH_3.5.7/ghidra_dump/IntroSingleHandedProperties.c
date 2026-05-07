// Class: IntroSingleHandedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroSingleHandedProperties::StaticClassInit() */

void IntroSingleHandedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroSingleHandedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e470f8,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroSingleHandedProperties::StaticGetClass() */

long * IntroSingleHandedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroSingleHandedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroSingleHandedProperties::GetClass() const */

long * IntroSingleHandedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroSingleHandedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroSingleHandedProperties::GetModuleClass() const */

long * IntroSingleHandedProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroSingleHanded::sClass != (long *)0x0) {
    return IntroSingleHanded::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroSingleHanded::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroSingleHanded",uVar2,IntroSingleHanded::StaticNew);
  IntroSingleHanded::StaticClassInit();
  return IntroSingleHanded::sClass;
}


/* IntroSingleHandedProperties::IntroSingleHandedProperties() */

void __thiscall
IntroSingleHandedProperties::IntroSingleHandedProperties(IntroSingleHandedProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 6;
  *(undefined ***)this = &PTR_GetClass_0678b1a0;
  return;
}


/* IntroSingleHandedProperties::StaticNew() */

IntroSingleHandedProperties * IntroSingleHandedProperties::StaticNew(void)

{
  IntroSingleHandedProperties *this;
  
  this = ::operator_new(0x80);
  IntroSingleHandedProperties(this);
  return this;
}


/* IntroSingleHandedProperties::~IntroSingleHandedProperties() */

void __thiscall
IntroSingleHandedProperties::~IntroSingleHandedProperties(IntroSingleHandedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678b1a0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroSingleHandedProperties::~IntroSingleHandedProperties() */

void __thiscall
IntroSingleHandedProperties::~IntroSingleHandedProperties(IntroSingleHandedProperties *this)

{
  ~IntroSingleHandedProperties(this);
  AK::FreeHook(this);
  return;
}

