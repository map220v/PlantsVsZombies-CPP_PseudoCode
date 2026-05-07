// Class: New_S2C_MoveResult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* New_S2C_MoveResult::StaticClassInit() */

void New_S2C_MoveResult::StaticClassInit(void)

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
    std::string::string(asStack_10,"EventReward");
    (*pcVar3)(plVar2,asStack_10,FUN_038d3fdc,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"New_S2C_MoveResult");
    (*pcVar3)(plVar2,asStack_10,FUN_038d6f74,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* New_S2C_MoveResult::StaticGetClass() */

long * New_S2C_MoveResult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_MoveResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_MoveResult::GetClass() const */

long * New_S2C_MoveResult::GetClass(void)

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
  (*pcVar3)(plVar1,"New_S2C_MoveResult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* New_S2C_MoveResult::New_S2C_MoveResult() */

void __thiscall New_S2C_MoveResult::New_S2C_MoveResult(New_S2C_MoveResult *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_066baac0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_MoveResult_066bab28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* New_S2C_MoveResult::StaticNew() */

New_S2C_MoveResult * New_S2C_MoveResult::StaticNew(void)

{
  New_S2C_MoveResult *this;
  
  this = ::operator_new(0x58);
  New_S2C_MoveResult(this);
  return this;
}


/* New_S2C_MoveResult::~New_S2C_MoveResult() */

void __thiscall New_S2C_MoveResult::~New_S2C_MoveResult(New_S2C_MoveResult *this)

{
  *(undefined ***)this = &PTR_GetClass_066baac0;
  *(undefined ***)(this + 8) = &PTR__New_S2C_MoveResult_066bab28;
  std::vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>>::~vector
            ((vector<RichmanTileEventConfig,std::allocator<RichmanTileEventConfig>> *)(this + 0x38))
  ;
  std::vector<EventReward,std::allocator<EventReward>>::~vector
            ((vector<EventReward,std::allocator<EventReward>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to New_S2C_MoveResult::~New_S2C_MoveResult() */

void __thiscall New_S2C_MoveResult::~New_S2C_MoveResult(New_S2C_MoveResult *this)

{
  ~New_S2C_MoveResult(this + -8);
  return;
}


/* New_S2C_MoveResult::~New_S2C_MoveResult() */

void __thiscall New_S2C_MoveResult::~New_S2C_MoveResult(New_S2C_MoveResult *this)

{
  ~New_S2C_MoveResult(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to New_S2C_MoveResult::~New_S2C_MoveResult() */

void __thiscall New_S2C_MoveResult::~New_S2C_MoveResult(New_S2C_MoveResult *this)

{
  ~New_S2C_MoveResult(this + -8);
  return;
}

