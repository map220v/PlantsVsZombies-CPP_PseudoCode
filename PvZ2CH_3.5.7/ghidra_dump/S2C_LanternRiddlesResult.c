// Class: S2C_LanternRiddlesResult


/* S2C_LanternRiddlesResult::S2C_LanternRiddlesResult() */

void __thiscall S2C_LanternRiddlesResult::S2C_LanternRiddlesResult(S2C_LanternRiddlesResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d750;
  *(undefined ***)(this + 8) = &PTR__S2C_LanternRiddlesResult_0660d7b8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* S2C_LanternRiddlesResult::S2C_LanternRiddlesResult(S2C_LanternRiddlesResult const&) */

void __thiscall
S2C_LanternRiddlesResult::S2C_LanternRiddlesResult
          (S2C_LanternRiddlesResult *this,S2C_LanternRiddlesResult *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined ***)this = &PTR_GetClass_0660d750;
  *(undefined ***)(this + 8) = &PTR__S2C_LanternRiddlesResult_0660d7b8;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}


/* S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult() */

void __thiscall S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult(S2C_LanternRiddlesResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d750;
  *(undefined ***)(this + 8) = &PTR__S2C_LanternRiddlesResult_0660d7b8;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult() */

void __thiscall S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult(S2C_LanternRiddlesResult *this)

{
  ~S2C_LanternRiddlesResult(this + -8);
  return;
}


/* S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult() */

void __thiscall S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult(S2C_LanternRiddlesResult *this)

{
  ~S2C_LanternRiddlesResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult() */

void __thiscall S2C_LanternRiddlesResult::~S2C_LanternRiddlesResult(S2C_LanternRiddlesResult *this)

{
  ~S2C_LanternRiddlesResult(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_LanternRiddlesResult::StaticClassInit() */

void S2C_LanternRiddlesResult::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_03202734,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_LanternRiddlesResult");
    (*pcVar3)(plVar2,asStack_10,FUN_032375fc,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_LanternRiddlesResult::StaticGetClass() */

long * S2C_LanternRiddlesResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LanternRiddlesResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LanternRiddlesResult::GetClass() const */

long * S2C_LanternRiddlesResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_LanternRiddlesResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_LanternRiddlesResult::StaticNew() */

S2C_LanternRiddlesResult * S2C_LanternRiddlesResult::StaticNew(void)

{
  S2C_LanternRiddlesResult *this;
  
  this = ::operator_new(0x38);
  S2C_LanternRiddlesResult(this);
  return this;
}

