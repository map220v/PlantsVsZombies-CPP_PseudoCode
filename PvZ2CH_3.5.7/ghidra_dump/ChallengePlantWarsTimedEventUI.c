// Class: ChallengePlantWarsTimedEventUI


/* ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI() */

void __thiscall
ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI
          (ChallengePlantWarsTimedEventUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738840;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantWarsTimedEventUI_067389f0;
  FUN_05476c50(this + 0x1b0);
  ChallengeRiftTimedEventUI::~ChallengeRiftTimedEventUI((ChallengeRiftTimedEventUI *)this);
  return;
}


/* non-virtual thunk to ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI() */

void __thiscall
ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI
          (ChallengePlantWarsTimedEventUI *this)

{
  ~ChallengePlantWarsTimedEventUI(this + -0x10);
  return;
}


/* ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI() */

void __thiscall
ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI
          (ChallengePlantWarsTimedEventUI *this)

{
  ~ChallengePlantWarsTimedEventUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI() */

void __thiscall
ChallengePlantWarsTimedEventUI::~ChallengePlantWarsTimedEventUI
          (ChallengePlantWarsTimedEventUI *this)

{
  ~ChallengePlantWarsTimedEventUI(this + -0x10);
  return;
}


/* ChallengePlantWarsTimedEventUI::getCountText() */

undefined8 ChallengePlantWarsTimedEventUI::getCountText(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantWarsTimedEventUI::StaticClassInit() */

void ChallengePlantWarsTimedEventUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengePlantWarsTimedEventUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbe3c0,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantWarsTimedEventUI::StaticGetClass() */

long * ChallengePlantWarsTimedEventUI::StaticGetClass(void)

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
  uVar2 = ChallengeRiftTimedEventUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengePlantWarsTimedEventUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengePlantWarsTimedEventUI::GetClass() const */

long * ChallengePlantWarsTimedEventUI::GetClass(void)

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
  uVar2 = ChallengeRiftTimedEventUI::StaticGetClass();
  (*pcVar3)(plVar1,"ChallengePlantWarsTimedEventUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantWarsTimedEventUI::ChallengePlantWarsTimedEventUI() */

void __thiscall
ChallengePlantWarsTimedEventUI::ChallengePlantWarsTimedEventUI(ChallengePlantWarsTimedEventUI *this)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeRiftTimedEventUI::ChallengeRiftTimedEventUI((ChallengeRiftTimedEventUI *)this);
  *(undefined ***)this = &PTR_GetClass_06738840;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantWarsTimedEventUI_067389f0;
  FUN_05476574(this + 0x1b0);
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


/* ChallengePlantWarsTimedEventUI::StaticNew() */

ChallengePlantWarsTimedEventUI * ChallengePlantWarsTimedEventUI::StaticNew(void)

{
  ChallengePlantWarsTimedEventUI *this;
  
  this = ::operator_new(0x1b8);
  ChallengePlantWarsTimedEventUI(this);
  return this;
}


/* ChallengePlantWarsTimedEventUI::SetString(std::wstring) */

void ChallengePlantWarsTimedEventUI::SetString(long param_1)

{
  thunk_FUN_05477b9c(param_1 + 0x1b0);
  return;
}

