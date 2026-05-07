// Class: PVZCheats


/* PVZCheats::ResetAchievements() */

void PVZCheats::ResetAchievements(void)

{
  nop();
  return;
}


/* PVZCheats::CheatDrawGraphicsInfo(bool) */

void PVZCheats::CheatDrawGraphicsInfo(bool param_1)

{
  if (*(long *)(Sexy::gSexyAppBase + 0x10) != 0) {
    *(bool *)(*(long *)(Sexy::gSexyAppBase + 0x10) + 0x181) = param_1;
  }
  return;
}


/* PVZCheats::CheatDrawGlyphCache(bool) */

void PVZCheats::CheatDrawGlyphCache(bool param_1)

{
  *(bool *)(gLawnApp + 0x299b) = param_1;
  return;
}


/* PVZCheats::CheatDrawTextRects(bool) */

void PVZCheats::CheatDrawTextRects(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::PrimeText::Instance();
  FUN_043d1910(lVar1 + 0x20,param_1);
  return;
}


/* PVZCheats::CloseSales() */

void PVZCheats::CloseSales(void)

{
  LawnApp::KillSalesUI(gLawnApp);
  return;
}


/* PVZCheats::CheatChildrenDayNextItem() */

void PVZCheats::CheatChildrenDayNextItem(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PVZCheats::CheatBoardDebugMode() */

void PVZCheats::CheatBoardDebugMode(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) + 1;
  if (6 < iVar1) {
    iVar1 = 0;
  }
  *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x8fc) = iVar1;
  return;
}


/* PVZCheats::CheatShowPlantID(bool) */

void PVZCheats::CheatShowPlantID(bool param_1)

{
  *(bool *)(gLawnApp + 0x2a00) = param_1;
  return;
}


/* PVZCheats::CheatPauseButton() */

void PVZCheats::CheatPauseButton(void)

{
  LawnApp::DoNewOptions(gLawnApp,true,false);
  return;
}


/* PVZCheats::CheatEasyPlanting(bool) */

void PVZCheats::CheatEasyPlanting(bool param_1)

{
  if (!param_1) {
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PVZCheats::CheatUIDebug(bool) */

void PVZCheats::CheatUIDebug(bool param_1)

{
  gUIDebug = param_1;
  return;
}


/* PVZCheats::CheatSetSpawnZombieLevel(float) */

void PVZCheats::CheatSetSpawnZombieLevel(float param_1)

{
  cheat_spawn_zombie_level = (int)param_1;
  return;
}


/* PVZCheats::CheatSetSpawnZombieRow(float) */

void PVZCheats::CheatSetSpawnZombieRow(float param_1)

{
  cheat_spawn_zombie_row = (int)param_1;
  return;
}


/* PVZCheats::CheatKillAllZombies() */

void PVZCheats::CheatKillAllZombies(void)

{
  Board::DestroyAllZombies(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* PVZCheats::CheatCannonFailure() */

void PVZCheats::CheatCannonFailure(void)

{
  nop();
  return;
}


/* PVZCheats::CheatRandomPlants() */

void PVZCheats::CheatRandomPlants(void)

{
  Board::RandFillToCol(*(Board **)(gLawnApp + 0x9f0),*(int *)(*(Board **)(gLawnApp + 0x9f0) + 0xf8))
  ;
  return;
}


/* PVZCheats::CheatGive100Sun() */

void PVZCheats::CheatGive100Sun(void)

{
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),100);
  return;
}


/* PVZCheats::CheatGiveLotsOfSun() */

void PVZCheats::CheatGiveLotsOfSun(void)

{
  Board::AddSunMoney(*(Board **)(gLawnApp + 0x9f0),999999);
  return;
}


/* PVZCheats::CheatKillAllPlants() */

void PVZCheats::CheatKillAllPlants(void)

{
  Board::DestroyAllPlants();
  return;
}


/* PVZCheats::CheatZombieFailure() */

void PVZCheats::CheatZombieFailure(void)

{
  Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),1);
  return;
}


/* PVZCheats::CheatBoardPause() */

void PVZCheats::CheatBoardPause(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* PVZCheats::CheatAdd50NationalMat() */

void PVZCheats::CheatAdd50NationalMat(void)

{
  (**(code **)(*gLawnApp + 0x350))(gLawnApp,1);
  return;
}


/* PVZCheats::CheatResetActivityTimes() */

void PVZCheats::CheatResetActivityTimes(void)

{
  LocalProfileSaveData::SetHeroPlantArmorflameIntroStatus(false);
  return;
}


/* PVZCheats::CheatCrash() */

void PVZCheats::CheatCrash(void)

{
  code *pcVar1;
  
  uRam0000000000000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1000,0x43d24e0);
  (*pcVar1)();
}


/* PVZCheats::CheatLogGroups() */

void PVZCheats::CheatLogGroups(void)

