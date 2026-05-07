// Class: New_S2C_BuySecretAreaReward


/* New_S2C_BuySecretAreaReward::New_S2C_BuySecretAreaReward() */

void __thiscall
New_S2C_BuySecretAreaReward::New_S2C_BuySecretAreaReward(New_S2C_BuySecretAreaReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e830;
  *(undefined ***)(this + 8) = &PTR__New_S2C_BuySecretAreaReward_0660e898;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward() */

void __thiscall
New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward(New_S2C_BuySecretAreaReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e830;
  *(undefined ***)(this + 8) = &PTR__New_S2C_BuySecretAreaReward_0660e898;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward() */

void __thiscall
New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward(New_S2C_BuySecretAreaReward *this)

{
  ~New_S2C_BuySecretAreaReward(this + -8);
  return;
}


/* New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward() */

void __thiscall
New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward(New_S2C_BuySecretAreaReward *this)

{
  ~New_S2C_BuySecretAreaReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward() */

void __thiscall
New_S2C_BuySecretAreaReward::~New_S2C_BuySecretAreaReward(New_S2C_BuySecretAreaReward *this)

{
  ~New_S2C_BuySecretAreaReward(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_BuySecretAreaReward::StaticClassInit() */

void New_S2C_BuySecretAreaReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"New_S2C_BuySecretAreaReward");
    (*pcVar2)(plVar1,asStack_10,FUN_032220f0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_BuySecretAreaReward::StaticGetClass() */

long * New_S2C_BuySecretAreaReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_BuySecretAreaReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_BuySecretAreaReward::GetClass() const */

long * New_S2C_BuySecretAreaReward::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_BuySecretAreaReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_BuySecretAreaReward::StaticNew() */

New_S2C_BuySecretAreaReward * New_S2C_BuySecretAreaReward::StaticNew(void)

{
  New_S2C_BuySecretAreaReward *this;
  
  this = ::operator_new(0x30);
  New_S2C_BuySecretAreaReward(this);
  return this;
}

