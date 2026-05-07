// Class: TutorialPeashooterDeathProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialPeashooterDeathProperties::StaticClassInit() */

void TutorialPeashooterDeathProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"TutorialPeashooterDeathProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_044caf48,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TutorialPeashooterDeathProperties::StaticGetClass() */

long * TutorialPeashooterDeathProperties::StaticGetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialPeashooterDeathProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialPeashooterDeathProperties::GetClass() const */

long * TutorialPeashooterDeathProperties::GetClass(void)

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
  uVar2 = LevelModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialPeashooterDeathProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TutorialPeashooterDeathProperties::GetModuleClass() const */

long * TutorialPeashooterDeathProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (TutorialPeashooterDeathModule::sClass != (long *)0x0) {
    return TutorialPeashooterDeathModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  TutorialPeashooterDeathModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"TutorialPeashooterDeathModule",uVar2,TutorialPeashooterDeathModule::StaticNew);
  return TutorialPeashooterDeathModule::sClass;
}


/* TutorialPeashooterDeathProperties::TutorialPeashooterDeathProperties() */

void __thiscall
TutorialPeashooterDeathProperties::TutorialPeashooterDeathProperties
          (TutorialPeashooterDeathProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06854360;
  return;
}


/* TutorialPeashooterDeathProperties::StaticNew() */

TutorialPeashooterDeathProperties * TutorialPeashooterDeathProperties::StaticNew(void)

{
  TutorialPeashooterDeathProperties *this;
  
  this = ::operator_new(0x40);
  TutorialPeashooterDeathProperties(this);
  return this;
}


/* TutorialPeashooterDeathProperties::~TutorialPeashooterDeathProperties() */

void __thiscall
TutorialPeashooterDeathProperties::~TutorialPeashooterDeathProperties
          (TutorialPeashooterDeathProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06854360;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* TutorialPeashooterDeathProperties::~TutorialPeashooterDeathProperties() */

void __thiscall
TutorialPeashooterDeathProperties::~TutorialPeashooterDeathProperties
          (TutorialPeashooterDeathProperties *this)

{
  ~TutorialPeashooterDeathProperties(this);
  AK::FreeHook(this);
  return;
}

