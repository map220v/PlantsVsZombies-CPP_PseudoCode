// Class: ChallengeLevelTimerUI


/* ChallengeLevelTimerUI::~ChallengeLevelTimerUI() */

void __thiscall ChallengeLevelTimerUI::~ChallengeLevelTimerUI(ChallengeLevelTimerUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738480;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeLevelTimerUI_06738630;
  ChallengeSunTimerUI::~ChallengeSunTimerUI((ChallengeSunTimerUI *)this);
  return;
}


/* non-virtual thunk to ChallengeLevelTimerUI::~ChallengeLevelTimerUI() */

void __thiscall ChallengeLevelTimerUI::~ChallengeLevelTimerUI(ChallengeLevelTimerUI *this)

{
  ~ChallengeLevelTimerUI(this + -0x10);
  return;
}


/* ChallengeLevelTimerUI::~ChallengeLevelTimerUI() */

void __thiscall ChallengeLevelTimerUI::~ChallengeLevelTimerUI(ChallengeLevelTimerUI *this)

{
  ~ChallengeLevelTimerUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeLevelTimerUI::~ChallengeLevelTimerUI() */

void __thiscall ChallengeLevelTimerUI::~ChallengeLevelTimerUI(ChallengeLevelTimerUI *this)

{
  ~ChallengeLevelTimerUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeLevelTimerUI::StaticClassInit() */

void ChallengeLevelTimerUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeLevelTimerUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbdf98,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeLevelTimerUI::StaticGetClass() */

long * ChallengeLevelTimerUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeLevelTimerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeLevelTimerUI::GetClass() const */

long * ChallengeLevelTimerUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeLevelTimerUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeLevelTimerUI::ChallengeLevelTimerUI() */

void __thiscall ChallengeLevelTimerUI::ChallengeLevelTimerUI(ChallengeLevelTimerUI *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeSunTimerUI::ChallengeSunTimerUI((ChallengeSunTimerUI *)this);
  *(undefined ***)this = &PTR_GetClass_06738480;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeLevelTimerUI_06738630;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acdd50);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeLevelTimerUI::StaticNew() */

ChallengeLevelTimerUI * ChallengeLevelTimerUI::StaticNew(void)

{
  ChallengeLevelTimerUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeLevelTimerUI(this);
  return this;
}

