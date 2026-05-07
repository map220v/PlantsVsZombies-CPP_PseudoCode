// Class: S2C_SalesStates


/* S2C_SalesStates::S2C_SalesStates() */

void __thiscall S2C_SalesStates::S2C_SalesStates(S2C_SalesStates *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b340;
  *(undefined ***)(this + 8) = &PTR__S2C_SalesStates_0660b3a8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x30));
  S2C_SalesLevelUpInfo::S2C_SalesLevelUpInfo((S2C_SalesLevelUpInfo *)(this + 0x80));
  return;
}


/* S2C_SalesStates::~S2C_SalesStates() */

void __thiscall S2C_SalesStates::~S2C_SalesStates(S2C_SalesStates *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b340;
  *(undefined ***)(this + 8) = &PTR__S2C_SalesStates_0660b3a8;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_SalesStates::~S2C_SalesStates() */

void __thiscall S2C_SalesStates::~S2C_SalesStates(S2C_SalesStates *this)

{
  ~S2C_SalesStates(this + -8);
  return;
}


/* S2C_SalesStates::~S2C_SalesStates() */

void __thiscall S2C_SalesStates::~S2C_SalesStates(S2C_SalesStates *this)

{
  ~S2C_SalesStates(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_SalesStates::~S2C_SalesStates() */

void __thiscall S2C_SalesStates::~S2C_SalesStates(S2C_SalesStates *this)

{
  ~S2C_SalesStates(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_SalesStates::StaticClassInit() */

void S2C_SalesStates::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_SalesLevelUpInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031ffc7c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_SalesStates");
    (*pcVar3)(plVar2,asStack_10,FUN_03226b5c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_SalesStates::StaticGetClass() */

long * S2C_SalesStates::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SalesStates",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SalesStates::GetClass() const */

long * S2C_SalesStates::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SalesStates",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SalesStates::StaticNew() */

S2C_SalesStates * S2C_SalesStates::StaticNew(void)

{
  S2C_SalesStates *this;
  
  this = ::operator_new(0x90);
  S2C_SalesStates(this);
  return this;
}

