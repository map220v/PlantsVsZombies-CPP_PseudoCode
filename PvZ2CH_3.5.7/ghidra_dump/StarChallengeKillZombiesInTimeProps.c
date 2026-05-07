// Class: StarChallengeKillZombiesInTimeProps


/* StarChallengeKillZombiesInTimeProps::GetDescriptiveName() const */

void __thiscall
StarChallengeKillZombiesInTimeProps::GetDescriptiveName(StarChallengeKillZombiesInTimeProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_KILL_ZOMBIES_IN_TIME_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTimeProps::GetDescription() const */

void StarChallengeKillZombiesInTimeProps::GetDescription(void)

{
  long in_x0;
  wstring *in_x8;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_20,(ulong)*(uint *)(in_x0 + 0x40));
  Sexy::StrFormat(L"%d",awStack_18,(ulong)(uint)(int)*(float *)(in_x0 + 0x44));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_KILL_ZOMBIES_IN_TIME]",auStack_28);
  TodReplaceString(awStack_10,L"{ZOMBIES}",awStack_20);
  FUN_05476c50(awStack_10);
  nop();
  TodReplaceString(in_x8,L"{TIME}",awStack_18);
  FUN_054766c8();
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  FUN_05476c50(awStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeKillZombiesInTimeProps::StaticClassInit() */

void StarChallengeKillZombiesInTimeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeKillZombiesInTimeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04474704,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeKillZombiesInTimeProps::StaticGetClass() */

long * StarChallengeKillZombiesInTimeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeKillZombiesInTimeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeKillZombiesInTimeProps::GetClass() const */

long * StarChallengeKillZombiesInTimeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeKillZombiesInTimeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeKillZombiesInTimeProps::GetModuleClass() const */

long * StarChallengeKillZombiesInTimeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeKillZombiesInTime::sClass != (long *)0x0) {
    return StarChallengeKillZombiesInTime::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeKillZombiesInTime::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeKillZombiesInTime",uVar2,StarChallengeKillZombiesInTime::StaticNew)
  ;
  StarChallengeKillZombiesInTime::StaticClassInit();
  return StarChallengeKillZombiesInTime::sClass;
}


/* StarChallengeKillZombiesInTimeProps::StarChallengeKillZombiesInTimeProps() */

void __thiscall
StarChallengeKillZombiesInTimeProps::StarChallengeKillZombiesInTimeProps
          (StarChallengeKillZombiesInTimeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684db40;
  *(undefined4 *)(this + 0x44) = 0;
  return;
}


/* StarChallengeKillZombiesInTimeProps::StaticNew() */

StarChallengeKillZombiesInTimeProps * StarChallengeKillZombiesInTimeProps::StaticNew(void)

{
  StarChallengeKillZombiesInTimeProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeKillZombiesInTimeProps(this);
  return this;
}


/* StarChallengeKillZombiesInTimeProps::~StarChallengeKillZombiesInTimeProps() */

void __thiscall
StarChallengeKillZombiesInTimeProps::~StarChallengeKillZombiesInTimeProps
          (StarChallengeKillZombiesInTimeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684db40;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeKillZombiesInTimeProps::~StarChallengeKillZombiesInTimeProps() */

void __thiscall
StarChallengeKillZombiesInTimeProps::~StarChallengeKillZombiesInTimeProps
          (StarChallengeKillZombiesInTimeProps *this)

{
  ~StarChallengeKillZombiesInTimeProps(this);
  AK::FreeHook(this);
  return;
}

