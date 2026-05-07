// Class: DangerRoomSpecialOfferExtraData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferExtraData::StaticClassInit() */

void DangerRoomSpecialOfferExtraData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomSpecialOfferExtraData");
    (*pcVar2)(plVar1,asStack_10,FUN_04db9194,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferExtraData::StaticGetClass() */

long * DangerRoomSpecialOfferExtraData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferExtraData::GetClass() const */

long * DangerRoomSpecialOfferExtraData::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomSpecialOfferExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData() */

void __thiscall
DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c09b0;
  *(undefined ***)(this + 8) = &PTR__DangerRoomSpecialOfferExtraData_069c0a18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  clear((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
         *)(this + 0x18));
  return;
}


/* DangerRoomSpecialOfferExtraData::StaticNew() */

DangerRoomSpecialOfferExtraData * DangerRoomSpecialOfferExtraData::StaticNew(void)

{
  DangerRoomSpecialOfferExtraData *this;
  
  this = ::operator_new(0x30);
  DangerRoomSpecialOfferExtraData(this);
  return this;
}


/* DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData() */

void __thiscall
DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this)

{
  *(undefined ***)this = &PTR_GetClass_069c09b0;
  *(undefined ***)(this + 8) = &PTR__DangerRoomSpecialOfferExtraData_069c0a18;
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  ~vector((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
           *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData() */

void __thiscall
DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this)

{
  ~DangerRoomSpecialOfferExtraData(this + -8);
  return;
}


/* DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData() */

void __thiscall
DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this)

{
  ~DangerRoomSpecialOfferExtraData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData() */

void __thiscall
DangerRoomSpecialOfferExtraData::~DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this)

{
  ~DangerRoomSpecialOfferExtraData(this + -8);
  return;
}


/* DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData(DangerRoomSpecialOfferExtraData
   const&) */

void __thiscall
DangerRoomSpecialOfferExtraData::DangerRoomSpecialOfferExtraData
          (DangerRoomSpecialOfferExtraData *this,DangerRoomSpecialOfferExtraData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069c09b0;
  *(undefined ***)(this + 8) = &PTR__DangerRoomSpecialOfferExtraData_069c0a18;
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  vector((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
          *)(this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* DangerRoomSpecialOfferExtraData::TEMPNAMEPLACEHOLDERVALUE(DangerRoomSpecialOfferExtraData const&)
    */

DangerRoomSpecialOfferExtraData * __thiscall
DangerRoomSpecialOfferExtraData::operator=
          (DangerRoomSpecialOfferExtraData *this,DangerRoomSpecialOfferExtraData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::
  vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>::
  operator=((vector<DangerRoomSpecialOfferExtraItemData,std::allocator<DangerRoomSpecialOfferExtraItemData>>
             *)(this + 0x18),(vector *)(param_1 + 0x18));
  return this;
}

