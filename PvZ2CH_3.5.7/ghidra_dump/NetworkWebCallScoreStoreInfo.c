// Class: NetworkWebCallScoreStoreInfo


/* NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo() */

void __thiscall
NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo(NetworkWebCallScoreStoreInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06981d90;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallScoreStoreInfo_06981df8;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo() */

void __thiscall
NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo(NetworkWebCallScoreStoreInfo *this)

{
  ~NetworkWebCallScoreStoreInfo(this + -8);
  return;
}


/* NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo() */

void __thiscall
NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo(NetworkWebCallScoreStoreInfo *this)

{
  ~NetworkWebCallScoreStoreInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo() */

void __thiscall
NetworkWebCallScoreStoreInfo::~NetworkWebCallScoreStoreInfo(NetworkWebCallScoreStoreInfo *this)

{
  ~NetworkWebCallScoreStoreInfo(this + -8);
  return;
}


/* NetworkWebCallScoreStoreInfo::NetworkWebCallScoreStoreInfo() */

void __thiscall
NetworkWebCallScoreStoreInfo::NetworkWebCallScoreStoreInfo(NetworkWebCallScoreStoreInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06981d90;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallScoreStoreInfo_06981df8;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkWebCallScoreStoreInfo::StaticNew() */

NetworkWebCallScoreStoreInfo * NetworkWebCallScoreStoreInfo::StaticNew(void)

{
  NetworkWebCallScoreStoreInfo *this;
  
  this = ::operator_new(0x20);
  NetworkWebCallScoreStoreInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkWebCallScoreStoreInfo::StaticClassInit() */

void NetworkWebCallScoreStoreInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkWebCallScoreStoreInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c09ad0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkWebCallScoreStoreInfo::StaticGetClass() */

long * NetworkWebCallScoreStoreInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallScoreStoreInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkWebCallScoreStoreInfo::GetClass() const */

long * NetworkWebCallScoreStoreInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallScoreStoreInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

