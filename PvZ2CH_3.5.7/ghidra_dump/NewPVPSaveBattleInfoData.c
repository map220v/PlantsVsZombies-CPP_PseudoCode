// Class: NewPVPSaveBattleInfoData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPSaveBattleInfoData::StaticClassInit() */

void NewPVPSaveBattleInfoData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPSaveBattleInfoData");
    (*pcVar2)(plVar1,asStack_10,FUN_034ca7fc,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPSaveBattleInfoData::StaticGetClass() */

long * NewPVPSaveBattleInfoData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPSaveBattleInfoData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSaveBattleInfoData::GetClass() const */

long * NewPVPSaveBattleInfoData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPSaveBattleInfoData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPSaveBattleInfoData::NewPVPSaveBattleInfoData() */

void __thiscall NewPVPSaveBattleInfoData::NewPVPSaveBattleInfoData(NewPVPSaveBattleInfoData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06647ca0;
  *(undefined ***)(this + 8) = &PTR__NewPVPSaveBattleInfoData_06647d08;
  PlantAttribute::PlantAttribute((PlantAttribute *)(this + 0x18));
  return;
}


/* NewPVPSaveBattleInfoData::StaticNew() */

NewPVPSaveBattleInfoData * NewPVPSaveBattleInfoData::StaticNew(void)

{
  NewPVPSaveBattleInfoData *this;
  
  this = ::operator_new(0x68);
  NewPVPSaveBattleInfoData(this);
  return this;
}


/* NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData() */

void __thiscall NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData(NewPVPSaveBattleInfoData *this)

{
  *(undefined ***)this = &PTR_GetClass_06647ca0;
  *(undefined ***)(this + 8) = &PTR__NewPVPSaveBattleInfoData_06647d08;
  NewPVPZombiePlayerInfo::~NewPVPZombiePlayerInfo((NewPVPZombiePlayerInfo *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData() */

void __thiscall NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData(NewPVPSaveBattleInfoData *this)

{
  ~NewPVPSaveBattleInfoData(this + -8);
  return;
}


/* NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData() */

void __thiscall NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData(NewPVPSaveBattleInfoData *this)

{
  ~NewPVPSaveBattleInfoData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData() */

void __thiscall NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData(NewPVPSaveBattleInfoData *this)

{
  ~NewPVPSaveBattleInfoData(this + -8);
  return;
}

