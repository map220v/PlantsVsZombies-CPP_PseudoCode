// Class: TheaterShopData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TheaterShopData::StaticClassInit() */

void TheaterShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"TheaterShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ab57f8,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TheaterShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ab7a28,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TheaterShopData::StaticGetClass() */

long * TheaterShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TheaterShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TheaterShopData::GetClass() const */

long * TheaterShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"TheaterShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TheaterShopData::TheaterShopData() */

void __thiscall TheaterShopData::TheaterShopData(TheaterShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06715d50;
  *(undefined ***)(this + 8) = &PTR__TheaterShopData_06715db8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* TheaterShopData::StaticNew() */

TheaterShopData * TheaterShopData::StaticNew(void)

{
  TheaterShopData *this;
  
  this = ::operator_new(0x30);
  TheaterShopData(this);
  return this;
}


/* TheaterShopData::~TheaterShopData() */

void __thiscall TheaterShopData::~TheaterShopData(TheaterShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_06715d50;
  *(undefined ***)(this + 8) = &PTR__TheaterShopData_06715db8;
  std::vector<TheaterShopItemData,std::allocator<TheaterShopItemData>>::~vector
            ((vector<TheaterShopItemData,std::allocator<TheaterShopItemData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TheaterShopData::~TheaterShopData() */

void __thiscall TheaterShopData::~TheaterShopData(TheaterShopData *this)

{
  ~TheaterShopData(this + -8);
  return;
}


/* TheaterShopData::~TheaterShopData() */

void __thiscall TheaterShopData::~TheaterShopData(TheaterShopData *this)

{
  ~TheaterShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TheaterShopData::~TheaterShopData() */

void __thiscall TheaterShopData::~TheaterShopData(TheaterShopData *this)

{
  ~TheaterShopData(this + -8);
  return;
}

