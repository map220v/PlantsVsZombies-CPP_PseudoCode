// Class: PirateCannonTutorialProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PirateCannonTutorialProperties::StaticClassInit() */

void PirateCannonTutorialProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PirateCannonTutorialProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03f16be0,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PirateCannonTutorialProperties::StaticGetClass() */

long * PirateCannonTutorialProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PirateCannonTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PirateCannonTutorialProperties::GetClass() const */

long * PirateCannonTutorialProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PirateCannonTutorialProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PirateCannonTutorialProperties::GetModuleClass() const */

long * PirateCannonTutorialProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PirateCannonTutorialIntro::sClass != (long *)0x0) {
    return PirateCannonTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PirateCannonTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PirateCannonTutorialIntro",uVar2,PirateCannonTutorialIntro::StaticNew);
  return PirateCannonTutorialIntro::sClass;
}


/* PirateCannonTutorialProperties::PirateCannonTutorialProperties() */

void __thiscall
PirateCannonTutorialProperties::PirateCannonTutorialProperties(PirateCannonTutorialProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  this[0x78] = (PirateCannonTutorialProperties)0x0;
  *(undefined ***)this = &PTR_GetClass_06796980;
  return;
}


/* PirateCannonTutorialProperties::StaticNew() */

PirateCannonTutorialProperties * PirateCannonTutorialProperties::StaticNew(void)

{
  PirateCannonTutorialProperties *this;
  
  this = ::operator_new(0x80);
  PirateCannonTutorialProperties(this);
  return this;
}


/* PirateCannonTutorialProperties::~PirateCannonTutorialProperties() */

void __thiscall
PirateCannonTutorialProperties::~PirateCannonTutorialProperties
          (PirateCannonTutorialProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06796980;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PirateCannonTutorialProperties::~PirateCannonTutorialProperties() */

void __thiscall
PirateCannonTutorialProperties::~PirateCannonTutorialProperties
          (PirateCannonTutorialProperties *this)

{
  ~PirateCannonTutorialProperties(this);
  AK::FreeHook(this);
  return;
}

