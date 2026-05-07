// Class: NetworkRsbInfo


/* NetworkRsbInfo::~NetworkRsbInfo() */

void __thiscall NetworkRsbInfo::~NetworkRsbInfo(NetworkRsbInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06847960;
  *(undefined ***)(this + 8) = &PTR__NetworkRsbInfo_068479c8;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkRsbInfo::~NetworkRsbInfo() */

void __thiscall NetworkRsbInfo::~NetworkRsbInfo(NetworkRsbInfo *this)

{
  ~NetworkRsbInfo(this + -8);
  return;
}


/* NetworkRsbInfo::~NetworkRsbInfo() */

void __thiscall NetworkRsbInfo::~NetworkRsbInfo(NetworkRsbInfo *this)

{
  ~NetworkRsbInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkRsbInfo::~NetworkRsbInfo() */

void __thiscall NetworkRsbInfo::~NetworkRsbInfo(NetworkRsbInfo *this)

{
  ~NetworkRsbInfo(this + -8);
  return;
}


/* NetworkRsbInfo::NetworkRsbInfo() */

void __thiscall NetworkRsbInfo::NetworkRsbInfo(NetworkRsbInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06847960;
  *(undefined ***)(this + 8) = &PTR__NetworkRsbInfo_068479c8;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkRsbInfo::StaticNew() */

NetworkRsbInfo * NetworkRsbInfo::StaticNew(void)

{
  NetworkRsbInfo *this;
  
  this = ::operator_new(0x20);
  NetworkRsbInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRsbInfo::StaticClassInit() */

void NetworkRsbInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRsbInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0440082c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRsbInfo::StaticGetClass() */

long * NetworkRsbInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRsbInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRsbInfo::GetClass() const */

long * NetworkRsbInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRsbInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

