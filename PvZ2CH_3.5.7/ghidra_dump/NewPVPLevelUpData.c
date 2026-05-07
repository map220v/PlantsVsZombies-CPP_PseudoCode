// Class: NewPVPLevelUpData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPLevelUpData::StaticClassInit() */

void NewPVPLevelUpData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPLevelUpData");
    (*pcVar2)(plVar1,asStack_10,FUN_034ca960,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPLevelUpData::StaticGetClass() */

long * NewPVPLevelUpData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPLevelUpData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPLevelUpData::GetClass() const */

long * NewPVPLevelUpData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPLevelUpData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPLevelUpData::NewPVPLevelUpData() */

void __thiscall NewPVPLevelUpData::NewPVPLevelUpData(NewPVPLevelUpData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647d30;
  *(undefined ***)(this + 8) = &PTR__NewPVPLevelUpData_06647d98;
  PlantAttribute::PlantAttribute((PlantAttribute *)(this + 0x18));
  return;
}


/* NewPVPLevelUpData::StaticNew() */

NewPVPLevelUpData * NewPVPLevelUpData::StaticNew(void)

{
  NewPVPLevelUpData *this;
  
  this = ::operator_new(0x68);
  NewPVPLevelUpData(this);
  return this;
}


/* NewPVPLevelUpData::~NewPVPLevelUpData() */

void __thiscall NewPVPLevelUpData::~NewPVPLevelUpData(NewPVPLevelUpData *this)

{
  *(undefined ***)this = &PTR_GetClass_06647d30;
  *(undefined ***)(this + 8) = &PTR__NewPVPLevelUpData_06647d98;
  NewPVPZombiePlayerInfo::~NewPVPZombiePlayerInfo((NewPVPZombiePlayerInfo *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPLevelUpData::~NewPVPLevelUpData() */

void __thiscall NewPVPLevelUpData::~NewPVPLevelUpData(NewPVPLevelUpData *this)

{
  ~NewPVPLevelUpData(this + -8);
  return;
}


/* NewPVPLevelUpData::~NewPVPLevelUpData() */

void __thiscall NewPVPLevelUpData::~NewPVPLevelUpData(NewPVPLevelUpData *this)

{
  ~NewPVPLevelUpData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPLevelUpData::~NewPVPLevelUpData() */

void __thiscall NewPVPLevelUpData::~NewPVPLevelUpData(NewPVPLevelUpData *this)

{
  ~NewPVPLevelUpData(this + -8);
  return;
}

