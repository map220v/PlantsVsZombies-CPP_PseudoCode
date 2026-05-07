// Class: NewRecallBankData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewRecallBankData::StaticClassInit() */

void NewRecallBankData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewRecallBankDayReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03a584ec,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewRecallBankData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a5891c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewRecallBankData::StaticGetClass() */

long * NewRecallBankData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallBankData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallBankData::GetClass() const */

long * NewRecallBankData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewRecallBankData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewRecallBankData::NewRecallBankData() */

void __thiscall NewRecallBankData::NewRecallBankData(NewRecallBankData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0670a030;
  *(undefined ***)(this + 8) = &PTR__NewRecallBankData_0670a098;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* NewRecallBankData::StaticNew() */

NewRecallBankData * NewRecallBankData::StaticNew(void)

{
  NewRecallBankData *this;
  
  this = ::operator_new(0x50);
  NewRecallBankData(this);
  return this;
}


/* NewRecallBankData::~NewRecallBankData() */

void __thiscall NewRecallBankData::~NewRecallBankData(NewRecallBankData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670a030;
  *(undefined ***)(this + 8) = &PTR__NewRecallBankData_0670a098;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<NewRecallBankDayReward,std::allocator<NewRecallBankDayReward>>::~vector
            ((vector<NewRecallBankDayReward,std::allocator<NewRecallBankDayReward>> *)(this + 0x18))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewRecallBankData::~NewRecallBankData() */

void __thiscall NewRecallBankData::~NewRecallBankData(NewRecallBankData *this)

{
  ~NewRecallBankData(this + -8);
  return;
}


/* NewRecallBankData::~NewRecallBankData() */

void __thiscall NewRecallBankData::~NewRecallBankData(NewRecallBankData *this)

{
  ~NewRecallBankData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewRecallBankData::~NewRecallBankData() */

void __thiscall NewRecallBankData::~NewRecallBankData(NewRecallBankData *this)

{
  ~NewRecallBankData(this + -8);
  return;
}


/* NewRecallBankData::TEMPNAMEPLACEHOLDERVALUE(NewRecallBankData const&) */

NewRecallBankData * __thiscall
NewRecallBankData::operator=(NewRecallBankData *this,NewRecallBankData *param_1)

{
  NewRecallBankData NVar1;
  
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<NewRecallBankDayReward,std::allocator<NewRecallBankDayReward>>::operator=
            ((vector<NewRecallBankDayReward,std::allocator<NewRecallBankDayReward>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x30),(vector *)(param_1 + 0x30));
  NVar1 = param_1[0x4c];
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  this[0x4c] = NVar1;
  return this;
}

