// Class: ADRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ADRewardData::StaticClassInit() */

void ADRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ADRewardBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033ac20c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ADRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_033ad414,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ADRewardData::StaticGetClass() */

long * ADRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ADRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ADRewardData::GetClass() const */

long * ADRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"ADRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ADRewardData::ADRewardData() */

void __thiscall ADRewardData::ADRewardData(ADRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06615240;
  *(undefined ***)(this + 8) = &PTR__ADRewardData_066152a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ADRewardData::StaticNew() */

ADRewardData * ADRewardData::StaticNew(void)

{
  ADRewardData *this;
  
  this = ::operator_new(0x38);
  ADRewardData(this);
  return this;
}


/* ADRewardData::~ADRewardData() */

void __thiscall ADRewardData::~ADRewardData(ADRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_06615240;
  *(undefined ***)(this + 8) = &PTR__ADRewardData_066152a8;
  std::vector<ADRewardBonusInfo,std::allocator<ADRewardBonusInfo>>::~vector
            ((vector<ADRewardBonusInfo,std::allocator<ADRewardBonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ADRewardData::~ADRewardData() */

void __thiscall ADRewardData::~ADRewardData(ADRewardData *this)

{
  ~ADRewardData(this + -8);
  return;
}


/* ADRewardData::~ADRewardData() */

void __thiscall ADRewardData::~ADRewardData(ADRewardData *this)

{
  ~ADRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ADRewardData::~ADRewardData() */

void __thiscall ADRewardData::~ADRewardData(ADRewardData *this)

{
  ~ADRewardData(this + -8);
  return;
}

