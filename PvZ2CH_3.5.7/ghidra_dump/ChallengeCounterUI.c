// Class: ChallengeCounterUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeCounterUI::getCountText() */

void ChallengeCounterUI::getCountText(void)

{
  long in_x0;
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
    Sexy::StrFormat(L"%d/%d",(ulong)*(uint *)(in_x0 + 0x1a8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeCounterUI::~ChallengeCounterUI() */

void __thiscall ChallengeCounterUI::~ChallengeCounterUI(ChallengeCounterUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0667ba70;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeCounterUI_0667bc20;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeCounterUI::~ChallengeCounterUI() */

void __thiscall ChallengeCounterUI::~ChallengeCounterUI(ChallengeCounterUI *this)

{
  ~ChallengeCounterUI(this + -0x10);
  return;
}


/* ChallengeCounterUI::~ChallengeCounterUI() */

void __thiscall ChallengeCounterUI::~ChallengeCounterUI(ChallengeCounterUI *this)

{
  ~ChallengeCounterUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeCounterUI::~ChallengeCounterUI() */

void __thiscall ChallengeCounterUI::~ChallengeCounterUI(ChallengeCounterUI *this)

{
  ~ChallengeCounterUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeCounterUI::StaticClassInit() */

void ChallengeCounterUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeCounterUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0368744c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeCounterUI::StaticGetClass() */

long * ChallengeCounterUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeCounterUI::GetClass() const */

long * ChallengeCounterUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeCounterUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeCounterUI::ChallengeCounterUI() */

void __thiscall ChallengeCounterUI::ChallengeCounterUI(ChallengeCounterUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_0667ba70;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeCounterUI_0667bc20;
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


/* ChallengeCounterUI::StaticNew() */

ChallengeCounterUI * ChallengeCounterUI::StaticNew(void)

{
  ChallengeCounterUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeCounterUI(this);
  return this;
}

