// Class: MarqueeViewData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarqueeViewData::StaticClassInit() */

void MarqueeViewData::StaticClassInit(void)

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
    std::string::string(asStack_10,"MarqueeViewItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04bfb670,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MarqueeViewData");
    (*pcVar3)(plVar2,asStack_10,FUN_04bfb868,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MarqueeViewData::StaticGetClass() */

long * MarqueeViewData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MarqueeViewData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MarqueeViewData::GetClass() const */

long * MarqueeViewData::GetClass(void)

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
  (*pcVar3)(plVar1,"MarqueeViewData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MarqueeViewData::MarqueeViewData() */

void __thiscall MarqueeViewData::MarqueeViewData(MarqueeViewData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0697edd0;
  *(undefined ***)(this + 8) = &PTR__MarqueeViewData_0697ee38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* MarqueeViewData::StaticNew() */

MarqueeViewData * MarqueeViewData::StaticNew(void)

{
  MarqueeViewData *this;
  
  this = ::operator_new(0x30);
  MarqueeViewData(this);
  return this;
}


/* MarqueeViewData::~MarqueeViewData() */

void __thiscall MarqueeViewData::~MarqueeViewData(MarqueeViewData *this)

{
  *(undefined ***)this = &PTR_GetClass_0697edd0;
  *(undefined ***)(this + 8) = &PTR__MarqueeViewData_0697ee38;
  std::vector<MarqueeViewItemData,std::allocator<MarqueeViewItemData>>::~vector
            ((vector<MarqueeViewItemData,std::allocator<MarqueeViewItemData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MarqueeViewData::~MarqueeViewData() */

void __thiscall MarqueeViewData::~MarqueeViewData(MarqueeViewData *this)

{
  ~MarqueeViewData(this + -8);
  return;
}


/* MarqueeViewData::~MarqueeViewData() */

void __thiscall MarqueeViewData::~MarqueeViewData(MarqueeViewData *this)

{
  ~MarqueeViewData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MarqueeViewData::~MarqueeViewData() */

void __thiscall MarqueeViewData::~MarqueeViewData(MarqueeViewData *this)

{
  ~MarqueeViewData(this + -8);
  return;
}

