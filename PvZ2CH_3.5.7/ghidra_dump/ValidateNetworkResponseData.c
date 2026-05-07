// Class: ValidateNetworkResponseData


/* ValidateNetworkResponseData::~ValidateNetworkResponseData() */

void __thiscall
ValidateNetworkResponseData::~ValidateNetworkResponseData(ValidateNetworkResponseData *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a5c0;
  *(undefined ***)(this + 8) = &PTR__ValidateNetworkResponseData_0668a628;
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to ValidateNetworkResponseData::~ValidateNetworkResponseData() */

void __thiscall
ValidateNetworkResponseData::~ValidateNetworkResponseData(ValidateNetworkResponseData *this)

{
  ~ValidateNetworkResponseData(this + -8);
  return;
}


/* ValidateNetworkResponseData::~ValidateNetworkResponseData() */

void __thiscall
ValidateNetworkResponseData::~ValidateNetworkResponseData(ValidateNetworkResponseData *this)

{
  ~ValidateNetworkResponseData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ValidateNetworkResponseData::~ValidateNetworkResponseData() */

void __thiscall
ValidateNetworkResponseData::~ValidateNetworkResponseData(ValidateNetworkResponseData *this)

{
  ~ValidateNetworkResponseData(this + -8);
  return;
}


/* ValidateNetworkResponseData::ValidateNetworkResponseData() */

void __thiscall
ValidateNetworkResponseData::ValidateNetworkResponseData(ValidateNetworkResponseData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0668a5c0;
  *(undefined ***)(this + 8) = &PTR__ValidateNetworkResponseData_0668a628;
  return;
}


/* ValidateNetworkResponseData::StaticNew() */

ValidateNetworkResponseData * ValidateNetworkResponseData::StaticNew(void)

{
  ValidateNetworkResponseData *this;
  
  this = ::operator_new(0x20);
  ValidateNetworkResponseData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValidateNetworkResponseData::StaticClassInit() */

void ValidateNetworkResponseData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ValidateNetworkResponseData");
    (*pcVar2)(plVar1,asStack_10,FUN_0371b16c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ValidateNetworkResponseData::StaticGetClass() */

long * ValidateNetworkResponseData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ValidateNetworkResponseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ValidateNetworkResponseData::GetClass() const */

long * ValidateNetworkResponseData::GetClass(void)

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
  (*pcVar3)(plVar1,"ValidateNetworkResponseData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

