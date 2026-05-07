// Class: CamelMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CamelMinigameProperties::StaticClassInit() */

void CamelMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CamelMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03bb144c,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CamelMinigameProperties::StaticGetClass() */

long * CamelMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CamelMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CamelMinigameProperties::GetClass() const */

long * CamelMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CamelMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CamelMinigameProperties::GetModuleClass() const */

long * CamelMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (CamelMinigameModule::sClass != (long *)0x0) {
    return CamelMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  CamelMinigameModule::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"CamelMinigameModule",uVar2,CamelMinigameModule::StaticNew);
  CamelMinigameModule::StaticClassInit();
  return CamelMinigameModule::sClass;
}


/* CamelMinigameProperties::CamelMinigameProperties() */

void __thiscall CamelMinigameProperties::CamelMinigameProperties(CamelMinigameProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined4 *)(this + 0x80) = 0x3f000000;
  this[0x78] = (CamelMinigameProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_06737b30;
  *(undefined4 *)(this + 0x7c) = 4;
  *(undefined4 *)(this + 0x94) = 0x43fa0000;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x98) = 0x43480000;
  *(undefined4 *)(this + 0x88) = 0x3fc00000;
  *(undefined4 *)(this + 0x9c) = 0x44160000;
  *(undefined4 *)(this + 0x8c) = 0x40000000;
  *(undefined4 *)(this + 0x90) = 0x3ea8f5c3;
  *(undefined4 *)(this + 0xa0) = 0x42480000;
  return;
}


/* CamelMinigameProperties::StaticNew() */

CamelMinigameProperties * CamelMinigameProperties::StaticNew(void)

{
  CamelMinigameProperties *this;
  
  this = ::operator_new(0xa8);
  CamelMinigameProperties(this);
  return this;
}


/* CamelMinigameProperties::~CamelMinigameProperties() */

void __thiscall CamelMinigameProperties::~CamelMinigameProperties(CamelMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06737b30;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* CamelMinigameProperties::~CamelMinigameProperties() */

void __thiscall CamelMinigameProperties::~CamelMinigameProperties(CamelMinigameProperties *this)

{
  ~CamelMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

