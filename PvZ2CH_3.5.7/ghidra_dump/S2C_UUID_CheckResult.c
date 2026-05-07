// Class: S2C_UUID_CheckResult


/* S2C_UUID_CheckResult::S2C_UUID_CheckResult() */

void __thiscall S2C_UUID_CheckResult::S2C_UUID_CheckResult(S2C_UUID_CheckResult *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660c820;
  *(undefined ***)this = &PTR_GetClass_0660c820;
  *(undefined ***)(this + 8) = &PTR__S2C_UUID_CheckResult_0660c888;
  Set8BytesTo0((string *)(this + 0x18));
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  return;
}


/* S2C_UUID_CheckResult::~S2C_UUID_CheckResult() */

void __thiscall S2C_UUID_CheckResult::~S2C_UUID_CheckResult(S2C_UUID_CheckResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c820;
  *(undefined ***)(this + 8) = &PTR__S2C_UUID_CheckResult_0660c888;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_UUID_CheckResult::~S2C_UUID_CheckResult() */

void __thiscall S2C_UUID_CheckResult::~S2C_UUID_CheckResult(S2C_UUID_CheckResult *this)

{
  ~S2C_UUID_CheckResult(this + -8);
  return;
}


/* S2C_UUID_CheckResult::~S2C_UUID_CheckResult() */

void __thiscall S2C_UUID_CheckResult::~S2C_UUID_CheckResult(S2C_UUID_CheckResult *this)

{
  ~S2C_UUID_CheckResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_UUID_CheckResult::~S2C_UUID_CheckResult() */

void __thiscall S2C_UUID_CheckResult::~S2C_UUID_CheckResult(S2C_UUID_CheckResult *this)

{
  ~S2C_UUID_CheckResult(this + -8);
  return;
}


/* S2C_UUID_CheckResult::StaticNew() */

S2C_UUID_CheckResult * S2C_UUID_CheckResult::StaticNew(void)

{
  S2C_UUID_CheckResult *this;
  
  this = ::operator_new(0x20);
  S2C_UUID_CheckResult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_UUID_CheckResult::StaticClassInit() */

void S2C_UUID_CheckResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_UUID_CheckResult");
    (*pcVar2)(plVar1,asStack_10,FUN_03217648,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_UUID_CheckResult::StaticGetClass() */

long * S2C_UUID_CheckResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_UUID_CheckResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_UUID_CheckResult::GetClass() const */

long * S2C_UUID_CheckResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_UUID_CheckResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

