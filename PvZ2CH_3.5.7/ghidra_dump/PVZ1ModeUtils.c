// Class: PVZ1ModeUtils


/* PVZ1ModeUtils::IsThemeDisabled(std::string const&) */

void PVZ1ModeUtils::IsThemeDisabled(string *param_1)

{
  RiftThemeMgr *this;
  
  this = (RiftThemeMgr *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::IsThemeDisabled(this,param_1);
  return;
}


/* PVZ1ModeUtils::IsThemeDisabled(int, std::string const&) */

void PVZ1ModeUtils::IsThemeDisabled(int param_1,string *param_2)

{
  RiftThemeMgr *pRVar1;
  
  pRVar1 = (RiftThemeMgr *)Sexy::LazySingleton<RiftThemeMgr>::GetInstance();
  RiftThemeMgr::IsThemeDisabled(pRVar1,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentThemeName(int) */

void PVZ1ModeUtils::GetCurrentThemeName(int param_1)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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
/* PVZ1ModeUtils::GetCurrentThemeDescription(int) */

void PVZ1ModeUtils::GetCurrentThemeDescription(int param_1)

{
  int iVar1;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
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


/* PVZ1ModeUtils::GetLevelChallengePropertys(int) */

vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *
PVZ1ModeUtils::GetLevelChallengePropertys(int param_1)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  return in_x8;
}


/* PVZ1ModeUtils::IsInPVZ1WorldMap() */

undefined8 PVZ1ModeUtils::IsInPVZ1WorldMap(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar1 != 0) && (lVar1 = FUN_04c67208(*(undefined8 *)(lVar1 + 0x2f0)), lVar1 != 0)) {
    uVar2 = WorldMapUtils::IsPVZ1World((string *)(lVar1 + 0x38));
    return uVar2;
  }
  return 0;
}


/* PVZ1ModeUtils::IsInQueuedPVZ1WorldMap() */

void PVZ1ModeUtils::IsInQueuedPVZ1WorldMap(void)

{
  long lVar1;
  
  lVar1 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar1 != 0) {
    lVar1 = FUN_04c671e4(*(undefined8 *)(lVar1 + 0xe8));
    WorldMapUtils::IsPVZ1World((string *)(lVar1 + 0x38));
    return;
  }
  return;
}


/* PVZ1ModeUtils::ResetPVZ1Mode(bool) */

void PVZ1ModeUtils::ResetPVZ1Mode(bool param_1)

{
  PlayerInfo *this;
  
  this = (PlayerInfo *)ProfileUtils::Profile();
  PlayerInfo::ClearPVZ1LevelProgress(this,param_1);
  return;
}


/* PVZ1ModeUtils::GoToPVZ1MainMenu() */

void PVZ1ModeUtils::GoToPVZ1MainMenu(void)

{
  GameStateMgr::ShowNostalgiaPVZ(gGameStateMgr,5,5);
  return;
}


/* PVZ1ModeUtils::IsZombossLevel(MapEventItem const*) */

bool PVZ1ModeUtils::IsZombossLevel(MapEventItem *param_1)

{
  return *(int *)(param_1 + 0x18) == 0xc;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetMainThemeText(int) */

void __thiscall PVZ1ModeUtils::GetMainThemeText(PVZ1ModeUtils *this,int param_1)

{
  undefined4 local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_24[0] = SUB84(this,0);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"[");
  nop();
  FUN_05475ad8(asStack_18,"PVZ1_MAINTHEME_NAME_");
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_24);
  thunk_FUN_054757c0(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  FUN_05475ad8(asStack_18,&DAT_05593350);
  StringHelper::ToStringValue(asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetMainThemeDesc(int) */

void __thiscall PVZ1ModeUtils::GetMainThemeDesc(PVZ1ModeUtils *this,int param_1)

{
  undefined4 local_24 [3];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_24[0] = SUB84(this,0);
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"[");
  nop();
  FUN_05475ad8(asStack_18,"PVZ1_MAINTHEME_NAME_");
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_24);
  thunk_FUN_054757c0(asStack_18,asStack_10);
  std::string::~string(asStack_10);
  FUN_05475ad8(asStack_18,"_DESC]");
  StringHelper::ToStringValue(asStack_18);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeUtils::HasLeagueChangeEvent() */

undefined1 PVZ1ModeUtils::HasLeagueChangeEvent(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined1 *)(lVar1 + 0x80);
}


/* PVZ1ModeUtils::HasSeasonChangeEvent() */

undefined1 PVZ1ModeUtils::HasSeasonChangeEvent(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined1 *)(lVar1 + 0x81);
}


/* PVZ1ModeUtils::GetCurrentWorldPrefix(bool) */

long PVZ1ModeUtils::GetCurrentWorldPrefix(bool param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  if (!param_1) {
    lVar1 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this);
    return lVar1 + 8;
  }
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return lVar1 + 0x10;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentPVZ1World(bool) */

void __thiscall PVZ1ModeUtils::GetCurrentPVZ1World(PVZ1ModeUtils *this,bool param_1)

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
/* PVZ1ModeUtils::GetNormalLevelNumber() */

void PVZ1ModeUtils::GetNormalLevelNumber(void)

