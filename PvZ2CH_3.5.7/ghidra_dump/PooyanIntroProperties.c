// Class: PooyanIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanIntroProperties::StaticClassInit() */

void PooyanIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04784d90,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanIntroProperties::StaticGetClass() */

long * PooyanIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PooyanIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanIntroProperties::GetClass() const */

long * PooyanIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PooyanIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanIntroProperties::PooyanIntroProperties() */

void __thiscall PooyanIntroProperties::PooyanIntroProperties(PooyanIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068d88f0;
  return;
}


/* PooyanIntroProperties::StaticNew() */

PooyanIntroProperties * PooyanIntroProperties::StaticNew(void)

{
  PooyanIntroProperties *this;
  
  this = ::operator_new(0x80);
  PooyanIntroProperties(this);
  return this;
}


/* PooyanIntroProperties::~PooyanIntroProperties() */

void __thiscall PooyanIntroProperties::~PooyanIntroProperties(PooyanIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_068d88f0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PooyanIntroProperties::~PooyanIntroProperties() */

void __thiscall PooyanIntroProperties::~PooyanIntroProperties(PooyanIntroProperties *this)

{
  ~PooyanIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* PooyanIntroProperties::GetModuleClass() const */

long * PooyanIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PooyanIntro::sClass != (long *)0x0) {
    return PooyanIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PooyanIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PooyanIntro",uVar2,PooyanIntro::StaticNew);
  PooyanIntro::StaticClassInit();
  return PooyanIntro::sClass;
}

