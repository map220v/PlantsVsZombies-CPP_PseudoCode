// Class: NetworkDashboardInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NetworkDashboardInfo::StaticClassInit() */

void NetworkDashboardInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustTournamentData");
    (*pcVar3)(plVar2,asStack_10,FUN_0387d4bc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustPlayerData");
    (*pcVar3)(plVar2,asStack_10,FUN_0387d8ec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustAPIResponseLeagueChange");
    (*pcVar3)(plVar2,asStack_10,FUN_0387fd80,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustBonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0387d60c,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustLeaderboardRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_0387fbb8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NetworkDashboardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_038809cc,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NetworkDashboardInfo::StaticGetClass() */

long * NetworkDashboardInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDashboardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDashboardInfo::GetClass() const */

long * NetworkDashboardInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"NetworkDashboardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NetworkDashboardInfo::NetworkDashboardInfo() */

void __thiscall NetworkDashboardInfo::NetworkDashboardInfo(NetworkDashboardInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066ae4f0;
  JoustTournamentData::JoustTournamentData((JoustTournamentData *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* NetworkDashboardInfo::StaticNew() */

NetworkDashboardInfo * NetworkDashboardInfo::StaticNew(void)

{
  NetworkDashboardInfo *this;
  
  this = ::operator_new(0xa8);
  NetworkDashboardInfo(this);
  return this;
}


/* NetworkDashboardInfo::~NetworkDashboardInfo() */

void __thiscall NetworkDashboardInfo::~NetworkDashboardInfo(NetworkDashboardInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_066ae4f0;
  std::vector<JoustBonusInfo,std::allocator<JoustBonusInfo>>::~vector
            ((vector<JoustBonusInfo,std::allocator<JoustBonusInfo>> *)(this + 0x88));
  std::
  vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
  ::~vector((vector<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>,std::allocator<std::vector<JoustLeaderboardRewardInfo,std::allocator<JoustLeaderboardRewardInfo>>>>
             *)(this + 0x70));
  JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange
            ((JoustAPIResponseLeagueChange *)(this + 0x48));
  std::vector<JoustPlayerData,std::allocator<JoustPlayerData>>::~vector
            ((vector<JoustPlayerData,std::allocator<JoustPlayerData>> *)(this + 0x30));
  nop();
  return;
}


/* NetworkDashboardInfo::~NetworkDashboardInfo() */

void __thiscall NetworkDashboardInfo::~NetworkDashboardInfo(NetworkDashboardInfo *this)

{
  ~NetworkDashboardInfo(this);
  AK::FreeHook(this);
  return;
}

