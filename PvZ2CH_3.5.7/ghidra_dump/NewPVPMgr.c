// Class: NewPVPMgr


/* NewPVPMgr::GetSeasonEndTime() */

undefined4 __thiscall NewPVPMgr::GetSeasonEndTime(NewPVPMgr *this)

{
  return *(undefined4 *)(this + 0x280);
}


/* NewPVPMgr::GetSunUpgradeInfos() */

NewPVPMgr * __thiscall NewPVPMgr::GetSunUpgradeInfos(NewPVPMgr *this)

{
  return this + 0x4d0;
}


/* NewPVPMgr::GetCurrentEndPlayData() */

NewPVPMgr * __thiscall NewPVPMgr::GetCurrentEndPlayData(NewPVPMgr *this)

{
  return this + 0x370;
}


/* NewPVPMgr::GetCurrentRank() */

NewPVPMgr * __thiscall NewPVPMgr::GetCurrentRank(NewPVPMgr *this)

{
  return this + 0x2b4;
}


/* NewPVPMgr::GetLogActionCountInfo() */

NewPVPMgr * __thiscall NewPVPMgr::GetLogActionCountInfo(NewPVPMgr *this)

{
  return this + 0x4e8;
}


/* NewPVPMgr::GetCurrentZombiePacketInfos() */

NewPVPMgr * __thiscall NewPVPMgr::GetCurrentZombiePacketInfos(NewPVPMgr *this)

{
  return this + 0x508;
}


/* NewPVPMgr::ResetFrameInfo() */

void __thiscall NewPVPMgr::ResetFrameInfo(NewPVPMgr *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x478) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x488) = 0;
  *(undefined4 *)(this + 0x48c) = 0;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x484) = uVar1;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined4 *)(this + 0x4b0) = 0;
  *(undefined4 *)(this + 0x4b4) = 0;
  return;
}


/* NewPVPMgr::AddZombieUpgradeTriggerCount() */

void __thiscall NewPVPMgr::AddZombieUpgradeTriggerCount(NewPVPMgr *this)

{
  *(int *)(this + 0x504) = *(int *)(this + 0x504) + 1;
  return;
}


/* NewPVPMgr::GetAverageFPS() */

float __thiscall NewPVPMgr::GetAverageFPS(NewPVPMgr *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(float *)(this + 0x490) != 0.0);
  if (*(float *)(this + 0x494) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x498) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x49c) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x4a0) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x4a4) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x4a8) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x4ac) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  if (*(float *)(this + 0x4b0) != 0.0) {
    uVar2 = uVar2 + 1;
  }
  uVar1 = uVar2 + 1;
  if (*(float *)(this + 0x4b4) == 0.0) {
    uVar1 = uVar2;
  }
  return (*(float *)(this + 0x490) + *(float *)(this + 0x494) + *(float *)(this + 0x498) +
          *(float *)(this + 0x49c) + *(float *)(this + 0x4a0) + *(float *)(this + 0x4a4) +
          *(float *)(this + 0x4a8) + *(float *)(this + 0x4ac) + *(float *)(this + 0x4b0) +
         *(float *)(this + 0x4b4)) / (float)uVar1;
}


/* NewPVPMgr::canStartFrameCalc() */

bool __thiscall NewPVPMgr::canStartFrameCalc(NewPVPMgr *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  return *(float *)(this + 0x484) == fVar1;
}


/* NewPVPMgr::TryAddShovelCursor(Sexy::Touch const&) */

ShovelCursor * __thiscall NewPVPMgr::TryAddShovelCursor(NewPVPMgr *this,Touch *param_1)

{
  char cVar1;
  ShovelCursor *this_00;
  WateringCursor *this_01;
  NewPVPShovelCursor *this_02;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    this_02 = ::operator_new(0x48);
    NewPVPShovelCursor::NewPVPShovelCursor(this_02,param_1);
    return (ShovelCursor *)this_02;
  }
  cVar1 = WaterShovelUtil::IsInWaterShovel();
  if (cVar1 == '\0') {
    this_00 = ::operator_new(0x48);
    ShovelCursor::ShovelCursor(this_00,param_1);
    return this_00;
  }
  this_01 = ::operator_new(0x48);
  WateringCursor::WateringCursor(this_01,param_1);
  return (ShovelCursor *)this_01;
}


/* NewPVPMgr::TryAddPlantfoodCursor(Sexy::Touch const&) */

PlantfoodCursor * __thiscall NewPVPMgr::TryAddPlantfoodCursor(NewPVPMgr *this,Touch *param_1)

{
  char cVar1;
  PlantfoodCursor *this_00;
  NewPVPPlantfoodCursor *this_01;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    this_00 = ::operator_new(0x48);
    PlantfoodCursor::PlantfoodCursor(this_00,param_1);
    return this_00;
  }
  this_01 = ::operator_new(0x48);
  NewPVPPlantfoodCursor::NewPVPPlantfoodCursor(this_01,param_1);
  return (PlantfoodCursor *)this_01;
}


/* NewPVPMgr::GetGlobalZombieCreatedCD() */

undefined4 __thiscall NewPVPMgr::GetGlobalZombieCreatedCD(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x10);
}


/* NewPVPMgr::GetPlantLevelUpValue() */

undefined4 __thiscall NewPVPMgr::GetPlantLevelUpValue(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x18);
}


/* NewPVPMgr::GetMaxZombieCacheSize() */

undefined4 __thiscall NewPVPMgr::GetMaxZombieCacheSize(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x14);
}


/* NewPVPMgr::GetStartingSun() */

undefined4 __thiscall NewPVPMgr::GetStartingSun(NewPVPMgr *this)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 == '\0') {
    return *(undefined4 *)(*(long *)(this + 0x20) + 0x1c);
  }
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x178);
}


/* NewPVPMgr::GetSunAddBase() */

undefined4 __thiscall NewPVPMgr::GetSunAddBase(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x24);
}


/* NewPVPMgr::GetTutorialSunAdd() */

undefined4 __thiscall NewPVPMgr::GetTutorialSunAdd(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x17c);
}


/* NewPVPMgr::GetMaxPlantNum(int) */

undefined4 __thiscall NewPVPMgr::GetMaxPlantNum(NewPVPMgr *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(this + 0x20) + 0xb8);
  uVar2 = FUN_034b05a0(uVar4,*(undefined8 *)(*(long *)(this + 0x20) + 0xc0));
  uVar1 = 0;
  if ((ulong)(long)param_1 < uVar2) {
    lVar3 = FUN_034b05d0(uVar4,(long)param_1);
    uVar1 = *(undefined4 *)(lVar3 + 0x10);
  }
  return uVar1;
}


/* NewPVPMgr::GetCurrentMaxPlantNum() */

void __thiscall NewPVPMgr::GetCurrentMaxPlantNum(NewPVPMgr *this)

{
  GetMaxPlantNum(this,*(int *)(this + 0x474));
  return;
}


/* NewPVPMgr::IsSunUpgradeFull() */

bool __thiscall NewPVPMgr::IsSunUpgradeFull(NewPVPMgr *this)

{
  ulong uVar1;
  
  uVar1 = FUN_034b05a0(*(undefined8 *)(*(long *)(this + 0x20) + 0xb8),
                       *(undefined8 *)(*(long *)(this + 0x20) + 0xc0));
  return uVar1 <= (ulong)(long)(*(int *)(this + 0x474) + 1);
}


/* NewPVPMgr::GetSunUpgradeCost(int) */

undefined4 __thiscall NewPVPMgr::GetSunUpgradeCost(NewPVPMgr *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(this + 0x20) + 0xb8);
    uVar1 = FUN_034b05a0(uVar4,*(undefined8 *)(*(long *)(this + 0x20) + 0xc0));
    if ((ulong)(long)(param_1 + -1) < uVar1) {
      lVar2 = FUN_034b05d0(uVar4,(long)(param_1 + -1));
      uVar3 = *(undefined4 *)(lVar2 + 0xc);
    }
  }
  return uVar3;
}


/* NewPVPMgr::GetSafeCost(int) */

int __thiscall NewPVPMgr::GetSafeCost(NewPVPMgr *this,int param_1)

{
  int iVar1;
  
  iVar1 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
  if (-1 < iVar1 - param_1) {
    iVar1 = param_1;
  }
  return iVar1;
}


/* NewPVPMgr::GetMaxHealthAmount(bool) */

undefined4 NewPVPMgr::GetMaxHealthAmount(bool param_1)

{
  return *(undefined4 *)(*(long *)((ulong)param_1 + 0x20) + 0x78);
}


/* NewPVPMgr::GetDamageDealt(bool) */

undefined4 NewPVPMgr::GetDamageDealt(bool param_1)

{
  return *(undefined4 *)(*(long *)((ulong)param_1 + 0x20) + 0x7c);
}


/* NewPVPMgr::GetSunCostMultiplier() */

undefined4 __thiscall NewPVPMgr::GetSunCostMultiplier(NewPVPMgr *this)

{
  return *(undefined4 *)(*(long *)(this + 0x20) + 0x80);
}


/* NewPVPMgr::GetAreaHowToPlayData() */

long __thiscall NewPVPMgr::GetAreaHowToPlayData(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0xd0;
}


/* NewPVPMgr::GetZombiePacketInfos() */

long __thiscall NewPVPMgr::GetZombiePacketInfos(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x48;
}


/* NewPVPMgr::GetPlantPacketInfos() */

long __thiscall NewPVPMgr::GetPlantPacketInfos(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x60;
}


/* NewPVPMgr::GetZombieSkillInfos() */

long __thiscall NewPVPMgr::GetZombieSkillInfos(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x88;
}


/* NewPVPMgr::GetZombieUpgradeInfos() */

long __thiscall NewPVPMgr::GetZombieUpgradeInfos(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0xa0;
}


/* NewPVPMgr::GetChooserPlantBlacklist() */

long __thiscall NewPVPMgr::GetChooserPlantBlacklist(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x100;
}


/* NewPVPMgr::GetTutorialPlantInfo() */

long __thiscall NewPVPMgr::GetTutorialPlantInfo(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x180;
}


/* NewPVPMgr::GetCPUInfo(int) */

undefined * __thiscall NewPVPMgr::GetCPUInfo(NewPVPMgr *this,int param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(this + 0x20) + 0x148);
  uVar1 = FUN_034b05e4(uVar3,*(undefined8 *)(*(long *)(this + 0x20) + 0x150));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined *)FUN_034b0614(uVar3,(long)param_1);
    return puVar2;
  }
  return &DAT_06aa3c38;
}


/* NewPVPMgr::GetCPUInfoSize() */

void __thiscall NewPVPMgr::GetCPUInfoSize(NewPVPMgr *this)

{
  FUN_034b05e4(*(undefined8 *)(*(long *)(this + 0x20) + 0x148),
               *(undefined8 *)(*(long *)(this + 0x20) + 0x150));
  return;
}


/* NewPVPMgr::GetPlantPacketInfo(int) */

