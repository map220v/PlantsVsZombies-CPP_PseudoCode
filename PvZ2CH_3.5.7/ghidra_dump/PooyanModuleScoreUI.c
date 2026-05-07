// Class: PooyanModuleScoreUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModuleScoreUI::getCountText() */

void PooyanModuleScoreUI::getCountText(void)

{
  long in_x0;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x1a8) < *(int *)(in_x0 + 0x1ac)) {
    TodStringTranslate(L"[POOYAN_TARGETSCORE]");
    Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(in_x0 + 0x1ac));
    TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    TodStringTranslate(L"[POOYAN_SCORE]");
    Sexy::StrFormat(L"%d",awStack_18,(ulong)*(uint *)(in_x0 + 0x1a8));
    TodReplaceString(awStack_20,L"{NUMBER}",awStack_18);
    std::operator+(awStack_10,awStack_28);
    FUN_05476c50(awStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  else {
    TodStringTranslate(L"[POOYAN_PASSED_CURRENT]");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModuleScoreUI::~PooyanModuleScoreUI() */

void __thiscall PooyanModuleScoreUI::~PooyanModuleScoreUI(PooyanModuleScoreUI *this)

{
  *(undefined ***)this = &PTR_GetClass_068d8310;
  *(undefined ***)(this + 0x10) = &PTR__PooyanModuleScoreUI_068d84c0;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to PooyanModuleScoreUI::~PooyanModuleScoreUI() */

void __thiscall PooyanModuleScoreUI::~PooyanModuleScoreUI(PooyanModuleScoreUI *this)

{
  ~PooyanModuleScoreUI(this + -0x10);
  return;
}


/* PooyanModuleScoreUI::~PooyanModuleScoreUI() */

void __thiscall PooyanModuleScoreUI::~PooyanModuleScoreUI(PooyanModuleScoreUI *this)

{
  ~PooyanModuleScoreUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PooyanModuleScoreUI::~PooyanModuleScoreUI() */

void __thiscall PooyanModuleScoreUI::~PooyanModuleScoreUI(PooyanModuleScoreUI *this)

{
  ~PooyanModuleScoreUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModuleScoreUI::StaticClassInit() */

void PooyanModuleScoreUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PooyanModuleScoreUI");
    (*pcVar2)(plVar1,asStack_10,FUN_0477c73c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModuleScoreUI::StaticGetClass() */

long * PooyanModuleScoreUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PooyanModuleScoreUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PooyanModuleScoreUI::GetClass() const */

long * PooyanModuleScoreUI::GetClass(void)

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
  (*pcVar3)(plVar1,"PooyanModuleScoreUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PooyanModuleScoreUI::PooyanModuleScoreUI() */

void __thiscall PooyanModuleScoreUI::PooyanModuleScoreUI(PooyanModuleScoreUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_068d8310;
  *(undefined ***)(this + 0x10) = &PTR__PooyanModuleScoreUI_068d84c0;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 7;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b24950);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PooyanModuleScoreUI::StaticNew() */

PooyanModuleScoreUI * PooyanModuleScoreUI::StaticNew(void)

{
  PooyanModuleScoreUI *this;
  
  this = ::operator_new(0x1b0);
  PooyanModuleScoreUI(this);
  return this;
}

