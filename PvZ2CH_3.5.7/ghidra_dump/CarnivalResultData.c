// Class: CarnivalResultData


/* CarnivalResultData::CarnivalResultData() */

void __thiscall CarnivalResultData::CarnivalResultData(CarnivalResultData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066e6550;
  *(undefined ***)(this + 8) = &PTR__CarnivalResultData_066e65b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* CarnivalResultData::~CarnivalResultData() */

void __thiscall CarnivalResultData::~CarnivalResultData(CarnivalResultData *this)

{
  *(undefined ***)this = &PTR_GetClass_066e6550;
  *(undefined ***)(this + 8) = &PTR__CarnivalResultData_066e65b8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CarnivalResultData::~CarnivalResultData() */

void __thiscall CarnivalResultData::~CarnivalResultData(CarnivalResultData *this)

{
  ~CarnivalResultData(this + -8);
  return;
}


/* CarnivalResultData::~CarnivalResultData() */

void __thiscall CarnivalResultData::~CarnivalResultData(CarnivalResultData *this)

{
  ~CarnivalResultData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarnivalResultData::~CarnivalResultData() */

void __thiscall CarnivalResultData::~CarnivalResultData(CarnivalResultData *this)

{
  ~CarnivalResultData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalResultData::StaticClassInit() */

void CarnivalResultData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarnivalResultData");
    (*pcVar2)(plVar1,asStack_10,FUN_039b1e04,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalResultData::StaticGetClass() */

long * CarnivalResultData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CarnivalResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarnivalResultData::GetClass() const */

long * CarnivalResultData::GetClass(void)

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
  (*pcVar3)(plVar1,"CarnivalResultData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarnivalResultData::StaticNew() */

CarnivalResultData * CarnivalResultData::StaticNew(void)

{
  CarnivalResultData *this;
  
  this = ::operator_new(0x38);
  CarnivalResultData(this);
  return this;
}

