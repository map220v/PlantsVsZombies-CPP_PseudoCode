// Class: NetworkChangeSecretGachaInfo


/* NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo() */

void __thiscall
NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo(NetworkChangeSecretGachaInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0677e780;
  *(undefined ***)(this + 8) = &PTR__NetworkChangeSecretGachaInfo_0677e7e8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo() */

void __thiscall
NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo(NetworkChangeSecretGachaInfo *this)

{
  ~NetworkChangeSecretGachaInfo(this + -8);
  return;
}


/* NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo() */

void __thiscall
NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo(NetworkChangeSecretGachaInfo *this)

{
  ~NetworkChangeSecretGachaInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo() */

void __thiscall
NetworkChangeSecretGachaInfo::~NetworkChangeSecretGachaInfo(NetworkChangeSecretGachaInfo *this)

{
  ~NetworkChangeSecretGachaInfo(this + -8);
  return;
}


/* NetworkChangeSecretGachaInfo::NetworkChangeSecretGachaInfo() */

void __thiscall
NetworkChangeSecretGachaInfo::NetworkChangeSecretGachaInfo(NetworkChangeSecretGachaInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0677e780;
  *(undefined ***)(this + 8) = &PTR__NetworkChangeSecretGachaInfo_0677e7e8;
  return;
}


/* NetworkChangeSecretGachaInfo::StaticNew() */

NetworkChangeSecretGachaInfo * NetworkChangeSecretGachaInfo::StaticNew(void)

{
  NetworkChangeSecretGachaInfo *this;
  
  this = ::operator_new(0x18);
  NetworkChangeSecretGachaInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkChangeSecretGachaInfo::StaticClassInit() */

void NetworkChangeSecretGachaInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkChangeSecretGachaInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03de6710,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkChangeSecretGachaInfo::StaticGetClass() */

long * NetworkChangeSecretGachaInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkChangeSecretGachaInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkChangeSecretGachaInfo::GetClass() const */

long * NetworkChangeSecretGachaInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkChangeSecretGachaInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

