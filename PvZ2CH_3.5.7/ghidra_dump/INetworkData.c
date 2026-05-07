// Class: INetworkData


/* INetworkData::INetworkData() */

void __thiscall INetworkData::INetworkData(INetworkData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  DRef::DRef((DRef *)(this + 8));
  *(undefined ***)this = &PTR_GetClass_06609180;
  *(undefined ***)(this + 8) = &PTR__INetworkData_066091e8;
  return;
}


/* INetworkData::~INetworkData() */

void __thiscall INetworkData::~INetworkData(INetworkData *this)

{
  *(undefined ***)this = &PTR_GetClass_06609180;
  *(undefined ***)(this + 8) = &PTR__INetworkData_066091e8;
  nop();
  nop();
  return;
}


/* non-virtual thunk to INetworkData::~INetworkData() */

void __thiscall INetworkData::~INetworkData(INetworkData *this)

{
  ~INetworkData(this + -8);
  return;
}


/* INetworkData::~INetworkData() */

void __thiscall INetworkData::~INetworkData(INetworkData *this)

{
  ~INetworkData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to INetworkData::~INetworkData() */

void __thiscall INetworkData::~INetworkData(INetworkData *this)

{
  ~INetworkData(this + -8);
  return;
}


/* INetworkData::INetworkData(INetworkData&&) */

void __thiscall INetworkData::INetworkData(INetworkData *this,INetworkData *param_1)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  DRef::DRef((DRef *)(this + 8),(DRef *)(param_1 + 8));
  *(undefined ***)this = &PTR_GetClass_06609180;
  *(undefined ***)(this + 8) = &PTR__INetworkData_066091e8;
  return;
}


/* INetworkData::TEMPNAMEPLACEHOLDERVALUE(INetworkData const&) */

INetworkData * __thiscall INetworkData::operator=(INetworkData *this,INetworkData *param_1)

{
  FUN_03188e3c(this + 8,*(undefined4 *)(param_1 + 0x10));
  return this;
}


/* INetworkData::StaticNew() */

INetworkData * INetworkData::StaticNew(void)

{
  INetworkData *this;
  
  this = ::operator_new(0x18);
  INetworkData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* INetworkData::StaticClassInit() */

void INetworkData::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_031fd180,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"INetworkData");
    (*pcVar3)(plVar2,asStack_10,FUN_0320a1a0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* INetworkData::StaticGetClass() */

long * INetworkData::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"INetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* INetworkData::GetClass() const */

long * INetworkData::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"INetworkData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* INetworkData::TEMPNAMEPLACEHOLDERVALUE(INetworkData&&) */

INetworkData * __thiscall INetworkData::operator=(INetworkData *this,INetworkData *param_1)

{
  FUN_043434c4(this + 8,*(undefined4 *)(param_1 + 0x10));
  return this;
}

