// Class: ZombiePeaChallengeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePeaChallengeProps::GetDescription() const */

void ZombiePeaChallengeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_ZOMBIE_PEA]",auStack_20);
  TodReplaceString(awStack_10,L"{NUM_HITS}",awStack_18);
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
/* ZombiePeaChallengeProps::StaticClassInit() */

void ZombiePeaChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePeaChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03682998,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePeaChallengeProps::StaticGetClass() */

long * ZombiePeaChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePeaChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePeaChallengeProps::GetClass() const */

long * ZombiePeaChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePeaChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePeaChallengeProps::GetModuleClass() const */

long * ZombiePeaChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiePeaChallenge::sClass != (long *)0x0) {
    return ZombiePeaChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiePeaChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePeaChallenge",uVar2,ZombiePeaChallenge::StaticNew);
  ZombiePeaChallenge::StaticClassInit();
  return ZombiePeaChallenge::sClass;
}


/* ZombiePeaChallengeProps::ZombiePeaChallengeProps() */

void __thiscall ZombiePeaChallengeProps::ZombiePeaChallengeProps(ZombiePeaChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667b3b0;
  return;
}


/* ZombiePeaChallengeProps::StaticNew() */

ZombiePeaChallengeProps * ZombiePeaChallengeProps::StaticNew(void)

{
  ZombiePeaChallengeProps *this;
  
  this = ::operator_new(0x48);
  ZombiePeaChallengeProps(this);
  return this;
}


/* ZombiePeaChallengeProps::~ZombiePeaChallengeProps() */

void __thiscall ZombiePeaChallengeProps::~ZombiePeaChallengeProps(ZombiePeaChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667b3b0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombiePeaChallengeProps::~ZombiePeaChallengeProps() */

void __thiscall ZombiePeaChallengeProps::~ZombiePeaChallengeProps(ZombiePeaChallengeProps *this)

{
  ~ZombiePeaChallengeProps(this);
  AK::FreeHook(this);
  return;
}

