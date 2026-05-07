// Class: S2C_PVP_TrainingFinishGems


/* S2C_PVP_TrainingFinishGems::S2C_PVP_TrainingFinishGems() */

void __thiscall
S2C_PVP_TrainingFinishGems::S2C_PVP_TrainingFinishGems(S2C_PVP_TrainingFinishGems *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b7d0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_TrainingFinishGems_0660b838;
  return;
}


/* S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems() */

void __thiscall
S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems(S2C_PVP_TrainingFinishGems *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b7d0;
  *(undefined ***)(this + 8) = &PTR__S2C_PVP_TrainingFinishGems_0660b838;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems() */

void __thiscall
S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems(S2C_PVP_TrainingFinishGems *this)

{
  ~S2C_PVP_TrainingFinishGems(this + -8);
  return;
}


/* S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems() */

void __thiscall
S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems(S2C_PVP_TrainingFinishGems *this)

{
  ~S2C_PVP_TrainingFinishGems(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems() */

void __thiscall
S2C_PVP_TrainingFinishGems::~S2C_PVP_TrainingFinishGems(S2C_PVP_TrainingFinishGems *this)

{
  ~S2C_PVP_TrainingFinishGems(this + -8);
  return;
}


/* S2C_PVP_TrainingFinishGems::StaticNew() */

S2C_PVP_TrainingFinishGems * S2C_PVP_TrainingFinishGems::StaticNew(void)

{
  S2C_PVP_TrainingFinishGems *this;
  
  this = ::operator_new(0x18);
  S2C_PVP_TrainingFinishGems(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PVP_TrainingFinishGems::StaticClassInit() */

void S2C_PVP_TrainingFinishGems::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PVP_TrainingFinishGems");
    (*pcVar2)(plVar1,asStack_10,FUN_03213234,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PVP_TrainingFinishGems::StaticGetClass() */

long * S2C_PVP_TrainingFinishGems::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_TrainingFinishGems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PVP_TrainingFinishGems::GetClass() const */

long * S2C_PVP_TrainingFinishGems::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PVP_TrainingFinishGems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

