// Class: PowerupCukeTutorialIntroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntroProperties::PowerupCukeTutorialIntroProperties() */

void __thiscall
PowerupCukeTutorialIntroProperties::PowerupCukeTutorialIntroProperties
          (PowerupCukeTutorialIntroProperties *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ___stack_chk_guard;
  StandardLevelIntroProperties::StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06832d70;
  std::string::string((string *)(this + 0x78),"");
  nop();
  std::string::string((string *)(this + 0x80),"");
  nop();
  std::string::string((string *)(this + 0x88),"");
  nop();
  this[0x90] = (PowerupCukeTutorialIntroProperties)0x0;
  lVar2 = ___stack_chk_guard;
  this[0x91] = (PowerupCukeTutorialIntroProperties)0x0;
  if (lVar1 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntroProperties::~PowerupCukeTutorialIntroProperties() */

void __thiscall
PowerupCukeTutorialIntroProperties::~PowerupCukeTutorialIntroProperties
          (PowerupCukeTutorialIntroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06832d70;
  std::string::~string((string *)(this + 0x88));
  std::string::~string((string *)(this + 0x80));
  std::string::~string((string *)(this + 0x78));
  StandardLevelIntroProperties::~StandardLevelIntroProperties((StandardLevelIntroProperties *)this);
  return;
}


/* PowerupCukeTutorialIntroProperties::~PowerupCukeTutorialIntroProperties() */

void __thiscall
PowerupCukeTutorialIntroProperties::~PowerupCukeTutorialIntroProperties
          (PowerupCukeTutorialIntroProperties *this)

{
  ~PowerupCukeTutorialIntroProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupCukeTutorialIntroProperties::StaticClassInit() */

void PowerupCukeTutorialIntroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupCukeTutorialIntroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0431119c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupCukeTutorialIntroProperties::StaticGetClass() */

long * PowerupCukeTutorialIntroProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PowerupCukeTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupCukeTutorialIntroProperties::GetClass() const */

long * PowerupCukeTutorialIntroProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"PowerupCukeTutorialIntroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupCukeTutorialIntroProperties::StaticNew() */

PowerupCukeTutorialIntroProperties * PowerupCukeTutorialIntroProperties::StaticNew(void)

{
  PowerupCukeTutorialIntroProperties *this;
  
  this = ::operator_new(0x98);
  PowerupCukeTutorialIntroProperties(this);
  return this;
}


/* PowerupCukeTutorialIntroProperties::GetModuleClass() const */

long * PowerupCukeTutorialIntroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PowerupCukeTutorialIntro::sClass != (long *)0x0) {
    return PowerupCukeTutorialIntro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PowerupCukeTutorialIntro::sClass = plVar1;
  uVar2 = StandardLevelIntro::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupCukeTutorialIntro",uVar2,PowerupCukeTutorialIntro::StaticNew);
  PowerupCukeTutorialIntro::StaticClassInit();
  return PowerupCukeTutorialIntro::sClass;
}

