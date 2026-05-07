// Class: NetworkDeleteAccountInfo


/* NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo() */

void __thiscall NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo(NetworkDeleteAccountInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06615520;
  *(undefined ***)(this + 8) = &PTR__NetworkDeleteAccountInfo_06615588;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo() */

void __thiscall NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo(NetworkDeleteAccountInfo *this)

{
  ~NetworkDeleteAccountInfo(this + -8);
  return;
}


/* NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo() */

void __thiscall NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo(NetworkDeleteAccountInfo *this)

{
  ~NetworkDeleteAccountInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo() */

void __thiscall NetworkDeleteAccountInfo::~NetworkDeleteAccountInfo(NetworkDeleteAccountInfo *this)

{
  ~NetworkDeleteAccountInfo(this + -8);
  return;
}


/* NetworkDeleteAccountInfo::NetworkDeleteAccountInfo() */

void __thiscall NetworkDeleteAccountInfo::NetworkDeleteAccountInfo(NetworkDeleteAccountInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06615520;
  *(undefined ***)(this + 8) = &PTR__NetworkDeleteAccountInfo_06615588;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkDeleteAccountInfo::StaticNew() */

NetworkDeleteAccountInfo * NetworkDeleteAccountInfo::StaticNew(void)

{
  NetworkDeleteAccountInfo *this;
  
  this = ::operator_new(0x20);
  NetworkDeleteAccountInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkDeleteAccountInfo::StaticClassInit() */

void NetworkDeleteAccountInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkDeleteAccountInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_033b53a4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkDeleteAccountInfo::StaticGetClass() */

long * NetworkDeleteAccountInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDeleteAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDeleteAccountInfo::GetClass() const */

long * NetworkDeleteAccountInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDeleteAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

