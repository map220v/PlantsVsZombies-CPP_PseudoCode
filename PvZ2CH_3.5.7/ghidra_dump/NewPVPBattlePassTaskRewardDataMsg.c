// Class: NewPVPBattlePassTaskRewardDataMsg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPBattlePassTaskRewardDataMsg::StaticClassInit() */

void NewPVPBattlePassTaskRewardDataMsg::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPBattlePassTaskRewardDataMsg");
    (*pcVar2)(plVar1,asStack_10,FUN_03541540,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPBattlePassTaskRewardDataMsg::StaticGetClass() */

long * NewPVPBattlePassTaskRewardDataMsg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassTaskRewardDataMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassTaskRewardDataMsg::GetClass() const */

long * NewPVPBattlePassTaskRewardDataMsg::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPBattlePassTaskRewardDataMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPBattlePassTaskRewardDataMsg::NewPVPBattlePassTaskRewardDataMsg() */

void __thiscall
NewPVPBattlePassTaskRewardDataMsg::NewPVPBattlePassTaskRewardDataMsg
          (NewPVPBattlePassTaskRewardDataMsg *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06655410;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassTaskRewardDataMsg_06655478;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* NewPVPBattlePassTaskRewardDataMsg::StaticNew() */

NewPVPBattlePassTaskRewardDataMsg * NewPVPBattlePassTaskRewardDataMsg::StaticNew(void)

{
  NewPVPBattlePassTaskRewardDataMsg *this;
  
  this = ::operator_new(0x38);
  NewPVPBattlePassTaskRewardDataMsg(this);
  return this;
}


/* NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg() */

void __thiscall
NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg
          (NewPVPBattlePassTaskRewardDataMsg *this)

{
  *(undefined ***)this = &PTR_GetClass_06655410;
  *(undefined ***)(this + 8) = &PTR__NewPVPBattlePassTaskRewardDataMsg_06655478;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg() */

void __thiscall
NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg
          (NewPVPBattlePassTaskRewardDataMsg *this)

{
  ~NewPVPBattlePassTaskRewardDataMsg(this + -8);
  return;
}


/* NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg() */

void __thiscall
NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg
          (NewPVPBattlePassTaskRewardDataMsg *this)

{
  ~NewPVPBattlePassTaskRewardDataMsg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg() */

void __thiscall
NewPVPBattlePassTaskRewardDataMsg::~NewPVPBattlePassTaskRewardDataMsg
          (NewPVPBattlePassTaskRewardDataMsg *this)

{
  ~NewPVPBattlePassTaskRewardDataMsg(this + -8);
  return;
}

