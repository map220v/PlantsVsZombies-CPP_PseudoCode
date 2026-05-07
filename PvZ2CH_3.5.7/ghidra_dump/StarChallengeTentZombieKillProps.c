// Class: StarChallengeTentZombieKillProps


/* StarChallengeTentZombieKillProps::GetDescriptiveName() const */

void __thiscall
StarChallengeTentZombieKillProps::GetDescriptiveName(StarChallengeTentZombieKillProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_TENT_ZOMBIE_KILL_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTentZombieKillProps::GetDescription() const */

void StarChallengeTentZombieKillProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_TENT_ZOMBIE_KILL_DESC]",auStack_20);
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
/* StarChallengeTentZombieKillProps::StaticClassInit() */

void StarChallengeTentZombieKillProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeTentZombieKillProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448a704,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeTentZombieKillProps::StaticGetClass() */

long * StarChallengeTentZombieKillProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeTentZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeTentZombieKillProps::GetClass() const */

long * StarChallengeTentZombieKillProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeTentZombieKillProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeTentZombieKillProps::GetModuleClass() const */

long * StarChallengeTentZombieKillProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeTentZombieKill::sClass != (long *)0x0) {
    return StarChallengeTentZombieKill::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeTentZombieKill::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeTentZombieKill",uVar2,StarChallengeTentZombieKill::StaticNew);
  StarChallengeTentZombieKill::StaticClassInit();
  return StarChallengeTentZombieKill::sClass;
}


/* StarChallengeTentZombieKillProps::StarChallengeTentZombieKillProps() */

void __thiscall
StarChallengeTentZombieKillProps::StarChallengeTentZombieKillProps
          (StarChallengeTentZombieKillProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_06850160;
  return;
}


/* StarChallengeTentZombieKillProps::StaticNew() */

StarChallengeTentZombieKillProps * StarChallengeTentZombieKillProps::StaticNew(void)

{
  StarChallengeTentZombieKillProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeTentZombieKillProps(this);
  return this;
}


/* StarChallengeTentZombieKillProps::~StarChallengeTentZombieKillProps() */

void __thiscall
StarChallengeTentZombieKillProps::~StarChallengeTentZombieKillProps
          (StarChallengeTentZombieKillProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06850160;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeTentZombieKillProps::~StarChallengeTentZombieKillProps() */

void __thiscall
StarChallengeTentZombieKillProps::~StarChallengeTentZombieKillProps
          (StarChallengeTentZombieKillProps *this)

{
  ~StarChallengeTentZombieKillProps(this);
  AK::FreeHook(this);
  return;
}

