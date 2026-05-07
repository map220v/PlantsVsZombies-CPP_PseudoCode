// Class: ChallengeBlowZombieUI


/* ChallengeBlowZombieUI::getCountText() */

void ChallengeBlowZombieUI::getCountText(void)

{
  long in_x0;
  
  Sexy::StrFormat(L"%d/%d",(ulong)*(uint *)(in_x0 + 0x1a8),(ulong)*(uint *)(in_x0 + 0x1ac));
  return;
}


/* ChallengeBlowZombieUI::~ChallengeBlowZombieUI() */

void __thiscall ChallengeBlowZombieUI::~ChallengeBlowZombieUI(ChallengeBlowZombieUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0684f560;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeBlowZombieUI_0684f710;
  ChallengeUI::~ChallengeUI((ChallengeUI *)this);
  return;
}


/* non-virtual thunk to ChallengeBlowZombieUI::~ChallengeBlowZombieUI() */

void __thiscall ChallengeBlowZombieUI::~ChallengeBlowZombieUI(ChallengeBlowZombieUI *this)

{
  ~ChallengeBlowZombieUI(this + -0x10);
  return;
}


/* ChallengeBlowZombieUI::~ChallengeBlowZombieUI() */

void __thiscall ChallengeBlowZombieUI::~ChallengeBlowZombieUI(ChallengeBlowZombieUI *this)

{
  ~ChallengeBlowZombieUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeBlowZombieUI::~ChallengeBlowZombieUI() */

void __thiscall ChallengeBlowZombieUI::~ChallengeBlowZombieUI(ChallengeBlowZombieUI *this)

{
  ~ChallengeBlowZombieUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeBlowZombieUI::StaticClassInit() */

void ChallengeBlowZombieUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeBlowZombieUI");
    (*pcVar2)(plVar1,asStack_10,FUN_04483880,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeBlowZombieUI::StaticGetClass() */

long * ChallengeBlowZombieUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeBlowZombieUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeBlowZombieUI::GetClass() const */

long * ChallengeBlowZombieUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeBlowZombieUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeBlowZombieUI::ChallengeBlowZombieUI() */

void __thiscall ChallengeBlowZombieUI::ChallengeBlowZombieUI(ChallengeBlowZombieUI *this)

{
  undefined8 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ChallengeUI::ChallengeUI((ChallengeUI *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined ***)this = &PTR_GetClass_0684f560;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeBlowZombieUI_0684f710;
  Sexy::Point::Point((Point *)&local_10,2,3);
  *(undefined8 *)(this + 0x164) = local_10;
  *(undefined4 *)(this + 0x16c) = 2;
  uVar1 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  *(undefined8 *)(this + 0x170) = uVar1;
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b0aa40);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x178),(RtWeakPtr *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeBlowZombieUI::StaticNew() */

ChallengeBlowZombieUI * ChallengeBlowZombieUI::StaticNew(void)

{
  ChallengeBlowZombieUI *this;
  
  this = ::operator_new(0x1b0);
  ChallengeBlowZombieUI(this);
  return this;
}

