// Class: NetworkBuyOfferInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkBuyOfferInfo::StaticClassInit() */

void NetworkBuyOfferInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"BuyOfferInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c29f30,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkBuyOfferInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c2d078,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkBuyOfferInfo::StaticGetClass() */

long * NetworkBuyOfferInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBuyOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkBuyOfferInfo::GetClass() const */

long * NetworkBuyOfferInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBuyOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkBuyOfferInfo::NetworkBuyOfferInfo() */

void __thiscall NetworkBuyOfferInfo::NetworkBuyOfferInfo(NetworkBuyOfferInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06983f40;
  *(undefined ***)(this + 8) = &PTR__NetworkBuyOfferInfo_06983fa8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkBuyOfferInfo::StaticNew() */

NetworkBuyOfferInfo * NetworkBuyOfferInfo::StaticNew(void)

{
  NetworkBuyOfferInfo *this;
  
  this = ::operator_new(0x30);
  NetworkBuyOfferInfo(this);
  return this;
}


/* NetworkBuyOfferInfo::~NetworkBuyOfferInfo() */

void __thiscall NetworkBuyOfferInfo::~NetworkBuyOfferInfo(NetworkBuyOfferInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06983f40;
  *(undefined ***)(this + 8) = &PTR__NetworkBuyOfferInfo_06983fa8;
  std::vector<BuyOfferInfo,std::allocator<BuyOfferInfo>>::~vector
            ((vector<BuyOfferInfo,std::allocator<BuyOfferInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkBuyOfferInfo::~NetworkBuyOfferInfo() */

void __thiscall NetworkBuyOfferInfo::~NetworkBuyOfferInfo(NetworkBuyOfferInfo *this)

{
  ~NetworkBuyOfferInfo(this + -8);
  return;
}


/* NetworkBuyOfferInfo::~NetworkBuyOfferInfo() */

void __thiscall NetworkBuyOfferInfo::~NetworkBuyOfferInfo(NetworkBuyOfferInfo *this)

{
  ~NetworkBuyOfferInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkBuyOfferInfo::~NetworkBuyOfferInfo() */

void __thiscall NetworkBuyOfferInfo::~NetworkBuyOfferInfo(NetworkBuyOfferInfo *this)

{
  ~NetworkBuyOfferInfo(this + -8);
  return;
}

