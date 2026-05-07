// Class: IntroCinemaProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IntroCinemaProperties::StaticClassInit() */

void IntroCinemaProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"IntroCinemaProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e419dc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IntroCinemaProperties::StaticGetClass() */

long * IntroCinemaProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IntroCinemaProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroCinemaProperties::GetClass() const */

long * IntroCinemaProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"IntroCinemaProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IntroCinemaProperties::GetModuleClass() const */

long * IntroCinemaProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (IntroCinema::sClass != (long *)0x0) {
    return IntroCinema::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  IntroCinema::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"IntroCinema",uVar2,IntroCinema::StaticNew);
  IntroCinema::StaticClassInit();
  return IntroCinema::sClass;
}


/* IntroCinemaProperties::IntroCinemaProperties() */

void __thiscall IntroCinemaProperties::IntroCinemaProperties(IntroCinemaProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678af70;
  return;
}


/* IntroCinemaProperties::StaticNew() */

IntroCinemaProperties * IntroCinemaProperties::StaticNew(void)

{
  IntroCinemaProperties *this;
  
  this = ::operator_new(0x78);
  IntroCinemaProperties(this);
  return this;
}


/* IntroCinemaProperties::~IntroCinemaProperties() */

void __thiscall IntroCinemaProperties::~IntroCinemaProperties(IntroCinemaProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678af70;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* IntroCinemaProperties::~IntroCinemaProperties() */

void __thiscall IntroCinemaProperties::~IntroCinemaProperties(IntroCinemaProperties *this)

{
  ~IntroCinemaProperties(this);
  AK::FreeHook(this);
  return;
}

