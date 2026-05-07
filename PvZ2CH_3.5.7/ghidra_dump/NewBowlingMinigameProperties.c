// Class: NewBowlingMinigameProperties


/* NewBowlingMinigameProperties::GetModuleClass() const */

long * NewBowlingMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (NewBowlingMinigameModule::sClass != (long *)0x0) {
    return NewBowlingMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  NewBowlingMinigameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"NewBowlingMinigameModule",uVar2,NewBowlingMinigameModule::StaticNew);
  NewBowlingMinigameModule::StaticClassInit();
  return NewBowlingMinigameModule::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewBowlingMinigameProperties::StaticClassInit() */

void NewBowlingMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewBowlingMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04e0a0b0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewBowlingMinigameProperties::StaticGetClass() */

long * NewBowlingMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewBowlingMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewBowlingMinigameProperties::GetClass() const */

long * NewBowlingMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"NewBowlingMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewBowlingMinigameProperties::NewBowlingMinigameProperties() */

void __thiscall
NewBowlingMinigameProperties::NewBowlingMinigameProperties(NewBowlingMinigameProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069d3440;
  return;
}


/* NewBowlingMinigameProperties::StaticNew() */

NewBowlingMinigameProperties * NewBowlingMinigameProperties::StaticNew(void)

{
  NewBowlingMinigameProperties *this;
  
  this = ::operator_new(0x40);
  NewBowlingMinigameProperties(this);
  return this;
}


/* NewBowlingMinigameProperties::~NewBowlingMinigameProperties() */

void __thiscall
NewBowlingMinigameProperties::~NewBowlingMinigameProperties(NewBowlingMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d3440;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* NewBowlingMinigameProperties::~NewBowlingMinigameProperties() */

void __thiscall
NewBowlingMinigameProperties::~NewBowlingMinigameProperties(NewBowlingMinigameProperties *this)

{
  ~NewBowlingMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

