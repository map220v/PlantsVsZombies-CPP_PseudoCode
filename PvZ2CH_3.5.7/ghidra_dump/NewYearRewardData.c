// Class: NewYearRewardData


/* NewYearRewardData::NewYearRewardData() */

void __thiscall NewYearRewardData::NewYearRewardData(NewYearRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066ca630;
  *(undefined ***)(this + 8) = &PTR__NewYearRewardData_066ca698;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewYearRewardData::~NewYearRewardData() */

void __thiscall NewYearRewardData::~NewYearRewardData(NewYearRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_066ca630;
  *(undefined ***)(this + 8) = &PTR__NewYearRewardData_066ca698;
  std::vector<stThirdAward,std::allocator<stThirdAward>>::~vector
            ((vector<stThirdAward,std::allocator<stThirdAward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewYearRewardData::~NewYearRewardData() */

void __thiscall NewYearRewardData::~NewYearRewardData(NewYearRewardData *this)

{
  ~NewYearRewardData(this + -8);
  return;
}


/* NewYearRewardData::~NewYearRewardData() */

void __thiscall NewYearRewardData::~NewYearRewardData(NewYearRewardData *this)

{
  ~NewYearRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewYearRewardData::~NewYearRewardData() */

void __thiscall NewYearRewardData::~NewYearRewardData(NewYearRewardData *this)

{
  ~NewYearRewardData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearRewardData::StaticClassInit() */

void NewYearRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"stThirdAward");
    (*pcVar3)(plVar2,asStack_10,FUN_03924edc,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYearRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_0392987c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearRewardData::StaticGetClass() */

long * NewYearRewardData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewYearRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearRewardData::GetClass() const */

long * NewYearRewardData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"NewYearRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearRewardData::StaticNew() */

NewYearRewardData * NewYearRewardData::StaticNew(void)

{
  NewYearRewardData *this;
  
  this = ::operator_new(0x30);
  NewYearRewardData(this);
  return this;
}