undefined * __thiscall NewPVPMgr::GetPlantPacketInfo(NewPVPMgr *this,int param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(this + 0x20) + 0x60);
  uVar1 = FUN_034b0620(uVar3,*(undefined8 *)(*(long *)(this + 0x20) + 0x68));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined *)FUN_034b0648(uVar3);
    return puVar2;
  }
  return &DAT_06aa3b70;
}


/* NewPVPMgr::GetSyncQueueInterval() */

float __thiscall NewPVPMgr::GetSyncQueueInterval(NewPVPMgr *this)

{
  return (float)*(int *)(this + 0xd4);
}


/* NewPVPMgr::GetSyncPlayerInterval() */

float __thiscall NewPVPMgr::GetSyncPlayerInterval(NewPVPMgr *this)

{
  return (float)*(int *)(this + 0xd8);
}


/* NewPVPMgr::GetSyncGameInterval() */

float __thiscall NewPVPMgr::GetSyncGameInterval(NewPVPMgr *this)

{
  return (float)*(int *)(this + 0xdc);
}


/* NewPVPMgr::IsCurrentMatchingTimeout(bool) */

bool __thiscall NewPVPMgr::IsCurrentMatchingTimeout(NewPVPMgr *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (!param_1) {
    bVar1 = *(int *)(this + 0x88) == 1;
  }
  return bVar1;
}


/* NewPVPMgr::GetMinEstimitedMatchingTime() */

undefined4 __thiscall NewPVPMgr::GetMinEstimitedMatchingTime(NewPVPMgr *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_034ad9ac(*(undefined8 *)(this + 0xf0),0);
  return *puVar1;
}


/* NewPVPMgr::GetMaxEstimitedMatchingTime() */

undefined4 __thiscall NewPVPMgr::GetMaxEstimitedMatchingTime(NewPVPMgr *this)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_034ad9ac(*(undefined8 *)(this + 0xf0),1);
  return *puVar1;
}


/* NewPVPMgr::GetTutorialPlantList() */

long __thiscall NewPVPMgr::GetTutorialPlantList(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x160;
}


/* NewPVPMgr::GetUnsyncPlantBlacklist() */

long __thiscall NewPVPMgr::GetUnsyncPlantBlacklist(NewPVPMgr *this)

{
  return *(long *)(this + 0x20) + 0x130;
}


/* NewPVPMgr::GetCurrentBattleIndex() */

undefined4 __thiscall NewPVPMgr::GetCurrentBattleIndex(NewPVPMgr *this)

{
  return *(undefined4 *)(this + 0x368);
}


/* NewPVPMgr::GetInBattleZombies() */

undefined * __thiscall NewPVPMgr::GetInBattleZombies(NewPVPMgr *this)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 800);
  uVar1 = FUN_034b0684(uVar3,*(undefined8 *)(this + 0x328));
  if ((ulong)(long)*(int *)(this + 0x368) < uVar1) {
    puVar2 = (undefined *)FUN_034b06b4(uVar3);
    return puVar2;
  }
  return &DAT_06aa3d40;
}


/* NewPVPMgr::GetLevelUpPieceRequired(int, int) */

undefined4 __thiscall NewPVPMgr::GetLevelUpPieceRequired(NewPVPMgr *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x308);
  uVar1 = FUN_034b0684(uVar4,*(undefined8 *)(this + 0x310));
  if ((ulong)(long)param_1 < uVar1) {
    puVar2 = (undefined8 *)FUN_034b06b4(uVar4);
    uVar4 = *puVar2;
    uVar1 = FUN_034ad994(uVar4,puVar2[1]);
    if ((ulong)(long)(param_2 + -1) < uVar1) {
      puVar3 = (undefined4 *)FUN_034ad9ac(uVar4);
      return *puVar3;
    }
  }
  return 0xffffffff;
}


/* NewPVPMgr::GetFPSLimit(bool) */

undefined4 __thiscall NewPVPMgr::GetFPSLimit(NewPVPMgr *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x26c);
  if (!param_1) {
    uVar1 = *(undefined4 *)(this + 0x270);
  }
  return uVar1;
}


/* NewPVPMgr::ReachFPSLimit(bool) */

bool __thiscall NewPVPMgr::ReachFPSLimit(NewPVPMgr *this,bool param_1)

{
  int iVar1;
  float fVar2;
  
  if (!param_1) {
    fVar2 = (float)GetAverageFPS(this);
    iVar1 = GetFPSLimit(this,false);
    return fVar2 < (float)iVar1;
  }
  fVar2 = (float)GetAverageFPS(this);
  iVar1 = GetFPSLimit(this,true);
  return fVar2 < (float)iVar1;
}


/* NewPVPMgr::GetLowFPSCount() */

undefined4 __thiscall NewPVPMgr::GetLowFPSCount(NewPVPMgr *this)

{
  return *(undefined4 *)(this + 0x274);
}


/* NewPVPMgr::GetFPSBlockStart() */

undefined4 __thiscall NewPVPMgr::GetFPSBlockStart(NewPVPMgr *this)

{
  return *(undefined4 *)(this + 0x278);
}


/* NewPVPMgr::IsLastGameReachFPSLimit() */

bool __thiscall NewPVPMgr::IsLastGameReachFPSLimit(NewPVPMgr *this)

{
  return *(int *)(this + 0x27c) == 1;
}


/* NewPVPMgr::IsSeasonEnd() */

bool __thiscall NewPVPMgr::IsSeasonEnd(NewPVPMgr *this)

{
  return *(int *)(this + 0x284) == 1;
}


/* NewPVPMgr::IsThirdSeason() */

bool __thiscall NewPVPMgr::IsThirdSeason(NewPVPMgr *this)

{
  return 2 < *(int *)(this + 0x288);
}


/* NewPVPMgr::KillNetConnectingUI() */

void __thiscall NewPVPMgr::KillNetConnectingUI(NewPVPMgr *this)

{
  if (*(long *)(this + 0x420) != 0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c]);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x420));
    *(undefined8 *)(this + 0x420) = 0;
  }
  return;
}


/* NewPVPMgr::ShowNetConnectingUI(std::string const&) */

void __thiscall NewPVPMgr::ShowNetConnectingUI(NewPVPMgr *this,string *param_1)

{
  NetConnectingUI *this_00;
  long lVar1;
  
  KillNetConnectingUI(this);
  lVar1 = *(long *)(this + 0x420);
  if (lVar1 == 0) {
    this_00 = ::operator_new(0x100);
    NetConnectingUI::NetConnectingUI(this_00,param_1);
    *(NetConnectingUI **)(this + 0x420) = this_00;
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this_00);
    lVar1 = *(long *)(this + 0x420);
  }
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),lVar1);
  LawnApp::PushOverlaysToTop(gLawnApp);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
            (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x420));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetPlantCost(int, int) */

void NewPVPMgr::GetPlantCost(int param_1,int param_2)

