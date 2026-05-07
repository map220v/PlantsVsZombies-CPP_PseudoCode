// Class: CustomVotingData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomVotingData::StaticClassInit() */

void CustomVotingData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomVotingItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a47d84,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomVotingData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a49934,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomVotingData::StaticGetClass() */

long * CustomVotingData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CustomVotingData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomVotingData::GetClass() const */

long * CustomVotingData::GetClass(void)

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
  (*pcVar3)(plVar1,"CustomVotingData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomVotingData::CustomVotingData() */

void __thiscall CustomVotingData::CustomVotingData(CustomVotingData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06707360;
  *(undefined ***)(this + 8) = &PTR__CustomVotingData_067073c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* CustomVotingData::StaticNew() */

CustomVotingData * CustomVotingData::StaticNew(void)

{
  CustomVotingData *this;
  
  this = ::operator_new(0x50);
  CustomVotingData(this);
  return this;
}


/* CustomVotingData::~CustomVotingData() */

void __thiscall CustomVotingData::~CustomVotingData(CustomVotingData *this)

{
  *(undefined ***)this = &PTR_GetClass_06707360;
  *(undefined ***)(this + 8) = &PTR__CustomVotingData_067073c8;
  std::vector<CustomVotingItemData,std::allocator<CustomVotingItemData>>::~vector
            ((vector<CustomVotingItemData,std::allocator<CustomVotingItemData>> *)(this + 0x30));
  std::vector<CustomVotingItemData,std::allocator<CustomVotingItemData>>::~vector
            ((vector<CustomVotingItemData,std::allocator<CustomVotingItemData>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomVotingData::~CustomVotingData() */

void __thiscall CustomVotingData::~CustomVotingData(CustomVotingData *this)

{
  ~CustomVotingData(this + -8);
  return;
}


/* CustomVotingData::~CustomVotingData() */

void __thiscall CustomVotingData::~CustomVotingData(CustomVotingData *this)

{
  ~CustomVotingData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomVotingData::~CustomVotingData() */

void __thiscall CustomVotingData::~CustomVotingData(CustomVotingData *this)

{
  ~CustomVotingData(this + -8);
  return;
}

