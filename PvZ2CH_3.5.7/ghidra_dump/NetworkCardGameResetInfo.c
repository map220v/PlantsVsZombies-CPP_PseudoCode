// Class: NetworkCardGameResetInfo


/* NetworkCardGameResetInfo::NetworkCardGameResetInfo() */

void __thiscall NetworkCardGameResetInfo::NetworkCardGameResetInfo(NetworkCardGameResetInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665b9c0;
  *(undefined ***)(this + 8) = &PTR__NetworkCardGameResetInfo_0665ba28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NetworkCardGameResetInfo::~NetworkCardGameResetInfo() */

void __thiscall NetworkCardGameResetInfo::~NetworkCardGameResetInfo(NetworkCardGameResetInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0665b9c0;
  *(undefined ***)(this + 8) = &PTR__NetworkCardGameResetInfo_0665ba28;
  std::vector<CardGameLevelData,std::allocator<CardGameLevelData>>::~vector
            ((vector<CardGameLevelData,std::allocator<CardGameLevelData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkCardGameResetInfo::~NetworkCardGameResetInfo() */

void __thiscall NetworkCardGameResetInfo::~NetworkCardGameResetInfo(NetworkCardGameResetInfo *this)

{
  ~NetworkCardGameResetInfo(this + -8);
  return;
}


/* NetworkCardGameResetInfo::~NetworkCardGameResetInfo() */

void __thiscall NetworkCardGameResetInfo::~NetworkCardGameResetInfo(NetworkCardGameResetInfo *this)

{
  ~NetworkCardGameResetInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkCardGameResetInfo::~NetworkCardGameResetInfo() */

void __thiscall NetworkCardGameResetInfo::~NetworkCardGameResetInfo(NetworkCardGameResetInfo *this)

{
  ~NetworkCardGameResetInfo(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkCardGameResetInfo::StaticClassInit() */

void NetworkCardGameResetInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkCardGameResetInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0356de6c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkCardGameResetInfo::StaticGetClass() */

long * NetworkCardGameResetInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCardGameResetInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCardGameResetInfo::GetClass() const */

long * NetworkCardGameResetInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkCardGameResetInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkCardGameResetInfo::StaticNew() */

NetworkCardGameResetInfo * NetworkCardGameResetInfo::StaticNew(void)

{
  NetworkCardGameResetInfo *this;
  
  this = ::operator_new(0x30);
  NetworkCardGameResetInfo(this);
  return this;
}

