// Class: S2C_UUID_BindResult


/* S2C_UUID_BindResult::S2C_UUID_BindResult() */

void __thiscall S2C_UUID_BindResult::S2C_UUID_BindResult(S2C_UUID_BindResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0660c700;
  *(undefined ***)(this + 8) = &PTR__S2C_UUID_BindResult_0660c768;
  return;
}


/* S2C_UUID_BindResult::~S2C_UUID_BindResult() */

void __thiscall S2C_UUID_BindResult::~S2C_UUID_BindResult(S2C_UUID_BindResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c700;
  *(undefined ***)(this + 8) = &PTR__S2C_UUID_BindResult_0660c768;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_UUID_BindResult::~S2C_UUID_BindResult() */

void __thiscall S2C_UUID_BindResult::~S2C_UUID_BindResult(S2C_UUID_BindResult *this)

{
  ~S2C_UUID_BindResult(this + -8);
  return;
}


/* S2C_UUID_BindResult::~S2C_UUID_BindResult() */

void __thiscall S2C_UUID_BindResult::~S2C_UUID_BindResult(S2C_UUID_BindResult *this)

{
  ~S2C_UUID_BindResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_UUID_BindResult::~S2C_UUID_BindResult() */

void __thiscall S2C_UUID_BindResult::~S2C_UUID_BindResult(S2C_UUID_BindResult *this)

{
  ~S2C_UUID_BindResult(this + -8);
  return;
}


/* S2C_UUID_BindResult::StaticNew() */

S2C_UUID_BindResult * S2C_UUID_BindResult::StaticNew(void)

{
  S2C_UUID_BindResult *this;
  
  this = ::operator_new(0x20);
  S2C_UUID_BindResult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_UUID_BindResult::StaticClassInit() */

void S2C_UUID_BindResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_UUID_BindResult");
    (*pcVar2)(plVar1,asStack_10,FUN_03217030,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_UUID_BindResult::StaticGetClass() */

long * S2C_UUID_BindResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_UUID_BindResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_UUID_BindResult::GetClass() const */

long * S2C_UUID_BindResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_UUID_BindResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

