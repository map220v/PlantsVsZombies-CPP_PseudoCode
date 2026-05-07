// Class: LimitedSummonData


/* LimitedSummonData::LimitedSummonData() */

void __thiscall LimitedSummonData::LimitedSummonData(LimitedSummonData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_066e1620;
  *(undefined ***)(this + 8) = &PTR__LimitedSummonData_066e1688;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x78));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* LimitedSummonData::~LimitedSummonData() */

void __thiscall LimitedSummonData::~LimitedSummonData(LimitedSummonData *this)

{
  *(undefined ***)this = &PTR_GetClass_066e1620;
  *(undefined ***)(this + 8) = &PTR__LimitedSummonData_066e1688;
  std::vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>>::~vector
            ((vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>> *)
             (this + 0xf0));
  std::vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>>::~vector
            ((vector<LimitedSummonRankItemData,std::allocator<LimitedSummonRankItemData>> *)
             (this + 0xd8));
  LimitedSummonRankPriviewData::~LimitedSummonRankPriviewData
            ((LimitedSummonRankPriviewData *)(this + 0xa8));
  LimitedSummonRankPriviewData::~LimitedSummonRankPriviewData
            ((LimitedSummonRankPriviewData *)(this + 0x78));
  std::vector<LimitedSummonGrowData,std::allocator<LimitedSummonGrowData>>::~vector
            ((vector<LimitedSummonGrowData,std::allocator<LimitedSummonGrowData>> *)(this + 0x60));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x30));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LimitedSummonData::~LimitedSummonData() */

void __thiscall LimitedSummonData::~LimitedSummonData(LimitedSummonData *this)

{
  ~LimitedSummonData(this + -8);
  return;
}


/* LimitedSummonData::~LimitedSummonData() */

void __thiscall LimitedSummonData::~LimitedSummonData(LimitedSummonData *this)

{
  ~LimitedSummonData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitedSummonData::~LimitedSummonData() */

void __thiscall LimitedSummonData::~LimitedSummonData(LimitedSummonData *this)

{
  ~LimitedSummonData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonData::StaticClassInit() */

void LimitedSummonData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LimitedSummonGrowData");
    (*pcVar3)(plVar2,asStack_10,FUN_0399e734,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitedSummonRankItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_039996cc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitedSummonRankPriviewItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_0399e500,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitedSummonRankPriviewData");
    (*pcVar3)(plVar2,asStack_10,FUN_0399eb84,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LimitedSummonData");
    (*pcVar3)(plVar2,asStack_10,FUN_0399ee28,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonData::StaticGetClass() */

long * LimitedSummonData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LimitedSummonData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitedSummonData::GetClass() const */

long * LimitedSummonData::GetClass(void)

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
  (*pcVar3)(plVar1,"LimitedSummonData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitedSummonData::StaticNew() */

LimitedSummonData * LimitedSummonData::StaticNew(void)

{
  LimitedSummonData *this;
  
  this = ::operator_new(0x118);
  LimitedSummonData(this);
  return this;
}

