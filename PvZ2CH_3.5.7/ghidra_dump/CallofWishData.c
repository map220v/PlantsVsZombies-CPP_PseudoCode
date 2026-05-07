// Class: CallofWishData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallofWishData::StaticClassInit() */

void CallofWishData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CallofWishReward");
    (*pcVar3)(plVar2,asStack_10,FUN_039d6704,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CallofWishData");
    (*pcVar3)(plVar2,asStack_10,FUN_039d696c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CallofWishData::StaticGetClass() */

long * CallofWishData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CallofWishData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CallofWishData::GetClass() const */

long * CallofWishData::GetClass(void)

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
  (*pcVar3)(plVar1,"CallofWishData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CallofWishData::CallofWishData() */

void __thiscall CallofWishData::CallofWishData(CallofWishData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066f1720;
  *(undefined ***)(this + 8) = &PTR__CallofWishData_066f1788;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  return;
}


/* CallofWishData::StaticNew() */

CallofWishData * CallofWishData::StaticNew(void)

{
  CallofWishData *this;
  
  this = ::operator_new(0xd8);
  CallofWishData(this);
  return this;
}


/* CallofWishData::~CallofWishData() */

void __thiscall CallofWishData::~CallofWishData(CallofWishData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f1720;
  *(undefined ***)(this + 8) = &PTR__CallofWishData_066f1788;
  std::vector<CallofWishReward,std::allocator<CallofWishReward>>::~vector
            ((vector<CallofWishReward,std::allocator<CallofWishReward>> *)(this + 0xc0));
  std::vector<CallofWishReward,std::allocator<CallofWishReward>>::~vector
            ((vector<CallofWishReward,std::allocator<CallofWishReward>> *)(this + 0xa0));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x80));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x38));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CallofWishData::~CallofWishData() */

void __thiscall CallofWishData::~CallofWishData(CallofWishData *this)

{
  ~CallofWishData(this + -8);
  return;
}


/* CallofWishData::~CallofWishData() */

void __thiscall CallofWishData::~CallofWishData(CallofWishData *this)

{
  ~CallofWishData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CallofWishData::~CallofWishData() */

void __thiscall CallofWishData::~CallofWishData(CallofWishData *this)

{
  ~CallofWishData(this + -8);
  return;
}

