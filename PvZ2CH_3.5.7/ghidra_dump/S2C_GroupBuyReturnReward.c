// Class: S2C_GroupBuyReturnReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_GroupBuyReturnReward::StaticClassInit() */

void S2C_GroupBuyReturnReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_GroupBuyReturnReward");
    (*pcVar2)(plVar1,asStack_10,FUN_032200d8,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_GroupBuyReturnReward::StaticGetClass() */

long * S2C_GroupBuyReturnReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GroupBuyReturnReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_GroupBuyReturnReward::GetClass() const */

long * S2C_GroupBuyReturnReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GroupBuyReturnReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_GroupBuyReturnReward::S2C_GroupBuyReturnReward() */

void __thiscall S2C_GroupBuyReturnReward::S2C_GroupBuyReturnReward(S2C_GroupBuyReturnReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e5f0;
  *(undefined ***)(this + 8) = &PTR__S2C_GroupBuyReturnReward_0660e658;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_GroupBuyReturnReward::StaticNew() */

S2C_GroupBuyReturnReward * S2C_GroupBuyReturnReward::StaticNew(void)

{
  S2C_GroupBuyReturnReward *this;
  
  this = ::operator_new(0x30);
  S2C_GroupBuyReturnReward(this);
  return this;
}


/* S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward() */

void __thiscall S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward(S2C_GroupBuyReturnReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e5f0;
  *(undefined ***)(this + 8) = &PTR__S2C_GroupBuyReturnReward_0660e658;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward() */

void __thiscall S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward(S2C_GroupBuyReturnReward *this)

{
  ~S2C_GroupBuyReturnReward(this + -8);
  return;
}


/* S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward() */

void __thiscall S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward(S2C_GroupBuyReturnReward *this)

{
  ~S2C_GroupBuyReturnReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward() */

void __thiscall S2C_GroupBuyReturnReward::~S2C_GroupBuyReturnReward(S2C_GroupBuyReturnReward *this)

{
  ~S2C_GroupBuyReturnReward(this + -8);
  return;
}

