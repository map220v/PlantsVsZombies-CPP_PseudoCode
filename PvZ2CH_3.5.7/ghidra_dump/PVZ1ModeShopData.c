// Class: PVZ1ModeShopData


/* PVZ1ModeShopData::PVZ1ModeShopData() */

void __thiscall PVZ1ModeShopData::PVZ1ModeShopData(PVZ1ModeShopData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c58f0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeShopData_069c5958;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PVZ1ModeShopData::~PVZ1ModeShopData() */

void __thiscall PVZ1ModeShopData::~PVZ1ModeShopData(PVZ1ModeShopData *this)

{
  *(undefined ***)this = &PTR_GetClass_069c58f0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeShopData_069c5958;
  std::vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>>::~vector
            ((vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeShopData::~PVZ1ModeShopData() */

void __thiscall PVZ1ModeShopData::~PVZ1ModeShopData(PVZ1ModeShopData *this)

{
  ~PVZ1ModeShopData(this + -8);
  return;
}


/* PVZ1ModeShopData::~PVZ1ModeShopData() */

void __thiscall PVZ1ModeShopData::~PVZ1ModeShopData(PVZ1ModeShopData *this)

{
  ~PVZ1ModeShopData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeShopData::~PVZ1ModeShopData() */

void __thiscall PVZ1ModeShopData::~PVZ1ModeShopData(PVZ1ModeShopData *this)

{
  ~PVZ1ModeShopData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeShopData::StaticClassInit() */

void PVZ1ModeShopData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeShopItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04dce774,0x24,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1ModeShopData");
    (*pcVar3)(plVar2,asStack_10,FUN_04dd0914,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeShopData::StaticGetClass() */

long * PVZ1ModeShopData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeShopData::GetClass() const */

long * PVZ1ModeShopData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeShopData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeShopData::StaticNew() */

PVZ1ModeShopData * PVZ1ModeShopData::StaticNew(void)

{
  PVZ1ModeShopData *this;
  
  this = ::operator_new(0x38);
  PVZ1ModeShopData(this);
  return this;
}


/* PVZ1ModeShopData::PVZ1ModeShopData(PVZ1ModeShopData const&) */

void __thiscall PVZ1ModeShopData::PVZ1ModeShopData(PVZ1ModeShopData *this,PVZ1ModeShopData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_069c58f0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeShopData_069c5958;
  std::vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>>::vector
            ((vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* PVZ1ModeShopData::TEMPNAMEPLACEHOLDERVALUE(PVZ1ModeShopData const&) */

PVZ1ModeShopData * __thiscall
PVZ1ModeShopData::operator=(PVZ1ModeShopData *this,PVZ1ModeShopData *param_1)

{
  undefined4 uVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>>::operator=
            ((vector<PVZ1ModeShopItemData,std::allocator<PVZ1ModeShopItemData>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = uVar1;
  return this;
}

