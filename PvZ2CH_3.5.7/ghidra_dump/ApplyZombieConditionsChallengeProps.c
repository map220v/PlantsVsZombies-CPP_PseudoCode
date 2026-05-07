// Class: ApplyZombieConditionsChallengeProps


/* ApplyZombieConditionsChallengeProps::GetDescriptiveName() const */

void __thiscall
ApplyZombieConditionsChallengeProps::GetDescriptiveName(ApplyZombieConditionsChallengeProps *this)

{
  TodStringTranslate(L"[CHALLENGE_APPLY_ZOMBIE_CONDITIONS_OF_TYPE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallengeProps::GetDescription() const */

void ApplyZombieConditionsChallengeProps::GetDescription(void)

{
  long in_x0;
  long lVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  string *extraout_x1;
  wstring *in_x8;
  undefined8 uVar4;
  wstring awStack_30 [8];
  Sexy aSStack_28 [8];
  wstring awStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_30,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[CHALLENGE_APPLY_ZOMBIE_CONDITIONS_OF_TYPE]",asStack_18);
  TodReplaceString(awStack_10,L"{COUNT}",awStack_30);
  FUN_05476c50(awStack_10);
  nop();
  uVar4 = *(undefined8 *)(in_x0 + 0x48);
  lVar1 = FUN_0367f90c(uVar4,*(undefined8 *)(in_x0 + 0x50));
  if (lVar1 == 0) {
    if (*(char *)(in_x0 + 0x60) == '\0') {
      if (*(char *)(in_x0 + 0x61) == '\0') goto LAB_0367f9d4;
      pwVar3 = L"[ELECTRIFY]";
    }
    else {
      pwVar3 = L"[ASH]";
    }
    FUN_05478178(asStack_18,pwVar3,awStack_20);
    TodReplaceString(in_x8,L"{TYPE}",(wstring *)asStack_18);
    FUN_054766c8();
    FUN_05476c50(awStack_10);
    FUN_05476c50(asStack_18);
    nop();
  }
  else {
    puVar2 = (undefined4 *)FUN_0367f920(uVar4);
    ConvertZombieConditionToString(aSStack_28,*puVar2);
    Sexy::StringToUpper(aSStack_28,extraout_x1);
    uVar4 = FUN_0547429c(asStack_18);
    Sexy::StrFormat("[%s]",awStack_10,uVar4);
    Sexy::ToWString((string *)awStack_10);
    std::string::~string((string *)awStack_10);
    std::string::~string(asStack_18);
    TodReplaceString(in_x8,L"{TYPE}",awStack_20);
    FUN_054766c8();
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_20);
    std::string::~string((string *)aSStack_28);
  }
LAB_0367f9d4:
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ApplyZombieConditionsChallengeProps::StaticClassInit() */

void ApplyZombieConditionsChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ApplyZombieConditionsChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03680378,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ApplyZombieConditionsChallengeProps::StaticGetClass() */

long * ApplyZombieConditionsChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ApplyZombieConditionsChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ApplyZombieConditionsChallengeProps::GetClass() const */

long * ApplyZombieConditionsChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ApplyZombieConditionsChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ApplyZombieConditionsChallengeProps::GetModuleClass() const */

long * ApplyZombieConditionsChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ApplyZombieConditionsChallenge::sClass != (long *)0x0) {
    return ApplyZombieConditionsChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ApplyZombieConditionsChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"ApplyZombieConditionsChallenge",uVar2,ApplyZombieConditionsChallenge::StaticNew)
  ;
  ApplyZombieConditionsChallenge::StaticClassInit();
  return ApplyZombieConditionsChallenge::sClass;
}


/* ApplyZombieConditionsChallengeProps::ApplyZombieConditionsChallengeProps() */

void __thiscall
ApplyZombieConditionsChallengeProps::ApplyZombieConditionsChallengeProps
          (ApplyZombieConditionsChallengeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0667ab20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  this[0x60] = (ApplyZombieConditionsChallengeProps)0x0;
  this[0x61] = (ApplyZombieConditionsChallengeProps)0x0;
  return;
}


/* ApplyZombieConditionsChallengeProps::StaticNew() */

ApplyZombieConditionsChallengeProps * ApplyZombieConditionsChallengeProps::StaticNew(void)

{
  ApplyZombieConditionsChallengeProps *this;
  
  this = ::operator_new(0x68);
  ApplyZombieConditionsChallengeProps(this);
  return this;
}


/* ApplyZombieConditionsChallengeProps::~ApplyZombieConditionsChallengeProps() */

void __thiscall
ApplyZombieConditionsChallengeProps::~ApplyZombieConditionsChallengeProps
          (ApplyZombieConditionsChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0667ab20;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* ApplyZombieConditionsChallengeProps::~ApplyZombieConditionsChallengeProps() */

void __thiscall
ApplyZombieConditionsChallengeProps::~ApplyZombieConditionsChallengeProps
          (ApplyZombieConditionsChallengeProps *this)

{
  ~ApplyZombieConditionsChallengeProps(this);
  AK::FreeHook(this);
  return;
}

