// Class: NewYearGoodsData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewYearGoodsData::StaticClassInit() */

void NewYearGoodsData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewYearGoods");
    (*pcVar3)(plVar2,asStack_10,FUN_039a81ec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewYearGoodsData");
    (*pcVar3)(plVar2,asStack_10,FUN_039a8458,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewYearGoodsData::StaticGetClass() */

long * NewYearGoodsData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewYearGoodsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearGoodsData::GetClass() const */

long * NewYearGoodsData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewYearGoodsData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewYearGoodsData::NewYearGoodsData() */

void __thiscall NewYearGoodsData::NewYearGoodsData(NewYearGoodsData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066e4420;
  *(undefined ***)(this + 8) = &PTR__NewYearGoodsData_066e4488;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewYearGoodsData::StaticNew() */

NewYearGoodsData * NewYearGoodsData::StaticNew(void)

{
  NewYearGoodsData *this;
  
  this = ::operator_new(0x30);
  NewYearGoodsData(this);
  return this;
}


/* NewYearGoodsData::~NewYearGoodsData() */

void __thiscall NewYearGoodsData::~NewYearGoodsData(NewYearGoodsData *this)

{
  *(undefined ***)this = &PTR_GetClass_066e4420;
  *(undefined ***)(this + 8) = &PTR__NewYearGoodsData_066e4488;
  std::vector<NewYearGoods,std::allocator<NewYearGoods>>::~vector
            ((vector<NewYearGoods,std::allocator<NewYearGoods>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewYearGoodsData::~NewYearGoodsData() */

void __thiscall NewYearGoodsData::~NewYearGoodsData(NewYearGoodsData *this)

{
  ~NewYearGoodsData(this + -8);
  return;
}


/* NewYearGoodsData::~NewYearGoodsData() */

void __thiscall NewYearGoodsData::~NewYearGoodsData(NewYearGoodsData *this)

{
  ~NewYearGoodsData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewYearGoodsData::~NewYearGoodsData() */

void __thiscall NewYearGoodsData::~NewYearGoodsData(NewYearGoodsData *this)

{
  ~NewYearGoodsData(this + -8);
  return;
}

