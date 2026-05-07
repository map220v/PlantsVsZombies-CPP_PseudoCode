// Class: PennyGiftBoxRewardItemData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRewardItemData::StaticClassInit() */

void PennyGiftBoxRewardItemData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyGiftBoxRewardItemData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e7efa8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxRewardItemData::StaticGetClass() */

long * PennyGiftBoxRewardItemData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxRewardItemData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxRewardItemData::GetClass() const */

long * PennyGiftBoxRewardItemData::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxRewardItemData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxRewardItemData::PennyGiftBoxRewardItemData() */

void __thiscall
PennyGiftBoxRewardItemData::PennyGiftBoxRewardItemData(PennyGiftBoxRewardItemData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e7b20;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxRewardItemData_069e7b88;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PennyGiftBoxRewardItemData::StaticNew() */

PennyGiftBoxRewardItemData * PennyGiftBoxRewardItemData::StaticNew(void)

{
  PennyGiftBoxRewardItemData *this;
  
  this = ::operator_new(0x48);
  PennyGiftBoxRewardItemData(this);
  return this;
}


/* PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData() */

void __thiscall
PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData(PennyGiftBoxRewardItemData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e7b20;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxRewardItemData_069e7b88;
  std::vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>>::~vector
            ((vector<PennyGiftBoxGrowData,std::allocator<PennyGiftBoxGrowData>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData() */

void __thiscall
PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData(PennyGiftBoxRewardItemData *this)

{
  ~PennyGiftBoxRewardItemData(this + -8);
  return;
}


/* PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData() */

void __thiscall
PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData(PennyGiftBoxRewardItemData *this)

{
  ~PennyGiftBoxRewardItemData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData() */

void __thiscall
PennyGiftBoxRewardItemData::~PennyGiftBoxRewardItemData(PennyGiftBoxRewardItemData *this)

{
  ~PennyGiftBoxRewardItemData(this + -8);
  return;
}

