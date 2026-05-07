// Class: NetworkTutorialRewards


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkTutorialRewards::StaticClassInit() */

void NetworkTutorialRewards::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkTutorialRewards");
    (*pcVar2)(plVar1,asStack_10,FUN_044bbef0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkTutorialRewards::StaticGetClass() */

long * NetworkTutorialRewards::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTutorialRewards",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkTutorialRewards::GetClass() const */

long * NetworkTutorialRewards::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTutorialRewards",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkTutorialRewards::NetworkTutorialRewards() */

void __thiscall NetworkTutorialRewards::NetworkTutorialRewards(NetworkTutorialRewards *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06853cb0;
  *(undefined ***)(this + 8) = &PTR__NetworkTutorialRewards_06853d18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkTutorialRewards::StaticNew() */

NetworkTutorialRewards * NetworkTutorialRewards::StaticNew(void)

{
  NetworkTutorialRewards *this;
  
  this = ::operator_new(0x30);
  NetworkTutorialRewards(this);
  return this;
}


/* NetworkTutorialRewards::~NetworkTutorialRewards() */

void __thiscall NetworkTutorialRewards::~NetworkTutorialRewards(NetworkTutorialRewards *this)

{
  *(undefined ***)this = &PTR_GetClass_06853cb0;
  *(undefined ***)(this + 8) = &PTR__NetworkTutorialRewards_06853d18;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkTutorialRewards::~NetworkTutorialRewards() */

void __thiscall NetworkTutorialRewards::~NetworkTutorialRewards(NetworkTutorialRewards *this)

{
  ~NetworkTutorialRewards(this + -8);
  return;
}


/* NetworkTutorialRewards::~NetworkTutorialRewards() */

void __thiscall NetworkTutorialRewards::~NetworkTutorialRewards(NetworkTutorialRewards *this)

{
  ~NetworkTutorialRewards(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkTutorialRewards::~NetworkTutorialRewards() */

void __thiscall NetworkTutorialRewards::~NetworkTutorialRewards(NetworkTutorialRewards *this)

{
  ~NetworkTutorialRewards(this + -8);
  return;
}

