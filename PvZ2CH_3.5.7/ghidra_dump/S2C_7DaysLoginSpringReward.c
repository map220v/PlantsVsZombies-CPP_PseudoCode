// Class: S2C_7DaysLoginSpringReward


/* S2C_7DaysLoginSpringReward::S2C_7DaysLoginSpringReward() */

void __thiscall
S2C_7DaysLoginSpringReward::S2C_7DaysLoginSpringReward(S2C_7DaysLoginSpringReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660afe0;
  *(undefined ***)(this + 8) = &PTR__S2C_7DaysLoginSpringReward_0660b048;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward() */

void __thiscall
S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward(S2C_7DaysLoginSpringReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660afe0;
  *(undefined ***)(this + 8) = &PTR__S2C_7DaysLoginSpringReward_0660b048;
  std::vector<ExpPlantLoginConfig,std::allocator<ExpPlantLoginConfig>>::~vector
            ((vector<ExpPlantLoginConfig,std::allocator<ExpPlantLoginConfig>> *)(this + 0x30));
  std::vector<SpringLoginRewardBonus,std::allocator<SpringLoginRewardBonus>>::~vector
            ((vector<SpringLoginRewardBonus,std::allocator<SpringLoginRewardBonus>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward() */

void __thiscall
S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward(S2C_7DaysLoginSpringReward *this)

{
  ~S2C_7DaysLoginSpringReward(this + -8);
  return;
}


/* S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward() */

void __thiscall
S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward(S2C_7DaysLoginSpringReward *this)

{
  ~S2C_7DaysLoginSpringReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward() */

void __thiscall
S2C_7DaysLoginSpringReward::~S2C_7DaysLoginSpringReward(S2C_7DaysLoginSpringReward *this)

{
  ~S2C_7DaysLoginSpringReward(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_7DaysLoginSpringReward::StaticClassInit() */

void S2C_7DaysLoginSpringReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"SpringLoginRewardBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_031ff9d4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ExpPlantLoginConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_032039c0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_7DaysLoginSpringReward");
    (*pcVar3)(plVar2,asStack_10,FUN_0323242c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_7DaysLoginSpringReward::StaticGetClass() */

long * S2C_7DaysLoginSpringReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_7DaysLoginSpringReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_7DaysLoginSpringReward::GetClass() const */

long * S2C_7DaysLoginSpringReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_7DaysLoginSpringReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_7DaysLoginSpringReward::StaticNew() */

S2C_7DaysLoginSpringReward * S2C_7DaysLoginSpringReward::StaticNew(void)

{
  S2C_7DaysLoginSpringReward *this;
  
  this = ::operator_new(0x48);
  S2C_7DaysLoginSpringReward(this);
  return this;
}

