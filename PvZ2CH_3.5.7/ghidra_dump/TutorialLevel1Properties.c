// Class: TutorialLevel1Properties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel1Properties::StaticClassInit() */

void TutorialLevel1Properties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel1Properties");
    (*pcVar2)(plVar1,asStack_10,FUN_044bf668,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel1Properties::StaticGetClass() */

long * TutorialLevel1Properties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel1Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel1Properties::GetClass() const */

long * TutorialLevel1Properties::GetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel1Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel1Properties::GetModuleClass() const */

long * TutorialLevel1Properties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TutorialLevel1::sClass != (long *)0x0) {
    return TutorialLevel1::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TutorialLevel1::sClass = plVar1;
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel1",uVar2,TutorialLevel1::StaticNew);
  TutorialLevel1::StaticClassInit();
  return TutorialLevel1::sClass;
}


/* TutorialLevel1Properties::TutorialLevel1Properties() */

void __thiscall TutorialLevel1Properties::TutorialLevel1Properties(TutorialLevel1Properties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06853d60;
  return;
}


/* TutorialLevel1Properties::StaticNew() */

TutorialLevel1Properties * TutorialLevel1Properties::StaticNew(void)

{
  TutorialLevel1Properties *this;
  
  this = ::operator_new(0x78);
  TutorialLevel1Properties(this);
  return this;
}


/* TutorialLevel1Properties::~TutorialLevel1Properties() */

void __thiscall TutorialLevel1Properties::~TutorialLevel1Properties(TutorialLevel1Properties *this)

{
  *(undefined ***)this = &PTR_GetClass_06853d60;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* TutorialLevel1Properties::~TutorialLevel1Properties() */

void __thiscall TutorialLevel1Properties::~TutorialLevel1Properties(TutorialLevel1Properties *this)

{
  ~TutorialLevel1Properties(this);
  AK::FreeHook(this);
  return;
}

