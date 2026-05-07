// Class: ChallengePlantCounterUI


/* ChallengePlantCounterUI::~ChallengePlantCounterUI() */

void __thiscall ChallengePlantCounterUI::~ChallengePlantCounterUI(ChallengePlantCounterUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06737ee0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantCounterUI_06738090;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengePlantCounterUI::~ChallengePlantCounterUI() */

void __thiscall ChallengePlantCounterUI::~ChallengePlantCounterUI(ChallengePlantCounterUI *this)

{
  ~ChallengePlantCounterUI(this + -0x10);
  return;
}


/* ChallengePlantCounterUI::~ChallengePlantCounterUI() */

void __thiscall ChallengePlantCounterUI::~ChallengePlantCounterUI(ChallengePlantCounterUI *this)

{
  ~ChallengePlantCounterUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengePlantCounterUI::~ChallengePlantCounterUI() */

void __thiscall ChallengePlantCounterUI::~ChallengePlantCounterUI(ChallengePlantCounterUI *this)

{
  ~ChallengePlantCounterUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantCounterUI::getCountText() */

void ChallengePlantCounterUI::getCountText(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x1b0) == '\0') {
    if (*(int *)(in_x0 + 0x1ac) == 0) {
      TodStringTranslate(L"[CHALLENGE_REMAINING]");
      Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(in_x0 + 0x1a8));
      TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
      FUN_05476c50(awStack_10);
      FUN_05476c50(awStack_18);
    }
    else {
      Sexy::StrFormat(L"%d/%d",(ulong)*(uint *)(in_x0 + 0x1a8));
    }
  }
  else {
    Sexy::StrFormat(L"  %d",(ulong)*(uint *)(in_x0 + 0x1a8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantCounterUI::StaticClassInit() */

void ChallengePlantCounterUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengePlantCounterUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbce90,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantCounterUI::StaticGetClass() */

long * ChallengePlantCounterUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengePlantCounterUI::GetClass() const */

long * ChallengePlantCounterUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantCounterUI::ChallengePlantCounterUI() */

void __thiscall ChallengePlantCounterUI::ChallengePlantCounterUI(ChallengePlantCounterUI *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_06737ee0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantCounterUI_06738090;
  Sexy::Point::Point((Point *)&local_10,5,5);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 2;
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  this[0x1b0] = (ChallengePlantCounterUI)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x170) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantCounterUI::StaticNew() */

ChallengePlantCounterUI * ChallengePlantCounterUI::StaticNew(void)

{
  ChallengePlantCounterUI *this;
  
  this = ::operator_new(0x1b8);
  ChallengePlantCounterUI(this);
  return this;
}

