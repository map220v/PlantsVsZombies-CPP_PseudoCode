// Class: S2C_PvpShopData


/* S2C_PvpShopData::S2C_PvpShopData() */

void __thiscall S2C_PvpShopData::S2C_PvpShopData(S2C_PvpShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c1f0;
  *(undefined ***)(this + 8) = &PTR__S2C_PvpShopData_0660c258;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_PvpShopData::~S2C_PvpShopData() */

void __thiscall S2C_PvpShopData::~S2C_PvpShopData(S2C_PvpShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c1f0;
  *(undefined ***)(this + 8) = &PTR__S2C_PvpShopData_0660c258;
  std::vector<PVPCUPData,std::allocator<PVPCUPData>>::~vector
            ((vector<PVPCUPData,std::allocator<PVPCUPData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PvpShopData::~S2C_PvpShopData() */

void __thiscall S2C_PvpShopData::~S2C_PvpShopData(S2C_PvpShopData *this)

{
  ~S2C_PvpShopData(this + -8);
  return;
}


/* S2C_PvpShopData::~S2C_PvpShopData() */

void __thiscall S2C_PvpShopData::~S2C_PvpShopData(S2C_PvpShopData *this)

{
  ~S2C_PvpShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PvpShopData::~S2C_PvpShopData() */

void __thiscall S2C_PvpShopData::~S2C_PvpShopData(S2C_PvpShopData *this)

{
  ~S2C_PvpShopData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PvpShopData::StaticClassInit() */

void S2C_PvpShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVPCUPData");
    (*pcVar3)(plVar2,asStack_10,FUN_03201594,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PvpShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03234c98,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PvpShopData::StaticGetClass() */

long * S2C_PvpShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvpShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvpShopData::GetClass() const */

long * S2C_PvpShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PvpShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PvpShopData::StaticNew() */

S2C_PvpShopData * S2C_PvpShopData::StaticNew(void)

{
  S2C_PvpShopData *this;
  
  this = ::operator_new(0x38);
  S2C_PvpShopData(this);
  return this;
}

