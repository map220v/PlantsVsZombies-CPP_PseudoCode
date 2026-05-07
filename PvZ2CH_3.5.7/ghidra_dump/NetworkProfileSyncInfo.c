// Class: NetworkProfileSyncInfo


/* NetworkProfileSyncInfo::~NetworkProfileSyncInfo() */

void __thiscall NetworkProfileSyncInfo::~NetworkProfileSyncInfo(NetworkProfileSyncInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06982090;
  *(undefined ***)(this + 8) = &PTR__NetworkProfileSyncInfo_069820f8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkProfileSyncInfo::~NetworkProfileSyncInfo() */

void __thiscall NetworkProfileSyncInfo::~NetworkProfileSyncInfo(NetworkProfileSyncInfo *this)

{
  ~NetworkProfileSyncInfo(this + -8);
  return;
}


/* NetworkProfileSyncInfo::~NetworkProfileSyncInfo() */

void __thiscall NetworkProfileSyncInfo::~NetworkProfileSyncInfo(NetworkProfileSyncInfo *this)

{
  ~NetworkProfileSyncInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkProfileSyncInfo::~NetworkProfileSyncInfo() */

void __thiscall NetworkProfileSyncInfo::~NetworkProfileSyncInfo(NetworkProfileSyncInfo *this)

{
  ~NetworkProfileSyncInfo(this + -8);
  return;
}


/* NetworkProfileSyncInfo::NetworkProfileSyncInfo() */

void __thiscall NetworkProfileSyncInfo::NetworkProfileSyncInfo(NetworkProfileSyncInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06982090;
  *(undefined ***)(this + 8) = &PTR__NetworkProfileSyncInfo_069820f8;
  return;
}


/* NetworkProfileSyncInfo::StaticNew() */

NetworkProfileSyncInfo * NetworkProfileSyncInfo::StaticNew(void)

{
  NetworkProfileSyncInfo *this;
  
  this = ::operator_new(0x18);
  NetworkProfileSyncInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkProfileSyncInfo::StaticClassInit() */

void NetworkProfileSyncInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkProfileSyncInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04c1122c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkProfileSyncInfo::StaticGetClass() */

long * NetworkProfileSyncInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkProfileSyncInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkProfileSyncInfo::GetClass() const */

long * NetworkProfileSyncInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkProfileSyncInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

