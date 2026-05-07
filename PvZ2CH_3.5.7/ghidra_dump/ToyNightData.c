// Class: ToyNightData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ToyNightData::StaticClassInit() */

void ToyNightData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ToyNightShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_038c1c14,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ToyNightTaskData");
    (*pcVar3)(plVar2,asStack_10,FUN_038c1a54,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LotteryHistory");
    (*pcVar3)(plVar2,asStack_10,FUN_038c2204,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ToyNightRewardPlayerData");
    (*pcVar3)(plVar2,asStack_10,FUN_038c2040,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ToyNightData");
    (*pcVar3)(plVar2,asStack_10,FUN_038c96d8,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ToyNightData::StaticGetClass() */

long * ToyNightData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ToyNightData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToyNightData::GetClass() const */

long * ToyNightData::GetClass(void)

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
  (*pcVar3)(plVar1,"ToyNightData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ToyNightData::ToyNightData() */

void __thiscall ToyNightData::ToyNightData(ToyNightData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066b72b0;
  *(undefined ***)(this + 8) = &PTR__ToyNightData_066b7318;
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
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  return;
}


/* ToyNightData::StaticNew() */

ToyNightData * ToyNightData::StaticNew(void)

{
  ToyNightData *this;
  
  this = ::operator_new(0x118);
  ToyNightData(this);
  return this;
}


/* ToyNightData::~ToyNightData() */

void __thiscall ToyNightData::~ToyNightData(ToyNightData *this)

{
  *(undefined ***)this = &PTR_GetClass_066b72b0;
  *(undefined ***)(this + 8) = &PTR__ToyNightData_066b7318;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xf0));
  std::vector<ToyNightTaskData,std::allocator<ToyNightTaskData>>::~vector
            ((vector<ToyNightTaskData,std::allocator<ToyNightTaskData>> *)(this + 0xd8));
  std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::~vector
            ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
             (this + 0xc0));
  std::vector<LotteryHistory,std::allocator<LotteryHistory>>::~vector
            ((vector<LotteryHistory,std::allocator<LotteryHistory>> *)(this + 0xa8));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x90));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::vector<ToyNightShopData,std::allocator<ToyNightShopData>>::~vector
            ((vector<ToyNightShopData,std::allocator<ToyNightShopData>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ToyNightData::~ToyNightData() */

void __thiscall ToyNightData::~ToyNightData(ToyNightData *this)

{
  ~ToyNightData(this + -8);
  return;
}


/* ToyNightData::~ToyNightData() */

void __thiscall ToyNightData::~ToyNightData(ToyNightData *this)

{
  ~ToyNightData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ToyNightData::~ToyNightData() */

void __thiscall ToyNightData::~ToyNightData(ToyNightData *this)

{
  ~ToyNightData(this + -8);
  return;
}


/* ToyNightData::ToyNightData(ToyNightData const&) */

void __thiscall ToyNightData::ToyNightData(ToyNightData *this,ToyNightData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ToyNightData TVar3;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_066b72b0;
  *(undefined ***)(this + 8) = &PTR__ToyNightData_066b7318;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<ToyNightShopData,std::allocator<ToyNightShopData>>::vector
            ((vector<ToyNightShopData,std::allocator<ToyNightShopData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::vector<LotteryHistory,std::allocator<LotteryHistory>>::vector
            ((vector<LotteryHistory,std::allocator<LotteryHistory>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::vector
            ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
             (this + 0xc0),(vector *)(param_1 + 0xc0));
  std::vector<ToyNightTaskData,std::allocator<ToyNightTaskData>>::vector
            ((vector<ToyNightTaskData,std::allocator<ToyNightTaskData>> *)(this + 0xd8),
             (vector *)(param_1 + 0xd8));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0xf0),(vector *)(param_1 + 0xf0));
  TVar3 = param_1[0x108];
  uVar1 = *(undefined4 *)(param_1 + 0x10c);
  uVar2 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  this[0x108] = TVar3;
  *(undefined4 *)(this + 0x10c) = uVar1;
  *(undefined4 *)(this + 0x110) = uVar2;
  return;
}


/* ToyNightData::TEMPNAMEPLACEHOLDERVALUE(ToyNightData const&) */

ToyNightData * __thiscall ToyNightData::operator=(ToyNightData *this,ToyNightData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ToyNightData TVar3;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<ToyNightShopData,std::allocator<ToyNightShopData>>::operator=
            ((vector<ToyNightShopData,std::allocator<ToyNightShopData>> *)(this + 0x48),
             (vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::vector<LotteryHistory,std::allocator<LotteryHistory>>::operator=
            ((vector<LotteryHistory,std::allocator<LotteryHistory>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::operator=
            ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
             (this + 0xc0),(vector *)(param_1 + 0xc0));
  std::vector<ToyNightTaskData,std::allocator<ToyNightTaskData>>::operator=
            ((vector<ToyNightTaskData,std::allocator<ToyNightTaskData>> *)(this + 0xd8),
             (vector *)(param_1 + 0xd8));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0xf0),(vector *)(param_1 + 0xf0));
  TVar3 = param_1[0x108];
  uVar1 = *(undefined4 *)(param_1 + 0x10c);
  uVar2 = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  this[0x108] = TVar3;
  *(undefined4 *)(this + 0x10c) = uVar1;
  *(undefined4 *)(this + 0x110) = uVar2;
  return this;
}

