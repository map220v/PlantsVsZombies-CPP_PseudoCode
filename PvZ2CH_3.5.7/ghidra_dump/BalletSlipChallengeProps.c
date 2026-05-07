// Class: BalletSlipChallengeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalletSlipChallengeProps::GetDescription() const */

void BalletSlipChallengeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_BALLET_SLIP]",auStack_20);
  TodReplaceString(awStack_10,L"{NUM_SLIP}",awStack_18);
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
/* BalletSlipChallengeProps::StaticClassInit() */

void BalletSlipChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BalletSlipChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03681e40,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BalletSlipChallengeProps::StaticGetClass() */

long * BalletSlipChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BalletSlipChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BalletSlipChallengeProps::GetClass() const */

long * BalletSlipChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BalletSlipChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BalletSlipChallengeProps::GetModuleClass() const */

long * BalletSlipChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (BalletSlipChallenge::sClass != (long *)0x0) {
    return BalletSlipChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  BalletSlipChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"BalletSlipChallenge",uVar2,BalletSlipChallenge::StaticNew);
  BalletSlipChallenge::StaticClassInit();
  return BalletSlipChallenge::sClass;
}


/* BalletSlipChallengeProps::BalletSlipChallengeProps() */

void __thiscall BalletSlipChallengeProps::BalletSlipChallengeProps(BalletSlipChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667aea0;
  return;
}


/* BalletSlipChallengeProps::StaticNew() */

BalletSlipChallengeProps * BalletSlipChallengeProps::StaticNew(void)

{
  BalletSlipChallengeProps *this;
  
  this = ::operator_new(0x48);
  BalletSlipChallengeProps(this);
  return this;
}


/* BalletSlipChallengeProps::~BalletSlipChallengeProps() */

void __thiscall BalletSlipChallengeProps::~BalletSlipChallengeProps(BalletSlipChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667aea0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* BalletSlipChallengeProps::~BalletSlipChallengeProps() */

void __thiscall BalletSlipChallengeProps::~BalletSlipChallengeProps(BalletSlipChallengeProps *this)

{
  ~BalletSlipChallengeProps(this);
  AK::FreeHook(this);
  return;
}

