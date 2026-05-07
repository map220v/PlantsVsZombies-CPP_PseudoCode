// Class: LimitedSummonRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LimitedSummonRewardData::StaticClassInit() */

void LimitedSummonRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LimitedSummonRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_0399e8fc,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LimitedSummonRewardData::StaticGetClass() */

long * LimitedSummonRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LimitedSummonRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitedSummonRewardData::GetClass() const */

long * LimitedSummonRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"LimitedSummonRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LimitedSummonRewardData::LimitedSummonRewardData() */

void __thiscall LimitedSummonRewardData::LimitedSummonRewardData(LimitedSummonRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066e16b0;
  *(undefined ***)(this + 8) = &PTR__LimitedSummonRewardData_066e1718;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* LimitedSummonRewardData::StaticNew() */

LimitedSummonRewardData * LimitedSummonRewardData::StaticNew(void)

{
  LimitedSummonRewardData *this;
  
  this = ::operator_new(0x48);
  LimitedSummonRewardData(this);
  return this;
}


/* LimitedSummonRewardData::~LimitedSummonRewardData() */

void __thiscall LimitedSummonRewardData::~LimitedSummonRewardData(LimitedSummonRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_066e16b0;
  *(undefined ***)(this + 8) = &PTR__LimitedSummonRewardData_066e1718;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LimitedSummonRewardData::~LimitedSummonRewardData() */

void __thiscall LimitedSummonRewardData::~LimitedSummonRewardData(LimitedSummonRewardData *this)

{
  ~LimitedSummonRewardData(this + -8);
  return;
}


/* LimitedSummonRewardData::~LimitedSummonRewardData() */

void __thiscall LimitedSummonRewardData::~LimitedSummonRewardData(LimitedSummonRewardData *this)

{
  ~LimitedSummonRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LimitedSummonRewardData::~LimitedSummonRewardData() */

void __thiscall LimitedSummonRewardData::~LimitedSummonRewardData(LimitedSummonRewardData *this)

{
  ~LimitedSummonRewardData(this + -8);
  return;
}

