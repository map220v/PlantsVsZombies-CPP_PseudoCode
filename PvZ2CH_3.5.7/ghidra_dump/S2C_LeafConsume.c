// Class: S2C_LeafConsume


/* S2C_LeafConsume::S2C_LeafConsume() */

void __thiscall S2C_LeafConsume::S2C_LeafConsume(S2C_LeafConsume *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609e70;
  *(undefined ***)(this + 8) = &PTR__S2C_LeafConsume_06609ed8;
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x18));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}


/* S2C_LeafConsume::~S2C_LeafConsume() */

void __thiscall S2C_LeafConsume::~S2C_LeafConsume(S2C_LeafConsume *this)

{
  *(undefined ***)this = &PTR_GetClass_06609e70;
  *(undefined ***)(this + 8) = &PTR__S2C_LeafConsume_06609ed8;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_LeafConsume::~S2C_LeafConsume() */

void __thiscall S2C_LeafConsume::~S2C_LeafConsume(S2C_LeafConsume *this)

{
  ~S2C_LeafConsume(this + -8);
  return;
}


/* S2C_LeafConsume::~S2C_LeafConsume() */

void __thiscall S2C_LeafConsume::~S2C_LeafConsume(S2C_LeafConsume *this)

{
  ~S2C_LeafConsume(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_LeafConsume::~S2C_LeafConsume() */

void __thiscall S2C_LeafConsume::~S2C_LeafConsume(S2C_LeafConsume *this)

{
  ~S2C_LeafConsume(this + -8);
  return;
}


/* S2C_LeafConsume::StaticNew() */

S2C_LeafConsume * S2C_LeafConsume::StaticNew(void)

{
  S2C_LeafConsume *this;
  
  this = ::operator_new(0x70);
  S2C_LeafConsume(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_LeafConsume::StaticClassInit() */

void S2C_LeafConsume::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_LeafConsume");
    (*pcVar2)(plVar1,asStack_10,FUN_0321ed68,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_LeafConsume::StaticGetClass() */

long * S2C_LeafConsume::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LeafConsume",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LeafConsume::GetClass() const */

long * S2C_LeafConsume::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LeafConsume",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

