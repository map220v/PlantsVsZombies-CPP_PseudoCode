// Class: New_S2C_GiftBoxReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_GiftBoxReward::StaticClassInit() */

void New_S2C_GiftBoxReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_Reward");
    (*pcVar3)(plVar2,asStack_10,FUN_0497f000,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"New_S2C_GiftBoxReward");
    (*pcVar3)(plVar2,asStack_10,FUN_04983540,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_GiftBoxReward::StaticGetClass() */

long * New_S2C_GiftBoxReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_GiftBoxReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_GiftBoxReward::GetClass() const */

long * New_S2C_GiftBoxReward::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_GiftBoxReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_GiftBoxReward::New_S2C_GiftBoxReward() */

void __thiscall New_S2C_GiftBoxReward::New_S2C_GiftBoxReward(New_S2C_GiftBoxReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069189b0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_GiftBoxReward_06918a18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_GiftBoxReward::StaticNew() */

New_S2C_GiftBoxReward * New_S2C_GiftBoxReward::StaticNew(void)

{
  New_S2C_GiftBoxReward *this;
  
  this = ::operator_new(0x30);
  New_S2C_GiftBoxReward(this);
  return this;
}


/* New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward() */

void __thiscall New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward(New_S2C_GiftBoxReward *this)

{
  *(undefined ***)this = &PTR_GetClass_069189b0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_GiftBoxReward_06918a18;
  std::vector<New_S2C_Reward,std::allocator<New_S2C_Reward>>::~vector
            ((vector<New_S2C_Reward,std::allocator<New_S2C_Reward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward() */

void __thiscall New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward(New_S2C_GiftBoxReward *this)

{
  ~New_S2C_GiftBoxReward(this + -8);
  return;
}


/* New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward() */

void __thiscall New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward(New_S2C_GiftBoxReward *this)

{
  ~New_S2C_GiftBoxReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward() */

void __thiscall New_S2C_GiftBoxReward::~New_S2C_GiftBoxReward(New_S2C_GiftBoxReward *this)

{
  ~New_S2C_GiftBoxReward(this + -8);
  return;
}

