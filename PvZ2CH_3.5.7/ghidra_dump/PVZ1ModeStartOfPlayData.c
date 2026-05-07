// Class: PVZ1ModeStartOfPlayData


/* PVZ1ModeStartOfPlayData::TEMPNAMEPLACEHOLDERVALUE(PVZ1ModeStartOfPlayData const&) */

PVZ1ModeStartOfPlayData * __thiscall
PVZ1ModeStartOfPlayData::operator=(PVZ1ModeStartOfPlayData *this,PVZ1ModeStartOfPlayData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  return this;
}


/* PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData() */

void __thiscall PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData(PVZ1ModeStartOfPlayData *this)

{
  *(undefined ***)this = &PTR_GetClass_06991aa0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeStartOfPlayData_06991b08;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData() */

void __thiscall PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData(PVZ1ModeStartOfPlayData *this)

{
  ~PVZ1ModeStartOfPlayData(this + -8);
  return;
}


/* PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData() */

void __thiscall PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData(PVZ1ModeStartOfPlayData *this)

{
  ~PVZ1ModeStartOfPlayData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData() */

void __thiscall PVZ1ModeStartOfPlayData::~PVZ1ModeStartOfPlayData(PVZ1ModeStartOfPlayData *this)

{
  ~PVZ1ModeStartOfPlayData(this + -8);
  return;
}


/* PVZ1ModeStartOfPlayData::PVZ1ModeStartOfPlayData() */

void __thiscall PVZ1ModeStartOfPlayData::PVZ1ModeStartOfPlayData(PVZ1ModeStartOfPlayData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06991aa0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeStartOfPlayData_06991b08;
  Set8BytesTo0(this + 0x18);
  return;
}


/* PVZ1ModeStartOfPlayData::StaticNew() */

PVZ1ModeStartOfPlayData * PVZ1ModeStartOfPlayData::StaticNew(void)

{
  PVZ1ModeStartOfPlayData *this;
  
  this = ::operator_new(0x20);
  PVZ1ModeStartOfPlayData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeStartOfPlayData::StaticClassInit() */

void PVZ1ModeStartOfPlayData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeStartOfPlayData");
    (*pcVar2)(plVar1,asStack_10,FUN_04c72e24,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeStartOfPlayData::StaticGetClass() */

long * PVZ1ModeStartOfPlayData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeStartOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeStartOfPlayData::GetClass() const */

long * PVZ1ModeStartOfPlayData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeStartOfPlayData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

