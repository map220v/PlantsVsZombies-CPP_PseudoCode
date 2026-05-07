// Class: DaveTreasureData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTreasureData::StaticClassInit() */

void DaveTreasureData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTreasureIntegralReward");
    (*pcVar3)(plVar2,asStack_10,FUN_039f02c4,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DaveTreasureData");
    (*pcVar3)(plVar2,asStack_10,FUN_039f4970,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTreasureData::StaticGetClass() */

long * DaveTreasureData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTreasureData::GetClass() const */

long * DaveTreasureData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTreasureData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTreasureData::DaveTreasureData() */

void __thiscall DaveTreasureData::DaveTreasureData(DaveTreasureData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066f8e80;
  *(undefined ***)(this + 8) = &PTR__DaveTreasureData_066f8ee8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  return;
}


/* DaveTreasureData::StaticNew() */

DaveTreasureData * DaveTreasureData::StaticNew(void)

{
  DaveTreasureData *this;
  
  this = ::operator_new(0xb8);
  DaveTreasureData(this);
  return this;
}


/* DaveTreasureData::~DaveTreasureData() */

void __thiscall DaveTreasureData::~DaveTreasureData(DaveTreasureData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f8e80;
  *(undefined ***)(this + 8) = &PTR__DaveTreasureData_066f8ee8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x98));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<DaveTreasureIntegralReward,std::allocator<DaveTreasureIntegralReward>>::~vector
            ((vector<DaveTreasureIntegralReward,std::allocator<DaveTreasureIntegralReward>> *)
             (this + 0x38));
  std::vector<DaveTreasureIntegralReward,std::allocator<DaveTreasureIntegralReward>>::~vector
            ((vector<DaveTreasureIntegralReward,std::allocator<DaveTreasureIntegralReward>> *)
             (this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to DaveTreasureData::~DaveTreasureData() */

void __thiscall DaveTreasureData::~DaveTreasureData(DaveTreasureData *this)

{
  ~DaveTreasureData(this + -8);
  return;
}


/* DaveTreasureData::~DaveTreasureData() */

void __thiscall DaveTreasureData::~DaveTreasureData(DaveTreasureData *this)

{
  ~DaveTreasureData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DaveTreasureData::~DaveTreasureData() */

void __thiscall DaveTreasureData::~DaveTreasureData(DaveTreasureData *this)

{
  ~DaveTreasureData(this + -8);
  return;
}

