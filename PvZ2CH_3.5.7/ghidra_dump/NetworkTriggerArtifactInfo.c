// Class: NetworkTriggerArtifactInfo


/* NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo() */

void __thiscall
NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo(NetworkTriggerArtifactInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06696170;
  *(undefined ***)(this + 8) = &PTR__NetworkTriggerArtifactInfo_066961d8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo() */

void __thiscall
NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo(NetworkTriggerArtifactInfo *this)

{
  ~NetworkTriggerArtifactInfo(this + -8);
  return;
}


/* NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo() */

void __thiscall
NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo(NetworkTriggerArtifactInfo *this)

{
  ~NetworkTriggerArtifactInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo() */

void __thiscall
NetworkTriggerArtifactInfo::~NetworkTriggerArtifactInfo(NetworkTriggerArtifactInfo *this)

{
  ~NetworkTriggerArtifactInfo(this + -8);
  return;
}


/* NetworkTriggerArtifactInfo::NetworkTriggerArtifactInfo() */

void __thiscall
NetworkTriggerArtifactInfo::NetworkTriggerArtifactInfo(NetworkTriggerArtifactInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06696170;
  *(undefined ***)(this + 8) = &PTR__NetworkTriggerArtifactInfo_066961d8;
  return;
}


/* NetworkTriggerArtifactInfo::StaticNew() */

NetworkTriggerArtifactInfo * NetworkTriggerArtifactInfo::StaticNew(void)

{
  NetworkTriggerArtifactInfo *this;
  
  this = ::operator_new(0x18);
  NetworkTriggerArtifactInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkTriggerArtifactInfo::StaticClassInit() */

void NetworkTriggerArtifactInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkTriggerArtifactInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0379d600,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkTriggerArtifactInfo::StaticGetClass() */

long * NetworkTriggerArtifactInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTriggerArtifactInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkTriggerArtifactInfo::GetClass() const */

long * NetworkTriggerArtifactInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTriggerArtifactInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