{
  long lVar1;
  undefined2 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentPVZ1World((PVZ1ModeUtils *)0x0,SUB81(___stack_chk_guard,0));
  lVar1 = WorldMapUtils::FindLastPlayableEventInWorld(asStack_10);
  if (lVar1 == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = *(undefined2 *)(lVar1 + 0x8e);
  }
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLandingLevel(bool) */

void __thiscall PVZ1ModeUtils::GetCurrentLandingLevel(PVZ1ModeUtils *this,bool param_1)

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
  GetCurrentPVZ1World(this,SUB81(___stack_chk_guard,0));
  WorldMapUtils::GetFirstLevelInWorld(aWStack_18,extraout_x1);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    this_01 = (FilesystemSaveGameContext *)WorldDataManager::FindEventByName(this_00,asStack_10);
    if (this_01 != (FilesystemSaveGameContext *)0x0) {
      Sexy::FilesystemSaveGameContext::GetBuffer(this_01);
      FUN_05475d88();
      goto LAB_04c67930;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_04c67930:
  std::string::~string(asStack_10);
  std::string::~string((string *)aWStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GoToPVZ1WorldMap(bool) */

void PVZ1ModeUtils::GoToPVZ1WorldMap(bool param_1)

{
  char cVar1;
  WorldDataManager *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLandingLevel((PVZ1ModeUtils *)(ulong)param_1,SUB81(___stack_chk_guard,0));
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


/* PVZ1ModeUtils::PlayerCanPlay() */

undefined1 PVZ1ModeUtils::PlayerCanPlay(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined1 *)(lVar1 + 0x18);
}


/* PVZ1ModeUtils::GetCurrentFuel() */

undefined4 PVZ1ModeUtils::GetCurrentFuel(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined4 *)(lVar1 + 0x38);
}


/* PVZ1ModeUtils::AddTimeEnergy(int) */

void PVZ1ModeUtils::AddTimeEnergy(int param_1)

{
  PVZ1ModeNetworkMgr *this;
  
  this = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::AddTimeEnergy(this,param_1);
  return;
}


/* PVZ1ModeUtils::GetPvz1HardEliteLevelNumber() */

void PVZ1ModeUtils::GetPvz1HardEliteLevelNumber(void)

{
  PVZ1ModeNetworkMgr *this;
  
  this = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetHardEliteLevelNumber(this);
  return;
}


/* PVZ1ModeUtils::GetCurrentTheme() */

undefined4 PVZ1ModeUtils::GetCurrentTheme(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined4 *)(lVar1 + 0x1c);
}


/* PVZ1ModeUtils::GetCurrentStage() */

undefined4 PVZ1ModeUtils::GetCurrentStage(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return *(undefined4 *)(lVar1 + 0x74);
}


/* PVZ1ModeUtils::IsHardMode() */

void PVZ1ModeUtils::IsHardMode(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c671f0(*(undefined1 *)(lVar1 + 0x15d));
  return;
}


/* PVZ1ModeUtils::SetIsHardMode(bool) */

void PVZ1ModeUtils::SetIsHardMode(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c671e8(lVar1 + 0x15d,param_1);
  return;
}


/* PVZ1ModeUtils::SetFromTutorial(bool) */

void PVZ1ModeUtils::SetFromTutorial(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c671fc(lVar1 + 0x16a,param_1);
  return;
}


/* PVZ1ModeUtils::IsFromTutorial() */

void PVZ1ModeUtils::IsFromTutorial(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c67204(*(undefined1 *)(lVar1 + 0x16a));
  return;
}


/* PVZ1ModeUtils::GetCurrentWeekIndex() */

int PVZ1ModeUtils::GetCurrentWeekIndex(void)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long lVar1;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_end(this);
  return (*(int *)(lVar1 + 0x70) + -1) % 4;
}


/* PVZ1ModeUtils::GetChallengeStatus(int) */

void PVZ1ModeUtils::GetChallengeStatus(int param_1)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetChallengeStatus(iVar1);
  return;
}


/* PVZ1ModeUtils::GetHardLevelTheme(int) */

void PVZ1ModeUtils::GetHardLevelTheme(int param_1)

{
  int iVar1;
  
  iVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetHardLevelTheme(iVar1);
  return;
}


/* PVZ1ModeUtils::GetCurrentLevel() */

void __thiscall PVZ1ModeUtils::GetCurrentLevel(PVZ1ModeUtils *this)

{
  Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetCurrentLevel();
  return;
}


/* PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr() */

void PVZ1ModeUtils::GetCurrentWorldLevelIndexByNetworkMgr(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c671f4(*(undefined4 *)(lVar1 + 0x158));
  return;
}


/* PVZ1ModeUtils::GetIsFromLevel() */

void PVZ1ModeUtils::GetIsFromLevel(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  FUN_04c671f8(*(undefined1 *)(lVar1 + 0x15c));
  return;
}


/* PVZ1ModeUtils::SendGet_MainEntry(bool) */

void PVZ1ModeUtils::SendGet_MainEntry(bool param_1)

{
  PVZ1ModeNetworkMgr *this;
  
  this = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::RequestGetMainEntryData(this,param_1);
  return;
}


/* PVZ1ModeUtils::SendPost_Play(PVZ1ModeStartPlayParamData) */

void PVZ1ModeUtils::SendPost_Play(undefined8 param_1)

