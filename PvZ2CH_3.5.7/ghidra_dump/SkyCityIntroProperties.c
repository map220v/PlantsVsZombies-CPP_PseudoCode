// Class: SkyCityIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkyCityIntroProperties::StaticClassInit() */

void SkyCityIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkyCityIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e567a8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkyCityIntroProperties::StaticGetClass() */

long * SkyCityIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkyCityIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCityIntroProperties::GetClass() const */

long * SkyCityIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"SkyCityIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkyCityIntroProperties::SkyCityIntroProperties() */

void __thiscall SkyCityIntroProperties::SkyCityIntroProperties(SkyCityIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678c170;
  return;
}


/* SkyCityIntroProperties::StaticNew() */

SkyCityIntroProperties * SkyCityIntroProperties::StaticNew(void)

{
  SkyCityIntroProperties *this;
  
  this = ::operator_new(0x78);
  SkyCityIntroProperties(this);
  return this;
}


/* SkyCityIntroProperties::~SkyCityIntroProperties() */

void __thiscall SkyCityIntroProperties::~SkyCityIntroProperties(SkyCityIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678c170;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* SkyCityIntroProperties::~SkyCityIntroProperties() */

void __thiscall SkyCityIntroProperties::~SkyCityIntroProperties(SkyCityIntroProperties *this)

{
  ~SkyCityIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* SkyCityIntroProperties::GetModuleClass() const */

long * SkyCityIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (SkyCityIntro::sClass != (long *)0x0) {
    return SkyCityIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  SkyCityIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"SkyCityIntro",uVar2,SkyCityIntro::StaticNew);
  SkyCityIntro::StaticClassInit();
  return SkyCityIntro::sClass;
}

