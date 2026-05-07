// Class: StarChallengeTargetScoreProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScoreProps::GetDescription() const */

void StarChallengeTargetScoreProps::GetDescription(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)(uint)(int)*(float *)(in_x0 + 0x40));
  Sexy::ToWString((string *)(in_x0 + 0x48));
  TodReplaceString(awStack_10,L"{NUMBER}",awStack_18);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScoreProps::GetDescriptiveName() const */

void StarChallengeTargetScoreProps::GetDescriptiveName(void)

{
  long in_x0;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::ToWString((string *)(in_x0 + 0x58));
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScoreProps::StaticClassInit() */

void StarChallengeTargetScoreProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeTargetScoreProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03877744,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeTargetScoreProps::StaticGetClass() */

long * StarChallengeTargetScoreProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeTargetScoreProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeTargetScoreProps::GetClass() const */

long * StarChallengeTargetScoreProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeTargetScoreProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeTargetScoreProps::GetModuleClass() const */

long * StarChallengeTargetScoreProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeTargetScore::sClass != (long *)0x0) {
    return StarChallengeTargetScore::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeTargetScore::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeTargetScore",uVar2,StarChallengeTargetScore::StaticNew);
  StarChallengeTargetScore::StaticClassInit();
  return StarChallengeTargetScore::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeTargetScoreProps::StarChallengeTargetScoreProps() */

void __thiscall
StarChallengeTargetScoreProps::StarChallengeTargetScoreProps(StarChallengeTargetScoreProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066adb80;
  *(undefined4 *)(this + 0x40) = 0;
  std::string::string((string *)(this + 0x48),"");
  nop();
  std::string::string((string *)(this + 0x50),"");
  nop();
  std::string::string((string *)(this + 0x58),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeTargetScoreProps::StaticNew() */

StarChallengeTargetScoreProps * StarChallengeTargetScoreProps::StaticNew(void)

{
  StarChallengeTargetScoreProps *this;
  
  this = ::operator_new(0x60);
  StarChallengeTargetScoreProps(this);
  return this;
}


/* StarChallengeTargetScoreProps::~StarChallengeTargetScoreProps() */

void __thiscall
StarChallengeTargetScoreProps::~StarChallengeTargetScoreProps(StarChallengeTargetScoreProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066adb80;
  std::string::~string((string *)(this + 0x58));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeTargetScoreProps::~StarChallengeTargetScoreProps() */

void __thiscall
StarChallengeTargetScoreProps::~StarChallengeTargetScoreProps(StarChallengeTargetScoreProps *this)

{
  ~StarChallengeTargetScoreProps(this);
  AK::FreeHook(this);
  return;
}

