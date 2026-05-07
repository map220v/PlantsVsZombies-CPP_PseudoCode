// Class: StarChallengeSimultaneousPlantsProps


/* StarChallengeSimultaneousPlantsProps::GetDescriptiveName() const */

void __thiscall
StarChallengeSimultaneousPlantsProps::GetDescriptiveName(StarChallengeSimultaneousPlantsProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANTS_AT_ONCE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSimultaneousPlantsProps::GetDescription() const */

void StarChallengeSimultaneousPlantsProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_PLANTS_AT_ONCE]",auStack_20);
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
/* StarChallengeSimultaneousPlantsProps::StaticClassInit() */

void StarChallengeSimultaneousPlantsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSimultaneousPlantsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0447b1ec,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSimultaneousPlantsProps::StaticGetClass() */

long * StarChallengeSimultaneousPlantsProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSimultaneousPlantsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSimultaneousPlantsProps::GetClass() const */

long * StarChallengeSimultaneousPlantsProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSimultaneousPlantsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSimultaneousPlantsProps::GetModuleClass() const */

long * StarChallengeSimultaneousPlantsProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeSimultaneousPlants::sClass != (long *)0x0) {
    return StarChallengeSimultaneousPlants::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeSimultaneousPlants::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSimultaneousPlants",uVar2,
            StarChallengeSimultaneousPlants::StaticNew);
  StarChallengeSimultaneousPlants::StaticClassInit();
  return StarChallengeSimultaneousPlants::sClass;
}


/* StarChallengeSimultaneousPlantsProps::StarChallengeSimultaneousPlantsProps() */

void __thiscall
StarChallengeSimultaneousPlantsProps::StarChallengeSimultaneousPlantsProps
          (StarChallengeSimultaneousPlantsProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684e5d0;
  return;
}


/* StarChallengeSimultaneousPlantsProps::StaticNew() */

StarChallengeSimultaneousPlantsProps * StarChallengeSimultaneousPlantsProps::StaticNew(void)

{
  StarChallengeSimultaneousPlantsProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeSimultaneousPlantsProps(this);
  return this;
}


/* StarChallengeSimultaneousPlantsProps::~StarChallengeSimultaneousPlantsProps() */

void __thiscall
StarChallengeSimultaneousPlantsProps::~StarChallengeSimultaneousPlantsProps
          (StarChallengeSimultaneousPlantsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684e5d0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeSimultaneousPlantsProps::~StarChallengeSimultaneousPlantsProps() */

void __thiscall
StarChallengeSimultaneousPlantsProps::~StarChallengeSimultaneousPlantsProps
          (StarChallengeSimultaneousPlantsProps *this)

{
  ~StarChallengeSimultaneousPlantsProps(this);
  AK::FreeHook(this);
  return;
}

