// Class: S2C_ExplorerTeamStatus


/* S2C_ExplorerTeamStatus::S2C_ExplorerTeamStatus() */

void __thiscall S2C_ExplorerTeamStatus::S2C_ExplorerTeamStatus(S2C_ExplorerTeamStatus *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609960;
  *(undefined ***)(this + 8) = &PTR__S2C_ExplorerTeamStatus_066099c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<S2C_Explore_Team,std::allocator<S2C_Explore_Team>>::clear
            ((vector<S2C_Explore_Team,std::allocator<S2C_Explore_Team>> *)(this + 0x20));
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


/* S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus() */

void __thiscall S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus(S2C_ExplorerTeamStatus *this)

{
  *(undefined ***)this = &PTR_GetClass_06609960;
  *(undefined ***)(this + 8) = &PTR__S2C_ExplorerTeamStatus_066099c8;
  std::vector<S2C_Explore_Team,std::allocator<S2C_Explore_Team>>::~vector
            ((vector<S2C_Explore_Team,std::allocator<S2C_Explore_Team>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus() */

void __thiscall S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus(S2C_ExplorerTeamStatus *this)

{
  ~S2C_ExplorerTeamStatus(this + -8);
  return;
}


/* S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus() */

void __thiscall S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus(S2C_ExplorerTeamStatus *this)

{
  ~S2C_ExplorerTeamStatus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus() */

void __thiscall S2C_ExplorerTeamStatus::~S2C_ExplorerTeamStatus(S2C_ExplorerTeamStatus *this)

{
  ~S2C_ExplorerTeamStatus(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ExplorerTeamStatus::StaticClassInit() */

void S2C_ExplorerTeamStatus::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ExplorerTeamStatus");
    (*pcVar2)(plVar1,asStack_10,FUN_0322f0c0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ExplorerTeamStatus::StaticGetClass() */

long * S2C_ExplorerTeamStatus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ExplorerTeamStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ExplorerTeamStatus::GetClass() const */

long * S2C_ExplorerTeamStatus::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ExplorerTeamStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ExplorerTeamStatus::StaticNew() */

S2C_ExplorerTeamStatus * S2C_ExplorerTeamStatus::StaticNew(void)

{
  S2C_ExplorerTeamStatus *this;
  
  this = ::operator_new(0x38);
  S2C_ExplorerTeamStatus(this);
  return this;
}

