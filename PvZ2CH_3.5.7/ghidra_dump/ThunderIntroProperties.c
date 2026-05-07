// Class: ThunderIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderIntroProperties::StaticClassInit() */

void ThunderIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThunderIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e5cb10,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderIntroProperties::StaticGetClass() */

long * ThunderIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThunderIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderIntroProperties::GetClass() const */

long * ThunderIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ThunderIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderIntroProperties::ThunderIntroProperties() */

void __thiscall ThunderIntroProperties::ThunderIntroProperties(ThunderIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678c6a0;
  return;
}


/* ThunderIntroProperties::StaticNew() */

ThunderIntroProperties * ThunderIntroProperties::StaticNew(void)

{
  ThunderIntroProperties *this;
  
  this = ::operator_new(0x78);
  ThunderIntroProperties(this);
  return this;
}


/* ThunderIntroProperties::~ThunderIntroProperties() */

void __thiscall ThunderIntroProperties::~ThunderIntroProperties(ThunderIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678c6a0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* ThunderIntroProperties::~ThunderIntroProperties() */

void __thiscall ThunderIntroProperties::~ThunderIntroProperties(ThunderIntroProperties *this)

{
  ~ThunderIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* ThunderIntroProperties::GetModuleClass() const */

long * ThunderIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ThunderIntro::sClass != (long *)0x0) {
    return ThunderIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ThunderIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"ThunderIntro",uVar2,ThunderIntro::StaticNew);
  ThunderIntro::StaticClassInit();
  return ThunderIntro::sClass;
}

