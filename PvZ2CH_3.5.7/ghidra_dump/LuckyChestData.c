// Class: LuckyChestData


/* LuckyChestData::LuckyChestData() */

void __thiscall LuckyChestData::LuckyChestData(LuckyChestData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f2e80;
  *(undefined ***)(this + 8) = &PTR__LuckyChestData_069f2ee8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<LuckyChestTaskInfo,std::allocator<LuckyChestTaskInfo>>::clear
            ((vector<LuckyChestTaskInfo,std::allocator<LuckyChestTaskInfo>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (LuckyChestData)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}


/* LuckyChestData::~LuckyChestData() */

void __thiscall LuckyChestData::~LuckyChestData(LuckyChestData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f2e80;
  *(undefined ***)(this + 8) = &PTR__LuckyChestData_069f2ee8;
  std::vector<LuckyChestTaskInfo,std::allocator<LuckyChestTaskInfo>>::~vector
            ((vector<LuckyChestTaskInfo,std::allocator<LuckyChestTaskInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to LuckyChestData::~LuckyChestData() */

void __thiscall LuckyChestData::~LuckyChestData(LuckyChestData *this)

{
  ~LuckyChestData(this + -8);
  return;
}


/* LuckyChestData::~LuckyChestData() */

void __thiscall LuckyChestData::~LuckyChestData(LuckyChestData *this)

{
  ~LuckyChestData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LuckyChestData::~LuckyChestData() */

void __thiscall LuckyChestData::~LuckyChestData(LuckyChestData *this)

{
  ~LuckyChestData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LuckyChestData::StaticClassInit() */

void LuckyChestData::StaticClassInit(void)

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
    std::string::string(asStack_10,"LuckyChestTaskInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04eafa00,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LuckyChestData");
    (*pcVar3)(plVar2,asStack_10,FUN_04eb49e0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LuckyChestData::StaticGetClass() */

long * LuckyChestData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckyChestData::GetClass() const */

long * LuckyChestData::GetClass(void)

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
  (*pcVar3)(plVar1,"LuckyChestData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LuckyChestData::StaticNew() */

LuckyChestData * LuckyChestData::StaticNew(void)

{
  LuckyChestData *this;
  
  this = ::operator_new(0x40);
  LuckyChestData(this);
  return this;
}

