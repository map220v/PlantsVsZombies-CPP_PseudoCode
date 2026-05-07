// Class: FestivalGoldenEggPrimaryData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGoldenEggPrimaryData::StaticClassInit() */

void FestivalGoldenEggPrimaryData::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldenEggReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a17b64,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"FestivalGoldenEggPrimaryData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a1d288,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGoldenEggPrimaryData::StaticGetClass() */

long * FestivalGoldenEggPrimaryData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FestivalGoldenEggPrimaryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FestivalGoldenEggPrimaryData::GetClass() const */

long * FestivalGoldenEggPrimaryData::GetClass(void)

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
  (*pcVar3)(plVar1,"FestivalGoldenEggPrimaryData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FestivalGoldenEggPrimaryData::FestivalGoldenEggPrimaryData() */

void __thiscall
FestivalGoldenEggPrimaryData::FestivalGoldenEggPrimaryData(FestivalGoldenEggPrimaryData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066fe4a0;
  *(undefined ***)(this + 8) = &PTR__FestivalGoldenEggPrimaryData_066fe508;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* FestivalGoldenEggPrimaryData::StaticNew() */

FestivalGoldenEggPrimaryData * FestivalGoldenEggPrimaryData::StaticNew(void)

{
  FestivalGoldenEggPrimaryData *this;
  
  this = ::operator_new(0x88);
  FestivalGoldenEggPrimaryData(this);
  return this;
}


/* FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData() */

void __thiscall
FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData(FestivalGoldenEggPrimaryData *this)

{
  *(undefined ***)this = &PTR_GetClass_066fe4a0;
  *(undefined ***)(this + 8) = &PTR__FestivalGoldenEggPrimaryData_066fe508;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x70));
  std::vector<GoldenEggReward,std::allocator<GoldenEggReward>>::~vector
            ((vector<GoldenEggReward,std::allocator<GoldenEggReward>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData() */

void __thiscall
FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData(FestivalGoldenEggPrimaryData *this)

{
  ~FestivalGoldenEggPrimaryData(this + -8);
  return;
}


/* FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData() */

void __thiscall
FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData(FestivalGoldenEggPrimaryData *this)

{
  ~FestivalGoldenEggPrimaryData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData() */

void __thiscall
FestivalGoldenEggPrimaryData::~FestivalGoldenEggPrimaryData(FestivalGoldenEggPrimaryData *this)

{
  ~FestivalGoldenEggPrimaryData(this + -8);
  return;
}

