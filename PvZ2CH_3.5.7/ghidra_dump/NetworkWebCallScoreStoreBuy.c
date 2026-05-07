// Class: NetworkWebCallScoreStoreBuy


/* NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy() */

void __thiscall
NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy(NetworkWebCallScoreStoreBuy *this)

{
  *(undefined ***)this = &PTR_GetClass_06981e20;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallScoreStoreBuy_06981e88;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy() */

void __thiscall
NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy(NetworkWebCallScoreStoreBuy *this)

{
  ~NetworkWebCallScoreStoreBuy(this + -8);
  return;
}


/* NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy() */

void __thiscall
NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy(NetworkWebCallScoreStoreBuy *this)

{
  ~NetworkWebCallScoreStoreBuy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy() */

void __thiscall
NetworkWebCallScoreStoreBuy::~NetworkWebCallScoreStoreBuy(NetworkWebCallScoreStoreBuy *this)

{
  ~NetworkWebCallScoreStoreBuy(this + -8);
  return;
}


/* NetworkWebCallScoreStoreBuy::NetworkWebCallScoreStoreBuy() */

void __thiscall
NetworkWebCallScoreStoreBuy::NetworkWebCallScoreStoreBuy(NetworkWebCallScoreStoreBuy *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06981e20;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallScoreStoreBuy_06981e88;
  return;
}


/* NetworkWebCallScoreStoreBuy::StaticNew() */

NetworkWebCallScoreStoreBuy * NetworkWebCallScoreStoreBuy::StaticNew(void)

{
  NetworkWebCallScoreStoreBuy *this;
  
  this = ::operator_new(0x20);
  NetworkWebCallScoreStoreBuy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkWebCallScoreStoreBuy::StaticClassInit() */

void NetworkWebCallScoreStoreBuy::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkWebCallScoreStoreBuy");
    (*pcVar2)(plVar1,asStack_10,FUN_04c09dc8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkWebCallScoreStoreBuy::StaticGetClass() */

long * NetworkWebCallScoreStoreBuy::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallScoreStoreBuy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkWebCallScoreStoreBuy::GetClass() const */

long * NetworkWebCallScoreStoreBuy::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallScoreStoreBuy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

