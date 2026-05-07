// Class: MonthlyCardStatus


/* MonthlyCardStatus::~MonthlyCardStatus() */

void __thiscall MonthlyCardStatus::~MonthlyCardStatus(MonthlyCardStatus *this)

{
  *(undefined ***)this = &PTR_GetClass_0660ad10;
  *(undefined ***)(this + 8) = &PTR__MonthlyCardStatus_0660ad78;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to MonthlyCardStatus::~MonthlyCardStatus() */

void __thiscall MonthlyCardStatus::~MonthlyCardStatus(MonthlyCardStatus *this)

{
  ~MonthlyCardStatus(this + -8);
  return;
}


/* MonthlyCardStatus::~MonthlyCardStatus() */

void __thiscall MonthlyCardStatus::~MonthlyCardStatus(MonthlyCardStatus *this)

{
  ~MonthlyCardStatus(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MonthlyCardStatus::~MonthlyCardStatus() */

void __thiscall MonthlyCardStatus::~MonthlyCardStatus(MonthlyCardStatus *this)

{
  ~MonthlyCardStatus(this + -8);
  return;
}


/* MonthlyCardStatus::MonthlyCardStatus() */

void __thiscall MonthlyCardStatus::MonthlyCardStatus(MonthlyCardStatus *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR_GetClass_0660ad10;
  *(undefined ***)(this + 8) = &PTR__MonthlyCardStatus_0660ad78;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


/* MonthlyCardStatus::StaticNew() */

MonthlyCardStatus * MonthlyCardStatus::StaticNew(void)

{
  MonthlyCardStatus *this;
  
  this = ::operator_new(0x28);
  MonthlyCardStatus(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MonthlyCardStatus::StaticClassInit() */

void MonthlyCardStatus::StaticClassInit(void)

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
    std::string::string(asStack_10,"MonthlyCardStatus");
    (*pcVar2)(plVar1,asStack_10,FUN_03210acc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MonthlyCardStatus::StaticGetClass() */

long * MonthlyCardStatus::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MonthlyCardStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MonthlyCardStatus::GetClass() const */

long * MonthlyCardStatus::GetClass(void)

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
  (*pcVar3)(plVar1,"MonthlyCardStatus",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

