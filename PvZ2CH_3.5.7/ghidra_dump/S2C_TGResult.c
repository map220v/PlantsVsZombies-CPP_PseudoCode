// Class: S2C_TGResult


/* S2C_TGResult::S2C_TGResult() */

void __thiscall S2C_TGResult::S2C_TGResult(S2C_TGResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660b220;
  *(undefined ***)(this + 8) = &PTR__S2C_TGResult_0660b288;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x48));
  return;
}


/* S2C_TGResult::~S2C_TGResult() */

void __thiscall S2C_TGResult::~S2C_TGResult(S2C_TGResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660b220;
  *(undefined ***)(this + 8) = &PTR__S2C_TGResult_0660b288;
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x48));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x30));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_TGResult::~S2C_TGResult() */

void __thiscall S2C_TGResult::~S2C_TGResult(S2C_TGResult *this)

{
  ~S2C_TGResult(this + -8);
  return;
}


/* S2C_TGResult::~S2C_TGResult() */

void __thiscall S2C_TGResult::~S2C_TGResult(S2C_TGResult *this)

{
  ~S2C_TGResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_TGResult::~S2C_TGResult() */

void __thiscall S2C_TGResult::~S2C_TGResult(S2C_TGResult *this)

{
  ~S2C_TGResult(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_TGResult::StaticClassInit() */

void S2C_TGResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_TGResult");
    (*pcVar2)(plVar1,asStack_10,FUN_0322157c,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_TGResult::StaticGetClass() */

long * S2C_TGResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_TGResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_TGResult::GetClass() const */

long * S2C_TGResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_TGResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_TGResult::StaticNew() */

S2C_TGResult * S2C_TGResult::StaticNew(void)

{
  S2C_TGResult *this;
  
  this = ::operator_new(0xa0);
  S2C_TGResult(this);
  return this;
}

