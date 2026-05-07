// Class: NetworkTenYearRecordData


/* NetworkTenYearRecordData::~NetworkTenYearRecordData() */

void __thiscall NetworkTenYearRecordData::~NetworkTenYearRecordData(NetworkTenYearRecordData *this)

{
  *(undefined ***)this = &PTR_GetClass_069eb580;
  *(undefined ***)(this + 8) = &PTR__NetworkTenYearRecordData_069eb5e8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkTenYearRecordData::~NetworkTenYearRecordData() */

void __thiscall NetworkTenYearRecordData::~NetworkTenYearRecordData(NetworkTenYearRecordData *this)

{
  ~NetworkTenYearRecordData(this + -8);
  return;
}


/* NetworkTenYearRecordData::~NetworkTenYearRecordData() */

void __thiscall NetworkTenYearRecordData::~NetworkTenYearRecordData(NetworkTenYearRecordData *this)

{
  ~NetworkTenYearRecordData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkTenYearRecordData::~NetworkTenYearRecordData() */

void __thiscall NetworkTenYearRecordData::~NetworkTenYearRecordData(NetworkTenYearRecordData *this)

{
  ~NetworkTenYearRecordData(this + -8);
  return;
}


/* NetworkTenYearRecordData::NetworkTenYearRecordData() */

void __thiscall NetworkTenYearRecordData::NetworkTenYearRecordData(NetworkTenYearRecordData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069eb580;
  *(undefined ***)(this + 8) = &PTR__NetworkTenYearRecordData_069eb5e8;
  return;
}


/* NetworkTenYearRecordData::StaticNew() */

NetworkTenYearRecordData * NetworkTenYearRecordData::StaticNew(void)

{
  NetworkTenYearRecordData *this;
  
  this = ::operator_new(0x30);
  NetworkTenYearRecordData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkTenYearRecordData::StaticClassInit() */

void NetworkTenYearRecordData::StaticClassInit(void)

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
    std::string::string(asStack_10,"Pvprank");
    (*pcVar3)(plVar2,asStack_10,FUN_04e89968,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TenYearRecordData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e8b9ec,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkTenYearRecordData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e8bb3c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkTenYearRecordData::StaticGetClass() */

long * NetworkTenYearRecordData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTenYearRecordData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkTenYearRecordData::GetClass() const */

long * NetworkTenYearRecordData::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTenYearRecordData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

