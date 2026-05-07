// Class: PartyTaskData


/* PartyTaskData::PartyTaskData() */

void __thiscall PartyTaskData::PartyTaskData(PartyTaskData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069f1340;
  *(undefined ***)(this + 8) = &PTR__PartyTaskData_069f13a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PartyTaskData::~PartyTaskData() */

void __thiscall PartyTaskData::~PartyTaskData(PartyTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_069f1340;
  *(undefined ***)(this + 8) = &PTR__PartyTaskData_069f13a8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PartyTaskData::~PartyTaskData() */

void __thiscall PartyTaskData::~PartyTaskData(PartyTaskData *this)

{
  ~PartyTaskData(this + -8);
  return;
}


/* PartyTaskData::~PartyTaskData() */

void __thiscall PartyTaskData::~PartyTaskData(PartyTaskData *this)

{
  ~PartyTaskData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PartyTaskData::~PartyTaskData() */

void __thiscall PartyTaskData::~PartyTaskData(PartyTaskData *this)

{
  ~PartyTaskData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyTaskData::StaticClassInit() */

void PartyTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PartyTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ea72ac,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyTaskData::StaticGetClass() */

long * PartyTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PartyTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyTaskData::GetClass() const */

long * PartyTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"PartyTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyTaskData::StaticNew() */

PartyTaskData * PartyTaskData::StaticNew(void)

{
  PartyTaskData *this;
  
  this = ::operator_new(0x30);
  PartyTaskData(this);
  return this;
}

