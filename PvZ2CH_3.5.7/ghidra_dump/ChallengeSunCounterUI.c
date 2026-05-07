// Class: ChallengeSunCounterUI


/* ChallengeSunCounterUI::~ChallengeSunCounterUI() */

void __thiscall ChallengeSunCounterUI::~ChallengeSunCounterUI(ChallengeSunCounterUI *this)

{
  *(undefined ***)this = &PTR_GetClass_067380c0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeSunCounterUI_06738270;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeSunCounterUI::~ChallengeSunCounterUI() */

void __thiscall ChallengeSunCounterUI::~ChallengeSunCounterUI(ChallengeSunCounterUI *this)

{
  ~ChallengeSunCounterUI(this + -0x10);
  return;
}


/* ChallengeSunCounterUI::~ChallengeSunCounterUI() */

void __thiscall ChallengeSunCounterUI::~ChallengeSunCounterUI(ChallengeSunCounterUI *this)

{
  ~ChallengeSunCounterUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeSunCounterUI::~ChallengeSunCounterUI() */

void __thiscall ChallengeSunCounterUI::~ChallengeSunCounterUI(ChallengeSunCounterUI *this)

{
  ~ChallengeSunCounterUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeSunCounterUI::getCountText() */

void ChallengeSunCounterUI::getCountText(void)

{
  AtomicInt<int> *this;
  AtomicInt<int> *this_00;
  uint uVar1;
  long in_x0;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x1ac) == 0) {
    TodStringTranslate(L"[CHALLENGE_REMAINING]");
    Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(in_x0 + 0x1a8));
    TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
  }
  else {
    this = (AtomicInt<int> *)(in_x0 + 0x1b0);
    this_00 = (AtomicInt<int> *)(in_x0 + 0x1c0);
    uVar2 = EA::Thread::AtomicInt<int>::GetValue(this);
    uVar3 = ZombieSkill::GetSkillWeight((ZombieSkill *)this);
    uVar4 = ImageLib::Image::GetWidth((Image *)this);
    uVar1 = *(uint *)(in_x0 + 0x1a8);
    uVar5 = EA::Thread::AtomicInt<int>::GetValue(this_00);
    uVar6 = ZombieSkill::GetSkillWeight((ZombieSkill *)this_00);
    uVar7 = ImageLib::Image::GetWidth((Image *)this_00);
    Sexy::StrFormat(L"^%.2X%.2X%.2X %d^%.2X%.2X%.2X /%d",uVar2 & 0xffffffff,uVar3 & 0xffffffff,
                    uVar4 & 0xffffffff,(ulong)uVar1,uVar5 & 0xffffffff,uVar6 & 0xffffffff,
                    uVar7 & 0xffffffff,*(undefined4 *)(in_x0 + 0x1ac));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeSunCounterUI::StaticClassInit() */

void ChallengeSunCounterUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeSunCounterUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbd5c8,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeSunCounterUI::StaticGetClass() */

long * ChallengeSunCounterUI::StaticGetClass(void)

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
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeSunCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeSunCounterUI::GetClass() const */

long * ChallengeSunCounterUI::GetClass(void)

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
  uVar2 = ChallengeUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeSunCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeSunCounterUI::SetColor(Sexy::Color, Sexy::Color) */

void __thiscall
ChallengeSunCounterUI::SetColor(ChallengeSunCounterUI *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(this + 0x1b0) = *param_2;
  *(undefined8 *)(this + 0x1b8) = uVar1;
  uVar1 = param_3[1];
  *(undefined8 *)(this + 0x1c0) = *param_3;
  *(undefined8 *)(this + 0x1c8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeSunCounterUI::ChallengeSunCounterUI() */

void __thiscall ChallengeSunCounterUI::ChallengeSunCounterUI(ChallengeSunCounterUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_067380c0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeSunCounterUI_06738270;
  Sexy::Color::Color((Color *)(this + 0x1b0),1);
  Sexy::Color::Color((Color *)(this + 0x1c0),1);
  Sexy::Point::Point((Point *)&local_10,5,5);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 2;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeSunCounterUI::StaticNew() */

ChallengeSunCounterUI * ChallengeSunCounterUI::StaticNew(void)

{
  ChallengeSunCounterUI *this;
  
  this = ::operator_new(0x1d0);
  ChallengeSunCounterUI(this);
  return this;
}

