// Class: PlantWarsUtils


/* PlantWarsUtils::GoToPlantWarsMainMenu() */

void PlantWarsUtils::GoToPlantWarsMainMenu(void)

{
  GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::ShowTipsDialog(std::string, std::string) */

void PlantWarsUtils::ShowTipsDialog(string *param_1,string *param_2)

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
    StringHelper::ToStringValue(param_1);
    StringHelper::ToStringValue(param_2);
    TodStringTranslate(L"[BUTTON_OK]");
    UIMessageBox::SetMessage(this,awStack_20,awStack_28);
    std::string::string(asStack_10,"IMAGE_UI_DIALOG_ASSET_BG_LIGHT_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_10,false);
    UIMessageBox::SetBackground(this,pIVar1);
    std::string::~string(asStack_10);
    nop();
    lVar2 = UIMessageBox::GetButtonCancel(this);
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

void PlantWarsUtils::ShowHowToPlay(void)

{
  long lVar1;
  AdaptorPlantWarsHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  if (lVar1 != 0) {
    HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x130));
    this = ::operator_new(0x1a8);
    memset(this,0,0x1a8);
    AdaptorPlantWarsHowToPlayScreen::AdaptorPlantWarsHowToPlayScreen(this);
    HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  }
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PlantWarsUtils::ShowHowToPlay(void)

{
  long lVar1;
  AdaptorPlantWarsHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  if (lVar1 != 0) {
    HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x130));
    this = ::operator_new(0x1a8);
    memset(this,0,0x1a8);
    AdaptorPlantWarsHowToPlayScreen::AdaptorPlantWarsHowToPlayScreen(this);
    HowToPlayScreen::SetData((HowToPlayScreen *)this,aHStack_38);
    HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  }
  HowToPlayScreenData::~HowToPlayScreenData(aHStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsUtils::IsInPlantWarsWorldMap() */

undefined8 PlantWarsUtils::IsInPlantWarsWorldMap(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  if ((lVar1 != 0) && (lVar1 = FUN_04d9cf68(*(undefined8 *)(lVar1 + 0x2f0)), lVar1 != 0)) {
    uVar2 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar1 + 0x38));
    return uVar2;
  }
  return 0;
}


/* PlantWarsUtils::IsInQueuedPlantWarsWorldMap() */

void PlantWarsUtils::IsInQueuedPlantWarsWorldMap(void)

{
  long lVar1;
  
  lVar1 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
  if (lVar1 != 0) {
    lVar1 = FUN_04d9cf60(*(undefined8 *)(lVar1 + 0xe8));
    WorldMapUtils::IsPlantWarsWorld((string *)(lVar1 + 0x38));
    return;
  }
  return;
}


/* PlantWarsUtils::IsOffSeason() */

void PlantWarsUtils::IsOffSeason(void)

{
  GridItemCardGameZombieAction *this;
  
  this = (GridItemCardGameZombieAction *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  GridItemCardGameZombieAction::IsDone(this);
  return;
}


/* PlantWarsUtils::GetCurrentWorldId() */

void PlantWarsUtils::GetCurrentWorldId(void)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetCurrentWorldId(this);
  return;
}


/* PlantWarsUtils::GetCurrentLevel() */

void __thiscall PlantWarsUtils::GetCurrentLevel(PlantWarsUtils *this)

{
  Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetCurrentLevel();
  return;
}


/* PlantWarsUtils::GetCurfentLevelIndex() */

void PlantWarsUtils::GetCurfentLevelIndex(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d9cf6c(*(undefined4 *)(lVar1 + 0xf8));
  return;
}


/* PlantWarsUtils::GetLevelTotalScore(int) */

void PlantWarsUtils::GetLevelTotalScore(int param_1)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTotalScore(this,param_1);
  return;
}


/* PlantWarsUtils::GetLevelScore(int, int) */

void PlantWarsUtils::GetLevelScore(int param_1,int param_2)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelScore(this,param_1,param_2);
  return;
}


