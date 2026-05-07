// Class: S2C_Payment_ValidateResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_Payment_ValidateResult::StaticClassInit() */

void S2C_Payment_ValidateResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PaymentBundleInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03201f3c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_Payment_ValidateResult");
    (*pcVar3)(plVar2,asStack_10,FUN_032360d4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_Payment_ValidateResult::StaticGetClass() */

long * S2C_Payment_ValidateResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Payment_ValidateResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_Payment_ValidateResult::GetClass() const */

long * S2C_Payment_ValidateResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Payment_ValidateResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_Payment_ValidateResult::S2C_Payment_ValidateResult() */

void __thiscall
S2C_Payment_ValidateResult::S2C_Payment_ValidateResult(S2C_Payment_ValidateResult *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660d000;
  *(undefined ***)this = &PTR_GetClass_0660d000;
  *(undefined ***)(this + 8) = &PTR__S2C_Payment_ValidateResult_0660d068;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  std::string::append((string *)(this + 0x28),"",(size_t)__n);
  return;
}


/* S2C_Payment_ValidateResult::StaticNew() */

S2C_Payment_ValidateResult * S2C_Payment_ValidateResult::StaticNew(void)

{
  S2C_Payment_ValidateResult *this;
  
  this = ::operator_new(0x48);
  S2C_Payment_ValidateResult(this);
  return this;
}


/* S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult() */

void __thiscall
S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult(S2C_Payment_ValidateResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d000;
  *(undefined ***)(this + 8) = &PTR__S2C_Payment_ValidateResult_0660d068;
  std::vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>>::~vector
            ((vector<PaymentBundleInfo,std::allocator<PaymentBundleInfo>> *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult() */

void __thiscall
S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult(S2C_Payment_ValidateResult *this)

{
  ~S2C_Payment_ValidateResult(this + -8);
  return;
}


/* S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult() */

void __thiscall
S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult(S2C_Payment_ValidateResult *this)

{
  ~S2C_Payment_ValidateResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult() */

void __thiscall
S2C_Payment_ValidateResult::~S2C_Payment_ValidateResult(S2C_Payment_ValidateResult *this)

{
  ~S2C_Payment_ValidateResult(this + -8);
  return;
}

