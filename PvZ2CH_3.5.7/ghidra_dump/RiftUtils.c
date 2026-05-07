// Class: RiftUtils


/* RiftUtils::IsInRiftWorldMap() */

undefined8 RiftUtils::IsInRiftWorldMap(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar1 != 0) && (lVar1 = FUN_036b3368(*(undefined8 *)(lVar1 + 0x2f0)), lVar1 != 0)) {
    uVar2 = WorldMapUtils::IsRiftWorld((string *)(lVar1 + 0x38));
    return uVar2;
  }
  return 0;
}


/* RiftUtils::IsInQueuedRiftWorldMap() */

void RiftUtils::IsInQueuedRiftWorldMap(void)

{
  long lVar1;
  
  lVar1 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar1 != 0) {
    lVar1 = FUN_036b32dc(*(undefined8 *)(lVar1 + 0xe8));
    WorldMapUtils::IsRiftWorld((string *)(lVar1 + 0x38));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::IsRiftHidden() */

void RiftUtils::IsRiftHidden(void)

{
  byte bVar1;
  Toggles *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"Rift");
  bVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::IsRiftDownForMaintenance() */

void RiftUtils::IsRiftDownForMaintenance(void)

{
  undefined4 uVar1;
  Toggles *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"RiftDisabledForMaintenance");
  uVar1 = Toggles::IsEnabled(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftUtils::GetCurrentPennyFuel() */

void RiftUtils::GetCurrentPennyFuel(void)

{
  long lVar1;
  
  lVar1 = ProfileUtils::Profile();
  if (lVar1 != 0) {
    PlayerInfo::GetNumPennyFuel();
    return;
  }
  return;
}


/* RiftUtils::FullyResetZombossSignal() */

void RiftUtils::FullyResetZombossSignal(void)

{
  ProfileUtils::Profile();
  nop();
  return;
}


/* RiftUtils::CheatResetZombossFightCount() */

void RiftUtils::CheatResetZombossFightCount(void)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::ClearZombossFightCount(this);
  return;
}


/* RiftUtils::CheatAddZombossFightCount() */

void RiftUtils::CheatAddZombossFightCount(void)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::IncrementZombossFightCount(this);
  return;
}


/* RiftUtils::CalcCurrentScheduledEvent() */

void RiftUtils::CalcCurrentScheduledEvent(void)

{
  RiftSchedule *this;
  
  this = (RiftSchedule *)RiftSchedule::GetSchedule();
  RiftSchedule::GetCurrentRiftEvent(this,0x5e0cd010);
  return;
}


/* RiftUtils::CalcCurrentScheduledSubEvent() */

void RiftUtils::CalcCurrentScheduledSubEvent(void)

{
  RiftEventDefinition *this;
  
  this = (RiftEventDefinition *)CalcCurrentScheduledEvent();
  if (this != (RiftEventDefinition *)0x0) {
    RiftEventDefinition::GetCurrentRiftSubEvent(this,0x5e0cd010);
    return;
  }
  return;
}


/* RiftUtils::CalcCurrentScheduledSubEventTime() */

long RiftUtils::CalcCurrentScheduledSubEventTime(void)

{
  RiftEventDefinition *this;
  long *plVar1;
  
  this = (RiftEventDefinition *)CalcCurrentScheduledEvent();
  if ((this != (RiftEventDefinition *)0x0) &&
     (plVar1 = (long *)RiftEventDefinition::GetCurrentRiftSubEvent(this,0x5e0cd010),
     plVar1 != (long *)0x0)) {
    return *(long *)this + *plVar1 * 0x15180;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetGlobalRiftConfig() */

void RiftUtils::GetGlobalRiftConfig(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"RiftBaseConfigKey");
  uVar1 = RiftConfigSheet::GetProperties(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftUtils::GetCurrentPennyTech() */

void RiftUtils::GetCurrentPennyTech(void)

{
  ProfileUtils::Profile();
  GridItemRenaiStatue::GetCantPlantReason();
  return;
}


/* RiftUtils::IsRiftTimedLevel(MapEventItem*) */

bool RiftUtils::IsRiftTimedLevel(MapEventItem *param_1)

{
  return *(int *)(param_1 + 0x18) == 0xd;
}


/* RiftUtils::ShowLevelSetupScreen(MapEventItem*, Sexy::Delegate1<std::string const&> const&) */

void RiftUtils::ShowLevelSetupScreen(MapEventItem *param_1,Delegate1 *param_2)

{
  AdaptorRiftLevelSetup *this;
  
  this = ::operator_new(0x170);
  AdaptorRiftLevelSetup::AdaptorRiftLevelSetup(this);
  FUN_036b32e0(this + 0x120,param_1);
  LotterySelectFrame::SetStopCallBack((LotterySelectFrame *)this,param_2);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  return;
}


/* RiftUtils::ShowZombossLevelSetupScreen(std::string const&, Sexy::Delegate1<std::string const&>
   const&) */

void RiftUtils::ShowZombossLevelSetupScreen(string *param_1,Delegate1 *param_2)

{
  AdaptorRiftZombossLevelSetup *this;
  
  this = ::operator_new(0x188);
  AdaptorRiftZombossLevelSetup::AdaptorRiftZombossLevelSetup(this);
  NetworkCacheQueue::setWechatUserID((string *)this);
  LotterySelectFrame::SetStopCallBack((LotterySelectFrame *)this,param_2);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  return;
}


/* RiftUtils::HasEarnedFirstClearReward(MapEventItem*, int) */

void RiftUtils::HasEarnedFirstClearReward(MapEventItem *param_1,int param_2)

{
  ushort uVar1;
  PlayerInfo *this;
  
  if (param_1 != (MapEventItem *)0x0) {
    uVar1 = *(ushort *)(param_1 + 0x8e);
    this = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::HasReceivedFirstClearReward(this,(uint)uVar1,param_2);
    return;
  }
  return;
}


/* RiftUtils::GetZombossAttemptsMade() */

void RiftUtils::GetZombossAttemptsMade(void)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::GetRiftZombossAttemptCount(this);
  return;
}


/* RiftUtils::AddZombossWinLossRecord(bool, int) */

void RiftUtils::AddZombossWinLossRecord(bool param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  uVar1 = PlayerInfo::GetRiftZombossAttemptCount(this);
  if (param_1) {
    uVar2 = PlayerInfo::GetRiftZombossWinField(this);
    PlayerInfo::SetRiftZombossWinField(this,uVar2 | 1 << (ulong)(uVar1 & 0x1f));
  }
  PlayerInfo::SetRiftZombossAttemptCount(this,uVar1 + 1);
  PlayerInfo::AddRiftZombossAttemptDifficulty(this,param_2);
  return;
}


/* RiftUtils::ClearZombossWinLossRecord() */

void RiftUtils::ClearZombossWinLossRecord(void)

{
  int iVar1;
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetRiftZombossWinField(this,0);
  PlayerInfo::SetRiftZombossAttemptCount(this,0);
  PlayerInfo::ClearRiftZombossAttemptDifficulty(this);
  iVar1 = PlayerInfo::GetRiftZombossClearedCounter(this);
  PlayerInfo::SetRiftZombossClearedCounter(this,iVar1 + 1);
  return;
}


/* RiftUtils::GetZombossWinLossData(int, bool&, bool&, int&) */

void RiftUtils::GetZombossWinLossData(int param_1,bool *param_2,bool *param_3,int *param_4)

{
  int iVar1;
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = PlayerInfo::GetRiftZombossAttemptCount(this);
  if (iVar1 <= param_1) {
    *param_2 = false;
    *param_3 = false;
    *param_4 = 0;
    return;
  }
  *param_2 = true;
  iVar1 = PlayerInfo::GetRiftZombossWinField(this);
  *param_3 = (bool)((byte)(iVar1 >> (param_1 & 0x1fU)) & 1);
  iVar1 = PlayerInfo::GetRiftZombossAttemptDifficulty(this,param_1);
  *param_4 = iVar1;
  return;
}


/* RiftUtils::GetZombossWins() */

int RiftUtils::GetZombossWins(void)

{
  uint uVar1;
  PlayerInfo *this;
  ulong uVar2;
  ulong uVar3;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  uVar1 = PlayerInfo::GetRiftZombossWinField(this);
  uVar2 = PlayerInfo::GetRiftZombossWinField(this);
  uVar3 = PlayerInfo::GetRiftZombossWinField(this);
  return (uVar1 & 1) + ((uint)(uVar2 >> 1) & 1) + ((uint)(uVar3 >> 2) & 1);
}


/* RiftUtils::HasZombossUnawardedProgress() */

undefined8 RiftUtils::HasZombossUnawardedProgress(void)

{
  int iVar1;
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = PlayerInfo::GetRiftZombossAttemptCount(this);
  if ((0 < iVar1) && (iVar1 = PlayerInfo::GetRiftZombossWinField(this), 0 < iVar1)) {
    return 1;
  }
  return 0;
}


/* RiftUtils::FlagZombossCompletion() */

void RiftUtils::FlagZombossCompletion(void)

{
  PlayerInfo *pPVar1;
  
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  LocalProfileSaveData::SetHasJustClearedRiftZomboss(pPVar1,true);
  return;
}


/* RiftUtils::ClearZombossCompletionFlag() */

void RiftUtils::ClearZombossCompletionFlag(void)

{
  PlayerInfo *pPVar1;
  
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  LocalProfileSaveData::SetHasJustClearedRiftZomboss(pPVar1,false);
  return;
}


/* RiftUtils::TestZombossCompletionFlag() */

void RiftUtils::TestZombossCompletionFlag(void)

{
  PlayerInfo *pPVar1;
  
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  LocalProfileSaveData::GetHasJustClearedRiftZomboss(pPVar1);
  return;
}


/* RiftUtils::ResetRift() */

void RiftUtils::ResetRift(void)

{
  PlayerInfo *this;
  
  ClearZombossWinLossRecord();
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::ClearRiftLevelProgress(this);
  return;
}


/* RiftUtils::DoEventRollover() */

void RiftUtils::DoEventRollover(void)

{
  PlayerInfo *this;
  
  CalcCurrentScheduledEvent();
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetCurrentRiftID(this,0x5e0cd010);
  PlayerInfo::SetCurrentRiftSubEventID(this,0);
  ResetRift();
  return;
}


/* RiftUtils::DoSubEventRollover() */

void RiftUtils::DoSubEventRollover(void)

{
  PlayerInfo *this;
  ulong uVar1;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  uVar1 = CalcCurrentScheduledSubEventTime();
  PlayerInfo::SetCurrentRiftSubEventID(this,uVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetMetricsID() */

void RiftUtils::GetMetricsID(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"test");
  nop();
  uVar1 = FUN_0547429c(asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftUtils::ShouldAutoPopHowToPlay() */

byte RiftUtils::ShouldAutoPopHowToPlay(void)

{
  byte bVar1;
  PlayerInfo *pPVar2;
  
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  bVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,0x4e);
  return bVar1 ^ 1;
}


/* RiftUtils::SetHasSeenHowToPlay() */

void RiftUtils::SetHasSeenHowToPlay(void)

{
  PlayerInfo *pPVar1;
  
  pPVar1 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::SetGameFeatureUnlockState(pPVar1,0x4e,1);
  return;
}


/* RiftUtils::HasCompletedZombossAttempt() */

bool RiftUtils::HasCompletedZombossAttempt(void)

{
  int iVar1;
  int iVar2;
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = PlayerInfo::GetRiftZombossAttemptCount(this);
  iVar2 = Reflection::RFunctionType::StaticGetTypeCategory();
  return iVar2 <= iVar1;
}


/* RiftUtils::HasEarnedAllFirstClearRewards(MapEventItem*) */

undefined1 RiftUtils::HasEarnedAllFirstClearRewards(MapEventItem *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = Reflection::RFunctionType::StaticGetTypeCategory();
    if (iVar2 <= iVar3) {
      return 1;
    }
    cVar1 = HasEarnedFirstClearReward(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (cVar1 != '\0');
  return 0;
}


/* RiftUtils::GetEndOfEventLocalNoteDelay() */

long RiftUtils::GetEndOfEventLocalNoteDelay(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = RiftPropertySheet::GetProperties();
  iVar1 = *(int *)(lVar3 + 0x44);
  iVar2 = *(int *)(lVar3 + 0x48);
  fVar4 = (float)RandRangeFloat(0.0,1.0);
  return (long)(int)((float)iVar1 + (float)(iVar2 - iVar1) * fVar4);
}


/* RiftUtils::GetZombossEndLocalNoteEarly() */

long RiftUtils::GetZombossEndLocalNoteEarly(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = RiftPropertySheet::GetProperties();
  iVar1 = *(int *)(lVar3 + 0x4c);
  iVar2 = *(int *)(lVar3 + 0x50);
  fVar4 = (float)RandRangeFloat(0.0,1.0);
  return (long)(int)((float)iVar1 + (float)(iVar2 - iVar1) * fVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentEventEndDateFormatted() */

void __thiscall RiftUtils::GetCurrentEventEndDateFormatted(RiftUtils *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"1990-10-19");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::IsFUENarrativeSeen() */

void RiftUtils::IsFUENarrativeSeen(void)

{
  undefined4 uVar1;
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_rift_unlock");
  uVar1 = PlayerInfo::GetNarrationEventCompleted(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::SetFUEAsSeen() */

void RiftUtils::SetFUEAsSeen(void)

{
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_rift_unlock");
  PlayerInfo::CompleteNarrationEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::SetUnlockAnimAsSeen() */

void RiftUtils::SetUnlockAnimAsSeen(void)

{
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_rift_unlock_anim");
  PlayerInfo::CompleteNarrationEvent(this,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::GetGlobalLevelZombieStats() */

long RiftUtils::GetGlobalLevelZombieStats(void)

{
  long lVar1;
  
  lVar1 = GetGlobalRiftConfig();
  return lVar1 + 0xa8;
}


/* RiftUtils::IsRiftTimedLevel(std::string const&) */

void RiftUtils::IsRiftTimedLevel(string *param_1)

{
  WorldDataManager *this;
  MapEventItem *pMVar1;
  
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar1 = (MapEventItem *)WorldDataManager::FindEventByLevelName(this,param_1);
  if (pMVar1 != (MapEventItem *)0x0) {
    IsRiftTimedLevel(pMVar1);
    return;
  }
  return;
}


/* RiftUtils::ShowLeaderBoardScreen() */

void RiftUtils::ShowLeaderBoardScreen(void)

{
  AdaptorRiftLeaderBoardScreen *this;
  
  this = ::operator_new(0x128);
  AdaptorRiftLeaderBoardScreen::AdaptorRiftLeaderBoardScreen(this);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetBadgeImageForLeaderboardIndex(int) */

void __thiscall RiftUtils::GetBadgeImageForLeaderboardIndex(RiftUtils *this,int param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  string *in_x8;
  
  lVar2 = ___stack_chk_guard;
  iVar1 = (int)this;
  if (iVar1 == 1) {
    __s = "IMAGE_UI_DIALOG_ASSET_RANK2";
  }
  else if (iVar1 == 2) {
    __s = "IMAGE_UI_DIALOG_ASSET_RANK3";
  }
  else if (iVar1 == 0) {
    __s = "IMAGE_UI_DIALOG_ASSET_RANK1";
  }
  else {
    __s = "";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar2 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetAwardInfoByActId(int) */

void RiftUtils::GetAwardInfoByActId(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  NameMapperBase *pNVar11;
  undefined4 local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
  pNVar11 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar11,param_1);
  OtherServerNameMapper::GetInstance();
  cVar7 = FUN_036b32f8(param_1);
  OtherServerNameMapper::GetInstance();
  cVar8 = FUN_036b32e8(param_1);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_036b3308(param_1);
  pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar10 = NameMapperBase::ContainsId(pNVar11,param_1);
  local_10 = 0x22;
  if ((((((cVar7 == '\0') && (local_10 = 0x23, cVar8 == '\0')) && (local_10 = 0x1c, cVar1 == '\0'))
       && ((local_10 = 0x1d, cVar2 == '\0' && (local_10 = 0x1e, cVar3 == '\0')))) &&
      ((local_10 = 0x1f, cVar4 == '\0' &&
       ((local_10 = 0x20, cVar5 == '\0' && (local_10 = 0x21, cVar6 == '\0')))))) &&
     ((local_10 = 0x24, cVar9 == '\0' &&
      ((local_10 = 0x25, cVar10 == '\0' && (local_10 = 0, param_1 == 0x59f5)))))) {
    local_10 = 0x26;
  }
  if (local_8 != ___stack_chk_guard) {
    iStack_c = param_1;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(CONCAT44(param_1,local_10));
  }
  return;
}


/* RiftUtils::IsWorldMapButtonsEnabled() */

byte RiftUtils::IsWorldMapButtonsEnabled(void)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar3 == 0) {
    lVar3 = LawnApp::GetWorldMap(gLawnApp);
    if ((lVar3 == 0) || (lVar3 = FUN_036b3368(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 == 0)) {
      return 1;
    }
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar3 + 0x38));
    if (cVar1 == '\0') {
      lVar3 = LawnApp::GetWorldMap(gLawnApp);
      lVar3 = FUN_036b3368(*(undefined8 *)(lVar3 + 0x2f0));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar3 + 0x38));
      if (cVar1 == '\0') {
        lVar3 = LawnApp::GetWorldMap(gLawnApp);
        lVar3 = FUN_036b3368(*(undefined8 *)(lVar3 + 0x2f0));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar3 + 0x38));
        if (cVar1 == '\0') {
          lVar3 = LawnApp::GetWorldMap(gLawnApp);
          lVar3 = FUN_036b3368(*(undefined8 *)(lVar3 + 0x2f0));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar3 + 0x38));
          if (cVar1 == '\0') {
            lVar3 = LawnApp::GetWorldMap(gLawnApp);
            lVar3 = FUN_036b3368(*(undefined8 *)(lVar3 + 0x2f0));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar3 + 0x38));
            return bVar2 ^ 1;
          }
        }
      }
    }
  }
  else {
    lVar4 = FUN_036b32dc(*(undefined8 *)(lVar3 + 0xe8));
    cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar4 + 0x38));
    if (cVar1 == '\0') {
      lVar4 = FUN_036b32dc(*(undefined8 *)(lVar3 + 0xe8));
      cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar4 + 0x38));
      if (cVar1 == '\0') {
        lVar4 = FUN_036b32dc(*(undefined8 *)(lVar3 + 0xe8));
        cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar4 + 0x38));
        if (cVar1 == '\0') {
          lVar4 = FUN_036b32dc(*(undefined8 *)(lVar3 + 0xe8));
          cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar4 + 0x38));
          if (cVar1 == '\0') {
            lVar3 = FUN_036b32dc(*(undefined8 *)(lVar3 + 0xe8));
            bVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar3 + 0x38));
            return bVar2 ^ 1;
          }
        }
      }
    }
  }
  return 0;
}