{
  undefined4 uVar1;
  PlantNameMapperServerID *this;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
  PlantNameMapperServerID::GetTypeForID(this,param_2);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x28));
  uVar1 = *(undefined4 *)(lVar2 + 0x18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* NewPVPMgr::AddZombieMergeCount(int) */

void __thiscall NewPVPMgr::AddZombieMergeCount(NewPVPMgr *this,int param_1)

{
  int *piVar1;
  int local_4;
  
  *(int *)(this + 0x4fc) = *(int *)(this + 0x4fc) + 1;
  local_4 = param_1;
  piVar1 = eastl::max_alt<int>(&local_4,(int *)(this + 0x500));
  *(int *)(this + 0x500) = *piVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::TryAddPlantCursor(Sexy::Touch const&, Sexy::RtWeakPtr<SeedPacket>) */

void __thiscall
NewPVPMgr::TryAddPlantCursor
          (undefined8 param_1_00,undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_3)

{
  char cVar1;
  undefined4 uVar2;
  PlantCursor *pPVar3;
  long lVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    cVar1 = OverwhelmUtils::IsPlayingOverwhelm();
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
      pPVar3 = ::operator_new(0x58);
      PlantCursor::PlantCursor(pPVar3,param_1,aRStack_10,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
      uVar2 = FUN_034ad7e0(*(undefined4 *)(lVar4 + 0x1cc));
      pPVar3 = ::operator_new(0x78);
      OverwhelmCursor::OverwhelmCursor((OverwhelmCursor *)pPVar3,param_1,aRStack_10,uVar2);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_3);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_3);
    uVar2 = FUN_034ad7e0(*(undefined4 *)(lVar4 + 0x1cc));
    pPVar3 = ::operator_new(0x58);
    NewPVPPlantCursor::NewPVPPlantCursor((NewPVPPlantCursor *)pPVar3,param_1,aRStack_10,uVar2);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::TryShowFPSWarning() */

void __thiscall NewPVPMgr::TryShowFPSWarning(NewPVPMgr *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  UIMessageBox *this_00;
  Image *pIVar4;
  char *__s;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsLastGameReachFPSLimit(this);
  if ((cVar1 != '\0') &&
     (this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog(),
     this_00 != (UIMessageBox *)0x0)) {
    iVar2 = GetLowFPSCount(this);
    iVar3 = GetFPSBlockStart(this);
    if (iVar3 < iVar2) {
      __s = "[NEW_PVP_MAIN_VIEW_FPS_LAST_GAME_INVALID_WARNING]";
    }
    else {
      __s = "[NEW_PVP_MAIN_VIEW_FPS_LAST_GAME_WARNING]";
    }
    std::string::string(asStack_18,__s);
    std::string::string(asStack_10,"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this_00,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    UIMessageBox::SetShowType(this_00,2);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar4 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this_00,pIVar4);
    std::string::~string(asStack_10);
    nop();
    UIMessageBox::SetBackgroundDarken(this_00,true,0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::TryShowSeasonEndTips() */

void NewPVPMgr::TryShowSeasonEndTips(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    std::string::string(asStack_18,"[NEW_PVP_MAIN_VIEW_SEASON_END_TIPS]");
    std::string::string(asStack_10,"[REVIVE_TIP]");
    UIMessageBox::SetMessage(this,asStack_18,asStack_10);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    UIMessageBox::SetShowType(this,2);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    UIMessageBox::SetBackgroundDarken(this,true,0.5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::ResetLogs() */

void __thiscall NewPVPMgr::ResetLogs(NewPVPMgr *this)

{
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  *(undefined4 *)(this + 0x4c4) = 0;
  std::vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>>::clear
            ((vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>> *)(this + 0x4d0));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x508));
  *(undefined4 *)(this + 0x4e8) = 0;
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x4f8) = 0;
  *(undefined4 *)(this + 0x4f4) = 0;
  *(undefined4 *)(this + 0x4fc) = 0;
  *(undefined4 *)(this + 0x500) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x504) = 0;
  return;
}


/* NewPVPMgr::StartFrameCalc() */

void __thiscall NewPVPMgr::StartFrameCalc(NewPVPMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = canStartFrameCalc(this);
  if (cVar1 != '\0') {
    ResetFrameInfo(this);
    uVar2 = PVZ_RealT();
    *(undefined4 *)(this + 0x484) = uVar2;
  }
  return;
}


/* NewPVPMgr::updateFrameCalc() */

void __thiscall NewPVPMgr::updateFrameCalc(NewPVPMgr *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = (float)PVZ_EOT();
  if (*(float *)(this + 0x484) != fVar4) {
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar4 = (float)FUN_034ad6c4(*(undefined4 *)(lVar3 + 0x20));
    if (*(float *)(this + 0x478) != fVar4) {
      *(float *)(this + 0x478) = fVar4;
      *(int *)(this + 0x480) = *(int *)(this + 0x480) + 1;
      *(float *)(this + 0x47c) = *(float *)(this + 0x47c) + fVar4;
    }
    fVar4 = (float)PVZ_RealT();
    if (1.0 <= fVar4 - *(float *)(this + 0x484)) {
      iVar1 = *(int *)(this + 0x480);
      fVar4 = *(float *)(this + 0x47c);
      iVar2 = *(int *)(this + 0x488);
      *(float *)(this + (long)(iVar2 % 10) * 4 + 0x490) = fVar4 / (float)iVar1;
      *(int *)(this + 0x488) = iVar2 + 1;
      *(undefined4 *)(this + 0x480) = 0;
      *(undefined4 *)(this + 0x478) = 0;
      *(undefined4 *)(this + 0x47c) = 0;
      *(float *)(this + 0x48c) = fVar4 / (float)iVar1;
      uVar5 = PVZ_RealT();
      *(undefined4 *)(this + 0x484) = uVar5;
      return;
    }
  }
  return;
}


/* NewPVPMgr::Update() */

void __thiscall NewPVPMgr::Update(NewPVPMgr *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = (float)PVZ_EOT();
  if (*(float *)(this + 0x484) != fVar4) {
    lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    fVar4 = (float)FUN_034ad6c4(*(undefined4 *)(lVar3 + 0x20));
    if (*(float *)(this + 0x478) != fVar4) {
      *(float *)(this + 0x478) = fVar4;
      *(int *)(this + 0x480) = *(int *)(this + 0x480) + 1;
      *(float *)(this + 0x47c) = *(float *)(this + 0x47c) + fVar4;
    }
    fVar4 = (float)PVZ_RealT();
    if (1.0 <= fVar4 - *(float *)(this + 0x484)) {
      iVar1 = *(int *)(this + 0x480);
      fVar4 = *(float *)(this + 0x47c);
      iVar2 = *(int *)(this + 0x488);
      *(float *)(this + (long)(iVar2 % 10) * 4 + 0x490) = fVar4 / (float)iVar1;
      *(int *)(this + 0x488) = iVar2 + 1;
      *(undefined4 *)(this + 0x480) = 0;
      *(undefined4 *)(this + 0x478) = 0;
      *(undefined4 *)(this + 0x47c) = 0;
      *(float *)(this + 0x48c) = fVar4 / (float)iVar1;
      uVar5 = PVZ_RealT();
      *(undefined4 *)(this + 0x484) = uVar5;
      return;
    }
  }
  return;
}


/* NewPVPMgr::GetCurrentTurn() */

void NewPVPMgr::GetCurrentTurn(void)

{
  char cVar1;
  NewPVPGameSubsystem *this;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  OfferBundleConfig::GetAvatarPiecesRewardCount((OfferBundleConfig *)this);
  return;
}


/* NewPVPMgr::GetMaxTurn() */

void NewPVPMgr::GetMaxTurn(void)

{
  char cVar1;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::GetMaxTurn();
  return;
}


/* NewPVPMgr::HasFullHitpoints() */

void NewPVPMgr::HasFullHitpoints(void)

{
  NewPVPGameSubsystem *pNVar1;
  
  pNVar1 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  FUN_034ad820(*(undefined4 *)(pNVar1 + 0xb0),pNVar1 + 0xb4);
  return;
}


/* NewPVPMgr::CanUpgradeSun(int) */

bool __thiscall NewPVPMgr::CanUpgradeSun(NewPVPMgr *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    uVar4 = FUN_034b05a0(*(undefined8 *)(*(long *)(this + 0x20) + 0xb8),
                         *(undefined8 *)(*(long *)(this + 0x20) + 0xc0));
    if ((ulong)(long)param_1 < uVar4) {
      Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      iVar2 = NewPVPGameSubsystem::GetCurrentSun();
      iVar3 = GetSunUpgradeCost(this,param_1);
      return iVar3 <= iVar2;
    }
  }
  return false;
}


/* NewPVPMgr::GetOppoentZombieCacheDatas() */

void NewPVPMgr::GetOppoentZombieCacheDatas(void)

{
  NewPVPGameSubsystem *this;
  
  this = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)this);
  return;
}


/* NewPVPMgr::IsCurrentGameReachFPSLimit() */

void NewPVPMgr::IsCurrentGameReachFPSLimit(void)

{
  NewPVPDataSubsystem *pNVar1;
  
  pNVar1 = Board::GetGameSubSystem<NewPVPDataSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  FUN_034ad928(pNVar1[0x84]);
  return;
}


/* NewPVPMgr::IsCurrentGameInvalid() */

bool __thiscall NewPVPMgr::IsCurrentGameInvalid(NewPVPMgr *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = IsCurrentGameReachFPSLimit();
  bVar1 = false;
  if (cVar2 != '\0') {
    iVar3 = GetLowFPSCount(this);
    iVar4 = GetFPSBlockStart(this);
    bVar1 = iVar4 < iVar3;
  }
  return bVar1;
}


/* NewPVPMgr::GetCurrentSelectedPlants() */

vector<int,std::allocator<int>> * __thiscall NewPVPMgr::GetCurrentSelectedPlants(NewPVPMgr *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector<int,std::allocator<int>> *pvVar2;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar1 != '\0') {
    pvVar2 = (vector<int,std::allocator<int>> *)GetTutorialPlantList(this);
    return pvVar2;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x428));
  if (cVar1 == '\0') {
    return (vector<int,std::allocator<int>> *)(this + 0x428);
  }
  pvVar2 = (vector<int,std::allocator<int>> *)PlayerInfo::GetNewPVPSelectedPlants(this_01);
  return pvVar2;
}


/* NewPVPMgr::SetTutorialStep(NewPVPTutorialStep) */

void __thiscall NewPVPMgr::SetTutorialStep(NewPVPMgr *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x4b8) = param_2;
  MessageRouter::Post<int,NewPVPTutorialStep>
            ((MessageRouter *)gMessageRouter,Message::NotifyTutorialStep,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::areaDisabled(std::string const&) */

void __thiscall NewPVPMgr::areaDisabled(NewPVPMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)local_18,L"NewPVPGameModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)local_18);
  Sexy::RtName::~RtName((RtName *)local_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  cVar2 = '\0';
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x48));
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 0x48));
    while( true ) {
      cVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
      if (!(bool)cVar2) break;
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar2 = std::operator==(asStack_28,param_1);
      if (cVar2 != '\0') {
        std::string::~string(asStack_28);
        break;
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsAreaDisabled(std::string const&) */

void __thiscall NewPVPMgr::IsAreaDisabled(NewPVPMgr *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  string asStack_28 [8];
  undefined8 uStack_20;
  undefined8 auStack_18 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)auStack_18,L"NewPVPGameModuleProps");
  PVZDB::GetIdByAlias(aRStack_38,uVar3,0x14,(RtName *)auStack_18);
  Sexy::RtName::~RtName((RtName *)auStack_18);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_30);
  cVar2 = '\0';
  if (bVar1) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    uStack_20 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(lVar4 + 0x48));
    auStack_18[0] =
         std::
         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(lVar4 + 0x48));
    while( true ) {
      cVar2 = __gnu_cxx::operator!=((__normal_iterator *)&uStack_20,(__normal_iterator *)auStack_18)
      ;
      if (!(bool)cVar2) break;
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      FUN_05475d88(asStack_28,uVar3);
      cVar2 = std::operator==(asStack_28,param_1);
      if (cVar2 != '\0') {
        std::string::~string(asStack_28);
        break;
      }
      std::string::~string(asStack_28);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_20);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  Sexy::RtId::~RtId(aRStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsCurrentLevelAreaDisabled() */

void __thiscall NewPVPMgr::IsCurrentLevelAreaDisabled(NewPVPMgr *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00(asStack_10,uVar2);
  }
  uVar1 = areaDisabled(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::CreateAreaData(std::string) */

void NewPVPMgr::CreateAreaData(ThemeData *param_1,undefined8 param_2,string *param_3)

{
  undefined8 uVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ThemeData::ThemeData(param_1);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(param_3);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar1,0x84,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* NewPVPMgr::TryUpgradePlant(int, int) */

void __thiscall NewPVPMgr::TryUpgradePlant(NewPVPMgr *this,int param_1,int param_2)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::TryUpgradePlant(this_00,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetNetworkZombieLevelUpData(int, Network_NewPVPPropertySheet const*) */

void __thiscall
NewPVPMgr::GetNetworkZombieLevelUpData
          (NewPVPMgr *this,int param_1,Network_NewPVPPropertySheet *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_034cec6c(*(undefined8 *)(param_2 + 0xe8));
  uVar3 = FUN_034cecbc(*(undefined8 *)(param_2 + 0xf0));
  local_18 = FUN_034e0988(uVar2,uVar3,param_1);
  local_10 = FUN_034cecbc(*(undefined8 *)(param_2 + 0xf0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa3e08;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsValidPlant(int, int) */

void NewPVPMgr::IsValidPlant(int param_1,int param_2)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)((ulong)(uint)param_1 + 0x458);
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = FUN_034e0c10(uVar4,uVar5,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  bVar1 = false;
  if (bVar2) {
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar3 = GetCurrentTurn();
    bVar1 = *(int *)(lVar6 + 4) <= iVar3;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombiePacketInfoById(int) */

void __thiscall NewPVPMgr::GetZombiePacketInfoById(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x48));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x48));
  local_18 = FUN_034e142c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa3a30;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsValidZombie(int, int) */

void __thiscall NewPVPMgr::IsValidZombie(NewPVPMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x48));
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x48));
  local_20 = FUN_034e0eb0(uVar4,uVar5,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  bVar2 = false;
  if (bVar1) {
    lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(lVar6 + 8);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_034e16c0(uVar4,uVar5,param_2);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    bVar2 = false;
    if (bVar1) {
      iVar3 = GetCurrentTurn();
      piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      bVar2 = *piVar7 <= iVar3;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieCost(int, int) */

void __thiscall NewPVPMgr::GetZombieCost(NewPVPMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x48));
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x48));
  local_20 = FUN_034e1084(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(lVar5 + 8);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_034e19d0(uVar3,uVar4,param_2);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar2 = *(undefined4 *)(lVar5 + 8);
      goto LAB_034e1afc;
    }
  }
  uVar2 = 0xffffffff;
LAB_034e1afc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieCostAdd(int, int) */

void __thiscall NewPVPMgr::GetZombieCostAdd(NewPVPMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x48));
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x48));
  local_20 = FUN_034e1258(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(lVar5 + 8);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = FUN_034e1cd0(uVar3,uVar4,param_2);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar2 = *(undefined4 *)(lVar5 + 0xc);
      goto LAB_034e1dfc;
    }
  }
  uVar2 = 0xffffffff;
