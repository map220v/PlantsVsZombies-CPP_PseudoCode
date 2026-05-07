// Class: TutorialLevel3Properties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel3Properties::StaticClassInit() */

void TutorialLevel3Properties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel3Properties");
    (*pcVar2)(plVar1,asStack_10,FUN_044c5b20,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel3Properties::StaticGetClass() */

long * TutorialLevel3Properties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel3Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel3Properties::GetClass() const */

long * TutorialLevel3Properties::GetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel3Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel3Properties::GetModuleClass() const */

long * TutorialLevel3Properties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TutorialLevel3::sClass != (long *)0x0) {
    return TutorialLevel3::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TutorialLevel3::sClass = plVar1;
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel3",uVar2,TutorialLevel3::StaticNew);
  TutorialLevel3::StaticClassInit();
  return TutorialLevel3::sClass;
}


/* TutorialLevel3Properties::TutorialLevel3Properties() */

void __thiscall TutorialLevel3Properties::TutorialLevel3Properties(TutorialLevel3Properties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06854060;
  return;
}


/* TutorialLevel3Properties::StaticNew() */

TutorialLevel3Properties * TutorialLevel3Properties::StaticNew(void)

{
  TutorialLevel3Properties *this;
  
  this = ::operator_new(0x78);
  TutorialLevel3Properties(this);
  return this;
}


/* TutorialLevel3Properties::~TutorialLevel3Properties() */

void __thiscall TutorialLevel3Properties::~TutorialLevel3Properties(TutorialLevel3Properties *this)

{
  *(undefined ***)this = &PTR_GetClass_06854060;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* TutorialLevel3Properties::~TutorialLevel3Properties() */

void __thiscall TutorialLevel3Properties::~TutorialLevel3Properties(TutorialLevel3Properties *this)

{
  ~TutorialLevel3Properties(this);
  AK::FreeHook(this);
  return;
}

