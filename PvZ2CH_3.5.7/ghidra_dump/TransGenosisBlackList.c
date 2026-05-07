// Class: TransGenosisBlackList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TransGenosisBlackList::StaticClassInit() */

void TransGenosisBlackList::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"TransGenosisBlackList");
    (*pcVar2)(plVar1,asStack_10,FUN_04bc7ad4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TransGenosisBlackList::StaticGetClass() */

long * TransGenosisBlackList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"TransGenosisBlackList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TransGenosisBlackList::GetClass() const */

long * TransGenosisBlackList::GetClass(void)

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
  (*pcVar3)(plVar1,"TransGenosisBlackList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TransGenosisBlackList::~TransGenosisBlackList() */

void __thiscall TransGenosisBlackList::~TransGenosisBlackList(TransGenosisBlackList *this)

{
  *(undefined ***)this = &PTR_GetClass_0697bc50;
  *(undefined ***)(this + 8) = &PTR__TransGenosisBlackList_0697bcb8;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to TransGenosisBlackList::~TransGenosisBlackList() */

void __thiscall TransGenosisBlackList::~TransGenosisBlackList(TransGenosisBlackList *this)

{
  ~TransGenosisBlackList(this + -8);
  return;
}


/* TransGenosisBlackList::~TransGenosisBlackList() */

void __thiscall TransGenosisBlackList::~TransGenosisBlackList(TransGenosisBlackList *this)

{
  ~TransGenosisBlackList(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to TransGenosisBlackList::~TransGenosisBlackList() */

void __thiscall TransGenosisBlackList::~TransGenosisBlackList(TransGenosisBlackList *this)

{
  ~TransGenosisBlackList(this + -8);
  return;
}


/* TransGenosisBlackList::TransGenosisBlackList() */

void __thiscall TransGenosisBlackList::TransGenosisBlackList(TransGenosisBlackList *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0697bc50;
  *(undefined ***)(this + 8) = &PTR__TransGenosisBlackList_0697bcb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* TransGenosisBlackList::StaticNew() */

TransGenosisBlackList * TransGenosisBlackList::StaticNew(void)

{
  TransGenosisBlackList *this;
  
  this = ::operator_new(0x30);
  TransGenosisBlackList(this);
  return this;
}

