// Class: S2C_InstanceStatus


/* S2C_InstanceStatus::S2C_InstanceStatus() */

void __thiscall S2C_InstanceStatus::S2C_InstanceStatus(S2C_InstanceStatus *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0660a920;
  *(undefined ***)(this + 8) = &PTR__S2C_InstanceStatus_0660a988;
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x28));
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  return;
}


/* S2C_InstanceStatus::~S2C_InstanceStatus() */

void __thiscall S2C_InstanceStatus::~S2C_InstanceStatus(S2C_InstanceStatus *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a920;
  *(undefined ***)(this + 8) = &PTR__S2C_InstanceStatus_0660a988;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x28));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_InstanceStatus::~S2C_InstanceStatus() */

void __thiscall S2C_InstanceStatus::~S2C_InstanceStatus(S2C_InstanceStatus *this)

{
  ~S2C_InstanceStatus(this + -8);
  return;
}


/* S2C_InstanceStatus::~S2C_InstanceStatus() */

void __thiscall S2C_InstanceStatus::~S2C_InstanceStatus(S2C_InstanceStatus *this)

{
  ~S2C_InstanceStatus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_InstanceStatus::~S2C_InstanceStatus() */

void __thiscall S2C_InstanceStatus::~S2C_InstanceStatus(S2C_InstanceStatus *this)

{
  ~S2C_InstanceStatus(this + -8);
  return;
}


/* S2C_InstanceStatus::StaticNew() */

S2C_InstanceStatus * S2C_InstanceStatus::StaticNew(void)

{
  S2C_InstanceStatus *this;
  
  this = ::operator_new(0x80);
  S2C_InstanceStatus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_InstanceStatus::StaticClassInit() */

void S2C_InstanceStatus::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_InstanceStatus");
    (*pcVar2)(plVar1,asStack_10,FUN_0321efb4,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_InstanceStatus::StaticGetClass() */

long * S2C_InstanceStatus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_InstanceStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_InstanceStatus::GetClass() const */

long * S2C_InstanceStatus::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_InstanceStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

