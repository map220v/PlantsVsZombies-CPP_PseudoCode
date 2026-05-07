// Class: DaveKitchenData


/* DaveKitchenData::DaveKitchenData() */

void __thiscall DaveKitchenData::DaveKitchenData(DaveKitchenData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06642060;
  *(undefined ***)(this + 8) = &PTR__DaveKitchenData_066420c8;
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
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveKitchenData::StaticClassInit() */

void DaveKitchenData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveKitchenTaskInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03496a08,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DaveKitchenData");
    (*pcVar3)(plVar2,asStack_10,FUN_03496c78,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveKitchenData::StaticGetClass() */

long * DaveKitchenData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveKitchenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveKitchenData::GetClass() const */

long * DaveKitchenData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveKitchenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveKitchenData::StaticNew() */

DaveKitchenData * DaveKitchenData::StaticNew(void)

{
  DaveKitchenData *this;
  
  this = ::operator_new(0x98);
  DaveKitchenData(this);
  return this;
}


/* DaveKitchenData::~DaveKitchenData() */

void __thiscall DaveKitchenData::~DaveKitchenData(DaveKitchenData *this)

{
  *(undefined ***)this = &PTR_GetClass_06642060;
  *(undefined ***)(this + 8) = &PTR__DaveKitchenData_066420c8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x78));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x60));
  std::vector<DaveKitchenTaskInfo,std::allocator<DaveKitchenTaskInfo>>::~vector
            ((vector<DaveKitchenTaskInfo,std::allocator<DaveKitchenTaskInfo>> *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to DaveKitchenData::~DaveKitchenData() */

void __thiscall DaveKitchenData::~DaveKitchenData(DaveKitchenData *this)

{
  ~DaveKitchenData(this + -8);
  return;
}


/* DaveKitchenData::~DaveKitchenData() */

void __thiscall DaveKitchenData::~DaveKitchenData(DaveKitchenData *this)

{
  ~DaveKitchenData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DaveKitchenData::~DaveKitchenData() */

void __thiscall DaveKitchenData::~DaveKitchenData(DaveKitchenData *this)

{
  ~DaveKitchenData(this + -8);
  return;
}

