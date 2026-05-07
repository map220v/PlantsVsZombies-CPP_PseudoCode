// Class: S2C_DailyAchievementConfig


/* S2C_DailyAchievementConfig::S2C_DailyAchievementConfig() */

void __thiscall
S2C_DailyAchievementConfig::S2C_DailyAchievementConfig(S2C_DailyAchievementConfig *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0660c160;
  *(undefined ***)(this + 8) = &PTR__S2C_DailyAchievementConfig_0660c1c8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig() */

void __thiscall
S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig(S2C_DailyAchievementConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0660c160;
  *(undefined ***)(this + 8) = &PTR__S2C_DailyAchievementConfig_0660c1c8;
  std::vector<S2C_AchieveConfigInfo,std::allocator<S2C_AchieveConfigInfo>>::~vector
            ((vector<S2C_AchieveConfigInfo,std::allocator<S2C_AchieveConfigInfo>> *)(this + 0x38));
  std::vector<S2C_AchieveInfo,std::allocator<S2C_AchieveInfo>>::~vector
            ((vector<S2C_AchieveInfo,std::allocator<S2C_AchieveInfo>> *)(this + 0x20));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig() */

void __thiscall
S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig(S2C_DailyAchievementConfig *this)

{
  ~S2C_DailyAchievementConfig(this + -8);
  return;
}


/* S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig() */

void __thiscall
S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig(S2C_DailyAchievementConfig *this)

{
  ~S2C_DailyAchievementConfig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig() */

void __thiscall
S2C_DailyAchievementConfig::~S2C_DailyAchievementConfig(S2C_DailyAchievementConfig *this)

{
  ~S2C_DailyAchievementConfig(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* S2C_DailyAchievementConfig::StaticClassInit() */

void S2C_DailyAchievementConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"S2C_AchieveConfigInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0321fdb4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_DailyAchievementConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_03234930,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* S2C_DailyAchievementConfig::StaticGetClass() */

long * S2C_DailyAchievementConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DailyAchievementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DailyAchievementConfig::GetClass() const */

long * S2C_DailyAchievementConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"S2C_DailyAchievementConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* S2C_DailyAchievementConfig::StaticNew() */

S2C_DailyAchievementConfig * S2C_DailyAchievementConfig::StaticNew(void)

{
  S2C_DailyAchievementConfig *this;
  
  this = ::operator_new(0x50);
  S2C_DailyAchievementConfig(this);
  return this;
}

