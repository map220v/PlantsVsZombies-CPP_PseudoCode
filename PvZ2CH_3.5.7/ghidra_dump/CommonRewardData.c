// Class: CommonRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommonRewardData::StaticClassInit() */

void CommonRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CommonRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_038c9294,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CommonRewardData::StaticGetClass() */

long * CommonRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CommonRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CommonRewardData::GetClass() const */

long * CommonRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"CommonRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CommonRewardData::CommonRewardData() */

void __thiscall CommonRewardData::CommonRewardData(CommonRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066b7220;
  *(undefined ***)(this + 8) = &PTR__CommonRewardData_066b7288;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* CommonRewardData::StaticNew() */

CommonRewardData * CommonRewardData::StaticNew(void)

{
  CommonRewardData *this;
  
  this = ::operator_new(0x60);
  CommonRewardData(this);
  return this;
}


/* CommonRewardData::~CommonRewardData() */

void __thiscall CommonRewardData::~CommonRewardData(CommonRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_066b7220;
  *(undefined ***)(this + 8) = &PTR__CommonRewardData_066b7288;
  std::vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>>::~vector
            ((vector<ToyNightRewardPlayerData,std::allocator<ToyNightRewardPlayerData>> *)
             (this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CommonRewardData::~CommonRewardData() */

void __thiscall CommonRewardData::~CommonRewardData(CommonRewardData *this)

{
  ~CommonRewardData(this + -8);
  return;
}


/* CommonRewardData::~CommonRewardData() */

void __thiscall CommonRewardData::~CommonRewardData(CommonRewardData *this)

{
  ~CommonRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CommonRewardData::~CommonRewardData() */

void __thiscall CommonRewardData::~CommonRewardData(CommonRewardData *this)

{
  ~CommonRewardData(this + -8);
  return;
}

