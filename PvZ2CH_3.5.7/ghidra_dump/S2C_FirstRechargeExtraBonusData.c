// Class: S2C_FirstRechargeExtraBonusData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_FirstRechargeExtraBonusData::StaticClassInit() */

void S2C_FirstRechargeExtraBonusData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_FirstRechargeExtraBonusData");
    (*pcVar2)(plVar1,asStack_10,FUN_04db05a4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_FirstRechargeExtraBonusData::StaticGetClass() */

long * S2C_FirstRechargeExtraBonusData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_FirstRechargeExtraBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_FirstRechargeExtraBonusData::GetClass() const */

long * S2C_FirstRechargeExtraBonusData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_FirstRechargeExtraBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_FirstRechargeExtraBonusData::S2C_FirstRechargeExtraBonusData() */

void __thiscall
S2C_FirstRechargeExtraBonusData::S2C_FirstRechargeExtraBonusData
          (S2C_FirstRechargeExtraBonusData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069bf580;
  *(undefined ***)(this + 8) = &PTR__S2C_FirstRechargeExtraBonusData_069bf5e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_FirstRechargeExtraBonusData::StaticNew() */

S2C_FirstRechargeExtraBonusData * S2C_FirstRechargeExtraBonusData::StaticNew(void)

{
  S2C_FirstRechargeExtraBonusData *this;
  
  this = ::operator_new(0x30);
  S2C_FirstRechargeExtraBonusData(this);
  return this;
}


/* S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData() */

void __thiscall
S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData
          (S2C_FirstRechargeExtraBonusData *this)

{
  *(undefined ***)this = &PTR_GetClass_069bf580;
  *(undefined ***)(this + 8) = &PTR__S2C_FirstRechargeExtraBonusData_069bf5e8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData() */

void __thiscall
S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData
          (S2C_FirstRechargeExtraBonusData *this)

{
  ~S2C_FirstRechargeExtraBonusData(this + -8);
  return;
}


/* S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData() */

void __thiscall
S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData
          (S2C_FirstRechargeExtraBonusData *this)

{
  ~S2C_FirstRechargeExtraBonusData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData() */

void __thiscall
S2C_FirstRechargeExtraBonusData::~S2C_FirstRechargeExtraBonusData
          (S2C_FirstRechargeExtraBonusData *this)

{
  ~S2C_FirstRechargeExtraBonusData(this + -8);
  return;
}

