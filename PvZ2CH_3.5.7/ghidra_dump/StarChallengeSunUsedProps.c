// Class: StarChallengeSunUsedProps


/* StarChallengeSunUsedProps::GetDescriptiveName() const */

void __thiscall StarChallengeSunUsedProps::GetDescriptiveName(StarChallengeSunUsedProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_SUN_USED_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeSunUsedProps::GetDescription() const */

void StarChallengeSunUsedProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_SUN_USED]",auStack_20);
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
/* StarChallengeSunUsedProps::StaticClassInit() */

void StarChallengeSunUsedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeSunUsedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0447e1d0,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeSunUsedProps::StaticGetClass() */

long * StarChallengeSunUsedProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSunUsedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunUsedProps::GetClass() const */

long * StarChallengeSunUsedProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeSunUsedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeSunUsedProps::GetModuleClass() const */

long * StarChallengeSunUsedProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeSunUsed::sClass != (long *)0x0) {
    return StarChallengeSunUsed::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeSunUsed::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeSunUsed",uVar2,StarChallengeSunUsed::StaticNew);
  StarChallengeSunUsed::StaticClassInit();
  return StarChallengeSunUsed::sClass;
}


/* StarChallengeSunUsedProps::StarChallengeSunUsedProps() */

void __thiscall
StarChallengeSunUsedProps::StarChallengeSunUsedProps(StarChallengeSunUsedProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0684eae0;
  return;
}


/* StarChallengeSunUsedProps::StaticNew() */

StarChallengeSunUsedProps * StarChallengeSunUsedProps::StaticNew(void)

{
  StarChallengeSunUsedProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeSunUsedProps(this);
  return this;
}


/* StarChallengeSunUsedProps::~StarChallengeSunUsedProps() */

void __thiscall
StarChallengeSunUsedProps::~StarChallengeSunUsedProps(StarChallengeSunUsedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0684eae0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeSunUsedProps::~StarChallengeSunUsedProps() */

void __thiscall
StarChallengeSunUsedProps::~StarChallengeSunUsedProps(StarChallengeSunUsedProps *this)

{
  ~StarChallengeSunUsedProps(this);
  AK::FreeHook(this);
  return;
}

