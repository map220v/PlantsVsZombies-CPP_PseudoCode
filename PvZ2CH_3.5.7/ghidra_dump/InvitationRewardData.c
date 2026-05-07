// Class: InvitationRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InvitationRewardData::StaticClassInit() */

void InvitationRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"InvitationRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_04e6b698,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InvitationRewardData::StaticGetClass() */

long * InvitationRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InvitationRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationRewardData::GetClass() const */

long * InvitationRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"InvitationRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InvitationRewardData::InvitationRewardData() */

void __thiscall InvitationRewardData::InvitationRewardData(InvitationRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069e4070;
  *(undefined ***)(this + 8) = &PTR__InvitationRewardData_069e40d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* InvitationRewardData::StaticNew() */

InvitationRewardData * InvitationRewardData::StaticNew(void)

{
  InvitationRewardData *this;
  
  this = ::operator_new(0x30);
  InvitationRewardData(this);
  return this;
}


/* InvitationRewardData::~InvitationRewardData() */

void __thiscall InvitationRewardData::~InvitationRewardData(InvitationRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069e4070;
  *(undefined ***)(this + 8) = &PTR__InvitationRewardData_069e40d8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to InvitationRewardData::~InvitationRewardData() */

void __thiscall InvitationRewardData::~InvitationRewardData(InvitationRewardData *this)

{
  ~InvitationRewardData(this + -8);
  return;
}


/* InvitationRewardData::~InvitationRewardData() */

void __thiscall InvitationRewardData::~InvitationRewardData(InvitationRewardData *this)

{
  ~InvitationRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to InvitationRewardData::~InvitationRewardData() */

void __thiscall InvitationRewardData::~InvitationRewardData(InvitationRewardData *this)

{
  ~InvitationRewardData(this + -8);
  return;
}

