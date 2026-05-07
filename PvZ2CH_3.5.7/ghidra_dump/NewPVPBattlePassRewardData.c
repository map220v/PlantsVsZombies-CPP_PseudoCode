// Class: NewPVPBattlePassRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassRewardData::StaticClassInit() */

void NewPVPBattlePassRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPBattlePassRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_0354136c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPBattlePassRewardData::StaticGetClass() */

long * NewPVPBattlePassRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassRewardData::GetClass() const */

long * NewPVPBattlePassRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassRewardData::NewPVPBattlePassRewardData() */

void __thiscall
NewPVPBattlePassRewardData::NewPVPBattlePassRewardData(NewPVPBattlePassRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06654100;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassRewardData_06654168;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* NewPVPBattlePassRewardData::StaticNew() */

NewPVPBattlePassRewardData * NewPVPBattlePassRewardData::StaticNew(void)

{
  NewPVPBattlePassRewardData *this;
  
  this = ::operator_new(0x30);
  NewPVPBattlePassRewardData(this);
  return this;
}


/* NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData() */

void __thiscall
NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData(NewPVPBattlePassRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_06654100;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassRewardData_06654168;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData() */

void __thiscall
NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData(NewPVPBattlePassRewardData *this)

{
  ~NewPVPBattlePassRewardData(this + -8);
  return;
}


/* NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData() */

void __thiscall
NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData(NewPVPBattlePassRewardData *this)

{
  ~NewPVPBattlePassRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData() */

void __thiscall
NewPVPBattlePassRewardData::~NewPVPBattlePassRewardData(NewPVPBattlePassRewardData *this)

{
  ~NewPVPBattlePassRewardData(this + -8);
  return;
}

