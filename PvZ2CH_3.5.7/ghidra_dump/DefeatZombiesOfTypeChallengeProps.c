// Class: DefeatZombiesOfTypeChallengeProps


/* DefeatZombiesOfTypeChallengeProps::GetDescriptiveName() const */

void __thiscall
DefeatZombiesOfTypeChallengeProps::GetDescriptiveName(DefeatZombiesOfTypeChallengeProps *this)

{
  TodStringTranslate(L"[CHALLENGE_DEFEAT_ZOMBIES_OF_TYPE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallengeProps::GetDescription() const */

void DefeatZombiesOfTypeChallengeProps::GetDescription(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x48));
  Sexy::ToWString((string *)(in_x0 + 0x40));
  TodReplaceString(awStack_10,L"{NUMBER}",awStack_18);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DefeatZombiesOfTypeChallengeProps::StaticClassInit() */

void DefeatZombiesOfTypeChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DefeatZombiesOfTypeChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04472fbc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DefeatZombiesOfTypeChallengeProps::StaticGetClass() */

long * DefeatZombiesOfTypeChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DefeatZombiesOfTypeChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DefeatZombiesOfTypeChallengeProps::GetClass() const */

long * DefeatZombiesOfTypeChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DefeatZombiesOfTypeChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DefeatZombiesOfTypeChallengeProps::GetModuleClass() const */

long * DefeatZombiesOfTypeChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DefeatZombiesOfTypeChallenge::sClass != (long *)0x0) {
    return DefeatZombiesOfTypeChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DefeatZombiesOfTypeChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"DefeatZombiesOfTypeChallenge",uVar2,DefeatZombiesOfTypeChallenge::StaticNew);
  DefeatZombiesOfTypeChallenge::StaticClassInit();
  return DefeatZombiesOfTypeChallenge::sClass;
}


/* DefeatZombiesOfTypeChallengeProps::DefeatZombiesOfTypeChallengeProps() */

void __thiscall
DefeatZombiesOfTypeChallengeProps::DefeatZombiesOfTypeChallengeProps
          (DefeatZombiesOfTypeChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684d7e0;
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x48) = 0;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x50));
  return;
}


/* DefeatZombiesOfTypeChallengeProps::StaticNew() */

DefeatZombiesOfTypeChallengeProps * DefeatZombiesOfTypeChallengeProps::StaticNew(void)

{
  DefeatZombiesOfTypeChallengeProps *this;
  
  this = ::operator_new(0x78);
  DefeatZombiesOfTypeChallengeProps(this);
  return this;
}


/* DefeatZombiesOfTypeChallengeProps::~DefeatZombiesOfTypeChallengeProps() */

void __thiscall
DefeatZombiesOfTypeChallengeProps::~DefeatZombiesOfTypeChallengeProps
          (DefeatZombiesOfTypeChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684d7e0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* DefeatZombiesOfTypeChallengeProps::~DefeatZombiesOfTypeChallengeProps() */

void __thiscall
DefeatZombiesOfTypeChallengeProps::~DefeatZombiesOfTypeChallengeProps
          (DefeatZombiesOfTypeChallengeProps *this)

{
  ~DefeatZombiesOfTypeChallengeProps(this);
  AK::FreeHook(this);
  return;
}

