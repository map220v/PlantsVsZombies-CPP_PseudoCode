// Class: S2C_ChristmasProtect


/* S2C_ChristmasProtect::S2C_ChristmasProtect() */

void __thiscall S2C_ChristmasProtect::S2C_ChristmasProtect(S2C_ChristmasProtect *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660aa40;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasProtect_0660aaa8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x30));
  return;
}


/* S2C_ChristmasProtect::~S2C_ChristmasProtect() */

void __thiscall S2C_ChristmasProtect::~S2C_ChristmasProtect(S2C_ChristmasProtect *this)

{
  *(undefined ***)this = &PTR_GetClass_0660aa40;
  *(undefined ***)(this + 8) = &PTR__S2C_ChristmasProtect_0660aaa8;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ChristmasProtect::~S2C_ChristmasProtect() */

void __thiscall S2C_ChristmasProtect::~S2C_ChristmasProtect(S2C_ChristmasProtect *this)

{
  ~S2C_ChristmasProtect(this + -8);
  return;
}


/* S2C_ChristmasProtect::~S2C_ChristmasProtect() */

void __thiscall S2C_ChristmasProtect::~S2C_ChristmasProtect(S2C_ChristmasProtect *this)

{
  ~S2C_ChristmasProtect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ChristmasProtect::~S2C_ChristmasProtect() */

void __thiscall S2C_ChristmasProtect::~S2C_ChristmasProtect(S2C_ChristmasProtect *this)

{
  ~S2C_ChristmasProtect(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ChristmasProtect::StaticClassInit() */

void S2C_ChristmasProtect::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_ChristmasProtect");
    (*pcVar2)(plVar1,asStack_10,FUN_032213a4,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ChristmasProtect::StaticGetClass() */

long * S2C_ChristmasProtect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ChristmasProtect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasProtect::GetClass() const */

long * S2C_ChristmasProtect::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ChristmasProtect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ChristmasProtect::StaticNew() */

S2C_ChristmasProtect * S2C_ChristmasProtect::StaticNew(void)

{
  S2C_ChristmasProtect *this;
  
  this = ::operator_new(0x80);
  S2C_ChristmasProtect(this);
  return this;
}

