// Class: ChallengeSunTimerUI


/* ChallengeSunTimerUI::~ChallengeSunTimerUI() */

void __thiscall ChallengeSunTimerUI::~ChallengeSunTimerUI(ChallengeSunTimerUI *this)

{
  *(undefined ***)this = &PTR_GetClass_067382a0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeSunTimerUI_06738450;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeSunTimerUI::~ChallengeSunTimerUI() */

void __thiscall ChallengeSunTimerUI::~ChallengeSunTimerUI(ChallengeSunTimerUI *this)

{
  ~ChallengeSunTimerUI(this + -0x10);
  return;
}


/* ChallengeSunTimerUI::~ChallengeSunTimerUI() */

void __thiscall ChallengeSunTimerUI::~ChallengeSunTimerUI(ChallengeSunTimerUI *this)

{
  ~ChallengeSunTimerUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeSunTimerUI::~ChallengeSunTimerUI() */

void __thiscall ChallengeSunTimerUI::~ChallengeSunTimerUI(ChallengeSunTimerUI *this)

{
  ~ChallengeSunTimerUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeSunTimerUI::StaticClassInit() */

void ChallengeSunTimerUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeSunTimerUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbdd04,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeSunTimerUI::StaticGetClass() */

long * ChallengeSunTimerUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeSunTimerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeSunTimerUI::GetClass() const */

long * ChallengeSunTimerUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeSunTimerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeSunTimerUI::ChallengeSunTimerUI() */

void __thiscall ChallengeSunTimerUI::ChallengeSunTimerUI(ChallengeSunTimerUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_067382a0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeSunTimerUI_06738450;
  Sexy::Point::Point((Point *)&local_10,5,5);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 5;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acdd50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeSunTimerUI::StaticNew() */

ChallengeSunTimerUI * ChallengeSunTimerUI::StaticNew(void)

{
  ChallengeSunTimerUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeSunTimerUI(this);
  return this;
}

