// Class: BossKillTimeChallengeProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossKillTimeChallengeProperties::StaticClassInit() */

void BossKillTimeChallengeProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossKillTimeChallengeProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04bb16cc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossKillTimeChallengeProperties::StaticGetClass() */

long * BossKillTimeChallengeProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossKillTimeChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossKillTimeChallengeProperties::GetClass() const */

long * BossKillTimeChallengeProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"BossKillTimeChallengeProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossKillTimeChallengeProperties::GetModuleClass() const */

long * BossKillTimeChallengeProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BossKillTimeChallengeModule::sClass != (long *)0x0) {
    return BossKillTimeChallengeModule::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BossKillTimeChallengeModule::sClass = plVar1;
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BossKillTimeChallengeModule",uVar2,BossKillTimeChallengeModule::StaticNew);
  BossKillTimeChallengeModule::StaticClassInit();
  return BossKillTimeChallengeModule::sClass;
}


/* BossKillTimeChallengeProperties::BossKillTimeChallengeProperties() */

void __thiscall
BossKillTimeChallengeProperties::BossKillTimeChallengeProperties
          (BossKillTimeChallengeProperties *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined ***)this = &PTR_GetClass_06976ac0;
  return;
}


/* BossKillTimeChallengeProperties::StaticNew() */

BossKillTimeChallengeProperties * BossKillTimeChallengeProperties::StaticNew(void)

{
  BossKillTimeChallengeProperties *this;
  
  this = ::operator_new(0x48);
  BossKillTimeChallengeProperties(this);
  return this;
}


/* BossKillTimeChallengeProperties::~BossKillTimeChallengeProperties() */

void __thiscall
BossKillTimeChallengeProperties::~BossKillTimeChallengeProperties
          (BossKillTimeChallengeProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06976ac0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BossKillTimeChallengeProperties::~BossKillTimeChallengeProperties() */

void __thiscall
BossKillTimeChallengeProperties::~BossKillTimeChallengeProperties
          (BossKillTimeChallengeProperties *this)

{
  ~BossKillTimeChallengeProperties(this);
  AK::FreeHook(this);
  return;
}

