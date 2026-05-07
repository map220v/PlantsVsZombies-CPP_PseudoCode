// Class: GrowthPackageData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GrowthPackageData::StaticClassInit() */

void GrowthPackageData::StaticClassInit(void)

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
    std::string::string(asStack_10,"GrowthPackageReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a46354,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GrowthPackageData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a465c4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GrowthPackageData::StaticGetClass() */

long * GrowthPackageData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GrowthPackageData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GrowthPackageData::GetClass() const */

long * GrowthPackageData::GetClass(void)

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
  (*pcVar3)(plVar1,"GrowthPackageData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GrowthPackageData::GrowthPackageData() */

void __thiscall GrowthPackageData::GrowthPackageData(GrowthPackageData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06706f00;
  *(undefined ***)(this + 8) = &PTR__GrowthPackageData_06706f68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* GrowthPackageData::StaticNew() */

GrowthPackageData * GrowthPackageData::StaticNew(void)

{
  GrowthPackageData *this;
  
  this = ::operator_new(0x78);
  GrowthPackageData(this);
  return this;
}


/* GrowthPackageData::~GrowthPackageData() */

void __thiscall GrowthPackageData::~GrowthPackageData(GrowthPackageData *this)

{
  *(undefined ***)this = &PTR_GetClass_06706f00;
  *(undefined ***)(this + 8) = &PTR__GrowthPackageData_06706f68;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x60));
  std::vector<GrowthPackageReward,std::allocator<GrowthPackageReward>>::~vector
            ((vector<GrowthPackageReward,std::allocator<GrowthPackageReward>> *)(this + 0x48));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to GrowthPackageData::~GrowthPackageData() */

void __thiscall GrowthPackageData::~GrowthPackageData(GrowthPackageData *this)

{
  ~GrowthPackageData(this + -8);
  return;
}


/* GrowthPackageData::~GrowthPackageData() */

void __thiscall GrowthPackageData::~GrowthPackageData(GrowthPackageData *this)

{
  ~GrowthPackageData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GrowthPackageData::~GrowthPackageData() */

void __thiscall GrowthPackageData::~GrowthPackageData(GrowthPackageData *this)

{
  ~GrowthPackageData(this + -8);
  return;
}

