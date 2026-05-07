// Class: AutumnHarvestNetworkData


/* AutumnHarvestNetworkData::~AutumnHarvestNetworkData() */

void __thiscall AutumnHarvestNetworkData::~AutumnHarvestNetworkData(AutumnHarvestNetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f5760;
  *(undefined ***)(this + 8) = &PTR__AutumnHarvestNetworkData_069f57c8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x100));
  std::vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>>::~vector
            ((vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>> *)
             (this + 0xd8));
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::~vector
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0xc0));
  std::vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>>::~vector
            ((vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>> *)
             (this + 0xa8));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x90));
  std::vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>>::~vector
            ((vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AutumnHarvestNetworkData::~AutumnHarvestNetworkData() */

void __thiscall AutumnHarvestNetworkData::~AutumnHarvestNetworkData(AutumnHarvestNetworkData *this)

{
  ~AutumnHarvestNetworkData(this + -8);
  return;
}


/* AutumnHarvestNetworkData::~AutumnHarvestNetworkData() */

void __thiscall AutumnHarvestNetworkData::~AutumnHarvestNetworkData(AutumnHarvestNetworkData *this)

{
  ~AutumnHarvestNetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AutumnHarvestNetworkData::~AutumnHarvestNetworkData() */

void __thiscall AutumnHarvestNetworkData::~AutumnHarvestNetworkData(AutumnHarvestNetworkData *this)

{
  ~AutumnHarvestNetworkData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AutumnHarvestNetworkData::StaticClassInit() */

void AutumnHarvestNetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AutumnHarvestRewardPlayerData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ebc590,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AutumnHarvestShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ebbd60,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AutumnHarvestLotteryHistory");
    (*pcVar3)(plVar2,asStack_10,FUN_04ebc3cc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AutumnHarvestLotteryItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ebbf24,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"AutumnHarvestNetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ec2c10,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AutumnHarvestNetworkData::StaticGetClass() */

long * AutumnHarvestNetworkData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AutumnHarvestNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AutumnHarvestNetworkData::GetClass() const */

long * AutumnHarvestNetworkData::GetClass(void)

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
  (*pcVar3)(plVar1,"AutumnHarvestNetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AutumnHarvestNetworkData::AutumnHarvestNetworkData() */

void __thiscall AutumnHarvestNetworkData::AutumnHarvestNetworkData(AutumnHarvestNetworkData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f5760;
  *(undefined ***)(this + 8) = &PTR__AutumnHarvestNetworkData_069f57c8;
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
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0x118] = (AutumnHarvestNetworkData)0x0;
  this[0x119] = (AutumnHarvestNetworkData)0x1;
  return;
}


/* AutumnHarvestNetworkData::StaticNew() */

AutumnHarvestNetworkData * AutumnHarvestNetworkData::StaticNew(void)

{
  AutumnHarvestNetworkData *this;
  
  this = ::operator_new(0x120);
  AutumnHarvestNetworkData(this);
  return this;
}


/* AutumnHarvestNetworkData::TEMPNAMEPLACEHOLDERVALUE(AutumnHarvestNetworkData&&) */

AutumnHarvestNetworkData * __thiscall
AutumnHarvestNetworkData::operator=
          (AutumnHarvestNetworkData *this,AutumnHarvestNetworkData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AutumnHarvestNetworkData AVar3;
  AutumnHarvestNetworkData AVar4;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>>::operator=
            ((vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x90),(vector *)(param_1 + 0x90));
  std::vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>>::operator=
            ((vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>> *)
             (this + 0xa8),(vector *)(param_1 + 0xa8));
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::operator=
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0xc0),(vector *)(param_1 + 0xc0));
  std::vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>>::
  operator=((vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>> *)
            (this + 0xd8),(vector *)(param_1 + 0xd8));
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xf0) = uVar1;
  *(undefined4 *)(this + 0xf4) = uVar2;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x100),(vector *)(param_1 + 0x100));
  AVar3 = param_1[0x118];
  AVar4 = param_1[0x119];
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  this[0x118] = AVar3;
  this[0x119] = AVar4;
  return this;
}


/* AutumnHarvestNetworkData::AutumnHarvestNetworkData(AutumnHarvestNetworkData const&) */

void __thiscall
AutumnHarvestNetworkData::AutumnHarvestNetworkData
          (AutumnHarvestNetworkData *this,AutumnHarvestNetworkData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AutumnHarvestNetworkData AVar3;
  AutumnHarvestNetworkData AVar4;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069f5760;
  *(undefined ***)(this + 8) = &PTR__AutumnHarvestNetworkData_069f57c8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)(this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>>::vector
            ((vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x90),(vector *)(param_1 + 0x90));
  std::vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>>::vector
            ((vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>> *)
             (this + 0xa8),(vector *)(param_1 + 0xa8));
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::vector
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0xc0),(vector *)(param_1 + 0xc0));
  std::vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>>::vector
            ((vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>> *)
             (this + 0xd8),(vector *)(param_1 + 0xd8));
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xf0) = uVar1;
  *(undefined4 *)(this + 0xf4) = uVar2;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x100),(vector *)(param_1 + 0x100));
  AVar3 = param_1[0x118];
  AVar4 = param_1[0x119];
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  this[0x118] = AVar3;
  this[0x119] = AVar4;
  return;
}


/* AutumnHarvestNetworkData::TEMPNAMEPLACEHOLDERVALUE(AutumnHarvestNetworkData const&) */

AutumnHarvestNetworkData * __thiscall
AutumnHarvestNetworkData::operator=
          (AutumnHarvestNetworkData *this,AutumnHarvestNetworkData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AutumnHarvestNetworkData AVar3;
  AutumnHarvestNetworkData AVar4;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>>::operator=
            ((vector<AutumnHarvestShopData,std::allocator<AutumnHarvestShopData>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x90),(vector *)(param_1 + 0x90));
  std::vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>>::operator=
            ((vector<AutumnHarvestLotteryItemData,std::allocator<AutumnHarvestLotteryItemData>> *)
             (this + 0xa8),(vector *)(param_1 + 0xa8));
  std::vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>>::operator=
            ((vector<AutumnHarvestLotteryHistory,std::allocator<AutumnHarvestLotteryHistory>> *)
             (this + 0xc0),(vector *)(param_1 + 0xc0));
  std::vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>>::
  operator=((vector<AutumnHarvestRewardPlayerData,std::allocator<AutumnHarvestRewardPlayerData>> *)
            (this + 0xd8),(vector *)(param_1 + 0xd8));
  uVar1 = *(undefined4 *)(param_1 + 0xf0);
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(this + 0xf0) = uVar1;
  *(undefined4 *)(this + 0xf4) = uVar2;
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x100),(vector *)(param_1 + 0x100));
  AVar3 = param_1[0x118];
  AVar4 = param_1[0x119];
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  this[0x118] = AVar3;
  this[0x119] = AVar4;
  return this;
}

