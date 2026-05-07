// Class: NetworkPlay


/* NetworkPlay::~NetworkPlay() */

void __thiscall NetworkPlay::~NetworkPlay(NetworkPlay *this)

{
  *(undefined ***)this = &PTR_GetClass_066865b0;
  *(undefined ***)(this + 8) = &PTR__NetworkPlay_06686618;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkPlay::~NetworkPlay() */

void __thiscall NetworkPlay::~NetworkPlay(NetworkPlay *this)

{
  ~NetworkPlay(this + -8);
  return;
}


/* NetworkPlay::~NetworkPlay() */

void __thiscall NetworkPlay::~NetworkPlay(NetworkPlay *this)

{
  ~NetworkPlay(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkPlay::~NetworkPlay() */

void __thiscall NetworkPlay::~NetworkPlay(NetworkPlay *this)

{
  ~NetworkPlay(this + -8);
  return;
}


/* NetworkPlay::NetworkPlay() */

void __thiscall NetworkPlay::NetworkPlay(NetworkPlay *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066865b0;
  *(undefined ***)(this + 8) = &PTR__NetworkPlay_06686618;
  Set8BytesTo0(this + 0x18);
  return;
}


/* NetworkPlay::StaticNew() */

NetworkPlay * NetworkPlay::StaticNew(void)

{
  NetworkPlay *this;
  
  this = ::operator_new(0x20);
  NetworkPlay(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkPlay::StaticClassInit() */

void NetworkPlay::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkPlay");
    (*pcVar2)(plVar1,asStack_10,FUN_036ed874,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkPlay::StaticGetClass() */

long * NetworkPlay::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPlay::GetClass() const */

long * NetworkPlay::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPlay",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

