// Class: NetworkConsumeAndReceive


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkConsumeAndReceive::StaticClassInit() */

void NetworkConsumeAndReceive::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConsumeAndReceiveReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1b6c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkConsumeAndReceive");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad1868,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkConsumeAndReceive::StaticGetClass() */

long * NetworkConsumeAndReceive::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkConsumeAndReceive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkConsumeAndReceive::GetClass() const */

long * NetworkConsumeAndReceive::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkConsumeAndReceive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkConsumeAndReceive::NetworkConsumeAndReceive() */

void __thiscall NetworkConsumeAndReceive::NetworkConsumeAndReceive(NetworkConsumeAndReceive *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06721da0;
  *(undefined ***)(this + 8) = &PTR__NetworkConsumeAndReceive_06721e08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkConsumeAndReceive::StaticNew() */

NetworkConsumeAndReceive * NetworkConsumeAndReceive::StaticNew(void)

{
  NetworkConsumeAndReceive *this;
  
  this = ::operator_new(0x38);
  NetworkConsumeAndReceive(this);
  return this;
}


/* NetworkConsumeAndReceive::~NetworkConsumeAndReceive() */

void __thiscall NetworkConsumeAndReceive::~NetworkConsumeAndReceive(NetworkConsumeAndReceive *this)

{
  *(undefined ***)this = &PTR_GetClass_06721da0;
  *(undefined ***)(this + 8) = &PTR__NetworkConsumeAndReceive_06721e08;
  std::vector<ConsumeAndReceiveReward,std::allocator<ConsumeAndReceiveReward>>::~vector
            ((vector<ConsumeAndReceiveReward,std::allocator<ConsumeAndReceiveReward>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkConsumeAndReceive::~NetworkConsumeAndReceive() */

void __thiscall NetworkConsumeAndReceive::~NetworkConsumeAndReceive(NetworkConsumeAndReceive *this)

{
  ~NetworkConsumeAndReceive(this + -8);
  return;
}


/* NetworkConsumeAndReceive::~NetworkConsumeAndReceive() */

void __thiscall NetworkConsumeAndReceive::~NetworkConsumeAndReceive(NetworkConsumeAndReceive *this)

{
  ~NetworkConsumeAndReceive(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkConsumeAndReceive::~NetworkConsumeAndReceive() */

void __thiscall NetworkConsumeAndReceive::~NetworkConsumeAndReceive(NetworkConsumeAndReceive *this)

{
  ~NetworkConsumeAndReceive(this + -8);
  return;
}

