// Class: PVZ1ModeAchievementRewardData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementRewardData::StaticClassInit() */

void PVZ1ModeAchievementRewardData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1ModeAchievementRewardData");
    (*pcVar2)(plVar1,asStack_10,FUN_04ddc478,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementRewardData::StaticGetClass() */

long * PVZ1ModeAchievementRewardData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementRewardData::GetClass() const */

long * PVZ1ModeAchievementRewardData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementRewardData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementRewardData::PVZ1ModeAchievementRewardData() */

void __thiscall
PVZ1ModeAchievementRewardData::PVZ1ModeAchievementRewardData(PVZ1ModeAchievementRewardData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c7e50;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementRewardData_069c7eb8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PVZ1ModeAchievementRewardData::StaticNew() */

PVZ1ModeAchievementRewardData * PVZ1ModeAchievementRewardData::StaticNew(void)

{
  PVZ1ModeAchievementRewardData *this;
  
  this = ::operator_new(0x30);
  PVZ1ModeAchievementRewardData(this);
  return this;
}


/* PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData() */

void __thiscall
PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData(PVZ1ModeAchievementRewardData *this)

{
  *(undefined ***)this = &PTR_GetClass_069c7e50;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementRewardData_069c7eb8;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData() */

void __thiscall
PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData(PVZ1ModeAchievementRewardData *this)

{
  ~PVZ1ModeAchievementRewardData(this + -8);
  return;
}


/* PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData() */

void __thiscall
PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData(PVZ1ModeAchievementRewardData *this)

{
  ~PVZ1ModeAchievementRewardData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData() */

void __thiscall
PVZ1ModeAchievementRewardData::~PVZ1ModeAchievementRewardData(PVZ1ModeAchievementRewardData *this)

{
  ~PVZ1ModeAchievementRewardData(this + -8);
  return;
}

