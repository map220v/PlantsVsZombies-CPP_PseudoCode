// Class: NetworkADRefreshInfo


/* NetworkADRefreshInfo::~NetworkADRefreshInfo() */

void __thiscall NetworkADRefreshInfo::~NetworkADRefreshInfo(NetworkADRefreshInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0693ecc0;
  *(undefined ***)(this + 8) = &PTR__NetworkADRefreshInfo_0693ed28;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkADRefreshInfo::~NetworkADRefreshInfo() */

void __thiscall NetworkADRefreshInfo::~NetworkADRefreshInfo(NetworkADRefreshInfo *this)

{
  ~NetworkADRefreshInfo(this + -8);
  return;
}


/* NetworkADRefreshInfo::~NetworkADRefreshInfo() */

void __thiscall NetworkADRefreshInfo::~NetworkADRefreshInfo(NetworkADRefreshInfo *this)

{
  ~NetworkADRefreshInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkADRefreshInfo::~NetworkADRefreshInfo() */

void __thiscall NetworkADRefreshInfo::~NetworkADRefreshInfo(NetworkADRefreshInfo *this)

{
  ~NetworkADRefreshInfo(this + -8);
  return;
}


/* NetworkADRefreshInfo::NetworkADRefreshInfo() */

void __thiscall NetworkADRefreshInfo::NetworkADRefreshInfo(NetworkADRefreshInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0693ecc0;
  *(undefined ***)(this + 8) = &PTR__NetworkADRefreshInfo_0693ed28;
  return;
}


/* NetworkADRefreshInfo::StaticNew() */

NetworkADRefreshInfo * NetworkADRefreshInfo::StaticNew(void)

{
  NetworkADRefreshInfo *this;
  
  this = ::operator_new(0x18);
  NetworkADRefreshInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkADRefreshInfo::StaticClassInit() */

void NetworkADRefreshInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkADRefreshInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_04a812b4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkADRefreshInfo::StaticGetClass() */

long * NetworkADRefreshInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkADRefreshInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkADRefreshInfo::GetClass() const */

long * NetworkADRefreshInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkADRefreshInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

