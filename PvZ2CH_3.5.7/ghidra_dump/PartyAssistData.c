// Class: PartyAssistData


/* PartyAssistData::PartyAssistData() */

void __thiscall PartyAssistData::PartyAssistData(PartyAssistData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069eff70;
  *(undefined ***)(this + 8) = &PTR__PartyAssistData_069effd8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x34) = 1;
  return;
}


/* PartyAssistData::~PartyAssistData() */

void __thiscall PartyAssistData::~PartyAssistData(PartyAssistData *this)

{
  *(undefined ***)this = &PTR_GetClass_069eff70;
  *(undefined ***)(this + 8) = &PTR__PartyAssistData_069effd8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PartyAssistData::~PartyAssistData() */

void __thiscall PartyAssistData::~PartyAssistData(PartyAssistData *this)

{
  ~PartyAssistData(this + -8);
  return;
}


/* PartyAssistData::~PartyAssistData() */

void __thiscall PartyAssistData::~PartyAssistData(PartyAssistData *this)

{
  ~PartyAssistData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PartyAssistData::~PartyAssistData() */

void __thiscall PartyAssistData::~PartyAssistData(PartyAssistData *this)

{
  ~PartyAssistData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PartyAssistData::StaticClassInit() */

void PartyAssistData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PartyAssistData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ea7060,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PartyAssistData::StaticGetClass() */

long * PartyAssistData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PartyAssistData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyAssistData::GetClass() const */

long * PartyAssistData::GetClass(void)

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
  (*pcVar3)(plVar1,"PartyAssistData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PartyAssistData::StaticNew() */

PartyAssistData * PartyAssistData::StaticNew(void)

{
  PartyAssistData *this;
  
  this = ::operator_new(0x38);
  PartyAssistData(this);
  return this;
}

