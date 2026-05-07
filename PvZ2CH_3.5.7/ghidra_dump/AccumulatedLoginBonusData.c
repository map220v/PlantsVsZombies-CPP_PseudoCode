// Class: AccumulatedLoginBonusData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccumulatedLoginBonusData::StaticClassInit() */

void AccumulatedLoginBonusData::StaticClassInit(void)

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
    std::string::string(asStack_10,"AccumulatedLoginBonusData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ebadec,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccumulatedLoginBonusData::StaticGetClass() */

long * AccumulatedLoginBonusData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AccumulatedLoginBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AccumulatedLoginBonusData::GetClass() const */

long * AccumulatedLoginBonusData::GetClass(void)

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
  (*pcVar3)(plVar1,"AccumulatedLoginBonusData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AccumulatedLoginBonusData::AccumulatedLoginBonusData() */

void __thiscall
AccumulatedLoginBonusData::AccumulatedLoginBonusData(AccumulatedLoginBonusData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f4b10;
  *(undefined ***)(this + 8) = &PTR__AccumulatedLoginBonusData_069f4b78;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* AccumulatedLoginBonusData::StaticNew() */

AccumulatedLoginBonusData * AccumulatedLoginBonusData::StaticNew(void)

{
  AccumulatedLoginBonusData *this;
  
  this = ::operator_new(0x30);
  AccumulatedLoginBonusData(this);
  return this;
}


/* AccumulatedLoginBonusData::~AccumulatedLoginBonusData() */

void __thiscall
AccumulatedLoginBonusData::~AccumulatedLoginBonusData(AccumulatedLoginBonusData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f4b10;
  *(undefined ***)(this + 8) = &PTR__AccumulatedLoginBonusData_069f4b78;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to AccumulatedLoginBonusData::~AccumulatedLoginBonusData() */

void __thiscall
AccumulatedLoginBonusData::~AccumulatedLoginBonusData(AccumulatedLoginBonusData *this)

{
  ~AccumulatedLoginBonusData(this + -8);
  return;
}


/* AccumulatedLoginBonusData::~AccumulatedLoginBonusData() */

void __thiscall
AccumulatedLoginBonusData::~AccumulatedLoginBonusData(AccumulatedLoginBonusData *this)

{
  ~AccumulatedLoginBonusData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AccumulatedLoginBonusData::~AccumulatedLoginBonusData() */

void __thiscall
AccumulatedLoginBonusData::~AccumulatedLoginBonusData(AccumulatedLoginBonusData *this)

{
  ~AccumulatedLoginBonusData(this + -8);
  return;
}

