// Class: CDFReceiveReward


/* CDFReceiveReward::CDFReceiveReward() */

void __thiscall CDFReceiveReward::CDFReceiveReward(CDFReceiveReward *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660d630;
  *(undefined ***)(this + 8) = &PTR__CDFReceiveReward_0660d698;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* CDFReceiveReward::~CDFReceiveReward() */

void __thiscall CDFReceiveReward::~CDFReceiveReward(CDFReceiveReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0660d630;
  *(undefined ***)(this + 8) = &PTR__CDFReceiveReward_0660d698;
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CDFReceiveReward::~CDFReceiveReward() */

void __thiscall CDFReceiveReward::~CDFReceiveReward(CDFReceiveReward *this)

{
  ~CDFReceiveReward(this + -8);
  return;
}


/* CDFReceiveReward::~CDFReceiveReward() */

void __thiscall CDFReceiveReward::~CDFReceiveReward(CDFReceiveReward *this)

{
  ~CDFReceiveReward(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CDFReceiveReward::~CDFReceiveReward() */

void __thiscall CDFReceiveReward::~CDFReceiveReward(CDFReceiveReward *this)

{
  ~CDFReceiveReward(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CDFReceiveReward::StaticClassInit() */

void CDFReceiveReward::StaticClassInit(void)

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
    (*pcVar3)(plVar2,asStack_10,FUN_0320248c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CDFReceiveReward");
    (*pcVar3)(plVar2,asStack_10,FUN_03237328,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CDFReceiveReward::StaticGetClass() */

long * CDFReceiveReward::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CDFReceiveReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CDFReceiveReward::GetClass() const */

long * CDFReceiveReward::GetClass(void)

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
  (*pcVar3)(plVar1,"CDFReceiveReward",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CDFReceiveReward::StaticNew() */

CDFReceiveReward * CDFReceiveReward::StaticNew(void)

{
  CDFReceiveReward *this;
  
  this = ::operator_new(0x38);
  CDFReceiveReward(this);
  return this;
}

