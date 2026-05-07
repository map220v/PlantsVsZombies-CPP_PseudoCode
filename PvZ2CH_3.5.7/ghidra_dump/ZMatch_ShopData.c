// Class: ZMatch_ShopData


/* ZMatch_ShopData::ZMatch_ShopData() */

void __thiscall ZMatch_ShopData::ZMatch_ShopData(ZMatch_ShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660e0e0;
  *(undefined ***)(this + 8) = &PTR__ZMatch_ShopData_0660e148;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* ZMatch_ShopData::~ZMatch_ShopData() */

void __thiscall ZMatch_ShopData::~ZMatch_ShopData(ZMatch_ShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660e0e0;
  *(undefined ***)(this + 8) = &PTR__ZMatch_ShopData_0660e148;
  std::vector<ZMatchShopData,std::allocator<ZMatchShopData>>::~vector
            ((vector<ZMatchShopData,std::allocator<ZMatchShopData>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ZMatch_ShopData::~ZMatch_ShopData() */

void __thiscall ZMatch_ShopData::~ZMatch_ShopData(ZMatch_ShopData *this)

{
  ~ZMatch_ShopData(this + -8);
  return;
}


/* ZMatch_ShopData::~ZMatch_ShopData() */

void __thiscall ZMatch_ShopData::~ZMatch_ShopData(ZMatch_ShopData *this)

{
  ~ZMatch_ShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZMatch_ShopData::~ZMatch_ShopData() */

void __thiscall ZMatch_ShopData::~ZMatch_ShopData(ZMatch_ShopData *this)

{
  ~ZMatch_ShopData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZMatch_ShopData::StaticClassInit() */

void ZMatch_ShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZMatchShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03203f70,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZMatch_ShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_0323a5fc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZMatch_ShopData::StaticGetClass() */

long * ZMatch_ShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZMatch_ShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZMatch_ShopData::GetClass() const */

long * ZMatch_ShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"ZMatch_ShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZMatch_ShopData::StaticNew() */

ZMatch_ShopData * ZMatch_ShopData::StaticNew(void)

{
  ZMatch_ShopData *this;
  
  this = ::operator_new(0x58);
  ZMatch_ShopData(this);
  return this;
}


/* ZMatch_ShopData::ZMatch_ShopData(ZMatch_ShopData const&) */

void __thiscall ZMatch_ShopData::ZMatch_ShopData(ZMatch_ShopData *this,ZMatch_ShopData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0660e0e0;
  *(undefined ***)(this + 8) = &PTR__ZMatch_ShopData_0660e148;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<ZMatchShopData,std::allocator<ZMatchShopData>>::vector
            ((vector<ZMatchShopData,std::allocator<ZMatchShopData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  return;
}


/* ZMatch_ShopData::TEMPNAMEPLACEHOLDERVALUE(ZMatch_ShopData const&) */

ZMatch_ShopData * __thiscall
ZMatch_ShopData::operator=(ZMatch_ShopData *this,ZMatch_ShopData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<ZMatchShopData,std::allocator<ZMatchShopData>>::operator=
            ((vector<ZMatchShopData,std::allocator<ZMatchShopData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  return this;
}

