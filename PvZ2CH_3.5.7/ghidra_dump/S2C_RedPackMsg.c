// Class: S2C_RedPackMsg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_RedPackMsg::StaticClassInit() */

void S2C_RedPackMsg::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_PlayerGetRedPacket");
    (*pcVar3)(plVar2,asStack_10,FUN_03d7e814,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_RedPackMsg");
    (*pcVar3)(plVar2,asStack_10,FUN_03d836e0,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_RedPackMsg::StaticGetClass() */

long * S2C_RedPackMsg::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_RedPackMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_RedPackMsg::GetClass() const */

long * S2C_RedPackMsg::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_RedPackMsg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_RedPackMsg::S2C_RedPackMsg() */

void __thiscall S2C_RedPackMsg::S2C_RedPackMsg(S2C_RedPackMsg *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06771120;
  *(undefined ***)(this + 8) = &PTR__S2C_RedPackMsg_06771188;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* S2C_RedPackMsg::StaticNew() */

S2C_RedPackMsg * S2C_RedPackMsg::StaticNew(void)

{
  S2C_RedPackMsg *this;
  
  this = ::operator_new(0x38);
  S2C_RedPackMsg(this);
  return this;
}


/* S2C_RedPackMsg::~S2C_RedPackMsg() */

void __thiscall S2C_RedPackMsg::~S2C_RedPackMsg(S2C_RedPackMsg *this)

{
  *(undefined ***)this = &PTR_GetClass_06771120;
  *(undefined ***)(this + 8) = &PTR__S2C_RedPackMsg_06771188;
  std::vector<S2C_PlayerGetRedPacket,std::allocator<S2C_PlayerGetRedPacket>>::~vector
            ((vector<S2C_PlayerGetRedPacket,std::allocator<S2C_PlayerGetRedPacket>> *)(this + 0x20))
  ;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_RedPackMsg::~S2C_RedPackMsg() */

void __thiscall S2C_RedPackMsg::~S2C_RedPackMsg(S2C_RedPackMsg *this)

{
  ~S2C_RedPackMsg(this + -8);
  return;
}


/* S2C_RedPackMsg::~S2C_RedPackMsg() */

void __thiscall S2C_RedPackMsg::~S2C_RedPackMsg(S2C_RedPackMsg *this)

{
  ~S2C_RedPackMsg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_RedPackMsg::~S2C_RedPackMsg() */

void __thiscall S2C_RedPackMsg::~S2C_RedPackMsg(S2C_RedPackMsg *this)

{
  ~S2C_RedPackMsg(this + -8);
  return;
}

