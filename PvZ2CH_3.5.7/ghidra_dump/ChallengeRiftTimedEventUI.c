// Class: ChallengeRiftTimedEventUI


/* ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI() */

void __thiscall
ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI(ChallengeRiftTimedEventUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738660;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeRiftTimedEventUI_06738810;
  ChallengeSunTimerUI::~ChallengeSunTimerUI((ChallengeSunTimerUI *)this);
  return;
}


/* non-virtual thunk to ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI() */

void __thiscall
ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI(ChallengeRiftTimedEventUI *this)

{
  ~ChallengeRiftTimedEventUI(this + -0x10);
  return;
}


/* ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI() */

void __thiscall
ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI(ChallengeRiftTimedEventUI *this)

{
  ~ChallengeRiftTimedEventUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI() */

void __thiscall
ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI(ChallengeRiftTimedEventUI *this)

{
  ~ChallengeRiftTimedEventUI(this + -0x10);
  return;
}


/* ChallengeRiftTimedEventUI::getCountText() */

void ChallengeRiftTimedEventUI::getCountText(void)

{
  long in_x0;
  
  Sexy::StrFormat(L"%.2d:%.2d",(ulong)(uint)(*(int *)(in_x0 + 0x1a8) / 0x3c),
                  (ulong)(uint)(*(int *)(in_x0 + 0x1a8) % 0x3c));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRiftTimedEventUI::StaticClassInit() */

void ChallengeRiftTimedEventUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeRiftTimedEventUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbe1ac,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeRiftTimedEventUI::StaticGetClass() */

long * ChallengeRiftTimedEventUI::StaticGetClass(void)

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
  uVar2 = ChallengeSunTimerUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeRiftTimedEventUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeRiftTimedEventUI::GetClass() const */

long * ChallengeRiftTimedEventUI::GetClass(void)

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
  uVar2 = ChallengeSunTimerUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengeRiftTimedEventUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeRiftTimedEventUI::ChallengeRiftTimedEventUI() */

void __thiscall
ChallengeRiftTimedEventUI::ChallengeRiftTimedEventUI(ChallengeRiftTimedEventUI *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeSunTimerUI::ChallengeSunTimerUI((ChallengeSunTimerUI *)this);
  *(undefined ***)this = &PTR_GetClass_06738660;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeRiftTimedEventUI_06738810;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acdcf0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeRiftTimedEventUI::StaticNew() */

ChallengeRiftTimedEventUI * ChallengeRiftTimedEventUI::StaticNew(void)

{
  ChallengeRiftTimedEventUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeRiftTimedEventUI(this);
  return this;
}

