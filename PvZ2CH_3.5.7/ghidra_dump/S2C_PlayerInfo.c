// Class: S2C_PlayerInfo


/* S2C_PlayerInfo::S2C_PlayerInfo() */

void __thiscall S2C_PlayerInfo::S2C_PlayerInfo(S2C_PlayerInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_06609330;
  *(undefined ***)(this + 8) = &PTR__S2C_PlayerInfo_06609398;
  FUN_05476574(this + 0x18);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


/* S2C_PlayerInfo::~S2C_PlayerInfo() */

void __thiscall S2C_PlayerInfo::~S2C_PlayerInfo(S2C_PlayerInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06609330;
  *(undefined ***)(this + 8) = &PTR__S2C_PlayerInfo_06609398;
  FUN_05476c50(this + 0x18);
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PlayerInfo::~S2C_PlayerInfo() */

void __thiscall S2C_PlayerInfo::~S2C_PlayerInfo(S2C_PlayerInfo *this)

{
  ~S2C_PlayerInfo(this + -8);
  return;
}


/* S2C_PlayerInfo::~S2C_PlayerInfo() */

void __thiscall S2C_PlayerInfo::~S2C_PlayerInfo(S2C_PlayerInfo *this)

{
  ~S2C_PlayerInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PlayerInfo::~S2C_PlayerInfo() */

void __thiscall S2C_PlayerInfo::~S2C_PlayerInfo(S2C_PlayerInfo *this)

{
  ~S2C_PlayerInfo(this + -8);
  return;
}


/* S2C_PlayerInfo::S2C_PlayerInfo(S2C_PlayerInfo const&) */

void __thiscall S2C_PlayerInfo::S2C_PlayerInfo(S2C_PlayerInfo *this,S2C_PlayerInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_06609330;
  *(undefined ***)(this + 8) = &PTR__S2C_PlayerInfo_06609398;
  FUN_05477b24(this + 0x18,param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x38) = uVar4;
  *(undefined4 *)(this + 0x3c) = uVar5;
  *(undefined4 *)(this + 0x40) = uVar6;
  *(undefined4 *)(this + 0x44) = uVar7;
  return;
}


/* S2C_PlayerInfo::StaticNew() */

S2C_PlayerInfo * S2C_PlayerInfo::StaticNew(void)

{
  S2C_PlayerInfo *this;
  
  this = ::operator_new(0x50);
  S2C_PlayerInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PlayerInfo::StaticClassInit() */

void S2C_PlayerInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PlayerInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0320ae18,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PlayerInfo::StaticGetClass() */

long * S2C_PlayerInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlayerInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PlayerInfo::GetClass() const */

long * S2C_PlayerInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlayerInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

