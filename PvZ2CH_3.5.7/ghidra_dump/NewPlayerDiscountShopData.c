// Class: NewPlayerDiscountShopData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPlayerDiscountShopData::StaticClassInit() */

void NewPlayerDiscountShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPlayerDiscountShopData");
    (*pcVar2)(plVar1,asStack_10,FUN_0344b744,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPlayerDiscountShopData::StaticGetClass() */

long * NewPlayerDiscountShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerDiscountShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerDiscountShopData::GetClass() const */

long * NewPlayerDiscountShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPlayerDiscountShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPlayerDiscountShopData::NewPlayerDiscountShopData() */

void __thiscall
NewPlayerDiscountShopData::NewPlayerDiscountShopData(NewPlayerDiscountShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06631cc0;
  *(undefined ***)(this + 8) = &PTR__NewPlayerDiscountShopData_06631d28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* NewPlayerDiscountShopData::StaticNew() */

NewPlayerDiscountShopData * NewPlayerDiscountShopData::StaticNew(void)

{
  NewPlayerDiscountShopData *this;
  
  this = ::operator_new(0x60);
  NewPlayerDiscountShopData(this);
  return this;
}


/* NewPlayerDiscountShopData::~NewPlayerDiscountShopData() */

void __thiscall
NewPlayerDiscountShopData::~NewPlayerDiscountShopData(NewPlayerDiscountShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_06631cc0;
  *(undefined ***)(this + 8) = &PTR__NewPlayerDiscountShopData_06631d28;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPlayerDiscountShopData::~NewPlayerDiscountShopData() */

void __thiscall
NewPlayerDiscountShopData::~NewPlayerDiscountShopData(NewPlayerDiscountShopData *this)

{
  ~NewPlayerDiscountShopData(this + -8);
  return;
}


/* NewPlayerDiscountShopData::~NewPlayerDiscountShopData() */

void __thiscall
NewPlayerDiscountShopData::~NewPlayerDiscountShopData(NewPlayerDiscountShopData *this)

{
  ~NewPlayerDiscountShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPlayerDiscountShopData::~NewPlayerDiscountShopData() */

void __thiscall
NewPlayerDiscountShopData::~NewPlayerDiscountShopData(NewPlayerDiscountShopData *this)

{
  ~NewPlayerDiscountShopData(this + -8);
  return;
}

