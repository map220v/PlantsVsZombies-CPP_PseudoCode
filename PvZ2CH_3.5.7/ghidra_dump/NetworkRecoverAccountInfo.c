// Class: NetworkRecoverAccountInfo


/* NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo() */

void __thiscall
NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo(NetworkRecoverAccountInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06615490;
  *(undefined ***)(this + 8) = &PTR__NetworkRecoverAccountInfo_066154f8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo() */

void __thiscall
NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo(NetworkRecoverAccountInfo *this)

{
  ~NetworkRecoverAccountInfo(this + -8);
  return;
}


/* NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo() */

void __thiscall
NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo(NetworkRecoverAccountInfo *this)

{
  ~NetworkRecoverAccountInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo() */

void __thiscall
NetworkRecoverAccountInfo::~NetworkRecoverAccountInfo(NetworkRecoverAccountInfo *this)

{
  ~NetworkRecoverAccountInfo(this + -8);
  return;
}


/* NetworkRecoverAccountInfo::NetworkRecoverAccountInfo() */

void __thiscall
NetworkRecoverAccountInfo::NetworkRecoverAccountInfo(NetworkRecoverAccountInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06615490;
  *(undefined ***)(this + 8) = &PTR__NetworkRecoverAccountInfo_066154f8;
  return;
}


/* NetworkRecoverAccountInfo::StaticNew() */

NetworkRecoverAccountInfo * NetworkRecoverAccountInfo::StaticNew(void)

{
  NetworkRecoverAccountInfo *this;
  
  this = ::operator_new(0x18);
  NetworkRecoverAccountInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRecoverAccountInfo::StaticClassInit() */

void NetworkRecoverAccountInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRecoverAccountInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_033b50a8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRecoverAccountInfo::StaticGetClass() */

long * NetworkRecoverAccountInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRecoverAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRecoverAccountInfo::GetClass() const */

long * NetworkRecoverAccountInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRecoverAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