/* RiftUtils::IsSpecialBossEvent() */

undefined1 RiftUtils::IsSpecialBossEvent(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined1 *)(lVar1 + 0x165);
}


/* RiftUtils::GetChallengeChooseDialogResourceName() */

void __thiscall RiftUtils::GetChallengeChooseDialogResourceName(RiftUtils *this)

{
  Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::GetChallengeChooseDialogResourceName();
  return;
}


/* RiftUtils::GetZombossResourceName(int, bool) */

void RiftUtils::GetZombossResourceName(int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::GetZombossResourceName(iVar1,SUB41(param_1,0));
  return;
}


/* RiftUtils::SetZombossRewardRatio(float) */

void RiftUtils::SetZombossRewardRatio(float param_1)

{
  long lVar1;
  undefined4 in_register_00005004;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b335c(CONCAT44(in_register_00005004,param_1),lVar1 + 0x32c);
  return;
}


/* RiftUtils::GetZombossRewardRatio() */

void RiftUtils::GetZombossRewardRatio(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3364(*(undefined4 *)(lVar1 + 0x32c));
  return;
}


/* RiftUtils::GetCurrentZPS() */

undefined4 RiftUtils::GetCurrentZPS(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 8);
}


/* RiftUtils::GetCurrentTheme() */

undefined4 RiftUtils::GetCurrentTheme(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0xc);
}


/* RiftUtils::GetLimitedPlantId() */

undefined4 RiftUtils::GetLimitedPlantId(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x38);
}


/* RiftUtils::GetSeasonLeftTime() */

undefined4 RiftUtils::GetSeasonLeftTime(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x30);
}


/* RiftUtils::GetThemeLeftTime() */

undefined4 RiftUtils::GetThemeLeftTime(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x34);
}


/* RiftUtils::GetBossStartTime() */

undefined4 RiftUtils::GetBossStartTime(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x108);
}


/* RiftUtils::GetBossRewardRatio() */

undefined4 RiftUtils::GetBossRewardRatio(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x10c);
}


/* RiftUtils::GetCurrentFuel() */

undefined4 RiftUtils::GetCurrentFuel(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x3c);
}


/* RiftUtils::AddFuel(int) */

void RiftUtils::AddFuel(int param_1)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::AddFuel(this,param_1);
  return;
}


/* RiftUtils::GetFuelToPlay() */

undefined4 RiftUtils::GetFuelToPlay(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0xd0);
}


/* RiftUtils::PlayerCanPlay() */

undefined1 RiftUtils::PlayerCanPlay(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined1 *)(lVar1 + 0x128);
}


/* RiftUtils::IsPublicityTime() */

undefined1 RiftUtils::IsPublicityTime(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined1 *)(lVar1 + 0x129);
}


/* RiftUtils::GetCurrentScore() */

undefined4 RiftUtils::GetCurrentScore(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0xd4);
}


/* RiftUtils::GetCurrentLeague() */

int RiftUtils::GetCurrentLeague(void)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar2;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  iVar1 = *(int *)(lVar2 + 0xd8) + -1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


/* RiftUtils::GetCurrentRank() */

undefined4 RiftUtils::GetCurrentRank(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0xdc);
}


/* RiftUtils::GetBossAttemptCount() */

undefined4 RiftUtils::GetBossAttemptCount(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return *(undefined4 *)(lVar1 + 0x160);
}


/* RiftUtils::GetCurrentSeasonTimeRemaining() */

int RiftUtils::GetCurrentSeasonTimeRemaining(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar4;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  uVar1 = *(uint *)(lVar4 + 0x30);
  uVar3 = LawnApp::GetRealServerTime(gLawnApp);
  iVar2 = uVar1 - uVar3;
  if (uVar1 <= uVar3) {
    iVar2 = 0;
  }
  return iVar2;
}


/* RiftUtils::GetCurrentThemeTimeRemaining() */

int RiftUtils::GetCurrentThemeTimeRemaining(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar4;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  uVar1 = *(uint *)(lVar4 + 0x34);
  uVar3 = LawnApp::GetRealServerTime(gLawnApp);
  iVar2 = uVar1 - uVar3;
  if (uVar1 <= uVar3) {
    iVar2 = 0;
  }
  return iVar2;
}


/* RiftUtils::GetCurrentZombossTimeRemaining() */

int RiftUtils::GetCurrentZombossTimeRemaining(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar4;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  uVar1 = *(uint *)(lVar4 + 0x108);
  uVar3 = LawnApp::GetRealServerTime(gLawnApp);
  iVar2 = uVar1 - uVar3;
  if (uVar1 <= uVar3) {
    iVar2 = 0;
  }
  return iVar2;
}


/* RiftUtils::GetRiftTimedEventThemes() */

long RiftUtils::GetRiftTimedEventThemes(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return lVar1 + 0x10;
}


/* RiftUtils::GetBossReward(int) */

long RiftUtils::GetBossReward(int param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  switch(param_1) {
  case 0:
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    return lVar1 + 0x58;
  case 1:
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    return lVar1 + 0x70;
  case 2:
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    return lVar1 + 0x88;
  case 3:
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    return lVar1 + 0xa0;
  default:
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    return lVar1 + 0x58;
  }
}


/* RiftUtils::GetBossNormalReward() */

void RiftUtils::GetBossNormalReward(void)

{
  GetBossReward(3);
  return;
}


/* RiftUtils::GetBossLevelMaxScore(int) */

undefined4 RiftUtils::GetBossLevelMaxScore(int param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  undefined4 *puVar2;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  puVar2 = (undefined4 *)FUN_036b338c(*(undefined8 *)(lVar1 + 0x148),(long)param_1);
  return *puVar2;
}


/* RiftUtils::GetCurrentWorld() */

long RiftUtils::GetCurrentWorld(void)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  return lVar1 + 0x28;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentEventProps() */

void RiftUtils::GetCurrentEventProps(void)

