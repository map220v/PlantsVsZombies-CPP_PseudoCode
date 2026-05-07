// Class: New_S2C_LotteryReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_LotteryReward::StaticClassInit() */

void New_S2C_LotteryReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_Lottery");
    (*pcVar3)(plVar2,asStack_10,FUN_03ac1544,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"New_S2C_LotteryReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03ad0898,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_LotteryReward::StaticGetClass() */

long * New_S2C_LotteryReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_LotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_LotteryReward::GetClass() const */

long * New_S2C_LotteryReward::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_LotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_LotteryReward::New_S2C_LotteryReward() */

void __thiscall New_S2C_LotteryReward::New_S2C_LotteryReward(New_S2C_LotteryReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0671d2e0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_LotteryReward_0671d348;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_LotteryReward::StaticNew() */

New_S2C_LotteryReward * New_S2C_LotteryReward::StaticNew(void)

{
  New_S2C_LotteryReward *this;
  
  this = ::operator_new(0x30);
  New_S2C_LotteryReward(this);
  return this;
}


/* New_S2C_LotteryReward::~New_S2C_LotteryReward() */

void __thiscall New_S2C_LotteryReward::~New_S2C_LotteryReward(New_S2C_LotteryReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0671d2e0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_LotteryReward_0671d348;
  std::vector<New_S2C_Lottery,std::allocator<New_S2C_Lottery>>::~vector
            ((vector<New_S2C_Lottery,std::allocator<New_S2C_Lottery>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_LotteryReward::~New_S2C_LotteryReward() */

void __thiscall New_S2C_LotteryReward::~New_S2C_LotteryReward(New_S2C_LotteryReward *this)

{
  ~New_S2C_LotteryReward(this + -8);
  return;
}


/* New_S2C_LotteryReward::~New_S2C_LotteryReward() */

void __thiscall New_S2C_LotteryReward::~New_S2C_LotteryReward(New_S2C_LotteryReward *this)

{
  ~New_S2C_LotteryReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_LotteryReward::~New_S2C_LotteryReward() */

void __thiscall New_S2C_LotteryReward::~New_S2C_LotteryReward(New_S2C_LotteryReward *this)

{
  ~New_S2C_LotteryReward(this + -8);
  return;
}

