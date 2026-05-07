// Class: FutureReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureReward::StaticClassInit() */

void FutureReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"FutureReward");
    (*pcVar2)(plVar1,asStack_10,FUN_04e7407c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureReward::StaticGetClass() */

long * FutureReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FutureReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureReward::GetClass() const */

long * FutureReward::GetClass(void)

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
  (*pcVar3)(plVar1,"FutureReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureReward::FutureReward() */

void __thiscall FutureReward::FutureReward(FutureReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e5930;
  *(undefined ***)(this + 8) = &PTR__FutureReward_069e5998;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::clear
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* FutureReward::StaticNew() */

FutureReward * FutureReward::StaticNew(void)

{
  FutureReward *this;
  
  this = ::operator_new(0x38);
  FutureReward(this);
  return this;
}


/* FutureReward::~FutureReward() */

void __thiscall FutureReward::~FutureReward(FutureReward *this)

{
  *(undefined ***)this = &PTR_GetClass_069e5930;
  *(undefined ***)(this + 8) = &PTR__FutureReward_069e5998;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FutureReward::~FutureReward() */

void __thiscall FutureReward::~FutureReward(FutureReward *this)

{
  ~FutureReward(this + -8);
  return;
}


/* FutureReward::~FutureReward() */

void __thiscall FutureReward::~FutureReward(FutureReward *this)

{
  ~FutureReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FutureReward::~FutureReward() */

void __thiscall FutureReward::~FutureReward(FutureReward *this)

{
  ~FutureReward(this + -8);
  return;
}