LAB_034e1dfc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieLevelUpData(int) */

void __thiscall NewPVPMgr::GetZombieLevelUpData(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x118));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x118));
  local_18 = FUN_034e2084(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x118));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa37c8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieLevelUpValueInfo(int, int) */

void __thiscall NewPVPMgr::GetZombieLevelUpValueInfo(NewPVPMgr *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x118));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x118));
  local_18 = FUN_034e2318(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x118));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar5 = 0;
    if (param_2 != 0) {
      lVar5 = (long)(param_2 + -1);
    }
    if (local_8 == ___stack_chk_guard) {
      FUN_034b05dc(*(undefined8 *)(puVar4 + 0x10));
      return;
    }
  }
  else {
    puVar4 = &DAT_06aa3d30;
    lVar5 = ___stack_chk_guard;
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4,lVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieSkillInfo(int) */

void __thiscall NewPVPMgr::GetZombieSkillInfo(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0x88));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0x88));
  local_18 = FUN_034e25f8(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0x88));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa3cc0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieUpgradeInfo(int) */

void __thiscall NewPVPMgr::GetZombieUpgradeInfo(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(*(long *)(this + 0x20) + 0xa0));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(*(long *)(this + 0x20) + 0xa0));
  local_18 = FUN_034e288c(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(*(long *)(this + 0x20) + 0xa0));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa39f8;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetPlayerData(bool) */

void __thiscall NewPVPMgr::GetPlayerData(NewPVPMgr *this,bool param_1)

{
  bool bVar1;
  NetworkMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(asStack_28,(string *)&local_18);
  std::string::~string((string *)&local_18);
  lVar2 = Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  uVar3 = FUN_034cf63c(*(undefined8 *)(lVar2 + 0x20));
  uVar4 = FUN_034cf68c(*(undefined8 *)(lVar2 + 0x28));
  FUN_05475d88((string *)&local_18,asStack_28);
  local_10 = param_1;
  local_20 = FUN_034e30f4(uVar3,uVar4,(string *)&local_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_18);
  local_18 = FUN_034cf68c(*(undefined8 *)(lVar2 + 0x28));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
  if (bVar1) {
    puVar5 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
  }
  else {
    puVar5 = &DAT_06aa3728;
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* NewPVPMgr::GetOppoentPlayerData() */

undefined * __thiscall NewPVPMgr::GetOppoentPlayerData(NewPVPMgr *this)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  lVar1 = Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  uVar2 = FUN_034b04a4(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  if (1 < uVar2) {
    puVar3 = (undefined *)GetPlayerData(this,false);
    return puVar3;
  }
  return &DAT_06aa3728;
}


/* NewPVPMgr::GetSelfPlayerData() */

undefined * __thiscall NewPVPMgr::GetSelfPlayerData(NewPVPMgr *this)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  lVar1 = Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  uVar2 = FUN_034b04a4(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  if (1 < uVar2) {
    puVar3 = (undefined *)GetPlayerData(this,true);
    return puVar3;
  }
  return &DAT_06aa3728;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetTargetRankInfo(int, int) */

void __thiscall NewPVPMgr::GetTargetRankInfo(NewPVPMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x228);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034e3514(uVar2,uVar3,CONCAT44(param_2,param_1));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    puVar4 = (undefined *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  else {
    puVar4 = &DAT_06aa3930;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetZombieRarityById(int) */

void __thiscall NewPVPMgr::GetZombieRarityById(NewPVPMgr *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x2f0);
  local_8 = ___stack_chk_guard;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034e37ac(uVar3,uVar4,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar2 = *(undefined4 *)(lVar5 + 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetCurrentZombiePacketLevel(int) */

void __thiscall NewPVPMgr::GetCurrentZombiePacketLevel(NewPVPMgr *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x338);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034e3a34(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar5 = 0;
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar5 = *(undefined4 *)(lVar4 + 4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::onObtainedZombieCardPiece(int, int) */

void __thiscall NewPVPMgr::onObtainedZombieCardPiece(NewPVPMgr *this,int param_1,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x350);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_034e3e90(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + param_2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsUnsyncDyingPlant(int) */

void __thiscall NewPVPMgr::IsUnsyncDyingPlant(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  vector *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)GetUnsyncPlantBlacklist(this);
  std::vector<int,std::allocator<int>>::vector(avStack_20,pvVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = FUN_034cf430(uVar3,uVar4,param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::IsInCurrentBattleInfo(int) */

void __thiscall NewPVPMgr::IsInCurrentBattleInfo(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  vector *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)GetInBattleZombies(this);
  std::vector<int,std::allocator<int>>::vector(avStack_20,pvVar2);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  local_30 = FUN_034cf604(uVar3,uVar4,param_1);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* NewPVPMgr::SetCurrentSelectedMaps(std::vector<int, std::allocator<int> > const&) */

void __thiscall NewPVPMgr::SetCurrentSelectedMaps(NewPVPMgr *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x440),param_1);
  return;
}


/* NewPVPMgr::SetCurrentSelectedPlants(std::vector<int, std::allocator<int> > const&) */

void __thiscall NewPVPMgr::SetCurrentSelectedPlants(NewPVPMgr *this,vector *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x428),param_1);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::SetNewPVPSelectedPlants(this_01,(vector *)(this + 0x428));
    return;
  }
  return;
}


/* NewPVPMgr::GetZombieUpgradeInfoForLog() */

void __thiscall NewPVPMgr::GetZombieUpgradeInfoForLog(NewPVPMgr *this)

{
  Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::GetZombieUpgradeInfoForLog();
  return;
}


/* NewPVPMgr::~NewPVPMgr() */

void __thiscall NewPVPMgr::~NewPVPMgr(NewPVPMgr *this)

{
  *(undefined ***)this = &PTR__NewPVPMgr_0664d4d0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x18))();
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x508));
  std::vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>>::~vector
            ((vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>> *)(this + 0x4d0));
  std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
  ~vector((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>> *)
          (this + 0x458));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x440));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x428));
  NewPVPSaveBattleInfoData::~NewPVPSaveBattleInfoData((NewPVPSaveBattleInfoData *)(this + 0x3b8));
  NewPVPSyncPlayerData::~NewPVPSyncPlayerData((NewPVPSyncPlayerData *)(this + 0x3a0));
  NewPVPEndPlay::~NewPVPEndPlay((NewPVPEndPlay *)(this + 0x370));
  NewPVPMainEntry::~NewPVPMainEntry((NewPVPMainEntry *)(this + 0xb8));
  NewPVPMatchPlayer::~NewPVPMatchPlayer((NewPVPMatchPlayer *)(this + 0x90));
  NewPVPQueryPlayerData::~NewPVPQueryPlayerData((NewPVPQueryPlayerData *)(this + 0x50));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x30));
  std::vector<AreaData,std::allocator<AreaData>>::~vector
            ((vector<AreaData,std::allocator<AreaData>> *)(this + 8));
  Sexy::LazySingleton<NewPVPMgr>::~LazySingleton((LazySingleton<NewPVPMgr> *)this);
  return;
}


/* NewPVPMgr::~NewPVPMgr() */

void __thiscall NewPVPMgr::~NewPVPMgr(NewPVPMgr *this)

{
  ~NewPVPMgr(this);
  AK::FreeHook(this);
  return;
}


/* NewPVPMgr::PlayPositionalSound(std::string const&, float) */

void __thiscall NewPVPMgr::PlayPositionalSound(NewPVPMgr *this,string *param_1,float param_2)

{
  string *psVar1;
  
  if (0.0 < param_2) {
    psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEventThrottled(psVar1,param_2,param_1);
    return;
  }
  psVar1 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(psVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetCurrentMatchSelectedPlants() */

void __thiscall NewPVPMgr::GetCurrentMatchSelectedPlants(NewPVPMgr *this)

{
  bool bVar1;
  NetworkMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"");
  nop();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(asStack_38,asStack_20);
  std::string::~string(asStack_20);
  lVar2 = Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)asStack_20,
             (vector *)(lVar2 + 0x20));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)asStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)asStack_20);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_38);
  local_30 = FUN_034e4178(uVar3,uVar4,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    puVar5 = (undefined *)(lVar2 + 0x20);
  }
  else {
    puVar5 = &DAT_06aa39a8;
  }
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::~vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)asStack_20);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetCurrentMatchSelectedMaps() */

void __thiscall NewPVPMgr::GetCurrentMatchSelectedMaps(NewPVPMgr *this)

{
  bool bVar1;
  NetworkMgr *this_00;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_38,"");
  nop();
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(asStack_38,asStack_20);
  std::string::~string(asStack_20);
  lVar2 = Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)asStack_20,
             (vector *)(lVar2 + 0x20));
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)asStack_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)asStack_20);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,asStack_38);
  local_30 = FUN_034e4408(uVar3,uVar4,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    puVar5 = (undefined *)(lVar2 + 0x38);
  }
  else {
    puVar5 = &DAT_06aa3fe0;
  }
  std::vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>>::~vector
            ((vector<Network_PlayerSyncData,std::allocator<Network_PlayerSyncData>> *)asStack_20);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* NewPVPMgr::ClearCurrentQueryPlayerData() */

void __thiscall NewPVPMgr::ClearCurrentQueryPlayerData(NewPVPMgr *this)

