// Class: RenaissanceChallengeRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeRewardData::StaticClassInit() */

void RenaissanceChallengeRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggRechargeBundleData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ab0380,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RenaissanceChallengeRewardItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_03aac468,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RenaissanceChallengeRewardData");
    (*pcVar3)(plVar2,asStack_10,FUN_03ab0698,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeRewardData::StaticGetClass() */

long * RenaissanceChallengeRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RenaissanceChallengeRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaissanceChallengeRewardData::GetClass() const */

long * RenaissanceChallengeRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"RenaissanceChallengeRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaissanceChallengeRewardData::RenaissanceChallengeRewardData() */

void __thiscall
RenaissanceChallengeRewardData::RenaissanceChallengeRewardData(RenaissanceChallengeRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_06713e70;
  *(undefined ***)(this + 8) = &PTR__RenaissanceChallengeRewardData_06713ed8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* RenaissanceChallengeRewardData::StaticNew() */

RenaissanceChallengeRewardData * RenaissanceChallengeRewardData::StaticNew(void)

{
  RenaissanceChallengeRewardData *this;
  
  this = ::operator_new(0x48);
  RenaissanceChallengeRewardData(this);
  return this;
}


/* RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData() */

void __thiscall
RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData
          (RenaissanceChallengeRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_06713e70;
  *(undefined ***)(this + 8) = &PTR__RenaissanceChallengeRewardData_06713ed8;
  std::vector<EggRechargeBundleData,std::allocator<EggRechargeBundleData>>::~vector
            ((vector<EggRechargeBundleData,std::allocator<EggRechargeBundleData>> *)(this + 0x30));
  std::vector<RenaissanceChallengeRewardItemData,std::allocator<RenaissanceChallengeRewardItemData>>
  ::~vector((vector<RenaissanceChallengeRewardItemData,std::allocator<RenaissanceChallengeRewardItemData>>
             *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData() */

void __thiscall
RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData
          (RenaissanceChallengeRewardData *this)

{
  ~RenaissanceChallengeRewardData(this + -8);
  return;
}


/* RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData() */

void __thiscall
RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData
          (RenaissanceChallengeRewardData *this)

{
  ~RenaissanceChallengeRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData() */

void __thiscall
RenaissanceChallengeRewardData::~RenaissanceChallengeRewardData
          (RenaissanceChallengeRewardData *this)

{
  ~RenaissanceChallengeRewardData(this + -8);
  return;
}

