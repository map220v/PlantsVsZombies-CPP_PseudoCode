// Class: ConsumeAndReceiveExtraData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumeAndReceiveExtraData::StaticClassInit() */

void ConsumeAndReceiveExtraData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConsumeAndReceiveRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_039bbe2c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConsumeAndReceiveExtraData");
    (*pcVar3)(plVar2,asStack_10,FUN_039bcb84,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumeAndReceiveExtraData::StaticGetClass() */

long * ConsumeAndReceiveExtraData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ConsumeAndReceiveExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConsumeAndReceiveExtraData::GetClass() const */

long * ConsumeAndReceiveExtraData::GetClass(void)

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
  (*pcVar3)(plVar1,"ConsumeAndReceiveExtraData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConsumeAndReceiveExtraData::ConsumeAndReceiveExtraData() */

void __thiscall
ConsumeAndReceiveExtraData::ConsumeAndReceiveExtraData(ConsumeAndReceiveExtraData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066ea3d0;
  *(undefined ***)(this + 8) = &PTR__ConsumeAndReceiveExtraData_066ea438;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* ConsumeAndReceiveExtraData::StaticNew() */

ConsumeAndReceiveExtraData * ConsumeAndReceiveExtraData::StaticNew(void)

{
  ConsumeAndReceiveExtraData *this;
  
  this = ::operator_new(0x30);
  ConsumeAndReceiveExtraData(this);
  return this;
}


/* ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData() */

void __thiscall
ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(ConsumeAndReceiveExtraData *this)

{
  *(undefined ***)this = &PTR_GetClass_066ea3d0;
  *(undefined ***)(this + 8) = &PTR__ConsumeAndReceiveExtraData_066ea438;
  std::vector<ConsumeAndReceiveRewardData,std::allocator<ConsumeAndReceiveRewardData>>::~vector
            ((vector<ConsumeAndReceiveRewardData,std::allocator<ConsumeAndReceiveRewardData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData() */

void __thiscall
ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(ConsumeAndReceiveExtraData *this)

{
  ~ConsumeAndReceiveExtraData(this + -8);
  return;
}


/* ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData() */

void __thiscall
ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(ConsumeAndReceiveExtraData *this)

{
  ~ConsumeAndReceiveExtraData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData() */

void __thiscall
ConsumeAndReceiveExtraData::~ConsumeAndReceiveExtraData(ConsumeAndReceiveExtraData *this)

{
  ~ConsumeAndReceiveExtraData(this + -8);
  return;
}

