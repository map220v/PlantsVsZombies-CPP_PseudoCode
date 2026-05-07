// Class: PVZ1ModeAchievementData


/* PVZ1ModeAchievementData::PVZ1ModeAchievementData() */

void __thiscall PVZ1ModeAchievementData::PVZ1ModeAchievementData(PVZ1ModeAchievementData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_069c7dc0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementData_069c7e28;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PVZ1ModeAchievementData::~PVZ1ModeAchievementData() */

void __thiscall PVZ1ModeAchievementData::~PVZ1ModeAchievementData(PVZ1ModeAchievementData *this)

{
  *(undefined ***)this = &PTR_GetClass_069c7dc0;
  *(undefined ***)(this + 8) = &PTR__PVZ1ModeAchievementData_069c7e28;
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)(this + 0x48));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  std::vector<PVZ1AchievementTaskReward,std::allocator<PVZ1AchievementTaskReward>>::~vector
            ((vector<PVZ1AchievementTaskReward,std::allocator<PVZ1AchievementTaskReward>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementData::~PVZ1ModeAchievementData() */

void __thiscall PVZ1ModeAchievementData::~PVZ1ModeAchievementData(PVZ1ModeAchievementData *this)

{
  ~PVZ1ModeAchievementData(this + -8);
  return;
}


/* PVZ1ModeAchievementData::~PVZ1ModeAchievementData() */

void __thiscall PVZ1ModeAchievementData::~PVZ1ModeAchievementData(PVZ1ModeAchievementData *this)

{
  ~PVZ1ModeAchievementData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PVZ1ModeAchievementData::~PVZ1ModeAchievementData() */

void __thiscall PVZ1ModeAchievementData::~PVZ1ModeAchievementData(PVZ1ModeAchievementData *this)

{
  ~PVZ1ModeAchievementData(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeAchievementData::StaticClassInit() */

void PVZ1ModeAchievementData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1AchievementTaskReward");
    (*pcVar3)(plVar2,asStack_10,FUN_04dd8c6c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PVZ1ModeAchievementData");
    (*pcVar3)(plVar2,asStack_10,FUN_04ddc1bc,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeAchievementData::StaticGetClass() */

long * PVZ1ModeAchievementData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementData::GetClass() const */

long * PVZ1ModeAchievementData::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1ModeAchievementData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1ModeAchievementData::StaticNew() */

PVZ1ModeAchievementData * PVZ1ModeAchievementData::StaticNew(void)

{
  PVZ1ModeAchievementData *this;
  
  this = ::operator_new(0x60);
  PVZ1ModeAchievementData(this);
  return this;
}