{
  LawnApp::LogGroupLoadCounts(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaPlant1() */

void PVZCheats::CheatArenaPlant1(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 0;
  std::string::string(asStack_10,"arena_plant_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaPlant2() */

void PVZCheats::CheatArenaPlant2(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 1;
  std::string::string(asStack_10,"arena_plant_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaPlant3() */

void PVZCheats::CheatArenaPlant3(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 2;
  std::string::string(asStack_10,"arena_plant_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaBattle1() */

void PVZCheats::CheatArenaBattle1(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 0;
  std::string::string(asStack_10,"arena_battle_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaBattle2() */

void PVZCheats::CheatArenaBattle2(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 1;
  std::string::string(asStack_10,"arena_battle_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaBattle3() */

void PVZCheats::CheatArenaBattle3(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(gLawnApp + 0x2a0c) = 2;
  std::string::string(asStack_10,"arena_battle_test");
  nop();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b05388,asStack_10,0xffffffff,1,1,0);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatPVPTutorial(bool) */

void PVZCheats::CheatPVPTutorial(bool param_1)

{
  char cVar1;
  PlayerInfo *pPVar2;
  
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  if (!param_1) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x28);
    if (cVar1 == '\0') {
      return;
    }
    FUN_043d1944(pPVar2 + 0x1100,1);
    return;
  }
  cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x28);
  if (cVar1 != '\0') {
    FUN_043d1944(pPVar2 + 0x1100,0xb);
    return;
  }
  PlayerInfo::SetActiveTutorial(pPVar2,0x28);
  PlayerInfo::CompleteTutorial(pPVar2,0x28);
  FUN_043d1944(pPVar2 + 0x1100,0xb);
  return;
}


/* PVZCheats::CheatLuaExecute() */

void PVZCheats::CheatLuaExecute(void)

{
  LawnApp::TestLuaExecute();
  return;
}


/* PVZCheats::CheatLotteryResultUI() */

void PVZCheats::CheatLotteryResultUI(void)

{
  GameStateMgr::ShowActiveCenter(gGameStateMgr,5,5);
  return;
}


/* PVZCheats::CheatTestNewNetworkFunc() */

void PVZCheats::CheatTestNewNetworkFunc(void)

{
  NetworkMgr *this;
  long *plVar1;
  
  this = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this);
  if (*(code **)(*plVar1 + 0x338) != INetworkMsgProcess::RequestRanks) {
    (**(code **)(*plVar1 + 0x338))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSandboxEgypt() */

void PVZCheats::CheatSandboxEgypt(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"sandboxegypt");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSandboxPirate() */

void PVZCheats::CheatSandboxPirate(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"sandboxpirate");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSandboxCowboy() */

void PVZCheats::CheatSandboxCowboy(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"sandboxcowboy");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSandboxFuture() */

void PVZCheats::CheatSandboxFuture(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"sandboxfuture");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatToggleWorldMapEditor(bool) */

void PVZCheats::CheatToggleWorldMapEditor(bool param_1)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::SetEditorEnabled(this,param_1);
  return;
}


/* PVZCheats::CheatIgnoreTutorialInput() */

void PVZCheats::CheatIgnoreTutorialInput(void)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::KillTutorialInput(this);
  return;
}


/* PVZCheats::ShowLottery() */

void PVZCheats::ShowLottery(void)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::SwitchToLottery(this);
  return;
}


/* PVZCheats::ShowGeilivableLottery() */

void PVZCheats::ShowGeilivableLottery(void)

{
  LawnApp::ShowGeilivableLottery(SUB81(gLawnApp,0));
  return;
}


/* PVZCheats::TestBonusUI() */

void PVZCheats::TestBonusUI(void)

{
  LawnApp::ShowBonus(gLawnApp,0x3ea,1);
  return;
}


/* PVZCheats::TestNoNetwork() */

void PVZCheats::TestNoNetwork(void)

{
  LawnApp::ShowNetworkError(gLawnApp);
  return;
}


/* PVZCheats::ShowLostNetActivityUI() */

void PVZCheats::ShowLostNetActivityUI(void)

{
  LawnApp::ShowLostNetActivityUI(gLawnApp);
  return;
}


/* PVZCheats::ShowCBTutorial() */

void PVZCheats::ShowCBTutorial(void)

{
  LawnApp::ShowCBTutorialUI(gLawnApp);
  return;
}


/* PVZCheats::ShowTransGenosis() */

void PVZCheats::ShowTransGenosis(void)

{
  LawnApp::ShowTransGenosisUI(SUB81(gLawnApp,0));
  return;
}


/* PVZCheats::CloseGameMask() */

void PVZCheats::CloseGameMask(void)

{
  long lVar1;
  
  if (gLawnApp != (LawnApp *)0x0) {
    LawnApp::KillGameMaskUI(gLawnApp);
    lVar1 = LawnApp::GetWorldMap(gLawnApp);
    if (lVar1 != 0) {
      FUN_043d1a68(lVar1 + 0x356);
      return;
    }
  }
  return;
}


/* PVZCheats::ClosePVZDialog() */

void PVZCheats::ClosePVZDialog(void)

{
  long lVar1;
  
  if (gLawnApp != (LawnApp *)0x0) {
    LawnApp::KillPVZ2Dialog(gLawnApp);
    lVar1 = LawnApp::GetWorldMap(gLawnApp);
    if (lVar1 != 0) {
      FUN_043d1a68(lVar1 + 0x356);
      return;
    }
  }
  return;
}


/* PVZCheats::CheatForceLoadData() */

void PVZCheats::CheatForceLoadData(void)

{
  int iVar1;
  
  iVar1 = GameStateMgr::GetState(gGameStateMgr);
  if (iVar1 != 4) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::updatePropertySheet() */

void PVZCheats::updatePropertySheet(void)

{
  PVZCachedNetworkTableManager *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"PropertySheets.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,5,0,0);
  std::string::~string(asStack_10);
  nop();
  LawnApp::CheckForNetworkContentChanges(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::updateDropSheet() */

void PVZCheats::updateDropSheet(void)

{
  PVZCachedNetworkTableManager *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"DropItemGroups.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x3e,0,0);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"DropItems.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x3f,0,0);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"PresentTypes.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x11,0,0);
  std::string::~string(asStack_10);
  nop();
  LawnApp::CheckForNetworkContentChanges(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::updatePlantAndZombie() */

void PVZCheats::updatePlantAndZombie(void)

{
  PVZCachedNetworkTableManager *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"PlantTypes.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,6,0,0);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
  std::string::string(asStack_10,"ZombieTypes.json");
  PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,9,0,0);
  std::string::~string(asStack_10);
  nop();
  LawnApp::CheckForNetworkContentChanges(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatTreasureChoose(bool) */

void PVZCheats::CheatTreasureChoose(bool param_1)

{
  if (!param_1) {
    *(undefined4 *)(gLawnApp + 0x2a04) = 0xffffffff;
    return;
  }
  *(undefined4 *)(gLawnApp + 0x2a04) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatShowDailysignWith4399() */

void PVZCheats::CheatShowDailysignWith4399(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"OpenDinosaurDanger");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatDebugCheck() */

DebugCheckUI * PVZCheats::CheatDebugCheck(void)

{
  DebugCheckUI *this;
  char *pcVar1;
  
  if (DebugCheckUI::s_instance != (DebugCheckUI *)0x0) {
    return DebugCheckUI::s_instance;
  }
  this = ::operator_new(0x110);
  DebugCheckUI::DebugCheckUI(this);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Dialog_Open");
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),this);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this);
  LawnApp::PushOverlaysToTop(gLawnApp);
  DebugCheckUI::Check(this);
  DebugCheckUI::s_instance = this;
  return this;
}


/* PVZCheats::CheatAddX() */

void PVZCheats::CheatAddX(void)

{
  gCheat_X = gCheat_X + 1.0;
  Sexy::OutputDebugStrF((wchar_t *)"gCheat_X:[%f] \n",(double)gCheat_X);
  return;
}


/* PVZCheats::CheatSubtractX() */

void PVZCheats::CheatSubtractX(void)

{
  gCheat_X = gCheat_X - 1.0;
  Sexy::OutputDebugStrF((wchar_t *)"gCheat_X:[%f] \n",(double)gCheat_X);
  return;
}


/* PVZCheats::CheatAddY() */

void PVZCheats::CheatAddY(void)

{
  gCheat_Y = gCheat_Y + 1.0;
  Sexy::OutputDebugStrF((wchar_t *)"gCheat_Y:[%f] \n",(double)gCheat_Y);
  return;
}


/* PVZCheats::CheatSubtractY() */

void PVZCheats::CheatSubtractY(void)

{
  gCheat_Y = gCheat_Y - 1.0;
  Sexy::OutputDebugStrF((wchar_t *)"gCheat_Y:[%f] \n",(double)gCheat_Y);
  return;
}


/* PVZCheats::GetServerTime() */

void PVZCheats::GetServerTime(void)

{
  ServerTime *this;
  
  this = (ServerTime *)ServerTime::Instance();
  ServerTime::GetServerTimeFromNet(this,(CServerTimeHandler *)0x0,false);
  return;
}


/* PVZCheats::CheatDangerRoom() */

void PVZCheats::CheatDangerRoom(void)

{
  DangerRoomManager *this;
  
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::ShowMainDialog(this);
  return;
}


/* PVZCheats::CheatUIEditor() */

UIEditor * PVZCheats::CheatUIEditor(void)

{
  UIEditor *pUVar1;
  char cVar2;
  UIEditor *pUVar3;
  
  pUVar1 = UISingletonDialog<UIEditor>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UIEditor>::m_pInstance == (UIEditor *)0x0) {
    pUVar3 = ::operator_new(0x240);
    UIEditor::UIEditor(pUVar3);
    UISingletonDialog<UIEditor>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UIEditor>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UIEditor>::m_pInstance != (UIEditor *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UIEditor>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UIEditor>::m_pInstance = (UIEditor *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* PVZCheats::CheatPVPPing(bool) */

void PVZCheats::CheatPVPPing(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  *(bool *)(lVar1 + 0x401) = param_1;
  return;
}


/* PVZCheats::CheatArenaEditPlant() */

void PVZCheats::CheatArenaEditPlant(void)

{
  long lVar1;
  PVPManager *this;
  
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_043d196c(lVar1 + 0x128,1);
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetEditPlant(this,0,0,1);
  return;
}


/* PVZCheats::CheatArenaBattle() */

void PVZCheats::CheatArenaBattle(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_043d196c(lVar2 + 0x128,1);
  iVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetPlayerProfile(iVar1,0,1);
  return;
}


/* PVZCheats::CheatArenaEditOccupyPlant1() */

void PVZCheats::CheatArenaEditOccupyPlant1(void)

{
  long lVar1;
  PVPManager *this;
  
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_043d196c(lVar1 + 0x128,2);
  this = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetEditPlant(this,0,0x4e57,2);
  return;
}


/* PVZCheats::CheatArenaOccupy1() */

void PVZCheats::CheatArenaOccupy1(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_043d196c(lVar2 + 0x128,2);
  iVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::RequestGetPlayerProfile(iVar1,0x4e57,2);
  return;
}


/* PVZCheats::CheatFishingEditor(bool) */

void PVZCheats::CheatFishingEditor(bool param_1)

{
  if (!param_1) {
    UISingletonDialog<FishingModuleEditor>::CloseDialog();
    return;
  }
  UISingletonDialog<FishingModuleEditor>::ShowDialog();
  return;
}


/* PVZCheats::CheatFinishLevel() */

void PVZCheats::CheatFinishLevel(void)

{
  LawnApp *this;
  char cVar1;
  int iVar2;
  CrazyNPCManager *this_00;
  long lVar3;
  
  this = gLawnApp;
  iVar2 = FUN_043d1950(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
  if (1 < iVar2 - 4U) {
    Sexy::OutputDebugStrF((wchar_t *)"*** Can\'t complete level until actual gameplay state!\n");
    return;
  }
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(this);
  CrazyNPCManager::ForceEndNarrative(this_00);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar1 == '\0') {
    cVar1 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  }
  else {
    lVar3 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    FUN_043d1a5c(lVar3 + 0x168);
    lVar3 = Sexy::LazySingleton<PVZ1ModeNetworkMgr>::GetInstancePtr();
    FUN_043d1a50(lVar3 + 0x169);
    MessageRouter::Broadcast((_func_void *)gMessageRouter);
    cVar1 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  }
  if (cVar1 == '\0') {
    Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
    return;
  }
  lVar3 = Sexy::LazySingleton<UnchartedModeNetworkMgr>::GetInstancePtr();
  FUN_043d1a44(lVar3 + 0x194);
  Board::PlayerWon(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSpawnBasicZombie() */

void PVZCheats::CheatSpawnBasicZombie(void)

{
  bool bVar1;
  Board *pBVar2;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetBasicZombieType();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::CheatAddZombie(pBVar2,aRStack_10,0xffffffff,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSpawnArmor1Zombie() */

void PVZCheats::CheatSpawnArmor1Zombie(void)

{
  bool bVar1;
  Board *pBVar2;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetArmor1ZombieType();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::CheatAddZombie(pBVar2,aRStack_10,0xffffffff,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSpawnArmor2Zombie() */

void PVZCheats::CheatSpawnArmor2Zombie(void)

{
  bool bVar1;
  Board *pBVar2;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetArmor2ZombieType();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Board::CheatAddZombie(pBVar2,aRStack_10,0xffffffff,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSpawnFlagZombie() */

void PVZCheats::CheatSpawnFlagZombie(void)

{
  bool bVar1;
  long *plVar2;
  Board *pBVar3;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  StageModule::GetFlagZombieType();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    plVar2 = (long *)Board::CheatAddZombie(pBVar3,aRStack_10,0xffffffff,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    (**(code **)(*plVar2 + 0x250))(plVar2,1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatAdd10Components() */

void PVZCheats::CheatAdd10Components(void)

{
  NewPVPMgr *this;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::TryTriggerZombieUpgrade(this,2);
  return;
}


/* PVZCheats::CheatSubtract10Components() */

void PVZCheats::CheatSubtract10Components(void)

{
  NewPVPMgr *this;
  
  this = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::TryAddZombie(this,0x3c,2);
  return;
}


/* PVZCheats::CheatLevelEditorStatueMaze() */

LevelEditorStatueMaze * PVZCheats::CheatLevelEditorStatueMaze(void)

{
  LevelEditorStatueMaze *pLVar1;
  char cVar2;
  LevelEditorStatueMaze *pLVar3;
  
  pLVar1 = UISingletonDialog<LevelEditorStatueMaze>::m_pInstance;
  pLVar3 = pLVar1;
  if (UISingletonDialog<LevelEditorStatueMaze>::m_pInstance == (LevelEditorStatueMaze *)0x0) {
    pLVar3 = ::operator_new(0x1a0);
    LevelEditorStatueMaze::LevelEditorStatueMaze(pLVar3);
    UISingletonDialog<LevelEditorStatueMaze>::m_pInstance = pLVar3;
    cVar2 = (**(code **)(*(long *)pLVar3 + 0x310))(pLVar3);
    pLVar3 = UISingletonDialog<LevelEditorStatueMaze>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<LevelEditorStatueMaze>::m_pInstance != (LevelEditorStatueMaze *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<LevelEditorStatueMaze>::m_pInstance + 0x18))();
      }
      UISingletonDialog<LevelEditorStatueMaze>::m_pInstance = (LevelEditorStatueMaze *)0x0;
      pLVar3 = pLVar1;
    }
  }
  return pLVar3;
}


/* PVZCheats::CheatTest20013() */

UIPennyGiftBox * PVZCheats::CheatTest20013(void)

{
  UIPennyGiftBox *pUVar1;
  char cVar2;
  UIPennyGiftBox *pUVar3;
  
  pUVar1 = UISingletonDialog<UIPennyGiftBox>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UIPennyGiftBox>::m_pInstance == (UIPennyGiftBox *)0x0) {
    pUVar3 = ::operator_new(0x188);
    UIPennyGiftBox::UIPennyGiftBox(pUVar3);
    UISingletonDialog<UIPennyGiftBox>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UIPennyGiftBox>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UIPennyGiftBox>::m_pInstance != (UIPennyGiftBox *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UIPennyGiftBox>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UIPennyGiftBox>::m_pInstance = (UIPennyGiftBox *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* PVZCheats::TestRichmanGuessGame() */

GuessGamePanel * PVZCheats::TestRichmanGuessGame(void)

{
  GuessGamePanel *pGVar1;
  char cVar2;
  GuessGamePanel *pGVar3;
  
  pGVar1 = UISingletonDialog<GuessGamePanel>::m_pInstance;
  pGVar3 = pGVar1;
  if (UISingletonDialog<GuessGamePanel>::m_pInstance == (GuessGamePanel *)0x0) {
    pGVar3 = ::operator_new(0x1a8);
    GuessGamePanel::GuessGamePanel(pGVar3);
    UISingletonDialog<GuessGamePanel>::m_pInstance = pGVar3;
    cVar2 = (**(code **)(*(long *)pGVar3 + 0x310))(pGVar3);
    pGVar3 = UISingletonDialog<GuessGamePanel>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<GuessGamePanel>::m_pInstance != (GuessGamePanel *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<GuessGamePanel>::m_pInstance + 0x18))();
      }
      UISingletonDialog<GuessGamePanel>::m_pInstance = (GuessGamePanel *)0x0;
      pGVar3 = pGVar1;
    }
  }
  return pGVar3;
}


/* PVZCheats::CheatFreeze(bool) */

void PVZCheats::CheatFreeze(bool param_1)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_043d1918(lVar1 + 0x34,param_1);
  return;
}


/* PVZCheats::CheatFrameStep() */

void PVZCheats::CheatFrameStep(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_043d1a7c(lVar1 + 0x34,lVar1 + 0x35);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSpawnNextWave() */

void PVZCheats::CheatSpawnNextWave(void)

{
  WaveGenerator *this;
  WaveManager *this_00;
  float fVar1;
  float fVar2;
  
  this = (WaveGenerator *)Board::GetWaveGenerator(*(Board **)(gLawnApp + 0x9f0));
  if (this != (WaveGenerator *)0x0) {
    fVar1 = (float)FUN_043d192c(*(undefined4 *)(this + 0x34));
    fVar2 = (float)PVZ_EOT();
    if (fVar2 <= fVar1) {
      WaveGenerator::SpawnNextWaveIn(this,_FUN_043d4b2c);
      this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
      goto joined_r0x043d4b18;
    }
    PVZ_T();
    FUN_043d1930(this + 0x34);
  }
  this_00 = (WaveManager *)Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
joined_r0x043d4b18:
  if (this_00 != (WaveManager *)0x0) {
    WaveManager::ForceSpawnWave(this_00);
    return;
  }
  return;
}


/* PVZCheats::CheatProfileReset() */

void PVZCheats::CheatProfileReset(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 == '\0') {
    return;
  }
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
  ProfileUtils::DeleteAndRecreatePlayerInfo(pPVar3);
  return;
}


/* PVZCheats::ResetBossFight() */

void PVZCheats::ResetBossFight(void)

{
  ProfileMgr *this;
  long lVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  if (lVar1 != 0) {
    FUN_043d1a74(lVar1 + 0xfc8);
    return;
  }
  return;
}


/* PVZCheats::SkipAdventureTutorial() */

void PVZCheats::SkipAdventureTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SetActiveTutorial(this_00,0x27);
    PlayerInfo::CompleteTutorial(this_00,0x27);
    PlayerInfo::SAVE_PROFILE(this_00);
    return;
  }
  return;
}


/* PVZCheats::ResetAdventureTutorial() */

void PVZCheats::ResetAdventureTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ResetTutorialProgress(this_00,0x4e);
    PlayerInfo::SAVE_PROFILE(this_00);
    return;
  }
  return;
}


/* PVZCheats::ResetDailyAccessory() */

void PVZCheats::ResetDailyAccessory(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  long *plVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ForceRefreshChristmasAccessoryInfo(this_00);
  }
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  if (*(code **)(*plVar1 + 0x298) != INetworkMsgProcess::ICloudRequestGetAccessoryStat) {
    (**(code **)(*plVar1 + 0x298))(plVar1,2);
  }
  return;
}


/* PVZCheats::ResetGoldenEgg() */

void PVZCheats::ResetGoldenEgg(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  NetworkMgr *this_01;
  long *plVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ForceRefreshGoldenEggInfo(this_00);
  }
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  plVar1 = (long *)NetworkMgr::GetNewNetWorkProcess(this_01);
  if (*(code **)(*plVar1 + 0x2a8) != INetworkMsgProcess::ICloudRequestGetGoldenEggStat) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,2);
  }
  return;
}


/* PVZCheats::Add10Hammers() */

void PVZCheats::Add10Hammers(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetGoldenEggHammers(this_00);
    PlayerInfo::SetGoldenEggHammers(this_00,iVar1 + 10,true);
    return;
  }
  return;
}


/* PVZCheats::CheatResetRechargeGift() */

void PVZCheats::CheatResetRechargeGift(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ResetRechargeGiftTimes(this_00);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd10000000Coins() */

void PVZCheats::CheatAdd10000000Coins(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::AddCoins(this_00,10000000);
    return;
  }
  return;
}


/* PVZCheats::Subtract10000000Coins() */

void PVZCheats::Subtract10000000Coins(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SubtractCoins(this_00,10000000);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd10000Gems() */

void PVZCheats::CheatAdd10000Gems(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::AddGems(this_00,10000,false);
    return;
  }
  return;
}


/* PVZCheats::CheatSubtract10000Gems() */

void PVZCheats::CheatSubtract10000Gems(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SubtractGems(this_00,10000,-1,(ICloudRequestCallbackFunctionBase *)0x0,1,false);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100Leafs() */

void PVZCheats::CheatAdd100Leafs(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ChangeLeafs(this_00,100);
    return;
  }
  return;
}


/* PVZCheats::CheatSubtract100Leafs() */

void PVZCheats::CheatSubtract100Leafs(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ChangeLeafs(this_00,-100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100WhiteSpecial() */

void PVZCheats::CheatAdd100WhiteSpecial(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_00,0x59df);
    PlayerInfo::SetMaterialNum(this_00,0x59df,iVar1 + 100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100GreenSpecial() */

void PVZCheats::CheatAdd100GreenSpecial(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_00,0x59e0);
    PlayerInfo::SetMaterialNum(this_00,0x59e0,iVar1 + 100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100BlueSpecial() */

void PVZCheats::CheatAdd100BlueSpecial(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_00,0x59e1);
    PlayerInfo::SetMaterialNum(this_00,0x59e1,iVar1 + 100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100PurpleSpecial() */

void PVZCheats::CheatAdd100PurpleSpecial(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_00,0x59e2);
    PlayerInfo::SetMaterialNum(this_00,0x59e2,iVar1 + 100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd100OrangeSpecial() */

void PVZCheats::CheatAdd100OrangeSpecial(void)

{
  int iVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar1 = PlayerInfo::GetMaterialNum(this_00,0x59e3);
    PlayerInfo::SetMaterialNum(this_00,0x59e3,iVar1 + 100);
    return;
  }
  return;
}


/* PVZCheats::CheatAdd1000Stones() */

void PVZCheats::CheatAdd1000Stones(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::AddStones(this_00,1000);
    return;
  }
  return;
}


/* PVZCheats::CheatSubtract1000Stones() */

void PVZCheats::CheatSubtract1000Stones(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::SubtractStones(this_00,1000);
    return;
  }
  return;
}


/* PVZCheats::CheatUnlockLevels() */

void PVZCheats::CheatUnlockLevels(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  long *plVar4;
  
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    ProfileUtils::CompleteAllLevels(true,pPVar3);
    plVar4 = (long *)LawnApp::GetWorldMap(gLawnApp);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x330))();
      return;
    }
  }
  return;
}


/* PVZCheats::CheatAddStar() */

void PVZCheats::CheatAddStar(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 == '\0') {
    return;
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar2 = ProfileMgr::GetCurrentProfile(pPVar3);
  PlayerInfo::AddStars(iVar2,10);
  return;
}


/* PVZCheats::CheatRemoveStar() */

void PVZCheats::CheatRemoveStar(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 != '\0') {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    iVar2 = ProfileMgr::GetCurrentProfile(pPVar3);
    iVar2 = PlayerInfo::GetNumStars(iVar2);
    if (0 < iVar2) {
      pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      iVar2 = ProfileMgr::GetCurrentProfile(pPVar3);
      PlayerInfo::SubtractStars(iVar2,3);
      return;
    }
  }
  return;
}


/* PVZCheats::CheatSaveProfile() */

void PVZCheats::CheatSaveProfile(void)

{
  ProfileMgr *this;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::SaveAsAutoName(this);
  return;
}


/* PVZCheats::CheatSaveiCloud() */

void PVZCheats::CheatSaveiCloud(void)

{
  ProfileMgr *this;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(this,false,false);
  return;
}


/* PVZCheats::CheatLoadiCloud() */

void PVZCheats::CheatLoadiCloud(void)

{
  Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::SyncProfileFromServer();
  return;
}


/* PVZCheats::CheatSpawnMapYeti() */

void PVZCheats::CheatSpawnMapYeti(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *pPVar3;
  
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 == '\0') {
    return;
  }
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
  PlayerInfo::UnlockGameFeature(pPVar3,0xc);
  return;
}


/* PVZCheats::ResetLostNetActivity() */

void PVZCheats::ResetLostNetActivity(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ClearLostNetActivityRecord(this_00);
    return;
  }
  return;
}


/* PVZCheats::ResetCBTutorial() */

void PVZCheats::ResetCBTutorial(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ResetTutorialProgress(this_00,0x34);
    PlayerInfo::SAVE_PROFILE(this_00);
    return;
  }
  return;
}


/* PVZCheats::ClearLotteryInfo() */

void PVZCheats::ClearLotteryInfo(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    PlayerInfo::ClearGLInfo(this_00,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatProfileMapConversion() */

void PVZCheats::CheatProfileMapConversion(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  wstring *pwVar3;
  PlayerInfo *pPVar4;
  wstring awStack_20 [8];
  undefined1 auStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pwVar3 = (wstring *)ProfileMgr::GetCurrentProfile(pPVar2);
    PlayerInfo::AM_GetName();
    pPVar4 = (PlayerInfo *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    std::operator+(awStack_20,L"_new");
    ProfileMgr::DuplicateProfile(pPVar4,pwVar3);
    pPVar4 = (PlayerInfo *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    FUN_05476c50(auStack_18);
    ProfileUtils::ConvertOldProfileToNewMap(pPVar4);
    FUN_05476c50(awStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatReloadProfile() */

void PVZCheats::CheatReloadProfile(void)

{
  wstring *pwVar1;
  ProfileMgr *this;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameStateMgr::ShowMainMenu(gGameStateMgr,0,0);
  pwVar1 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::AM_GetName();
  ProfileMgr::LoadAndSetProfile(pwVar1);
  FUN_05476c50(auStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::ClearLevelPackageTime() */

void PVZCheats::ClearLevelPackageTime(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar1;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::GetRealServerTime(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar1 = LawnApp::GetWorldMap(gLawnApp);
  lVar1 = FUN_043d1954(*(undefined8 *)(lVar1 + 0x2f0));
  FUN_05475d88(asStack_18,lVar1 + 0x38);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,0,0);
  std::string::~string(asStack_10);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,1,0);
  std::string::~string(asStack_10);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,2,0);
  std::string::~string(asStack_10);
  PlayerInfo::SAVE_PROFILE(this_00);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::SetLevelPackageTime1() */

void PVZCheats::SetLevelPackageTime1(void)

{
  undefined8 uVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = LawnApp::GetRealServerTime(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  lVar2 = FUN_043d1954(*(undefined8 *)(lVar2 + 0x2f0));
  FUN_05475d88(asStack_18,lVar2 + 0x38);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,0,uVar1);
  std::string::~string(asStack_10);
  PlayerInfo::SAVE_PROFILE(this_00);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::SetLevelPackageTime2() */

void PVZCheats::SetLevelPackageTime2(void)

{
  long lVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  lVar2 = FUN_043d1954(*(undefined8 *)(lVar2 + 0x2f0));
  FUN_05475d88(asStack_18,lVar2 + 0x38);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,1,lVar1 + 0x15180);
  std::string::~string(asStack_10);
  PlayerInfo::SAVE_PROFILE(this_00);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::SetLevelPackageTime3() */

void PVZCheats::SetLevelPackageTime3(void)

{
  long lVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  long lVar2;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetRealServerTime(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = LawnApp::GetWorldMap(gLawnApp);
  lVar2 = FUN_043d1954(*(undefined8 *)(lVar2 + 0x2f0));
  FUN_05475d88(asStack_18,lVar2 + 0x38);
  FUN_05475d88(asStack_10,asStack_18);
  PlayerInfo::SetWorldLevelPackageStartTime(this_00,asStack_10,2,lVar1 + 0x2a300);
  std::string::~string(asStack_10);
  PlayerInfo::SAVE_PROFILE(this_00);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddKeys() */

void PVZCheats::CheatAddKeys(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    if (this != (PlayerInfo *)0x0) {
      std::string::string(asStack_10,"egypt");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"pirate");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"cowboy");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"future");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"dark");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"beach");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"iceage");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"skycity");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"lostcity");
      PlayerInfo::AddKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatRemoveKeys() */

void PVZCheats::CheatRemoveKeys(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    if (this != (PlayerInfo *)0x0) {
      std::string::string(asStack_10,"egypt");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"pirate");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"cowboy");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"future");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"dark");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"beach");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"iceage");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"skycity");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
      std::string::string(asStack_10,"lostcity");
      PlayerInfo::SubtractKeys(this,asStack_10,1);
      std::string::~string(asStack_10);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddAccessoryPiece() */

void PVZCheats::CheatAddAccessoryPiece(void)

{
  char cVar1;
  ProfileMgr *pPVar2;
  PlayerInfo *this;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  ulong uVar5;
  string *extraout_x1;
  ulong uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar2);
  if (cVar1 != '\0') {
    pPVar2 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar2);
    std::string::string(asStack_10,"PvZ2 Accessories");
    Magento::GetStore((Magento *)asStack_10,extraout_x1);
    std::string::~string(asStack_10);
    nop();
    uVar6 = 0;
    while( true ) {
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      uVar5 = FUN_043d19c0(*(undefined8 *)(lVar4 + 0x60),*(undefined8 *)(lVar4 + 0x68));
      if (uVar5 <= uVar6) break;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
      pRVar3 = (RtWeakPtrBase *)FUN_043d19cc(*(undefined8 *)(lVar4 + 0x60),uVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      FUN_05475d88(asStack_10,lVar4 + 0x80);
      PlayerInfo::AddAccessoryPieceCount(this,asStack_10,10,true);
      std::string::~string(asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      uVar6 = uVar6 + 1;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSaveProfileInfo() */

void PVZCheats::CheatSaveProfileInfo(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  DebugLog *this_01;
  undefined4 local_3c;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 != (PlayerInfo *)0x0) {
    Set8BytesTo0(asStack_38);
    Set8BytesTo0(asStack_30);
    Set8BytesTo0(asStack_28);
    PlayerInfo::GetDeltaDataForServer(this_00,asStack_38,asStack_30,asStack_28);
    this_01 = (DebugLog *)Sexy::LazySingleton<DebugLog>::GetInstancePtr();
    local_3c = FUN_043d1940(*(undefined4 *)(this_00 + 0x604));
    std::to_string<ActivityTypeID>((ActivityTypeID *)&local_3c);
    std::operator+(asStack_20,".dat");
    std::string::string(asStack_10,"w");
    DebugLog::LogFile(this_01,asStack_18,asStack_10,asStack_38);
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
    std::string::~string(asStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::ShowSales() */

void PVZCheats::ShowSales(void)

{
  LawnApp *this;
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    cVar1 = PlayerInfo::HasValidSales(this_01);
    this = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,L"[SALES_REWARD_NO_VALID_SALES_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[SALES_REWARD_NO_VALID_SALES]",auStack_60);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
      goto LAB_043d6028;
    }
  }
  LawnApp::ShowSalesUI(gLawnApp);
LAB_043d6028:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::TryNextSalesOUT() */

void PVZCheats::TryNextSalesOUT(void)

{
  LawnApp *this;
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::TryNextSales(this_01,false);
    cVar1 = PlayerInfo::HasValidSales(this_01);
    this = gLawnApp;
    if (cVar1 == '\0') {
      FUN_05478178(awStack_58,L"[SALES_REWARD_NO_VALID_SALES_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[SALES_REWARD_NO_VALID_SALES]",auStack_60);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
      FUN_05476c50(awStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::TryNextSales() */

void PVZCheats::TryNextSales(void)

{
  LawnApp *this;
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  SalesUI *this_02;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = LawnApp::IsSalesUIValid(gLawnApp);
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      PlayerInfo::TryNextSales(this_01,false);
      cVar1 = PlayerInfo::HasValidSales(this_01);
      this = gLawnApp;
      if (cVar1 == '\0') {
        FUN_05478178(awStack_58,L"[SALES_REWARD_NO_VALID_SALES_TITLE]",auStack_68);
        FUN_05478178(awStack_50,L"[SALES_REWARD_NO_VALID_SALES]",auStack_60);
        pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
        FUN_05476c50(awStack_50);
        nop();
        FUN_05476c50(awStack_58);
        nop();
        FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
        Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,awStack_50);
        PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,0);
        FUN_05476c50(awStack_58);
        nop();
        goto LAB_043d62e0;
      }
    }
    this_02 = (SalesUI *)LawnApp::GetSalesUI(gLawnApp);
    SalesUI::OnChangePlant(this_02);
  }
LAB_043d62e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatAdBox() */

void PVZCheats::CheatAdBox(void)

{
  NostalgiaAchievementDialogManager *this;
  
  this = (NostalgiaAchievementDialogManager *)
         Sexy::LazySingleton<NostalgiaAchievementDialogManager>::GetInstance();
  NostalgiaAchievementDialogManager::NostalgiaAchievementFinish(this,(PvZ1Achievement *)0x0);
  return;
}


/* PVZCheats::CheatArtifact() */

void PVZCheats::CheatArtifact(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::RequestTriggerArtifact(this);
  return;
}


/* PVZCheats::TestArtifactWind() */

void PVZCheats::TestArtifactWind(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::CheatTestField(this,0xea61);
  return;
}


/* PVZCheats::TestArtifactLightning() */

void PVZCheats::TestArtifactLightning(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::CheatTestField(this,0xea62);
  return;
}


/* PVZCheats::TestArtifactVase() */

void PVZCheats::TestArtifactVase(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::CheatTestField(this,0xea63);
  return;
}


/* PVZCheats::TestArtifactCure() */

void PVZCheats::TestArtifactCure(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::CheatTestField(this,0xea64);
  return;
}


/* PVZCheats::CheatClearUUID() */

void PVZCheats::CheatClearUUID(void)

{
  IdentifierMgr *this;
  
  this = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  IdentifierMgr::ResetKeychain(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatGenerateLocalUUID() */

void PVZCheats::CheatGenerateLocalUUID(void)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  IdentifierMgr::GenerateLocalUUID();
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatSkipAllTutorials() */

void PVZCheats::CheatSkipAllTutorials(void)

{
  Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::CompleteAllTutorials2();
  return;
}


/* PVZCheats::CheatResetAllTutorials() */

void PVZCheats::CheatResetAllTutorials(void)

{
  Sexy::LazySingleton<TutorialMgr>::GetInstance();
  TutorialMgr::ResetAllTutorials();
  return;
}


/* PVZCheats::CheatDoSyncProfile() */

void PVZCheats::CheatDoSyncProfile(void)

{
  NetworkProfileMgr *this;
  
  this = (NetworkProfileMgr *)Sexy::LazySingleton<NetworkProfileMgr>::GetInstance();
  NetworkProfileMgr::DoSync(this);
  return;
}


/* PVZCheats::TestRichmanEvent0() */

void PVZCheats::TestRichmanEvent0(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent1() */

void PVZCheats::TestRichmanEvent1(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,1);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,1);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent2() */

void PVZCheats::TestRichmanEvent2(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,2);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent3() */

void PVZCheats::TestRichmanEvent3(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,3);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,3);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent4() */

void PVZCheats::TestRichmanEvent4(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,4);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,4);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent5() */

void PVZCheats::TestRichmanEvent5(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,5);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,5);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent6() */

void PVZCheats::TestRichmanEvent6(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,6);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,6);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent7() */

void PVZCheats::TestRichmanEvent7(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,7);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,7);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent8() */

void PVZCheats::TestRichmanEvent8(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,8);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent9() */

void PVZCheats::TestRichmanEvent9(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,9);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,9);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent10() */

void PVZCheats::TestRichmanEvent10(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,10);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent11() */

void PVZCheats::TestRichmanEvent11(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0xb);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0xb);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent12() */

void PVZCheats::TestRichmanEvent12(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0xc);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0xc);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent13() */

void PVZCheats::TestRichmanEvent13(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0xd);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0xd);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent14() */

void PVZCheats::TestRichmanEvent14(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0xe);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0xe);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent15() */

