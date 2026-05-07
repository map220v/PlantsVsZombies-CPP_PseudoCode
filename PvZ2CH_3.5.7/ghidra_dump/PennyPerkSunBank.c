// Class: PennyPerkSunBank


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBank::StaticClassInit() */

void PennyPerkSunBank::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkSunBank");
    (*pcVar2)(plVar1,asStack_10,FUN_036c0644,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkSunBank::StaticGetClass() */

long * PennyPerkSunBank::StaticGetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBank::GetClass() const */

long * PennyPerkSunBank::GetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkSunBank",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkSunBank::~PennyPerkSunBank() */

void __thiscall PennyPerkSunBank::~PennyPerkSunBank(PennyPerkSunBank *this)

{
  *(undefined ***)this = &PTR_GetClass_066817f0;
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkSunBank::~PennyPerkSunBank() */

void __thiscall PennyPerkSunBank::~PennyPerkSunBank(PennyPerkSunBank *this)

{
  ~PennyPerkSunBank(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkSunBank::PennyPerkSunBank() */

void __thiscall PennyPerkSunBank::PennyPerkSunBank(PennyPerkSunBank *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_066817f0;
  return;
}


/* PennyPerkSunBank::StaticNew() */

PennyPerkSunBank * PennyPerkSunBank::StaticNew(void)

{
  PennyPerkSunBank *this;
  
  this = ::operator_new(0x28);
  PennyPerkSunBank(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkSunBank::Activate() */

void __thiscall PennyPerkSunBank::Activate(PennyPerkSunBank *this)

{
  int iVar1;
  long extraout_x0;
  int *piVar2;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  MiniGamePerk::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = Board::GetSunCurrency(this_00);
  piVar2 = (int *)FUN_036bdf94(*(undefined8 *)(extraout_x0 + 0x60),(long)*(int *)(this + 0x10));
  Board::SetSunMoney(this_00,iVar1 + *piVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

