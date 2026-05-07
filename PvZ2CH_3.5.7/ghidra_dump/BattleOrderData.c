// Class: BattleOrderData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderData::StaticClassInit() */

void BattleOrderData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BattleOrderAward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a324d8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BattleOrderRankData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a2c024,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BattleOrderBundle");
    (*pcVar3)(plVar2,asStack_10,FUN_03a2bd1c,4,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BattleOrderData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a34408,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderData::StaticGetClass() */

long * BattleOrderData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderData::GetClass() const */

long * BattleOrderData::GetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderData::BattleOrderData() */

void __thiscall BattleOrderData::BattleOrderData(BattleOrderData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_067018e0;
  *(undefined ***)(this + 8) = &PTR__BattleOrderData_06701948;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  *(undefined4 *)(this + 0xa0) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  BattleOrderRankData::BattleOrderRankData((BattleOrderRankData *)(this + 0xe8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  BattleOrderRankData::BattleOrderRankData((BattleOrderRankData *)(this + 0x128));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  Set8BytesTo0(this + 0x160);
  *(undefined4 *)(this + 0x168) = 1000;
  return;
}


/* BattleOrderData::StaticNew() */

BattleOrderData * BattleOrderData::StaticNew(void)

{
  BattleOrderData *this;
  
  this = ::operator_new(0x170);
  BattleOrderData(this);
  return this;
}


/* BattleOrderData::~BattleOrderData() */

void __thiscall BattleOrderData::~BattleOrderData(BattleOrderData *this)

{
  *(undefined ***)this = &PTR_GetClass_067018e0;
  *(undefined ***)(this + 8) = &PTR__BattleOrderData_06701948;
  std::string::~string((string *)(this + 0x160));
  std::
  vector<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>,std::allocator<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>>>
  ::~vector((vector<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>,std::allocator<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>>>
             *)(this + 0x148));
  PakRecord::~PakRecord((PakRecord *)(this + 0x128));
  std::
  vector<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>,std::allocator<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>>>
  ::~vector((vector<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>,std::allocator<std::vector<BattleOrderRankData,std::allocator<BattleOrderRankData>>>>
             *)(this + 0x108));
  PakRecord::~PakRecord((PakRecord *)(this + 0xe8));
  std::
  vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
  ::~vector((vector<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>,std::allocator<std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>>>
             *)(this + 0xc0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xa8));
  std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::~vector
            ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::
  vector<std::vector<BattleOrderBundle,std::allocator<BattleOrderBundle>>,std::allocator<std::vector<BattleOrderBundle,std::allocator<BattleOrderBundle>>>>
  ::~vector((vector<std::vector<BattleOrderBundle,std::allocator<BattleOrderBundle>>,std::allocator<std::vector<BattleOrderBundle,std::allocator<BattleOrderBundle>>>>
             *)(this + 0x58));
  std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::~vector
            ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x40));
  std::vector<BattleOrderAward,std::allocator<BattleOrderAward>>::~vector
            ((vector<BattleOrderAward,std::allocator<BattleOrderAward>> *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to BattleOrderData::~BattleOrderData() */

void __thiscall BattleOrderData::~BattleOrderData(BattleOrderData *this)

{
  ~BattleOrderData(this + -8);
  return;
}


/* BattleOrderData::~BattleOrderData() */

void __thiscall BattleOrderData::~BattleOrderData(BattleOrderData *this)

{
  ~BattleOrderData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BattleOrderData::~BattleOrderData() */

void __thiscall BattleOrderData::~BattleOrderData(BattleOrderData *this)

{
  ~BattleOrderData(this + -8);
  return;
}

