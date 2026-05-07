// Class: NetworkWebCallLottery


/* NetworkWebCallLottery::~NetworkWebCallLottery() */

void __thiscall NetworkWebCallLottery::~NetworkWebCallLottery(NetworkWebCallLottery *this)

{
  *(undefined ***)this = &PTR_GetClass_06981d00;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallLottery_06981d68;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to NetworkWebCallLottery::~NetworkWebCallLottery() */

void __thiscall NetworkWebCallLottery::~NetworkWebCallLottery(NetworkWebCallLottery *this)

{
  ~NetworkWebCallLottery(this + -8);
  return;
}


/* NetworkWebCallLottery::~NetworkWebCallLottery() */

void __thiscall NetworkWebCallLottery::~NetworkWebCallLottery(NetworkWebCallLottery *this)

{
  ~NetworkWebCallLottery(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NetworkWebCallLottery::~NetworkWebCallLottery() */

void __thiscall NetworkWebCallLottery::~NetworkWebCallLottery(NetworkWebCallLottery *this)

{
  ~NetworkWebCallLottery(this + -8);
  return;
}


/* NetworkWebCallLottery::NetworkWebCallLottery() */

void __thiscall NetworkWebCallLottery::NetworkWebCallLottery(NetworkWebCallLottery *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06981d00;
  *(undefined ***)(this + 8) = &PTR__NetworkWebCallLottery_06981d68;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x14));
  return;
}


/* NetworkWebCallLottery::StaticNew() */

NetworkWebCallLottery * NetworkWebCallLottery::StaticNew(void)

{
  NetworkWebCallLottery *this;
  
  this = ::operator_new(0x20);
  NetworkWebCallLottery(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkWebCallLottery::StaticClassInit() */

void NetworkWebCallLottery::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LotteryInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_04c07f10,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkWebCallLottery");
    (*pcVar3)(plVar2,asStack_10,FUN_04c0a3dc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkWebCallLottery::StaticGetClass() */

long * NetworkWebCallLottery::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallLottery",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkWebCallLottery::GetClass() const */

long * NetworkWebCallLottery::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkWebCallLottery",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

