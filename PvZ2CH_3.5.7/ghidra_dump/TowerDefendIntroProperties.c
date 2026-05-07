// Class: TowerDefendIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TowerDefendIntroProperties::StaticClassInit() */

void TowerDefendIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TowerDefendIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03e4c474,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TowerDefendIntroProperties::StaticGetClass() */

long * TowerDefendIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendIntroProperties::GetClass() const */

long * TowerDefendIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"TowerDefendIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TowerDefendIntroProperties::TowerDefendIntroProperties() */

void __thiscall
TowerDefendIntroProperties::TowerDefendIntroProperties(TowerDefendIntroProperties *this)

{
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0678b7f0;
  return;
}


/* TowerDefendIntroProperties::StaticNew() */

TowerDefendIntroProperties * TowerDefendIntroProperties::StaticNew(void)

{
  TowerDefendIntroProperties *this;
  
  this = ::operator_new(0x78);
  TowerDefendIntroProperties(this);
  return this;
}


/* TowerDefendIntroProperties::~TowerDefendIntroProperties() */

void __thiscall
TowerDefendIntroProperties::~TowerDefendIntroProperties(TowerDefendIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0678b7f0;
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* TowerDefendIntroProperties::~TowerDefendIntroProperties() */

void __thiscall
TowerDefendIntroProperties::~TowerDefendIntroProperties(TowerDefendIntroProperties *this)

{
  ~TowerDefendIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* TowerDefendIntroProperties::GetModuleClass() const */

long * TowerDefendIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TowerDefendIntro::sClass != (long *)0x0) {
    return TowerDefendIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TowerDefendIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"TowerDefendIntro",uVar2,TowerDefendIntro::StaticNew);
  TowerDefendIntro::StaticClassInit();
  return TowerDefendIntro::sClass;
}

