// Class: BattleOrderRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BattleOrderRewardData::StaticClassInit() */

void BattleOrderRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"BattleOrderRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_03a32780,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BattleOrderRewardData::StaticGetClass() */

long * BattleOrderRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderRewardData::GetClass() const */

long * BattleOrderRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"BattleOrderRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BattleOrderRewardData::BattleOrderRewardData() */

void __thiscall BattleOrderRewardData::BattleOrderRewardData(BattleOrderRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06701970;
  *(undefined ***)(this + 8) = &PTR__BattleOrderRewardData_067019d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* BattleOrderRewardData::StaticNew() */

BattleOrderRewardData * BattleOrderRewardData::StaticNew(void)

{
  BattleOrderRewardData *this;
  
  this = ::operator_new(0x30);
  BattleOrderRewardData(this);
  return this;
}


/* BattleOrderRewardData::~BattleOrderRewardData() */

void __thiscall BattleOrderRewardData::~BattleOrderRewardData(BattleOrderRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_06701970;
  *(undefined ***)(this + 8) = &PTR__BattleOrderRewardData_067019d8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to BattleOrderRewardData::~BattleOrderRewardData() */

void __thiscall BattleOrderRewardData::~BattleOrderRewardData(BattleOrderRewardData *this)

{
  ~BattleOrderRewardData(this + -8);
  return;
}


/* BattleOrderRewardData::~BattleOrderRewardData() */

void __thiscall BattleOrderRewardData::~BattleOrderRewardData(BattleOrderRewardData *this)

{
  ~BattleOrderRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BattleOrderRewardData::~BattleOrderRewardData() */

void __thiscall BattleOrderRewardData::~BattleOrderRewardData(BattleOrderRewardData *this)

{
  ~BattleOrderRewardData(this + -8);
  return;
}

