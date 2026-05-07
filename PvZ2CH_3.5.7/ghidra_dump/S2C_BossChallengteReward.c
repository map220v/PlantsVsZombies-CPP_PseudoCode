// Class: S2C_BossChallengteReward


/* S2C_BossChallengteReward::S2C_BossChallengteReward() */

void __thiscall S2C_BossChallengteReward::S2C_BossChallengteReward(S2C_BossChallengteReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d3f0;
  *(undefined ***)(this + 8) = &PTR__S2C_BossChallengteReward_0660d458;
  S2C_BossChallengteRank::S2C_BossChallengteRank((S2C_BossChallengteRank *)(this + 0x18));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x40));
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


/* S2C_BossChallengteReward::~S2C_BossChallengteReward() */

void __thiscall S2C_BossChallengteReward::~S2C_BossChallengteReward(S2C_BossChallengteReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d3f0;
  *(undefined ***)(this + 8) = &PTR__S2C_BossChallengteReward_0660d458;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x40));
  S2C_BossChallengteRank::~S2C_BossChallengteRank((S2C_BossChallengteRank *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_BossChallengteReward::~S2C_BossChallengteReward() */

void __thiscall S2C_BossChallengteReward::~S2C_BossChallengteReward(S2C_BossChallengteReward *this)

{
  ~S2C_BossChallengteReward(this + -8);
  return;
}


/* S2C_BossChallengteReward::~S2C_BossChallengteReward() */

void __thiscall S2C_BossChallengteReward::~S2C_BossChallengteReward(S2C_BossChallengteReward *this)

{
  ~S2C_BossChallengteReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_BossChallengteReward::~S2C_BossChallengteReward() */

void __thiscall S2C_BossChallengteReward::~S2C_BossChallengteReward(S2C_BossChallengteReward *this)

{
  ~S2C_BossChallengteReward(this + -8);
  return;
}


/* S2C_BossChallengteReward::StaticNew() */

S2C_BossChallengteReward * S2C_BossChallengteReward::StaticNew(void)

{
  S2C_BossChallengteReward *this;
  
  this = ::operator_new(0xa0);
  S2C_BossChallengteReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_BossChallengteReward::StaticClassInit() */

void S2C_BossChallengteReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_BossChallengteReward");
    (*pcVar2)(plVar1,asStack_10,FUN_0322a3ac,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_BossChallengteReward::StaticGetClass() */

long * S2C_BossChallengteReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BossChallengteReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_BossChallengteReward::GetClass() const */

long * S2C_BossChallengteReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BossChallengteReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

