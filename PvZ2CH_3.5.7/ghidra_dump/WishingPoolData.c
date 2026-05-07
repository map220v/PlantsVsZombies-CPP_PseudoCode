// Class: WishingPoolData


/* WishingPoolData::WishingPoolData() */

void __thiscall WishingPoolData::WishingPoolData(WishingPoolData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066343e0;
  *(undefined ***)(this + 8) = &PTR__WishingPoolData_06634448;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x78));
  Set8BytesTo0(this + 0x98);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  return;
}


/* WishingPoolData::~WishingPoolData() */

void __thiscall WishingPoolData::~WishingPoolData(WishingPoolData *this)

{
  *(undefined ***)this = &PTR_GetClass_066343e0;
  *(undefined ***)(this + 8) = &PTR__WishingPoolData_06634448;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::vector<WishingPoolGrandInfo,std::allocator<WishingPoolGrandInfo>>::~vector
            ((vector<WishingPoolGrandInfo,std::allocator<WishingPoolGrandInfo>> *)(this + 0x78));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x60));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x48));
  std::
  vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
  ::~vector((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
             *)(this + 0x30));
  std::
  vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
  ::~vector((vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to WishingPoolData::~WishingPoolData() */

void __thiscall WishingPoolData::~WishingPoolData(WishingPoolData *this)

{
  ~WishingPoolData(this + -8);
  return;
}


/* WishingPoolData::~WishingPoolData() */

void __thiscall WishingPoolData::~WishingPoolData(WishingPoolData *this)

{
  ~WishingPoolData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WishingPoolData::~WishingPoolData() */

void __thiscall WishingPoolData::~WishingPoolData(WishingPoolData *this)

{
  ~WishingPoolData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishingPoolData::StaticClassInit() */

void WishingPoolData::StaticClassInit(void)

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
    std::string::string(asStack_10,"WishingPoolGrandInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03453578,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WishingPoolBubbleInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03450d48,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WishingPoolData");
    (*pcVar3)(plVar2,asStack_10,FUN_03454600,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WishingPoolData::StaticGetClass() */

long * WishingPoolData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WishingPoolData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WishingPoolData::GetClass() const */

long * WishingPoolData::GetClass(void)

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
  (*pcVar3)(plVar1,"WishingPoolData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WishingPoolData::StaticNew() */

WishingPoolData * WishingPoolData::StaticNew(void)

{
  WishingPoolData *this;
  
  this = ::operator_new(0xb8);
  WishingPoolData(this);
  return this;
}


/* WishingPoolData::TEMPNAMEPLACEHOLDERVALUE(WishingPoolData const&) */

WishingPoolData * __thiscall
WishingPoolData::operator=(WishingPoolData *this,WishingPoolData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::
  vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
  ::operator=((vector<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>,std::allocator<std::vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>>>
               *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::
  vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
  ::operator=((vector<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>,std::allocator<std::vector<WishingPoolBubbleInfo,std::allocator<WishingPoolBubbleInfo>>>>
               *)(this + 0x30),(vector *)(param_1 + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::operator=((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
               *)(this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x60),(vector *)(param_1 + 0x60));
  std::vector<WishingPoolGrandInfo,std::allocator<WishingPoolGrandInfo>>::operator=
            ((vector<WishingPoolGrandInfo,std::allocator<WishingPoolGrandInfo>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = uVar1;
  thunk_FUN_05475e00(this + 0x98,param_1 + 0x98);
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0xa0),
             (vector *)(param_1 + 0xa0));
  return this;
}

