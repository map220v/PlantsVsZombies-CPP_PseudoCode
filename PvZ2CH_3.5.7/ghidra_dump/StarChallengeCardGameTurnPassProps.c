// Class: StarChallengeCardGameTurnPassProps


/* StarChallengeCardGameTurnPassProps::GetDescriptiveName() const */

void __thiscall
StarChallengeCardGameTurnPassProps::GetDescriptiveName(StarChallengeCardGameTurnPassProps *this)

{
  TodStringTranslate(L"[STARCHALLENGE_CARD_GAME_TURN_PASS_NAME]");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarChallengeCardGameTurnPassProps::GetDescription() const */

void StarChallengeCardGameTurnPassProps::GetDescription(void)

{
  long in_x0;
  undefined1 auStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x40));
  FUN_05478178(awStack_10,L"[STARCHALLENGE_CARD_GAME_TURN_PASS]",auStack_20);
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
/* StarChallengeCardGameTurnPassProps::StaticClassInit() */

void StarChallengeCardGameTurnPassProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StarChallengeCardGameTurnPassProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03562708,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarChallengeCardGameTurnPassProps::StaticGetClass() */

long * StarChallengeCardGameTurnPassProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeCardGameTurnPassProps::GetClass() const */

long * StarChallengeCardGameTurnPassProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StarChallengeCardGameTurnPassProps::GetModuleClass() const */

long * StarChallengeCardGameTurnPassProps::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (StarChallengeCardGameTurnPass::sClass != (long *)0x0) {
    return StarChallengeCardGameTurnPass::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  StarChallengeCardGameTurnPass::sClass = plVar1;
  uVar2 = Challenge::StaticGetClass();
  (*pcVar3)(plVar1,"StarChallengeCardGameTurnPass",uVar2,StarChallengeCardGameTurnPass::StaticNew);
  StarChallengeCardGameTurnPass::StaticClassInit();
  return StarChallengeCardGameTurnPass::sClass;
}


/* StarChallengeCardGameTurnPassProps::StarChallengeCardGameTurnPassProps() */

void __thiscall
StarChallengeCardGameTurnPassProps::StarChallengeCardGameTurnPassProps
          (StarChallengeCardGameTurnPassProps *this)

{
  LevelModuleProperties::LevelModuleProperties((LevelModuleProperties *)this);
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_GetClass_0665a1e0;
  return;
}


/* StarChallengeCardGameTurnPassProps::StaticNew() */

StarChallengeCardGameTurnPassProps * StarChallengeCardGameTurnPassProps::StaticNew(void)

{
  StarChallengeCardGameTurnPassProps *this;
  
  this = ::operator_new(0x48);
  StarChallengeCardGameTurnPassProps(this);
  return this;
}


/* StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps() */

void __thiscall
StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps
          (StarChallengeCardGameTurnPassProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0665a1e0;
  LevelModuleProperties::~LevelModuleProperties((LevelModuleProperties *)this);
  return;
}


/* StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps() */

void __thiscall
StarChallengeCardGameTurnPassProps::~StarChallengeCardGameTurnPassProps
          (StarChallengeCardGameTurnPassProps *this)

{
  ~StarChallengeCardGameTurnPassProps(this);
  AK::FreeHook(this);
  return;
}

