// Class: PVZ1ModeAchievementRewardDataMsg


/* PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg() */

void __thiscall
PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg
          (PVZ1ModeAchievementRewardDataMsg *this)

{
  *(undefined ***)this = &PTR_GetClass_069c7ee0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementRewardDataMsg_069c7f48;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg() */

void __thiscall
PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg
          (PVZ1ModeAchievementRewardDataMsg *this)

{
  ~PVZ1ModeAchievementRewardDataMsg(this + -8);
  return;
}


/* PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg() */

void __thiscall
PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg
          (PVZ1ModeAchievementRewardDataMsg *this)

{
  ~PVZ1ModeAchievementRewardDataMsg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg() */

void __thiscall
PVZ1ModeAchievementRewardDataMsg::~PVZ1ModeAchievementRewardDataMsg
          (PVZ1ModeAchievementRewardDataMsg *this)

{
  ~PVZ1ModeAchievementRewardDataMsg(this + -8);
  return;
}


/* PVZ1ModeAchievementRewardDataMsg::PVZ1ModeAchievementRewardDataMsg() */

void __thiscall
PVZ1ModeAchievementRewardDataMsg::PVZ1ModeAchievementRewardDataMsg
          (PVZ1ModeAchievementRewardDataMsg *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c7ee0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementRewardDataMsg_069c7f48;
  Set8BytesTo0(this + 0x18);
  return;
}


/* PVZ1ModeAchievementRewardDataMsg::StaticNew() */

PVZ1ModeAchievementRewardDataMsg * PVZ1ModeAchievementRewardDataMsg::StaticNew(void)

{
  PVZ1ModeAchievementRewardDataMsg *this;
  
  this = ::operator_new(0x20);
  PVZ1ModeAchievementRewardDataMsg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementRewardDataMsg::StaticClassInit() */

void PVZ1ModeAchievementRewardDataMsg::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeAchievementRewardDataMsg");
    (*pcVar2)(plVar1,asStack_10,FUN_04dd9e20,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementRewardDataMsg::StaticGetClass() */

long * PVZ1ModeAchievementRewardDataMsg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementRewardDataMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementRewardDataMsg::GetClass() const */

long * PVZ1ModeAchievementRewardDataMsg::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementRewardDataMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

