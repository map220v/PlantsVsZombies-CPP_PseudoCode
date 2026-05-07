// Class: NetworkRedPacketReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRedPacketReward::StaticClassInit() */

void NetworkRedPacketReward::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RedPacketData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1a18,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkRedPacketReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad1518,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRedPacketReward::StaticGetClass() */

long * NetworkRedPacketReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPacketReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPacketReward::GetClass() const */

long * NetworkRedPacketReward::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRedPacketReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRedPacketReward::NetworkRedPacketReward() */

void __thiscall NetworkRedPacketReward::NetworkRedPacketReward(NetworkRedPacketReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0671ead0;
  *(undefined ***)(this + 8) = &PTR__NetworkRedPacketReward_0671eb38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkRedPacketReward::StaticNew() */

NetworkRedPacketReward * NetworkRedPacketReward::StaticNew(void)

{
  NetworkRedPacketReward *this;
  
  this = ::operator_new(0x30);
  NetworkRedPacketReward(this);
  return this;
}


/* NetworkRedPacketReward::~NetworkRedPacketReward() */

void __thiscall NetworkRedPacketReward::~NetworkRedPacketReward(NetworkRedPacketReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0671ead0;
  *(undefined ***)(this + 8) = &PTR__NetworkRedPacketReward_0671eb38;
  std::vector<RedPacketData,std::allocator<RedPacketData>>::~vector
            ((vector<RedPacketData,std::allocator<RedPacketData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkRedPacketReward::~NetworkRedPacketReward() */

void __thiscall NetworkRedPacketReward::~NetworkRedPacketReward(NetworkRedPacketReward *this)

{
  ~NetworkRedPacketReward(this + -8);
  return;
}


/* NetworkRedPacketReward::~NetworkRedPacketReward() */

void __thiscall NetworkRedPacketReward::~NetworkRedPacketReward(NetworkRedPacketReward *this)

{
  ~NetworkRedPacketReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkRedPacketReward::~NetworkRedPacketReward() */

void __thiscall NetworkRedPacketReward::~NetworkRedPacketReward(NetworkRedPacketReward *this)

{
  ~NetworkRedPacketReward(this + -8);
  return;
}

