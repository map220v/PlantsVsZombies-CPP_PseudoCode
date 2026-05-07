// Class: InvitationTaskData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationTaskData::StaticClassInit() */

void InvitationTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"InvitationTaskData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e6b86c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationTaskData::StaticGetClass() */

long * InvitationTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InvitationTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationTaskData::GetClass() const */

long * InvitationTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"InvitationTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationTaskData::InvitationTaskData() */

void __thiscall InvitationTaskData::InvitationTaskData(InvitationTaskData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e4860;
  *(undefined ***)(this + 8) = &PTR__InvitationTaskData_069e48c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* InvitationTaskData::StaticNew() */

InvitationTaskData * InvitationTaskData::StaticNew(void)

{
  InvitationTaskData *this;
  
  this = ::operator_new(0x30);
  InvitationTaskData(this);
  return this;
}


/* InvitationTaskData::~InvitationTaskData() */

void __thiscall InvitationTaskData::~InvitationTaskData(InvitationTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e4860;
  *(undefined ***)(this + 8) = &PTR__InvitationTaskData_069e48c8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to InvitationTaskData::~InvitationTaskData() */

void __thiscall InvitationTaskData::~InvitationTaskData(InvitationTaskData *this)

{
  ~InvitationTaskData(this + -8);
  return;
}


/* InvitationTaskData::~InvitationTaskData() */

void __thiscall InvitationTaskData::~InvitationTaskData(InvitationTaskData *this)

{
  ~InvitationTaskData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InvitationTaskData::~InvitationTaskData() */

void __thiscall InvitationTaskData::~InvitationTaskData(InvitationTaskData *this)

{
  ~InvitationTaskData(this + -8);
  return;
}

