// Class: NewPVPSyncPlayerData


/* NewPVPSyncPlayerData::~NewPVPSyncPlayerData() */

void __thiscall NewPVPSyncPlayerData::~NewPVPSyncPlayerData(NewPVPSyncPlayerData *this)

{
  *(undefined ***)this = &PTR_GetClass_06647c10;
  *(undefined ***)(this + 8) = &PTR__NewPVPSyncPlayerData_06647c78;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPSyncPlayerData::~NewPVPSyncPlayerData() */

void __thiscall NewPVPSyncPlayerData::~NewPVPSyncPlayerData(NewPVPSyncPlayerData *this)

{
  ~NewPVPSyncPlayerData(this + -8);
  return;
}


/* NewPVPSyncPlayerData::~NewPVPSyncPlayerData() */

void __thiscall NewPVPSyncPlayerData::~NewPVPSyncPlayerData(NewPVPSyncPlayerData *this)

{
  ~NewPVPSyncPlayerData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPSyncPlayerData::~NewPVPSyncPlayerData() */

void __thiscall NewPVPSyncPlayerData::~NewPVPSyncPlayerData(NewPVPSyncPlayerData *this)

{
  ~NewPVPSyncPlayerData(this + -8);
  return;
}


/* NewPVPSyncPlayerData::NewPVPSyncPlayerData() */

void __thiscall NewPVPSyncPlayerData::NewPVPSyncPlayerData(NewPVPSyncPlayerData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647c10;
  *(undefined ***)(this + 8) = &PTR__NewPVPSyncPlayerData_06647c78;
  return;
}


/* NewPVPSyncPlayerData::StaticNew() */

NewPVPSyncPlayerData * NewPVPSyncPlayerData::StaticNew(void)

{
  NewPVPSyncPlayerData *this;
  
  this = ::operator_new(0x18);
  NewPVPSyncPlayerData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSyncPlayerData::StaticClassInit() */

void NewPVPSyncPlayerData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPSyncPlayerData");
    (*pcVar2)(plVar1,asStack_10,FUN_034bacd0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSyncPlayerData::StaticGetClass() */

long * NewPVPSyncPlayerData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPSyncPlayerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSyncPlayerData::GetClass() const */

long * NewPVPSyncPlayerData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPSyncPlayerData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSyncPlayerData::TEMPNAMEPLACEHOLDERVALUE(NewPVPSyncPlayerData const&) */

NewPVPSyncPlayerData * __thiscall
NewPVPSyncPlayerData::operator=(NewPVPSyncPlayerData *this,NewPVPSyncPlayerData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}

