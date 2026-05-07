// Class: NetworkCreatePaymentInfo


/* NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo() */

void __thiscall NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo(NetworkCreatePaymentInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e8c0;
  *(undefined ***)(this + 8) = &PTR__NetworkCreatePaymentInfo_0660e928;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo() */

void __thiscall NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo(NetworkCreatePaymentInfo *this)

{
  ~NetworkCreatePaymentInfo(this + -8);
  return;
}


/* NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo() */

void __thiscall NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo(NetworkCreatePaymentInfo *this)

{
  ~NetworkCreatePaymentInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo() */

void __thiscall NetworkCreatePaymentInfo::~NetworkCreatePaymentInfo(NetworkCreatePaymentInfo *this)

{
  ~NetworkCreatePaymentInfo(this + -8);
  return;
}


/* NetworkCreatePaymentInfo::NetworkCreatePaymentInfo() */

void __thiscall NetworkCreatePaymentInfo::NetworkCreatePaymentInfo(NetworkCreatePaymentInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e8c0;
  *(undefined ***)(this + 8) = &PTR__NetworkCreatePaymentInfo_0660e928;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkCreatePaymentInfo::StaticNew() */

NetworkCreatePaymentInfo * NetworkCreatePaymentInfo::StaticNew(void)

{
  NetworkCreatePaymentInfo *this;
  
  this = ::operator_new(0x20);
  NetworkCreatePaymentInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCreatePaymentInfo::StaticClassInit() */

void NetworkCreatePaymentInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkCreatePaymentInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0321e770,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCreatePaymentInfo::StaticGetClass() */

long * NetworkCreatePaymentInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCreatePaymentInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCreatePaymentInfo::GetClass() const */

long * NetworkCreatePaymentInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCreatePaymentInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

