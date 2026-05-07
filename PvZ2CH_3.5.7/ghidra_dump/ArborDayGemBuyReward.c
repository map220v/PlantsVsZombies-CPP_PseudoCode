// Class: ArborDayGemBuyReward


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArborDayGemBuyReward::StaticClassInit() */

void ArborDayGemBuyReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArborDayGemBuyReward");
    (*pcVar2)(plVar1,asStack_10,FUN_03a26be8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArborDayGemBuyReward::StaticGetClass() */

long * ArborDayGemBuyReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayGemBuyReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArborDayGemBuyReward::GetClass() const */

long * ArborDayGemBuyReward::GetClass(void)

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
  (*pcVar3)(plVar1,"ArborDayGemBuyReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArborDayGemBuyReward::ArborDayGemBuyReward() */

void __thiscall ArborDayGemBuyReward::ArborDayGemBuyReward(ArborDayGemBuyReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06700210;
  *(undefined ***)(this + 8) = &PTR__ArborDayGemBuyReward_06700278;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* ArborDayGemBuyReward::StaticNew() */

ArborDayGemBuyReward * ArborDayGemBuyReward::StaticNew(void)

{
  ArborDayGemBuyReward *this;
  
  this = ::operator_new(0x38);
  ArborDayGemBuyReward(this);
  return this;
}


/* ArborDayGemBuyReward::~ArborDayGemBuyReward() */

void __thiscall ArborDayGemBuyReward::~ArborDayGemBuyReward(ArborDayGemBuyReward *this)

{
  *(undefined ***)this = &PTR_GetClass_06700210;
  *(undefined ***)(this + 8) = &PTR__ArborDayGemBuyReward_06700278;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ArborDayGemBuyReward::~ArborDayGemBuyReward() */

void __thiscall ArborDayGemBuyReward::~ArborDayGemBuyReward(ArborDayGemBuyReward *this)

{
  ~ArborDayGemBuyReward(this + -8);
  return;
}


/* ArborDayGemBuyReward::~ArborDayGemBuyReward() */

void __thiscall ArborDayGemBuyReward::~ArborDayGemBuyReward(ArborDayGemBuyReward *this)

{
  ~ArborDayGemBuyReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArborDayGemBuyReward::~ArborDayGemBuyReward() */

void __thiscall ArborDayGemBuyReward::~ArborDayGemBuyReward(ArborDayGemBuyReward *this)

{
  ~ArborDayGemBuyReward(this + -8);
  return;
}