{
  char cVar1;
  undefined8 uVar2;
  RiftSchedule *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::Profile();
  uVar2 = GetCurrentWorld();
  FUN_05475d88(asStack_10,uVar2);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this = (RiftSchedule *)RiftSchedule::GetSchedule();
    uVar2 = RiftSchedule::GetRiftEventDefinitionFromWorld(this,asStack_10);
  }
  else {
    uVar2 = 0;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentRiftEventTitle() */

void __thiscall RiftUtils::GetCurrentRiftEventTitle(RiftUtils *this)

{
  undefined1 auVar1 [16];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar1 = GetCurrentEventProps();
  if (auVar1._0_8_ == 0) {
    FUN_05478178();
    nop();
  }
  else {
    Sexy::UTF8StringToWString((Sexy *)(auVar1._0_8_ + 0x60),auVar1._8_8_);
    TodStringTranslate(awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::GetCurrentRiftConfig() */

void RiftUtils::GetCurrentRiftConfig(void)

{
  long lVar1;
  
  lVar1 = GetCurrentEventProps();
  if (lVar1 != 0) {
    RiftConfigSheet::GetProperties((string *)(lVar1 + 0x30));
    return;
  }
  return;
}


/* RiftUtils::GetPennyFuelCap() */

undefined4 RiftUtils::GetPennyFuelCap(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = GetCurrentRiftConfig();
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = GetCurrentRiftConfig();
    uVar1 = *(undefined4 *)(lVar2 + 0x68);
  }
  return uVar1;
}


/* RiftUtils::UpdatePennyFuel() */

void RiftUtils::UpdatePennyFuel(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = LawnApp::GetRealServerTime(gLawnApp);
  ProfileUtils::Profile();
  lVar5 = GetCurrentRiftConfig();
  iVar3 = 0;
  if (*(long *)(lVar5 + 0x60) != 0) {
    iVar3 = (int)(lVar4 / *(long *)(lVar5 + 0x60));
  }
  if (-1 < iVar3) {
    iVar1 = PlayerInfo::GetNumPennyFuel();
    iVar2 = GetPennyFuelCap();
    if (iVar2 <= iVar1 + iVar3) {
      iVar3 = GetPennyFuelCap();
      iVar1 = PlayerInfo::GetNumPennyFuel();
      iVar3 = iVar3 - iVar1;
    }
    if (0 < iVar3) {
      nop();
      return;
    }
  }
  return;
}


/* RiftUtils::UpdateZombossSignal() */

void RiftUtils::UpdateZombossSignal(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PlayerInfo *this;
  long lVar4;
  
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  this = (PlayerInfo *)ProfileUtils::Profile();
  lVar4 = GetCurrentRiftConfig();
  iVar2 = 0;
  if (*(long *)(lVar4 + 0x20) != 0) {
    iVar2 = (int)(lVar3 / *(long *)(lVar4 + 0x20));
  }
  if (-1 < iVar2) {
    iVar1 = PlayerInfo::GetCurrentZombossSignal(this);
    if (iVar1 - iVar2 < 1) {
      iVar2 = PlayerInfo::GetCurrentZombossSignal(this);
    }
    if (0 < iVar2) {
      nop();
      return;
    }
  }
  return;
}


/* RiftUtils::GetZombossUnlockingThreshold() */

undefined4 RiftUtils::GetZombossUnlockingThreshold(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = GetCurrentRiftConfig();
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = GetCurrentRiftConfig();
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  return uVar1;
}


/* RiftUtils::ResetZombossSignalWithAdditionalValue(int) */

void RiftUtils::ResetZombossSignalWithAdditionalValue(int param_1)

{
  int iVar1;
  PlayerInfo *this;
  long lVar2;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  lVar2 = GetCurrentRiftConfig();
  if (lVar2 != 0) {
    iVar1 = PlayerInfo::GetCurrentZombossSignal(this);
    lVar2 = GetCurrentRiftConfig();
    if (*(int *)(lVar2 + 0x10) <= iVar1) {
      PlayerInfo::GetCurrentZombossSignal(this);
      GetCurrentRiftConfig();
    }
  }
  nop();
  return;
}


/* RiftUtils::GetZombossSignalResetValue() */

undefined4 RiftUtils::GetZombossSignalResetValue(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = GetCurrentRiftConfig();
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = GetCurrentRiftConfig();
    uVar1 = *(undefined4 *)(lVar2 + 0x14);
  }
  return uVar1;
}


/* RiftUtils::CalcZPSSignalGained(int) */

undefined4 RiftUtils::CalcZPSSignalGained(int param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = GetCurrentRiftConfig();
  uVar1 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined4 *)FUN_036b33a8(*(undefined8 *)(lVar2 + 0x48),(long)param_1);
    uVar1 = *puVar3;
  }
  return uVar1;
}


/* RiftUtils::GetTimeToNextPennyFuelUpdate() */

long RiftUtils::GetTimeToNextPennyFuelUpdate(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  ProfileUtils::Profile();
  lVar2 = GetCurrentRiftConfig();
  if (lVar2 != 0) {
    iVar1 = PlayerInfo::GetNumPennyFuel();
    lVar2 = GetCurrentRiftConfig();
    if (iVar1 < *(int *)(lVar2 + 0x68)) {
      lVar2 = LawnApp::GetRealServerTime(gLawnApp);
      lVar3 = GetCurrentRiftConfig();
      if (lVar3 != 0) {
        lVar3 = GetCurrentRiftConfig();
        return *(long *)(lVar3 + 0x60) - lVar2;
      }
    }
  }
  return 0;
}


/* RiftUtils::GetTimeToPennyFuelFull() */

long RiftUtils::GetTimeToPennyFuelFull(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = GetTimeToNextPennyFuelUpdate();
  lVar4 = 0;
  if (lVar3 != 0) {
    ProfileUtils::Profile();
    lVar4 = GetCurrentRiftConfig();
    iVar1 = *(int *)(lVar4 + 0x68);
    uVar2 = PlayerInfo::GetNumPennyFuel();
    iVar1 = iVar1 + ~uVar2;
    lVar4 = lVar3;
    if (0 < iVar1) {
      lVar4 = GetCurrentRiftConfig();
      return lVar3 + (long)iVar1 * *(long *)(lVar4 + 0x60);
    }
  }
  return lVar4;
}


/* RiftUtils::ZombossFightsPerCycleExceeded() */

bool RiftUtils::ZombossFightsPerCycleExceeded(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PlayerInfo *this;
  
  lVar3 = GetCurrentRiftConfig();
  iVar1 = *(int *)(lVar3 + 0xa4);
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar2 = PlayerInfo::GetNumTimesZombossFought(this);
  return iVar1 <= iVar2;
}


/* RiftUtils::GetCurrentLevelZombieStats() */

long RiftUtils::GetCurrentLevelZombieStats(void)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  return lVar1 + 0xa8;
}


/* RiftUtils::GetMaxScore(LevelType, int) */

undefined4 RiftUtils::GetMaxScore(int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = GetCurrentRiftConfig();
  if (param_1 == 0) {
    puVar3 = (undefined4 *)FUN_036b33a8(*(undefined8 *)(lVar2 + 0x108),(long)param_2);
    return *puVar3;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      puVar3 = (undefined4 *)FUN_036b33a8(*(undefined8 *)(lVar2 + 0x138),(long)param_2);
      uVar1 = *puVar3;
    }
    else {
      uVar1 = 0;
      if (param_1 == 3) {
        uVar1 = *(undefined4 *)(lVar2 + 0x150);
      }
    }
    return uVar1;
  }
  puVar3 = (undefined4 *)FUN_036b33a8(*(undefined8 *)(lVar2 + 0x120),(long)param_2);
  return *puVar3;
}


/* RiftUtils::GetLeagueName(int) */

void __thiscall RiftUtils::GetLeagueName(RiftUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  FUN_036b33e4(*(undefined8 *)(lVar1 + 0x1b8),(long)(int)this);
  FUN_05475d88();
  return;
}


/* RiftUtils::GetLeagueNameShort(int) */

void __thiscall RiftUtils::GetLeagueNameShort(RiftUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  FUN_036b33e4(*(undefined8 *)(lVar1 + 0x1d0),(long)(int)this);
  FUN_05475d88();
  return;
}


/* RiftUtils::GetLeagueIcon(int) */

void __thiscall RiftUtils::GetLeagueIcon(RiftUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  FUN_036b33e4(*(undefined8 *)(lVar1 + 0x188),(long)(int)this);
  FUN_05475d88();
  return;
}


/* RiftUtils::GetLeagueSmallIcon(int) */

void __thiscall RiftUtils::GetLeagueSmallIcon(RiftUtils *this,int param_1)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  FUN_036b33e4(*(undefined8 *)(lVar1 + 0x1a0),(long)(int)this);
  FUN_05475d88();
  return;
}


/* RiftUtils::GetLeagueFrameRangeByLeague(int) */

void RiftUtils::GetLeagueFrameRangeByLeague(int param_1)

{
  long lVar1;
  
  lVar1 = GetCurrentRiftConfig();
  FUN_036b34a4(*(undefined8 *)(lVar1 + 0x1e8),(long)param_1);
  return;
}


/* RiftUtils::IsNodeUnlocked(int) */

undefined8 RiftUtils::IsNodeUnlocked(int param_1)

{
  char cVar1;
  RiftEventDefinition *this;
  PlayerInfo *this_00;
  undefined8 uVar2;
  
  this = (RiftEventDefinition *)GetCurrentEventProps();
  if (this != (RiftEventDefinition *)0x0) {
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    if (param_1 < 1) {
      uVar2 = RiftEventDefinition::IsLevelNodeUnlocked(this,param_1);
      return uVar2;
    }
    cVar1 = RiftEventDefinition::IsLevelNodeUnlocked(this,param_1);
    if (cVar1 != '\0') {
      uVar2 = PlayerInfo::HasCompletedRiftLevel(this_00,param_1 + -1);
      return uVar2;
    }
  }
  return 0;
}


/* RiftUtils::GetNodeUnlockedTime(int) */

long RiftUtils::GetNodeUnlockedTime(int param_1)

