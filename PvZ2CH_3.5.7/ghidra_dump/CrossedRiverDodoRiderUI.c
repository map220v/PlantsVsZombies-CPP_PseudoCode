// Class: CrossedRiverDodoRiderUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrossedRiverDodoRiderUI::getCountText() */

void CrossedRiverDodoRiderUI::getCountText(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[RIVERCROSSING_DODORIDER]");
  Sexy::StrFormat(L"%d/%d",awStack_10,(ulong)*(uint *)(in_x0 + 0x1a8),
                  (ulong)*(uint *)(in_x0 + 0x1ac));
  TodReplaceString(awStack_18,L"{NUMBER}",awStack_10);
  FUN_05476c50(awStack_10);
  FUN_05476c50(awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI() */

void __thiscall CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI(CrossedRiverDodoRiderUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0692f820;
  *(undefined ***)(this + 0x10) = &PTR__CrossedRiverDodoRiderUI_0692f9d0;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI() */

void __thiscall CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI(CrossedRiverDodoRiderUI *this)

{
  ~CrossedRiverDodoRiderUI(this + -0x10);
  return;
}


/* CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI() */

void __thiscall CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI(CrossedRiverDodoRiderUI *this)

{
  ~CrossedRiverDodoRiderUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI() */

void __thiscall CrossedRiverDodoRiderUI::~CrossedRiverDodoRiderUI(CrossedRiverDodoRiderUI *this)

{
  ~CrossedRiverDodoRiderUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrossedRiverDodoRiderUI::StaticClassInit() */

void CrossedRiverDodoRiderUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"CrossedRiverDodoRiderUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04a230a4,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrossedRiverDodoRiderUI::StaticGetClass() */

long * CrossedRiverDodoRiderUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CrossedRiverDodoRiderUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CrossedRiverDodoRiderUI::GetClass() const */

long * CrossedRiverDodoRiderUI::GetClass(void)

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
  (*pcVar3)(plVar1,"CrossedRiverDodoRiderUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CrossedRiverDodoRiderUI::CrossedRiverDodoRiderUI() */

void __thiscall CrossedRiverDodoRiderUI::CrossedRiverDodoRiderUI(CrossedRiverDodoRiderUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_0692f820;
  *(undefined ***)(this + 0x10) = &PTR__CrossedRiverDodoRiderUI_0692f9d0;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 7;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b78dd0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CrossedRiverDodoRiderUI::StaticNew() */

CrossedRiverDodoRiderUI * CrossedRiverDodoRiderUI::StaticNew(void)

{
  CrossedRiverDodoRiderUI *this;
  
  this = ::operator_new(0x1b0);
  CrossedRiverDodoRiderUI(this);
  return this;
}

