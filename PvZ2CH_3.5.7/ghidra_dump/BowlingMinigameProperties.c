// Class: BowlingMinigameProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingMinigameProperties::StaticClassInit() */

void BowlingMinigameProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingMinigameProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_048485c8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingMinigameProperties::StaticGetClass() */

long * BowlingMinigameProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingMinigameProperties::GetClass() const */

long * BowlingMinigameProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingMinigameProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingMinigameProperties::GetModuleClass() const */

long * BowlingMinigameProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BowlingMinigameModule::sClass != (long *)0x0) {
    return BowlingMinigameModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BowlingMinigameModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingMinigameModule",uVar2,BowlingMinigameModule::StaticNew);
  BowlingMinigameModule::StaticClassInit();
  return BowlingMinigameModule::sClass;
}


/* BowlingMinigameProperties::BowlingMinigameProperties() */

void __thiscall
BowlingMinigameProperties::BowlingMinigameProperties(BowlingMinigameProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 8;
  *(undefined ***)this = &PTR_GetClass_0690a640;
  return;
}


/* BowlingMinigameProperties::StaticNew() */

BowlingMinigameProperties * BowlingMinigameProperties::StaticNew(void)

{
  BowlingMinigameProperties *this;
  
  this = ::operator_new(0x48);
  BowlingMinigameProperties(this);
  return this;
}


/* BowlingMinigameProperties::~BowlingMinigameProperties() */

void __thiscall
BowlingMinigameProperties::~BowlingMinigameProperties(BowlingMinigameProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0690a640;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BowlingMinigameProperties::~BowlingMinigameProperties() */

void __thiscall
BowlingMinigameProperties::~BowlingMinigameProperties(BowlingMinigameProperties *this)

{
  ~BowlingMinigameProperties(this);
  AK::FreeHook(this);
  return;
}

