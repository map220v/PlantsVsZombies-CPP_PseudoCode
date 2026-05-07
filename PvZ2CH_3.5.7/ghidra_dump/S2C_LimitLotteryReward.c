// Class: S2C_LimitLotteryReward


/* S2C_LimitLotteryReward::S2C_LimitLotteryReward() */

void __thiscall S2C_LimitLotteryReward::S2C_LimitLotteryReward(S2C_LimitLotteryReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e290;
  *(undefined ***)(this + 8) = &PTR__S2C_LimitLotteryReward_0660e2f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* S2C_LimitLotteryReward::~S2C_LimitLotteryReward() */

void __thiscall S2C_LimitLotteryReward::~S2C_LimitLotteryReward(S2C_LimitLotteryReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e290;
  *(undefined ***)(this + 8) = &PTR__S2C_LimitLotteryReward_0660e2f8;
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x48));
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x30));
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_LimitLotteryReward::~S2C_LimitLotteryReward() */

void __thiscall S2C_LimitLotteryReward::~S2C_LimitLotteryReward(S2C_LimitLotteryReward *this)

{
  ~S2C_LimitLotteryReward(this + -8);
  return;
}


/* S2C_LimitLotteryReward::~S2C_LimitLotteryReward() */

void __thiscall S2C_LimitLotteryReward::~S2C_LimitLotteryReward(S2C_LimitLotteryReward *this)

{
  ~S2C_LimitLotteryReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_LimitLotteryReward::~S2C_LimitLotteryReward() */

void __thiscall S2C_LimitLotteryReward::~S2C_LimitLotteryReward(S2C_LimitLotteryReward *this)

{
  ~S2C_LimitLotteryReward(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_LimitLotteryReward::StaticClassInit() */

void S2C_LimitLotteryReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"NDLoginRewardBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_03203078,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_LimitLotteryReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03231874,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_LimitLotteryReward::StaticGetClass() */

long * S2C_LimitLotteryReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LimitLotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LimitLotteryReward::GetClass() const */

long * S2C_LimitLotteryReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LimitLotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LimitLotteryReward::StaticNew() */

S2C_LimitLotteryReward * S2C_LimitLotteryReward::StaticNew(void)

{
  S2C_LimitLotteryReward *this;
  
  this = ::operator_new(0x68);
  S2C_LimitLotteryReward(this);
  return this;
}

