// Class: S2C_Purchase_ValidateResult


/* S2C_Purchase_ValidateResult::S2C_Purchase_ValidateResult() */

void __thiscall
S2C_Purchase_ValidateResult::S2C_Purchase_ValidateResult(S2C_Purchase_ValidateResult *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660cf70;
  *(undefined ***)this = &PTR_GetClass_0660cf70;
  *(undefined ***)(this + 8) = &PTR__S2C_Purchase_ValidateResult_0660cfd8;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  return;
}


/* S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult() */

void __thiscall
S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult(S2C_Purchase_ValidateResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660cf70;
  *(undefined ***)(this + 8) = &PTR__S2C_Purchase_ValidateResult_0660cfd8;
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult() */

void __thiscall
S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult(S2C_Purchase_ValidateResult *this)

{
  ~S2C_Purchase_ValidateResult(this + -8);
  return;
}


/* S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult() */

void __thiscall
S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult(S2C_Purchase_ValidateResult *this)

{
  ~S2C_Purchase_ValidateResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult() */

void __thiscall
S2C_Purchase_ValidateResult::~S2C_Purchase_ValidateResult(S2C_Purchase_ValidateResult *this)

{
  ~S2C_Purchase_ValidateResult(this + -8);
  return;
}


/* S2C_Purchase_ValidateResult::StaticNew() */

S2C_Purchase_ValidateResult * S2C_Purchase_ValidateResult::StaticNew(void)

{
  S2C_Purchase_ValidateResult *this;
  
  this = ::operator_new(0x30);
  S2C_Purchase_ValidateResult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_Purchase_ValidateResult::StaticClassInit() */

void S2C_Purchase_ValidateResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_Purchase_ValidateResult");
    (*pcVar2)(plVar1,asStack_10,FUN_03218ebc,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_Purchase_ValidateResult::StaticGetClass() */

long * S2C_Purchase_ValidateResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Purchase_ValidateResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_Purchase_ValidateResult::GetClass() const */

long * S2C_Purchase_ValidateResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_Purchase_ValidateResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