{
  NewPVPQueryPlayerData::operator=
            ((NewPVPQueryPlayerData *)(this + 0x50),(NewPVPQueryPlayerData *)&DAT_06aa3d68);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestCancelMatching(bool) */

void __thiscall NewPVPMgr::RequestCancelMatching(NewPVPMgr *this,bool param_1)

{
  LawnApp *this_00;
  DNetwork *this_01;
  DTimerManager *this_02;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2224];
  string asStack_438 [1072];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = gLawnApp;
  if (param_1) {
    std::string::string((string *)a_Stack_ce8,"[NET_CONNECTING]");
    LawnApp::ShowNetConnectingUI(this_00,(string *)a_Stack_ce8);
    std::string::~string((string *)a_Stack_ce8);
    nop();
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string((string *)a_Stack_ce8,"fake_cancel_matching");
    FUN_034b6b94(afStack_d38,this);
    DTimerManager::addTimer(this_02,(string *)a_Stack_ce8,(function *)afStack_d38,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::string::~string((string *)a_Stack_ce8);
    nop();
  }
  else {
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId(a_Stack_ce8);
    FUN_034b6f30(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_438,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId(a_Stack_ce8);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::SetSelectedPlantPacketInfos(std::vector<CurrentSelectedPlantPacketInfo,
   std::allocator<CurrentSelectedPlantPacketInfo> > const&) */

void __thiscall NewPVPMgr::SetSelectedPlantPacketInfos(NewPVPMgr *this,vector *param_1)

{
  std::vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>>::
  operator=((vector<CurrentSelectedPlantPacketInfo,std::allocator<CurrentSelectedPlantPacketInfo>> *
            )(this + 0x458),param_1);
  return;
}


/* NewPVPMgr::SetZombiePlayerInfo(NewPVPZombiePlayerInfo const&) */

void __thiscall NewPVPMgr::SetZombiePlayerInfo(NewPVPMgr *this,NewPVPZombiePlayerInfo *param_1)

{
  NewPVPZombiePlayerInfo::operator=((NewPVPZombiePlayerInfo *)(this + 800),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestMainEntryData(std::function<void ()>) */

void __thiscall NewPVPMgr::RequestMainEntryData(NewPVPMgr *this,function *param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2c] == (NewPVPMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_05751580,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[0x2c] = (NewPVPMgr)0x1;
    std::function<void()>::operator=((function<void()> *)(this + 0x30),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::GetAreaList() */

vector<AreaData,std::allocator<AreaData>> * NewPVPMgr::GetAreaList(void)

{
  long in_x0;
  vector<AreaData,std::allocator<AreaData>> *in_x8;
  
  std::vector<AreaData,std::allocator<AreaData>>::vector(in_x8,(vector *)(in_x0 + 8));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestReport(std::string const&, std::string const&) */

void __thiscall NewPVPMgr::RequestReport(NewPVPMgr *this,string *param_1,string *param_2)

{
  undefined8 uVar1;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2296];
  string asStack_3f0 [1000];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"mi");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,param_1);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"ri");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar1,param_2);
  std::string::~string(asStack_ce8);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_034b6ed4(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_3f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::TryTriggerReport() */

void __thiscall NewPVPMgr::TryTriggerReport(NewPVPMgr *this)

{
  NewPVPQueryPlayerData *pNVar1;
  Network_PlayerSyncData *pNVar2;
  NewPVPQueryPlayerData aNStack_d0 [24];
  string asStack_b8 [40];
  Network_PlayerSyncData aNStack_90 [136];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar1 = (NewPVPQueryPlayerData *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this);
  NewPVPQueryPlayerData::NewPVPQueryPlayerData(aNStack_d0,pNVar1);
  pNVar2 = (Network_PlayerSyncData *)GetOppoentPlayerData(this);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_90,pNVar2);
  RequestReport(this,asStack_b8,(string *)aNStack_90);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_90);
  NewPVPQueryPlayerData::~NewPVPQueryPlayerData(aNStack_d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::sortSunCDs(std::vector<NewPVPSunUpgradeInfo, std::allocator<NewPVPSunUpgradeInfo> >&)
    */

void __thiscall NewPVPMgr::sortSunCDs(NewPVPMgr *this,vector *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)param_1);
  FUN_034f38a8(uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetSunAddCD(int) */

void __thiscall NewPVPMgr::GetSunAddCD(NewPVPMgr *this,int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::vector
            (avStack_20,(vector *)(*(long *)(this + 0x20) + 0xb8));
  sortSunCDs(this,(vector *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) {
      uVar3 = 0;
LAB_034f39a4:
      std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    puVar2 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((int)puVar2[1] <= param_1) {
      uVar3 = *puVar2;
      goto LAB_034f39a4;
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::addArea(std::string) */

void __thiscall NewPVPMgr::addArea(NewPVPMgr *this,string *param_2)

{
  char cVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar3 = FUN_034b06c0(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      FUN_05475d88(asStack_18,param_2);
      CreateAreaData(aRStack_10,this,asStack_18);
      std::vector<AreaData,std::allocator<AreaData>>::push_back
                ((vector<AreaData,std::allocator<AreaData>> *)(this + 8),(AreaData *)aRStack_10);
      std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_10);
      std::string::~string(asStack_18);
      break;
    }
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_034b06cc(uVar5,uVar4);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    cVar1 = std::operator==(param_2,(string *)(lVar2 + 0x10));
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::handleRandomArea(std::vector<std::string, std::allocator<std::string > > const&) */

void __thiscall NewPVPMgr::handleRandomArea(NewPVPMgr *this,vector *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  NewPVPAreaProperties *pNVar3;
  undefined8 uVar4;
  int extraout_w1;
  int iVar5;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_40);
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x84);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)aRStack_60);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_58);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
      ;
      pNVar3 = Sexy::RtObject::Cast<NewPVPAreaProperties>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      Sexy::RtId::~RtId((RtId *)&local_50);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      Sexy::RtId::~RtId(aRStack_60);
      iVar5 = extraout_w1_00;
      if (pNVar3 != (NewPVPAreaProperties *)0x0) {
        FUN_05475d88(aRStack_58,pNVar3 + 0x10);
        uVar2 = FUN_034cf7bc(*(undefined8 *)param_1);
        uVar4 = FUN_034cf80c(*(undefined8 *)(param_1 + 8));
        FUN_05475d88((RtWeakPtr<Sexy::SoundResource> *)&local_48,aRStack_58);
        local_50 = FUN_034e4abc(uVar2,uVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_48);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                  ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_48);
        local_48 = FUN_034cf80c(*(undefined8 *)(param_1 + 8));
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48)
        ;
        if (bVar1) {
          std::string::~string((string *)aRStack_58);
          iVar5 = extraout_w1_02;
        }
        else {
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)local_40,
                     (string *)aRStack_58);
          std::string::~string((string *)aRStack_58);
          iVar5 = extraout_w1_01;
        }
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      Sexy::RtId::~RtId(aRStack_60);
      iVar5 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_40);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_40);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>>
            (uVar2,uVar4);
  uVar2 = FUN_034b0560(local_40[0],0);
  FUN_05475d88(aIStack_28,uVar2);
  addArea(this,aIStack_28);
  std::string::~string((string *)aIStack_28);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetAreaMainById(AreaType) */

void NewPVPMgr::GetAreaMainById
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  NewPVPAreaMainProperties *pNVar3;
  int extraout_w1;
  int iVar4;
  int extraout_w1_00;
  RtId aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x83);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
LAB_034f8978:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,(RtWeakPtrBase *)aRStack_48);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_40);
    if (bVar1) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pNVar3 = Sexy::RtObject::Cast<NewPVPAreaMainProperties>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar4 = extraout_w1_00;
      if ((pNVar3 != (NewPVPAreaMainProperties *)0x0) && (*(int *)(pNVar3 + 0x20) == param_3)) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)param_1,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        goto LAB_034f8978;
      }
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      Sexy::RtId::~RtId(aRStack_48);
      iVar4 = extraout_w1;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar4);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::syncArea(int) */

void NewPVPMgr::syncArea(int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAreaMainById(aRStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    uVar7 = 0;
    bVar1 = false;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    lVar3 = FUN_034b0554(*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30));
    if (lVar3 != 0) {
      do {
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        psVar4 = (string *)FUN_034b0560(*(undefined8 *)(lVar3 + 0x28),uVar7);
        bVar2 = std::operator==(psVar4,"random");
        if (bVar2) {
          bVar1 = true;
        }
        else {
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          uVar6 = FUN_034b0560(*(undefined8 *)(lVar3 + 0x28),uVar7);
          FUN_05475d88(asStack_10,uVar6);
          addArea((NewPVPMgr *)(ulong)(uint)param_1,asStack_10);
          std::string::~string(asStack_10);
        }
        uVar7 = uVar7 + 1;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        uVar5 = FUN_034b0554(*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x30));
      } while (uVar7 < uVar5);
    }
    if (bVar1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      handleRandomArea((NewPVPMgr *)(ulong)(uint)param_1,(vector *)(lVar3 + 0x28));
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::SyncArea(int) */

void NewPVPMgr::SyncArea(int param_1)

{
  std::vector<AreaData,std::allocator<AreaData>>::clear
            ((vector<AreaData,std::allocator<AreaData>> *)((ulong)(uint)param_1 + 8));
  syncArea(param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::SyncArea(std::vector<int, std::allocator<int> > const&) */

void __thiscall NewPVPMgr::SyncArea(NewPVPMgr *this,vector *param_1)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<AreaData,std::allocator<AreaData>>::clear
            ((vector<AreaData,std::allocator<AreaData>> *)(this + 8));
  local_18 = FUN_034c91f4(*(undefined8 *)param_1);
  local_10 = FUN_034c9244(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    syncArea((int)this);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetAreaName(int) */

void NewPVPMgr::GetAreaName(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAreaMainById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetAreaDescription(int) */

void NewPVPMgr::GetAreaDescription(int param_1)

{
  bool bVar1;
  string *in_x8;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetAreaMainById(aRStack_10,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
  if (bVar1) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    FUN_05475d88();
  }
  else {
    std::string::string(in_x8,"");
    nop();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::SetCurrentSunLevel(int) */

void __thiscall NewPVPMgr::SetCurrentSunLevel(NewPVPMgr *this,int param_1)

{
  int iVar1;
  UnchartedModePlantNumData aUStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x474) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentTurn();
  UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_10,param_1,iVar1);
  std::vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>>::push_back
            ((vector<LogSunUpgradeInfo,std::allocator<LogSunUpgradeInfo>> *)(this + 0x4d0),
             (LogSunUpgradeInfo *)aUStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::NewPVPMgr() */

void __thiscall NewPVPMgr::NewPVPMgr(NewPVPMgr *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  NewPVPPropertySheet *this_00;
  ResourceInfo *pRVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  RtId aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<NewPVPMgr>::LazySingleton((LazySingleton<NewPVPMgr> *)this);
  *(undefined ***)this = &PTR__NewPVPMgr_0664d4d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  *(undefined8 *)(this + 0x20) = 0;
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x30));
  NewPVPQueryPlayerData::NewPVPQueryPlayerData((NewPVPQueryPlayerData *)(this + 0x50));
  NewPVPMatchPlayer::NewPVPMatchPlayer((NewPVPMatchPlayer *)(this + 0x90));
  NewPVPMainEntry::NewPVPMainEntry((NewPVPMainEntry *)(this + 0xb8));
  NewPVPEndPlay::NewPVPEndPlay((NewPVPEndPlay *)(this + 0x370));
  NewPVPSyncPlayerData::NewPVPSyncPlayerData((NewPVPSyncPlayerData *)(this + 0x3a0));
  NewPVPSaveBattleInfoData::NewPVPSaveBattleInfoData((NewPVPSaveBattleInfoData *)(this + 0x3b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x428));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x440));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x458));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x4d0));
  LogActionCountInfo::LogActionCountInfo((LogActionCountInfo *)(this + 0x4e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x508));
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName((RtName *)&local_20,L"DefaultNewPVPProps");
  PVZDB::GetIdByAlias(aRStack_30,uVar2,5,(RtName *)&local_20);
  Sexy::RtName::~RtName((RtName *)&local_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
  this_00 = ::operator_new(0x198);
  NewPVPPropertySheet::NewPVPPropertySheet(this_00);
  *(NewPVPPropertySheet **)(this + 0x20) = this_00;
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_28);
  NewPVPPropertySheet::Copy(this_00,(NewPVPPropertySheet *)pRVar3);
  this[0x2c] = (NewPVPMgr)0x0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x470) = 0;
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x488) = 0;
  *(undefined4 *)(this + 0x4b8) = 0xffffffff;
  *(undefined4 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x474) = 0;
  *(undefined4 *)(this + 0x4c8) = 0;
  this[0x4bc] = (NewPVPMgr)0x0;
  *(undefined4 *)(this + 0x484) = uVar4;
  *(undefined4 *)(this + 0x48c) = 0;
  *(undefined4 *)(this + 0x478) = 0;
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x4c4) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_20;
  uStack_48 = uStack_18;
  local_40 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<NewPVPMgr,void(NewPVPMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Sexy::RtId::~RtId(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::GetSunAdd() */

void NewPVPMgr::GetSunAdd(void)

{
  char cVar1;
  NewPVPGameSubsystem *this;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::GetCurrentSunAdd(this);
  return;
}


/* NewPVPMgr::CalcCurrentSunCostMultiplier() */

undefined1  [16] NewPVPMgr::CalcCurrentSunCostMultiplier(void)

{
  char cVar1;
  NewPVPGameSubsystem *this;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return ZEXT816(0);
  }
  this = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::CalcSunCostMultiplier(this);
  auVar2._4_4_ = extraout_var;
  auVar2._0_4_ = extraout_s0;
  auVar2._8_8_ = extraout_var_00;
  return auVar2;
}


/* NewPVPMgr::CanAddZombie(int, int) */

void __thiscall NewPVPMgr::CanAddZombie(NewPVPMgr *this,int param_1,int param_2)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::CanAddZombie(this_00,param_1,param_2);
  return;
}


