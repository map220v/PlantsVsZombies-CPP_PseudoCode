// Class: TutorialLevel4Properties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialLevel4Properties::StaticClassInit() */

void TutorialLevel4Properties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialLevel4Properties");
    (*pcVar2)(plVar1,asStack_10,FUN_044c8eb0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialLevel4Properties::StaticGetClass() */

long * TutorialLevel4Properties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel4Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel4Properties::GetClass() const */

long * TutorialLevel4Properties::GetClass(void)

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
  (*pcVar3)(plVar1,"TutorialLevel4Properties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialLevel4Properties::GetModuleClass() const */

long * TutorialLevel4Properties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TutorialLevel4::sClass != (long *)0x0) {
    return TutorialLevel4::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TutorialLevel4::sClass = plVar1;
  uVar2 = IntroModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialLevel4",uVar2,TutorialLevel4::StaticNew);
  TutorialLevel4::StaticClassInit();
  return TutorialLevel4::sClass;
}


/* TutorialLevel4Properties::TutorialLevel4Properties() */

void __thiscall TutorialLevel4Properties::TutorialLevel4Properties(TutorialLevel4Properties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_068541e0;
  return;
}


/* TutorialLevel4Properties::StaticNew() */

TutorialLevel4Properties * TutorialLevel4Properties::StaticNew(void)

{
  TutorialLevel4Properties *this;
  
  this = ::operator_new(0x78);
  TutorialLevel4Properties(this);
  return this;
}


/* TutorialLevel4Properties::~TutorialLevel4Properties() */

void __thiscall TutorialLevel4Properties::~TutorialLevel4Properties(TutorialLevel4Properties *this)

{
  *(undefined ***)this = &PTR_GetClass_068541e0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* TutorialLevel4Properties::~TutorialLevel4Properties() */

void __thiscall TutorialLevel4Properties::~TutorialLevel4Properties(TutorialLevel4Properties *this)

{
  ~TutorialLevel4Properties(this);
  AK::FreeHook(this);
  return;
}

