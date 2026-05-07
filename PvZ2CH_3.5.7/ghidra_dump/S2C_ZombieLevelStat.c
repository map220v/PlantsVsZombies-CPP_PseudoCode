// Class: S2C_ZombieLevelStat


/* S2C_ZombieLevelStat::~S2C_ZombieLevelStat() */

void __thiscall S2C_ZombieLevelStat::~S2C_ZombieLevelStat(S2C_ZombieLevelStat *this)

{
  *(undefined ***)this = &PTR_GetClass_0660dbd0;
  *(undefined ***)(this + 8) = &PTR__S2C_ZombieLevelStat_0660dc38;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ZombieLevelStat::~S2C_ZombieLevelStat() */

void __thiscall S2C_ZombieLevelStat::~S2C_ZombieLevelStat(S2C_ZombieLevelStat *this)

{
  ~S2C_ZombieLevelStat(this + -8);
  return;
}


/* S2C_ZombieLevelStat::~S2C_ZombieLevelStat() */

void __thiscall S2C_ZombieLevelStat::~S2C_ZombieLevelStat(S2C_ZombieLevelStat *this)

{
  ~S2C_ZombieLevelStat(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ZombieLevelStat::~S2C_ZombieLevelStat() */

void __thiscall S2C_ZombieLevelStat::~S2C_ZombieLevelStat(S2C_ZombieLevelStat *this)

{
  ~S2C_ZombieLevelStat(this + -8);
  return;
}


/* S2C_ZombieLevelStat::S2C_ZombieLevelStat() */

void __thiscall S2C_ZombieLevelStat::S2C_ZombieLevelStat(S2C_ZombieLevelStat *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660dbd0;
  *(undefined ***)(this + 8) = &PTR__S2C_ZombieLevelStat_0660dc38;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


/* S2C_ZombieLevelStat::StaticNew() */

S2C_ZombieLevelStat * S2C_ZombieLevelStat::StaticNew(void)

{
  S2C_ZombieLevelStat *this;
  
  this = ::operator_new(0x20);
  S2C_ZombieLevelStat(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ZombieLevelStat::StaticClassInit() */

void S2C_ZombieLevelStat::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ZombieLevelStat");
    (*pcVar2)(plVar1,asStack_10,FUN_0321baf8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ZombieLevelStat::StaticGetClass() */

long * S2C_ZombieLevelStat::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ZombieLevelStat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ZombieLevelStat::GetClass() const */

long * S2C_ZombieLevelStat::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ZombieLevelStat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ZombieLevelStat::S2C_ZombieLevelStat(S2C_ZombieLevelStat&&) */

void __thiscall
S2C_ZombieLevelStat::S2C_ZombieLevelStat(S2C_ZombieLevelStat *this,S2C_ZombieLevelStat *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR_GetClass_0660dbd0;
  *(undefined ***)(this + 8) = &PTR__S2C_ZombieLevelStat_0660dc38;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  return;
}

