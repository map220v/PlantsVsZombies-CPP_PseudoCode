// Class: NetworkBuyRedPackInfo


/* NetworkBuyRedPackInfo::NetworkBuyRedPackInfo() */

void __thiscall NetworkBuyRedPackInfo::NetworkBuyRedPackInfo(NetworkBuyRedPackInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_068004c0;
  *(undefined ***)(this + 8) = &PTR__NetworkBuyRedPackInfo_06800528;
  return;
}


/* NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo() */

void __thiscall NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo(NetworkBuyRedPackInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_068004c0;
  *(undefined ***)(this + 8) = &PTR__NetworkBuyRedPackInfo_06800528;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo() */

void __thiscall NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo(NetworkBuyRedPackInfo *this)

{
  ~NetworkBuyRedPackInfo(this + -8);
  return;
}


/* NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo() */

void __thiscall NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo(NetworkBuyRedPackInfo *this)

{
  ~NetworkBuyRedPackInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo() */

void __thiscall NetworkBuyRedPackInfo::~NetworkBuyRedPackInfo(NetworkBuyRedPackInfo *this)

{
  ~NetworkBuyRedPackInfo(this + -8);
  return;
}


/* NetworkBuyRedPackInfo::StaticNew() */

NetworkBuyRedPackInfo * NetworkBuyRedPackInfo::StaticNew(void)

{
  NetworkBuyRedPackInfo *this;
  
  this = ::operator_new(0x18);
  NetworkBuyRedPackInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkBuyRedPackInfo::StaticClassInit() */

void NetworkBuyRedPackInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkBuyRedPackInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_041bd4b8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkBuyRedPackInfo::StaticGetClass() */

long * NetworkBuyRedPackInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBuyRedPackInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkBuyRedPackInfo::GetClass() const */

long * NetworkBuyRedPackInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBuyRedPackInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

