// Class: ChallengePlantSurviveUI


/* ChallengePlantSurviveUI::~ChallengePlantSurviveUI() */

void __thiscall ChallengePlantSurviveUI::~ChallengePlantSurviveUI(ChallengePlantSurviveUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0684f1d0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantSurviveUI_0684f380;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengePlantSurviveUI::~ChallengePlantSurviveUI() */

void __thiscall ChallengePlantSurviveUI::~ChallengePlantSurviveUI(ChallengePlantSurviveUI *this)

{
  ~ChallengePlantSurviveUI(this + -0x10);
  return;
}


/* ChallengePlantSurviveUI::~ChallengePlantSurviveUI() */

void __thiscall ChallengePlantSurviveUI::~ChallengePlantSurviveUI(ChallengePlantSurviveUI *this)

{
  ~ChallengePlantSurviveUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengePlantSurviveUI::~ChallengePlantSurviveUI() */

void __thiscall ChallengePlantSurviveUI::~ChallengePlantSurviveUI(ChallengePlantSurviveUI *this)

{
  ~ChallengePlantSurviveUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantSurviveUI::StaticClassInit() */

void ChallengePlantSurviveUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengePlantSurviveUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04481bd0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantSurviveUI::StaticGetClass() */

long * ChallengePlantSurviveUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantSurviveUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengePlantSurviveUI::GetClass() const */

long * ChallengePlantSurviveUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantSurviveUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantSurviveUI::ChallengePlantSurviveUI() */

void __thiscall ChallengePlantSurviveUI::ChallengePlantSurviveUI(ChallengePlantSurviveUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_0684f1d0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantSurviveUI_0684f380;
  Sexy::Point::Point((Point *)&local_10,5,5);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 2;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a938);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantSurviveUI::StaticNew() */

ChallengePlantSurviveUI * ChallengePlantSurviveUI::StaticNew(void)

{
  ChallengePlantSurviveUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengePlantSurviveUI(this);
  return this;
}

