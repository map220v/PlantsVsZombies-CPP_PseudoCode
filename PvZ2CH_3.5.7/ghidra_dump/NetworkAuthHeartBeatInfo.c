// Class: NetworkAuthHeartBeatInfo


/* NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo() */

void __thiscall NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo(NetworkAuthHeartBeatInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06981f80;
  *(undefined ***)(this + 8) = &PTR__NetworkAuthHeartBeatInfo_06981fe8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo() */

void __thiscall NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo(NetworkAuthHeartBeatInfo *this)

{
  ~NetworkAuthHeartBeatInfo(this + -8);
  return;
}


/* NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo() */

void __thiscall NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo(NetworkAuthHeartBeatInfo *this)

{
  ~NetworkAuthHeartBeatInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo() */

void __thiscall NetworkAuthHeartBeatInfo::~NetworkAuthHeartBeatInfo(NetworkAuthHeartBeatInfo *this)

{
  ~NetworkAuthHeartBeatInfo(this + -8);
  return;
}


/* NetworkAuthHeartBeatInfo::NetworkAuthHeartBeatInfo() */

void __thiscall NetworkAuthHeartBeatInfo::NetworkAuthHeartBeatInfo(NetworkAuthHeartBeatInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06981f80;
  *(undefined ***)(this + 8) = &PTR__NetworkAuthHeartBeatInfo_06981fe8;
  return;
}


/* NetworkAuthHeartBeatInfo::StaticNew() */

NetworkAuthHeartBeatInfo * NetworkAuthHeartBeatInfo::StaticNew(void)

{
  NetworkAuthHeartBeatInfo *this;
  
  this = ::operator_new(0x18);
  NetworkAuthHeartBeatInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkAuthHeartBeatInfo::StaticClassInit() */

void NetworkAuthHeartBeatInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkAuthHeartBeatInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c0dabc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkAuthHeartBeatInfo::StaticGetClass() */

long * NetworkAuthHeartBeatInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkAuthHeartBeatInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkAuthHeartBeatInfo::GetClass() const */

long * NetworkAuthHeartBeatInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkAuthHeartBeatInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

