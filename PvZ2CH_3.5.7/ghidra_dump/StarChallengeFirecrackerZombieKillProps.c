// Class: StarChallengeFirecrackerZombieKillProps


/* StarChallengeFirecrackerZombieKillProps::GetDescriptiveName() const */

void __thiscall
StarChallengeFirecrackerZombieKillProps::GetDescriptiveName
          (StarChallengeFirecrackerZombieKillProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_FIRECRACKER_ZOMBIE_KILL_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeFirecrackerZombieKillProps::GetDescription() const */

void StarChallengeFirecrackerZombieKillProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_FIRECRACKER_ZOMBIE_KILL_DESC]",auStack_20);
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
/* StarChallengeFirecrackerZombieKillProps::StaticClassInit() */

void StarChallengeFirecrackerZombieKillProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeFirecrackerZombieKillProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448c7f8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeFirecrackerZombieKillProps::StaticGetClass() */

long * StarChallengeFirecrackerZombieKillProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeFirecrackerZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeFirecrackerZombieKillProps::GetClass() const */

long * StarChallengeFirecrackerZombieKillProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeFirecrackerZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeFirecrackerZombieKillProps::GetModuleClass() const */

long * StarChallengeFirecrackerZombieKillProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeFirecrackerZombieKill::sClass != (long *)0x0) {
    return StarChallengeFirecrackerZombieKill::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeFirecrackerZombieKill::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeFirecrackerZombieKill",uVar2,
            StarChallengeFirecrackerZombieKill::StaticNew);
  StarChallengeFirecrackerZombieKill::StaticClassInit();
  return StarChallengeFirecrackerZombieKill::sClass;
}


/* StarChallengeFirecrackerZombieKillProps::StarChallengeFirecrackerZombieKillProps() */

void __thiscall
StarChallengeFirecrackerZombieKillProps::StarChallengeFirecrackerZombieKillProps
          (StarChallengeFirecrackerZombieKillProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_068504c0;
  return;
}


/* StarChallengeFirecrackerZombieKillProps::StaticNew() */

StarChallengeFirecrackerZombieKillProps * StarChallengeFirecrackerZombieKillProps::StaticNew(void)

{
  StarChallengeFirecrackerZombieKillProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeFirecrackerZombieKillProps(this);
  return this;
}


/* StarChallengeFirecrackerZombieKillProps::~StarChallengeFirecrackerZombieKillProps() */

void __thiscall
StarChallengeFirecrackerZombieKillProps::~StarChallengeFirecrackerZombieKillProps
          (StarChallengeFirecrackerZombieKillProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068504c0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeFirecrackerZombieKillProps::~StarChallengeFirecrackerZombieKillProps() */

void __thiscall
StarChallengeFirecrackerZombieKillProps::~StarChallengeFirecrackerZombieKillProps
          (StarChallengeFirecrackerZombieKillProps *this)

{
  ~StarChallengeFirecrackerZombieKillProps(this);
  AK::FreeHook(this);
  return;
}

