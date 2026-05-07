// Class: S2C_NoticeInfoGet


/* S2C_NoticeInfoGet::S2C_NoticeInfoGet() */

void __thiscall S2C_NoticeInfoGet::S2C_NoticeInfoGet(S2C_NoticeInfoGet *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetClass_0660c670;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)(this + 8) = &PTR__S2C_NoticeInfoGet_0660c6d8;
  S2C_CurrencyInfo::S2C_CurrencyInfo((S2C_CurrencyInfo *)(this + 0x20));
  return;
}


/* S2C_NoticeInfoGet::~S2C_NoticeInfoGet() */

void __thiscall S2C_NoticeInfoGet::~S2C_NoticeInfoGet(S2C_NoticeInfoGet *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c670;
  *(undefined ***)(this + 8) = &PTR__S2C_NoticeInfoGet_0660c6d8;
  S2C_CurrencyInfo::~S2C_CurrencyInfo((S2C_CurrencyInfo *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_NoticeInfoGet::~S2C_NoticeInfoGet() */

void __thiscall S2C_NoticeInfoGet::~S2C_NoticeInfoGet(S2C_NoticeInfoGet *this)

{
  ~S2C_NoticeInfoGet(this + -8);
  return;
}


/* S2C_NoticeInfoGet::~S2C_NoticeInfoGet() */

void __thiscall S2C_NoticeInfoGet::~S2C_NoticeInfoGet(S2C_NoticeInfoGet *this)

{
  ~S2C_NoticeInfoGet(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_NoticeInfoGet::~S2C_NoticeInfoGet() */

void __thiscall S2C_NoticeInfoGet::~S2C_NoticeInfoGet(S2C_NoticeInfoGet *this)

{
  ~S2C_NoticeInfoGet(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_NoticeInfoGet::StaticClassInit() */

void S2C_NoticeInfoGet::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_NoticeInfoGet");
    (*pcVar2)(plVar1,asStack_10,FUN_03228c34,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_NoticeInfoGet::StaticGetClass() */

long * S2C_NoticeInfoGet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_NoticeInfoGet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_NoticeInfoGet::GetClass() const */

long * S2C_NoticeInfoGet::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_NoticeInfoGet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_NoticeInfoGet::StaticNew() */

S2C_NoticeInfoGet * S2C_NoticeInfoGet::StaticNew(void)

{
  S2C_NoticeInfoGet *this;
  
  this = ::operator_new(0x50);
  S2C_NoticeInfoGet(this);
  return this;
}

