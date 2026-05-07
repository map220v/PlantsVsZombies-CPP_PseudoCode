// Class: StarChallengePlantFreezeProps


/* StarChallengePlantFreezeProps::GetDescriptiveName() const */

void __thiscall
StarChallengePlantFreezeProps::GetDescriptiveName(StarChallengePlantFreezeProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_PLANT_FREEZE_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengePlantFreezeProps::GetDescription() const */

void StarChallengePlantFreezeProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_PLANT_FREEZE]",auStack_20);
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
/* StarChallengePlantFreezeProps::StaticClassInit() */

void StarChallengePlantFreezeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengePlantFreezeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04480c1c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengePlantFreezeProps::StaticGetClass() */

long * StarChallengePlantFreezeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantFreezeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFreezeProps::GetClass() const */

long * StarChallengePlantFreezeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengePlantFreezeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengePlantFreezeProps::GetModuleClass() const */

long * StarChallengePlantFreezeProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengePlantFreeze::sClass != (long *)0x0) {
    return StarChallengePlantFreeze::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengePlantFreeze::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengePlantFreeze",uVar2,StarChallengePlantFreeze::StaticNew);
  StarChallengePlantFreeze::StaticClassInit();
  return StarChallengePlantFreeze::sClass;
}


/* StarChallengePlantFreezeProps::StarChallengePlantFreezeProps() */

void __thiscall
StarChallengePlantFreezeProps::StarChallengePlantFreezeProps(StarChallengePlantFreezeProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684f020;
  return;
}


/* StarChallengePlantFreezeProps::StaticNew() */

StarChallengePlantFreezeProps * StarChallengePlantFreezeProps::StaticNew(void)

{
  StarChallengePlantFreezeProps *this;
  
  this = ::operator_new(0x48);
  StarChallengePlantFreezeProps(this);
  return this;
}


/* StarChallengePlantFreezeProps::~StarChallengePlantFreezeProps() */

void __thiscall
StarChallengePlantFreezeProps::~StarChallengePlantFreezeProps(StarChallengePlantFreezeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684f020;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengePlantFreezeProps::~StarChallengePlantFreezeProps() */

void __thiscall
StarChallengePlantFreezeProps::~StarChallengePlantFreezeProps(StarChallengePlantFreezeProps *this)

{
  ~StarChallengePlantFreezeProps(this);
  AK::FreeHook(this);
  return;
}

