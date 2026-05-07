// Class: StarChallengeUnfreezePlantsProps


/* StarChallengeUnfreezePlantsProps::GetDescriptiveName() const */

void __thiscall
StarChallengeUnfreezePlantsProps::GetDescriptiveName(StarChallengeUnfreezePlantsProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_UNFREEZE_PLANTS_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeUnfreezePlantsProps::GetDescription() const */

void StarChallengeUnfreezePlantsProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_UNFREEZE_PLANTS_DESC]",auStack_20);
  TodReplaceString(awStack_10,L"{COUNT}",awStack_18);
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
/* StarChallengeUnfreezePlantsProps::StaticClassInit() */

void StarChallengeUnfreezePlantsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeUnfreezePlantsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448b70c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeUnfreezePlantsProps::StaticGetClass() */

long * StarChallengeUnfreezePlantsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeUnfreezePlantsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeUnfreezePlantsProps::GetClass() const */

long * StarChallengeUnfreezePlantsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeUnfreezePlantsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeUnfreezePlantsProps::GetModuleClass() const */

long * StarChallengeUnfreezePlantsProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeUnfreezePlants::sClass != (long *)0x0) {
    return StarChallengeUnfreezePlants::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeUnfreezePlants::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeUnfreezePlants",uVar2,StarChallengeUnfreezePlants::StaticNew);
  StarChallengeUnfreezePlants::StaticClassInit();
  return StarChallengeUnfreezePlants::sClass;
}


/* StarChallengeUnfreezePlantsProps::StarChallengeUnfreezePlantsProps() */

void __thiscall
StarChallengeUnfreezePlantsProps::StarChallengeUnfreezePlantsProps
          (StarChallengeUnfreezePlantsProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06850310;
  return;
}


/* StarChallengeUnfreezePlantsProps::StaticNew() */

StarChallengeUnfreezePlantsProps * StarChallengeUnfreezePlantsProps::StaticNew(void)

{
  StarChallengeUnfreezePlantsProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeUnfreezePlantsProps(this);
  return this;
}


/* StarChallengeUnfreezePlantsProps::~StarChallengeUnfreezePlantsProps() */

void __thiscall
StarChallengeUnfreezePlantsProps::~StarChallengeUnfreezePlantsProps
          (StarChallengeUnfreezePlantsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06850310;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeUnfreezePlantsProps::~StarChallengeUnfreezePlantsProps() */

void __thiscall
StarChallengeUnfreezePlantsProps::~StarChallengeUnfreezePlantsProps
          (StarChallengeUnfreezePlantsProps *this)

{
  ~StarChallengeUnfreezePlantsProps(this);
  AK::FreeHook(this);
  return;
}

