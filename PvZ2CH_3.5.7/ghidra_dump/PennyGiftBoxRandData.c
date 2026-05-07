// Class: PennyGiftBoxRandData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyGiftBoxRandData::StaticClassInit() */

void PennyGiftBoxRandData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyGiftBoxRankItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e770b8,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PennyGiftBoxRandData");
    (*pcVar3)(plVar2,asStack_10,FUN_04e7f298,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyGiftBoxRandData::StaticGetClass() */

long * PennyGiftBoxRandData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxRandData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxRandData::GetClass() const */

long * PennyGiftBoxRandData::GetClass(void)

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
  (*pcVar3)(plVar1,"PennyGiftBoxRandData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyGiftBoxRandData::PennyGiftBoxRandData() */

void __thiscall PennyGiftBoxRandData::PennyGiftBoxRandData(PennyGiftBoxRandData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e7bb0;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxRandData_069e7c18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* PennyGiftBoxRandData::StaticNew() */

PennyGiftBoxRandData * PennyGiftBoxRandData::StaticNew(void)

{
  PennyGiftBoxRandData *this;
  
  this = ::operator_new(0x38);
  PennyGiftBoxRandData(this);
  return this;
}


/* PennyGiftBoxRandData::~PennyGiftBoxRandData() */

void __thiscall PennyGiftBoxRandData::~PennyGiftBoxRandData(PennyGiftBoxRandData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e7bb0;
  *(undefined ***)(this + 8) = &PTR__PennyGiftBoxRandData_069e7c18;
  std::vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>>::~vector
            ((vector<PennyGiftBoxRankItemData,std::allocator<PennyGiftBoxRankItemData>> *)
             (this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRandData::~PennyGiftBoxRandData() */

void __thiscall PennyGiftBoxRandData::~PennyGiftBoxRandData(PennyGiftBoxRandData *this)

{
  ~PennyGiftBoxRandData(this + -8);
  return;
}


/* PennyGiftBoxRandData::~PennyGiftBoxRandData() */

void __thiscall PennyGiftBoxRandData::~PennyGiftBoxRandData(PennyGiftBoxRandData *this)

{
  ~PennyGiftBoxRandData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PennyGiftBoxRandData::~PennyGiftBoxRandData() */

void __thiscall PennyGiftBoxRandData::~PennyGiftBoxRandData(PennyGiftBoxRandData *this)

{
  ~PennyGiftBoxRandData(this + -8);
  return;
}

