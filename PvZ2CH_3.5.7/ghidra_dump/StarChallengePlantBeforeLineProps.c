// Class: StarChallengePlantBeforeLineProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantBeforeLineProps::GetDescription() const */

void StarChallengePlantBeforeLineProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_PLANT_BEFORE_LINE]",auStack_20);
  TodReplaceString(awStack_10,L"{COLUMN}",awStack_18);
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
/* StarChallengePlantBeforeLineProps::StaticClassInit() */

void StarChallengePlantBeforeLineProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantBeforeLineProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04475f34,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantBeforeLineProps::StaticGetClass() */

long * StarChallengePlantBeforeLineProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantBeforeLineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantBeforeLineProps::GetClass() const */

long * StarChallengePlantBeforeLineProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantBeforeLineProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantBeforeLineProps::GetModuleClass() const */

long * StarChallengePlantBeforeLineProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengePlantBeforeLine::sClass != (long *)0x0) {
    return StarChallengePlantBeforeLine::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengePlantBeforeLine::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantBeforeLine",uVar2,StarChallengePlantBeforeLine::StaticNew);
  StarChallengePlantBeforeLine::StaticClassInit();
  return StarChallengePlantBeforeLine::sClass;
}


/* StarChallengePlantBeforeLineProps::StarChallengePlantBeforeLineProps() */

void __thiscall
StarChallengePlantBeforeLineProps::StarChallengePlantBeforeLineProps
          (StarChallengePlantBeforeLineProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined ***)this = &PTR_GetClass_0684de80;
  return;
}


/* StarChallengePlantBeforeLineProps::StaticNew() */

StarChallengePlantBeforeLineProps * StarChallengePlantBeforeLineProps::StaticNew(void)

{
  StarChallengePlantBeforeLineProps *this;
  
  this = ::operator_new(0x48);
  StarChallengePlantBeforeLineProps(this);
  return this;
}


/* StarChallengePlantBeforeLineProps::~StarChallengePlantBeforeLineProps() */

void __thiscall
StarChallengePlantBeforeLineProps::~StarChallengePlantBeforeLineProps
          (StarChallengePlantBeforeLineProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684de80;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengePlantBeforeLineProps::~StarChallengePlantBeforeLineProps() */

void __thiscall
StarChallengePlantBeforeLineProps::~StarChallengePlantBeforeLineProps
          (StarChallengePlantBeforeLineProps *this)

{
  ~StarChallengePlantBeforeLineProps(this);
  AK::FreeHook(this);
  return;
}

