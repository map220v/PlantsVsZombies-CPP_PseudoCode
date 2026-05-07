// Class: StarChallengePlantsLostProps


/* StarChallengePlantsLostProps::GetDescriptiveName() const */

void __thiscall StarChallengePlantsLostProps::GetDescriptiveName(StarChallengePlantsLostProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANTS_LOST_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsLostProps::GetDescription() const */

void StarChallengePlantsLostProps::GetDescription(void)

{
  long in_x0;
  wchar_t *pwVar1;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  if (*(int *)(in_x0 + 0x40) == 1) {
    pwVar1 = L"[STARCHALLENGE_PLANTS_LOST_SINGLE]";
  }
  else {
    pwVar1 = L"[STARCHALLENGE_PLANTS_LOST]";
  }
  FUN_05478178(awStack_10,pwVar1,auStack_20);
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
/* StarChallengePlantsLostProps::StaticClassInit() */

void StarChallengePlantsLostProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantsLostProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04478858,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantsLostProps::StaticGetClass() */

long * StarChallengePlantsLostProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsLostProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsLostProps::GetClass() const */

long * StarChallengePlantsLostProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsLostProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsLostProps::GetModuleClass() const */

long * StarChallengePlantsLostProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengePlantsLost::sClass != (long *)0x0) {
    return StarChallengePlantsLost::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengePlantsLost::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantsLost",uVar2,StarChallengePlantsLost::StaticNew);
  StarChallengePlantsLost::StaticClassInit();
  return StarChallengePlantsLost::sClass;
}


/* StarChallengePlantsLostProps::StarChallengePlantsLostProps() */

void __thiscall
StarChallengePlantsLostProps::StarChallengePlantsLostProps(StarChallengePlantsLostProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684e060;
  return;
}


/* StarChallengePlantsLostProps::StaticNew() */

StarChallengePlantsLostProps * StarChallengePlantsLostProps::StaticNew(void)

{
  StarChallengePlantsLostProps *this;
  
  this = ::operator_new(0x48);
  StarChallengePlantsLostProps(this);
  return this;
}


/* StarChallengePlantsLostProps::~StarChallengePlantsLostProps() */

void __thiscall
StarChallengePlantsLostProps::~StarChallengePlantsLostProps(StarChallengePlantsLostProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684e060;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengePlantsLostProps::~StarChallengePlantsLostProps() */

void __thiscall
StarChallengePlantsLostProps::~StarChallengePlantsLostProps(StarChallengePlantsLostProps *this)

{
  ~StarChallengePlantsLostProps(this);
  AK::FreeHook(this);
  return;
}

