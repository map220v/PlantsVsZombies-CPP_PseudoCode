// Class: NetworkDangerRoomBuyOfferInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkDangerRoomBuyOfferInfo::StaticClassInit() */

void NetworkDangerRoomBuyOfferInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomBuyOfferInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c320a0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkDangerRoomBuyOfferInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c33b7c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkDangerRoomBuyOfferInfo::StaticGetClass() */

long * NetworkDangerRoomBuyOfferInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomBuyOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDangerRoomBuyOfferInfo::GetClass() const */

long * NetworkDangerRoomBuyOfferInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDangerRoomBuyOfferInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDangerRoomBuyOfferInfo::NetworkDangerRoomBuyOfferInfo() */

void __thiscall
NetworkDangerRoomBuyOfferInfo::NetworkDangerRoomBuyOfferInfo(NetworkDangerRoomBuyOfferInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06984bb0;
  *(undefined ***)(this + 8) = &PTR__NetworkDangerRoomBuyOfferInfo_06984c18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkDangerRoomBuyOfferInfo::StaticNew() */

NetworkDangerRoomBuyOfferInfo * NetworkDangerRoomBuyOfferInfo::StaticNew(void)

{
  NetworkDangerRoomBuyOfferInfo *this;
  
  this = ::operator_new(0x30);
  NetworkDangerRoomBuyOfferInfo(this);
  return this;
}


/* NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo() */

void __thiscall
NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo(NetworkDangerRoomBuyOfferInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06984bb0;
  *(undefined ***)(this + 8) = &PTR__NetworkDangerRoomBuyOfferInfo_06984c18;
  std::vector<DangerRoomBuyOfferInfo,std::allocator<DangerRoomBuyOfferInfo>>::~vector
            ((vector<DangerRoomBuyOfferInfo,std::allocator<DangerRoomBuyOfferInfo>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo() */

void __thiscall
NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo(NetworkDangerRoomBuyOfferInfo *this)

{
  ~NetworkDangerRoomBuyOfferInfo(this + -8);
  return;
}


/* NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo() */

void __thiscall
NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo(NetworkDangerRoomBuyOfferInfo *this)

{
  ~NetworkDangerRoomBuyOfferInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo() */

void __thiscall
NetworkDangerRoomBuyOfferInfo::~NetworkDangerRoomBuyOfferInfo(NetworkDangerRoomBuyOfferInfo *this)

{
  ~NetworkDangerRoomBuyOfferInfo(this + -8);
  return;
}

