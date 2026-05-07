// Class: FutureGiftBoxData


/* FutureGiftBoxData::FutureGiftBoxData() */

void __thiscall FutureGiftBoxData::FutureGiftBoxData(FutureGiftBoxData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e5810;
  *(undefined ***)(this + 8) = &PTR__FutureGiftBoxData_069e5878;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<GiftBundle,std::allocator<GiftBundle>>::clear
            ((vector<GiftBundle,std::allocator<GiftBundle>> *)(this + 0x20));
  std::vector<ShopBundle,std::allocator<ShopBundle>>::clear
            ((vector<ShopBundle,std::allocator<ShopBundle>> *)(this + 0x38));
  return;
}


/* FutureGiftBoxData::FutureGiftBoxData(FutureGiftBoxData const&) */

void __thiscall
FutureGiftBoxData::FutureGiftBoxData(FutureGiftBoxData *this,FutureGiftBoxData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_069e5810;
  *(undefined ***)(this + 8) = &PTR__FutureGiftBoxData_069e5878;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar2;
  std::vector<GiftBundle,std::allocator<GiftBundle>>::vector
            ((vector<GiftBundle,std::allocator<GiftBundle>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::vector<ShopBundle,std::allocator<ShopBundle>>::vector
            ((vector<ShopBundle,std::allocator<ShopBundle>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  return;
}


/* FutureGiftBoxData::~FutureGiftBoxData() */

void __thiscall FutureGiftBoxData::~FutureGiftBoxData(FutureGiftBoxData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e5810;
  *(undefined ***)(this + 8) = &PTR__FutureGiftBoxData_069e5878;
  std::vector<ShopBundle,std::allocator<ShopBundle>>::~vector
            ((vector<ShopBundle,std::allocator<ShopBundle>> *)(this + 0x38));
  std::vector<GiftBundle,std::allocator<GiftBundle>>::~vector
            ((vector<GiftBundle,std::allocator<GiftBundle>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to FutureGiftBoxData::~FutureGiftBoxData() */

void __thiscall FutureGiftBoxData::~FutureGiftBoxData(FutureGiftBoxData *this)

{
  ~FutureGiftBoxData(this + -8);
  return;
}


/* FutureGiftBoxData::~FutureGiftBoxData() */

void __thiscall FutureGiftBoxData::~FutureGiftBoxData(FutureGiftBoxData *this)

{
  ~FutureGiftBoxData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FutureGiftBoxData::~FutureGiftBoxData() */

void __thiscall FutureGiftBoxData::~FutureGiftBoxData(FutureGiftBoxData *this)

{
  ~FutureGiftBoxData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FutureGiftBoxData::StaticClassInit() */

void FutureGiftBoxData::StaticClassInit(void)

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
    std::string::string(asStack_10,"FutureGiftBoxData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e743a0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FutureGiftBoxData::StaticGetClass() */

long * FutureGiftBoxData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"FutureGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureGiftBoxData::GetClass() const */

long * FutureGiftBoxData::GetClass(void)

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
  (*pcVar3)(plVar1,"FutureGiftBoxData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* FutureGiftBoxData::StaticNew() */

FutureGiftBoxData * FutureGiftBoxData::StaticNew(void)

{
  FutureGiftBoxData *this;
  
  this = ::operator_new(0x50);
  FutureGiftBoxData(this);
  return this;
}


/* FutureGiftBoxData::TEMPNAMEPLACEHOLDERVALUE(FutureGiftBoxData const&) */

FutureGiftBoxData * __thiscall
FutureGiftBoxData::operator=(FutureGiftBoxData *this,FutureGiftBoxData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  std::vector<GiftBundle,std::allocator<GiftBundle>>::operator=
            ((vector<GiftBundle,std::allocator<GiftBundle>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  std::vector<ShopBundle,std::allocator<ShopBundle>>::operator=
            ((vector<ShopBundle,std::allocator<ShopBundle>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  return this;
}

