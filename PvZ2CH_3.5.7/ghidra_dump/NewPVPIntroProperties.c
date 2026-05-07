// Class: NewPVPIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPIntroProperties::StaticClassInit() */

void NewPVPIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034b9544,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPIntroProperties::StaticGetClass() */

long * NewPVPIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPIntroProperties::GetClass() const */

long * NewPVPIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPIntroProperties::GetModuleClass() const */

long * NewPVPIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewPVPIntro::sClass != (long *)0x0) {
    return NewPVPIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewPVPIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPIntro",uVar2,NewPVPIntro::StaticNew);
  NewPVPIntro::StaticClassInit();
  return NewPVPIntro::sClass;
}


/* NewPVPIntroProperties::NewPVPIntroProperties() */

void __thiscall NewPVPIntroProperties::NewPVPIntroProperties(NewPVPIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06647110;
  return;
}


/* NewPVPIntroProperties::StaticNew() */

NewPVPIntroProperties * NewPVPIntroProperties::StaticNew(void)

{
  NewPVPIntroProperties *this;
  
  this = ::operator_new(0x78);
  NewPVPIntroProperties(this);
  return this;
}


/* NewPVPIntroProperties::~NewPVPIntroProperties() */

void __thiscall NewPVPIntroProperties::~NewPVPIntroProperties(NewPVPIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06647110;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* NewPVPIntroProperties::~NewPVPIntroProperties() */

void __thiscall NewPVPIntroProperties::~NewPVPIntroProperties(NewPVPIntroProperties *this)

{
  ~NewPVPIntroProperties(this);
  AK::FreeHook(this);
  return;
}

