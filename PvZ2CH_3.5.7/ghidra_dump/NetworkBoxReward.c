// Class: NetworkBoxReward


/* NetworkBoxReward::~NetworkBoxReward() */

void __thiscall NetworkBoxReward::~NetworkBoxReward(NetworkBoxReward *this)

{
  *(undefined ***)this = &PTR_GetClass_066bd4a0;
  *(undefined ***)(this + 8) = &PTR__NetworkBoxReward_066bd508;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkBoxReward::~NetworkBoxReward() */

void __thiscall NetworkBoxReward::~NetworkBoxReward(NetworkBoxReward *this)

{
  ~NetworkBoxReward(this + -8);
  return;
}


/* NetworkBoxReward::~NetworkBoxReward() */

void __thiscall NetworkBoxReward::~NetworkBoxReward(NetworkBoxReward *this)

{
  ~NetworkBoxReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkBoxReward::~NetworkBoxReward() */

void __thiscall NetworkBoxReward::~NetworkBoxReward(NetworkBoxReward *this)

{
  ~NetworkBoxReward(this + -8);
  return;
}


/* NetworkBoxReward::NetworkBoxReward() */

void __thiscall NetworkBoxReward::NetworkBoxReward(NetworkBoxReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066bd4a0;
  *(undefined ***)(this + 8) = &PTR__NetworkBoxReward_066bd508;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x14));
  return;
}


/* NetworkBoxReward::StaticNew() */

NetworkBoxReward * NetworkBoxReward::StaticNew(void)

{
  NetworkBoxReward *this;
  
  this = ::operator_new(0x20);
  NetworkBoxReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkBoxReward::StaticClassInit() */

void NetworkBoxReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkBoxReward");
    (*pcVar2)(plVar1,asStack_10,FUN_038e6a94,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkBoxReward::StaticGetClass() */

long * NetworkBoxReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBoxReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkBoxReward::GetClass() const */

long * NetworkBoxReward::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkBoxReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

