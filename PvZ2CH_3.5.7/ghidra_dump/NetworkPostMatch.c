// Class: NetworkPostMatch


/* NetworkPostMatch::~NetworkPostMatch() */

void __thiscall NetworkPostMatch::~NetworkPostMatch(NetworkPostMatch *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae550;
  *(undefined ***)(this + 8) = &PTR__NetworkPostMatch_066ae5b8;
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  FUN_05476c50(this + 0x18);
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkPostMatch::~NetworkPostMatch() */

void __thiscall NetworkPostMatch::~NetworkPostMatch(NetworkPostMatch *this)

{
  ~NetworkPostMatch(this + -8);
  return;
}


/* NetworkPostMatch::~NetworkPostMatch() */

void __thiscall NetworkPostMatch::~NetworkPostMatch(NetworkPostMatch *this)

{
  ~NetworkPostMatch(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkPostMatch::~NetworkPostMatch() */

void __thiscall NetworkPostMatch::~NetworkPostMatch(NetworkPostMatch *this)

{
  ~NetworkPostMatch(this + -8);
  return;
}


/* NetworkPostMatch::NetworkPostMatch() */

void __thiscall NetworkPostMatch::NetworkPostMatch(NetworkPostMatch *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066ae550;
  *(undefined ***)(this + 8) = &PTR__NetworkPostMatch_066ae5b8;
  FUN_05476574(this + 0x18);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  return;
}


/* NetworkPostMatch::StaticNew() */

NetworkPostMatch * NetworkPostMatch::StaticNew(void)

{
  NetworkPostMatch *this;
  
  this = ::operator_new(0x38);
  NetworkPostMatch(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkPostMatch::StaticClassInit() */

void NetworkPostMatch::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkPostMatch");
    (*pcVar2)(plVar1,asStack_10,FUN_0387e948,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkPostMatch::StaticGetClass() */

long * NetworkPostMatch::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPostMatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkPostMatch::GetClass() const */

long * NetworkPostMatch::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkPostMatch",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