{
  RiftEventDefinition *this;
  long lVar1;
  float fVar2;
  
  this = (RiftEventDefinition *)GetCurrentEventProps();
  if (this == (RiftEventDefinition *)0x0) {
    lVar1 = -1;
  }
  else {
    fVar2 = (float)RiftEventDefinition::GetNodeUnlockedTime(this,param_1);
    lVar1 = (long)fVar2;
  }
  return lVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetNodeUnlockedTimeText(int) */

void __thiscall RiftUtils::GetNodeUnlockedTimeText(RiftUtils *this,int param_1)

{
  StringHelper *this_00;
  long extraout_x1;
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (StringHelper *)GetNodeUnlockedTime((int)this);
  if ((long)this_00 < 1) {
    FUN_05478178();
    nop();
  }
  else {
    FUN_05476574(auStack_28);
    TodStringTranslate(L"[RIFT_NODE_UNLOCK_TIME]");
    StringHelper::ConvertTimeToHMString(this_00,extraout_x1);
    TodReplaceString(awStack_20,L"{DURATION}",awStack_18);
    FUN_054766c8(auStack_28,auStack_10);
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476584();
    FUN_05476c50(awStack_20);
    FUN_05476c50(auStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::GetFirstClearReward(int, int) */

long RiftUtils::GetFirstClearReward(int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  lVar2 = GetCurrentEventProps();
  if ((lVar2 == 0) ||
     (lVar2 = RiftFirstClearRewards::GetFirstClearRewards((string *)(lVar2 + 0x48)), lVar2 == 0)) {
    return 0;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = (ulong)param_2;
  iVar1 = param_1 + -1;
  uVar3 = FUN_036b33b0(uVar7,*(undefined8 *)(lVar2 + 0x30));
  if (uVar8 < uVar3) {
    lVar4 = FUN_036b33bc(uVar7,uVar8);
    if (*(int *)(lVar4 + 0x28) != 0) goto joined_r0x036b567c;
  }
  else {
    param_2 = (int)uVar3 - 1;
    uVar8 = (ulong)param_2;
    lVar4 = FUN_036b33bc(uVar7,uVar8);
    if (*(int *)(lVar4 + 0x28) != 0) goto joined_r0x036b567c;
    if (param_2 == 0xffffffff) {
      lVar4 = 0;
      goto joined_r0x036b567c;
    }
  }
  lVar6 = uVar8 - 1;
  do {
    if (lVar6 == (uVar8 - 1) - (ulong)(uint)param_2) break;
    lVar4 = FUN_036b33bc(uVar7,lVar6);
    lVar6 = lVar6 + -1;
  } while (*(int *)(lVar4 + 0x28) == 0);
joined_r0x036b567c:
  if (iVar1 < 0) {
    return lVar4;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  uVar3 = FUN_036b3408(uVar7,*(undefined8 *)(lVar2 + 0x18));
  if ((ulong)(long)iVar1 < uVar3) {
    puVar5 = (undefined8 *)FUN_036b341c(uVar7,(long)iVar1);
    uVar7 = *puVar5;
    uVar3 = FUN_036b33b0(uVar7,puVar5[1]);
    if (uVar8 < uVar3) {
      lVar2 = FUN_036b33bc(uVar7,uVar8);
      if (*(int *)(lVar2 + 0x28) != 0) {
        lVar4 = lVar2;
      }
      return lVar4;
    }
  }
  return lVar4;
}


/* RiftUtils::GetNextZombossCycleStart() */

long RiftUtils::GetNextZombossCycleStart(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)GetCurrentEventProps();
  lVar5 = *plVar2;
  lVar3 = LawnApp::GetRealServerTime(gLawnApp);
  lVar4 = GetCurrentRiftConfig();
  lVar4 = (long)((float)*(int *)(lVar4 + 0xa0) * 3600.0);
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = (int)((lVar3 - lVar5) / lVar4);
  }
  return lVar5 + (iVar1 + 1) * lVar4;
}


/* RiftUtils::UpdateZombossFights() */

void RiftUtils::UpdateZombossFights(void)

{
  ulong uVar1;
  PlayerInfo *pPVar2;
  ulong uVar3;
  
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  uVar3 = PlayerInfo::GetZombossNextAvailableTime(pPVar2);
  if (uVar1 < uVar3) {
    return;
  }
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  uVar1 = GetNextZombossCycleStart();
  PlayerInfo::SetZombossNextAvailableTime(pPVar2,uVar1);
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::ClearZombossFightCount(pPVar2);
  return;
}


/* RiftUtils::GetTimeUntilZombossRefresh() */

long RiftUtils::GetTimeUntilZombossRefresh(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = GetNextZombossCycleStart();
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  return lVar1 - lVar2;
}


/* RiftUtils::GetZombossPrizeWinRewardData_Internal(int) */

int * RiftUtils::GetZombossPrizeWinRewardData_Internal(int param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  
  lVar1 = GetCurrentEventProps();
  if ((lVar1 == 0) || (lVar1 = RiftZombossRewards::GetRewards((string *)(lVar1 + 0x58)), lVar1 == 0)
     ) {
LAB_036b580c:
    piVar3 = (int *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = FUN_036b3448(uVar4,*(undefined8 *)(lVar1 + 0x20));
    lVar1 = 0;
    do {
      if (lVar1 == lVar2) goto LAB_036b580c;
      piVar3 = (int *)FUN_036b3454(uVar4,lVar1);
      lVar1 = lVar1 + 1;
    } while (*piVar3 != param_1);
  }
  return piVar3;
}


/* RiftUtils::GetZombossPrizeWinReward(int, int) */

undefined8 RiftUtils::GetZombossPrizeWinReward(int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = GetZombossPrizeWinRewardData_Internal(param_1);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    uVar2 = FUN_036b3428(uVar3,*(undefined8 *)(lVar1 + 0x10));
    if ((ulong)(long)param_2 < uVar2) {
      uVar3 = FUN_036b343c(uVar3);
      return uVar3;
    }
  }
  return 0;
}


/* RiftUtils::GetZombossPrizeDefaultReward(int) */

undefined8 RiftUtils::GetZombossPrizeDefaultReward(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = Reflection::RFunctionType::StaticGetTypeCategory();
  if (iVar1 <= param_1) {
    iVar1 = Reflection::RFunctionType::StaticGetTypeCategory();
    param_1 = iVar1 + -1;
  }
  lVar2 = GetZombossPrizeWinRewardData_Internal(param_1);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar3 = FUN_036b3428(uVar4,*(undefined8 *)(lVar2 + 0x10));
    if (3 < uVar3) {
      uVar4 = FUN_036b343c(uVar4,3);
      return uVar4;
    }
  }
  return 0;
}


/* RiftUtils::GetPinataTypeForZombossGrandPrizeOpeningSequence() */

undefined * RiftUtils::GetPinataTypeForZombossGrandPrizeOpeningSequence(void)

{
  long lVar1;
  
  lVar1 = GetCurrentEventProps();
  if ((lVar1 != 0) && (lVar1 = RiftZombossRewards::GetRewards((string *)(lVar1 + 0x58)), lVar1 != 0)
     ) {
    return (undefined *)(lVar1 + 0x10);
  }
  return &DAT_06aacf58;
}


/* RiftUtils::IsPlayerOnActiveEvent() */

bool __thiscall RiftUtils::IsPlayerOnActiveEvent(RiftUtils *this)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  if ((cVar1 != '\0') && (lVar2 = GetCurrentRiftConfig(), lVar2 != 0)) {
    lVar2 = CalcCurrentScheduledEvent();
    lVar3 = GetCurrentEventProps();
    return lVar2 == lVar3;
  }
  return false;
}


/* RiftUtils::GetTimeToNextLevelUnlock() */

void RiftUtils::GetTimeToNextLevelUnlock(void)

{
  RiftEventDefinition *this;
  long lVar1;
  
  this = (RiftEventDefinition *)GetCurrentEventProps();
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  RiftEventDefinition::GetNextNodeUnlockTime(this,(float)lVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentRiftWorld() */

void __thiscall RiftUtils::GetCurrentRiftWorld(RiftUtils *this)

{
  long lVar1;
  long lVar2;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = GetCurrentEventProps();
  if (lVar2 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentLandingLevel() */

void __thiscall RiftUtils::GetCurrentLandingLevel(RiftUtils *this)

{
  char cVar1;
  WorldDataManager *this_00;
  FilesystemSaveGameContext *this_01;
  string *in_x8;
  undefined1 auVar2 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  auVar2 = GetCurrentEventProps();
  if (auVar2._0_8_ != 0) {
    WorldMapUtils::GetFirstLevelInWorld((WorldMapUtils *)(auVar2._0_8_ + 0x38),auVar2._8_8_);
    cVar1 = FUN_0547419c(asStack_10);
    if (cVar1 == '\0') {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      this_01 = (FilesystemSaveGameContext *)WorldDataManager::FindEventByName(this_00,asStack_10);
      if (this_01 != (FilesystemSaveGameContext *)0x0) {
        Sexy::FilesystemSaveGameContext::GetBuffer(this_01);
        FUN_05475d88();
        std::string::~string(asStack_10);
        goto LAB_036b5aa0;
      }
    }
    std::string::~string(asStack_10);
  }
  std::string::string(in_x8,"");
  nop();
LAB_036b5aa0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GoToRiftWorldMap() */

void RiftUtils::GoToRiftWorldMap(void)

{
  char cVar1;
  WorldDataManager *this;
  long lVar2;
  string asStack_10 [8];
  RiftUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLandingLevel(___stack_chk_guard);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar2 = WorldDataManager::FindEventByDataName(this,asStack_10);
    if (lVar2 != 0) {
      GameStateMgr::ShowWorldMapWithDestination(gGameStateMgr,lVar2,5,5);
    }
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentSubEventProps() */

void RiftUtils::GetCurrentSubEventProps(void)

{
  char cVar1;
  undefined8 uVar2;
  RiftEventDefinition *this;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProfileUtils::Profile();
  uVar2 = GetCurrentWorld();
  FUN_05475d88(asStack_10,uVar2);
  cVar1 = FUN_0547419c(asStack_10);
  if (((cVar1 == '\0') &&
      (this = (RiftEventDefinition *)GetCurrentEventProps(), this != (RiftEventDefinition *)0x0)) &&
     (lVar3 = RiftEventDefinition::GetCurrentRiftSubEvent(this), lVar3 != 0)) {
    uVar2 = RiftSubEventProperties::GetProperties((string *)(lVar3 + 0x10));
  }
  else {
    uVar2 = 0;
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* RiftUtils::GetLevelEndZPS() */

undefined4 RiftUtils::GetLevelEndZPS(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return *(undefined4 *)(lVar1 + 0x14);
}


/* RiftUtils::GetLevelEndDrawPerks() */

long RiftUtils::GetLevelEndDrawPerks(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return lVar1 + 0x18;
}


/* RiftUtils::GetLevelEndRewards() */

long RiftUtils::GetLevelEndRewards(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return lVar1 + 0x30;
}


/* RiftUtils::GetLevelEndBonusRewards() */

long RiftUtils::GetLevelEndBonusRewards(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return lVar1 + 0x48;
}


/* RiftUtils::GetLevelEndFirstClearRewards() */

long RiftUtils::GetLevelEndFirstClearRewards(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return lVar1 + 0x60;
}


/* RiftUtils::GetCurrentTotalScore() */

undefined4 RiftUtils::GetCurrentTotalScore(void)

{
  UITourismOctober *this;
  long lVar1;
  
  this = (UITourismOctober *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = UITourismOctober::getData(this);
  return *(undefined4 *)(lVar1 + 0x78);
}


/* RiftUtils::SetEndLevelScore(int) */

void RiftUtils::SetEndLevelScore(int param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3338(lVar1 + 800,param_1);
  return;
}


/* RiftUtils::GetEndLevelScore() */

void RiftUtils::GetEndLevelScore(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3340(*(undefined4 *)(lVar1 + 800));
  return;
}


/* RiftUtils::SetLevelTime(float) */

void RiftUtils::SetLevelTime(float param_1)

{
  long lVar1;
  undefined4 in_register_00005004;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3344(CONCAT44(in_register_00005004,param_1),lVar1 + 0x324);
  return;
}


/* RiftUtils::GetLevelTime() */

void RiftUtils::GetLevelTime(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b334c(*(undefined4 *)(lVar1 + 0x324));
  return;
}


/* RiftUtils::SetBossLevelTime(float) */

void RiftUtils::SetBossLevelTime(float param_1)

{
  long lVar1;
  undefined4 in_register_00005004;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3350(CONCAT44(in_register_00005004,param_1),lVar1 + 0x328);
  return;
}


/* RiftUtils::GetBossLevelTime() */

void RiftUtils::GetBossLevelTime(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3358(*(undefined4 *)(lVar1 + 0x328));
  return;
}


/* RiftUtils::GetLeaderboardData() */

void RiftUtils::GetLeaderboardData(void)

{
  PVPManager *this;
  
  this = (PVPManager *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  PVPManager::GetPreGardenRankInfoList(this);
  return;
}


/* RiftUtils::GetLocalPlayerData() */

long RiftUtils::GetLocalPlayerData(void)

{
  long lVar1;
  
  lVar1 = GetLeaderboardData();
  return lVar1 + 0x18;
}


/* RiftUtils::PlayerGetLeague() */

int RiftUtils::PlayerGetLeague(void)

{
  long lVar1;
  
  lVar1 = GetLocalPlayerData();
  return *(int *)(lVar1 + 0x2c) + -1;
}


/* RiftUtils::GetLocalPlayerLeaderboardIndex() */

undefined4 RiftUtils::GetLocalPlayerLeaderboardIndex(void)

{
  long lVar1;
  
  lVar1 = GetLeaderboardData();
  return *(undefined4 *)(lVar1 + 0x4c);
}


/* RiftUtils::GetLocalPlayerLeaderboardData() */

void RiftUtils::GetLocalPlayerLeaderboardData(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)GetLeaderboardData();
  iVar1 = GetLocalPlayerLeaderboardIndex();
  FUN_036b34b0(*puVar2,(long)iVar1);
  return;
}


/* RiftUtils::GetLeaderboardLeagueRewards() */

long RiftUtils::GetLeaderboardLeagueRewards(void)

{
  RiftNetworkMgr *this;
  long lVar1;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = RiftNetworkMgr::GetLeaderboardInfo(this);
  return lVar1 + 0x50;
}


/* RiftUtils::HasCurrentTournamentEnded() */

void RiftUtils::HasCurrentTournamentEnded(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3328(*(undefined1 *)(lVar1 + 0x2f8));
  return;
}


/* RiftUtils::HasCurrentSeasonEnded() */

void RiftUtils::HasCurrentSeasonEnded(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b332c(*(undefined1 *)(lVar1 + 0x2f9));
  return;
}


/* RiftUtils::GetTournamentEndedData() */

void RiftUtils::GetTournamentEndedData(void)

{
  ActivityConfig *this;
  
  this = (ActivityConfig *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  ActivityConfig::GetRefreshPlantsPurchaseData(this);
  return;
}


/* RiftUtils::ClearCurrentTournamentEndedFlag() */

void RiftUtils::ClearCurrentTournamentEndedFlag(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  FUN_036b3330(lVar1 + 0x2f8);
  return;
}


/* RiftUtils::GetPromotedReward() */

void RiftUtils::GetPromotedReward(void)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::GetPromotedReward(this);
  return;
}


/* RiftUtils::HasPromotedReward() */

undefined8 RiftUtils::HasPromotedReward(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this;
  RiftNetworkMgr *this_00;
  undefined8 uVar3;
  
  iVar2 = GetPromotedReward();
  this = (PlayerInfo *)ProfileUtils::Profile();
  if ((this != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::isUnlockHeadshotId(this,iVar2), cVar1 != '\0')) {
    return 0;
  }
  this_00 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  uVar3 = RiftNetworkMgr::HasPromoted(this_00);
  return uVar3;
}


/* RiftUtils::SendGet_MainEntry() */

void RiftUtils::SendGet_MainEntry(void)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::RequestGetMainEntry(this);
  return;
}


/* RiftUtils::SendPost_EndPlay(RiftPostEndPlay) */

void RiftUtils::SendPost_EndPlay(undefined8 *param_1)

{
  RiftNetworkMgr *pRVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined4 local_8;
  
  pRVar1 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  local_20 = *param_1;
  uStack_18 = param_1[1];
  local_10 = param_1[2];
  local_8 = *(undefined4 *)(param_1 + 3);
  RiftNetworkMgr::RequestPostEndPlay(pRVar1,&local_20);
  return;
}


/* RiftUtils::SendPost_Play(bool) */

void RiftUtils::SendPost_Play(bool param_1)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::RequestPlay(this,param_1);
  return;
}


/* RiftUtils::SendGet_LeaderboardEntry() */

void RiftUtils::SendGet_LeaderboardEntry(void)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::RequestLeaderboard(this);
  return;
}


/* RiftUtils::GetTargetLevelReward(int, int) */

undefined * RiftUtils::GetTargetLevelReward(int param_1,int param_2)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  if (-1 < param_1) {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::_M_root(this);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    iVar1 = FUN_036b3470(uVar4,*(undefined8 *)(lVar2 + 0x48));
    if (param_1 < iVar1) {
      if (param_2 == 1) {
        lVar2 = FUN_036b3484(uVar4,(long)param_1);
        return (undefined *)(lVar2 + 0x20);
      }
      if (param_2 != 2) {
        puVar3 = (undefined *)FUN_036b3484(uVar4,(long)param_1);
        return puVar3;
      }
      lVar2 = FUN_036b3484(uVar4,(long)param_1);
      return (undefined *)(lVar2 + 0x40);
    }
  }
  return &DAT_06aacde8;
}


/* RiftUtils::GetTargetLevelMaxScore(int, int) */

undefined4 RiftUtils::GetTargetLevelMaxScore(int param_1,int param_2)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  puVar2 = (undefined8 *)FUN_036b3490(*(undefined8 *)(lVar1 + 0x130),(long)param_1);
  puVar3 = (undefined4 *)FUN_036b338c(*puVar2,(long)param_2);
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentRiftEventTimeRemaining() */

void RiftUtils::GetCurrentRiftEventTimeRemaining(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_18 [3];
  
  local_18[2] = ___stack_chk_guard;
  lVar1 = GetCurrentEventProps();
  lVar3 = 0;
  if (lVar1 != 0) {
    local_18[0] = *(long *)(lVar1 + 8) + -0x5e0cd010;
    local_18[1] = 0;
    plVar2 = std::max<long>(local_18,local_18 + 1);
    lVar3 = *plVar2;
  }
  if (local_18[2] == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentSubEventTimeRemaining() */

void RiftUtils::GetCurrentSubEventTimeRemaining(void)

{
  RiftEventDefinition *this;
  long *plVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18 [3];
  
  local_18[2] = ___stack_chk_guard;
  this = (RiftEventDefinition *)GetCurrentEventProps();
  if (this == (RiftEventDefinition *)0x0) {
    lVar2 = 0;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    RiftEventDefinition::FindActiveRiftSubEventDefinition(this,0x5e0cd010,&local_28,&local_20);
    local_18[0] = local_20 + -0x5e0cd010;
    local_18[1] = 0;
    plVar1 = std::max<long>(local_18,local_18 + 1);
    lVar2 = *plVar1;
  }
  if (local_18[2] == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* RiftUtils::SetLevelOverride(std::string) */

void RiftUtils::SetLevelOverride(string *param_1)

{
  string *psVar1;
  
  psVar1 = (string *)Sexy::LazySingleton<RiftStatus>::GetInstance();
  Sexy::IPurchaseAdapter::RequestPay(psVar1,param_1);
  return;
}


/* RiftUtils::GetLevelOverride() */

void __thiscall RiftUtils::GetLevelOverride(RiftUtils *this)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<RiftStatus>::GetInstance();
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(this_00);
  FUN_05475d88();
  return;
}


/* RiftUtils::SetDifficultyForNextLevel(int) */

void RiftUtils::SetDifficultyForNextLevel(int param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftStatus>::GetInstance();
  FUN_036b3318(lVar1 + 8,param_1);
  return;
}


/* RiftUtils::GetDifficultyForNextLevel() */

void RiftUtils::GetDifficultyForNextLevel(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftStatus>::GetInstance();
  FUN_036b3320(*(undefined4 *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetZPSBackupReward() */

void RiftUtils::GetZPSBackupReward(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentRiftConfig();
  if (lVar2 == 0) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    local_10 = GetDifficultyForNextLevel();
    lVar2 = GetCurrentRiftConfig();
    local_c = FUN_036b33b0(*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
    local_c = local_c + -1;
    piVar3 = eastl::min_alt<int>(&local_10,&local_c);
    iVar1 = *piVar3;
    lVar2 = GetCurrentRiftConfig();
    if (local_8 == ___stack_chk_guard) {
      FUN_036b33bc(*(undefined8 *)(lVar2 + 0x88),(long)iVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetFirstClearRewardForCurrentLevel() */

void RiftUtils::GetFirstClearRewardForCurrentLevel(void)

{
  int iVar1;
  undefined8 uVar2;
  WorldDataManager *this;
  long lVar3;
  uint uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_10,uVar2);
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar3 = WorldDataManager::FindEventByName(this,asStack_10);
  if (lVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)(lVar3 + 0x8e);
  }
  iVar1 = GetDifficultyForNextLevel();
  uVar2 = GetFirstClearReward(uVar4,iVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::ShouldGiveFirstClearRewards() */

void RiftUtils::ShouldGiveFirstClearRewards(void)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  WorldDataManager *this;
  MapEventItem *pMVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_10,uVar3);
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  pMVar4 = (MapEventItem *)WorldDataManager::FindEventByName(this,asStack_10);
  iVar2 = GetDifficultyForNextLevel();
  bVar1 = HasEarnedFirstClearReward(pMVar4,iVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::MarkCurrentRiftLevelComplete() */

void RiftUtils::MarkCurrentRiftLevelComplete(void)

{
  int iVar1;
  PlayerInfo *this;
  WorldDataManager *this_00;
  long lVar2;
  uint uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = GetDifficultyForNextLevel();
  this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  lVar2 = WorldDataManager::FindEventByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  if (lVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(lVar2 + 0x8e);
  }
  PlayerInfo::SetRiftLevelComplete(this,uVar3,iVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::GiveFirstClearRewards() */

void RiftUtils::GiveFirstClearRewards(void)

{
  GetFirstClearRewardForCurrentLevel();
  MarkCurrentRiftLevelComplete();
  return;
}


/* RiftUtils::GetZombieLevel() */

undefined4 RiftUtils::GetZombieLevel(void)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  iVar1 = GetDifficultyForNextLevel();
  lVar2 = GetCurrentRiftConfig();
  puVar3 = (undefined4 *)FUN_036b33a8(*(undefined8 *)(lVar2 + 0xc0),(long)iVar1);
  return *puVar3;
}


/* RiftUtils::GetZombossPOLCount() */

void RiftUtils::GetZombossPOLCount(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftStatus>::GetInstance();
  FUN_036b3324(*(undefined4 *)(lVar1 + 0x18));
  return;
}


/* RiftUtils::GetZombossPOLCumulativeExtraTime() */

float RiftUtils::GetZombossPOLCumulativeExtraTime(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = RiftPropertySheet::GetProperties();
  iVar1 = *(int *)(lVar3 + 0x5c);
  iVar2 = GetZombossPOLCount();
  return (float)(iVar2 * iVar1);
}


/* RiftUtils::GetZombossPOLCumulativeGemCost() */

int RiftUtils::GetZombossPOLCumulativeGemCost(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = RiftPropertySheet::GetProperties();
  iVar1 = *(int *)(lVar3 + 0x54);
  iVar2 = GetZombossPOLCount();
  return iVar2 * iVar1;
}


/* RiftUtils::ResetZombossPOLCount() */

void RiftUtils::ResetZombossPOLCount(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<RiftStatus>::GetInstance();
  FUN_036b37b4(lVar1 + 0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentThemeName() */

void __thiscall RiftUtils::GetCurrentThemeName(RiftUtils *this)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentTheme();
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetThemeName(iVar1);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentThemeDescription() */

void __thiscall RiftUtils::GetCurrentThemeDescription(RiftUtils *this)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentTheme();
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetThemeDescription(iVar1);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::CalcCurrentZombossEventEndPrize() */

void __thiscall RiftUtils::CalcCurrentZombossEventEndPrize(RiftUtils *this)

{
  int iVar1;
  int iVar2;
  RiftZombossRewardDifficultyEntry *pRVar3;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  iVar1 = GetZombossAttemptsMade();
  while( true ) {
    iVar2 = Reflection::RFunctionType::StaticGetTypeCategory();
    if (iVar2 <= iVar1) break;
    pRVar3 = (RiftZombossRewardDifficultyEntry *)GetZombossPrizeDefaultReward(iVar1);
    RiftZombossRewardDifficultyEntry::Combine((RiftZombossRewardDifficultyEntry *)in_x8,pRVar3);
    iVar1 = iVar1 + 1;
  }
  return;
}


/* RiftUtils::EventHasZPSBackupReward() */

byte RiftUtils::EventHasZPSBackupReward(void)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = GetCurrentRiftConfig();
  bVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = GetCurrentRiftConfig();
    bVar1 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
            empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>
                   *)(lVar2 + 0x88));
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}


/* RiftUtils::IsPlayingRiftLevel() */

bool RiftUtils::IsPlayingRiftLevel(void)

{
  bool bVar1;
  long lVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    bVar1 = BoardHelpers::HasGameModuleInLevelDefinition<PerkHandlerModuleProperties>();
    return bVar1;
  }
  return false;
}


/* RiftUtils::IsPlayingZombossLevel() */

bool RiftUtils::IsPlayingZombossLevel(void)

{
  bool bVar1;
  long lVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    bVar1 = BoardHelpers::HasGameModuleInLevelDefinition<ZombossRiftBattleModuleProperties>();
    return bVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentMapEventSubType() */

void RiftUtils::GetCurrentMapEventSubType(void)

{
  char cVar1;
  undefined8 uVar2;
  WorldDataManager *this;
  long lVar3;
  undefined4 uVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_10);
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00(asStack_10,uVar2);
  }
  this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar3 = WorldDataManager::FindEventByLevelName(this,asStack_10);
  if (lVar3 == 0) {
    cVar1 = IsPlayingZombossLevel();
    uVar4 = 7;
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = *(undefined4 *)(lVar3 + 0x18);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* RiftUtils::IsRiftTimedLevel() */

bool RiftUtils::IsRiftTimedLevel(void)

{
  int iVar1;
  
  iVar1 = GetCurrentMapEventSubType();
  return iVar1 == 0xd;
}


/* RiftUtils::GetPennyFuelCostForLevelNode(int) */

undefined4 RiftUtils::GetPennyFuelCostForLevelNode(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  cVar1 = IsPlayingZombossLevel();
  if (cVar1 != '\0') {
    return 0;
  }
  lVar3 = GetCurrentRiftConfig();
  if ((lVar3 != 0) && (iVar2 = GetDifficultyForNextLevel(), -1 < iVar2)) {
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    uVar4 = FUN_036b3380(uVar6,*(undefined8 *)(lVar3 + 0x38));
    if ((ulong)(long)iVar2 < uVar4) {
      puVar5 = (undefined4 *)FUN_036b33a8(uVar6,(long)iVar2);
      return *puVar5;
    }
  }
  return 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentLevelScore(float) */

void RiftUtils::GetCurrentLevelScore(float param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  BonusChallengeModule *this;
  int *piVar5;
  float *pfVar6;
  LevelModuleManager *this_00;
  BoardTimer *pBVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bStack_1a;
  bool bStack_19;
  bool bStack_18;
  bool local_17;
  bool bStack_16;
  bool local_15;
  int iStack_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = GetDifficultyForNextLevel();
  cVar1 = IsPlayingZombossLevel();
  lVar4 = GetCurrentRiftConfig();
  fVar10 = *(float *)(lVar4 + 0xd8);
  if (cVar1 == '\0') {
    pfVar6 = (float *)FUN_036b349c(*(undefined8 *)(lVar4 + 0xe0),(long)iVar3);
    fVar9 = *pfVar6;
  }
  else {
    fVar9 = *(float *)(lVar4 + 0xf8);
  }
  cVar2 = IsRiftTimedLevel();
  this = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
  if (this == (BonusChallengeModule *)0x0) {
LAB_036b728c:
    fVar8 = 1.0;
    if (cVar1 != '\0') goto LAB_036b71c4;
LAB_036b7294:
    if (cVar2 == '\0') {
      iVar3 = (int)(fVar9 * (fVar10 - param_1) * fVar8);
    }
    else if (iVar3 == 0) {
      iVar3 = (int)((900.0 - param_1) * 10.0 + 3000.0);
    }
    else {
      iVar3 = (int)((800.0 - param_1) * 30.0 + 12000.0);
    }
  }
  else {
    local_10 = FUN_036b3394(*(undefined8 *)(lVar4 + 0x158),*(undefined8 *)(lVar4 + 0x160));
    local_c = BonusChallengeModule::CalcCompletedActiveChallenges(this);
    piVar5 = eastl::min_alt<int>(&local_c,&local_10);
    if (*piVar5 == 0) goto LAB_036b728c;
    pfVar6 = (float *)FUN_036b349c(*(undefined8 *)(lVar4 + 0x158),(long)(*piVar5 + -1));
    fVar8 = *pfVar6;
    if (cVar1 == '\0') goto LAB_036b7294;
LAB_036b71c4:
    this_00 = (LevelModuleManager *)
              FUN_036b3314(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    if ((this_00 == (LevelModuleManager *)0x0) ||
       (pBVar7 = LevelModuleManager::GetModuleByClass<BoardTimer>(this_00),
       pBVar7 == (BoardTimer *)0x0)) {
      iVar3 = 0;
      goto LAB_036b725c;
    }
    fVar10 = (float)FUN_036b336c(*(undefined4 *)(pBVar7 + 0x3c));
    GetZombossWinLossData(0,&bStack_1a,&bStack_19,&iStack_14);
    GetZombossWinLossData(1,&bStack_18,&local_17,&local_10);
    GetZombossWinLossData(2,&bStack_16,&local_15,&local_c);
    pfVar6 = (float *)FUN_036b349c(*(undefined8 *)(lVar4 + 0x170),(uint)local_15 + (uint)local_17);
    iVar3 = (int)(fVar10 * fVar9 * *pfVar6);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
LAB_036b725c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


/* RiftUtils::GetCurrentLevelMaxScore() */

void RiftUtils::GetCurrentLevelMaxScore(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = GetDifficultyForNextLevel();
  cVar1 = IsPlayingZombossLevel();
  uVar5 = 3;
  if (cVar1 == '\0') {
    iVar3 = GetCurrentMapEventSubType();
    uVar5 = 1;
    if (iVar3 != 2) {
      cVar1 = IsRiftTimedLevel();
      uVar4 = 2;
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      GetMaxScore(uVar4,uVar2);
      return;
    }
  }
  GetMaxScore(uVar5,uVar2);
  return;
}


/* RiftUtils::IsZombossLevelVictory() */

void RiftUtils::IsZombossLevelVictory(void)

{
  ZombossRiftBattleModule *this;
  
  this = BoardHelpers::GetLevelModuleByClass<ZombossRiftBattleModule>();
  if (this != (ZombossRiftBattleModule *)0x0) {
    ZombossRiftBattleModule::IsVictory(this);
    return;
  }
  return;
}


/* RiftUtils::CheatForceZombossLevelVictory() */

void RiftUtils::CheatForceZombossLevelVictory(void)

{
  ZombossRiftBattleModule *this;
  
  this = BoardHelpers::GetLevelModuleByClass<ZombossRiftBattleModule>();
  if (this != (ZombossRiftBattleModule *)0x0) {
    ZombossRiftBattleModule::CheatForceVictory(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetNodeSubTypeIcon(MapEventSubType) */

void __thiscall
RiftUtils::GetNodeSubTypeIcon
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          undefined4 param_2)

{
  CachedUIResourcePtr *this;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  switch(param_2) {
  case 0:
  case 1:
  case 6:
  case 7:
    this = (CachedUIResourcePtr *)&DAT_06aacee8;
    break;
  case 2:
  case 0xd:
    this = (CachedUIResourcePtr *)&DAT_06aacdb8;
    break;
  case 3:
    this = (CachedUIResourcePtr *)&DAT_06aacec0;
    break;
  case 4:
    this = (CachedUIResourcePtr *)&DAT_06aace08;
    break;
  case 5:
    this = (CachedUIResourcePtr *)&DAT_06aacf28;
    break;
  default:
    goto switchD_036b744c_caseD_8;
  }
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr(this);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)param_1,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
switchD_036b744c_caseD_8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* RiftUtils::ConvertZombossRewardSetToAwardSet(RiftZombossRewardDifficultyEntry const*) */

GeneralAwardSet *
RiftUtils::ConvertZombossRewardSetToAwardSet(RiftZombossRewardDifficultyEntry *param_1)

{
  GeneralAwardSet *in_x8;
  
  GeneralAwardSet::GeneralAwardSet(in_x8);
  return in_x8;
}


/* RiftUtils::CalcZombossBaseAwardSet(int, bool, int) */

void RiftUtils::CalcZombossBaseAwardSet(int param_1,bool param_2,int param_3)

{
  RiftZombossRewardDifficultyEntry *pRVar1;
  
  pRVar1 = (RiftZombossRewardDifficultyEntry *)GetZombossPrizeDefaultReward(param_1);
  ConvertZombossRewardSetToAwardSet(pRVar1);
  return;
}


/* RiftUtils::CalcZombossVictoryAwardSet(int, bool, int) */

void __thiscall
RiftUtils::CalcZombossVictoryAwardSet(RiftUtils *this,int param_1,bool param_2,int param_3)

{
  RiftZombossRewardDifficultyEntry *pRVar1;
  
  pRVar1 = (RiftZombossRewardDifficultyEntry *)GetZombossPrizeWinReward((int)this,(uint)param_2);
  ConvertZombossRewardSetToAwardSet(pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::IsZombossUnlocked() */

void RiftUtils::IsZombossUnlocked(void)

{
  char cVar1;
  int iVar2;
  wchar16 *pwVar3;
  long lVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pLVar5 = aLStack_18;
  local_8 = ___stack_chk_guard;
  pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"ToggleZombossUnlocked");
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (pwVar3,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
  std::string::~string(asStack_10);
  nop();
  if ((cVar1 == '\0') && (lVar4 = GetCurrentRiftConfig(), lVar4 != 0)) {
    iVar2 = GetCurrentZPS();
    lVar4 = GetCurrentRiftConfig();
    cVar1 = *(int *)(lVar4 + 0x10) <= iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* RiftUtils::TestWillUnlockZomboss(int) */

undefined8 RiftUtils::TestWillUnlockZomboss(int param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = GetCurrentRiftConfig();
  if (((lVar3 != 0) && (cVar1 = IsZombossUnlocked(), cVar1 == '\0')) &&
     (iVar2 = GetZombossUnlockingThreshold(), iVar2 <= param_1)) {
    return 1;
  }
  return 0;
}


/* RiftUtils::ShouldUseZPSBackupReward() */

bool RiftUtils::ShouldUseZPSBackupReward(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  cVar1 = EventHasZPSBackupReward();
  if (cVar1 != '\0') {
    cVar1 = IsZombossUnlocked();
    if (cVar1 != '\0') {
      return (bool)cVar1;
    }
    cVar1 = ZombossFightsPerCycleExceeded();
    if (cVar1 != '\0') {
      lVar2 = GetCurrentRiftEventTimeRemaining();
      lVar3 = GetTimeUntilZombossRefresh();
      return lVar2 <= lVar3;
    }
  }
  return false;
}


/* RiftUtils::GetTimeToNextZPSUpdate() */

long RiftUtils::GetTimeToNextZPSUpdate(void)

{
  char cVar1;
  int iVar2;
  PlayerInfo *this;
  long lVar3;
  long lVar4;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  lVar3 = GetCurrentRiftConfig();
  if ((((lVar3 != 0) && (cVar1 = IsZombossUnlocked(), cVar1 == '\0')) &&
      (iVar2 = PlayerInfo::GetCurrentZombossSignal(this), iVar2 != 0)) &&
     (lVar3 = GetCurrentRiftConfig(), *(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = LawnApp::GetRealServerTime(gLawnApp);
    lVar4 = GetCurrentRiftConfig();
    if (lVar4 != 0) {
      lVar4 = GetCurrentRiftConfig();
      return *(long *)(lVar4 + 0x20) - lVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetZombossUnlockedTimeRemaining() */

void RiftUtils::GetZombossUnlockedTimeRemaining(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Toggles *this;
  PlayerInfo *pPVar4;
  long lVar5;
  long *plVar6;
  long local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsZombossUnlocked();
  if (cVar2 != '\0') {
    this = (Toggles *)Toggles::GetInstance();
    std::string::string((string *)&local_10,"RiftZombossAvailabiltyTimer");
    cVar2 = Toggles::IsEnabled(this,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (cVar2 == '\0') {
      lVar3 = GetCurrentRiftEventTimeRemaining();
      goto LAB_036b7a00;
    }
    lVar3 = GetCurrentRiftConfig();
    if (lVar3 != 0) {
      pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
      lVar3 = LocalProfileSaveData::GetZombossUnlockedTime(pPVar4);
      lVar5 = GetCurrentRiftConfig();
      iVar1 = *(int *)(lVar5 + 0x28);
      lVar5 = LawnApp::GetRealServerTime(gLawnApp);
      local_18 = GetCurrentRiftEventTimeRemaining();
      local_10 = (long)((float)lVar3 + (float)iVar1 * 3600.0) - lVar5;
      plVar6 = std::min<long>(&local_10,&local_18);
      lVar3 = *plVar6;
      goto LAB_036b7a00;
    }
  }
  lVar3 = 0;
LAB_036b7a00:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::ShouldAutoPopZombossLevelSelect() */

void RiftUtils::ShouldAutoPopZombossLevelSelect(void)

{
  undefined1 uVar1;
  char cVar2;
  bool local_e;
  bool bStack_d;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsZombossUnlocked();
  uVar1 = 0;
  if (cVar2 != '\0') {
    GetZombossWinLossData(0,&local_e,&bStack_d,&iStack_c);
    uVar1 = local_e;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetRiftWorldIndexOfLevel(std::string const&) */

void RiftUtils::GetRiftWorldIndexOfLevel(string *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentEventProps();
  if (lVar2 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    cVar1 = WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar2 + 0x38),(vector *)&local_20);
    if (cVar1 == '\0') {
LAB_036b7ca0:
      std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
      uVar6 = 0xffffffff;
    }
    else {
      uVar3 = FUN_036b345c(local_20,local_18);
      uVar5 = 0;
      do {
        uVar6 = uVar5 & 0xffffffff;
        if (uVar5 == uVar3) goto LAB_036b7ca0;
        plVar4 = (long *)FUN_036b3468(local_20,uVar5);
        cVar1 = std::operator==((string *)(*plVar4 + 0x20),param_1);
        uVar5 = uVar5 + 1;
      } while (cVar1 == '\0');
      std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetRiftWorldNameOfLevel(int) */

void __thiscall RiftUtils::GetRiftWorldNameOfLevel(RiftUtils *this,int param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  string *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentEventProps();
  if (lVar2 != 0) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    cVar1 = WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar2 + 0x38),(vector *)&local_20);
    if ((cVar1 != '\0') && (-1 < (int)this)) {
      uVar3 = FUN_036b345c(local_20,local_18);
      if ((ulong)(long)(int)this < uVar3) {
        puVar4 = (undefined8 *)FUN_036b3468(local_20);
        std::
        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)*puVar4);
        FUN_05475d88();
        std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
                  ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
        goto LAB_036b7d90;
      }
    }
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  }
  std::string::string(in_x8,"");
  nop();
LAB_036b7d90:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetMostRecentRiftLevel() */

void __thiscall RiftUtils::GetMostRecentRiftLevel(RiftUtils *this)

{
  int iVar1;
  long lVar2;
  string *in_x8;
  undefined1 auVar3 [12];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetCurrentEventProps();
  if (lVar2 != 0) {
    lVar2 = LawnApp::GetRealServerTime(gLawnApp);
    RiftEventDefinition::GetMostRecentNodeUnlockedList((float)lVar2);
    lVar2 = FUN_036b3380(local_20,local_18);
    if (lVar2 != 0) {
      iVar1 = RandRangeInt(0,(int)lVar2 + -1);
      auVar3 = FUN_036b33a8(local_20,(long)iVar1);
      GetRiftWorldNameOfLevel((RiftUtils *)(ulong)*auVar3._0_8_,auVar3._8_4_);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
      goto LAB_036b7e70;
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  }
  std::string::string(in_x8,"");
  nop();
LAB_036b7e70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::IsPlayingMostRecentRiftLevel() */

void RiftUtils::IsPlayingMostRecentRiftLevel(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_3c;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentEventProps();
  lVar2 = LawnApp::GetRealServerTime(gLawnApp);
  RiftEventDefinition::GetMostRecentNodeUnlockedList((float)lVar2);
  uVar3 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_38,uVar3);
  local_3c = GetRiftWorldIndexOfLevel(asStack_38);
  if (local_3c < 0) {
    bVar1 = false;
  }
  else {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(avStack_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(avStack_20);
    local_30 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar3,uVar4,&local_3c);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  }
  std::string::~string(asStack_38);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetRiftTimedThemeName(int) */

void __thiscall RiftUtils::GetRiftTimedThemeName(RiftUtils *this,int param_1)

{
  int iVar1;
  vector *pvVar2;
  string *extraout_x1;
  Sexy aSStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)GetRiftTimedEventThemes();
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_20,pvVar2);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  FUN_036b33a8(local_20[0],(long)(int)this);
  RiftThemeMgr::GetThemeName(iVar1);
  Sexy::UTF8StringToWString(aSStack_30,extraout_x1);
  TodStringTranslate(awStack_28);
  FUN_05476c50(awStack_28);
  std::string::~string((string *)aSStack_30);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetRiftTimedThemeDescription(int) */

void __thiscall RiftUtils::GetRiftTimedThemeDescription(RiftUtils *this,int param_1)

{
  int iVar1;
  vector *pvVar2;
  string *extraout_x1;
  Sexy aSStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)GetRiftTimedEventThemes();
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_20,pvVar2);
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  FUN_036b33a8(local_20[0],(long)(int)this);
  RiftThemeMgr::GetThemeDescription(iVar1);
  Sexy::UTF8StringToWString(aSStack_30,extraout_x1);
  TodStringTranslate(awStack_28);
  FUN_05476c50(awStack_28);
  std::string::~string((string *)aSStack_30);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentMode() */

void RiftUtils::GetCurrentMode(void)

{
  int iVar1;
  vector *pvVar2;
  RiftUtils *this;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)GetRiftTimedEventThemes();
  this = (RiftUtils *)
         std::vector<int,std::allocator<int>>::vector
                   ((vector<int,std::allocator<int>> *)&local_20,pvVar2);
  GetLevelOverride(this);
  iVar1 = GetRiftWorldIndexOfLevel(asStack_28);
  if (-1 < iVar1) {
    uVar3 = FUN_036b3380(local_20,local_18);
    if ((ulong)(long)iVar1 < uVar3) {
      puVar4 = (undefined4 *)FUN_036b33a8(local_20,(long)iVar1);
      uVar5 = *puVar4;
      goto LAB_036b82cc;
    }
  }
  uVar5 = 0;
LAB_036b82cc:
  std::string::~string(asStack_28);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentModeName() */

void __thiscall RiftUtils::GetCurrentModeName(RiftUtils *this)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentMode();
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetModeName(iVar1);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentModeDescription() */

void __thiscall RiftUtils::GetCurrentModeDescription(RiftUtils *this)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentMode();
  iVar1 = Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::GetModeDescription(iVar1);
  Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
  TodStringTranslate(awStack_10);
  FUN_05476c50(awStack_10);
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetPlantCountNeededToPlay() */

void RiftUtils::GetPlantCountNeededToPlay(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = RiftPropertySheet::GetProperties();
  ProfileUtils::Profile();
  PlayerInfo::GetUnlockedPlantList();
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  iVar2 = thunk_FUN_036b84e8(uVar4,uVar5);
  iVar1 = *(int *)(lVar3 + 0x40);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 - iVar2);
}


/* RiftUtils::IsPlayerReadyForRift() */

bool RiftUtils::IsPlayerReadyForRift(void)

{
  int iVar1;
  
  iVar1 = GetPlantCountNeededToPlay();
  return iVar1 < 1;
}


/* RiftUtils::IsRiftCurrentlyAvailable() */

byte RiftUtils::IsRiftCurrentlyAvailable(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = IsPlayerReadyForRift();
  if ((cVar1 != '\0') && (cVar1 = IsRiftHidden(), cVar1 == '\0')) {
    bVar2 = IsRiftDownForMaintenance();
    return bVar2 ^ 1;
  }
  return 0;
}


/* RiftUtils::IsFUENeeded() */

byte RiftUtils::IsFUENeeded(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = IsPlayerReadyForRift();
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = IsFUENarrativeSeen();
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::TryShowFUE() */

void RiftUtils::TryShowFUE(void)

{
  char cVar1;
  CrazyNPCManager *pCVar2;
  undefined8 local_50;
  string asStack_48 [8];
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsFUENeeded();
  if (cVar1 != '\0') {
    pCVar2 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_48,"RIFT_UNLOCK");
    local_50 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)FUN_036b4294);
    Sexy::Delegate0::Delegate0<void(*)()>(aDStack_38,(CBFunctionTranslatorX *)&local_50);
    std::string::string(asStack_40,"");
    CrazyNPCManager::StartNarrativeID(pCVar2,asStack_48,aDStack_38,asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::~string(asStack_48);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::DoesUnlockAnimNeedToPlay() */

void RiftUtils::DoesUnlockAnimNeedToPlay(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  PlayerInfo *pPVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = IsPlayerReadyForRift();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_rift_unlock");
  bVar2 = PlayerInfo::GetNarrationEventCompleted(pPVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
  std::string::string(asStack_10,"nar_rift_unlock_anim");
  bVar3 = PlayerInfo::GetNarrationEventCompleted(pPVar4,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((bVar3 | bVar2 & bVar1 ^ 1) ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetCurrentRiftDescription() */

void __thiscall RiftUtils::GetCurrentRiftDescription(RiftUtils *this)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  string asStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  wstring awStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  Plant aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = GetCurrentSubEventProps();
  if ((lVar3 == 0) || (iVar2 = GetLimitedPlantId(), iVar2 < 1)) {
    FUN_05478178();
    nop();
  }
  else {
    iVar2 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    FUN_05476574(awStack_20);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_28);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_28);
      Plant::GetFormattedNameString(aPStack_10,aRStack_18);
      FUN_054766c8(awStack_20,aPStack_10);
      FUN_05476c50(aPStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    }
    else {
      FUN_054772c4(awStack_20,L"[PACKET_TYPE_MYSTERY]");
    }
    Sexy::ToWString((string *)(lVar3 + 0x10));
    TodReplaceString((wstring *)aPStack_10,L"{PLANTNAME}",awStack_20);
    FUN_05476c50((wstring *)aPStack_10);
    FUN_05476c50(awStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftUtils::GetCurrentEventPerkProgression() */

void __thiscall RiftUtils::GetCurrentEventPerkProgression(RiftUtils *this)

{
  long lVar1;
  vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *in_x8;
  
  lVar1 = GetCurrentEventProps();
  if ((lVar1 != 0) &&
     (lVar1 = PerkProgressionProperties::GetProperties((string *)(lVar1 + 0x10)), lVar1 != 0)) {
    std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::vector
              (in_x8,(vector *)(lVar1 + 0x10));
    return;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetPennyTechRewardForCurrentLevel() */

void RiftUtils::GetPennyTechRewardForCurrentLevel(void)

{
  int iVar1;
  long lVar2;
  BonusChallengeModule *this;
  vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> avStack_20 [24];
  RiftUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentEventPerkProgression(___stack_chk_guard);
  lVar2 = GetCurrentSubEventProps();
  this = BoardHelpers::GetLevelModuleByClass<BonusChallengeModule>();
  if (this == (BonusChallengeModule *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = BonusChallengeModule::CalcCompletedActiveChallenges(this);
    iVar1 = iVar1 * *(int *)(lVar2 + 0x20);
  }
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::ShouldShowPerkOutroScreen() */

void RiftUtils::ShouldShowPerkOutroScreen(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GroupInfo *pGVar6;
  undefined8 local_40;
  undefined8 local_38;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_30 [12];
  int local_24;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  RiftUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentEventPerkProgression(___stack_chk_guard);
  ProfileUtils::Profile();
  iVar3 = GridItemRenaiStatue::GetCantPlantReason();
  iVar4 = GetPennyTechRewardForCurrentLevel();
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar2) {
LAB_036b8db0:
      std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
                ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(bVar2);
    }
    pGVar6 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo((GroupInfo *)apStack_30,pGVar6);
    iVar1 = local_24;
    if ((iVar3 - iVar4 < local_24) &&
       (iVar5 = GridItemRenaiStatue::GetCantPlantReason(), iVar1 <= iVar5)) {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_30);
      goto LAB_036b8db0;
    }
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_30);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetMaxPennyTech() */

void RiftUtils::GetMaxPennyTech(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18;
  RiftUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentEventPerkProgression(___stack_chk_guard);
  lVar2 = FUN_036b33c4(local_20,local_18);
  lVar2 = FUN_036b33d0(local_20,lVar2 + -1);
  uVar1 = *(undefined4 *)(lVar2 + 0xc);
  std::vector<PerkProgressionReward,std::allocator<PerkProgressionReward>>::~vector
            ((vector<PerkProgressionReward,std::allocator<PerkProgressionReward>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* RiftUtils::PlayerHasCompletedPerkProgression() */

bool RiftUtils::PlayerHasCompletedPerkProgression(void)

{
  int iVar1;
  int iVar2;
  
  ProfileUtils::Profile();
  iVar1 = GridItemRenaiStatue::GetCantPlantReason();
  iVar2 = GetMaxPennyTech();
  return iVar2 <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetLeagueFrameType(int, int) */

void RiftUtils::GetLeagueFrameType(int param_1,int param_2)

{
  bool bVar1;
  vector *pvVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<LeagueFrameRange,std::allocator<LeagueFrameRange>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentRiftConfig();
  pvVar2 = (vector *)GetLeagueFrameRangeByLeague(param_1);
  std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>::vector(avStack_20,pvVar2);
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
      iVar4 = -1;
LAB_036b9074:
      std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar4);
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((*piVar3 <= param_2) && (param_2 <= piVar3[1])) {
      iVar4 = piVar3[2];
      goto LAB_036b9074;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetNextLeague(int, int) */

void RiftUtils::GetNextLeague(int param_1,int param_2)

{
  bool bVar1;
  vector *pvVar2;
  int *piVar3;
  int iVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<LeagueFrameRange,std::allocator<LeagueFrameRange>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentRiftConfig();
  pvVar2 = (vector *)GetLeagueFrameRangeByLeague(param_1);
  std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>::vector(avStack_20,pvVar2);
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
      iVar4 = 0;
LAB_036b9160:
      std::vector<LeagueFrameRange,std::allocator<LeagueFrameRange>>::~vector(avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar4);
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((*piVar3 <= param_2) && (param_2 <= piVar3[1])) {
      iVar4 = piVar3[3];
      goto LAB_036b9160;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetLevelDifficultyDataForLevelNode(std::string) */

void __thiscall
RiftUtils::GetLevelDifficultyDataForLevelNode(PIInterpolator *param_1,RiftUtils *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string *psVar4;
  long lVar5;
  long *plVar6;
  RtWeakPtr *pRVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  SunOwnerLink aSStack_48 [8];
  RtWeakPtr<PowerPropertySheet> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  iVar2 = GameStateMgr::GetState(gGameStateMgr);
  if (iVar2 == 5) {
    Board::GetLevelDefinitionPtr();
  }
  else {
    psVar4 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    LevelUtils::LoadLevelDefinition(psVar4,SUB81(this,0));
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  Sexy::PIInterpolator::PIInterpolator(param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar5 + 0x80));
  if (cVar1 != '\0') {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)(lVar5 + 0x80));
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    pcVar9 = *(code **)(*plVar6 + 0x98);
    uVar3 = IsRiftTimedLevel((string *)this);
    (*pcVar9)(plVar6,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,
              (RtWeakPtr<Sexy::ResourceInfo> *)local_20,uVar3);
    uVar10 = 0;
    while( true ) {
      uVar8 = FUN_036b33ec(local_38,local_30);
      if (uVar8 <= uVar10) break;
      SunOwnerLink::SunOwnerLink(aSStack_48);
      pRVar7 = (RtWeakPtr *)FUN_036b33f8(local_38,uVar10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)aSStack_48,pRVar7);
      pRVar7 = (RtWeakPtr *)FUN_036b3400(local_20[0],uVar10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_40,pRVar7);
      std::vector<LevelModuleDifficultyEntry,std::allocator<LevelModuleDifficultyEntry>>::push_back
                ((vector<LevelModuleDifficultyEntry,std::allocator<LevelModuleDifficultyEntry>> *)
                 param_1,(LevelModuleDifficultyEntry *)aSStack_48);
      DragonBruitLauncherSubSystem::DragonBruitLauncherEntry::~DragonBruitLauncherEntry
                ((DragonBruitLauncherEntry *)aSStack_48);
      uVar10 = uVar10 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  }
  std::
  vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyUIProps>>>
             *)local_20);
  std::
  vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<LevelModuleDifficultyProps>,std::allocator<Sexy::RtWeakPtr<LevelModuleDifficultyProps>>>
             *)&local_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetAllCurrentPerkData() */

void __thiscall RiftUtils::GetAllCurrentPerkData(RiftUtils *this)

{
  bool bVar1;
  undefined4 uVar2;
  GridItemPoolEntry *pGVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  MiniGamePerkMgr *pMVar7;
  ulong uVar8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr aRStack_48 [16];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
  PennyPerkMgr::GetUnlockedPerkList();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_38);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar1) {
    pGVar3 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_48,pGVar3);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    local_58 = std::
               find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 0x10);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (bVar1) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)&local_20,
                 (string *)(lVar6 + 0x10));
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_68);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar9 = 0;
  while( true ) {
    uVar8 = FUN_036b33d8(local_20,local_18);
    if (uVar8 <= uVar9) break;
    uVar4 = Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_036b33e4(local_20,uVar9);
    FUN_05475d88((string *)&local_50,uVar5);
    pMVar7 = (MiniGamePerkMgr *)Sexy::LazySingleton<PennyPerkMgr>::GetInstance();
    uVar5 = FUN_036b33e4(local_20,uVar9);
    FUN_05475d88((string *)&local_58,uVar5);
    uVar2 = MiniGamePerkMgr::GetCurrentPerkLevel(pMVar7,(string *)&local_58);
    PennyPerkMgr::CreatePerkData(aRStack_48,uVar4,(string *)&local_50,uVar2);
    std::string::~string((string *)&local_58);
    std::string::~string((string *)&local_50);
    std::vector<PerkData,std::allocator<PerkData>>::push_back
              ((vector<PerkData,std::allocator<PerkData>> *)in_x8,(PerkData *)aRStack_48);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_48);
    uVar9 = uVar9 + 1;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::vector<PerkData,std::allocator<PerkData>>::~vector
            ((vector<PerkData,std::allocator<PerkData>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::GetLeaderboardPlayerPlacementReward(int, int) */

void __thiscall
RiftUtils::GetLeaderboardPlayerPlacementReward(RiftUtils *this,int param_1,int param_2)

{
  RiftNetworkMgr *this_00;
  long lVar1;
  vector *pvVar2;
  ulong uVar3;
  RiftLeaderboardRewardInfo *pRVar4;
  int *piVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar7;
  undefined8 local_80;
  undefined8 local_78;
  RiftLeaderboardRewardInfo aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_20;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  this_00 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  lVar1 = RiftNetworkMgr::GetLeaderboardInfo(this_00);
  pvVar2 = (vector *)FUN_036b34bc(*(undefined8 *)(lVar1 + 0x38),(long)(int)this);
  std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>::vector
            ((vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>> *)
             &local_80,pvVar2);
  do {
    uVar6 = local_80;
    uVar3 = FUN_036b34c8(local_80,local_78);
    if (uVar3 <= uVar7) {
      uVar7 = 0;
      local_80 = uVar6;
LAB_036b9e68:
      pRVar4 = (RiftLeaderboardRewardInfo *)FUN_036b34d4(local_80,uVar7);
      RiftLeaderboardRewardInfo::RiftLeaderboardRewardInfo(aRStack_68,pRVar4);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
      uVar7 = 0;
      while( true ) {
        uVar3 = FUN_036b34dc(local_60,local_58);
        if (uVar3 <= uVar7) break;
        LevelOfTheDay_RewardItemType::LevelOfTheDay_RewardItemType
                  ((LevelOfTheDay_RewardItemType *)&local_48);
        piVar5 = (int *)FUN_036b34e8(local_60,uVar7);
        uVar6 = GetAwardInfoByActId(*piVar5);
        local_38 = (undefined4)uVar6;
        lVar1 = FUN_036b34e8(local_60,uVar7);
        local_20 = *(undefined4 *)(lVar1 + 4);
        local_10 = (undefined4)((ulong)uVar6 >> 0x20);
        std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
        push_back((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>
                   *)in_x8,(LevelOfTheDay_RewardItemType *)&local_48);
        LevelOfTheDay_RewardItemType::~LevelOfTheDay_RewardItemType
                  ((LevelOfTheDay_RewardItemType *)&local_48);
        uVar7 = uVar7 + 1;
      }
      RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)aRStack_68);
      std::vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>>::~vector
                ((vector<RiftLeaderboardRewardInfo,std::allocator<RiftLeaderboardRewardInfo>> *)
                 &local_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RiftLeaderboardRewardInfo *)FUN_036b34d4(uVar6,uVar7);
    RiftLeaderboardRewardInfo::RiftLeaderboardRewardInfo
              ((RiftLeaderboardRewardInfo *)&local_48,pRVar4);
    if ((local_48 <= param_1) && (param_1 <= local_44)) {
      RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)&local_48);
      goto LAB_036b9e68;
    }
    uVar7 = uVar7 + 1;
    RiftDifficultyInfo::~RiftDifficultyInfo((RiftDifficultyInfo *)&local_48);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::ShowHowToPlayScreen() */

void RiftUtils::ShowHowToPlayScreen(void)

{
  long lVar1;
  AdaptorRiftHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = RiftPropertySheet::GetProperties();
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x10));
  this = ::operator_new(0x1a8);
  memset(this,0,0x1a8);
  AdaptorRiftHowToPlayScreen::AdaptorRiftHowToPlayScreen(this);
  HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  SetHasSeenHowToPlay();
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::CalcZombossFlattenedBaseAwardSet(int, bool, int) */

void __thiscall
RiftUtils::CalcZombossFlattenedBaseAwardSet(RiftUtils *this,int param_1,bool param_2,int param_3)

{
  AwardSet *extraout_x1;
  GeneralAwardSet aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcZombossBaseAwardSet((int)this,SUB41(param_1,0),(uint)param_2);
  GeneralAwardSet::GenerateFlattenedAwardSet(aGStack_28,extraout_x1);
  GeneralAwardSet::~GeneralAwardSet(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::CalcZombossTotalAwardSet(int, bool, int) */

void __thiscall
RiftUtils::CalcZombossTotalAwardSet(RiftUtils *this,int param_1,bool param_2,int param_3)

{
  long lVar1;
  GeneralAwardSet *in_x8;
  GeneralAwardSet aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = ___stack_chk_guard;
  CalcZombossBaseAwardSet((int)this,SUB41(param_1,0),(uint)param_2);
  if ((param_1 & 0xffU) != 0) {
    CalcZombossVictoryAwardSet((RiftUtils *)((ulong)this & 0xffffffff),1,param_2,(int)lVar1);
    GeneralAwardSet::Add(in_x8,(AwardSet *)aGStack_28);
    GeneralAwardSet::~GeneralAwardSet(aGStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftUtils::CalcZombossFlattenedVictoryAwardSet(int, bool, int) */

void __thiscall
RiftUtils::CalcZombossFlattenedVictoryAwardSet(RiftUtils *this,int param_1,bool param_2,int param_3)

{
  AwardSet *extraout_x1;
  GeneralAwardSet aGStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcZombossVictoryAwardSet(this,param_1,param_2,(int)___stack_chk_guard);
  GeneralAwardSet::GenerateFlattenedAwardSet(aGStack_28,extraout_x1);
  GeneralAwardSet::~GeneralAwardSet(aGStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWatering* RiftUtils::GetThemeByClass<RiftThemeWatering>() */

RiftThemeWatering * RiftUtils::GetThemeByClass<RiftThemeWatering>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeWatering *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeWatering *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_038d3c40:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeWatering::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeWatering>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_038d3c40;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBlizzard* RiftUtils::GetThemeByClass<RiftThemeBlizzard>() */

RiftThemeBlizzard * RiftUtils::GetThemeByClass<RiftThemeBlizzard>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeBlizzard *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeBlizzard *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03b8a2bc:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeBlizzard::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeBlizzard>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03b8a2bc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeCharging* RiftUtils::GetThemeByClass<RiftThemeCharging>() */

RiftThemeCharging * RiftUtils::GetThemeByClass<RiftThemeCharging>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeCharging *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeCharging *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03c32c5c:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeCharging::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeCharging>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03c32c5c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeNoPlantfood* RiftUtils::GetThemeByClass<RiftThemeNoPlantfood>() */

RiftThemeNoPlantfood * RiftUtils::GetThemeByClass<RiftThemeNoPlantfood>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeNoPlantfood *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeNoPlantfood *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03f422cc:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeNoPlantfood::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeNoPlantfood>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03f422cc;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantAOE* RiftUtils::GetThemeByClass<RiftThemeBuffPlantAOE>() */

RiftThemeBuffPlantAOE * RiftUtils::GetThemeByClass<RiftThemeBuffPlantAOE>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeBuffPlantAOE *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeBuffPlantAOE *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_03fa5030:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeBuffPlantAOE::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeBuffPlantAOE>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_03fa5030;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeLimitedSeedPacket* RiftUtils::GetThemeByClass<RiftThemeLimitedSeedPacket>() */

RiftThemeLimitedSeedPacket * RiftUtils::GetThemeByClass<RiftThemeLimitedSeedPacket>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeLimitedSeedPacket *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeLimitedSeedPacket *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04421c4c:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeLimitedSeedPacket::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeLimitedSeedPacket>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04421c4c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeBuffPlantFastCD* RiftUtils::GetThemeByClass<RiftThemeBuffPlantFastCD>() */

RiftThemeBuffPlantFastCD * RiftUtils::GetThemeByClass<RiftThemeBuffPlantFastCD>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeBuffPlantFastCD *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeBuffPlantFastCD *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04432fb0:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeBuffPlantFastCD::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeBuffPlantFastCD>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04432fb0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeFastSpell* RiftUtils::GetThemeByClass<RiftThemeFastSpell>() */

RiftThemeFastSpell * RiftUtils::GetThemeByClass<RiftThemeFastSpell>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeFastSpell *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeFastSpell *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04643b4c:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeFastSpell::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeFastSpell>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04643b4c;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeHeavyBallon* RiftUtils::GetThemeByClass<RiftThemeHeavyBallon>() */

RiftThemeHeavyBallon * RiftUtils::GetThemeByClass<RiftThemeHeavyBallon>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeHeavyBallon *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeHeavyBallon *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_0467fc58:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeHeavyBallon::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeHeavyBallon>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_0467fc58;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeCrossFire* RiftUtils::GetThemeByClass<RiftThemeCrossFire>() */

RiftThemeCrossFire * RiftUtils::GetThemeByClass<RiftThemeCrossFire>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeCrossFire *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeCrossFire *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_046c7738:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeCrossFire::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeCrossFire>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_046c7738;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeZombossRevive* RiftUtils::GetThemeByClass<RiftThemeZombossRevive>() */

RiftThemeZombossRevive * RiftUtils::GetThemeByClass<RiftThemeZombossRevive>(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  RtObject *this;
  int extraout_w1;
  RiftThemeZombossRevive *pRVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar3,0x82);
  do {
    bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar2) {
      pRVar5 = (RiftThemeZombossRevive *)0x0;
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_04710fe0:
      if (local_8 == ___stack_chk_guard) {
        return pRVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar6 = *(code **)(*plVar4 + 0x20);
    uVar3 = RiftThemeZombossRevive::StaticGetClass();
    cVar1 = (*pcVar6)(plVar4,uVar3);
    if (cVar1 != '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pRVar5 = Sexy::RtObject::Cast<RiftThemeZombossRevive>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_04710fe0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}

