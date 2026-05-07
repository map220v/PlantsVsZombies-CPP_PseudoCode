// Class: S2C_GachaDetailMsg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_GachaDetailMsg::StaticClassInit() */

void S2C_GachaDetailMsg::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PlayerGetGachaInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03d8c5a0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PlayerGetAvatarInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03d8c444,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_PlayerGetGachaGroupInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03d8c6fc,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_GachaDetailMsg");
    (*pcVar3)(plVar2,asStack_10,FUN_03d8c93c,0x1a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_GachaDetailMsg::StaticGetClass() */

long * S2C_GachaDetailMsg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GachaDetailMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_GachaDetailMsg::GetClass() const */

long * S2C_GachaDetailMsg::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_GachaDetailMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_GachaDetailMsg::S2C_GachaDetailMsg() */

void __thiscall S2C_GachaDetailMsg::S2C_GachaDetailMsg(S2C_GachaDetailMsg *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06771de0;
  *(undefined ***)(this + 8) = &PTR__S2C_GachaDetailMsg_06771e48;
  Set8BytesTo0(this + 0x18);
  S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0x20));
  S2C_PlayerGetGachaGroupInfo::S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0xe0));
  return;
}


/* S2C_GachaDetailMsg::StaticNew() */

S2C_GachaDetailMsg * S2C_GachaDetailMsg::StaticNew(void)

{
  S2C_GachaDetailMsg *this;
  
  this = ::operator_new(0x1a0);
  S2C_GachaDetailMsg(this);
  return this;
}


/* S2C_GachaDetailMsg::~S2C_GachaDetailMsg() */

void __thiscall S2C_GachaDetailMsg::~S2C_GachaDetailMsg(S2C_GachaDetailMsg *this)

{
  *(undefined ***)this = &PTR_GetClass_06771de0;
  *(undefined ***)(this + 8) = &PTR__S2C_GachaDetailMsg_06771e48;
  S2C_PlayerGetGachaGroupInfo::~S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0xe0));
  S2C_PlayerGetGachaGroupInfo::~S2C_PlayerGetGachaGroupInfo
            ((S2C_PlayerGetGachaGroupInfo *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_GachaDetailMsg::~S2C_GachaDetailMsg() */

void __thiscall S2C_GachaDetailMsg::~S2C_GachaDetailMsg(S2C_GachaDetailMsg *this)

{
  ~S2C_GachaDetailMsg(this + -8);
  return;
}


/* S2C_GachaDetailMsg::~S2C_GachaDetailMsg() */

void __thiscall S2C_GachaDetailMsg::~S2C_GachaDetailMsg(S2C_GachaDetailMsg *this)

{
  ~S2C_GachaDetailMsg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_GachaDetailMsg::~S2C_GachaDetailMsg() */

void __thiscall S2C_GachaDetailMsg::~S2C_GachaDetailMsg(S2C_GachaDetailMsg *this)

{
  ~S2C_GachaDetailMsg(this + -8);
  return;
}

