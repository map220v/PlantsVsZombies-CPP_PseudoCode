// Class: AutumnHarvestResultData


/* AutumnHarvestResultData::AutumnHarvestResultData() */

void __thiscall AutumnHarvestResultData::AutumnHarvestResultData(AutumnHarvestResultData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f57f0;
  *(undefined ***)(this + 8) = &PTR__AutumnHarvestResultData_069f5858;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* AutumnHarvestResultData::~AutumnHarvestResultData() */

void __thiscall AutumnHarvestResultData::~AutumnHarvestResultData(AutumnHarvestResultData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f57f0;
  *(undefined ***)(this + 8) = &PTR__AutumnHarvestResultData_069f5858;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AutumnHarvestResultData::~AutumnHarvestResultData() */

void __thiscall AutumnHarvestResultData::~AutumnHarvestResultData(AutumnHarvestResultData *this)

{
  ~AutumnHarvestResultData(this + -8);
  return;
}


/* AutumnHarvestResultData::~AutumnHarvestResultData() */

void __thiscall AutumnHarvestResultData::~AutumnHarvestResultData(AutumnHarvestResultData *this)

{
  ~AutumnHarvestResultData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AutumnHarvestResultData::~AutumnHarvestResultData() */

void __thiscall AutumnHarvestResultData::~AutumnHarvestResultData(AutumnHarvestResultData *this)

{
  ~AutumnHarvestResultData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestResultData::StaticClassInit() */

void AutumnHarvestResultData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AutumnHarvestResultData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ec2798,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestResultData::StaticGetClass() */

long * AutumnHarvestResultData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AutumnHarvestResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AutumnHarvestResultData::GetClass() const */

long * AutumnHarvestResultData::GetClass(void)

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
  (*pcVar3)(plVar1,"AutumnHarvestResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AutumnHarvestResultData::StaticNew() */

AutumnHarvestResultData * AutumnHarvestResultData::StaticNew(void)

{
  AutumnHarvestResultData *this;
  
  this = ::operator_new(0x48);
  AutumnHarvestResultData(this);
  return this;
}