{
  PVZ1ModeNetworkMgr *pPVar1;
  
  pPVar1 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::RequestStartPlayData(pPVar1,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::SendPost_EndPlay(PVZ1ModeEndPlayParamData) */

void PVZ1ModeUtils::SendPost_EndPlay(PVZ1ModeEndPlayParamData *param_1)

{
  PVZ1ModeNetworkMgr *pPVar1;
  PVZ1ModeEndPlayParamData aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeEndPlayParamData::PVZ1ModeEndPlayParamData(aPStack_20,param_1);
  PVZ1ModeNetworkMgr::RequestEndPlayData(pPVar1,aPStack_20);
  PakRecord::~PakRecord((PakRecord *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::ShowCreditsTipsUI() */

void PVZ1ModeUtils::ShowCreditsTipsUI(void)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(L"[PVZ1MODE_CREDITS_TIPS]");
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::ShowTips(std::wstring) */

void PVZ1ModeUtils::ShowTips(wstring *param_1)

{
  UIMessageBox *this;
  Image *pIVar1;
  long lVar2;
  wstring awStack_28 [8];
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this != (UIMessageBox *)0x0) {
    UIMessageBox::SetShowType(this,2);
    TodStringTranslate(L"[REVIVE_TIP]");
    TodStringTranslate(param_1);
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonOK(this);
    thunk_FUN_05477b9c(lVar2 + 0xd8,auStack_18);
    FUN_05476c50(auStack_18);
    FUN_05476c50(awStack_20);
    FUN_05476c50(awStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::ShowLevelSetupScreen(MapEventItem*, Sexy::Delegate1<std::string const&> const&) */

void PVZ1ModeUtils::ShowLevelSetupScreen(MapEventItem *param_1,Delegate1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  PVZ1ModeSelectLevel *this;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MapEventItem *)0x0) {
    uVar1 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    uVar2 = Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    FUN_05475d88(asStack_40,uVar2);
    PVZ1ModeNetworkMgr::SetCurrentLevel(uVar1,asStack_40);
    std::string::~string(asStack_40);
  }
  this = (PVZ1ModeSelectLevel *)UISingletonDialog<PVZ1ModeSelectLevel>::ShowDialog();
  if (this != (PVZ1ModeSelectLevel *)0x0) {
    PVZ1ModeSelectLevel::SetEventNode(this,param_1);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    UIBagItemBox::SetCallBack((UIBagItemBox *)this,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetRemainingEnergy() */

undefined1  [16] PVZ1ModeUtils::GetRemainingEnergy(void)

{
  long extraout_x0;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  string asStack_10 [8];
  long local_8;
  undefined1 auVar1 [16];
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISpacetimeEnergy");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if (extraout_x0 == 0) {
    if (local_8 == ___stack_chk_guard) {
      return ZEXT816(0);
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    FUN_04c67214(*(undefined4 *)(extraout_x0 + 0x1d0));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::TakeTimeEnergy(float) */

void PVZ1ModeUtils::TakeTimeEnergy(float param_1)

{
  long extraout_x0;
  float fVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UISpacetimeEnergy");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  if ((extraout_x0 != 0) &&
     (fVar1 = (float)FUN_04c67214(*(undefined4 *)(extraout_x0 + 0x1d0)), param_1 <= fVar1)) {
    FUN_04c6720c(fVar1 - param_1,extraout_x0 + 0x1d0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeUtils::HasCompleteTutorial() */

void PVZ1ModeUtils::HasCompleteTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetPVZ1ModeTutorialFinished(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentCoin(bool) */

void PVZ1ModeUtils::GetCurrentCoin(bool param_1)

{
  undefined4 uVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (param_1) {
    __s = "mat_pvz1mode_coin_hard";
  }
  else {
    __s = "mat_pvz1mode_coin";
  }
  std::string::string(asStack_10,__s);
  uVar1 = PlayerInfo::GetMaterialNum(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PVZ1ModeUtils::IsPlayingPVZ1Level() */

undefined1 PVZ1ModeUtils::IsPlayingPVZ1Level(void)

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
      bVar1 = Sexy::RtObject::IsA<PVZ1ModeOutroProperties>(this);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentThemeName() */

void __thiscall PVZ1ModeUtils::GetCurrentThemeName(PVZ1ModeUtils *this)

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
/* PVZ1ModeUtils::GetCurrentThemeDescription() */

void __thiscall PVZ1ModeUtils::GetCurrentThemeDescription(PVZ1ModeUtils *this)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetChooseListStr() */

void __thiscall PVZ1ModeUtils::GetChooseListStr(PVZ1ModeUtils *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  PVZ1ModeNetworkMgr *this_00;
  vector<bool,std::allocator<bool>> *this_01;
  undefined8 uVar4;
  ulong uVar5;
  string *in_x8;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  this_00 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  this_01 = (vector<bool,std::allocator<bool>> *)PVZ1ModeNetworkMgr::GetChooseChallengeList(this_00)
  ;
  iVar2 = std::vector<bool,std::allocator<bool>>::size(this_01);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string((string *)local_188,"");
  FUN_05462980(auStack_178,(string *)local_188);
  std::string::~string((string *)local_188);
  nop();
  if (0 < iVar2) {
    do {
      while( true ) {
        auVar7 = FUN_04c67380(*(undefined8 *)this_01,uVar6);
        local_188 = auVar7;
        bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_188);
        if (!bVar1) break;
        uVar5 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        uVar4 = FUN_0546065c(auStack_168,uVar5);
        FUN_054603b8(uVar4,&DAT_05593348);
        if (iVar2 <= (int)uVar6) goto LAB_04c68534;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar2);
  }
LAB_04c68534:
  FUN_05462824((string *)local_188,auStack_178);
  bVar1 = std::operator==((string *)local_188,"");
  std::string::~string((string *)local_188);
  if (bVar1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    FUN_05462824((string *)local_188,auStack_178);
    iVar2 = FUN_05474184((string *)local_188);
    std::string::~string((string *)local_188);
    FUN_05462824((string *)local_188,auStack_178);
    FUN_05475ffc((string *)local_188,0,(long)(iVar2 + -1));
    std::string::~string((string *)local_188);
  }
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeUtils::IsPoolStage() */

bool PVZ1ModeUtils::IsPoolStage(void)

{
  bool bVar1;
  long lVar2;
  RtObject *this;
  PoolDaylightStage *pPVar3;
  
  lVar2 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = false;
  if (lVar2 != 0) {
    this = (RtObject *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
    pPVar3 = Sexy::RtObject::Cast<PoolDaylightStage>(this);
    bVar1 = pPVar3 != (PoolDaylightStage *)0x0;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::IsNodeUnlocked(int) */

void PVZ1ModeUtils::IsNodeUnlocked(int param_1)

{
  char cVar1;
  bool bVar2;
  PVZ1ModeUtils *this;
  WorldDataManager *this_00;
  WorldData *this_01;
  MapEventItem *pMVar3;
  int *piVar4;
  PlayerInfo *this_02;
  bool extraout_w1;
  undefined1 uVar5;
  int iVar6;
  string asStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsInPVZ1WorldMap();
  if ((cVar1 != '\0') || (cVar1 = IsInQueuedPVZ1WorldMap(), uVar5 = 0, cVar1 != '\0')) {
    this = (PVZ1ModeUtils *)IsHardMode();
    GetCurrentPVZ1World(this,extraout_w1);
    this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    this_01 = (WorldData *)WorldDataManager::FindWorldDataByWorldName(this_00,asStack_38);
    pMVar3 = (MapEventItem *)WorldData::FindEventByEventId(this_01,param_1 + 1);
    if ((pMVar3 != (MapEventItem *)0x0) && (cVar1 = IsZombossLevel(pMVar3), cVar1 != '\0')) {
      cVar1 = IsHardMode();
      if (cVar1 == '\0') {
        if (0 < param_1) {
          iVar6 = 0;
          do {
            GetChallengeStatus(iVar6);
            local_30 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin(avStack_20);
            local_28 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end(avStack_20);
            while (bVar2 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
                  , bVar2) {
              piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_30);
              if (*piVar4 == 0) {
                std::vector<int,std::allocator<int>>::~vector
                          ((vector<int,std::allocator<int>> *)avStack_20);
                uVar5 = 0;
                goto LAB_04c686c0;
              }
              eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                        ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_30);
            }
            iVar6 = iVar6 + 1;
            std::vector<int,std::allocator<int>>::~vector
                      ((vector<int,std::allocator<int>> *)avStack_20);
          } while (iVar6 != param_1);
        }
      }
      else {
        this_02 = (PlayerInfo *)ProfileUtils::Profile();
        if (0 < param_1) {
          iVar6 = 0;
          do {
            cVar1 = PlayerInfo::HasCompletedPVZ1Level(this_02,iVar6,true);
            uVar5 = 0;
            if (cVar1 == '\0') goto LAB_04c686c0;
            iVar6 = iVar6 + 1;
          } while (iVar6 != param_1);
        }
      }
    }
    uVar5 = 1;
LAB_04c686c0:
    std::string::~string(asStack_38);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


/* PVZ1ModeUtils::IsPlayingPVZ1Tutorial() */

bool PVZ1ModeUtils::IsPlayingPVZ1Tutorial(void)

{
  bool bVar1;
  long lVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    bVar1 = BoardHelpers::HasGameModuleInLevelDefinition<PVZ1ModeIntroProperties>();
    return bVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetWorldIndexOfLevel(std::string) */

void PVZ1ModeUtils::GetWorldIndexOfLevel(string *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar2 != 0) && (lVar2 = FUN_04c67208(*(undefined8 *)(lVar2 + 0x2f0)), lVar2 != 0)) {
    thunk_FUN_05475e00(asStack_28,lVar2 + 0x38);
  }
  uVar3 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"pvz1 get world index of level %s",uVar3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = WorldMapUtils::GetOrderedMainSpinePath(asStack_28,(vector *)&local_20);
  if (cVar1 == '\0') {
LAB_04c68bdc:
    if (*(long *)(gLawnApp + 0x9f0) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = GetCurrentWorldLevelIndexByNetworkMgr();
      uVar7 = uVar7 & 0xffffffff;
      Sexy::OutputDebugStrF((wchar_t *)"board pvz1 get world index of level index : %d",uVar7);
    }
  }
  else {
    uVar4 = FUN_04c672b8(local_20,local_18);
    uVar6 = 0;
    do {
      uVar7 = uVar6 & 0xffffffff;
      if (uVar6 == uVar4) goto LAB_04c68bdc;
      plVar5 = (long *)FUN_04c672c4(local_20,uVar6);
      cVar1 = std::operator==((string *)(*plVar5 + 0x20),param_1);
      uVar6 = uVar6 + 1;
    } while (cVar1 == '\0');
    Sexy::OutputDebugStrF((wchar_t *)"pvz1 get world index of level index : %d",uVar7);
  }
  std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
            ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelBonus(bool) */

void __thiscall PVZ1ModeUtils::GetCurrentLevelBonus(PVZ1ModeUtils *this,bool param_1)

{
  bool bVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetLevelBonus(bVar1,(uint)this & 0xff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelFirstRewardBonus(bool) */

void __thiscall PVZ1ModeUtils::GetCurrentLevelFirstRewardBonus(PVZ1ModeUtils *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetLevelFirstRewardBonus(bVar1,(uint)this & 0xff);
  uVar5 = *in_x8;
  lVar2 = FUN_04c67244(uVar5,in_x8[1]);
  lVar4 = 0;
  while (lVar4 + 1 != lVar2 + 1) {
    lVar3 = FUN_04c67258(uVar5,lVar4);
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
/* PVZ1ModeUtils::GetCurrentLevelChallengeBonus(bool) */

void __thiscall PVZ1ModeUtils::GetCurrentLevelChallengeBonus(PVZ1ModeUtils *this,bool param_1)

{
  bool bVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  bVar1 = (bool)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  PVZ1ModeNetworkMgr::GetCurrentLevelChallengeBonus(bVar1,(uint)this & 0xff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelFuel(bool) */

void PVZ1ModeUtils::GetCurrentLevelFuel(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  PVZ1ModeNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  uVar2 = PVZ1ModeNetworkMgr::GetCurrentLevelFuel(this,param_1,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelFirstReward(bool) */

void PVZ1ModeUtils::GetCurrentLevelFirstReward(bool param_1)

{
  int iVar1;
  undefined4 uVar2;
  PVZ1ModeNetworkMgr *this;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  iVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  this = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  uVar2 = PVZ1ModeNetworkMgr::GetCurrentLevelFirstReward(this,param_1,iVar1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PVZ1ModeUtils::IsCurrentLevelFirstReward() */

bool PVZ1ModeUtils::IsCurrentLevelFirstReward(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = (bool)IsHardMode();
  iVar2 = GetCurrentLevelFirstReward(bVar1);
  return iVar2 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentWorldLevelIndex() */

void PVZ1ModeUtils::GetCurrentWorldLevelIndex(void)

{
  ulong uVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  PVZ1ModeUtils *local_8;
  
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
/* PVZ1ModeUtils::GetCurrentThemeList() */

void __thiscall PVZ1ModeUtils::GetCurrentThemeList(PVZ1ModeUtils *this)

{
  byte bVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar3;
  vector<int,std::allocator<int>> *in_x8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  bVar1 = IsHardMode();
  if (bVar1 == 0) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_end(this_00);
    std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(lVar3 + 0x20));
  }
  else {
    GetCurrentLevel((PVZ1ModeUtils *)(ulong)bVar1);
    FUN_05475d88(asStack_10,asStack_18);
    iVar2 = GetWorldIndexOfLevel(asStack_10);
    std::string::~string(asStack_10);
    GetHardLevelTheme(iVar2);
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::MarkCurrentPVZ1LevelComplete(std::string const&) */

void PVZ1ModeUtils::MarkCurrentPVZ1LevelComplete(string *param_1)

{
  undefined *this;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PlayerInfo *this_00;
  WorldDataManager *this_01;
  long lVar5;
  PVZ1ModeUtils *this_02;
  LevelModuleManager *this_03;
  TimeEnergyModule *this_04;
  long lVar6;
  UINewPVPTopZombieQueue *this_05;
  undefined8 uVar7;
  uint uVar8;
  RtWeakPtr aRStack_68 [8];
  RtWeakPtr aRStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48 [3];
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar5 = WorldDataManager::FindEventByName(this_01,param_1);
  if (lVar5 == 0) {
    iVar4 = -2;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(lVar5 + 0x8e);
    iVar4 = *(ushort *)(lVar5 + 0x8e) - 1;
  }
  bVar1 = (bool)IsHardMode();
  PlayerInfo::SetPVZ1LevelComplete(this_00,uVar8,bVar1);
  PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo((PvZ1LevelCompleteInfo *)&local_30);
  local_30 = iVar4;
  this_02 = (PVZ1ModeUtils *)GetCurrentStage();
  local_28 = SUB84(this_02,0);
  GetCurrentThemeList(this_02);
  std::vector<int,std::allocator<int>>::operator=(avStack_20,(vector *)local_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_48);
  local_2b = 0;
  this_03 = (LevelModuleManager *)FUN_04c67218(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_04 = LevelModuleManager::GetModuleByClass<TimeEnergyModule>(this_03);
  if ((this_04 == (TimeEnergyModule *)0x0) ||
     (cVar2 = TimeEnergyModule::BeatEliteZombie(this_04), cVar2 == '\0')) {
    lVar5 = PVZ1ModePropertySheet::GetProperties();
  }
  else {
    local_2b = 1;
    lVar5 = PVZ1ModePropertySheet::GetProperties();
  }
  if ((gLawnApp == 0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) {
LAB_04c693a0:
    local_2c = 0;
    cVar2 = IsHardMode();
  }
  else {
    lVar6 = Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
    if (((lVar6 == 0) || (iVar4 = FUN_04c67220(*(undefined4 *)(lVar6 + 0x44)), iVar4 != 0)) &&
       ((this_05 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
        this_05 != (UINewPVPTopZombieQueue *)0x0 && (iVar4 = 0, lVar5 != 0)))) {
      for (; cVar2 = FUN_04c6721c(this_05[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
        UINewPVPTopZombieQueue::gettItem(this_05,iVar4);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
        if (bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          SeedPacket::GetPlantType();
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
          if (bVar1) {
            bVar1 = false;
            local_50 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)(lVar5 + 0x178));
            local_48[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)(lVar5 + 0x178));
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_50,(__normal_iterator *)local_48),
                  bVar3) {
              uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
              FUN_05475d88(asStack_58,uVar7);
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
              cVar2 = std::operator==(asStack_58,(string *)(lVar6 + 8));
              if (cVar2 != '\0') {
                bVar1 = true;
              }
              std::string::~string(asStack_58);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
            }
            if (bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
              goto LAB_04c69374;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          goto LAB_04c693a0;
        }
LAB_04c69374:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
    }
    local_2c = 1;
    cVar2 = IsHardMode();
  }
  if (cVar2 == '\0') {
    PlayerInfo::SavePvZ1NormalLevelFinishInfoForAchievement
              (this_00,(PvZ1LevelCompleteInfo *)&local_30);
  }
  else {
    PlayerInfo::SavePvZ1HardLevelFinishInfoForAchievement
              (this_00,(PvZ1LevelCompleteInfo *)&local_30);
  }
  this = gMessageRouter;
  bVar1 = (bool)IsHardMode();
  MessageRouter::Post<int,bool,int,bool>((MessageRouter *)this,Message::PvZ1FinishLevel,uVar8,bVar1)
  ;
  HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&local_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::TryCompleteLevel(std::string const&) */

void PVZ1ModeUtils::TryCompleteLevel(string *param_1)

{
  undefined *this;
  bool bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  PlayerInfo *this_00;
  WorldDataManager *this_01;
  long lVar5;
  PVZ1ModeUtils *this_02;
  LevelModuleManager *this_03;
  TimeEnergyModule *this_04;
  long lVar6;
  UINewPVPTopZombieQueue *this_05;
  undefined8 uVar7;
  uint uVar8;
  RtWeakPtr aRStack_68 [8];
  RtWeakPtr aRStack_60 [8];
  string asStack_58 [8];
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  int iStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined4 uStack_28;
  vector<int,std::allocator<int>> avStack_20 [24];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
  lVar5 = WorldDataManager::FindEventByName(this_01,param_1);
  if (lVar5 == 0) {
    iVar4 = -2;
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(lVar5 + 0x8e);
    iVar4 = *(ushort *)(lVar5 + 0x8e) - 1;
  }
  bVar1 = (bool)IsHardMode();
  PlayerInfo::SetPVZ1LevelComplete(this_00,uVar8,bVar1);
  PvZ1LevelCompleteInfo::PvZ1LevelCompleteInfo((PvZ1LevelCompleteInfo *)&iStack_30);
  iStack_30 = iVar4;
  this_02 = (PVZ1ModeUtils *)GetCurrentStage();
  uStack_28 = SUB84(this_02,0);
  GetCurrentThemeList(this_02);
  std::vector<int,std::allocator<int>>::operator=(avStack_20,(vector *)auStack_48);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)auStack_48);
  uStack_2b = 0;
  this_03 = (LevelModuleManager *)FUN_04c67218(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_04 = LevelModuleManager::GetModuleByClass<TimeEnergyModule>(this_03);
  if ((this_04 == (TimeEnergyModule *)0x0) ||
     (cVar2 = TimeEnergyModule::BeatEliteZombie(this_04), cVar2 == '\0')) {
    lVar5 = PVZ1ModePropertySheet::GetProperties();
  }
  else {
    uStack_2b = 1;
    lVar5 = PVZ1ModePropertySheet::GetProperties();
  }
  if ((gLawnApp == 0) || (*(Board **)(gLawnApp + 0x9f0) == (Board *)0x0)) {
LAB_04c693a0:
    uStack_2c = 0;
    cVar2 = IsHardMode();
  }
  else {
    lVar6 = Board::GetSeedBankModule(*(Board **)(gLawnApp + 0x9f0));
    if (((lVar6 == 0) || (iVar4 = FUN_04c67220(*(undefined4 *)(lVar6 + 0x44)), iVar4 != 0)) &&
       ((this_05 = (UINewPVPTopZombieQueue *)Board::GetSeedBank(*(Board **)(gLawnApp + 0x9f0)),
        this_05 != (UINewPVPTopZombieQueue *)0x0 && (iVar4 = 0, lVar5 != 0)))) {
      for (; cVar2 = FUN_04c6721c(this_05[0x199]), iVar4 < cVar2; iVar4 = iVar4 + 1) {
        UINewPVPTopZombieQueue::gettItem(this_05,iVar4);
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
        if (bVar1) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          SeedPacket::GetPlantType();
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
          if (bVar1) {
            bVar1 = false;
            uStack_50 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)(lVar5 + 0x178));
            auStack_48[0] =
                 std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x178));
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&uStack_50,
                                      (__normal_iterator *)auStack_48), bVar3) {
              uVar7 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_50);
              FUN_05475d88(asStack_58,uVar7);
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
              cVar2 = std::operator==(asStack_58,(string *)(lVar6 + 8));
              if (cVar2 != '\0') {
                bVar1 = true;
              }
              std::string::~string(asStack_58);
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_50);
            }
            if (bVar1) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
              goto LAB_04c69374;
            }
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          goto LAB_04c693a0;
        }
LAB_04c69374:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
    }
    uStack_2c = 1;
    cVar2 = IsHardMode();
  }
  if (cVar2 == '\0') {
    PlayerInfo::SavePvZ1NormalLevelFinishInfoForAchievement
              (this_00,(PvZ1LevelCompleteInfo *)&iStack_30);
  }
  else {
    PlayerInfo::SavePvZ1HardLevelFinishInfoForAchievement
              (this_00,(PvZ1LevelCompleteInfo *)&iStack_30);
  }
  this = gMessageRouter;
  bVar1 = (bool)IsHardMode();
  MessageRouter::Post<int,bool,int,bool>((MessageRouter *)this,Message::PvZ1FinishLevel,uVar8,bVar1)
  ;
  HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)&iStack_30);
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetMainModeText(int, bool) */

void PVZ1ModeUtils::GetMainModeText(int param_1,bool param_2)

{
  PVZ1ModeUtils *this;
  LevelUtils *this_00;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  WaveManagerInfo *pWVar4;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  WaveManagerInfo aWStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  GetCurrentLevel(this);
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar1 = LevelUtils::GetLevelInfo(this_00,asStack_48);
  uVar2 = FUN_0547429c(asStack_48);
  Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeUtils::GetMainModeText level = %s",uVar2);
  if (lVar1 != 0) {
    Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeUtils::GetMainModeText levelinfo is ok");
    std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::vector
              ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)&local_40,
               (vector *)(lVar1 + 0x210));
    uVar3 = FUN_04c67230(local_40,local_38);
    if ((uVar3 != 0) && ((ulong)(long)param_1 < uVar3)) {
      Sexy::OutputDebugStrF((wchar_t *)"PVZ1ModeUtils::GetMainModeText check info");
      pWVar4 = (WaveManagerInfo *)FUN_04c6723c(local_40,(long)param_1);
      WaveManagerInfo::WaveManagerInfo(aWStack_28,pWVar4);
      thunk_FUN_05477b9c();
      WaveManagerInfo::~WaveManagerInfo(aWStack_28);
    }
    std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::~vector
              ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)&local_40);
  }
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetMainModeDesc(int, bool) */

void PVZ1ModeUtils::GetMainModeDesc(int param_1,bool param_2)

{
  PVZ1ModeUtils *this;
  LevelUtils *this_00;
  long lVar1;
  ulong uVar2;
  WaveManagerInfo *pWVar3;
  string asStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  WaveManagerInfo aWStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178();
  nop();
  GetCurrentLevel(this);
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar1 = LevelUtils::GetLevelInfo(this_00,asStack_48);
  if (lVar1 != 0) {
    std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::vector
              ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)&local_40,
               (vector *)(lVar1 + 0x210));
    uVar2 = FUN_04c67230(local_40,local_38);
    if ((uVar2 != 0) && ((ulong)(long)param_1 < uVar2)) {
      pWVar3 = (WaveManagerInfo *)FUN_04c6723c(local_40);
      WaveManagerInfo::WaveManagerInfo(aWStack_28,pWVar3);
      thunk_FUN_05477b9c();
      WaveManagerInfo::~WaveManagerInfo(aWStack_28);
    }
    std::vector<WaveManagerInfo,std::allocator<WaveManagerInfo>>::~vector
              ((vector<WaveManagerInfo,std::allocator<WaveManagerInfo>> *)&local_40);
  }
  std::string::~string(asStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelChallengeDesc(int) */

void __thiscall PVZ1ModeUtils::GetCurrentLevelChallengeDesc(PVZ1ModeUtils *this,int param_1)

{
  LevelUtils *this_00;
  long lVar1;
  vector *pvVar2;
  ulong uVar3;
  string asStack_40 [8];
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  PVZ1ModeUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  lVar1 = LevelUtils::GetLevelInfo(this_00,asStack_40);
  if (lVar1 != 0) {
    std::
    vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
    ::vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
              *)local_38,(vector *)(lVar1 + 0x1f8));
    pvVar2 = (vector *)FUN_04c6731c(local_38[0]);
    std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::vector
              ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20,pvVar2);
    uVar3 = FUN_04c672a4(local_20,local_18);
    if ((uVar3 != 0) && ((ulong)(long)(int)this < uVar3)) {
      FUN_04c672b0(local_20);
      FUN_05477b24();
      std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>::~vector
                ((vector<ChallengeInfo,std::allocator<ChallengeInfo>> *)&local_20);
      std::
      vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
      ::~vector((vector<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>,std::allocator<std::vector<ChallengeInfo,std::allocator<ChallengeInfo>>>>
                 *)local_38);
      goto LAB_04c6982c;
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
LAB_04c6982c:
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1ModeUtils::GetLevelChallengeChoose() */

void __thiscall PVZ1ModeUtils::GetLevelChallengeChoose(PVZ1ModeUtils *this)

{
  PVZ1ModeNetworkMgr *this_00;
  vector *pvVar1;
  vector<bool,std::allocator<bool>> *in_x8;
  
  this_00 = (PVZ1ModeNetworkMgr *)Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
  pvVar1 = (vector *)PVZ1ModeNetworkMgr::GetChooseChallengeList(this_00);
  std::vector<bool,std::allocator<bool>>::vector(in_x8,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetPlantBannedList(std::vector<std::string, std::allocator<std::string > >&) */

void PVZ1ModeUtils::GetPlantBannedList(vector *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = PVZ1ModePropertySheet::GetProperties();
  if (lVar2 != 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x160));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x160));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      FUN_05475d88(asStack_20,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_20);
      std::string::~string(asStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetPvZ1PlantList(std::vector<std::string, std::allocator<std::string > >&) */

void PVZ1ModeUtils::GetPvZ1PlantList(vector *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = PVZ1ModePropertySheet::GetProperties();
  if (lVar2 != 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x178));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x178));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      FUN_05475d88(asStack_20,uVar3);
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,asStack_20);
      std::string::~string(asStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetPlantBannedList(std::vector<int, std::allocator<int> >&) */

void PVZ1ModeUtils::GetPlantBannedList(vector *param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  NameMapperBase *this;
  int local_24;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = PVZ1ModePropertySheet::GetProperties();
  if (lVar2 != 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar2 + 0x160));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar2 + 0x160));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      FUN_05475d88(asStack_20,uVar3);
      this = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      local_24 = NameMapperBase::GetIdForName(this,asStack_20);
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)param_1,&local_24);
      std::string::~string(asStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::GetCurrentLevelFinalBonus(bool, bool) */

void __thiscall
PVZ1ModeUtils::GetCurrentLevelFinalBonus(PVZ1ModeUtils *this,bool param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  bool extraout_w1;
  bool extraout_w1_00;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  PVZ1ModeUtils *pPVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  int local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60 [5];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  pPVar12 = (PVZ1ModeUtils *)((ulong)this & 0xff);
  local_8 = ___stack_chk_guard;
  GetCurrentLevelBonus(pPVar12,SUB81(___stack_chk_guard,0));
  GetCurrentLevelFirstRewardBonus(pPVar12,extraout_w1);
  pPVar12 = (PVZ1ModeUtils *)GetCurrentLevelChallengeBonus(pPVar12,extraout_w1_00);
  GetLevelChallengeChoose(pPVar12);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  uVar11 = local_90;
  if (param_1) {
    iVar3 = FUN_04c67244(local_90,local_88);
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        piVar5 = (int *)FUN_04c67258(uVar11,lVar7);
        puVar6 = (undefined4 *)
                 std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                 operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            amStack_38,piVar5);
        uVar11 = local_90;
        lVar10 = lVar7 + 1;
        lVar7 = FUN_04c67258(local_90,lVar7);
        *puVar6 = *(undefined4 *)(lVar7 + 4);
        lVar7 = lVar10;
      } while ((int)lVar10 < iVar3);
    }
  }
  uVar11 = local_a8;
  iVar3 = FUN_04c67244(local_a8,local_a0);
  lVar7 = 0;
  if (0 < iVar3) {
    do {
      piVar5 = (int *)FUN_04c67258(uVar11,lVar7);
      puVar6 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          amStack_38,piVar5);
      uVar11 = local_a8;
      lVar10 = lVar7 + 1;
      lVar7 = FUN_04c67258(local_a8,lVar7);
      *puVar6 = *(undefined4 *)(lVar7 + 4);
      lVar7 = lVar10;
    } while ((int)lVar10 < iVar3);
  }
  iVar3 = FUN_04c67264(local_78,local_70);
  if (0 < iVar3) {
    uVar14 = 0;
    do {
      uVar8 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)local_60);
      if (uVar14 < uVar8) {
        auVar15 = FUN_04c67380(local_60[0],uVar14);
        local_b8 = auVar15;
        bVar2 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_b8);
        uVar11 = local_78;
        if (bVar2) {
          puVar9 = (undefined8 *)FUN_04c67278(local_78,uVar14);
          uVar13 = *puVar9;
          iVar4 = FUN_04c67284(uVar13,puVar9[1]);
          if (0 < iVar4) {
            lVar7 = 0;
            while( true ) {
              piVar5 = (int *)FUN_04c67298(uVar13,lVar7);
              local_c4 = *piVar5;
              puVar9 = (undefined8 *)FUN_04c67278(uVar11,uVar14);
              lVar10 = FUN_04c67298(*puVar9,lVar7);
              iVar1 = *(int *)(lVar10 + 4);
              local_c0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                         find((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)amStack_38,&local_c4);
              uVar11 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)amStack_38);
              local_b8._0_8_ = uVar11;
              bVar2 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
              if (bVar2) {
                piVar5 = (int *)std::
                                map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                              *)amStack_38,&local_c4);
                *piVar5 = *piVar5 + iVar1;
              }
              else {
                piVar5 = (int *)std::
                                map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                              *)amStack_38,&local_c4);
                *piVar5 = iVar1;
              }
              uVar11 = local_78;
              lVar7 = lVar7 + 1;
              if (iVar4 <= (int)lVar7) break;
              puVar9 = (undefined8 *)FUN_04c67278(local_78,uVar14);
              uVar13 = *puVar9;
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar3);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_c0 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        amStack_38);
  while( true ) {
    uVar11 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)amStack_38);
    local_b8._0_8_ = uVar11;
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_c0,(rbtree_iterator *)local_b8);
    if (!bVar2) break;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)local_b8);
    puVar6 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                       ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0);
    local_b8._0_4_ = *puVar6;
    lVar7 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0);
    local_b8._4_4_ = *(undefined4 *)(lVar7 + 4);
    std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::push_back
              ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)in_x8,
               (S2C_BonusInfo *)local_b8);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c0);
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_38);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_60);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)&local_78);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_90);
  std::vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>>::~vector
            ((vector<PVZ1ModeLevelBonusData,std::allocator<PVZ1ModeLevelBonusData>> *)&local_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::ShowHowToPlay(PVZ1_HOW_TO_PLAY_TYPE) */

void PVZ1ModeUtils::ShowHowToPlay(int param_1)

{
  long lVar1;
  AdaptorPVZ1ModeHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x10));
    }
    else if (param_1 == 1) {
      HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x40));
    }
    else if (param_1 == 2) {
      HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x70));
    }
    this = ::operator_new(0x1a8);
    memset(this,0,0x1a8);
    AdaptorPVZ1ModeHowToPlayScreen::AdaptorPVZ1ModeHowToPlayScreen(this);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::CompleteTutorial() */

