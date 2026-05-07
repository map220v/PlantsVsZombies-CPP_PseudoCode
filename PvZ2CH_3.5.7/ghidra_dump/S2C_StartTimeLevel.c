// Class: S2C_StartTimeLevel


/* S2C_StartTimeLevel::~S2C_StartTimeLevel() */

void __thiscall S2C_StartTimeLevel::~S2C_StartTimeLevel(S2C_StartTimeLevel *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a410;
  *(undefined ***)(this + 8) = &PTR__S2C_StartTimeLevel_0660a478;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_StartTimeLevel::~S2C_StartTimeLevel() */

void __thiscall S2C_StartTimeLevel::~S2C_StartTimeLevel(S2C_StartTimeLevel *this)

{
  ~S2C_StartTimeLevel(this + -8);
  return;
}


/* S2C_StartTimeLevel::~S2C_StartTimeLevel() */

void __thiscall S2C_StartTimeLevel::~S2C_StartTimeLevel(S2C_StartTimeLevel *this)

{
  ~S2C_StartTimeLevel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_StartTimeLevel::~S2C_StartTimeLevel() */

void __thiscall S2C_StartTimeLevel::~S2C_StartTimeLevel(S2C_StartTimeLevel *this)

{
  ~S2C_StartTimeLevel(this + -8);
  return;
}


/* S2C_StartTimeLevel::S2C_StartTimeLevel() */

void __thiscall S2C_StartTimeLevel::S2C_StartTimeLevel(S2C_StartTimeLevel *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660a410;
  *(undefined ***)(this + 8) = &PTR__S2C_StartTimeLevel_0660a478;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x14));
  return;
}


/* S2C_StartTimeLevel::StaticNew() */

S2C_StartTimeLevel * S2C_StartTimeLevel::StaticNew(void)

{
  S2C_StartTimeLevel *this;
  
  this = ::operator_new(0x20);
  S2C_StartTimeLevel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_StartTimeLevel::StaticClassInit() */

void S2C_StartTimeLevel::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_StartTimeLevel");
    (*pcVar2)(plVar1,asStack_10,FUN_03223cc4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_StartTimeLevel::StaticGetClass() */

long * S2C_StartTimeLevel::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_StartTimeLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_StartTimeLevel::GetClass() const */

long * S2C_StartTimeLevel::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_StartTimeLevel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

