// Class: TrialSynchronizeData


/* TrialSynchronizeData::TrialSynchronizeData() */

void __thiscall TrialSynchronizeData::TrialSynchronizeData(TrialSynchronizeData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0663fd00;
  *(undefined ***)(this + 8) = &PTR__TrialSynchronizeData_0663fd68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* TrialSynchronizeData::~TrialSynchronizeData() */

void __thiscall TrialSynchronizeData::~TrialSynchronizeData(TrialSynchronizeData *this)

{
  *(undefined ***)this = &PTR_GetClass_0663fd00;
  *(undefined ***)(this + 8) = &PTR__TrialSynchronizeData_0663fd68;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x60));
  std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::~vector
            ((vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *)(this + 0x48));
  std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::~vector
            ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)(this + 0x30));
  std::vector<TrialCardConfig,std::allocator<TrialCardConfig>>::~vector
            ((vector<TrialCardConfig,std::allocator<TrialCardConfig>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TrialSynchronizeData::~TrialSynchronizeData() */

void __thiscall TrialSynchronizeData::~TrialSynchronizeData(TrialSynchronizeData *this)

{
  ~TrialSynchronizeData(this + -8);
  return;
}


/* TrialSynchronizeData::~TrialSynchronizeData() */

void __thiscall TrialSynchronizeData::~TrialSynchronizeData(TrialSynchronizeData *this)

{
  ~TrialSynchronizeData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TrialSynchronizeData::~TrialSynchronizeData() */

void __thiscall TrialSynchronizeData::~TrialSynchronizeData(TrialSynchronizeData *this)

{
  ~TrialSynchronizeData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrialSynchronizeData::StaticClassInit() */

void TrialSynchronizeData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TrialCardConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03486d48,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlayerTrialCardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034858ac,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlayerTrialStatusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03485a04,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TrialSynchronizeData");
    (*pcVar3)(plVar2,asStack_10,FUN_0348724c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TrialSynchronizeData::StaticGetClass() */

long * TrialSynchronizeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TrialSynchronizeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TrialSynchronizeData::GetClass() const */

long * TrialSynchronizeData::GetClass(void)

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
  (*pcVar3)(plVar1,"TrialSynchronizeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TrialSynchronizeData::StaticNew() */

TrialSynchronizeData * TrialSynchronizeData::StaticNew(void)

{
  TrialSynchronizeData *this;
  
  this = ::operator_new(0x78);
  TrialSynchronizeData(this);
  return this;
}


/* TrialSynchronizeData::Clear() */

void __thiscall TrialSynchronizeData::Clear(TrialSynchronizeData *this)

{
  std::vector<TrialCardConfig,std::allocator<TrialCardConfig>>::clear
            ((vector<TrialCardConfig,std::allocator<TrialCardConfig>> *)(this + 0x18));
  std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::clear
            ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)(this + 0x30));
  std::vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>>::clear
            ((vector<PlayerTrialStatusInfo,std::allocator<PlayerTrialStatusInfo>> *)(this + 0x48));
  return;
}

