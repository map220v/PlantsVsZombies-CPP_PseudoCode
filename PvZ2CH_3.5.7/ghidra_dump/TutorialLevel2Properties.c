// Class: TutorialLevel2Properties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel2Properties::StaticClassInit() */

void TutorialLevel2Properties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel2Properties");
    (*pcVar2)(plVar1,asStack_10,FUN_044c2d34,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel2Properties::StaticGetClass() */

long * TutorialLevel2Properties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel2Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel2Properties::GetClass() const */

long * TutorialLevel2Properties::GetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel2Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel2Properties::GetModuleClass() const */

long * TutorialLevel2Properties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TutorialLevel2::sClass != (long *)0x0) {
    return TutorialLevel2::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TutorialLevel2::sClass = plVar1;
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel2",uVar2,TutorialLevel2::StaticNew);
  TutorialLevel2::StaticClassInit();
  return TutorialLevel2::sClass;
}


/* TutorialLevel2Properties::TutorialLevel2Properties() */

void __thiscall TutorialLevel2Properties::TutorialLevel2Properties(TutorialLevel2Properties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06853ee0;
  return;
}


/* TutorialLevel2Properties::StaticNew() */

TutorialLevel2Properties * TutorialLevel2Properties::StaticNew(void)

{
  TutorialLevel2Properties *this;
  
  this = ::operator_new(0x78);
  TutorialLevel2Properties(this);
  return this;
}


/* TutorialLevel2Properties::~TutorialLevel2Properties() */

void __thiscall TutorialLevel2Properties::~TutorialLevel2Properties(TutorialLevel2Properties *this)

{
  *(undefined ***)this = &PTR_GetClass_06853ee0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* TutorialLevel2Properties::~TutorialLevel2Properties() */

void __thiscall TutorialLevel2Properties::~TutorialLevel2Properties(TutorialLevel2Properties *this)

{
  ~TutorialLevel2Properties(this);
  AK::FreeHook(this);
  return;
}

