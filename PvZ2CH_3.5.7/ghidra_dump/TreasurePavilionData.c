// Class: TreasurePavilionData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TreasurePavilionData::StaticClassInit() */

void TreasurePavilionData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TreasurePavilionRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_034a15c0,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TreasurePavilionData");
    (*pcVar3)(plVar2,asStack_10,FUN_034a4058,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TreasurePavilionData::StaticGetClass() */

long * TreasurePavilionData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TreasurePavilionData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TreasurePavilionData::GetClass() const */

long * TreasurePavilionData::GetClass(void)

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
  (*pcVar3)(plVar1,"TreasurePavilionData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TreasurePavilionData::TreasurePavilionData() */

void __thiscall TreasurePavilionData::TreasurePavilionData(TreasurePavilionData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06645530;
  *(undefined ***)(this + 8) = &PTR__TreasurePavilionData_06645598;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  return;
}


/* TreasurePavilionData::StaticNew() */

TreasurePavilionData * TreasurePavilionData::StaticNew(void)

{
  TreasurePavilionData *this;
  
  this = ::operator_new(0xc0);
  TreasurePavilionData(this);
  return this;
}


/* TreasurePavilionData::~TreasurePavilionData() */

void __thiscall TreasurePavilionData::~TreasurePavilionData(TreasurePavilionData *this)

{
  *(undefined ***)this = &PTR_GetClass_06645530;
  *(undefined ***)(this + 8) = &PTR__TreasurePavilionData_06645598;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x90));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x78));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x60));
  std::vector<TreasurePavilionRewardInfo,std::allocator<TreasurePavilionRewardInfo>>::~vector
            ((vector<TreasurePavilionRewardInfo,std::allocator<TreasurePavilionRewardInfo>> *)
             (this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TreasurePavilionData::~TreasurePavilionData() */

void __thiscall TreasurePavilionData::~TreasurePavilionData(TreasurePavilionData *this)

{
  ~TreasurePavilionData(this + -8);
  return;
}


/* TreasurePavilionData::~TreasurePavilionData() */

void __thiscall TreasurePavilionData::~TreasurePavilionData(TreasurePavilionData *this)

{
  ~TreasurePavilionData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TreasurePavilionData::~TreasurePavilionData() */

void __thiscall TreasurePavilionData::~TreasurePavilionData(TreasurePavilionData *this)

{
  ~TreasurePavilionData(this + -8);
  return;
}

