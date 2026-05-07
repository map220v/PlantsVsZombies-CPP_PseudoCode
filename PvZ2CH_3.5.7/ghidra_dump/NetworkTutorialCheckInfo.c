// Class: NetworkTutorialCheckInfo


/* NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo() */

void __thiscall NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo(NetworkTutorialCheckInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_06853c20;
  *(undefined ***)(this + 8) = &PTR__NetworkTutorialCheckInfo_06853c88;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo() */

void __thiscall NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo(NetworkTutorialCheckInfo *this)

{
  ~NetworkTutorialCheckInfo(this + -8);
  return;
}


/* NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo() */

void __thiscall NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo(NetworkTutorialCheckInfo *this)

{
  ~NetworkTutorialCheckInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo() */

void __thiscall NetworkTutorialCheckInfo::~NetworkTutorialCheckInfo(NetworkTutorialCheckInfo *this)

{
  ~NetworkTutorialCheckInfo(this + -8);
  return;
}


/* NetworkTutorialCheckInfo::NetworkTutorialCheckInfo() */

void __thiscall NetworkTutorialCheckInfo::NetworkTutorialCheckInfo(NetworkTutorialCheckInfo *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06853c20;
  *(undefined ***)(this + 8) = &PTR__NetworkTutorialCheckInfo_06853c88;
  return;
}


/* NetworkTutorialCheckInfo::StaticNew() */

NetworkTutorialCheckInfo * NetworkTutorialCheckInfo::StaticNew(void)

{
  NetworkTutorialCheckInfo *this;
  
  this = ::operator_new(0x18);
  NetworkTutorialCheckInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkTutorialCheckInfo::StaticClassInit() */

void NetworkTutorialCheckInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"NetworkTutorialCheckInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_044bb144,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkTutorialCheckInfo::StaticGetClass() */

long * NetworkTutorialCheckInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTutorialCheckInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkTutorialCheckInfo::GetClass() const */

long * NetworkTutorialCheckInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkTutorialCheckInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