/* NewPVPMgr::TryUpgradePlantEffect(int, int) */

void __thiscall NewPVPMgr::TryUpgradePlantEffect(NewPVPMgr *this,int param_1,int param_2)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::TryUpgradePlantEffect(this_00,param_1,param_2);
  return;
}


/* NewPVPMgr::TryTriggerZombieSkill(int) */

void __thiscall NewPVPMgr::TryTriggerZombieSkill(NewPVPMgr *this,int param_1)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::TryTriggerZombieSkill(this_00,param_1);
  return;
}


/* NewPVPMgr::TryTriggerZombieUpgrade(int) */

void __thiscall NewPVPMgr::TryTriggerZombieUpgrade(NewPVPMgr *this,int param_1)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::TryTriggerZombieUpgrade(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::TryTriggerSurrender() */

void NewPVPMgr::TryTriggerSurrender(void)

{
  char cVar1;
  NewPVPGameSubsystem *pNVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 != '\0') {
    pNVar2 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    NewPVPGameSubsystem::TriggerEvent
              ((NewPVPGameSubsystem *)0x0,pNVar2,0,1,8,0xffffffff,0xffffffff,0xffffffff,0,avStack_20
              );
    std::vector<float,std::allocator<float>>::~vector
              ((vector<float,std::allocator<float>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::TryAddZombie(int, int) */

void __thiscall NewPVPMgr::TryAddZombie(NewPVPMgr *this,int param_1,int param_2)

{
  char cVar1;
  NewPVPGameSubsystem *this_00;
  
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    return;
  }
  this_00 = Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  NewPVPGameSubsystem::TryAddZombie(this_00,param_1,param_2);
  return;
}


/* NewPVPMgr::GetSunUpgradeValue(int) */

ulong __thiscall NewPVPMgr::GetSunUpgradeValue(NewPVPMgr *this,int param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  NewPVPMgr *this_00;
  undefined8 uVar5;
  
  cVar2 = NewPVPUtils::IsPlayingNewPVPTutorial();
  if (cVar2 == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(this + 0x20) + 0xb8);
    uVar3 = FUN_034b05a0(uVar5,*(undefined8 *)(*(long *)(this + 0x20) + 0xc0));
    uVar1 = 0;
    if ((ulong)(long)param_1 < uVar3) {
      lVar4 = FUN_034b05d0(uVar5,(long)param_1);
      uVar1 = *(uint *)(lVar4 + 8);
    }
    return (ulong)uVar1;
  }
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar3 = GetTutorialSunAdd(this_00);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestQueryPlayerData(std::string const&, bool, bool) */

void __thiscall
NewPVPMgr::RequestQueryPlayerData(NewPVPMgr *this,string *param_1,bool param_2,bool param_3)

{
  char cVar1;
  undefined8 uVar2;
  GridItem *this_00;
  DTimerManager *this_01;
  DNetwork *this_02;
  char *__s;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2240];
  string asStack_428 [1056];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"matchid");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar2,param_1);
  std::string::~string(asStack_ce8);
  nop();
  if (param_3) {
    this_00 = (GridItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    GridItem::GetConditionTracker(this_00);
    cVar1 = FUN_0547419c();
    if (cVar1 != '\0') {
      uVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      CthulhuEasyButton::SetTypeName(uVar2,&DAT_06aa3f88);
    }
    this_01 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_ce8,"fake_query_player");
    FUN_034b6bf0(afStack_d38,this,param_2);
    DTimerManager::addTimer(this_01,asStack_ce8,(function *)afStack_d38,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::string::~string(asStack_ce8);
    nop();
  }
  else {
    this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_034b6f8c(afStack_d38,this,param_2);
    if (param_2) {
      __s = "[NET_CONNECTING_NEW_PVP_QUERY_PLAYER_MATCHING]";
    }
    else {
      __s = "[NET_CONNECTING_NEW_PVP_QUERY_PLAYER]";
    }
    std::string::string(asStack_d40,__s);
    DNetwork::requestMsg
              (this_02,asStack_428,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::GetZombieLevelUpPieceRequired(int, int) */

void __thiscall NewPVPMgr::GetZombieLevelUpPieceRequired(NewPVPMgr *this,int param_1,int param_2)

{
  int iVar1;
  NewPVPMgr *this_00;
  
  this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = GetZombieRarityById(this_00,param_1);
  GetLevelUpPieceRequired(this,iVar1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::CheatEnter() */

void NewPVPMgr::CheatEnter(void)

{
  NewPVPMgr *pNVar1;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar1 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_034b6aa0(afStack_28);
  RequestMainEntryData(pNVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::SetCurrentGameResult(NewPVPGameResults) */

void __thiscall NewPVPMgr::SetCurrentGameResult(NewPVPMgr *this,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ActivityConfig *this_00;
  int *piVar4;
  
  *(int *)(this + 0x470) = param_2;
  puVar1 = gMessageRouter;
  this_00 = (ActivityConfig *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  piVar4 = (int *)ActivityConfig::GetChristmasLotteryData(this_00);
  MessageRouter::Post<int,int>((MessageRouter *)puVar1,Message::NewPVPEndDuan,*piVar4);
  puVar1 = gMessageRouter;
  bVar2 = (bool)HasFullHitpoints();
  iVar3 = GetCurrentTurn();
  MessageRouter::Post<bool,bool,int,bool,bool,int>
            ((MessageRouter *)puVar1,Message::NewPVPPassLevel,param_2 == 1,bVar2,iVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::InitProps(Network_NewPVPPropertySheet const*, int) */

void __thiscall
NewPVPMgr::InitProps(NewPVPMgr *this,Network_NewPVPPropertySheet *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int *piVar12;
  Network_NewPVPZombieLevelUpData *pNVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  long local_8;
  
  lVar15 = *(long *)(this + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0xac);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar9 = *(undefined4 *)(param_1 + 0x2c);
  *(int *)(this + 0x28) = param_2;
  uVar10 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(lVar15 + 0x18) = uVar2;
  *(undefined4 *)(lVar15 + 0x14) = uVar4;
  *(undefined4 *)(lVar15 + 0x1c) = uVar6;
  *(undefined4 *)(lVar15 + 0x20) = uVar7;
  *(undefined4 *)(lVar15 + 0x24) = uVar8;
  *(undefined4 *)(lVar15 + 0x28) = uVar9;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(lVar15 + 0x10) = uVar1;
  *(undefined4 *)(lVar15 + 0x78) = uVar3;
  *(undefined4 *)(lVar15 + 0x7c) = uVar5;
  *(undefined4 *)(lVar15 + 0x80) = uVar10;
  std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::clear
            ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)(lVar15 + 0x30));
  local_40 = FUN_034ce80c(*(undefined8 *)(param_1 + 0x30));
  local_38 = FUN_034ce85c(*(undefined8 *)(param_1 + 0x38));
  while (bVar11 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar11)
  {
    lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::PrimeTextExtraParameters::PrimeTextExtraParameters((PrimeTextExtraParameters *)&local_28);
    local_28 = *(int *)(lVar15 + 0x14);
    local_24 = *(int *)(lVar15 + 0x18);
    std::vector<ZombieLevelStat,std::allocator<ZombieLevelStat>>::push_back
              ((vector<ZombieLevelStat,std::allocator<ZombieLevelStat>> *)
               (*(long *)(this + 0x20) + 0x30),(ZombieLevelStat *)&local_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_40);
  }
  std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::clear
            ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)
             (*(long *)(this + 0x20) + 0x48));
  local_58 = FUN_034ce8ac(*(undefined8 *)(param_1 + 0x48));
  local_50 = FUN_034ce8fc(*(undefined8 *)(param_1 + 0x50));
  bVar11 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar11) {
    do {
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      NewPVPZombiePacketInfo::NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)&local_28);
      local_28 = *piVar12;
      local_48 = FUN_034ce94c(*(undefined8 *)(piVar12 + 2));
      local_40 = FUN_034ce99c(*(undefined8 *)(piVar12 + 4));
      while (bVar11 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar11) {
        puVar14 = (undefined8 *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        NewPVPZombieLevelInfo::NewPVPZombieLevelInfo((NewPVPZombieLevelInfo *)&local_38);
        local_30 = *(undefined4 *)(puVar14 + 1);
        local_2c = *(undefined4 *)((long)puVar14 + 0xc);
        local_38 = *puVar14;
        std::vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>>::push_back
                  ((vector<NewPVPZombieLevelInfo,std::allocator<NewPVPZombieLevelInfo>> *)&local_20,
                   (NewPVPZombieLevelInfo *)&local_38);
        std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                  ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
      }
      std::vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>>::push_back
                ((vector<NewPVPZombiePacketInfo,std::allocator<NewPVPZombiePacketInfo>> *)
                 (*(long *)(this + 0x20) + 0x48),(NewPVPZombiePacketInfo *)&local_28);
      NewPVPZombiePacketInfo::~NewPVPZombiePacketInfo((NewPVPZombiePacketInfo *)&local_28);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_58);
      bVar11 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar11);
  }
  std::vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>>::clear
            ((vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>> *)
             (*(long *)(this + 0x20) + 0x60));
  local_40 = FUN_034ce9ec(*(undefined8 *)(param_1 + 0x60));
  local_38 = FUN_034cea3c(*(undefined8 *)(param_1 + 0x68));
  while (bVar11 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar11)
  {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    NewPVPPlantPacketInfo::NewPVPPlantPacketInfo((NewPVPPlantPacketInfo *)&local_28);
    local_28 = *piVar12;
    local_24 = piVar12[1];
    std::vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>>::push_back
              ((vector<NewPVPPlantPacketInfo,std::allocator<NewPVPPlantPacketInfo>> *)
               (*(long *)(this + 0x20) + 0x60),(NewPVPPlantPacketInfo *)&local_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>>::clear
            ((vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>> *)
             (*(long *)(this + 0x20) + 0x88));
  local_40 = FUN_034cea8c(*(undefined8 *)(param_1 + 0x78));
  local_38 = FUN_034ceadc(*(undefined8 *)(param_1 + 0x80));
  while (bVar11 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar11)
  {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    NewPVPZombieSkillInfo::NewPVPZombieSkillInfo((NewPVPZombieSkillInfo *)&local_28);
    local_24 = piVar12[1];
    local_28 = *piVar12;
    local_20 = piVar12[2];
    std::vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>>::push_back
              ((vector<NewPVPZombieSkillInfo,std::allocator<NewPVPZombieSkillInfo>> *)
               (*(long *)(this + 0x20) + 0x88),(NewPVPZombieSkillInfo *)&local_28);
    __gnu_cxx::
    __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
    ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                  *)&local_40);
  }
  std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::clear
            ((vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>> *)
             (*(long *)(this + 0x20) + 0xa0));
  local_40 = FUN_034ceb2c(*(undefined8 *)(param_1 + 0x90));
  local_38 = FUN_034ceb7c(*(undefined8 *)(param_1 + 0x98));
  while (bVar11 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar11)
  {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    NewPVPZombieUpgradeInfo::NewPVPZombieUpgradeInfo((NewPVPZombieUpgradeInfo *)&local_28);
    local_28 = *piVar12;
    local_20 = piVar12[2];
    local_24 = piVar12[1];
    local_1c = piVar12[3];
    std::vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>>::push_back
              ((vector<NewPVPZombieUpgradeInfo,std::allocator<NewPVPZombieUpgradeInfo>> *)
               (*(long *)(this + 0x20) + 0xa0),(NewPVPZombieUpgradeInfo *)&local_28);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  }
  std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::clear
            ((vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>> *)
             (*(long *)(this + 0x20) + 0xb8));
  local_40 = FUN_034cebcc(*(undefined8 *)(param_1 + 0xb8));
  local_38 = FUN_034cec1c(*(undefined8 *)(param_1 + 0xc0));
  while (bVar11 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar11)
  {
    piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    NewPVPSunUpgradeInfo::NewPVPSunUpgradeInfo((NewPVPSunUpgradeInfo *)&local_28);
    local_24 = piVar12[1];
    local_28 = *piVar12;
    local_20 = piVar12[2];
    local_1c = piVar12[3];
    local_18 = piVar12[4];
    std::vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>>::push_back
              ((vector<NewPVPSunUpgradeInfo,std::allocator<NewPVPSunUpgradeInfo>> *)
               (*(long *)(this + 0x20) + 0xb8),(NewPVPSunUpgradeInfo *)&local_28);
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_40);
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(*(long *)(this + 0x20) + 0x100),
             (vector *)(param_1 + 0xd0));
  lVar15 = *(long *)(this + 0x20);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar15 + 0x118));
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(lVar15 + 0x118));
  bVar11 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
  if (bVar11) {
    do {
      piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      pNVar13 = (Network_NewPVPZombieLevelUpData *)
                GetNetworkZombieLevelUpData(this,*piVar12,param_1);
      Network_NewPVPZombieLevelUpData::Network_NewPVPZombieLevelUpData
                ((Network_NewPVPZombieLevelUpData *)&local_28,pNVar13);
      if (local_28 != -1) {
        std::vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>::
        clear((vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>> *)
              (piVar12 + 4));
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        while (bVar11 = __gnu_cxx::operator!=
                                  ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar11) {
          puVar14 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          NewPVPZombieLevelUpValueData::NewPVPZombieLevelUpValueData
                    ((NewPVPZombieLevelUpValueData *)&local_38);
          local_38 = *puVar14;
          local_30 = *(undefined4 *)(puVar14 + 1);
          local_2c = *(undefined4 *)((long)puVar14 + 0xc);
          std::vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>::
          push_back((vector<NewPVPZombieLevelUpValueData,std::allocator<NewPVPZombieLevelUpValueData>>
                     *)(piVar12 + 4),(NewPVPZombieLevelUpValueData *)&local_38);
          std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                    ((move_iterator<Sexy::CharDataHashEntry*> *)&local_48);
        }
      }
      Network_NewPVPZombieLevelUpData::~Network_NewPVPZombieLevelUpData
                ((Network_NewPVPZombieLevelUpData *)&local_28);
      __gnu_cxx::
      __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
      ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                    *)&local_58);
      bVar11 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    } while (bVar11);
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(*(long *)(this + 0x20) + 0x130),
             (vector *)(param_1 + 0x100));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::tryUpdateNetworkConfig() */

