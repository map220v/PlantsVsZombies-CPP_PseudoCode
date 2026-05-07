// Class: RenaiRollerChallengeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiRollerChallengeProps::GetDescription() const */

void RenaiRollerChallengeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_RENAI_ROLLER]",auStack_20);
  TodReplaceString(awStack_10,L"{NUM_PLANT}",awStack_18);
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
/* RenaiRollerChallengeProps::StaticClassInit() */

void RenaiRollerChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiRollerChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_036825d0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiRollerChallengeProps::StaticGetClass() */

long * RenaiRollerChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaiRollerChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiRollerChallengeProps::GetClass() const */

long * RenaiRollerChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaiRollerChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiRollerChallengeProps::GetModuleClass() const */

long * RenaiRollerChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RenaiRollerChallenge::sClass != (long *)0x0) {
    return RenaiRollerChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RenaiRollerChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiRollerChallenge",uVar2,RenaiRollerChallenge::StaticNew);
  RenaiRollerChallenge::StaticClassInit();
  return RenaiRollerChallenge::sClass;
}


/* RenaiRollerChallengeProps::RenaiRollerChallengeProps() */

void __thiscall
RenaiRollerChallengeProps::RenaiRollerChallengeProps(RenaiRollerChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667b200;
  return;
}


/* RenaiRollerChallengeProps::StaticNew() */

RenaiRollerChallengeProps * RenaiRollerChallengeProps::StaticNew(void)

{
  RenaiRollerChallengeProps *this;
  
  this = ::operator_new(0x48);
  RenaiRollerChallengeProps(this);
  return this;
}


/* RenaiRollerChallengeProps::~RenaiRollerChallengeProps() */

void __thiscall
RenaiRollerChallengeProps::~RenaiRollerChallengeProps(RenaiRollerChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667b200;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* RenaiRollerChallengeProps::~RenaiRollerChallengeProps() */

void __thiscall
RenaiRollerChallengeProps::~RenaiRollerChallengeProps(RenaiRollerChallengeProps *this)

{
  ~RenaiRollerChallengeProps(this);
  AK::FreeHook(this);
  return;
}

