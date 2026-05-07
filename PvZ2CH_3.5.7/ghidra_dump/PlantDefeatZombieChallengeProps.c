// Class: PlantDefeatZombieChallengeProps


/* PlantDefeatZombieChallengeProps::GetDescriptiveName() const */

void __thiscall
PlantDefeatZombieChallengeProps::GetDescriptiveName(PlantDefeatZombieChallengeProps *this)

{
  TodStringTranslate(L"[CHALLENGE_PLANT_DEFEAT_ZOMBIES_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallengeProps::StaticClassInit() */

void PlantDefeatZombieChallengeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDefeatZombieChallengeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04c6a50c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefeatZombieChallengeProps::StaticGetClass() */

long * PlantDefeatZombieChallengeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDefeatZombieChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDefeatZombieChallengeProps::GetClass() const */

long * PlantDefeatZombieChallengeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDefeatZombieChallengeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDefeatZombieChallengeProps::GetModuleClass() const */

long * PlantDefeatZombieChallengeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (PlantDefeatZombieChallenge::sClass != (long *)0x0) {
    return PlantDefeatZombieChallenge::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  PlantDefeatZombieChallenge::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDefeatZombieChallenge",uVar2,PlantDefeatZombieChallenge::StaticNew);
  PlantDefeatZombieChallenge::StaticClassInit();
  return PlantDefeatZombieChallenge::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDefeatZombieChallengeProps::GetDescription() const */

void PlantDefeatZombieChallengeProps::GetDescription(void)

{
  long in_x0;
  string *extraout_x1;
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_30,(ulong)*(uint *)(in_x0 + 0x48));
  Sexy::ToWString((string *)(in_x0 + 0x40));
  Sexy::Upper((Sexy *)(in_x0 + 0x50),extraout_x1);
  std::operator+("[",asStack_18);
  std::operator+(asStack_10,"]");
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  StringHelper::ToStringValue(asStack_20);
  TodReplaceString(awStack_28,L"{NUMBER}",awStack_30);
  TodReplaceString((wstring *)asStack_10,L"{NAME}",(wstring *)asStack_18);
  FUN_05476c50(asStack_10);
  FUN_05476c50(asStack_18);
  std::string::~string(asStack_20);
  FUN_05476c50(awStack_28);
  FUN_05476c50(awStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDefeatZombieChallengeProps::PlantDefeatZombieChallengeProps() */

void __thiscall
PlantDefeatZombieChallengeProps::PlantDefeatZombieChallengeProps
          (PlantDefeatZombieChallengeProps *this)

{
  size_t in_x2;
  
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06991400;
  Set8BytesTo0(this + 0x40);
  *(undefined4 *)(this + 0x48) = 0;
  Set8BytesTo0((string *)(this + 0x50));
  std::string::append((string *)(this + 0x50),"",in_x2);
  return;
}


/* PlantDefeatZombieChallengeProps::StaticNew() */

PlantDefeatZombieChallengeProps * PlantDefeatZombieChallengeProps::StaticNew(void)

{
  PlantDefeatZombieChallengeProps *this;
  
  this = ::operator_new(0x58);
  PlantDefeatZombieChallengeProps(this);
  return this;
}


/* PlantDefeatZombieChallengeProps::~PlantDefeatZombieChallengeProps() */

void __thiscall
PlantDefeatZombieChallengeProps::~PlantDefeatZombieChallengeProps
          (PlantDefeatZombieChallengeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06991400;
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* PlantDefeatZombieChallengeProps::~PlantDefeatZombieChallengeProps() */

void __thiscall
PlantDefeatZombieChallengeProps::~PlantDefeatZombieChallengeProps
          (PlantDefeatZombieChallengeProps *this)

{
  ~PlantDefeatZombieChallengeProps(this);
  AK::FreeHook(this);
  return;
}