void __thiscall NewPVPMgr::tryUpdateNetworkConfig(NewPVPMgr *this)

{
  if (*(int *)(this + 0xcc) != *(int *)(this + 0x28)) {
    InitProps(this,(Network_NewPVPPropertySheet *)(this + 0x110),*(int *)(this + 0xcc));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::syncMainEntryInfoTest() */

void __thiscall NewPVPMgr::syncMainEntryInfoTest(NewPVPMgr *this)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0xb8));
  if (cVar1 != '\0') {
    tryUpdateNetworkConfig(this);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::testResponse() */

void __thiscall NewPVPMgr::testResponse(NewPVPMgr *this)

{
  bool bVar1;
  
  if (this[0x2c] != (NewPVPMgr)0x0) {
    syncMainEntryInfoTest(this);
    this[0x2c] = (NewPVPMgr)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x30));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x30));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::GetCurrentLevelUpPiece(int) */

void __thiscall NewPVPMgr::GetCurrentLevelUpPiece(NewPVPMgr *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined4 uVar2;
  NameMapperBase *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18 [2];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x350);
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  ServerZombieID::ServerZombieID((ServerZombieID *)local_18,param_1);
  ServerZombieID::ToString();
  this_01 = (NameMapperBase *)NewPVPZombiePieceMapper::GetInstance();
  uVar2 = NameMapperBase::GetIdForName(this_01,asStack_28);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_20 = FUN_034e3cbc(uVar3,uVar4,uVar2);
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)local_18);
  if (bVar1) {
    lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar6 = *(undefined4 *)(lVar5 + 4);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::SendTimoutLog() */

void NewPVPMgr::SendTimoutLog(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  NewPVPMgr *pNVar6;
  vector *pvVar7;
  ulong uVar8;
  Network_PlayerSyncData *pNVar9;
  undefined4 *puVar10;
  TGALogMgr *pTVar11;
  undefined1 *__n;
  ulong uVar12;
  float fVar13;
  string asStack_4b8 [8];
  string asStack_4b0 [8];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_490;
  undefined8 local_488;
  Network_PlayerSyncData aNStack_478 [96];
  vector avStack_418 [40];
  Network_PlayerSyncData aNStack_3f0 [136];
  TGANewPVPData aTStack_368 [24];
  string asStack_350 [16];
  string asStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [192];
  DString aDStack_270 [248];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = auStack_168;
  TGANewPVPData::TGANewPVPData(aTStack_368);
  DString::DString(aDStack_270,10);
  pcVar4 = (char *)DString::c_str(aDStack_270);
  std::string::append((string *)aTStack_368,pcVar4,(size_t)__n);
  DString::~DString(aDStack_270);
  lVar5 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar13 = (float)FUN_034c6df4(lVar5 + 0x4c4);
  DString::DString(aDStack_270,(int)fVar13);
  pcVar4 = (char *)DString::c_str(aDStack_270);
  std::string::append(asStack_350,pcVar4,(size_t)__n);
  DString::~DString(aDStack_270);
  lVar5 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = FUN_034ad904(*(undefined4 *)(lVar5 + 0x4c8));
  DString::DString(aDStack_270,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_270);
  std::string::append(asStack_340,pcVar4,(size_t)__n);
  DString::~DString(aDStack_270);
  std::string::string(asStack_4b8,"");
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pvVar7 = (vector *)GetCurrentSelectedPlants(pNVar6);
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)&local_4a8,pvVar7)
  ;
  uVar12 = 0;
  while( true ) {
    uVar1 = local_4a8;
    uVar8 = FUN_034ad994(local_4a8,local_4a0);
    if (uVar8 <= uVar12) break;
    puVar10 = (undefined4 *)FUN_034ad9ac(uVar1,uVar12);
    FUN_0546065c(auStack_168,*puVar10);
    FUN_05462824(aDStack_270,auStack_178);
    thunk_FUN_054757c0(asStack_4b8,aDStack_270);
    std::string::~string((string *)aDStack_270);
    std::string::string((string *)aDStack_270,"");
    FUN_05462980(auStack_178,aDStack_270);
    std::string::~string((string *)aDStack_270);
    nop();
    FUN_05475ad8(asStack_4b8,&DAT_05594620);
    uVar12 = uVar12 + 1;
  }
  thunk_FUN_05475e00(auStack_338,asStack_4b8);
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar9 = (Network_PlayerSyncData *)GetSelfPlayerData(pNVar6);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_478,pNVar9);
  pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar9 = (Network_PlayerSyncData *)GetOppoentPlayerData(pNVar6);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_3f0,pNVar9);
  std::string::string(asStack_4b0,"");
  nop();
  std::string::string((string *)aDStack_270,"");
  FUN_05462980(auStack_178,aDStack_270);
  std::string::~string((string *)aDStack_270);
  nop();
  std::vector<int,std::allocator<int>>::vector
            ((vector<int,std::allocator<int>> *)&local_490,avStack_418);
  uVar12 = 0;
  while( true ) {
    uVar1 = local_490;
    uVar8 = FUN_034ad994(local_490,local_488);
    if (uVar8 <= uVar12) break;
    puVar10 = (undefined4 *)FUN_034ad9ac(uVar1,uVar12);
    FUN_0546065c(auStack_168,*puVar10);
    FUN_05462824(aDStack_270,auStack_178);
    thunk_FUN_054757c0(asStack_4b0,aDStack_270);
    std::string::~string((string *)aDStack_270);
    std::string::string((string *)aDStack_270,"");
    FUN_05462980(auStack_178,aDStack_270);
    std::string::~string((string *)aDStack_270);
    nop();
    FUN_05475ad8(asStack_4b0,&DAT_05594620);
    uVar12 = uVar12 + 1;
  }
  thunk_FUN_05475e00(auStack_330,asStack_4b0);
  pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_270,aTStack_368);
  TGALogMgr::LogNewPVP(pTVar11,aDStack_270);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_270);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_490);
  std::string::~string(asStack_4b0);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_3f0);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_478);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_4a8);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_4b8);
  TGANewPVPData::~TGANewPVPData(aTStack_368);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestMatching(int, std::vector<int, std::allocator<int> >, std::vector<int,
   std::allocator<int> >, bool) */

void __thiscall
NewPVPMgr::RequestMatching
          (NewPVPMgr *this,int param_1,undefined8 *param_3,undefined8 *param_4,char param_5)

