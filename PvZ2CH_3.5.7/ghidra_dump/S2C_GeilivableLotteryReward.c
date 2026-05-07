// Class: S2C_GeilivableLotteryReward


/* S2C_GeilivableLotteryReward::S2C_GeilivableLotteryReward() */

void __thiscall
S2C_GeilivableLotteryReward::S2C_GeilivableLotteryReward(S2C_GeilivableLotteryReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660ae30;
  *(undefined ***)(this + 8) = &PTR__S2C_GeilivableLotteryReward_0660ae98;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  TGAScrollbannerData::TGAScrollbannerData((TGAScrollbannerData *)(this + 0x30));
  Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)(this + 0x40));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x50));
  return;
}


/* S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward() */

void __thiscall
S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward(S2C_GeilivableLotteryReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ae30;
  *(undefined ***)(this + 8) = &PTR__S2C_GeilivableLotteryReward_0660ae98;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x50));
  Sexy::PACommand::~PACommand((PACommand *)(this + 0x30));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward() */

void __thiscall
S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward(S2C_GeilivableLotteryReward *this)

{
  ~S2C_GeilivableLotteryReward(this + -8);
  return;
}


/* S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward() */

void __thiscall
S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward(S2C_GeilivableLotteryReward *this)

{
  ~S2C_GeilivableLotteryReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward() */

void __thiscall
S2C_GeilivableLotteryReward::~S2C_GeilivableLotteryReward(S2C_GeilivableLotteryReward *this)

{
  ~S2C_GeilivableLotteryReward(this + -8);
  return;
}


/* S2C_GeilivableLotteryReward::StaticNew() */

S2C_GeilivableLotteryReward * S2C_GeilivableLotteryReward::StaticNew(void)

{
  S2C_GeilivableLotteryReward *this;
  
  this = ::operator_new(0xa0);
  S2C_GeilivableLotteryReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_GeilivableLotteryReward::StaticClassInit() */

void S2C_GeilivableLotteryReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlayerAddressInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03205b1c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LotteryBonus");
    (*pcVar3)(plVar2,asStack_10,FUN_031ff500,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_GeilivableLotteryReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03226284,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_GeilivableLotteryReward::StaticGetClass() */

long * S2C_GeilivableLotteryReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GeilivableLotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_GeilivableLotteryReward::GetClass() const */

long * S2C_GeilivableLotteryReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GeilivableLotteryReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