void PVZ1ModeUtils::CompleteTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  char *__s;
  TGALogMgr *this_01;
  size_t in_x2;
  DString aDStack_68 [16];
  TGAPVZ1ModeData aTStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::SetPVZ1ModeTutorialFinished(this_00,true);
  TGAPVZ1ModeData::TGAPVZ1ModeData(aTStack_58);
  DString::DString(aDStack_68,7);
  __s = (char *)DString::c_str(aDStack_68);
  std::string::append((string *)aTStack_58,__s,in_x2);
  DString::~DString(aDStack_68);
  this_01 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this_01,aTStack_58);
  TGAPVZ1ModeData::~TGAPVZ1ModeData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1ModeUtils::EnterTutorial() */

void PVZ1ModeUtils::EnterTutorial(void)

{
  GameStateMgr *pGVar1;
  char *__s;
  TGALogMgr *this;
  string *__n;
  DString aDStack_68 [16];
  string asStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04c67320(gGameStateMgr + 0x1eb1);
  pGVar1 = gGameStateMgr;
  std::string::string(asStack_58,"pvz1_tutorial_1");
  __n = asStack_58;
  GameStateMgr::StartLevel(pGVar1,&DAT_06b93db8,asStack_58,0xffffffff,1,1,0);
  std::string::~string(asStack_58);
  nop();
  TGAPVZ1ModeData::TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  DString::DString(aDStack_68,6);
  __s = (char *)DString::c_str(aDStack_68);
  std::string::append(asStack_58,__s,(size_t)__n);
  DString::~DString(aDStack_68);
  this = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPVZ1Mode(this,(TGAPVZ1ModeData *)asStack_58);
  TGAPVZ1ModeData::~TGAPVZ1ModeData((TGAPVZ1ModeData *)asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

