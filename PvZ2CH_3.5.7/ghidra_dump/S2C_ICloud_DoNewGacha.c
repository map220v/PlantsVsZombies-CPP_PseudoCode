// Class: S2C_ICloud_DoNewGacha


/* S2C_ICloud_DoNewGacha::S2C_ICloud_DoNewGacha() */

void __thiscall S2C_ICloud_DoNewGacha::S2C_ICloud_DoNewGacha(S2C_ICloud_DoNewGacha *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660cdc0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DoNewGacha_0660ce28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  S2C_NewGachaInfo::S2C_NewGachaInfo((S2C_NewGachaInfo *)(this + 0x30));
  Sexy::FlagsMod::FlagsMod((FlagsMod *)(this + 0x50));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x58));
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  return;
}


/* S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha() */

void __thiscall S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha(S2C_ICloud_DoNewGacha *this)

{
  *(undefined ***)this = &PTR_GetClass_0660cdc0;
  *(undefined ***)(this + 8) = &PTR__S2C_ICloud_DoNewGacha_0660ce28;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x58));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha() */

void __thiscall S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha(S2C_ICloud_DoNewGacha *this)

{
  ~S2C_ICloud_DoNewGacha(this + -8);
  return;
}


/* S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha() */

void __thiscall S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha(S2C_ICloud_DoNewGacha *this)

{
  ~S2C_ICloud_DoNewGacha(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha() */

void __thiscall S2C_ICloud_DoNewGacha::~S2C_ICloud_DoNewGacha(S2C_ICloud_DoNewGacha *this)

{
  ~S2C_ICloud_DoNewGacha(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ICloud_DoNewGacha::StaticClassInit() */

void S2C_ICloud_DoNewGacha::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_NewGachaInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03201d10,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_NewGachaKeyInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03201bbc,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ICloud_DoNewGacha");
    (*pcVar3)(plVar2,asStack_10,FUN_03229f08,0xb8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ICloud_DoNewGacha::StaticGetClass() */

long * S2C_ICloud_DoNewGacha::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DoNewGacha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DoNewGacha::GetClass() const */

long * S2C_ICloud_DoNewGacha::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ICloud_DoNewGacha",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ICloud_DoNewGacha::StaticNew() */

S2C_ICloud_DoNewGacha * S2C_ICloud_DoNewGacha::StaticNew(void)

{
  S2C_ICloud_DoNewGacha *this;
  
  this = ::operator_new(0xb8);
  S2C_ICloud_DoNewGacha(this);
  return this;
}

