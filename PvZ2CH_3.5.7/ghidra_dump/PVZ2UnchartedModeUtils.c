// Class: PVZ2UnchartedModeUtils


/* PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap() */

undefined8 PVZ2UnchartedModeUtils::IsInPVZ2UnchartedModeWorldMap(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar1 != 0) && (lVar1 = FUN_038284a8(*(undefined8 *)(lVar1 + 0x2f0)), lVar1 != 0)) {
    uVar2 = WorldMapUtils::IsUnchartedWorld((string *)(lVar1 + 0x38));
    return uVar2;
  }
  return 0;
}


/* PVZ2UnchartedModeUtils::IsInQueuedPVZ2UnchartedModeWorldMap() */

void PVZ2UnchartedModeUtils::IsInQueuedPVZ2UnchartedModeWorldMap(void)

{
  long lVar1;
  
  lVar1 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar1 != 0) {
    lVar1 = FUN_038284a4(*(undefined8 *)(lVar1 + 0xe8));
    WorldMapUtils::IsUnchartedWorld((string *)(lVar1 + 0x38));
    return;
  }
  return;
}


/* PVZ2UnchartedModeUtils::IsHardMode() */

void PVZ2UnchartedModeUtils::IsHardMode(void)

{
  FilesystemSaveGameContext *this;
  
  this = (FilesystemSaveGameContext *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  Sexy::FilesystemSaveGameContext::HasError(this);
  return;
}


/* PVZ2UnchartedModeUtils::IsNodeUnlocked(int) */

undefined8 PVZ2UnchartedModeUtils::IsNodeUnlocked(int param_1)

{
  bool bVar1;
  PlayerInfo *this;
  undefined8 uVar2;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  if (0 < param_1) {
    bVar1 = (bool)IsHardMode();
    uVar2 = PlayerInfo::HasCompletedPVZ1Level(this,param_1 + -1,bVar1);
    return uVar2;
  }
  return 1;
}


/* PVZ2UnchartedModeUtils::SetIsHardMode(bool) */

void PVZ2UnchartedModeUtils::SetIsHardMode(bool param_1)

{
  RichmanTileEventManager *this;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  RichmanTileEventManager::SetEventNeedChecked(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::IsUnchartedBirthday() */

void PVZ2UnchartedModeUtils::IsUnchartedBirthday(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsUnchartedBirthday(this);
  return;
}


/* PVZ2UnchartedModeUtils::IsUnchartedBirthday(std::string const&) */

void PVZ2UnchartedModeUtils::IsUnchartedBirthday(string *param_1)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsUnchartedBirthday(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::IsAnniversarySelectLevel() */

void PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsAnniversarySelectLevel(this);
  return;
}


/* PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(std::string const&) */

void PVZ2UnchartedModeUtils::IsAnniversarySelectLevel(string *param_1)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsAnniversarySelectLevel(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode() */

void PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetUnchartedWorldType() */

void PVZ2UnchartedModeUtils::GetUnchartedWorldType(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetUnchartedWorldType(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetUnchartedWorldType(std::string const&) */

void PVZ2UnchartedModeUtils::GetUnchartedWorldType(string *param_1)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetUnchartedWorldType(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::GetScrollBannerWorldName() */

void __thiscall PVZ2UnchartedModeUtils::GetScrollBannerWorldName(PVZ2UnchartedModeUtils *this)

{
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetScrollBannerWorldName();
  return;
}


/* PVZ2UnchartedModeUtils::IsTutorialWorld() */

void PVZ2UnchartedModeUtils::IsTutorialWorld(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsTutorialWorld(this);
  return;
}


/* PVZ2UnchartedModeUtils::IsTutorialWorld(std::string) */

void PVZ2UnchartedModeUtils::IsTutorialWorld(string *param_1)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsTutorialWorld(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(std::string const&) */

void PVZ2UnchartedModeUtils::IsNormalSelectLevelWithHardmode(string *param_1)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::IsNormalSelectLevelWithHardmode(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::GetChallengeStatus(int) */

void PVZ2UnchartedModeUtils::GetChallengeStatus(int param_1)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetChallengeStatus(iVar1);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentKeyCount() */

void PVZ2UnchartedModeUtils::GetCurrentKeyCount(void)

{
  RiverCrossingProperties *this;
  
  this = (RiverCrossingProperties *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  RiverCrossingProperties::GetRetryTimes(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentWorldPrefix(bool) */

void PVZ2UnchartedModeUtils::GetCurrentWorldPrefix(bool param_1)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentPVZ2UnchartedModeWorld(bool) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentPVZ2UnchartedModeWorld(PVZ2UnchartedModeUtils *this,bool param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  string *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"");
  nop();
  uVar2 = GetCurrentWorldPrefix(SUB81(this,0));
  FUN_05475d88(asStack_18,uVar2);
  cVar1 = FUN_0547419c(asStack_18);
  if (cVar1 == '\0') {
    uVar2 = FUN_0547429c(asStack_18);
    if (((ulong)this & 0xff) == 0) {
      puVar3 = &DAT_05593fa8;
    }
    else {
      puVar3 = &DAT_05597cd8;
    }
    Sexy::StrFormat("%s_%s",asStack_10,uVar2,puVar3);
    FUN_05474278();
    std::string::~string(asStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLandingLevel(bool) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentLandingLevel(PVZ2UnchartedModeUtils *this,bool param_1)

{
  char cVar1;
  WorldDataManager *this_00;
  FilesystemSaveGameContext *this_01;
  string *extraout_x1;
  string *in_x8;
  WorldMapUtils aWStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentPVZ2UnchartedModeWorld(this,SUB81(___stack_chk_guard,0));
  WorldMapUtils::GetFirstLevelInWorld(aWStack_18,extraout_x1);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    this_01 = (FilesystemSaveGameContext *)WorldDataManager::FindEventByName(this_00,asStack_10);
    if (this_01 != (FilesystemSaveGameContext *)0x0) {
      Sexy::FilesystemSaveGameContext::GetBuffer(this_01);
      FUN_05475d88();
      goto LAB_03829090;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_03829090:
  std::string::~string(asStack_10);
  std::string::~string((string *)aWStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GoToPVZ2UnchartedModeWorldMap(bool) */

void PVZ2UnchartedModeUtils::GoToPVZ2UnchartedModeWorldMap(bool param_1)

{
  char cVar1;
  WorldDataManager *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLandingLevel((PVZ2UnchartedModeUtils *)(ulong)param_1,SUB81(___stack_chk_guard,0));
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


/* PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix() */

void __thiscall PVZ2UnchartedModeUtils::GetCurrentWorldResourcePrefix(PVZ2UnchartedModeUtils *this)

{
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetWorldResourcePrefix();
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentLevel() */

void __thiscall PVZ2UnchartedModeUtils::GetCurrentLevel(PVZ2UnchartedModeUtils *this)

{
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetCurrentLevel();
  return;
}


/* PVZ2UnchartedModeUtils::GetPrefixWorld() */

void __thiscall PVZ2UnchartedModeUtils::GetPrefixWorld(PVZ2UnchartedModeUtils *this)

{
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  std::
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::_M_root(this_00);
  FUN_05475d88();
  return;
}


/* PVZ2UnchartedModeUtils::GetBirthdayCurrentEarnedStars() */

void PVZ2UnchartedModeUtils::GetBirthdayCurrentEarnedStars(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetBirthdayCurrentEarnedStars(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetBirthdayMaxEarnedStars() */

void PVZ2UnchartedModeUtils::GetBirthdayMaxEarnedStars(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetBirthdayMaxEarnedStars(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndexByNetworkMgr() */

void PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndexByNetworkMgr(void)

{
  OakArrowUI *this;
  
  this = (OakArrowUI *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  OakArrowUI::GetArrowCount(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentThemeList() */

void __thiscall PVZ2UnchartedModeUtils::GetCurrentThemeList(PVZ2UnchartedModeUtils *this)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = (bool)GetCurrentWorldLevelIndexByNetworkMgr();
  IsHardMode();
  iVar2 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetLevelThemes(iVar2,bVar1);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentPrefixWorldIndex() */

void PVZ2UnchartedModeUtils::GetCurrentPrefixWorldIndex(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetCurrentPrefixWorldIndex(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetWorldCount() */

void PVZ2UnchartedModeUtils::GetWorldCount(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetWorldCount(this);
  return;
}


/* PVZ2UnchartedModeUtils::HasLockedHardLevel() */

void PVZ2UnchartedModeUtils::HasLockedHardLevel(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::HasLockedHardLevel(this);
  return;
}


/* PVZ2UnchartedModeUtils::CheckShowTips() */

void PVZ2UnchartedModeUtils::CheckShowTips(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::CheckShowTips(this);
  return;
}


/* PVZ2UnchartedModeUtils::CheckShowNotice() */

void PVZ2UnchartedModeUtils::CheckShowNotice(void)

{
  UnchartedModeNetworkMgr *this;
  
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::CheckShowNotice(this);
  return;
}


/* PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayHeadshotPrizeId() */

undefined8 PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayHeadshotPrizeId(void)

{
  char cVar1;
  UnchartedModeNetworkMgr *this;
  undefined8 uVar2;
  
  cVar1 = IsUnchartedBirthday();
  if (cVar1 != '\0') {
    return 0x6383;
  }
  cVar1 = IsAnniversarySelectLevel();
  if (cVar1 == '\0') {
    cVar1 = IsNormalSelectLevelWithHardmode();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = UnchartedModeNetworkMgr::GetAnniversaryHeadshotBonusId(this);
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GoToUnchartedModeWorldMap(std::string const&, bool) */

void PVZ2UnchartedModeUtils::GoToUnchartedModeWorldMap(string *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  RichmanTileEventManager *this;
  UnchartedModeNetworkMgr *pUVar4;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_38 [8];
  undefined1 local_30;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  Sexy::IPurchaseAdapter::RequestPay(psVar3,param_1);
  this = (RichmanTileEventManager *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  cVar2 = IsUnchartedBirthday(param_1);
  bVar1 = param_2;
  if (cVar2 != '\0') {
    bVar1 = false;
  }
  RichmanTileEventManager::SetEventNeedChecked(this,bVar1);
  pUVar4 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  FUN_05475d88(apStack_38,param_1);
  local_30 = param_2;
  FUN_03828b68(afStack_28,apStack_38);
  UnchartedModeNetworkMgr::RequestMainEntryData(pUVar4,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::SendGet_MainEntry(bool) */

void PVZ2UnchartedModeUtils::SendGet_MainEntry(bool param_1)

{
  bool bVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = (bool)IsHardMode();
  uVar2 = GetCurrentWorldPrefix(bVar1);
  FUN_05475d88(asStack_10,uVar2);
  GoToUnchartedModeWorldMap(asStack_10,bVar1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::IsTimeLimitWorld() */

void PVZ2UnchartedModeUtils::IsTimeLimitWorld(void)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  FUN_05475d88(asStack_18,uVar2);
  Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetTimeLimitWorld();
  uVar1 = std::operator==(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentBoost() */

void __thiscall PVZ2UnchartedModeUtils::GetCurrentBoost(PVZ2UnchartedModeUtils *this)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this_00);
  FUN_05475d88(asStack_18,uVar2);
  uVar1 = IsHardMode();
  uVar2 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_10,asStack_18);
  UnchartedModeNetworkMgr::GetBoostData(uVar2,asStack_10,uVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentBoardRecord() */

void PVZ2UnchartedModeUtils::GetCurrentBoardRecord(void)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  undefined8 uVar2;
  UnchartedModeNetworkMgr *pUVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  FUN_05475d88(asStack_18,uVar2);
  uVar1 = IsHardMode();
  pUVar3 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  FUN_05475d88(asStack_10,asStack_18);
  uVar2 = UnchartedModeNetworkMgr::GetBoardRecord(pUVar3,asStack_10,uVar1);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVZ2UnchartedModeUtils::GetPlantNum(std::string const&) */

void PVZ2UnchartedModeUtils::GetPlantNum(string *param_1)

{
  UnchartedModeBoardRecord *this;
  
  this = (UnchartedModeBoardRecord *)GetCurrentBoardRecord();
  UnchartedModeBoardRecord::GetPlantNum(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::GetPlantNum(int) */

void PVZ2UnchartedModeUtils::GetPlantNum(int param_1)

{
  UnchartedModeBoardRecord *this;
  
  this = (UnchartedModeBoardRecord *)GetCurrentBoardRecord();
  UnchartedModeBoardRecord::GetPlantNum(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::IsHavePlant(int) */

void PVZ2UnchartedModeUtils::IsHavePlant(int param_1)

{
  UnchartedModeBoardRecord *this;
  
  this = (UnchartedModeBoardRecord *)GetCurrentBoardRecord();
  UnchartedModeBoardRecord::IsHavePlant(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::SetPlantOnBoard(std::string const&) */

void PVZ2UnchartedModeUtils::SetPlantOnBoard(string *param_1)

{
  UnchartedModeBoardRecord *this;
  
  this = (UnchartedModeBoardRecord *)GetCurrentBoardRecord();
  UnchartedModeBoardRecord::SetPlantOnBoard(this,param_1);
  return;
}


/* PVZ2UnchartedModeUtils::SetPlantOnBoard(std::string const&, int) */

void PVZ2UnchartedModeUtils::SetPlantOnBoard(string *param_1,int param_2)

{
  UnchartedModeBoardRecord *this;
  
  this = (UnchartedModeBoardRecord *)GetCurrentBoardRecord();
  UnchartedModeBoardRecord::SetPlantOnBoard(this,param_1,param_2);
  return;
}


/* PVZ2UnchartedModeUtils::GetPlantNumList() */

long PVZ2UnchartedModeUtils::GetPlantNumList(void)

{
  long lVar1;
  
  lVar1 = GetCurrentBoardRecord();
  return lVar1 + 0x30;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentStarCount() */

void PVZ2UnchartedModeUtils::GetCurrentStarCount(void)

{
  undefined4 uVar1;
  UnchartedModeNetworkMgr *this;
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetPrefixWorld(___stack_chk_guard);
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar1 = UnchartedModeNetworkMgr::GetCurrentStarNumber(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentMaxStarNumber() */

void PVZ2UnchartedModeUtils::GetCurrentMaxStarNumber(void)

{
  undefined4 uVar1;
  UnchartedModeNetworkMgr *this;
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetPrefixWorld(___stack_chk_guard);
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar1 = UnchartedModeNetworkMgr::GetMaxStarNumber(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::SendPost_EndPlay(PVZ2UnchartedModeEndPlayParamData) */

void PVZ2UnchartedModeUtils::SendPost_EndPlay(PVZ2UnchartedModeEndPlayParamData *param_1)

{
  UnchartedModeNetworkMgr *pUVar1;
  PVZ2UnchartedModeEndPlayParamData aPStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar1 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  PVZ2UnchartedModeEndPlayParamData::PVZ2UnchartedModeEndPlayParamData(aPStack_30,param_1);
  UnchartedModeNetworkMgr::RequestEndPlayData(pUVar1,aPStack_30);
  DiscountPlant::~DiscountPlant((DiscountPlant *)aPStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayDescription() */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentUnchartedBirthdayDescription(PVZ2UnchartedModeUtils *this)

{
  char cVar1;
  int iVar2;
  UnchartedModeNetworkMgr *this_00;
  wstring awStack_40 [8];
  GAME_ITEM_INFO aGStack_38 [40];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  cVar1 = UnchartedModeNetworkMgr::HasAnniversaryBonus(this_00);
  if (cVar1 == '\0') {
    iVar2 = GetCurrentUnchartedBirthdayHeadshotPrizeId();
    GetGameItemInfo(iVar2,0x7fffffff,0);
    TodStringTranslate(L"[UNCHARTED_BIRTHDAY_FULL_PRIZE]");
    TodReplaceString(awStack_40,L"{HEADSHOTNAME}",awStack_10);
    FUN_05476c50(awStack_40);
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_38);
  }
  else {
    std::string::string((string *)aGStack_38,"[UNCHARTED_BIRTHDAY_FULL_PRIZE_HAS_GOT]");
    StringHelper::ToStringValue((string *)aGStack_38);
    std::string::~string((string *)aGStack_38);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeUtils::HasCompleteTutorial() */

void PVZ2UnchartedModeUtils::HasCompleteTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::PlayerHasCompletedTutorial(pPVar1,0x3f);
  return;
}


/* PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel() */

undefined1 PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel(void)

{
  bool bVar1;
  long lVar2;
  RtObject *this;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar2 + 0x70));
    if (bVar1) {
      lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x70));
      bVar1 = Sexy::RtObject::IsA<PVZ2UnchartedModeOutroProperties>(this);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}


/* PVZ2UnchartedModeUtils::GetBirthdayCurrentLevelSelectedStars() */

void PVZ2UnchartedModeUtils::GetBirthdayCurrentLevelSelectedStars(void)

{
  LevelBasedModifierModuleMgr *this;
  
  this = (LevelBasedModifierModuleMgr *)
         Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
  LevelBasedModifierModuleMgr::GetTotalCollectionLevels(this);
  return;
}


/* PVZ2UnchartedModeUtils::HasSelectedCollection(std::string const&) */

void PVZ2UnchartedModeUtils::HasSelectedCollection(string *param_1)

{
  LevelBasedModifierModuleMgr *this;
  
  this = (LevelBasedModifierModuleMgr *)
         Sexy::LazySingleton<LevelBasedModifierModuleMgr>::GetInstance();
  LevelBasedModifierModuleMgr::HasCollectionSelected(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::ShowTips() */

void PVZ2UnchartedModeUtils::ShowTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_03828bc8(0x28a);
    iVar3 = FUN_03828bc8(0x1a4);
  }
  else {
    iVar2 = FUN_03828bc8(600);
    iVar3 = FUN_03828bc8(0x1cc);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[REVIVE_TIP]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PVZ2_UNCHARTED_MODE_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03828bc8(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::ShowKeyTips() */

void PVZ2UnchartedModeUtils::ShowKeyTips(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PVZ2UIDialog *this;
  wchar16 *in_x1;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                    (___stack_chk_guard,in_x1,in_x2,in_x3,in_x4);
  if (cVar1 == '\0') {
    iVar2 = FUN_03828bc8(0x28a);
    iVar3 = FUN_03828bc8(0x140);
  }
  else {
    iVar2 = FUN_03828bc8(600);
    iVar3 = FUN_03828bc8(0x168);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[REVIVE_TIP]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[PVZ2_UNCHARTED_MODE_KEY_TIPS_DESC]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03828bc8(2);
  PVZ2UIDialog::SetFooterBottomPadding(this,iVar2);
  PVZ2UIDialog::SetBackgroundDarken(this,true,0.5);
  FUN_05478178(auStack_58,L"[OVERVIEW_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
  Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetChallengeListStr(std::vector<bool, std::allocator<bool> >) */

void __thiscall
PVZ2UnchartedModeUtils::GetChallengeListStr(string *param_1,PVZ2UnchartedModeUtils *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = std::vector<bool,std::allocator<bool>>::size((vector<bool,std::allocator<bool>> *)this);
  uVar4 = operator|(0x10,8);
  lVar6 = 0;
  FUN_05462470(auStack_178,uVar4);
  std::string::string((string *)local_188,"");
  FUN_05462980(auStack_178,(string *)local_188);
  std::string::~string((string *)local_188);
  nop();
  if (0 < iVar3) {
    do {
      while( true ) {
        auVar7 = FUN_0382896c(*(undefined8 *)this,lVar6);
        local_188 = auVar7;
        bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_188);
        if (bVar1) break;
        lVar6 = lVar6 + 1;
        uVar5 = FUN_054603b8(auStack_168,&DAT_055941c8);
        FUN_054603b8(uVar5,&DAT_05593348);
        if (iVar3 <= (int)lVar6) goto LAB_0382a374;
      }
      lVar6 = lVar6 + 1;
      uVar5 = FUN_054603b8(auStack_168,&DAT_05594210);
      FUN_054603b8(uVar5,&DAT_05593348);
    } while ((int)lVar6 < iVar3);
  }
LAB_0382a374:
  FUN_05462824((string *)local_188,auStack_178);
  bVar1 = std::operator==((string *)local_188,"");
  std::string::~string((string *)local_188);
  if (bVar1) {
    std::string::string(param_1,"");
    nop();
  }
  else {
    cVar2 = IsTimeLimitWorld();
    if (cVar2 != '\0') {
      uVar5 = FUN_054603b8(auStack_168,&DAT_05594210);
      FUN_054603b8(uVar5,&DAT_05593348);
    }
    FUN_05462824((string *)local_188,auStack_178);
    iVar3 = FUN_05474184((string *)local_188);
    std::string::~string((string *)local_188);
    FUN_05462824((string *)local_188,auStack_178);
    FUN_05475ffc(param_1,(string *)local_188,0,(long)(iVar3 + -1));
    std::string::~string((string *)local_188);
  }
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(std::string) */

void PVZ2UnchartedModeUtils::GetWorldIndexOfLevel(string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  lVar3 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar3 != 0) && (lVar3 = FUN_038284a8(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 != 0)) {
    thunk_FUN_05475e00(asStack_28,lVar3 + 0x38);
  }
  uVar4 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"PVZ2Uncharted get world index of level %s",uVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = WorldMapUtils::GetOrderedMainSpinePath(asStack_28,(vector *)&local_20);
  if (cVar1 == '\0') {
LAB_0382af3c:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0xffffffff;
    lVar5 = FUN_03828504(local_20,local_18);
    lVar3 = 0;
    do {
      if (lVar3 == lVar5) goto LAB_0382af3c;
      plVar6 = (long *)FUN_03828510(local_20,lVar3);
      lVar7 = *plVar6;
      iVar2 = FUN_038284a0(*(undefined4 *)(lVar7 + 0x14));
      if (iVar2 == 1) {
        uVar8 = uVar8 + 1;
      }
      cVar1 = std::operator==((string *)(lVar7 + 0x20),param_1);
      lVar3 = lVar3 + 1;
    } while (cVar1 == '\0');
    Sexy::OutputDebugStrF
              ((wchar_t *)"PVZ2Uncharted get world index of level index : %d",(ulong)uVar8);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelStarNumber() */

void PVZ2UnchartedModeUtils::GetCurrentLevelStarNumber(void)

{
  int iVar1;
  undefined4 uVar2;
  UnchartedModeNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = UnchartedModeNetworkMgr::GetBirthdayCurrentLevelStar(this,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelMaxStarNumber() */

void PVZ2UnchartedModeUtils::GetCurrentLevelMaxStarNumber(void)

{
  int iVar1;
  undefined4 uVar2;
  UnchartedModeNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = UnchartedModeNetworkMgr::GetBirthdayCurrentLevelMaxStar(this,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelBonus(bool) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentLevelBonus(PVZ2UnchartedModeUtils *this,bool param_1)

{
  bool bVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetLevelBonus(bVar1,(uint)this & 0xff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelFirstRewardBonus(bool) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentLevelFirstRewardBonus(PVZ2UnchartedModeUtils *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetLevelFirstRewardBonus(bVar1,(uint)this & 0xff);
  uVar5 = *in_x8;
  lVar2 = FUN_038284e4(uVar5,in_x8[1]);
  lVar4 = 0;
  while (lVar4 + 1 != lVar2 + 1) {
    lVar3 = FUN_038284f8(uVar5,lVar4);
    *(undefined1 *)(lVar3 + 8) = 1;
    lVar4 = lVar4 + 1;
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelPreviewBonus(bool) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentLevelPreviewBonus(PVZ2UnchartedModeUtils *this,bool param_1)

{
  bool bVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  UnchartedModeNetworkMgr::GetLevelPreviewBonus(bVar1,(uint)this & 0xff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelFirstReward(bool) */

void PVZ2UnchartedModeUtils::GetCurrentLevelFirstReward(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  UnchartedModeNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = UnchartedModeNetworkMgr::GetCurrentLevelFirstReward(this,param_1,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVZ2UnchartedModeUtils::IsCurrentLevelFirstReward() */

bool PVZ2UnchartedModeUtils::IsCurrentLevelFirstReward(void)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = (bool)IsHardMode();
  uVar2 = GetCurrentLevelFirstReward(bVar1);
  return uVar2 < 2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndex() */

void PVZ2UnchartedModeUtils::GetCurrentWorldLevelIndex(void)

{
  ulong uVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::OutputDebugStrF
            ((wchar_t *)"GetCurrentWorldLevelIndex level = %s, index = %d",uVar2,uVar1 & 0xffffffff)
  ;
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::ShowLevelSetupScreen(MapEventItem*, Sexy::Delegate1<std::string const&>
   const&) */

void PVZ2UnchartedModeUtils::ShowLevelSetupScreen(MapEventItem *param_1,Delegate1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  PVZ2UnchartedModeSelectLevelAnniversary *this;
  PVZ2UnchartedModeSelectLevel *this_00;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MapEventItem *)0x0) {
    uVar3 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    uVar4 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    FUN_05475d88(asStack_40,uVar4);
    UnchartedModeNetworkMgr::SetCurrentLevel(uVar3,asStack_40);
    std::string::~string(asStack_40);
    uVar2 = GetCurrentWorldLevelIndex();
    lVar5 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
    FUN_038284b0(lVar5 + 0x168,uVar2);
  }
  cVar1 = IsUnchartedBirthday();
  if ((cVar1 == '\0') && (cVar1 = IsAnniversarySelectLevel(), cVar1 == '\0')) {
    this_00 = (PVZ2UnchartedModeSelectLevel *)
              UISingletonDialog<PVZ2UnchartedModeSelectLevel>::ShowDialog();
    if (this_00 != (PVZ2UnchartedModeSelectLevel *)0x0) {
      PVZ2UnchartedModeSelectLevel::SetEventNode(this_00,param_1);
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
      PVZ2UnchartedModeSelectLevel::SetPlayLevelCallback(this_00,aDStack_38);
    }
  }
  else {
    this = (PVZ2UnchartedModeSelectLevelAnniversary *)
           UISingletonDialog<PVZ2UnchartedModeSelectLevelAnniversary>::ShowDialog();
    if (this != (PVZ2UnchartedModeSelectLevelAnniversary *)0x0) {
      PVZ2UnchartedModeSelectLevelAnniversary::SetEventNode(this,param_1);
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
      UIMessageBox::SetExtraCallback((UIMessageBox *)this,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetCurrentLevelChallengeDesc(int) */

void __thiscall
PVZ2UnchartedModeUtils::GetCurrentLevelChallengeDesc(PVZ2UnchartedModeUtils *this,int param_1)

{
  LevelUtils *this_00;
  long lVar1;
  vector *pvVar2;
  ulong uVar3;
  string asStack_40 [8];
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  PVZ2UnchartedModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar1 = LevelUtils::GetLevelInfo(this_00,asStack_40);
  if (lVar1 != 0) {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar1 + 0x1f8));
    pvVar2 = (vector *)FUN_03828910(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar2);
    uVar3 = FUN_038284d0(local_20,local_18);
    if ((uVar3 != 0) && ((ulong)(long)(int)this < uVar3)) {
      FUN_038284dc(local_20);
      FUN_05477b24();
      std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
                ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
      std::
      vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
      ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
                 *)local_38);
      goto LAB_0382bf90;
    }
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
               *)local_38);
  }
  FUN_05478178();
  nop();
LAB_0382bf90:
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ2UnchartedModeUtils::SetPlantNumList(std::vector<UnchartedModePlantNumData,
   std::allocator<UnchartedModePlantNumData> > const&) */

void PVZ2UnchartedModeUtils::SetPlantNumList(vector *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = GetCurrentBoardRecord();
  uVar2 = FUN_03829c64(*(undefined8 *)param_1);
  uVar3 = FUN_03829cb4(*(undefined8 *)(param_1 + 8));
  std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>::
  assign<__gnu_cxx::__normal_iterator<UnchartedModePlantNumData_const*,std::vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>>>,void>
            ((vector<UnchartedModePlantNumData,std::allocator<UnchartedModePlantNumData>> *)
             (lVar1 + 0x30),uVar2,uVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::IsLastLevel() */

void PVZ2UnchartedModeUtils::IsLastLevel(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FilesystemSaveGameContext *this;
  UnchartedModeNetworkMgr *this_00;
  UnchartedModeWorldData *pUVar4;
  UnchartedModeWorldData aUStack_120 [104];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = GetCurrentWorldLevelIndexByNetworkMgr();
  this = (FilesystemSaveGameContext *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  cVar1 = Sexy::FilesystemSaveGameContext::HasError(this);
  this_00 = (UnchartedModeNetworkMgr *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  pUVar4 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(this_00);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar4);
  if (cVar1 == '\0') {
    iVar3 = FUN_038284bc(local_b8,local_b0);
  }
  else {
    iVar3 = FUN_038284bc(local_a0,local_98);
  }
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == iVar2 + 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetSpringFestival2024CurrentLevelIndex() */

void PVZ2UnchartedModeUtils::GetSpringFestival2024CurrentLevelIndex(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  undefined8 uVar4;
  FilesystemSaveGameContext *this_00;
  UnchartedModeNetworkMgr *pUVar5;
  UnchartedModeWorldData *pUVar6;
  int iVar7;
  string asStack_128 [8];
  UnchartedModeWorldData aUStack_120 [104];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar4 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  FUN_05475d88(asStack_128,uVar4);
  this_00 = (FilesystemSaveGameContext *)
            Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  bVar1 = (bool)Sexy::FilesystemSaveGameContext::HasError(this_00);
  pUVar5 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  pUVar6 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(pUVar5);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar6);
  if (bVar1 == false) {
    iVar2 = FUN_038284bc(local_b8,local_b0);
  }
  else {
    iVar2 = FUN_038284bc(local_a0,local_98);
  }
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      pUVar5 = (UnchartedModeNetworkMgr *)
               Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
      iVar3 = UnchartedModeNetworkMgr::GetLevelStatus(pUVar5,asStack_128,bVar1,iVar7);
      if (iVar3 == 2) goto LAB_0382cdf8;
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar2);
  }
  iVar7 = 0;
LAB_0382cdf8:
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  std::string::~string(asStack_128);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::CanTale2HardBossLevelUnlock(std::string, bool) */

void PVZ2UnchartedModeUtils::CanTale2HardBossLevelUnlock(string *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  UnchartedModeNetworkMgr *pUVar3;
  UnchartedModeWorldData *pUVar4;
  int iVar5;
  undefined8 uVar6;
  UnchartedModeWorldData aUStack_120 [104];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pUVar3 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  pUVar4 = (UnchartedModeWorldData *)UnchartedModeNetworkMgr::GetCurrentWorldData(pUVar3);
  UnchartedModeWorldData::UnchartedModeWorldData(aUStack_120,pUVar4);
  if (param_2 == false) {
    iVar1 = FUN_038284bc(local_b8,local_b0);
  }
  else {
    iVar1 = FUN_038284bc(local_a0,local_98);
  }
  if (1 < iVar1) {
    iVar5 = 0;
    do {
      pUVar3 = (UnchartedModeNetworkMgr *)
               Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
      iVar2 = UnchartedModeNetworkMgr::GetLevelStatus(pUVar3,param_1,param_2,iVar5);
      if (1 < iVar2 - 2U) {
        uVar6 = 0;
        goto LAB_0382cef4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1 + -1);
  }
  uVar6 = 1;
LAB_0382cef4:
  UnchartedModeWorldData::~UnchartedModeWorldData(aUStack_120);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::GetLevelPlantsAdd() */

void __thiscall PVZ2UnchartedModeUtils::GetLevelPlantsAdd(PVZ2UnchartedModeUtils *this)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UINewPVPTopZombieQueue *this_00;
  NameMapperBase *pNVar7;
  long lVar8;
  RtObject *this_01;
  SeedPacket_Uncharted *pSVar9;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  RtWeakPtr aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  this_00 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0));
  cVar3 = FUN_038284ac(this_00[0x199]);
  iVar5 = 0;
  if ('\0' < cVar3) {
    do {
      UINewPVPTopZombieQueue::gettItem(this_00,iVar5);
      bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_30);
      if (!bVar4) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
        pNVar7 = (NameMapperBase *)PlantNameMapper::GetInstance();
        SeedPacket::GetPlantType();
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        NameMapperBase::GetIdForName(pNVar7,(string *)(lVar8 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1000,0x382d00c);
        (*pcVar2)();
      }
      iVar1 = iVar5 + 1;
      UINewPVPTopZombieQueue::gettItem(this_00,iVar5);
      this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      pSVar9 = Sexy::RtObject::Cast<SeedPacket_Uncharted>(this_01);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pNVar7 = (NameMapperBase *)PlantNameMapper::GetInstance();
      SeedPacket::GetPlantType();
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      iVar5 = NameMapperBase::GetIdForName(pNVar7,(string *)(lVar8 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      iVar6 = FUN_038284b8(*(undefined4 *)(pSVar9 + 0x200));
      S2C_DangerRoomPlantNum::S2C_DangerRoomPlantNum
                ((S2C_DangerRoomPlantNum *)aRStack_28,iVar5,iVar6);
      std::vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>>::push_back
                ((vector<S2C_DangerRoomPlantNum,std::allocator<S2C_DangerRoomPlantNum>> *)in_x8,
                 (S2C_DangerRoomPlantNum *)aRStack_28);
      S2C_DangerRoomPlantNum::~S2C_DangerRoomPlantNum((S2C_DangerRoomPlantNum *)aRStack_28);
      cVar3 = FUN_038284ac(this_00[0x199]);
      iVar5 = iVar1;
    } while (iVar1 < cVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::SetCurrentBoardRecord(UnchartedModeBoardRecord) */

void PVZ2UnchartedModeUtils::SetCurrentBoardRecord(UnchartedModeBoardRecord *param_1)

{
  undefined4 uVar1;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this;
  undefined8 uVar2;
  UnchartedModeNetworkMgr *pUVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  UnchartedModeBoardRecord aUStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
          ::_M_root(this);
  FUN_05475d88(asStack_60,uVar2);
  uVar1 = IsHardMode();
  pUVar3 = (UnchartedModeNetworkMgr *)Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr()
  ;
  FUN_05475d88(asStack_58,asStack_60);
  UnchartedModeBoardRecord::UnchartedModeBoardRecord(aUStack_50,param_1);
  UnchartedModeNetworkMgr::SetBoardRecord(pUVar3,asStack_58,uVar1,aUStack_50);
  UnchartedModeBoardRecord::~UnchartedModeBoardRecord(aUStack_50);
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ2UnchartedModeUtils::ShowHowToPlay() */

void PVZ2UnchartedModeUtils::ShowHowToPlay(void)

{
  long lVar1;
  AdaptorUnchartedHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  if (lVar1 != 0) {
    HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x100));
    this = ::operator_new(0x1a8);
    memset(this,0,0x1a8);
    AdaptorUnchartedHowToPlayScreen::AdaptorUnchartedHowToPlayScreen(this);
    HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  }
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