{
  undefined4 uVar1;
  string *this_00;
  char *__s;
  ulong uVar2;
  undefined4 *puVar3;
  DNetwork *this_01;
  DTimerManager *this_02;
  undefined1 *__n;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  DString aDStack_ce8 [2216];
  string asStack_440 [1080];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  __n = auStack_eb8;
  std::string::string(asStack_eb0,"t");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_e88,asStack_eb0);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string((string *)aDStack_ce8,"");
  FUN_05462980(auStack_e58,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *param_3;
    uVar2 = FUN_034ad994(uVar5,param_3[1]);
    if (uVar2 <= uVar4) break;
    puVar3 = (undefined4 *)FUN_034ad9ac(uVar5,uVar4);
    FUN_0546065c(auStack_e48,*puVar3);
    uVar2 = FUN_034ad994(*param_3,param_3[1]);
    if (uVar2 == uVar4 + 1) break;
    FUN_054603b8(auStack_e48,&DAT_05593348);
    uVar4 = uVar4 + 1;
  }
  std::string::string(asStack_eb0,"plants");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(aDStack_ce8,auStack_e58);
  FUN_05474278(uVar5,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string((string *)aDStack_ce8,"");
  FUN_05462980(auStack_e58,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  nop();
  uVar4 = 0;
  while( true ) {
    uVar5 = *param_4;
    uVar2 = FUN_034ad994(uVar5,param_4[1]);
    if (uVar2 <= uVar4) break;
    puVar3 = (undefined4 *)FUN_034ad9ac(uVar5,uVar4);
    FUN_0546065c(auStack_e48,*puVar3);
    uVar2 = FUN_034ad994(*param_4,param_4[1]);
    if (uVar2 == uVar4 + 1) break;
    FUN_054603b8(auStack_e48,&DAT_05593348);
    uVar4 = uVar4 + 1;
  }
  std::string::string(asStack_eb0,"maps");
  uVar5 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(aDStack_ce8,auStack_e58);
  FUN_05474278(uVar5,aDStack_ce8);
  std::string::~string((string *)aDStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  if (param_5 == '\0') {
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_034b6d64(afStack_ea8,this);
    std::string::string(asStack_eb0,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_440,(map *)amStack_e88,30.0,(function *)afStack_ea8,false,true,
               asStack_eb0,0);
    std::string::~string(asStack_eb0);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  }
  else {
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string((string *)aDStack_ce8,"fake_matching_player");
    FUN_034b6aec(afStack_ea8,this);
    DTimerManager::addTimer(this_02,(string *)aDStack_ce8,(function *)afStack_ea8,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
    std::string::~string((string *)aDStack_ce8);
    nop();
  }
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestSyncPlayerData(int, bool) */

void __thiscall NewPVPMgr::RequestSyncPlayerData(NewPVPMgr *this,int param_1,bool param_2)

{
  string *psVar1;
  char *pcVar2;
  string *this_00;
  DNetwork *this_01;
  DTimerManager *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2232];
  string asStack_430 [1064];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"progress");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  psVar1 = asStack_d40;
  std::string::string((string *)aDStack_ce8,"start");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,(string *)aDStack_ce8);
  if (param_1 == 100) {
    pcVar2 = "1";
  }
  else {
    pcVar2 = "0";
  }
  std::string::append(this_00,pcVar2,(size_t)psVar1);
  std::string::~string((string *)aDStack_ce8);
  nop();
  if (param_2) {
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string((string *)aDStack_ce8,"fake_sync_player");
    FUN_034b6b48(afStack_d38);
    DTimerManager::addTimer(this_02,(string *)aDStack_ce8,(function *)afStack_d38,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::string::~string((string *)aDStack_ce8);
    nop();
  }
  else {
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)aDStack_ce8);
    FUN_034b6dc0(afStack_d38,this);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_430,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
               asStack_d40,0);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestSaveZombieBattleInfo(std::vector<int, std::allocator<int> >, int) */

void NewPVPMgr::RequestSaveZombieBattleInfo(NewPVPMgr *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  string *this;
  char *__s;
  DNetwork *this_00;
  undefined1 *__n;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_eb8 [8];
  string asStack_eb0 [8];
  function<bool(Sexy::Touch_const&)> afStack_ea8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_e88 [48];
  undefined1 auStack_e58 [16];
  undefined1 auStack_e48 [352];
  string asStack_ce8 [2280];
  string asStack_400 [1016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_e88);
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_e58,uVar1);
  std::string::string(asStack_ce8,"");
  FUN_05462980(auStack_e58,asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  uVar5 = 0;
  while( true ) {
    uVar6 = *param_2;
    uVar4 = FUN_034ad994(uVar6,param_2[1]);
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_034ad9ac(uVar6,uVar5);
    FUN_0546065c(auStack_e48,*puVar3);
    uVar4 = FUN_034ad994(*param_2,param_2[1]);
    if (uVar4 == uVar5 + 1) break;
    FUN_054603b8(auStack_e48,&DAT_05593348);
    uVar5 = uVar5 + 1;
  }
  __n = auStack_eb8;
  std::string::string(asStack_eb0,"fight");
  uVar6 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_e88,asStack_eb0);
  FUN_05462824(asStack_ce8,auStack_e58);
  FUN_05474278(uVar6,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  std::string::string(asStack_eb0,"fightIndex");
  this = (string *)
         std::
         map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
         ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                       *)amStack_e88,asStack_eb0);
  iVar2 = GetCurrentBattleIndex(param_1);
  DString::DString((DString *)asStack_ce8,iVar2);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(this,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_eb0);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_034b6e1c(afStack_ea8,param_1);
  std::string::string(asStack_eb0,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_400,(map *)amStack_e88,30.0,(function *)afStack_ea8,true,true,
             asStack_eb0,0);
  std::string::~string(asStack_eb0);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_ea8);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  FUN_054617bc(auStack_e58);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_e88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestZombieLevelUp(int) */

void __thiscall NewPVPMgr::RequestZombieLevelUp(NewPVPMgr *this,int param_1)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [2288];
  string asStack_3f8 [1008];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"id");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,param_1);
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_034b6e78(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_3f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::RequestEndPlay(NewPVPGameResults, bool) */

void __thiscall NewPVPMgr::RequestEndPlay(NewPVPMgr *this,int param_2,char param_3)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  string *psVar3;
  string *psVar4;
  char *pcVar5;
  DNetwork *this_01;
  DTimerManager *this_02;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2264];
  string asStack_410 [1032];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar4 = asStack_d40;
  std::string::string(asStack_ce8,"win");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if (param_2 == 1) {
    pcVar5 = "1";
  }
  else if (param_2 == 2) {
    pcVar5 = "0";
  }
  else {
    pcVar5 = "2";
  }
  std::string::append(psVar3,pcVar5,(size_t)psVar4);
  std::string::~string(asStack_ce8);
  nop();
  psVar4 = asStack_d40;
  std::string::string(asStack_ce8,"bot");
  psVar3 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  cVar1 = NewPVPUtils::IsPlayingWithCPU();
  if (cVar1 == '\0') {
    pcVar5 = "0";
  }
  else {
    pcVar5 = "1";
  }
  __n = auStack_d48;
  std::string::append(psVar3,pcVar5,(size_t)psVar4);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"botTimes");
  psVar4 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  iVar2 = NewPVPUtils::GetCurrentCPULevel();
  DString::DString((DString *)asStack_ce8,iVar2);
  pcVar5 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar4,pcVar5,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = gLawnApp;
  if (param_3 == '\0') {
    this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
    _PacketId::_PacketId((_PacketId *)asStack_ce8);
    FUN_034b6fe8(afStack_d38,this,param_2);
    std::string::string(asStack_d40,"[NET_CONNECTING]");
    DNetwork::requestMsg
              (this_01,asStack_410,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
               asStack_d40,5);
    std::string::~string(asStack_d40);
    nop();
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    _PacketId::~_PacketId((_PacketId *)asStack_ce8);
  }
  else {
    std::string::string(asStack_ce8,"[NET_CONNECTING]");
    LawnApp::ShowNetConnectingUI(this_00,asStack_ce8);
    std::string::~string(asStack_ce8);
    nop();
    this_02 = (DTimerManager *)DTimerManager::getInstane();
    std::string::string(asStack_ce8,"fake_end_play");
    FUN_034b6c4c(afStack_d38,this,param_2);
    DTimerManager::addTimer(this_02,asStack_ce8,(function *)afStack_d38,0.2,1);
    std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
    std::string::~string(asStack_ce8);
    nop();
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::syncMainEntryInfo() */

void __thiscall NewPVPMgr::syncMainEntryInfo(NewPVPMgr *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  TGALogMgr *pTVar5;
  size_t in_x2;
  ActiveItem aAStack_278 [24];
  char local_260;
  TGANewPVPData aTStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [232];
  DString aDStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if ((local_260 != '\0') &&
     (cVar1 = ActiveItem::GetDataSerialized(aAStack_278,(RtObject *)(this + 0xb8)), cVar1 != '\0'))
  {
    ResetLogs(this);
    TGANewPVPData::TGANewPVPData(aTStack_1f8);
    DString::DString(aDStack_100,1);
    pcVar3 = (char *)DString::c_str(aDStack_100);
    std::string::append((string *)aTStack_1f8,pcVar3,in_x2);
    DString::~DString(aDStack_100);
    iVar2 = FUN_034ad8f4(*(undefined4 *)(this + 0x2e4));
    DString::DString(aDStack_100,iVar2);
    pcVar3 = (char *)DString::c_str(aDStack_100);
    std::string::append(asStack_1f0,pcVar3,in_x2);
    DString::~DString(aDStack_100);
    piVar4 = (int *)GetCurrentRank(this);
    DString::DString(aDStack_100,*piVar4);
    pcVar3 = (char *)DString::c_str(aDStack_100);
    std::string::append(asStack_1e8,pcVar3,in_x2);
    DString::~DString(aDStack_100);
    pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
    TGALogMgr::LogNewPVP(pTVar5,aDStack_100);
    TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
    tryUpdateNetworkConfig(this);
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  ActiveItem::~ActiveItem(aAStack_278);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall NewPVPMgr::onNotifyRefreshActivityList(NewPVPMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x2c] != (NewPVPMgr)0x0)) {
    local_1c = 0x2a6b;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      syncMainEntryInfo(this);
    }
    this[0x2c] = (NewPVPMgr)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x30));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x30));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPMgr::GetSelectedPlantPacketInfos() */

NewPVPMgr * __thiscall NewPVPMgr::GetSelectedPlantPacketInfos(NewPVPMgr *this)

{
  return this + 0x458;
}


/* NewPVPMgr::SetCurrentZombiePacketInfos(std::vector<int, std::allocator<int> > const&) */

void __thiscall NewPVPMgr::SetCurrentZombiePacketInfos(NewPVPMgr *this,vector *param_1)

{
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x508),param_1);
  return;
}


/* NewPVPMgr::onObtainedDuanReward(int) */

void __thiscall NewPVPMgr::onObtainedDuanReward(NewPVPMgr *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0352d808(*(undefined8 *)(this + 0x240),(long)param_1);
  *puVar1 = 1;
  return;
}

