// Class: NetworkRankAvatarData


/* NetworkRankAvatarData::~NetworkRankAvatarData() */

void __thiscall NetworkRankAvatarData::~NetworkRankAvatarData(NetworkRankAvatarData *this)

{
  *(undefined ***)this = &PTR_GetClass_066149c0;
  *(undefined ***)(this + 8) = &PTR__NetworkRankAvatarData_06614a28;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkRankAvatarData::~NetworkRankAvatarData() */

void __thiscall NetworkRankAvatarData::~NetworkRankAvatarData(NetworkRankAvatarData *this)

{
  ~NetworkRankAvatarData(this + -8);
  return;
}


/* NetworkRankAvatarData::~NetworkRankAvatarData() */

void __thiscall NetworkRankAvatarData::~NetworkRankAvatarData(NetworkRankAvatarData *this)

{
  ~NetworkRankAvatarData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkRankAvatarData::~NetworkRankAvatarData() */

void __thiscall NetworkRankAvatarData::~NetworkRankAvatarData(NetworkRankAvatarData *this)

{
  ~NetworkRankAvatarData(this + -8);
  return;
}


/* NetworkRankAvatarData::NetworkRankAvatarData() */

void __thiscall NetworkRankAvatarData::NetworkRankAvatarData(NetworkRankAvatarData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066149c0;
  *(undefined ***)(this + 8) = &PTR__NetworkRankAvatarData_06614a28;
  return;
}


/* NetworkRankAvatarData::StaticNew() */

NetworkRankAvatarData * NetworkRankAvatarData::StaticNew(void)

{
  NetworkRankAvatarData *this;
  
  this = ::operator_new(0x18);
  NetworkRankAvatarData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkRankAvatarData::StaticClassInit() */

void NetworkRankAvatarData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkRankAvatarData");
    (*pcVar2)(plVar1,asStack_10,FUN_033aaa40,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkRankAvatarData::StaticGetClass() */

long * NetworkRankAvatarData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRankAvatarData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkRankAvatarData::GetClass() const */

long * NetworkRankAvatarData::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkRankAvatarData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

