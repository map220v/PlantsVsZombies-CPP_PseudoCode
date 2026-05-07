// Class: S2C_ActActitityStates


/* S2C_ActActitityStates::S2C_ActActitityStates() */

void __thiscall S2C_ActActitityStates::S2C_ActActitityStates(S2C_ActActitityStates *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660ada0;
  *(undefined ***)(this + 8) = &PTR__S2C_ActActitityStates_0660ae08;
  SpringSalesStates::SpringSalesStates((SpringSalesStates *)(this + 0x18));
  LevelOfTheDayInfo::LevelOfTheDayInfo((LevelOfTheDayInfo *)(this + 0x58));
  ChildrenDayStates::ChildrenDayStates((ChildrenDayStates *)(this + 0x68));
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  return;
}


/* S2C_ActActitityStates::~S2C_ActActitityStates() */

void __thiscall S2C_ActActitityStates::~S2C_ActActitityStates(S2C_ActActitityStates *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ada0;
  *(undefined ***)(this + 8) = &PTR__S2C_ActActitityStates_0660ae08;
  ChildrenDayStates::~ChildrenDayStates((ChildrenDayStates *)(this + 0x68));
  SpringSalesStates::~SpringSalesStates((SpringSalesStates *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_ActActitityStates::~S2C_ActActitityStates() */

void __thiscall S2C_ActActitityStates::~S2C_ActActitityStates(S2C_ActActitityStates *this)

{
  ~S2C_ActActitityStates(this + -8);
  return;
}


/* S2C_ActActitityStates::~S2C_ActActitityStates() */

void __thiscall S2C_ActActitityStates::~S2C_ActActitityStates(S2C_ActActitityStates *this)

{
  ~S2C_ActActitityStates(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_ActActitityStates::~S2C_ActActitityStates() */

void __thiscall S2C_ActActitityStates::~S2C_ActActitityStates(S2C_ActActitityStates *this)

{
  ~S2C_ActActitityStates(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_ActActitityStates::StaticClassInit() */

void S2C_ActActitityStates::StaticClassInit(void)

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
    std::string::string(asStack_10,"SalesServerPrice");
    (*pcVar3)(plVar2,asStack_10,FUN_031ff3ac,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SalesObject");
    (*pcVar3)(plVar2,asStack_10,FUN_03204588,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SpringSalesStates");
    (*pcVar3)(plVar2,asStack_10,FUN_03231c84,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelofTheDayActiveInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031ff1ec,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LevelOfTheDayInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03225e48,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChildrenDayStates");
    (*pcVar3)(plVar2,asStack_10,FUN_03231f60,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_ActActitityStates");
    (*pcVar3)(plVar2,asStack_10,FUN_03225fc8,0xa0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_ActActitityStates::StaticGetClass() */

long * S2C_ActActitityStates::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ActActitityStates",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ActActitityStates::GetClass() const */

long * S2C_ActActitityStates::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_ActActitityStates",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_ActActitityStates::StaticNew() */

S2C_ActActitityStates * S2C_ActActitityStates::StaticNew(void)

{
  S2C_ActActitityStates *this;
  
  this = ::operator_new(0xa0);
  S2C_ActActitityStates(this);
  return this;
}

