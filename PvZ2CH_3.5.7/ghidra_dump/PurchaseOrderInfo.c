// Class: PurchaseOrderInfo


/* PurchaseOrderInfo::PurchaseOrderInfo(PurchaseOrderInfo const&) */

void __thiscall
PurchaseOrderInfo::PurchaseOrderInfo(PurchaseOrderInfo *this,PurchaseOrderInfo *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0660d090;
  *(undefined ***)(this + 8) = &PTR__PurchaseOrderInfo_0660d0f8;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  return;
}


/* PurchaseOrderInfo::~PurchaseOrderInfo() */

void __thiscall PurchaseOrderInfo::~PurchaseOrderInfo(PurchaseOrderInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d090;
  *(undefined ***)(this + 8) = &PTR__PurchaseOrderInfo_0660d0f8;
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PurchaseOrderInfo::~PurchaseOrderInfo() */

void __thiscall PurchaseOrderInfo::~PurchaseOrderInfo(PurchaseOrderInfo *this)

{
  ~PurchaseOrderInfo(this + -8);
  return;
}


/* PurchaseOrderInfo::~PurchaseOrderInfo() */

void __thiscall PurchaseOrderInfo::~PurchaseOrderInfo(PurchaseOrderInfo *this)

{
  ~PurchaseOrderInfo(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PurchaseOrderInfo::~PurchaseOrderInfo() */

void __thiscall PurchaseOrderInfo::~PurchaseOrderInfo(PurchaseOrderInfo *this)

{
  ~PurchaseOrderInfo(this + -8);
  return;
}


/* PurchaseOrderInfo::PurchaseOrderInfo() */

void __thiscall PurchaseOrderInfo::PurchaseOrderInfo(PurchaseOrderInfo *this)

{
  undefined **__n;
  
  INetworkData::INetworkData((INetworkData *)this);
  __n = &PTR_GetClass_0660d090;
  *(undefined ***)this = &PTR_GetClass_0660d090;
  *(undefined ***)(this + 8) = &PTR__PurchaseOrderInfo_0660d0f8;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  std::string::append((string *)(this + 0x18),"",(size_t)__n);
  std::string::append((string *)(this + 0x20),"",(size_t)__n);
  std::string::append((string *)(this + 0x28),"",(size_t)__n);
  return;
}


/* PurchaseOrderInfo::StaticNew() */

PurchaseOrderInfo * PurchaseOrderInfo::StaticNew(void)

{
  PurchaseOrderInfo *this;
  
  this = ::operator_new(0x30);
  PurchaseOrderInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseOrderInfo::StaticClassInit() */

void PurchaseOrderInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PurchaseOrderInfo");
    (*pcVar2)(plVar1,asStack_10,FUN_03219440,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseOrderInfo::StaticGetClass() */

long * PurchaseOrderInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PurchaseOrderInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PurchaseOrderInfo::GetClass() const */

long * PurchaseOrderInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"PurchaseOrderInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PurchaseOrderInfo::PurchaseOrderInfo(PurchaseOrderInfo&&) */

void __thiscall
PurchaseOrderInfo::PurchaseOrderInfo(PurchaseOrderInfo *this,PurchaseOrderInfo *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0660d090;
  *(undefined ***)(this + 8) = &PTR__PurchaseOrderInfo_0660d0f8;
  FUN_05474148(this + 0x18,param_1 + 0x18);
  FUN_05474148(this + 0x20,param_1 + 0x20);
  FUN_05474148(this + 0x28,param_1 + 0x28);
  return;
}


/* PurchaseOrderInfo::TEMPNAMEPLACEHOLDERVALUE(PurchaseOrderInfo const&) */

PurchaseOrderInfo * __thiscall
PurchaseOrderInfo::operator=(PurchaseOrderInfo *this,PurchaseOrderInfo *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  return this;
}


/* PurchaseOrderInfo::TEMPNAMEPLACEHOLDERVALUE(PurchaseOrderInfo&&) */

PurchaseOrderInfo * __thiscall
PurchaseOrderInfo::operator=(PurchaseOrderInfo *this,PurchaseOrderInfo *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  FUN_05474278(this + 0x18,param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  FUN_05474278(this + 0x28,param_1 + 0x28);
  return this;
}

