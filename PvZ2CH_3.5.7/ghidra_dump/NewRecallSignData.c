// Class: NewRecallSignData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallSignData::StaticClassInit() */

void NewRecallSignData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewRecallSignReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a53f78,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewRecallSignData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a5a3e0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRecallSignData::StaticGetClass() */

long * NewRecallSignData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallSignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallSignData::GetClass() const */

long * NewRecallSignData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallSignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallSignData::NewRecallSignData() */

void __thiscall NewRecallSignData::NewRecallSignData(NewRecallSignData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06709fa0;
  *(undefined ***)(this + 8) = &PTR__NewRecallSignData_0670a008;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewRecallSignData::StaticNew() */

NewRecallSignData * NewRecallSignData::StaticNew(void)

{
  NewRecallSignData *this;
  
  this = ::operator_new(0x38);
  NewRecallSignData(this);
  return this;
}


/* NewRecallSignData::~NewRecallSignData() */

void __thiscall NewRecallSignData::~NewRecallSignData(NewRecallSignData *this)

{
  *(undefined ***)this = &PTR_GetClass_06709fa0;
  *(undefined ***)(this + 8) = &PTR__NewRecallSignData_0670a008;
  std::
  vector<std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>,std::allocator<std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>>>
  ::~vector((vector<std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>,std::allocator<std::vector<NewRecallSignReward,std::allocator<NewRecallSignReward>>>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewRecallSignData::~NewRecallSignData() */

void __thiscall NewRecallSignData::~NewRecallSignData(NewRecallSignData *this)

{
  ~NewRecallSignData(this + -8);
  return;
}


/* NewRecallSignData::~NewRecallSignData() */

void __thiscall NewRecallSignData::~NewRecallSignData(NewRecallSignData *this)

{
  ~NewRecallSignData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRecallSignData::~NewRecallSignData() */

void __thiscall NewRecallSignData::~NewRecallSignData(NewRecallSignData *this)

{
  ~NewRecallSignData(this + -8);
  return;
}

