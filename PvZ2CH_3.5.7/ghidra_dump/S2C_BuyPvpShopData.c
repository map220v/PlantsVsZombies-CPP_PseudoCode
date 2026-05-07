// Class: S2C_BuyPvpShopData


/* S2C_BuyPvpShopData::S2C_BuyPvpShopData() */

void __thiscall S2C_BuyPvpShopData::S2C_BuyPvpShopData(S2C_BuyPvpShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c280;
  *(undefined ***)(this + 8) = &PTR__S2C_BuyPvpShopData_0660c2e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_BuyPvpShopData::~S2C_BuyPvpShopData() */

void __thiscall S2C_BuyPvpShopData::~S2C_BuyPvpShopData(S2C_BuyPvpShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c280;
  *(undefined ***)(this + 8) = &PTR__S2C_BuyPvpShopData_0660c2e8;
  std::vector<PvpShopBuyItem,std::allocator<PvpShopBuyItem>>::~vector
            ((vector<PvpShopBuyItem,std::allocator<PvpShopBuyItem>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_BuyPvpShopData::~S2C_BuyPvpShopData() */

void __thiscall S2C_BuyPvpShopData::~S2C_BuyPvpShopData(S2C_BuyPvpShopData *this)

{
  ~S2C_BuyPvpShopData(this + -8);
  return;
}


/* S2C_BuyPvpShopData::~S2C_BuyPvpShopData() */

void __thiscall S2C_BuyPvpShopData::~S2C_BuyPvpShopData(S2C_BuyPvpShopData *this)

{
  ~S2C_BuyPvpShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_BuyPvpShopData::~S2C_BuyPvpShopData() */

void __thiscall S2C_BuyPvpShopData::~S2C_BuyPvpShopData(S2C_BuyPvpShopData *this)

{
  ~S2C_BuyPvpShopData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_BuyPvpShopData::StaticClassInit() */

void S2C_BuyPvpShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PvpShopBuyItem");
    (*pcVar3)(plVar2,asStack_10,FUN_032017c0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_BuyPvpShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03234ff8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_BuyPvpShopData::StaticGetClass() */

long * S2C_BuyPvpShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BuyPvpShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_BuyPvpShopData::GetClass() const */

long * S2C_BuyPvpShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BuyPvpShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_BuyPvpShopData::StaticNew() */

S2C_BuyPvpShopData * S2C_BuyPvpShopData::StaticNew(void)

{
  S2C_BuyPvpShopData *this;
  
  this = ::operator_new(0x38);
  S2C_BuyPvpShopData(this);
  return this;
}

