// Class: Network_NewPVPShopData


/* Network_NewPVPShopData::Network_NewPVPShopData() */

void __thiscall Network_NewPVPShopData::Network_NewPVPShopData(Network_NewPVPShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06657520;
  *(undefined ***)(this + 8) = &PTR__Network_NewPVPShopData_06657588;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* Network_NewPVPShopData::~Network_NewPVPShopData() */

void __thiscall Network_NewPVPShopData::~Network_NewPVPShopData(Network_NewPVPShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_06657520;
  *(undefined ***)(this + 8) = &PTR__Network_NewPVPShopData_06657588;
  std::vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>>::~vector
            ((vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to Network_NewPVPShopData::~Network_NewPVPShopData() */

void __thiscall Network_NewPVPShopData::~Network_NewPVPShopData(Network_NewPVPShopData *this)

{
  ~Network_NewPVPShopData(this + -8);
  return;
}


/* Network_NewPVPShopData::~Network_NewPVPShopData() */

void __thiscall Network_NewPVPShopData::~Network_NewPVPShopData(Network_NewPVPShopData *this)

{
  ~Network_NewPVPShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Network_NewPVPShopData::~Network_NewPVPShopData() */

void __thiscall Network_NewPVPShopData::~Network_NewPVPShopData(Network_NewPVPShopData *this)

{
  ~Network_NewPVPShopData(this + -8);
  return;
}


/* Network_NewPVPShopData::Network_NewPVPShopData(Network_NewPVPShopData const&) */

void __thiscall
Network_NewPVPShopData::Network_NewPVPShopData
          (Network_NewPVPShopData *this,Network_NewPVPShopData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_06657520;
  *(undefined ***)(this + 8) = &PTR__Network_NewPVPShopData_06657588;
  std::vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>>::vector
            ((vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Network_NewPVPShopData::StaticClassInit() */

void Network_NewPVPShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"Network_NewPVPShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_035548b4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"Network_NewPVPShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_03555db0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Network_NewPVPShopData::StaticGetClass() */

long * Network_NewPVPShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Network_NewPVPShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_NewPVPShopData::GetClass() const */

long * Network_NewPVPShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"Network_NewPVPShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Network_NewPVPShopData::StaticNew() */

Network_NewPVPShopData * Network_NewPVPShopData::StaticNew(void)

{
  Network_NewPVPShopData *this;
  
  this = ::operator_new(0x30);
  Network_NewPVPShopData(this);
  return this;
}


/* Network_NewPVPShopData::TEMPNAMEPLACEHOLDERVALUE(Network_NewPVPShopData const&) */

Network_NewPVPShopData * __thiscall
Network_NewPVPShopData::operator=(Network_NewPVPShopData *this,Network_NewPVPShopData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  std::vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>>::operator=
            ((vector<Network_NewPVPShopItemData,std::allocator<Network_NewPVPShopItemData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  return this;
}

