// Class: StarChallengeZombieDistanceProps


/* StarChallengeZombieDistanceProps::GetDescription() const */

void __thiscall
StarChallengeZombieDistanceProps::GetDescription(StarChallengeZombieDistanceProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_ZOMBIE_DISTANCE]");
  return;
}


/* StarChallengeZombieDistanceProps::GetDescriptiveName() const */

void __thiscall
StarChallengeZombieDistanceProps::GetDescriptiveName(StarChallengeZombieDistanceProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_ZOMBIE_DISTANCE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeZombieDistanceProps::StaticClassInit() */

void StarChallengeZombieDistanceProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeZombieDistanceProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0447ef8c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeZombieDistanceProps::StaticGetClass() */

long * StarChallengeZombieDistanceProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeZombieDistanceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeZombieDistanceProps::GetClass() const */

long * StarChallengeZombieDistanceProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeZombieDistanceProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeZombieDistanceProps::GetModuleClass() const */

long * StarChallengeZombieDistanceProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeZombieDistance::sClass != (long *)0x0) {
    return StarChallengeZombieDistance::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeZombieDistance::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeZombieDistance",uVar2,StarChallengeZombieDistance::StaticNew);
  StarChallengeZombieDistance::StaticClassInit();
  return StarChallengeZombieDistance::sClass;
}


/* StarChallengeZombieDistanceProps::StarChallengeZombieDistanceProps() */

void __thiscall
StarChallengeZombieDistanceProps::StarChallengeZombieDistanceProps
          (StarChallengeZombieDistanceProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684ec90;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* StarChallengeZombieDistanceProps::StaticNew() */

StarChallengeZombieDistanceProps * StarChallengeZombieDistanceProps::StaticNew(void)

{
  StarChallengeZombieDistanceProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeZombieDistanceProps(this);
  return this;
}


/* StarChallengeZombieDistanceProps::~StarChallengeZombieDistanceProps() */

void __thiscall
StarChallengeZombieDistanceProps::~StarChallengeZombieDistanceProps
          (StarChallengeZombieDistanceProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ec90;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeZombieDistanceProps::~StarChallengeZombieDistanceProps() */

void __thiscall
StarChallengeZombieDistanceProps::~StarChallengeZombieDistanceProps
          (StarChallengeZombieDistanceProps *this)

{
  ~StarChallengeZombieDistanceProps(this);
  AK::FreeHook(this);
  return;
}

