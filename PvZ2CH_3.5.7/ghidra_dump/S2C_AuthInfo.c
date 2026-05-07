// Class: S2C_AuthInfo


/* S2C_AuthInfo::S2C_AuthInfo() */

void __thiscall S2C_AuthInfo::S2C_AuthInfo(S2C_AuthInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066093c0;
  *(undefined ***)(this + 8) = &PTR__S2C_AuthInfo_06609428;
  Set8BytesTo0(this + 0x18);
  return;
}


/* S2C_AuthInfo::~S2C_AuthInfo() */

void __thiscall S2C_AuthInfo::~S2C_AuthInfo(S2C_AuthInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066093c0;
  *(undefined ***)(this + 8) = &PTR__S2C_AuthInfo_06609428;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_AuthInfo::~S2C_AuthInfo() */

void __thiscall S2C_AuthInfo::~S2C_AuthInfo(S2C_AuthInfo *this)

{
  ~S2C_AuthInfo(this + -8);
  return;
}


/* S2C_AuthInfo::~S2C_AuthInfo() */

void __thiscall S2C_AuthInfo::~S2C_AuthInfo(S2C_AuthInfo *this)

{
  ~S2C_AuthInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_AuthInfo::~S2C_AuthInfo() */

void __thiscall S2C_AuthInfo::~S2C_AuthInfo(S2C_AuthInfo *this)

{
  ~S2C_AuthInfo(this + -8);
  return;
}


/* S2C_AuthInfo::StaticNew() */

S2C_AuthInfo * S2C_AuthInfo::StaticNew(void)

{
  S2C_AuthInfo *this;
  
  this = ::operator_new(0x28);
  S2C_AuthInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_AuthInfo::StaticClassInit() */

void S2C_AuthInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_AuthInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_0320b524,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_AuthInfo::StaticGetClass() */

long * S2C_AuthInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AuthInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_AuthInfo::GetClass() const */

long * S2C_AuthInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_AuthInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

