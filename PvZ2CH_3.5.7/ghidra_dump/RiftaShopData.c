// Class: RiftaShopData


/* RiftaShopData::RiftaShopData() */

void __thiscall RiftaShopData::RiftaShopData(RiftaShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069b93d0;
  *(undefined ***)(this + 8) = &PTR__RiftaShopData_069b9438;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* RiftaShopData::~RiftaShopData() */

void __thiscall RiftaShopData::~RiftaShopData(RiftaShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_069b93d0;
  *(undefined ***)(this + 8) = &PTR__RiftaShopData_069b9438;
  std::vector<RiftaShopItemData,std::allocator<RiftaShopItemData>>::~vector
            ((vector<RiftaShopItemData,std::allocator<RiftaShopItemData>> *)(this + 0x30));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to RiftaShopData::~RiftaShopData() */

void __thiscall RiftaShopData::~RiftaShopData(RiftaShopData *this)

{
  ~RiftaShopData(this + -8);
  return;
}


/* RiftaShopData::~RiftaShopData() */

void __thiscall RiftaShopData::~RiftaShopData(RiftaShopData *this)

{
  ~RiftaShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RiftaShopData::~RiftaShopData() */

void __thiscall RiftaShopData::~RiftaShopData(RiftaShopData *this)

{
  ~RiftaShopData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftaShopData::StaticClassInit() */

void RiftaShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftaShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d844c4,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RiftaShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04d86a14,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftaShopData::StaticGetClass() */

long * RiftaShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftaShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftaShopData::GetClass() const */

long * RiftaShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftaShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftaShopData::StaticNew() */

RiftaShopData * RiftaShopData::StaticNew(void)

{
  RiftaShopData *this;
  
  this = ::operator_new(0x58);
  RiftaShopData(this);
  return this;
}


/* RiftaShopData::RiftaShopData(RiftaShopData const&) */

void __thiscall RiftaShopData::RiftaShopData(RiftaShopData *this,RiftaShopData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069b93d0;
  *(undefined ***)(this + 8) = &PTR__RiftaShopData_069b9438;
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<RiftaShopItemData,std::allocator<RiftaShopItemData>>::vector
            ((vector<RiftaShopItemData,std::allocator<RiftaShopItemData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  return;
}


/* RiftaShopData::TEMPNAMEPLACEHOLDERVALUE(RiftaShopData const&) */

RiftaShopData * __thiscall RiftaShopData::operator=(RiftaShopData *this,RiftaShopData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<RiftaShopItemData,std::allocator<RiftaShopItemData>>::operator=
            ((vector<RiftaShopItemData,std::allocator<RiftaShopItemData>> *)(this + 0x30),
             (vector *)(param_1 + 0x30));
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar2;
  return this;
}

