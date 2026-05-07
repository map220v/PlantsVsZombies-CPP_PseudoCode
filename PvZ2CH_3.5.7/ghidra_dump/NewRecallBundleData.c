// Class: NewRecallBundleData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBundleData::StaticClassInit() */

void NewRecallBundleData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewRecallBundleReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a5863c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewRecallBundleData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a58c84,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRecallBundleData::StaticGetClass() */

long * NewRecallBundleData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallBundleData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallBundleData::GetClass() const */

long * NewRecallBundleData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallBundleData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallBundleData::NewRecallBundleData() */

void __thiscall NewRecallBundleData::NewRecallBundleData(NewRecallBundleData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0670a0c0;
  *(undefined ***)(this + 8) = &PTR__NewRecallBundleData_0670a128;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewRecallBundleData::StaticNew() */

NewRecallBundleData * NewRecallBundleData::StaticNew(void)

{
  NewRecallBundleData *this;
  
  this = ::operator_new(0x30);
  NewRecallBundleData(this);
  return this;
}


/* NewRecallBundleData::~NewRecallBundleData() */

void __thiscall NewRecallBundleData::~NewRecallBundleData(NewRecallBundleData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670a0c0;
  *(undefined ***)(this + 8) = &PTR__NewRecallBundleData_0670a128;
  std::vector<NewRecallBundleReward,std::allocator<NewRecallBundleReward>>::~vector
            ((vector<NewRecallBundleReward,std::allocator<NewRecallBundleReward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewRecallBundleData::~NewRecallBundleData() */

void __thiscall NewRecallBundleData::~NewRecallBundleData(NewRecallBundleData *this)

{
  ~NewRecallBundleData(this + -8);
  return;
}


/* NewRecallBundleData::~NewRecallBundleData() */

void __thiscall NewRecallBundleData::~NewRecallBundleData(NewRecallBundleData *this)

{
  ~NewRecallBundleData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRecallBundleData::~NewRecallBundleData() */

void __thiscall NewRecallBundleData::~NewRecallBundleData(NewRecallBundleData *this)

{
  ~NewRecallBundleData(this + -8);
  return;
}