/* PlantWarsUtils::GetLevelTargetScore(int, int) */

void PlantWarsUtils::GetLevelTargetScore(int param_1,int param_2)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTargetScore(this,param_1,param_2);
  return;
}


/* PlantWarsUtils::GetLevelTargetTotalScore(int) */

void PlantWarsUtils::GetLevelTargetTotalScore(int param_1)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTargetTotalScore(this,param_1);
  return;
}


/* PlantWarsUtils::GetLevelTargetStatus(int) */

void PlantWarsUtils::GetLevelTargetStatus(int param_1)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTargetStatus(this,param_1);
  return;
}


/* PlantWarsUtils::SetCurrentLevelNodeScore(int) */

void PlantWarsUtils::SetCurrentLevelNodeScore(int param_1)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::SetCurrentLevelNodeScore(this,param_1);
  return;
}


/* PlantWarsUtils::GetCurrentLevelScoreList(std::vector<int, std::allocator<int> >&) */

void PlantWarsUtils::GetCurrentLevelScoreList(vector *param_1)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetCurrentLevelScoreList(this,param_1);
  return;
}


/* PlantWarsUtils::GetLevelTargetStarInfoScore(int, int) */

void PlantWarsUtils::GetLevelTargetStarInfoScore(int param_1,int param_2)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetLevelTargetStarInfoScore(this,param_1,param_2);
  return;
}


/* PlantWarsUtils::GoToNextLevel() */

