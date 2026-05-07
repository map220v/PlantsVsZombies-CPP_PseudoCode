// Class: NetworkWebCallAddPlayCount


/* NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount() */

void __thiscall
NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount(NetworkWebCallAddPlayCount *this)

{
  *(undefined ***)this = &PTR_GetClass_06981eb0;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallAddPlayCount_06981f18;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount() */

void __thiscall
NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount(NetworkWebCallAddPlayCount *this)

{
  ~NetworkWebCallAddPlayCount(this + -8);
  return;
}


/* NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount() */

void __thiscall
NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount(NetworkWebCallAddPlayCount *this)

{
  ~NetworkWebCallAddPlayCount(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount() */

void __thiscall
NetworkWebCallAddPlayCount::~NetworkWebCallAddPlayCount(NetworkWebCallAddPlayCount *this)

{
  ~NetworkWebCallAddPlayCount(this + -8);
  return;
}


/* NetworkWebCallAddPlayCount::NetworkWebCallAddPlayCount() */

void __thiscall
NetworkWebCallAddPlayCount::NetworkWebCallAddPlayCount(NetworkWebCallAddPlayCount *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06981eb0;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallAddPlayCount_06981f18;
  return;
}


/* NetworkWebCallAddPlayCount::StaticNew() */

NetworkWebCallAddPlayCount * NetworkWebCallAddPlayCount::StaticNew(void)

{
  NetworkWebCallAddPlayCount *this;
  
  this = ::operator_new(0x18);
  NetworkWebCallAddPlayCount(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkWebCallAddPlayCount::StaticClassInit() */

void NetworkWebCallAddPlayCount::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkWebCallAddPlayCount");
    (*pcVar2)(plVar1,asStack_10,FUN_04c0a1a4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkWebCallAddPlayCount::StaticGetClass() */

long * NetworkWebCallAddPlayCount::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallAddPlayCount",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkWebCallAddPlayCount::GetClass() const */

long * NetworkWebCallAddPlayCount::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallAddPlayCount",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

