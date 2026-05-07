// Class: Tenyear_BillingReward


/* Tenyear_BillingReward::~Tenyear_BillingReward() */

void __thiscall Tenyear_BillingReward::~Tenyear_BillingReward(Tenyear_BillingReward *this)

{
  *(undefined ***)this = &PTR_GetClass_069eb610;
  *(undefined ***)(this + 8) = &PTR__Tenyear_BillingReward_069eb678;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to Tenyear_BillingReward::~Tenyear_BillingReward() */

void __thiscall Tenyear_BillingReward::~Tenyear_BillingReward(Tenyear_BillingReward *this)

{
  ~Tenyear_BillingReward(this + -8);
  return;
}


/* Tenyear_BillingReward::~Tenyear_BillingReward() */

void __thiscall Tenyear_BillingReward::~Tenyear_BillingReward(Tenyear_BillingReward *this)

{
  ~Tenyear_BillingReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Tenyear_BillingReward::~Tenyear_BillingReward() */

void __thiscall Tenyear_BillingReward::~Tenyear_BillingReward(Tenyear_BillingReward *this)

{
  ~Tenyear_BillingReward(this + -8);
  return;
}


/* Tenyear_BillingReward::Tenyear_BillingReward() */

void __thiscall Tenyear_BillingReward::Tenyear_BillingReward(Tenyear_BillingReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069eb610;
  *(undefined ***)(this + 8) = &PTR__Tenyear_BillingReward_069eb678;
  return;
}


/* Tenyear_BillingReward::StaticNew() */

Tenyear_BillingReward * Tenyear_BillingReward::StaticNew(void)

{
  Tenyear_BillingReward *this;
  
  this = ::operator_new(0x20);
  Tenyear_BillingReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Tenyear_BillingReward::StaticClassInit() */

void Tenyear_BillingReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"Tenyear_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04e89b28,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Tenyear_BillingReward");
    (*pcVar3)(plVar2,asStack_10,FUN_04e8bd88,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Tenyear_BillingReward::StaticGetClass() */

long * Tenyear_BillingReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Tenyear_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Tenyear_BillingReward::GetClass() const */

long * Tenyear_BillingReward::GetClass(void)

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
  (*pcVar3)(plVar1,"Tenyear_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

