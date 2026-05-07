// Class: StarChallengeSunProducedProps


/* StarChallengeSunProducedProps::GetDescriptiveName() const */

void __thiscall
StarChallengeSunProducedProps::GetDescriptiveName(StarChallengeSunProducedProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_SUN_PRODUCED_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunProducedProps::GetDescription() const */

void StarChallengeSunProducedProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)(uint)(int)*(float *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_SUN_PRODUCED]",auStack_20);
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
/* StarChallengeSunProducedProps::StaticClassInit() */

void StarChallengeSunProducedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSunProducedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0447d390,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSunProducedProps::StaticGetClass() */

long * StarChallengeSunProducedProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSunProducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunProducedProps::GetClass() const */

long * StarChallengeSunProducedProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSunProducedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunProducedProps::GetModuleClass() const */

long * StarChallengeSunProducedProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeSunProduced::sClass != (long *)0x0) {
    return StarChallengeSunProduced::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeSunProduced::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSunProduced",uVar2,StarChallengeSunProduced::StaticNew);
  StarChallengeSunProduced::StaticClassInit();
  return StarChallengeSunProduced::sClass;
}


/* StarChallengeSunProducedProps::StarChallengeSunProducedProps() */

void __thiscall
StarChallengeSunProducedProps::StarChallengeSunProducedProps(StarChallengeSunProducedProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0684e930;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


/* StarChallengeSunProducedProps::StaticNew() */

StarChallengeSunProducedProps * StarChallengeSunProducedProps::StaticNew(void)

{
  StarChallengeSunProducedProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeSunProducedProps(this);
  return this;
}


/* StarChallengeSunProducedProps::~StarChallengeSunProducedProps() */

void __thiscall
StarChallengeSunProducedProps::~StarChallengeSunProducedProps(StarChallengeSunProducedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684e930;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeSunProducedProps::~StarChallengeSunProducedProps() */

void __thiscall
StarChallengeSunProducedProps::~StarChallengeSunProducedProps(StarChallengeSunProducedProps *this)

{
  ~StarChallengeSunProducedProps(this);
  AK::FreeHook(this);
  return;
}

