// Class: ExchangeAvatar_BillingReward


/* ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward() */

void __thiscall
ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward(ExchangeAvatar_BillingReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066a5470;
  *(undefined ***)(this + 8) = &PTR__ExchangeAvatar_BillingReward_066a54d8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward() */

void __thiscall
ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward(ExchangeAvatar_BillingReward *this)

{
  ~ExchangeAvatar_BillingReward(this + -8);
  return;
}


/* ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward() */

void __thiscall
ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward(ExchangeAvatar_BillingReward *this)

{
  ~ExchangeAvatar_BillingReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward() */

void __thiscall
ExchangeAvatar_BillingReward::~ExchangeAvatar_BillingReward(ExchangeAvatar_BillingReward *this)

{
  ~ExchangeAvatar_BillingReward(this + -8);
  return;
}


/* ExchangeAvatar_BillingReward::ExchangeAvatar_BillingReward() */

void __thiscall
ExchangeAvatar_BillingReward::ExchangeAvatar_BillingReward(ExchangeAvatar_BillingReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066a5470;
  *(undefined ***)(this + 8) = &PTR__ExchangeAvatar_BillingReward_066a54d8;
  return;
}


/* ExchangeAvatar_BillingReward::StaticNew() */

ExchangeAvatar_BillingReward * ExchangeAvatar_BillingReward::StaticNew(void)

{
  ExchangeAvatar_BillingReward *this;
  
  this = ::operator_new(0x28);
  ExchangeAvatar_BillingReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExchangeAvatar_BillingReward::StaticClassInit() */

void ExchangeAvatar_BillingReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"ExchangeAvatar_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03813cac,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ExchangeAvatar_BillingReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03819738,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ExchangeAvatar_BillingReward::StaticGetClass() */

long * ExchangeAvatar_BillingReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ExchangeAvatar_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ExchangeAvatar_BillingReward::GetClass() const */

long * ExchangeAvatar_BillingReward::GetClass(void)

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
  (*pcVar3)(plVar1,"ExchangeAvatar_BillingReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

