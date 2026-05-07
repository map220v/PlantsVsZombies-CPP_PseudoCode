// Class: S2C_BossChallengeLevelEndData


/* S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData() */

void __thiscall
S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData(S2C_BossChallengeLevelEndData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d2d0;
  *(undefined ***)(this + 8) = &PTR__S2C_BossChallengeLevelEndData_0660d338;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData() */

void __thiscall
S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData(S2C_BossChallengeLevelEndData *this)

{
  ~S2C_BossChallengeLevelEndData(this + -8);
  return;
}


/* S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData() */

void __thiscall
S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData(S2C_BossChallengeLevelEndData *this)

{
  ~S2C_BossChallengeLevelEndData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData() */

void __thiscall
S2C_BossChallengeLevelEndData::~S2C_BossChallengeLevelEndData(S2C_BossChallengeLevelEndData *this)

{
  ~S2C_BossChallengeLevelEndData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_BossChallengeLevelEndData::StaticClassInit() */

void S2C_BossChallengeLevelEndData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_BossChallengeLevelEndData");
    (*pcVar2)(plVar1,asStack_10,FUN_03219bb8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_BossChallengeLevelEndData::StaticGetClass() */

long * S2C_BossChallengeLevelEndData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BossChallengeLevelEndData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_BossChallengeLevelEndData::GetClass() const */

long * S2C_BossChallengeLevelEndData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_BossChallengeLevelEndData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_BossChallengeLevelEndData::S2C_BossChallengeLevelEndData() */

void __thiscall
S2C_BossChallengeLevelEndData::S2C_BossChallengeLevelEndData(S2C_BossChallengeLevelEndData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660d2d0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)(this + 8) = &PTR__S2C_BossChallengeLevelEndData_0660d338;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* S2C_BossChallengeLevelEndData::StaticNew() */

S2C_BossChallengeLevelEndData * S2C_BossChallengeLevelEndData::StaticNew(void)

{
  S2C_BossChallengeLevelEndData *this;
  
  this = ::operator_new(0x28);
  S2C_BossChallengeLevelEndData(this);
  return this;
}

