// Class: ZombiePerfumerChallengeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePerfumerChallengeProps::GetDescription() const */

void ZombiePerfumerChallengeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_CLEAN_POISON]",auStack_20);
  TodReplaceString(awStack_10,L"{NUM_POISON}",awStack_18);
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
/* ZombiePerfumerChallengeProps::StaticClassInit() */

void ZombiePerfumerChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePerfumerChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03681a78,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePerfumerChallengeProps::StaticGetClass() */

long * ZombiePerfumerChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePerfumerChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePerfumerChallengeProps::GetClass() const */

long * ZombiePerfumerChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePerfumerChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePerfumerChallengeProps::GetModuleClass() const */

long * ZombiePerfumerChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiePerfumerChallenge::sClass != (long *)0x0) {
    return ZombiePerfumerChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiePerfumerChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePerfumerChallenge",uVar2,ZombiePerfumerChallenge::StaticNew);
  ZombiePerfumerChallenge::StaticClassInit();
  return ZombiePerfumerChallenge::sClass;
}


/* ZombiePerfumerChallengeProps::ZombiePerfumerChallengeProps() */

void __thiscall
ZombiePerfumerChallengeProps::ZombiePerfumerChallengeProps(ZombiePerfumerChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667acf0;
  return;
}


/* ZombiePerfumerChallengeProps::StaticNew() */

ZombiePerfumerChallengeProps * ZombiePerfumerChallengeProps::StaticNew(void)

{
  ZombiePerfumerChallengeProps *this;
  
  this = ::operator_new(0x48);
  ZombiePerfumerChallengeProps(this);
  return this;
}


/* ZombiePerfumerChallengeProps::~ZombiePerfumerChallengeProps() */

void __thiscall
ZombiePerfumerChallengeProps::~ZombiePerfumerChallengeProps(ZombiePerfumerChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667acf0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ZombiePerfumerChallengeProps::~ZombiePerfumerChallengeProps() */

void __thiscall
ZombiePerfumerChallengeProps::~ZombiePerfumerChallengeProps(ZombiePerfumerChallengeProps *this)

{
  ~ZombiePerfumerChallengeProps(this);
  AK::FreeHook(this);
  return;
}