void PVZCheats::TestRichmanEvent15(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0xf);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0xf);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent16() */

void PVZCheats::TestRichmanEvent16(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x10);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent17() */

void PVZCheats::TestRichmanEvent17(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x11);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x11);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent18() */

void PVZCheats::TestRichmanEvent18(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x12);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x12);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent19() */

void PVZCheats::TestRichmanEvent19(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x13);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x13);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent20() */

void PVZCheats::TestRichmanEvent20(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x14);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x14);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent21() */

void PVZCheats::TestRichmanEvent21(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x15);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x15);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent22() */

void PVZCheats::TestRichmanEvent22(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x16);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x16);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::TestRichmanEvent23() */

void PVZCheats::TestRichmanEvent23(void)

{
  RichmanTileEventManager *this;
  long *plVar1;
  long lVar2;
  
  this = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  plVar1 = (long *)RichmanTileEventManager::GetTileEvent(this,0x17);
  lVar2 = Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  FUN_043d1974(lVar2 + 0xc,0x17);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* PVZCheats::CheatDoStopAllRoller() */

void PVZCheats::CheatDoStopAllRoller(void)

{
  RenaiModule *this;
  
  this = (RenaiModule *)FUN_043d70ac(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (RenaiModule *)0x0) {
    RenaiModule::CheatStopRollers(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatShamefulFailure() */

void PVZCheats::CheatShamefulFailure(void)

{
  char cVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  if (cVar1 != '\0') {
    plVar2 = (long *)FUN_043d70ec(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pcVar3 = *(code **)(*plVar2 + 0xa0);
    FUN_05478178(auStack_10,L"Shameful Failure!",auStack_18);
    (*pcVar3)(plVar2,auStack_10);
    FUN_05476c50(auStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatSaveLoad() */

void PVZCheats::CheatSaveLoad(void)

{
  char cVar1;
  bool bVar2;
  SaveGameMgr *this;
  
  if ((*(long **)(gLawnApp + 0x9f0) != (long *)0x0) &&
     (cVar1 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x310))(), cVar1 != '\0')) {
    this = (SaveGameMgr *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    cVar1 = SaveGameMgr::TrySaveGame(this,false);
    if (cVar1 != '\0') {
      Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
      *(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x880) = 7;
      bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
      SaveGameMgr::TryLoadGame(bVar2);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatBreakAllVases() */

void PVZCheats::CheatBreakAllVases(void)

{
  bool bVar1;
  GachaConfig *this;
  undefined8 *puVar2;
  RtWeakPtrBase *pRVar3;
  GridItemVase *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (GachaConfig *)FUN_043d7298(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this != (GachaConfig *)0x0) {
    puVar2 = (undefined8 *)GachaConfig::GetGachaPlantRewardList(this);
    local_18 = FUN_043d6728(*puVar2);
    local_10 = FUN_043d6778(puVar2[1]);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar3);
      this_00 = (GridItemVase *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      GridItemVase::BreakVase(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
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
/* PVZCheats::CheatReloadLevel() */

void PVZCheats::CheatReloadLevel(void)

{
  char cVar1;
  undefined8 uVar2;
  PVZLevelNetworkManager *pPVar3;
  string *psVar4;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  this = *(Board **)(gLawnApp + 0x9f0);
  local_8 = ___stack_chk_guard;
  uVar2 = Board::GetLevel(this);
  cVar1 = FUN_043d194c(this[0x118]);
  if (cVar1 == '\0') {
    pPVar3 = (PVZLevelNetworkManager *)Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstance();
    FUN_05475d88(asStack_10,uVar2);
  }
  else {
    pPVar3 = (PVZLevelNetworkManager *)Sexy::LazySingleton<PVZLevelNetworkManager>::GetInstance();
    psVar4 = (string *)Sexy::LazySingleton<LevelUtils>::GetInstance();
    LevelUtils::GetHardLevelName(psVar4);
  }
  PVZLevelNetworkManager::LoadLevel(pPVar3,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::PopUpDisabled(bool) */

void PVZCheats::PopUpDisabled(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"PopUpDisabled");
  CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatSlowMotion(bool) */

void PVZCheats::CheatSlowMotion(bool param_1)

{
  long lVar1;
  string *psVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar2 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"FastMotion");
    CheatManager::SetToggleValue(psVar2,SUB81(asStack_10,0));
    std::string::~string(asStack_10);
    nop();
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar3 = 0x3f000000;
  }
  else {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar3 = 0x3f800000;
  }
  FUN_043d1920(uVar3,lVar1 + 0x30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatFastMotion(bool) */

void PVZCheats::CheatFastMotion(bool param_1)

{
  long lVar1;
  string *psVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar2 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SlowMotion");
    CheatManager::SetToggleValue(psVar2,SUB81(asStack_10,0));
    std::string::~string(asStack_10);
    nop();
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar3 = 0x40000000;
  }
  else {
    lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
    uVar3 = 0x3f800000;
  }
  FUN_043d1920(uVar3,lVar1 + 0x30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::EasyAdventure(bool) */

void PVZCheats::EasyAdventure(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"EasyAdventure");
  CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatForceOpenBossChallenge(bool) */

void PVZCheats::CheatForceOpenBossChallenge(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"OpenBossChallenge");
  CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::EnableLottery(bool) */

void PVZCheats::EnableLottery(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"EnableLottery");
  CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPlantLevel1(bool) */

void PVZCheats::CheatPlantLevel1(bool param_1)

{
  string *psVar1;
  bool bVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel2");
    bVar2 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel3");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel4");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel5");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPlantLevel2(bool) */

void PVZCheats::CheatPlantLevel2(bool param_1)

{
  string *psVar1;
  bool bVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel1");
    bVar2 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel3");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel4");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel5");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPlantLevel3(bool) */

void PVZCheats::CheatPlantLevel3(bool param_1)

{
  string *psVar1;
  bool bVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel1");
    bVar2 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel2");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel4");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel5");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPlantLevel4(bool) */

void PVZCheats::CheatPlantLevel4(bool param_1)

{
  string *psVar1;
  bool bVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel1");
    bVar2 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel2");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel3");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel5");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPlantLevel5(bool) */

void PVZCheats::CheatPlantLevel5(bool param_1)

{
  string *psVar1;
  bool bVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel1");
    bVar2 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel2");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel3");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetPlantLevel4");
    CheatManager::SetToggleValue(psVar1,bVar2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatCannonLevel1(bool) */

void PVZCheats::CheatCannonLevel1(bool param_1)

{
  string *psVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  bool bVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel2");
    bVar3 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel3");
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    std::string::string(asStack_10,"skycity");
    PlayerInfo::SetReconstructionLevel(pPVar2,asStack_10,0,1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatCannonLevel2(bool) */

void PVZCheats::CheatCannonLevel2(bool param_1)

{
  string *psVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  bool bVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel1");
    bVar3 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel3");
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    std::string::string(asStack_10,"skycity");
    PlayerInfo::SetReconstructionLevel(pPVar2,asStack_10,0,2);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatCannonLevel3(bool) */

void PVZCheats::CheatCannonLevel3(bool param_1)

{
  string *psVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  bool bVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel1");
    bVar3 = SUB81(asStack_10,0);
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    std::string::string(asStack_10,"SetCannonLevel2");
    CheatManager::SetToggleValue(psVar1,bVar3);
    std::string::~string(asStack_10);
    nop();
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    std::string::string(asStack_10,"skycity");
    PlayerInfo::SetReconstructionLevel(pPVar2,asStack_10,0,3);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatTestDailysignWith4399(bool) */

void PVZCheats::CheatTestDailysignWith4399(bool param_1)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  std::string::string(asStack_10,"TestDailysignWith4399");
  CheatManager::SetToggleValue(psVar1,SUB81(asStack_10,0));
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatStartMowers() */

void PVZCheats::CheatStartMowers(void)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this;
  LawnMower *this_00;
  int extraout_w1;
  int extraout_w1_00;
  int iVar3;
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x28);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    this_00 = Sexy::RtObject::Cast<LawnMower>(this);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_38);
    iVar3 = extraout_w1;
    if (this_00 != (LawnMower *)0x0) {
      LawnMower::StartMower(this_00);
      iVar3 = extraout_w1_00;
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddNewAvatarPiece() */

void PVZCheats::CheatAddNewAvatarPiece(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this;
  undefined8 uVar5;
  long *plVar6;
  NameMapperBase *this_00;
  long lVar7;
  int extraout_w1;
  code *pcVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar4);
  if (cVar1 != '\0') {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
    if (this != (PlayerInfo *)0x0) {
      uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_28,uVar5,0x9c);
      while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
        Sexy::RtId::~RtId(aRStack_30);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar2) {
          plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pcVar8 = *(code **)(*plVar6 + 0x20);
          uVar5 = PlantNewAvatar::StaticGetClass();
          cVar1 = (*pcVar8)(plVar6,uVar5);
          if (cVar1 != '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,(RtWeakPtrBase *)aRStack_38);
            this_00 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
            lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            iVar3 = NameMapperBase::GetIdForName(this_00,(string *)(lVar7 + 0x20));
            PlayerInfo::AddNewAvatarPieces(this,iVar3,1);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAutoTest(bool) */

void PVZCheats::CheatAutoTest(bool param_1)

{
  CheatUIPanel *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    CheatUIPanel::SetVisible(this,false);
  }
  Sexy::LazySingleton<AutoTestManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestAllLevel");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatPVZTest(bool) */

void PVZCheats::CheatPVZTest(bool param_1)

{
  CheatUIPanel *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    CheatUIPanel::SetVisible(this,false);
  }
  Sexy::LazySingleton<AutoTestManager>::GetInstancePtr();
  std::string::string(asStack_10,"PVZTest");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAutoTestUnlockLevel(bool) */

void PVZCheats::CheatAutoTestUnlockLevel(bool param_1)

{
  CheatUIPanel *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    CheatUIPanel::SetVisible(this,false);
  }
  Sexy::LazySingleton<AutoTestManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestUnlockLevel");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAutoTestPlantLevelUp(bool) */

void PVZCheats::CheatAutoTestPlantLevelUp(bool param_1)

{
  CheatUIPanel *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this = (CheatUIPanel *)Sexy::LazySingleton<CheatUIPanel>::GetInstancePtr();
    CheatUIPanel::SetVisible(this,false);
  }
  Sexy::LazySingleton<AutoTestManager>::GetInstancePtr();
  std::string::string(asStack_10,"AutoTestPlantLevelUp");
  nop();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatSetSpawnZombieResistence(int, float) */

void PVZCheats::CheatSetSpawnZombieResistence(int param_1,float param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_043d1988(cheat_zombie_resistence_value,(long)param_1);
  *pfVar1 = param_2;
  checkResistenceZombie();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::FakePurchaseSales() */

void PVZCheats::FakePurchaseSales(void)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  RtObject *this_00;
  MagentoProductProps *pMVar5;
  int iVar6;
  int extraout_w1;
  int extraout_w1_00;
  string asStack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtId aRStack_38 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsSalesUIValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::GetSalesUI(this);
    SalesUI::GetSkuId();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x1a);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar3) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,(RtWeakPtrBase *)aRStack_38);
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      pMVar5 = Sexy::RtObject::Cast<MagentoProductProps>(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_38);
      iVar6 = extraout_w1;
      if ((pMVar5 != (MagentoProductProps *)0x0) &&
         (cVar2 = std::operator==((string *)(pMVar5 + 0x10),asStack_48), iVar6 = extraout_w1_00,
         cVar2 != '\0')) {
        Sexy::RtDbTable::Iterator::operator*(aIStack_28);
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)a_Stack_40,(RtId *)aRStack_30);
        Sexy::RtId::~RtId((RtId *)aRStack_30);
        break;
      }
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar6);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
    puVar1 = gMessageRouter;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aIStack_28,(RtWeakPtrBase *)a_Stack_40);
    MessageRouter::
    Post<Sexy::RtWeakPtr<MagentoProductProps>const&,Sexy::RtWeakPtr<MagentoProductProps>>
              ((MessageRouter *)puVar1,Message::RechargeLogWithSalesUiReward,aIStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_28);
    MessageRouter::Post((_func_void *)gMessageRouter);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatLose100Sun() */

void PVZCheats::CheatLose100Sun(void)

{
  LawnKeyField *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (LawnKeyField *)(*(long *)(gLawnApp + 0x9f0) + 0x1b8);
  local_10[0] = LawnKeyField::operator_cast_to_int(this);
  local_10[1] = 100;
  piVar3 = eastl::min_alt<int>(local_10,local_10 + 1);
  iVar1 = *piVar3;
  LawnKeyField::operator-=(this,iVar1);
  iVar2 = LawnKeyField::operator_cast_to_int((LawnKeyField *)(*(long *)(gLawnApp + 0x9f0) + 0x1b8));
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunChanged,iVar2);
  if (local_8 == ___stack_chk_guard) {
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunSpent,iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatLoseAllSun() */

void PVZCheats::CheatLoseAllSun(void)

{
  LawnKeyField *this;
  int iVar1;
  int iVar2;
  
  this = (LawnKeyField *)(*(long *)(gLawnApp + 0x9f0) + 0x1b8);
  iVar1 = LawnKeyField::operator_cast_to_int(this);
  LawnKeyField::operator-=(this,iVar1);
  iVar2 = LawnKeyField::operator_cast_to_int((LawnKeyField *)(*(long *)(gLawnApp + 0x9f0) + 0x1b8));
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunChanged,iVar2);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::SunSpent,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatUnlockGenes() */

void PVZCheats::CheatUnlockGenes(void)

{
  bool bVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  *this_02;
  long lVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)GeneMapper::GetInstance();
  this_02 = (map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             *)std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_01);
  local_20 = std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::begin(this_02);
  while( true ) {
    local_18 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_02);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
    if (!bVar1) break;
    Sexy::ShaderInfo::ShaderLayout::ShaderLayout((ShaderLayout *)&local_18);
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
    local_18 = CONCAT44(10,*(undefined4 *)(lVar2 + 8));
    PlayerInfo::SetPlantGeneInfo(this_00,(PlantGeneInfo *)&local_18);
    FUN_043d1990((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddPlantPiece() */

void PVZCheats::CheatAddPlantPiece(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  string *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined1 auVar5 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar4);
  if (cVar1 != '\0') {
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (string *)ProfileMgr::GetCurrentProfile(pPVar4);
    if (this != (string *)0x0) {
      FUN_043d1938(this + 0x350,0);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)PlantNameMapper::GetInstance();
      auVar5 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_00);
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar5._8_8_);
      local_18 = std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::begin(auVar5._0_8_);
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)auVar5._0_8_);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        PlayerInfo::AddPlantPieceCount(this,iVar3,true);
        FUN_043d1990((exception_ptr *)&local_18);
      }
      FUN_043d1938(this + 0x350,1);
      PlayerInfo::SAVE_PROFILE((PlayerInfo *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddAvatarPiece() */

void PVZCheats::CheatAddAvatarPiece(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 != '\0') {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    if (this != (PlayerInfo *)0x0) {
      FUN_043d1938(this + 0x350,0);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)PlantNameMapper::GetInstance();
      auVar5 = std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_end(this_00);
      std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar5._8_8_);
      local_18 = std::
                 map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                 ::begin(auVar5._0_8_);
      while( true ) {
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)auVar5._0_8_);
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (!bVar2) break;
        uVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
        PlayerInfo::AddAvatarPieces(this,uVar4,0,1);
        FUN_043d1990((exception_ptr *)&local_18);
      }
      FUN_043d1938(this + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatKillAllZombiesWithDrops() */

void PVZCheats::CheatKillAllZombiesWithDrops(void)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  int extraout_w1;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_90 [8];
  Iterator aIStack_88 [32];
  RtId aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_88,uVar2,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_88);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_90,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtId::~RtId(aRStack_68);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    pcVar4 = *(code **)(*plVar3 + 0x2e8);
    DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
    (*pcVar4)(plVar3,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_90);
    Sexy::RtDbTable::Iterator::operator++(aIStack_88,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::CheatLoadPackageNetwork() */

void PVZCheats::CheatLoadPackageNetwork(void)

{
  PVZPackageNetworkManager *this;
  
  this = (PVZPackageNetworkManager *)Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstance();
  PVZPackageNetworkManager::LoadPackageFile(this,false);
  return;
}


/* PVZCheats::CleanPackageNetwork() */

void PVZCheats::CleanPackageNetwork(void)

{
  PVZPackageNetworkManager *this;
  
  this = (PVZPackageNetworkManager *)Sexy::LazySingleton<PVZPackageNetworkManager>::GetInstance();
  PVZPackageNetworkManager::CleanPackageCache(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatShowPlantPieceCompletion() */

void PVZCheats::CheatShowPlantPieceCompletion(void)

{
  uint uVar1;
  int iVar2;
  PlantPieceCompletionDlg *pPVar3;
  ObjectTypeDirectory<PlantType> *pOVar4;
  long lVar5;
  RtWeakPtr<PowerPropertySheet> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (PlantPieceCompletionDlg *)UISingletonDialog<PlantPieceCompletionDlg>::ShowDialog();
  if (pPVar3 != (PlantPieceCompletionDlg *)0x0) {
    uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    pOVar4 = (ObjectTypeDirectory<PlantType> *)
             Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    iVar2 = ObjectTypeDirectory<PlantType>::GetCount(pOVar4);
    Sexy::Rand(iVar2);
    ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar1);
    while (lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18),
          *(char *)(lVar5 + 0x30) == '\0') {
      uVar1 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      pOVar4 = (ObjectTypeDirectory<PlantType> *)
               Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      iVar2 = ObjectTypeDirectory<PlantType>::GetCount(pOVar4);
      Sexy::Rand(iVar2);
      ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar1);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    iVar2 = Sexy::Rand(2);
    PlantPieceCompletionDlg::setPlantPiece(pPVar3,aRStack_10,iVar2 + 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatArenaAwakenWidget() */

void PVZCheats::CheatArenaAwakenWidget(void)

{
  LawnApp *pLVar1;
  uint uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromIndex(uVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pLVar1 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  LawnApp::ShowAwakenWidget(pLVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAddPlants() */

void PVZCheats::CheatAddPlants(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  long lVar4;
  PlantType *pPVar5;
  LevelEditorCardPlantInterface aLStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 != '\0') {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    if (this != (PlayerInfo *)0x0) {
      LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_20);
      while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                               ((ObjectTypeDirectoryIterator *)aLStack_20), bVar2) {
        ObjectTypeDirectoryIterator<PlantType>::operator*
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        if (*(char *)(lVar4 + 0x30) != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          FUN_05475d88(asStack_10,lVar4 + 8);
          pPVar5 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          lVar4 = PlantType::GetProps(pPVar5);
          if (lVar4 != 0) {
            pPVar5 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
            PlantType::GetProps(pPVar5);
            bVar2 = std::operator!=(asStack_10,"carrotmissile");
            if (((bVar2) && (bVar2 = std::operator!=(asStack_10,"smallChestnut"), bVar2)) &&
               (bVar2 = std::operator!=(asStack_10,"bashopult"), bVar2)) {
              PlayerInfo::UnlockPlant(this,asStack_10,true);
            }
          }
          std::string::~string(asStack_10);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        ObjectTypeDirectoryIterator<PlantType>::operator++
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::UnlockAllPlants() */

void PVZCheats::UnlockAllPlants(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  long lVar4;
  LevelEditorCardPlantInterface aLStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 != '\0') {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    if (this != (PlayerInfo *)0x0) {
      FUN_043d1938(this + 0x350,0);
      LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_20);
      while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                               ((ObjectTypeDirectoryIterator *)aLStack_20), bVar2) {
        ObjectTypeDirectoryIterator<PlantType>::operator*
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        if (*(char *)(lVar4 + 0x30) == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          FUN_05475d88(asStack_10,lVar4 + 8);
          bVar2 = std::operator!=(asStack_10,"carrotmissile");
          if (((bVar2) && (bVar2 = std::operator!=(asStack_10,"smallChestnut"), bVar2)) &&
             (bVar2 = std::operator!=(asStack_10,"bashopult"), bVar2)) {
            cVar1 = PlayerInfo::GetIsPlantUnlocked(this,asStack_10);
            if (cVar1 == '\0') {
              PlayerInfo::UnlockPlant(this,asStack_10,false);
            }
          }
          std::string::~string(asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        ObjectTypeDirectoryIterator<PlantType>::operator++
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
      }
      FUN_043d1938(this + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::LockAllPlants() */

void PVZCheats::LockAllPlants(void)

{
  char cVar1;
  bool bVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  long lVar4;
  LevelEditorCardPlantInterface aLStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if (cVar1 != '\0') {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    if (this != (PlayerInfo *)0x0) {
      FUN_043d1938(this + 0x350,0);
      LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_20);
      while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                               ((ObjectTypeDirectoryIterator *)aLStack_20), bVar2) {
        ObjectTypeDirectoryIterator<PlantType>::operator*
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        if (*(char *)(lVar4 + 0x30) == '\0') {
LAB_043d9890:
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        else {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          FUN_05475d88(asStack_10,lVar4 + 8);
          bVar2 = std::operator==("peashooter",asStack_10);
          if ((((bVar2) || (bVar2 = std::operator==("sunflower",asStack_10), bVar2)) ||
              (bVar2 = std::operator==("wallnut",asStack_10), bVar2)) ||
             (((bVar2 = std::operator==("potatomine",asStack_10), bVar2 ||
               (bVar2 = std::operator==(asStack_10,"carrotmissile"), bVar2)) ||
              ((bVar2 = std::operator==(asStack_10,"smallChestnut"), bVar2 ||
               (bVar2 = std::operator==(asStack_10,"bashopult"), bVar2)))))) {
            std::string::~string(asStack_10);
            goto LAB_043d9890;
          }
          cVar1 = PlayerInfo::GetIsPlantUnlocked(this,asStack_10);
          if (cVar1 != '\0') {
            PlayerInfo::LockPlant(this,asStack_10);
          }
          std::string::~string(asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        }
        ObjectTypeDirectoryIterator<PlantType>::operator++
                  ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_20);
      }
      FUN_043d1938(this + 0x350,1);
      PlayerInfo::SAVE_PROFILE(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::SpawnResistenceZombie() */

void PVZCheats::SpawnResistenceZombie(void)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  Zombie *this;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  Board *pBVar9;
  code *pcVar10;
  Zombie *pZVar11;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CheatKillAllZombies();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"roman");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_18);
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if (bVar2) {
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
    this = (Zombie *)Board::CheatAddZombie(pBVar9,asStack_18,2,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    pcVar10 = *(code **)(*(long *)this + 0x78);
    iVar3 = BoardTransforms::GridToBoardSpaceX(k_resistence_zombie_col);
    iVar4 = BoardTransforms::GridToBoardSpaceY(k_resistence_zombie_row);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iVar3,(float)iVar4,0.0);
    (*pcVar10)(this,asStack_18);
    (**(code **)(*(long *)this + 0x198))(this,1);
    FUN_043d1958(k_resistence_zombie_hp,this + 0x284);
    Zombie::Heal(this);
    pZVar11._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar11._0_4_,0,this,2,1);
    Zombie::ApplyCondition(pZVar11._0_4_,0,this,0x7a,1);
    uVar8 = 0;
    while( true ) {
      uVar1 = cheat_zombie_resistence_value;
      uVar7 = FUN_043d197c(cheat_zombie_resistence_value,DAT_06b054c0);
      if (uVar7 <= uVar8) break;
      puVar6 = (undefined8 *)FUN_043d1988(uVar1,uVar8);
                    /* WARNING: Load size is inaccurate */
      Zombie::SetCurrentResistenceValue(*puVar6,this,uVar8 & 0xffffffff);
      uVar8 = uVar8 + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatCherryBombardment() */

void PVZCheats::CheatCherryBombardment(void)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  int iVar4;
  Board *pBVar5;
  int iVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  iVar6 = 1;
  local_8 = ___stack_chk_guard;
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  if (1 < *(int *)(lVar2 + 0xfc)) {
    do {
      iVar4 = 1;
      if (1 < *(int *)(lVar2 + 0xf8)) {
        do {
          psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_10,"cherry_bomb");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
          std::string::~string(asStack_10);
          nop();
          pBVar5 = *(Board **)(gLawnApp + 0x9f0);
          Sexy::Point::Point(aPStack_18,iVar4,iVar6);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
          cVar1 = Board::CanPlantAt(pBVar5,aPStack_18,asStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
          if (cVar1 != '\0') {
            pBVar5 = *(Board **)(gLawnApp + 0x9f0);
            lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
            Board::TestSpawnPlant(pBVar5,(string *)(lVar2 + 8),iVar4,iVar6);
          }
          iVar4 = iVar4 + 2;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
          lVar2 = *(long *)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(lVar2 + 0xf8));
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < *(int *)(lVar2 + 0xfc));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatWallOfPlants() */

void PVZCheats::CheatWallOfPlants(void)

{
  char cVar1;
  string *psVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Board *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  do {
    iVar3 = 0;
    while( true ) {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_10,"sunflower");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      std::string::~string(asStack_10);
      nop();
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_18,iVar3,iVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
      cVar1 = Board::CanPlantAt(pBVar6,aPStack_18,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
        Board::AddPlant((Board *)0x0,uVar5,iVar3,iVar4,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      if (iVar3 != 0) break;
      iVar3 = 1;
    }
    iVar3 = 2;
    do {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_10,"peashooter");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      std::string::~string(asStack_10);
      nop();
      pBVar6 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::Point::Point(aPStack_18,iVar3,iVar4);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
      cVar1 = Board::CanPlantAt(pBVar6,aPStack_18,asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      if (cVar1 != '\0') {
        uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
        Board::AddPlant((Board *)0x0,uVar5,iVar3,iVar4,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
      }
      iVar3 = iVar3 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    } while (iVar3 != 5);
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"wallnut");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_10);
    nop();
    pBVar6 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_18,5,iVar4);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
    cVar1 = Board::CanPlantAt(pBVar6,aPStack_18,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    if (cVar1 != '\0') {
      uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
      Board::AddPlant((Board *)0x0,uVar5,5,iVar4,asStack_10,1,1,0xffffffff,0,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    iVar4 = iVar4 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  } while (iVar4 != 10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatAccessoryPreview() */

void PVZCheats::CheatAccessoryPreview(void)

{
  LawnApp *pLVar1;
  string *psVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"sunflower");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  LawnApp::ShowPlantAccessoryUI(pLVar1,2,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZCheats::ClearDailyPopLimit() */

void PVZCheats::ClearDailyPopLimit(void)

{
  ProfileMgr *this;
  long lVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this);
  std::vector<NextPopData,std::allocator<NextPopData>>::clear
            ((vector<NextPopData,std::allocator<NextPopData>> *)(lVar1 + 0x1508));
  return;
}


/* PVZCheats::ResetWorldCupInfo() */

void PVZCheats::ResetWorldCupInfo(void)

{
  ProfileMgr *this;
  _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  *this_00;
  vector<WorldCupInfo,std::allocator<WorldCupInfo>> *this_01;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
             *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
       *)0x0) {
    this_01 = (vector<WorldCupInfo,std::allocator<WorldCupInfo>> *)
              std::
              _Rb_tree<int,std::pair<int_const,Sexy::TypedKey<Sexy::Color>>,std::_Select1st<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::_M_root(this_00);
    std::vector<WorldCupInfo,std::allocator<WorldCupInfo>>::clear(this_01);
    PlayerInfo::SAVE_PROFILE((PlayerInfo *)this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::CheatDropList() */

void PVZCheats::CheatDropList(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ActivityConfig *pAVar6;
  ulong uVar7;
  string *psVar8;
  ulong uVar9;
  undefined8 uVar10;
  SexyVector3 aSStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float local_5c;
  undefined8 local_50;
  undefined8 local_48;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = LawnApp::GetActivityConfig();
  if (lVar5 != 0) {
    lVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar9 = 0;
    uVar3 = FUN_043d1964(*(undefined4 *)(lVar5 + 8));
    lVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar4 = FUN_043d1968(*(undefined4 *)(lVar5 + 0xc));
    Set8BytesTo0(aSStack_78);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    pAVar6 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::GetGetWeeklyGameModesPlantArray
              (pAVar6,uVar3,uVar4,0,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    uVar10 = local_50;
    uVar7 = FUN_043d1a18(local_50,local_48);
    if (uVar7 != 0) {
      do {
        psVar8 = (string *)FUN_043d1a24(uVar10,uVar9);
        cVar1 = FUN_0547419c();
        if (cVar1 == '\0') {
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38,psVar8);
          uVar10 = local_50;
          uVar7 = FUN_043d1a18(local_50,local_48);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    uVar9 = 0;
    pAVar6 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::GetGetWeeklyGameModesPlantArray
              (pAVar6,uVar3,uVar4,1,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    uVar10 = local_50;
    uVar7 = FUN_043d1a18(local_50,local_48);
    if (uVar7 != 0) {
      do {
        psVar8 = (string *)FUN_043d1a24(uVar10,uVar9);
        cVar1 = FUN_0547419c();
        if (cVar1 == '\0') {
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38,psVar8);
          uVar10 = local_50;
          uVar7 = FUN_043d1a18(local_50,local_48);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    uVar9 = 0;
    pAVar6 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::GetGetWeeklyGameModesPlantArray
              (pAVar6,uVar3,uVar4,2,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    uVar10 = local_50;
    uVar7 = FUN_043d1a18(local_50,local_48);
    if (uVar7 != 0) {
      do {
        psVar8 = (string *)FUN_043d1a24(uVar10,uVar9);
        cVar1 = FUN_0547419c();
        if (cVar1 == '\0') {
          std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
                    ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                     amStack_38,psVar8);
          uVar10 = local_50;
          uVar7 = FUN_043d1a18(local_50,local_48);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar7);
    }
    EATextSquish::Vec3::Vec3((Vec3 *)&local_60,20.0,100.0,0.0);
    local_70 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                         ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)
                          amStack_38);
    while( true ) {
      local_68 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)amStack_38);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_70,(rbtree_iterator *)&local_68);
      if (!bVar2) break;
      psVar8 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_70);
      GetDropItemNameByPlantName(psVar8);
      FUN_05474278(aSStack_78,(string *)&local_68);
      std::string::~string((string *)&local_68);
      cVar1 = FUN_0547419c(aSStack_78);
      if (cVar1 == '\0') {
        Board::AddCollectableWithDefaultMotion(*(string **)(gLawnApp + 0x9f0),aSStack_78);
        local_5c = local_5c + 100.0;
        if (490.0 <= local_5c) {
          local_5c = 100.0;
          local_60 = local_60 + 100.0;
        }
      }
      std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_70);
    }
    std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
              ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)amStack_38);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50);
    std::string::~string((string *)aSStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZCheats::PlaySurpriseAnim() */

void PVZCheats::PlaySurpriseAnim(void)

{
  LawnApp *this;
  ProfileMgr *this_00;
  long lVar1;
  undefined4 *puVar2;
  BoxOpenUI *pBVar3;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 != 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    std::string::string(asStack_40,"plant_piece_sunflower");
    puVar2 = (undefined4 *)
             std::
             map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
             ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                           *)amStack_38,asStack_40);
    *puVar2 = 5;
    std::string::~string(asStack_40);
    nop();
    lVar1 = std::
            map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
            ::size((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                    *)amStack_38);
    this = gLawnApp;
    if (lVar1 != 0) {
      std::string::string(asStack_40,"POPANIM_PLANTADVENTURE_OPENSURPRISE");
      LawnApp::ShowOpenSurpriseBoxUI(this,asStack_40);
      std::string::~string(asStack_40);
      nop();
      pBVar3 = (BoxOpenUI *)LawnApp::getSurpriseBoxOpenUI(gLawnApp);
      BoxOpenUI::SetContentList(pBVar3,(map *)amStack_38);
      pBVar3 = (BoxOpenUI *)LawnApp::getSurpriseBoxOpenUI(gLawnApp);
      BoxOpenUI::StartPlayingAnimation(pBVar3);
    }
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    ~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

