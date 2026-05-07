// Class: EliminateIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EliminateIntroProperties::StaticClassInit() */

void EliminateIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"EliminateIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e54364,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EliminateIntroProperties::StaticGetClass() */

long * EliminateIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EliminateIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateIntroProperties::GetClass() const */

long * EliminateIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"EliminateIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EliminateIntroProperties::EliminateIntroProperties() */

void __thiscall EliminateIntroProperties::EliminateIntroProperties(EliminateIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678bf20;
  return;
}


/* EliminateIntroProperties::StaticNew() */

EliminateIntroProperties * EliminateIntroProperties::StaticNew(void)

{
  EliminateIntroProperties *this;
  
  this = ::operator_new(0x78);
  EliminateIntroProperties(this);
  return this;
}


/* EliminateIntroProperties::~EliminateIntroProperties() */

void __thiscall EliminateIntroProperties::~EliminateIntroProperties(EliminateIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678bf20;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* EliminateIntroProperties::~EliminateIntroProperties() */

void __thiscall EliminateIntroProperties::~EliminateIntroProperties(EliminateIntroProperties *this)

{
  ~EliminateIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* EliminateIntroProperties::GetModuleClass() const */

long * EliminateIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (EliminateIntro::sClass != (long *)0x0) {
    return EliminateIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  EliminateIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"EliminateIntro",uVar2,EliminateIntro::StaticNew);
  EliminateIntro::StaticClassInit();
  return EliminateIntro::sClass;
}

