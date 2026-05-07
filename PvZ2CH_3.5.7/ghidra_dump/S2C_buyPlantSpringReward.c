// Class: S2C_buyPlantSpringReward


/* S2C_buyPlantSpringReward::S2C_buyPlantSpringReward() */

void __thiscall S2C_buyPlantSpringReward::S2C_buyPlantSpringReward(S2C_buyPlantSpringReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b070;
  *(undefined ***)(this + 8) = &PTR__S2C_buyPlantSpringReward_0660b0d8;
  return;
}


/* S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward() */

void __thiscall S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward(S2C_buyPlantSpringReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b070;
  *(undefined ***)(this + 8) = &PTR__S2C_buyPlantSpringReward_0660b0d8;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward() */

void __thiscall S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward(S2C_buyPlantSpringReward *this)

{
  ~S2C_buyPlantSpringReward(this + -8);
  return;
}


/* S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward() */

void __thiscall S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward(S2C_buyPlantSpringReward *this)

{
  ~S2C_buyPlantSpringReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward() */

void __thiscall S2C_buyPlantSpringReward::~S2C_buyPlantSpringReward(S2C_buyPlantSpringReward *this)

{
  ~S2C_buyPlantSpringReward(this + -8);
  return;
}


/* S2C_buyPlantSpringReward::StaticNew() */

S2C_buyPlantSpringReward * S2C_buyPlantSpringReward::StaticNew(void)

{
  S2C_buyPlantSpringReward *this;
  
  this = ::operator_new(0x18);
  S2C_buyPlantSpringReward(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_buyPlantSpringReward::StaticClassInit() */

void S2C_buyPlantSpringReward::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_buyPlantSpringReward");
    (*pcVar2)(plVar1,asStack_10,FUN_03211a54,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_buyPlantSpringReward::StaticGetClass() */

long * S2C_buyPlantSpringReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_buyPlantSpringReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_buyPlantSpringReward::GetClass() const */

long * S2C_buyPlantSpringReward::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_buyPlantSpringReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

