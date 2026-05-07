// Class: WireGelsemiumTutorialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WireGelsemiumTutorialProperties::StaticClassInit() */

void WireGelsemiumTutorialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"WireGelsemiumTutorialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038ab0c4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WireGelsemiumTutorialProperties::StaticGetClass() */

long * WireGelsemiumTutorialProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumTutorialProperties::GetClass() const */

long * WireGelsemiumTutorialProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"WireGelsemiumTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WireGelsemiumTutorialProperties::GetModuleClass() const */

long * WireGelsemiumTutorialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WireGelsemiumTutorialModule::sClass != (long *)0x0) {
    return WireGelsemiumTutorialModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WireGelsemiumTutorialModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"WireGelsemiumTutorialModule",uVar2,WireGelsemiumTutorialModule::StaticNew);
  WireGelsemiumTutorialModule::StaticClassInit();
  return WireGelsemiumTutorialModule::sClass;
}


/* WireGelsemiumTutorialProperties::WireGelsemiumTutorialProperties() */

void __thiscall
WireGelsemiumTutorialProperties::WireGelsemiumTutorialProperties
          (WireGelsemiumTutorialProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b3e50;
  return;
}


/* WireGelsemiumTutorialProperties::StaticNew() */

WireGelsemiumTutorialProperties * WireGelsemiumTutorialProperties::StaticNew(void)

{
  WireGelsemiumTutorialProperties *this;
  
  this = ::operator_new(0x78);
  WireGelsemiumTutorialProperties(this);
  return this;
}


/* WireGelsemiumTutorialProperties::~WireGelsemiumTutorialProperties() */

void __thiscall
WireGelsemiumTutorialProperties::~WireGelsemiumTutorialProperties
          (WireGelsemiumTutorialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b3e50;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* WireGelsemiumTutorialProperties::~WireGelsemiumTutorialProperties() */

void __thiscall
WireGelsemiumTutorialProperties::~WireGelsemiumTutorialProperties
          (WireGelsemiumTutorialProperties *this)

{
  ~WireGelsemiumTutorialProperties(this);
  AK::FreeHook(this);
  return;
}

