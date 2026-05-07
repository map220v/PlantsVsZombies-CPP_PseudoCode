// Class: FightFireworksData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FightFireworksData::StaticClassInit() */

void FightFireworksData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FightFireworksData");
    (*pcVar2)(plVar1,asStack_10,FUN_039cf260,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FightFireworksData::StaticGetClass() */

long * FightFireworksData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FightFireworksData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FightFireworksData::GetClass() const */

long * FightFireworksData::GetClass(void)

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
  (*pcVar3)(plVar1,"FightFireworksData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FightFireworksData::FightFireworksData() */

void __thiscall FightFireworksData::FightFireworksData(FightFireworksData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066f0e50;
  *(undefined ***)(this + 8) = &PTR__FightFireworksData_066f0eb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* FightFireworksData::StaticNew() */

FightFireworksData * FightFireworksData::StaticNew(void)

{
  FightFireworksData *this;
  
  this = ::operator_new(0x50);
  FightFireworksData(this);
  return this;
}


/* FightFireworksData::~FightFireworksData() */

void __thiscall FightFireworksData::~FightFireworksData(FightFireworksData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f0e50;
  *(undefined ***)(this + 8) = &PTR__FightFireworksData_066f0eb8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x38));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FightFireworksData::~FightFireworksData() */

void __thiscall FightFireworksData::~FightFireworksData(FightFireworksData *this)

{
  ~FightFireworksData(this + -8);
  return;
}


/* FightFireworksData::~FightFireworksData() */

void __thiscall FightFireworksData::~FightFireworksData(FightFireworksData *this)

{
  ~FightFireworksData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FightFireworksData::~FightFireworksData() */

void __thiscall FightFireworksData::~FightFireworksData(FightFireworksData *this)

{
  ~FightFireworksData(this + -8);
  return;
}

