// Class: PVZ1KlotskiUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUI::getCountText() */

void PVZ1KlotskiUI::getCountText(void)

{
  long in_x0;
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodStringTranslate(L"[PVZ1KLOTSKI_ROUNDS]");
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


/* PVZ1KlotskiUI::~PVZ1KlotskiUI() */

void __thiscall PVZ1KlotskiUI::~PVZ1KlotskiUI(PVZ1KlotskiUI *this)

{
  *(undefined ***)this = &PTR_GetClass_067af240;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1KlotskiUI_067af3f0;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to PVZ1KlotskiUI::~PVZ1KlotskiUI() */

void __thiscall PVZ1KlotskiUI::~PVZ1KlotskiUI(PVZ1KlotskiUI *this)

{
  ~PVZ1KlotskiUI(this + -0x10);
  return;
}


/* PVZ1KlotskiUI::~PVZ1KlotskiUI() */

void __thiscall PVZ1KlotskiUI::~PVZ1KlotskiUI(PVZ1KlotskiUI *this)

{
  ~PVZ1KlotskiUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1KlotskiUI::~PVZ1KlotskiUI() */

void __thiscall PVZ1KlotskiUI::~PVZ1KlotskiUI(PVZ1KlotskiUI *this)

{
  ~PVZ1KlotskiUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUI::StaticClassInit() */

void PVZ1KlotskiUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1KlotskiUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03fd3f24,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiUI::StaticGetClass() */

long * PVZ1KlotskiUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1KlotskiUI::GetClass() const */

long * PVZ1KlotskiUI::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1KlotskiUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1KlotskiUI::PVZ1KlotskiUI() */

void __thiscall PVZ1KlotskiUI::PVZ1KlotskiUI(PVZ1KlotskiUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_067af240;
  *(undefined ***)(this + 0x10) = &PTR__PVZ1KlotskiUI_067af3f0;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 7;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06ae6c38);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1KlotskiUI::StaticNew() */

PVZ1KlotskiUI * PVZ1KlotskiUI::StaticNew(void)

{
  PVZ1KlotskiUI *this;
  
  this = ::operator_new(0x1b0);
  PVZ1KlotskiUI(this);
  return this;
}

