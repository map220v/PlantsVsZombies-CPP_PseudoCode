// Class: NetworkNewYearGiftBoxData


/* NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData() */

void __thiscall
NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData(NetworkNewYearGiftBoxData *this)

{
  *(undefined ***)this = &PTR_GetClass_067aa030;
  *(undefined ***)(this + 8) = &PTR__NetworkNewYearGiftBoxData_067aa098;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData() */

void __thiscall
NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData(NetworkNewYearGiftBoxData *this)

{
  ~NetworkNewYearGiftBoxData(this + -8);
  return;
}


/* NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData() */

void __thiscall
NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData(NetworkNewYearGiftBoxData *this)

{
  ~NetworkNewYearGiftBoxData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData() */

void __thiscall
NetworkNewYearGiftBoxData::~NetworkNewYearGiftBoxData(NetworkNewYearGiftBoxData *this)

{
  ~NetworkNewYearGiftBoxData(this + -8);
  return;
}


/* NetworkNewYearGiftBoxData::NetworkNewYearGiftBoxData() */

void __thiscall
NetworkNewYearGiftBoxData::NetworkNewYearGiftBoxData(NetworkNewYearGiftBoxData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_067aa030;
  *(undefined ***)(this + 8) = &PTR__NetworkNewYearGiftBoxData_067aa098;
  return;
}


/* NetworkNewYearGiftBoxData::StaticNew() */

NetworkNewYearGiftBoxData * NetworkNewYearGiftBoxData::StaticNew(void)

{
  NetworkNewYearGiftBoxData *this;
  
  this = ::operator_new(0x40);
  NetworkNewYearGiftBoxData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkNewYearGiftBoxData::StaticClassInit() */

void NetworkNewYearGiftBoxData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkNewYearGiftBoxData");
    (*pcVar2)(plVar1,asStack_10,FUN_03fc3840,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkNewYearGiftBoxData::StaticGetClass() */

long * NetworkNewYearGiftBoxData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkNewYearGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkNewYearGiftBoxData::GetClass() const */

long * NetworkNewYearGiftBoxData::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkNewYearGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

