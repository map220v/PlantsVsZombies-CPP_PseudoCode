// Class: S2C_CodeRewardResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_CodeRewardResult::S2C_CodeRewardResult() */

void __thiscall S2C_CodeRewardResult::S2C_CodeRewardResult(S2C_CodeRewardResult *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_GetClass_0660d510;
  *(undefined ***)(this + 8) = &PTR__S2C_CodeRewardResult_0660d578;
  std::string::string((string *)(this + 0x18),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  S2C_PlayerInfo::S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x38));
  std::string::string((string *)(this + 0x88),"");
  nop();
  std::string::string((string *)(this + 0x90),"");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_CodeRewardResult::~S2C_CodeRewardResult() */

void __thiscall S2C_CodeRewardResult::~S2C_CodeRewardResult(S2C_CodeRewardResult *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d510;
  *(undefined ***)(this + 8) = &PTR__S2C_CodeRewardResult_0660d578;
  std::string::~string((string *)(this + 0x90));
  std::string::~string((string *)(this + 0x88));
  S2C_PlayerInfo::~S2C_PlayerInfo((S2C_PlayerInfo *)(this + 0x38));
  std::vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>>::~vector
            ((vector<S2C_CodeRewardPlantNum,std::allocator<S2C_CodeRewardPlantNum>> *)(this + 0x20))
  ;
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_CodeRewardResult::~S2C_CodeRewardResult() */

void __thiscall S2C_CodeRewardResult::~S2C_CodeRewardResult(S2C_CodeRewardResult *this)

{
  ~S2C_CodeRewardResult(this + -8);
  return;
}


/* S2C_CodeRewardResult::~S2C_CodeRewardResult() */

void __thiscall S2C_CodeRewardResult::~S2C_CodeRewardResult(S2C_CodeRewardResult *this)

{
  ~S2C_CodeRewardResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_CodeRewardResult::~S2C_CodeRewardResult() */

void __thiscall S2C_CodeRewardResult::~S2C_CodeRewardResult(S2C_CodeRewardResult *this)

{
  ~S2C_CodeRewardResult(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_CodeRewardResult::StaticClassInit() */

void S2C_CodeRewardResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_CodeRewardPlantNum");
    (*pcVar3)(plVar2,asStack_10,FUN_032021e4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_CodeRewardResult");
    (*pcVar3)(plVar2,asStack_10,FUN_03236c9c,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_CodeRewardResult::StaticGetClass() */

long * S2C_CodeRewardResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_CodeRewardResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_CodeRewardResult::GetClass() const */

long * S2C_CodeRewardResult::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_CodeRewardResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_CodeRewardResult::StaticNew() */

S2C_CodeRewardResult * S2C_CodeRewardResult::StaticNew(void)

{
  S2C_CodeRewardResult *this;
  
  this = ::operator_new(0x98);
  S2C_CodeRewardResult(this);
  return this;
}

