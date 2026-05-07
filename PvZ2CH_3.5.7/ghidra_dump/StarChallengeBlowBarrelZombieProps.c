// Class: StarChallengeBlowBarrelZombieProps


/* StarChallengeBlowBarrelZombieProps::GetDescriptiveName() const */

void __thiscall
StarChallengeBlowBarrelZombieProps::GetDescriptiveName(StarChallengeBlowBarrelZombieProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_BLOW_BARREL_ZOMBIE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeBlowBarrelZombieProps::GetDescription() const */

void StarChallengeBlowBarrelZombieProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_BLOW_BARREL_ZOMBIE_DESC]",auStack_20);
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
/* StarChallengeBlowBarrelZombieProps::StaticClassInit() */

void StarChallengeBlowBarrelZombieProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeBlowBarrelZombieProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0448f498,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeBlowBarrelZombieProps::StaticGetClass() */

long * StarChallengeBlowBarrelZombieProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBlowBarrelZombieProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBlowBarrelZombieProps::GetClass() const */

long * StarChallengeBlowBarrelZombieProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeBlowBarrelZombieProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeBlowBarrelZombieProps::GetModuleClass() const */

long * StarChallengeBlowBarrelZombieProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeBlowBarrelZombie::sClass != (long *)0x0) {
    return StarChallengeBlowBarrelZombie::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeBlowBarrelZombie::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeBlowBarrelZombie",uVar2,StarChallengeBlowBarrelZombie::StaticNew);
  StarChallengeBlowBarrelZombie::StaticClassInit();
  return StarChallengeBlowBarrelZombie::sClass;
}


/* StarChallengeBlowBarrelZombieProps::StarChallengeBlowBarrelZombieProps() */

void __thiscall
StarChallengeBlowBarrelZombieProps::StarChallengeBlowBarrelZombieProps
          (StarChallengeBlowBarrelZombieProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_068509d0;
  return;
}


/* StarChallengeBlowBarrelZombieProps::StaticNew() */

StarChallengeBlowBarrelZombieProps * StarChallengeBlowBarrelZombieProps::StaticNew(void)

{
  StarChallengeBlowBarrelZombieProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeBlowBarrelZombieProps(this);
  return this;
}


/* StarChallengeBlowBarrelZombieProps::~StarChallengeBlowBarrelZombieProps() */

void __thiscall
StarChallengeBlowBarrelZombieProps::~StarChallengeBlowBarrelZombieProps
          (StarChallengeBlowBarrelZombieProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068509d0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeBlowBarrelZombieProps::~StarChallengeBlowBarrelZombieProps() */

void __thiscall
StarChallengeBlowBarrelZombieProps::~StarChallengeBlowBarrelZombieProps
          (StarChallengeBlowBarrelZombieProps *this)

{
  ~StarChallengeBlowBarrelZombieProps(this);
  AK::FreeHook(this);
  return;
}

