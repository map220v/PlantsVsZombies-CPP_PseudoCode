// Class: S2C_Payment_SyncPaymentResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_Payment_SyncPaymentResult::StaticClassInit() */

void S2C_Payment_SyncPaymentResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_Payment_SyncPaymentResult");
    (*pcVar2)(plVar1,asStack_10,FUN_03221dc4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_Payment_SyncPaymentResult::StaticGetClass() */

long * S2C_Payment_SyncPaymentResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Payment_SyncPaymentResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_Payment_SyncPaymentResult::GetClass() const */

long * S2C_Payment_SyncPaymentResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Payment_SyncPaymentResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_Payment_SyncPaymentResult::S2C_Payment_SyncPaymentResult() */

void __thiscall
S2C_Payment_SyncPaymentResult::S2C_Payment_SyncPaymentResult(S2C_Payment_SyncPaymentResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d240;
  *(undefined ***)(this + 8) = &PTR__S2C_Payment_SyncPaymentResult_0660d2a8;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* S2C_Payment_SyncPaymentResult::StaticNew() */

S2C_Payment_SyncPaymentResult * S2C_Payment_SyncPaymentResult::StaticNew(void)

{
  S2C_Payment_SyncPaymentResult *this;
  
  this = ::operator_new(0x48);
  S2C_Payment_SyncPaymentResult(this);
  return this;
}


/* S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult() */

void __thiscall
S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult(S2C_Payment_SyncPaymentResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d240;
  *(undefined ***)(this + 8) = &PTR__S2C_Payment_SyncPaymentResult_0660d2a8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult() */

void __thiscall
S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult(S2C_Payment_SyncPaymentResult *this)

{
  ~S2C_Payment_SyncPaymentResult(this + -8);
  return;
}


/* S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult() */

void __thiscall
S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult(S2C_Payment_SyncPaymentResult *this)

{
  ~S2C_Payment_SyncPaymentResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult() */

void __thiscall
S2C_Payment_SyncPaymentResult::~S2C_Payment_SyncPaymentResult(S2C_Payment_SyncPaymentResult *this)

{
  ~S2C_Payment_SyncPaymentResult(this + -8);
  return;
}

