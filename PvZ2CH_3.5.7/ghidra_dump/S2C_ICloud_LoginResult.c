// Class: S2C_ICloud_LoginResult


/* S2C_ICloud_LoginResult::S2C_ICloud_LoginResult() */

void __thiscall S2C_ICloud_LoginResult::S2C_ICloud_LoginResult(S2C_ICloud_LoginResult *this)

{
  undefined **__n;
  size_t __n_00;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660a0b0;
  *(undefined ***)this = &PTR_GetClass_0660a0b0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_LoginResult_0660a118;
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0((string *)(this + 0x48));
  Set8BytesTo0((string *)(this + 0x60));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  std::string::append((string *)(this + 0x28),"",(size_t)__n);
  std::string::append((string *)(this + 0x30),"",(size_t)__n);
  std::string::append((string *)(this + 0x38),"",(size_t)__n);
  __n_00 = 0x42f00000;
  this[0x40] = (S2C_ICloud_LoginResult)0x1;
  *(undefined4 *)(this + 0x44) = 0x42f00000;
  std::string::append((string *)(this + 0x48),"",0x42f00000);
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (S2C_ICloud_LoginResult)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x5c] = (S2C_ICloud_LoginResult)0x0;
  this[0x5d] = (S2C_ICloud_LoginResult)0x0;
  std::string::append((string *)(this + 0x60),"",__n_00);
  return;
}


/* S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult() */

void __thiscall S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(S2C_ICloud_LoginResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660a0b0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_LoginResult_0660a118;
  std::string::~string((string *)(this + 0x60));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult() */

void __thiscall S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(S2C_ICloud_LoginResult *this)

{
  ~S2C_ICloud_LoginResult(this + -8);
  return;
}


/* S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult() */

void __thiscall S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(S2C_ICloud_LoginResult *this)

{
  ~S2C_ICloud_LoginResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult() */

void __thiscall S2C_ICloud_LoginResult::~S2C_ICloud_LoginResult(S2C_ICloud_LoginResult *this)

{
  ~S2C_ICloud_LoginResult(this + -8);
  return;
}


/* S2C_ICloud_LoginResult::StaticNew() */

S2C_ICloud_LoginResult * S2C_ICloud_LoginResult::StaticNew(void)

{
  S2C_ICloud_LoginResult *this;
  
  this = ::operator_new(0x68);
  S2C_ICloud_LoginResult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_LoginResult::StaticClassInit() */

void S2C_ICloud_LoginResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ICloud_LoginResult");
    (*pcVar2)(plVar1,asStack_10,FUN_0320d89c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_LoginResult::StaticGetClass() */

long * S2C_ICloud_LoginResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_LoginResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_LoginResult::GetClass() const */

long * S2C_ICloud_LoginResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_LoginResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

