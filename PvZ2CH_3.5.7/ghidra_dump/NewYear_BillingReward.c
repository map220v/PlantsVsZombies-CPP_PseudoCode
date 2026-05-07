// Class: NewYear_BillingReward


/* NewYear_BillingReward::~NewYear_BillingReward() */

void __thiscall NewYear_BillingReward::~NewYear_BillingReward(NewYear_BillingReward *this)

{
  *(undefined ***)this = &PTR_GetClass_067aa0c0;
  *(undefined ***)(this + 8) = &PTR__NewYear_BillingReward_067aa128;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewYear_BillingReward::~NewYear_BillingReward() */

void __thiscall NewYear_BillingReward::~NewYear_BillingReward(NewYear_BillingReward *this)

{
  ~NewYear_BillingReward(this + -8);
  return;
}


/* NewYear_BillingReward::~NewYear_BillingReward() */

void __thiscall NewYear_BillingReward::~NewYear_BillingReward(NewYear_BillingReward *this)

{
  ~NewYear_BillingReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewYear_BillingReward::~NewYear_BillingReward() */

void __thiscall NewYear_BillingReward::~NewYear_BillingReward(NewYear_BillingReward *this)

{
  ~NewYear_BillingReward(this + -8);
  return;
}


/* NewYear_BillingReward::NewYear_BillingReward() */

void __thiscall NewYear_BillingReward::NewYear_BillingReward(NewYear_BillingReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_067aa0c0;
  *(undefined ***)(this + 8) = &PTR__NewYear_BillingReward_067aa128;
  return;
}


/* NewYear_BillingReward::StaticNew() */

NewYear_BillingReward * NewYear_BillingReward::StaticNew(void)

{
  NewYear_BillingReward *this;
  
  this = ::operator_new(0x20);
  NewYear_BillingReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYear_BillingReward::StaticClassInit() */

void NewYear_BillingReward::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYear_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03fc2ef0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYear_BillingReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03fc511c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYear_BillingReward::StaticGetClass() */

long * NewYear_BillingReward::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NewYear_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYear_BillingReward::GetClass() const */

long * NewYear_BillingReward::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"NewYear_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

