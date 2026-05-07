// Class: OakTrainIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OakTrainIntroProperties::StaticClassInit() */

void OakTrainIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"OakTrainIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e49978,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OakTrainIntroProperties::StaticGetClass() */

long * OakTrainIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OakTrainIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakTrainIntroProperties::GetClass() const */

long * OakTrainIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"OakTrainIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OakTrainIntroProperties::OakTrainIntroProperties() */

void __thiscall OakTrainIntroProperties::OakTrainIntroProperties(OakTrainIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678b560;
  return;
}


/* OakTrainIntroProperties::StaticNew() */

OakTrainIntroProperties * OakTrainIntroProperties::StaticNew(void)

{
  OakTrainIntroProperties *this;
  
  this = ::operator_new(0x78);
  OakTrainIntroProperties(this);
  return this;
}


/* OakTrainIntroProperties::~OakTrainIntroProperties() */

void __thiscall OakTrainIntroProperties::~OakTrainIntroProperties(OakTrainIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678b560;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* OakTrainIntroProperties::~OakTrainIntroProperties() */

void __thiscall OakTrainIntroProperties::~OakTrainIntroProperties(OakTrainIntroProperties *this)

{
  ~OakTrainIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* OakTrainIntroProperties::GetModuleClass() const */

long * OakTrainIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (OakTrainIntro::sClass != (long *)0x0) {
    return OakTrainIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  OakTrainIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"OakTrainIntro",uVar2,OakTrainIntro::StaticNew);
  OakTrainIntro::StaticClassInit();
  return OakTrainIntro::sClass;
}

