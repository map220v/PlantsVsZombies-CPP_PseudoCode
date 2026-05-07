// Class: S2C_PlaybackData


/* S2C_PlaybackData::S2C_PlaybackData() */

void __thiscall S2C_PlaybackData::S2C_PlaybackData(S2C_PlaybackData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660bf20;
  *(undefined ***)(this + 8) = &PTR__S2C_PlaybackData_0660bf88;
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  return;
}


/* S2C_PlaybackData::~S2C_PlaybackData() */

void __thiscall S2C_PlaybackData::~S2C_PlaybackData(S2C_PlaybackData *this)

{
  *(undefined ***)this = &PTR_GetClass_0660bf20;
  *(undefined ***)(this + 8) = &PTR__S2C_PlaybackData_0660bf88;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_PlaybackData::~S2C_PlaybackData() */

void __thiscall S2C_PlaybackData::~S2C_PlaybackData(S2C_PlaybackData *this)

{
  ~S2C_PlaybackData(this + -8);
  return;
}


/* S2C_PlaybackData::~S2C_PlaybackData() */

void __thiscall S2C_PlaybackData::~S2C_PlaybackData(S2C_PlaybackData *this)

{
  ~S2C_PlaybackData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_PlaybackData::~S2C_PlaybackData() */

void __thiscall S2C_PlaybackData::~S2C_PlaybackData(S2C_PlaybackData *this)

{
  ~S2C_PlaybackData(this + -8);
  return;
}


/* S2C_PlaybackData::StaticNew() */

S2C_PlaybackData * S2C_PlaybackData::StaticNew(void)

{
  S2C_PlaybackData *this;
  
  this = ::operator_new(0x30);
  S2C_PlaybackData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_PlaybackData::StaticClassInit() */

void S2C_PlaybackData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PlaybackData");
    (*pcVar2)(plVar1,asStack_10,FUN_032148c0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_PlaybackData::StaticGetClass() */

long * S2C_PlaybackData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlaybackData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_PlaybackData::GetClass() const */

long * S2C_PlaybackData::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_PlaybackData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

