// Class: NetworkCompletePostMatch


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCompletePostMatch::StaticClassInit() */

void NetworkCompletePostMatch::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkCompletePostMatch");
    (*pcVar2)(plVar1,asStack_10,FUN_03880024,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCompletePostMatch::StaticGetClass() */

long * NetworkCompletePostMatch::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCompletePostMatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCompletePostMatch::GetClass() const */

long * NetworkCompletePostMatch::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCompletePostMatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCompletePostMatch::NetworkCompletePostMatch() */

void __thiscall NetworkCompletePostMatch::NetworkCompletePostMatch(NetworkCompletePostMatch *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066ae5e0;
  *(undefined ***)(this + 8) = &PTR__NetworkCompletePostMatch_066ae648;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkCompletePostMatch::StaticNew() */

NetworkCompletePostMatch * NetworkCompletePostMatch::StaticNew(void)

{
  NetworkCompletePostMatch *this;
  
  this = ::operator_new(0x38);
  NetworkCompletePostMatch(this);
  return this;
}


/* NetworkCompletePostMatch::~NetworkCompletePostMatch() */

void __thiscall NetworkCompletePostMatch::~NetworkCompletePostMatch(NetworkCompletePostMatch *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae5e0;
  *(undefined ***)(this + 8) = &PTR__NetworkCompletePostMatch_066ae648;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::~vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkCompletePostMatch::~NetworkCompletePostMatch() */

void __thiscall NetworkCompletePostMatch::~NetworkCompletePostMatch(NetworkCompletePostMatch *this)

{
  ~NetworkCompletePostMatch(this + -8);
  return;
}


/* NetworkCompletePostMatch::~NetworkCompletePostMatch() */

void __thiscall NetworkCompletePostMatch::~NetworkCompletePostMatch(NetworkCompletePostMatch *this)

{
  ~NetworkCompletePostMatch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkCompletePostMatch::~NetworkCompletePostMatch() */

void __thiscall NetworkCompletePostMatch::~NetworkCompletePostMatch(NetworkCompletePostMatch *this)

{
  ~NetworkCompletePostMatch(this + -8);
  return;
}

