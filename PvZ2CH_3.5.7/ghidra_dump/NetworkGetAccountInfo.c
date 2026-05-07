// Class: NetworkGetAccountInfo


/* NetworkGetAccountInfo::~NetworkGetAccountInfo() */

void __thiscall NetworkGetAccountInfo::~NetworkGetAccountInfo(NetworkGetAccountInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066155b0;
  *(undefined ***)(this + 8) = &PTR__NetworkGetAccountInfo_06615618;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkGetAccountInfo::~NetworkGetAccountInfo() */

void __thiscall NetworkGetAccountInfo::~NetworkGetAccountInfo(NetworkGetAccountInfo *this)

{
  ~NetworkGetAccountInfo(this + -8);
  return;
}


/* NetworkGetAccountInfo::~NetworkGetAccountInfo() */

void __thiscall NetworkGetAccountInfo::~NetworkGetAccountInfo(NetworkGetAccountInfo *this)

{
  ~NetworkGetAccountInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkGetAccountInfo::~NetworkGetAccountInfo() */

void __thiscall NetworkGetAccountInfo::~NetworkGetAccountInfo(NetworkGetAccountInfo *this)

{
  ~NetworkGetAccountInfo(this + -8);
  return;
}


/* NetworkGetAccountInfo::NetworkGetAccountInfo() */

void __thiscall NetworkGetAccountInfo::NetworkGetAccountInfo(NetworkGetAccountInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066155b0;
  *(undefined ***)(this + 8) = &PTR__NetworkGetAccountInfo_06615618;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkGetAccountInfo::StaticNew() */

NetworkGetAccountInfo * NetworkGetAccountInfo::StaticNew(void)

{
  NetworkGetAccountInfo *this;
  
  this = ::operator_new(0x20);
  NetworkGetAccountInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkGetAccountInfo::StaticClassInit() */

void NetworkGetAccountInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkGetAccountInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_033b5710,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkGetAccountInfo::StaticGetClass() */

long * NetworkGetAccountInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkGetAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkGetAccountInfo::GetClass() const */

long * NetworkGetAccountInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkGetAccountInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

