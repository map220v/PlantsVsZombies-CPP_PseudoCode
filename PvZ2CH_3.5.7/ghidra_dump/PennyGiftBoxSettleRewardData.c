// Class: PennyGiftBoxSettleRewardData


/* PennyGiftBoxSettleRewardData::PennyGiftBoxSettleRewardData() */

void __thiscall
PennyGiftBoxSettleRewardData::PennyGiftBoxSettleRewardData(PennyGiftBoxSettleRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e7c40;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxSettleRewardData_069e7ca8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData() */

void __thiscall
PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData(PennyGiftBoxSettleRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e7c40;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxSettleRewardData_069e7ca8;
  std::vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>>::~vector
            ((vector<NDLoginRewardBonus,std::allocator<NDLoginRewardBonus>> *)(this + 0x48));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData() */

void __thiscall
PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData(PennyGiftBoxSettleRewardData *this)

{
  ~PennyGiftBoxSettleRewardData(this + -8);
  return;
}


/* PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData() */

void __thiscall
PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData(PennyGiftBoxSettleRewardData *this)

{
  ~PennyGiftBoxSettleRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData() */

void __thiscall
PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData(PennyGiftBoxSettleRewardData *this)

{
  ~PennyGiftBoxSettleRewardData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxSettleRewardData::StaticClassInit() */

void PennyGiftBoxSettleRewardData::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_04e76ca4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyGiftBoxSettleRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7f4dc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxSettleRewardData::StaticGetClass() */

long * PennyGiftBoxSettleRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxSettleRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxSettleRewardData::GetClass() const */

long * PennyGiftBoxSettleRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxSettleRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxSettleRewardData::StaticNew() */

PennyGiftBoxSettleRewardData * PennyGiftBoxSettleRewardData::StaticNew(void)

{
  PennyGiftBoxSettleRewardData *this;
  
  this = ::operator_new(0x68);
  PennyGiftBoxSettleRewardData(this);
  return this;
}