void PlantWarsUtils::GoToNextLevel(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d9cfac(lVar1 + 0x118);
  Board::Quit(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PlantWarsUtils::SetResultType(PlantWarsResultType) */

void PlantWarsUtils::SetResultType(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d9cf78(lVar1 + 0x11c,param_1);
  return;
}


/* PlantWarsUtils::IsWonResult() */

bool PlantWarsUtils::IsWonResult(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = FUN_04d9cf80(*(undefined4 *)(lVar2 + 0x11c));
  return iVar1 != 1;
}


/* PlantWarsUtils::GetResultType() */

void PlantWarsUtils::GetResultType(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_04d9cf80(*(undefined4 *)(lVar1 + 0x11c));
  return;
}


/* PlantWarsUtils::ClearNode(int, int) */

void PlantWarsUtils::ClearNode(int param_1,int param_2)

{
  PlantWarsNetworkMgr *this;
  
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::ClearNode(this,param_1,param_2);
  return;
}


/* PlantWarsUtils::GetNodePlantPackets(int, int) */

void __thiscall PlantWarsUtils::GetNodePlantPackets(PlantWarsUtils *this,int param_1,int param_2)

{
  PlantWarsNetworkMgr *this_00;
  
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetNodePlantPackets(this_00,(int)this,param_1);
  return;
}


/* PlantWarsUtils::GetNodePlantPacket(int, int, int) */

void __thiscall
PlantWarsUtils::GetNodePlantPacket(PlantWarsUtils *this,int param_1,int param_2,int param_3)

{
  PlantWarsNetworkMgr *this_00;
  
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetNodePlantPacket(this_00,(int)this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GetWorldMapScoreString(int) */

void __thiscall PlantWarsUtils::GetWorldMapScoreString(PlantWarsUtils *this,int param_1)

{
  int iVar1;
  PlantWarsNetworkMgr *this_00;
  undefined1 auStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = PlantWarsNetworkMgr::GetLevelTotalScore(this_00,(int)this);
  FUN_05478178(awStack_10,L"[PLANTWARS_WORLD_SCORE_DESC]",auStack_18);
  TodReplaceNumberString(awStack_10,L"{NUMS}",iVar1);
  FUN_05476c50(awStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GoToPlantWarsWorldMap(std::string const&) */

void PlantWarsUtils::GoToPlantWarsWorldMap(string *param_1)

{
  PlantWarsNetworkMgr *pPVar1;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(apStack_30,param_1);
  FUN_04d9d158(afStack_28,apStack_30);
  PlantWarsNetworkMgr::RequestMainEntryData(pPVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::CalcNodeType(std::string) */

void PlantWarsUtils::CalcNodeType(undefined8 param_1)

{
  undefined4 uVar1;
  PlantWarsNetworkMgr *pPVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_10,param_1);
  uVar1 = PlantWarsNetworkMgr::CalcNodeType(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GetLeaderBoardBonusCurrentIndex() */

void PlantWarsUtils::GetLeaderBoardBonusCurrentIndex(void)

{
  undefined4 uVar1;
  PlantWarsNetworkMgr *pPVar2;
  undefined8 uVar3;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  uVar3 = PlantWarsNetworkMgr::GetPrefixWorld(pPVar2);
  FUN_05475d88(asStack_18,uVar3);
  pPVar2 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = PlantWarsNetworkMgr::GetLeaderBoardBonusCurrentIndex(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::AddNodePlant(int, int, std::string) */

void PlantWarsUtils::AddNodePlant(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  PlantWarsNetworkMgr *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_10,param_3);
  PlantWarsNetworkMgr::AddNodePlant(pPVar1,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::DeleteNodePlant(int, int, std::string) */

void PlantWarsUtils::DeleteNodePlant(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  PlantWarsNetworkMgr *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  FUN_05475d88(asStack_10,param_3);
  PlantWarsNetworkMgr::DeleteNodePlant(pPVar1,param_1,param_2,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWarsUtils::HasCompleteTutorial() */

void PlantWarsUtils::HasCompleteTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::PlayerHasCompletedTutorial(pPVar1,0x52);
  return;
}


/* PlantWarsUtils::IsPlayingPlantWarsTutorial() */

bool PlantWarsUtils::IsPlayingPlantWarsTutorial(void)

{
  int iVar1;
  ProfileMgr *this;
  long lVar2;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this);
  iVar1 = FUN_04d9cf64(*(undefined4 *)(lVar2 + 0x40));
  return iVar1 == 0x52;
}


/* PlantWarsUtils::FinishPlantWarsTutorial() */

void PlantWarsUtils::FinishPlantWarsTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *pPVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::CompleteTutorial(pPVar1,0x52);
  return;
}


/* PlantWarsUtils::IsPlayingPlantWarsLevel() */

undefined1 PlantWarsUtils::IsPlayingPlantWarsLevel(void)

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
      bVar1 = Sexy::RtObject::IsA<PlantWarsOutroProperties>(this);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GetWorldIndexOfLevel(std::string) */

void PlantWarsUtils::GetWorldIndexOfLevel(string *param_1)

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
  if ((lVar3 != 0) && (lVar3 = FUN_04d9cf68(*(undefined8 *)(lVar3 + 0x2f0)), lVar3 != 0)) {
    thunk_FUN_05475e00(asStack_28,lVar3 + 0x38);
  }
  uVar4 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"PlantWars get world index of level %s",uVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  cVar1 = WorldMapUtils::GetOrderedMainSpinePath(asStack_28,(vector *)&local_20);
  if (cVar1 == '\0') {
LAB_04d9db2c:
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = 0xffffffff;
    lVar5 = FUN_04d9cf84(local_20,local_18);
    lVar3 = 0;
    do {
      if (lVar3 == lVar5) goto LAB_04d9db2c;
      plVar6 = (long *)FUN_04d9cf90(local_20,lVar3);
      lVar7 = *plVar6;
      iVar2 = FUN_04d9cf5c(*(undefined4 *)(lVar7 + 0x14));
      if (iVar2 == 1) {
        uVar8 = uVar8 + 1;
      }
      cVar1 = std::operator==((string *)(lVar7 + 0x20),param_1);
      lVar3 = lVar3 + 1;
    } while (cVar1 == '\0');
    Sexy::OutputDebugStrF((wchar_t *)"PlantWars get world index of level index : %d",(ulong)uVar8);
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
/* PlantWarsUtils::GetCurrentWorldLevelIndex() */

void PlantWarsUtils::GetCurrentWorldLevelIndex(void)

{
  ulong uVar1;
  undefined8 uVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  PlantWarsUtils *local_8;
  
  local_8 = ___stack_chk_guard;
  GetCurrentLevel(___stack_chk_guard);
  FUN_05475d88(asStack_10,asStack_18);
  uVar1 = GetWorldIndexOfLevel(asStack_10);
  std::string::~string(asStack_10);
  uVar2 = FUN_0547429c(asStack_18);
  Sexy::OutputDebugStrF
            ((wchar_t *)"PlantWarsUtils::GetCurrentWorldLevelIndex level = %s, index = %d",uVar2,
             uVar1 & 0xffffffff);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::ShowLevelSetupScreen(MapEventItem*, Sexy::Delegate1<std::string const&> const&)
    */

void PlantWarsUtils::ShowLevelSetupScreen(MapEventItem *param_1,Delegate1 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  string *psVar3;
  long lVar4;
  PlantWarsLevelSelectManager *this;
  PlantWarsLevelSelectUI *pPVar5;
  string asStack_40 [8];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (MapEventItem *)0x0) {
    uVar2 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    psVar3 = (string *)
             Sexy::FilesystemSaveGameContext::GetBuffer((FilesystemSaveGameContext *)param_1);
    FUN_05475d88(asStack_40,psVar3);
    PlantWarsNetworkMgr::SetCurrentLevel(uVar2,asStack_40);
    std::string::~string(asStack_40);
    uVar1 = GetCurrentWorldLevelIndex();
    lVar4 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    FUN_04d9cf70(lVar4 + 0xf8,uVar1);
    this = (PlantWarsLevelSelectManager *)
           Sexy::LazySingleton<PlantWarsLevelSelectManager>::GetInstancePtr();
    pPVar5 = (PlantWarsLevelSelectUI *)PlantWarsLevelSelectManager::ShowLevelSelectUI(this,psVar3);
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38,param_2);
    PlantWarsLevelSelectUI::SetStartLevelCallBack(pPVar5,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GetTgaLogPlantPacketsStr(int) */

void PlantWarsUtils::GetTgaLogPlantPacketsStr(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  PlantWarsNetworkMgr *pPVar4;
  ulong uVar5;
  NameMapperBase *pNVar6;
  string *psVar7;
  undefined8 uVar8;
  ulong uVar9;
  string asStack_1b0 [8];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  iVar1 = FUN_04d9cf6c(*(undefined4 *)(lVar3 + 0xf8));
  pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetNodePlantPackets(pPVar4,iVar1,0);
  pPVar4 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsNetworkMgr::GetNodePlantPackets(pPVar4,iVar1,1);
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  std::string::string(asStack_1b0,"");
  FUN_05462980(auStack_178,asStack_1b0);
  std::string::~string(asStack_1b0);
  nop();
  uVar9 = 0;
  while( true ) {
    uVar5 = FUN_04d9cf98(local_1a8,local_1a0);
    if (uVar5 <= uVar9) break;
    pNVar6 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    psVar7 = (string *)FUN_04d9cfa4(local_1a8,uVar9);
    uVar2 = NameMapperBase::GetIdForName(pNVar6,psVar7);
    uVar8 = FUN_0546065c(auStack_168,uVar2);
    FUN_054603b8(uVar8,&DAT_05690e40);
    uVar9 = uVar9 + 1;
  }
  uVar9 = 0;
  while( true ) {
    uVar5 = FUN_04d9cf98(local_190,local_188);
    if (uVar5 <= uVar9) break;
    pNVar6 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
    psVar7 = (string *)FUN_04d9cfa4(local_190,uVar9);
    uVar2 = NameMapperBase::GetIdForName(pNVar6,psVar7);
    uVar8 = FUN_0546065c(auStack_168,uVar2);
    FUN_054603b8(uVar8,&DAT_05690e48);
    uVar9 = uVar9 + 1;
  }
  FUN_05462824(auStack_178);
  FUN_054617bc(auStack_178);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_190);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_1a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::RequestEndPlayData(std::vector<int, std::allocator<int> >) */

void PlantWarsUtils::RequestEndPlayData
               (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  PlantWarsNetworkMgr *pPVar6;
  float fVar7;
  string asStack_90 [8];
  undefined4 local_88;
  int local_84;
  vector<int,std::allocator<int>> avStack_80 [24];
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  avStack_68 [24];
  int local_50;
  string asStack_48 [64];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)&local_88);
  uVar1 = GetCurfentLevelIndex();
  Sexy::OutputDebugStrF((wchar_t *)"PlantWarsUtils::RequestEndPlayData");
  lVar4 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  FUN_05475d88(asStack_90,lVar4 + 0xb0);
  FUN_05475d88(asStack_48,asStack_90);
  iVar2 = CalcNodeType(asStack_48);
  std::string::~string(asStack_48);
  local_88 = GetCurrentWorldId();
  local_84 = uVar1 + 1;
  std::vector<int,std::allocator<int>>::clear(avStack_80);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_1);
  iVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_1);
  std::vector<int,std::allocator<int>>::
  assign<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,void>
            (avStack_80,uVar5);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::clear(avStack_68);
  GetNodePlantPackets((PlantWarsUtils *)(ulong)uVar1,0,iVar3);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(avStack_68,(vector *)asStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_48);
  GetNodePlantPackets((PlantWarsUtils *)(ulong)uVar1,1,iVar3);
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::push_back(avStack_68,(vector *)asStack_48);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_48);
  if (iVar2 == 0) {
    pPVar6 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    fVar7 = (float)PlantWarsNetworkMgr::GetLevelTime(pPVar6,uVar1,0);
  }
  else {
    pPVar6 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
    fVar7 = (float)PlantWarsNetworkMgr::GetLevelTime(pPVar6,uVar1);
  }
  local_50 = (int)(fVar7 * 1000.0);
  pPVar6 = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  PlantWarsEndPlayParamData::PlantWarsEndPlayParamData
            ((PlantWarsEndPlayParamData *)asStack_48,(PlantWarsEndPlayParamData *)&local_88);
  PlantWarsNetworkMgr::RequestEndPlayData(pPVar6,asStack_48);
  PlantWarsEndPlayParamData::~PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)asStack_48);
  std::string::~string(asStack_90);
  PlantWarsEndPlayParamData::~PlantWarsEndPlayParamData((PlantWarsEndPlayParamData *)&local_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::GetCurrentWorldStarCount() */

void PlantWarsUtils::GetCurrentWorldStarCount(void)

{
  PlantWarsNetworkMgr *this;
  PlantWarsWorldData *pPVar1;
  PlantWarsWorldData aPStack_a8 [128];
  undefined4 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlantWarsNetworkMgr *)Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
  pPVar1 = (PlantWarsWorldData *)PlantWarsNetworkMgr::GetCurrentWorldData(this);
  PlantWarsWorldData::PlantWarsWorldData(aPStack_a8,pPVar1);
  PlantWarsWorldData::~PlantWarsWorldData(aPStack_a8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWarsUtils::ShowHowToPlay() */

void PlantWarsUtils::ShowHowToPlay(void)

{
  long lVar1;
  AdaptorPlantWarsHowToPlayScreen *this;
  HowToPlayScreenData aHStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HowToPlayScreenData::HowToPlayScreenData(aHStack_38);
  lVar1 = PVZ1ModePropertySheet::GetProperties();
  if (lVar1 != 0) {
    HowToPlayScreenData::operator=(aHStack_38,(HowToPlayScreenData *)(lVar1 + 0x130));
    this = ::operator_new(0x1a8);
    memset(this,0,0x1a8);
    AdaptorPlantWarsHowToPlayScreen::AdaptorPlantWarsHowToPlayScreen(this);
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

