// Class: S2C_MiniGameResult


/* S2C_MiniGameResult::S2C_MiniGameResult() */

void __thiscall S2C_MiniGameResult::S2C_MiniGameResult(S2C_MiniGameResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d6c0;
  *(undefined ***)(this + 8) = &PTR__S2C_MiniGameResult_0660d728;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_MiniGameResult::~S2C_MiniGameResult() */

void __thiscall S2C_MiniGameResult::~S2C_MiniGameResult(S2C_MiniGameResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d6c0;
  *(undefined ***)(this + 8) = &PTR__S2C_MiniGameResult_0660d728;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_MiniGameResult::~S2C_MiniGameResult() */

void __thiscall S2C_MiniGameResult::~S2C_MiniGameResult(S2C_MiniGameResult *this)

{
  ~S2C_MiniGameResult(this + -8);
  return;
}


/* S2C_MiniGameResult::~S2C_MiniGameResult() */

void __thiscall S2C_MiniGameResult::~S2C_MiniGameResult(S2C_MiniGameResult *this)

{
  ~S2C_MiniGameResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_MiniGameResult::~S2C_MiniGameResult() */

void __thiscall S2C_MiniGameResult::~S2C_MiniGameResult(S2C_MiniGameResult *this)

{
  ~S2C_MiniGameResult(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_MiniGameResult::StaticClassInit() */

void S2C_MiniGameResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_WechatReward");
    (*pcVar3)(plVar2,asStack_10,FUN_032025e0,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_MiniGameResult");
    (*pcVar3)(plVar2,asStack_10,FUN_03237498,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_MiniGameResult::StaticGetClass() */

long * S2C_MiniGameResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_MiniGameResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_MiniGameResult::GetClass() const */

long * S2C_MiniGameResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_MiniGameResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_MiniGameResult::StaticNew() */

S2C_MiniGameResult * S2C_MiniGameResult::StaticNew(void)

{
  S2C_MiniGameResult *this;
  
  this = ::operator_new(0x30);
  S2C_MiniGameResult(this);
  return this;
}

