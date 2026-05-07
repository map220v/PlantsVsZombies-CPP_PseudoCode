// Class: ZombieJalapenoChallengeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapenoChallengeProps::GetDescription() const */

void ZombieJalapenoChallengeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_ZOMBIE_JALAPENO]",auStack_20);
  TodReplaceString(awStack_10,L"{NUM_EXPLODE}",awStack_18);
  FUN_05476c50(awStack_10);
  nop();
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieJalapenoChallengeProps::StaticClassInit() */

void ZombieJalapenoChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieJalapenoChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03682d60,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieJalapenoChallengeProps::StaticGetClass() */

long * ZombieJalapenoChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieJalapenoChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieJalapenoChallengeProps::GetClass() const */

long * ZombieJalapenoChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieJalapenoChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieJalapenoChallengeProps::GetModuleClass() const */

long * ZombieJalapenoChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombieJalapenoChallenge::sClass != (long *)0x0) {
    return ZombieJalapenoChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombieJalapenoChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieJalapenoChallenge",uVar2,ZombieJalapenoChallenge::StaticNew);
  ZombieJalapenoChallenge::StaticClassInit();
  return ZombieJalapenoChallenge::sClass;
}


/* ZombieJalapenoChallengeProps::ZombieJalapenoChallengeProps() */

void __thiscall
ZombieJalapenoChallengeProps::ZombieJalapenoChallengeProps(ZombieJalapenoChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667b560;
  return;
}


/* ZombieJalapenoChallengeProps::StaticNew() */

ZombieJalapenoChallengeProps * ZombieJalapenoChallengeProps::StaticNew(void)

{
  ZombieJalapenoChallengeProps *this;
  
  this = ::operator_new(0x48);
  ZombieJalapenoChallengeProps(this);
  return this;
}


/* ZombieJalapenoChallengeProps::~ZombieJalapenoChallengeProps() */

void __thiscall
ZombieJalapenoChallengeProps::~ZombieJalapenoChallengeProps(ZombieJalapenoChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667b560;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombieJalapenoChallengeProps::~ZombieJalapenoChallengeProps() */

void __thiscall
ZombieJalapenoChallengeProps::~ZombieJalapenoChallengeProps(ZombieJalapenoChallengeProps *this)

{
  ~ZombieJalapenoChallengeProps(this);
  AK::FreeHook(this);
  return;
}

