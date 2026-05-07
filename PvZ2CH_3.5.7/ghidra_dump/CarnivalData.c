// Class: CarnivalData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarnivalData::StaticClassInit() */

void CarnivalData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CarnivalBundleExtra");
    (*pcVar3)(plVar2,asStack_10,FUN_039aae70,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CarnivalBundleData");
    (*pcVar3)(plVar2,asStack_10,FUN_039b2164,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CarnivalRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_039b1c3c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CarnivalData");
    (*pcVar3)(plVar2,asStack_10,FUN_039b2788,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CarnivalData::StaticGetClass() */

long * CarnivalData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CarnivalData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarnivalData::GetClass() const */

long * CarnivalData::GetClass(void)

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
  (*pcVar3)(plVar1,"CarnivalData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CarnivalData::CarnivalData() */

void __thiscall CarnivalData::CarnivalData(CarnivalData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066e64c0;
  *(undefined ***)(this + 8) = &PTR__CarnivalData_066e6528;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x98));
  return;
}


/* CarnivalData::StaticNew() */

CarnivalData * CarnivalData::StaticNew(void)

{
  CarnivalData *this;
  
  this = ::operator_new(0xb0);
  CarnivalData(this);
  return this;
}


/* CarnivalData::~CarnivalData() */

void __thiscall CarnivalData::~CarnivalData(CarnivalData *this)

{
  *(undefined ***)this = &PTR_GetClass_066e64c0;
  *(undefined ***)(this + 8) = &PTR__CarnivalData_066e6528;
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x98));
  std::vector<CarnivalRewardData,std::allocator<CarnivalRewardData>>::~vector
            ((vector<CarnivalRewardData,std::allocator<CarnivalRewardData>> *)(this + 0x80));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x68));
  std::vector<CarnivalBundleData,std::allocator<CarnivalBundleData>>::~vector
            ((vector<CarnivalBundleData,std::allocator<CarnivalBundleData>> *)(this + 0x50));
  std::vector<CarnivalBundleData,std::allocator<CarnivalBundleData>>::~vector
            ((vector<CarnivalBundleData,std::allocator<CarnivalBundleData>> *)(this + 0x38));
  std::vector<CarnivalBundleData,std::allocator<CarnivalBundleData>>::~vector
            ((vector<CarnivalBundleData,std::allocator<CarnivalBundleData>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CarnivalData::~CarnivalData() */

void __thiscall CarnivalData::~CarnivalData(CarnivalData *this)

{
  ~CarnivalData(this + -8);
  return;
}


/* CarnivalData::~CarnivalData() */

void __thiscall CarnivalData::~CarnivalData(CarnivalData *this)

{
  ~CarnivalData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CarnivalData::~CarnivalData() */

void __thiscall CarnivalData::~CarnivalData(CarnivalData *this)

{
  ~CarnivalData(this + -8);
  return;
}

