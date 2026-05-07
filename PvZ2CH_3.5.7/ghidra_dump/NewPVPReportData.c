// Class: NewPVPReportData


/* NewPVPReportData::~NewPVPReportData() */

void __thiscall NewPVPReportData::~NewPVPReportData(NewPVPReportData *this)

{
  *(undefined ***)this = &PTR_GetClass_06647dc0;
  *(undefined ***)(this + 8) = &PTR__NewPVPReportData_06647e28;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPReportData::~NewPVPReportData() */

void __thiscall NewPVPReportData::~NewPVPReportData(NewPVPReportData *this)

{
  ~NewPVPReportData(this + -8);
  return;
}


/* NewPVPReportData::~NewPVPReportData() */

void __thiscall NewPVPReportData::~NewPVPReportData(NewPVPReportData *this)

{
  ~NewPVPReportData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPReportData::~NewPVPReportData() */

void __thiscall NewPVPReportData::~NewPVPReportData(NewPVPReportData *this)

{
  ~NewPVPReportData(this + -8);
  return;
}


/* NewPVPReportData::NewPVPReportData() */

void __thiscall NewPVPReportData::NewPVPReportData(NewPVPReportData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647dc0;
  *(undefined ***)(this + 8) = &PTR__NewPVPReportData_06647e28;
  return;
}


/* NewPVPReportData::StaticNew() */

NewPVPReportData * NewPVPReportData::StaticNew(void)

{
  NewPVPReportData *this;
  
  this = ::operator_new(0x18);
  NewPVPReportData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPReportData::StaticClassInit() */

void NewPVPReportData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPReportData");
    (*pcVar2)(plVar1,asStack_10,FUN_034bb230,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPReportData::StaticGetClass() */

long * NewPVPReportData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPReportData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPReportData::GetClass() const */

long * NewPVPReportData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPReportData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

