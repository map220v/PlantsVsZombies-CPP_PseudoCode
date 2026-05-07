// Class: ChallengePlantFreezeUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantFreezeUI::getCountText() */

void ChallengePlantFreezeUI::getCountText(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[CHALLENGE_REMAINING]");
  Sexy::StrFormat(L"%d",awStack_10,(ulong)*(uint *)(in_x0 + 0x1a8));
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantFreezeUI::~ChallengePlantFreezeUI() */

void __thiscall ChallengePlantFreezeUI::~ChallengePlantFreezeUI(ChallengePlantFreezeUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0684ee40;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantFreezeUI_0684eff0;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengePlantFreezeUI::~ChallengePlantFreezeUI() */

void __thiscall ChallengePlantFreezeUI::~ChallengePlantFreezeUI(ChallengePlantFreezeUI *this)

{
  ~ChallengePlantFreezeUI(this + -0x10);
  return;
}


/* ChallengePlantFreezeUI::~ChallengePlantFreezeUI() */

void __thiscall ChallengePlantFreezeUI::~ChallengePlantFreezeUI(ChallengePlantFreezeUI *this)

{
  ~ChallengePlantFreezeUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengePlantFreezeUI::~ChallengePlantFreezeUI() */

void __thiscall ChallengePlantFreezeUI::~ChallengePlantFreezeUI(ChallengePlantFreezeUI *this)

{
  ~ChallengePlantFreezeUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantFreezeUI::StaticClassInit() */

void ChallengePlantFreezeUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengePlantFreezeUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04480988,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantFreezeUI::StaticGetClass() */

long * ChallengePlantFreezeUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantFreezeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengePlantFreezeUI::GetClass() const */

long * ChallengePlantFreezeUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengePlantFreezeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengePlantFreezeUI::ChallengePlantFreezeUI() */

void __thiscall ChallengePlantFreezeUI::ChallengePlantFreezeUI(ChallengePlantFreezeUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_0684ee40;
  *(undefined ***)(this + 0x10) = &PTR__ChallengePlantFreezeUI_0684eff0;
  Sexy::Point::Point((Point *)&local_10,2,-8);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 7;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0a8b8);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengePlantFreezeUI::StaticNew() */

ChallengePlantFreezeUI * ChallengePlantFreezeUI::StaticNew(void)

{
  ChallengePlantFreezeUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengePlantFreezeUI(this);
  return this;
}

