// Class: NoviceSevenDaysData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NoviceSevenDaysData::StaticClassInit() */

void NoviceSevenDaysData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NoviceSevenDaysIntegralReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a4197c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NoviceSevenDaysData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a41c68,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NoviceSevenDaysData::StaticGetClass() */

long * NoviceSevenDaysData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysData::GetClass() const */

long * NoviceSevenDaysData::GetClass(void)

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
  (*pcVar3)(plVar1,"NoviceSevenDaysData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NoviceSevenDaysData::NoviceSevenDaysData() */

void __thiscall NoviceSevenDaysData::NoviceSevenDaysData(NoviceSevenDaysData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06705bf0;
  *(undefined ***)(this + 8) = &PTR__NoviceSevenDaysData_06705c58;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  return;
}


/* NoviceSevenDaysData::StaticNew() */

NoviceSevenDaysData * NoviceSevenDaysData::StaticNew(void)

{
  NoviceSevenDaysData *this;
  
  this = ::operator_new(0x80);
  NoviceSevenDaysData(this);
  return this;
}


/* NoviceSevenDaysData::~NoviceSevenDaysData() */

void __thiscall NoviceSevenDaysData::~NoviceSevenDaysData(NoviceSevenDaysData *this)

{
  *(undefined ***)this = &PTR_GetClass_06705bf0;
  *(undefined ***)(this + 8) = &PTR__NoviceSevenDaysData_06705c58;
  std::vector<NoviceSevenDaysIntegralReward,std::allocator<NoviceSevenDaysIntegralReward>>::~vector
            ((vector<NoviceSevenDaysIntegralReward,std::allocator<NoviceSevenDaysIntegralReward>> *)
             (this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NoviceSevenDaysData::~NoviceSevenDaysData() */

void __thiscall NoviceSevenDaysData::~NoviceSevenDaysData(NoviceSevenDaysData *this)

{
  ~NoviceSevenDaysData(this + -8);
  return;
}


/* NoviceSevenDaysData::~NoviceSevenDaysData() */

void __thiscall NoviceSevenDaysData::~NoviceSevenDaysData(NoviceSevenDaysData *this)

{
  ~NoviceSevenDaysData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NoviceSevenDaysData::~NoviceSevenDaysData() */

void __thiscall NoviceSevenDaysData::~NoviceSevenDaysData(NoviceSevenDaysData *this)

{
  ~NoviceSevenDaysData(this + -8);
  return;
}

