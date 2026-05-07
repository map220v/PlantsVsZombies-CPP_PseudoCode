// Class: S2C_SurpriseRewardNew


/* S2C_SurpriseRewardNew::S2C_SurpriseRewardNew() */

void __thiscall S2C_SurpriseRewardNew::S2C_SurpriseRewardNew(S2C_SurpriseRewardNew *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06609c30;
  *(undefined ***)(this + 8) = &PTR__S2C_SurpriseRewardNew_06609c98;
  S2C_LeafConsume::S2C_LeafConsume((S2C_LeafConsume *)(this + 0x18));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x88));
  return;
}


/* S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew() */

void __thiscall S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew(S2C_SurpriseRewardNew *this)

{
  *(undefined ***)this = &PTR_GetClass_06609c30;
  *(undefined ***)(this + 8) = &PTR__S2C_SurpriseRewardNew_06609c98;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x88));
  S2C_LeafConsume::~S2C_LeafConsume((S2C_LeafConsume *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew() */

void __thiscall S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew(S2C_SurpriseRewardNew *this)

{
  ~S2C_SurpriseRewardNew(this + -8);
  return;
}


/* S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew() */

void __thiscall S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew(S2C_SurpriseRewardNew *this)

{
  ~S2C_SurpriseRewardNew(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew() */

void __thiscall S2C_SurpriseRewardNew::~S2C_SurpriseRewardNew(S2C_SurpriseRewardNew *this)

{
  ~S2C_SurpriseRewardNew(this + -8);
  return;
}


/* S2C_SurpriseRewardNew::StaticNew() */

S2C_SurpriseRewardNew * S2C_SurpriseRewardNew::StaticNew(void)

{
  S2C_SurpriseRewardNew *this;
  
  this = ::operator_new(0xd8);
  S2C_SurpriseRewardNew(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_SurpriseRewardNew::StaticClassInit() */

void S2C_SurpriseRewardNew::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_LeafConsume");
    (*pcVar3)(plVar2,asStack_10,FUN_0321eba0,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_SurpriseRewardNew");
    (*pcVar3)(plVar2,asStack_10,FUN_03222ecc,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_SurpriseRewardNew::StaticGetClass() */

long * S2C_SurpriseRewardNew::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SurpriseRewardNew",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_SurpriseRewardNew::GetClass() const */

long * S2C_SurpriseRewardNew::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_SurpriseRewardNew",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

