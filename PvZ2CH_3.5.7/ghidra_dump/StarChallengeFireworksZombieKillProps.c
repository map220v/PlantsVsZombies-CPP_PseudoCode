// Class: StarChallengeFireworksZombieKillProps


/* StarChallengeFireworksZombieKillProps::GetDescriptiveName() const */

void __thiscall
StarChallengeFireworksZombieKillProps::GetDescriptiveName
          (StarChallengeFireworksZombieKillProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_FIREWORKS_ZOMBIE_KILL_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeFireworksZombieKillProps::GetDescription() const */

void StarChallengeFireworksZombieKillProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_FIREWORKS_ZOMBIE_KILL_DESC]",auStack_20);
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
/* StarChallengeFireworksZombieKillProps::StaticClassInit() */

void StarChallengeFireworksZombieKillProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeFireworksZombieKillProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448d5f8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeFireworksZombieKillProps::StaticGetClass() */

long * StarChallengeFireworksZombieKillProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeFireworksZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeFireworksZombieKillProps::GetClass() const */

long * StarChallengeFireworksZombieKillProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeFireworksZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeFireworksZombieKillProps::GetModuleClass() const */

long * StarChallengeFireworksZombieKillProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeFireworksZombieKill::sClass != (long *)0x0) {
    return StarChallengeFireworksZombieKill::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeFireworksZombieKill::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeFireworksZombieKill",uVar2,
            StarChallengeFireworksZombieKill::StaticNew);
  StarChallengeFireworksZombieKill::StaticClassInit();
  return StarChallengeFireworksZombieKill::sClass;
}


/* StarChallengeFireworksZombieKillProps::StarChallengeFireworksZombieKillProps() */

void __thiscall
StarChallengeFireworksZombieKillProps::StarChallengeFireworksZombieKillProps
          (StarChallengeFireworksZombieKillProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06850670;
  return;
}


/* StarChallengeFireworksZombieKillProps::StaticNew() */

StarChallengeFireworksZombieKillProps * StarChallengeFireworksZombieKillProps::StaticNew(void)

{
  StarChallengeFireworksZombieKillProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeFireworksZombieKillProps(this);
  return this;
}


/* StarChallengeFireworksZombieKillProps::~StarChallengeFireworksZombieKillProps() */

void __thiscall
StarChallengeFireworksZombieKillProps::~StarChallengeFireworksZombieKillProps
          (StarChallengeFireworksZombieKillProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06850670;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeFireworksZombieKillProps::~StarChallengeFireworksZombieKillProps() */

void __thiscall
StarChallengeFireworksZombieKillProps::~StarChallengeFireworksZombieKillProps
          (StarChallengeFireworksZombieKillProps *this)

{
  ~StarChallengeFireworksZombieKillProps(this);
  AK::FreeHook(this);
  return;
}

