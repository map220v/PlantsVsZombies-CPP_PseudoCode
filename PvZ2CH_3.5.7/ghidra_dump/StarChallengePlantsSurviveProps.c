// Class: StarChallengePlantsSurviveProps


/* StarChallengePlantsSurviveProps::GetDescriptiveName() const */

void __thiscall
StarChallengePlantsSurviveProps::GetDescriptiveName(StarChallengePlantsSurviveProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANT_SURVIVE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantsSurviveProps::GetDescription() const */

void StarChallengePlantsSurviveProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_PLANT_SURVIVE]",auStack_20);
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
/* StarChallengePlantsSurviveProps::StaticClassInit() */

void StarChallengePlantsSurviveProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantsSurviveProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04481edc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantsSurviveProps::StaticGetClass() */

long * StarChallengePlantsSurviveProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsSurviveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsSurviveProps::GetClass() const */

long * StarChallengePlantsSurviveProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantsSurviveProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantsSurviveProps::GetModuleClass() const */

long * StarChallengePlantsSurviveProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengePlantsSurvive::sClass != (long *)0x0) {
    return StarChallengePlantsSurvive::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengePlantsSurvive::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantsSurvive",uVar2,StarChallengePlantsSurvive::StaticNew);
  StarChallengePlantsSurvive::StaticClassInit();
  return StarChallengePlantsSurvive::sClass;
}


/* StarChallengePlantsSurviveProps::StarChallengePlantsSurviveProps() */

void __thiscall
StarChallengePlantsSurviveProps::StarChallengePlantsSurviveProps
          (StarChallengePlantsSurviveProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684f3b0;
  return;
}


/* StarChallengePlantsSurviveProps::StaticNew() */

StarChallengePlantsSurviveProps * StarChallengePlantsSurviveProps::StaticNew(void)

{
  StarChallengePlantsSurviveProps *this;
  
  this = ::operator_new(0x48);
  StarChallengePlantsSurviveProps(this);
  return this;
}


/* StarChallengePlantsSurviveProps::~StarChallengePlantsSurviveProps() */

void __thiscall
StarChallengePlantsSurviveProps::~StarChallengePlantsSurviveProps
          (StarChallengePlantsSurviveProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684f3b0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengePlantsSurviveProps::~StarChallengePlantsSurviveProps() */

void __thiscall
StarChallengePlantsSurviveProps::~StarChallengePlantsSurviveProps
          (StarChallengePlantsSurviveProps *this)

{
  ~StarChallengePlantsSurviveProps(this);
  AK::FreeHook(this);
  return;
}

