// Class: LuckBagData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckBagData::StaticClassInit() */

void LuckBagData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotteryBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_03abaa64,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LuckBagData");
    (*pcVar3)(plVar2,asStack_10,FUN_03abcd64,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuckBagData::StaticGetClass() */

long * LuckBagData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LuckBagData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckBagData::GetClass() const */

long * LuckBagData::GetClass(void)

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
  (*pcVar3)(plVar1,"LuckBagData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckBagData::LuckBagData() */

void __thiscall LuckBagData::LuckBagData(LuckBagData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_067168f0;
  *(undefined ***)(this + 8) = &PTR__LuckBagData_06716958;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* LuckBagData::StaticNew() */

LuckBagData * LuckBagData::StaticNew(void)

{
  LuckBagData *this;
  
  this = ::operator_new(0x48);
  LuckBagData(this);
  return this;
}


/* LuckBagData::~LuckBagData() */

void __thiscall LuckBagData::~LuckBagData(LuckBagData *this)

{
  *(undefined ***)this = &PTR_GetClass_067168f0;
  *(undefined ***)(this + 8) = &PTR__LuckBagData_06716958;
  std::
  vector<std::vector<LotteryBonus,std::allocator<LotteryBonus>>,std::allocator<std::vector<LotteryBonus,std::allocator<LotteryBonus>>>>
  ::~vector((vector<std::vector<LotteryBonus,std::allocator<LotteryBonus>>,std::allocator<std::vector<LotteryBonus,std::allocator<LotteryBonus>>>>
             *)(this + 0x30));
  std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
            ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LuckBagData::~LuckBagData() */

void __thiscall LuckBagData::~LuckBagData(LuckBagData *this)

{
  ~LuckBagData(this + -8);
  return;
}


/* LuckBagData::~LuckBagData() */

void __thiscall LuckBagData::~LuckBagData(LuckBagData *this)

{
  ~LuckBagData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LuckBagData::~LuckBagData() */

void __thiscall LuckBagData::~LuckBagData(LuckBagData *this)

{
  ~LuckBagData(this + -8);
  return;
}

