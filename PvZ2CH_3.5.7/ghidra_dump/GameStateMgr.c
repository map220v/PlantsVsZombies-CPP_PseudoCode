// Class: GameStateMgr


/* GameStateMgr::GameStateMgr() */

void __thiscall GameStateMgr::GameStateMgr(GameStateMgr *this)

{
  GameStateMgr *pGVar1;
  GameStateMgr *this_00;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0676aa50;
  this_00 = this + 0x10;
  do {
    pGVar1 = this_00 + 0xa0;
    StateDefinition<GameState>::StateDefinition((StateDefinition<GameState> *)this_00);
    this_00 = pGVar1;
  } while (pGVar1 != this + 0x1d70);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x1d70));
  StateMachine<GameState>::StateMachine((StateMachine<GameState> *)(this + 0x1da0));
  Set8BytesTo0(this + 0x1e48);
  Set8BytesTo0(this + 0x1e58);
  Set8BytesTo0(this + 0x1e60);
  Set8BytesTo0(this + 0x1e70);
  Set8BytesTo0(this + 0x1e78);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e88));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1e98));
  this[0x1eb1] = (GameStateMgr)0x0;
  this[0x1eb2] = (GameStateMgr)0x0;
  this[0x1eb3] = (GameStateMgr)0x0;
  this[0x1eb4] = (GameStateMgr)0x0;
  *(undefined4 *)(this + 0x1eb8) = 0;
  *(undefined4 *)(this + 0x1ebc) = 0;
  return;
}


/* GameStateMgr::~GameStateMgr() */

void __thiscall GameStateMgr::~GameStateMgr(GameStateMgr *this)

{
  map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
  *this_00;
  
  *(undefined ***)this = &PTR_GetClass_0676aa50;
  this_00 = (map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
             *)(this + 0x1d70);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1e98));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e88));
  std::string::~string((string *)(this + 0x1e78));
  std::string::~string((string *)(this + 0x1e70));
  std::string::~string((string *)(this + 0x1e60));
  std::string::~string((string *)(this + 0x1e58));
  std::string::~string((string *)(this + 0x1e48));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x1da0));
  std::
  map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
  ::~map(this_00);
  do {
    this_00 = this_00 + -0xa0;
    StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)this_00);
  } while (this + 0x10 != (GameStateMgr *)this_00);
  nop();
  return;
}


/* GameStateMgr::~GameStateMgr() */

void __thiscall GameStateMgr::~GameStateMgr(GameStateMgr *this)

{
  ~GameStateMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_ActiveCenter(GameState) */

void GameStateMgr::onEnterState_ActiveCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_5thCenter(GameState) */

void GameStateMgr::onEnterState_5thCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_GenericGameState(GameState) */

void GameStateMgr::onExitState_GenericGameState(long param_1)

{
  LawnApp *this;
  char cVar1;
  char *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(param_1 + 0x1ec8) + 0x70))(asStack_10,*(long **)(param_1 + 0x1ec8));
  cVar1 = FUN_0547419c(asStack_10);
  this = gLawnApp;
  if (cVar1 == '\0') {
    pcVar2 = (char *)FUN_0547429c(asStack_10);
    LawnApp::StopMusic(this,pcVar2);
  }
  (**(code **)(**(long **)(param_1 + 0x1ec8) + 0x60))(*(long **)(param_1 + 0x1ec8));
  if (*(long **)(param_1 + 0x1ec8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1ec8) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_LogoScreen(GameState) */

void __thiscall GameStateMgr::onExitState_LogoScreen(GameStateMgr *this,int param_2)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillTitleScreen(gLawnApp);
  if (param_2 != 4) {
    if (this[0x1e44] != (GameStateMgr)0x0) {
      if (this[0x1e45] == (GameStateMgr)0x0) {
        LawnApp::StopMusic(gLawnApp,"Stop_Music_Opening_Splash");
        this[0x1e45] = (GameStateMgr)0x1;
      }
      pLVar1 = gLawnApp;
      std::string::string(asStack_10,"StartupMusic");
      LawnApp::DeleteGroup(pLVar1,asStack_10);
      std::string::~string(asStack_10);
      nop();
      this[0x1e44] = (GameStateMgr)0x0;
    }
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"UI_MainMenu");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"MainMenu_Background");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"MainMenu_Background_Effect");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_ActiveCenter(GameState) */

void GameStateMgr::onExitState_ActiveCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_5thCenter(GameState) */

void GameStateMgr::onExitState_5thCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::onEnterState_DirtyAccount(GameState) */

void GameStateMgr::onEnterState_DirtyAccount(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  
  LawnApp::RemoveAllCaches();
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  INetworkMsgProcess::ICloudRequestClearNotifyThirdPartPlatforms(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_Almanac(GameState) */

void GameStateMgr::onExitState_Almanac(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillAlmanac(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_Store(GameState) */

void GameStateMgr::onExitState_Store(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillStoreUI(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::onEnterState_Lottery(GameState) */

void GameStateMgr::onEnterState_Lottery(void)

{
  LawnApp::ShowLotteryUI(gLawnApp,true);
  return;
}


/* GameStateMgr::onExitState_Lottery(GameState) */

void GameStateMgr::onExitState_Lottery(void)

{
  LawnApp::KillLotteryUI(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_LevelUp(GameState) */

void GameStateMgr::onEnterState_LevelUp(void)

{
  LawnApp::ShowPlantLevelUpListView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_LevelUp(GameState) */

void GameStateMgr::onExitState_LevelUp(void)

{
  LawnApp::KillPlantLevelUpListView();
  return;
}


/* GameStateMgr::onEnterState_ArtifactCultivation(GameState) */

void GameStateMgr::onEnterState_ArtifactCultivation(void)

{
  LawnApp::ShowArtifactCultivationListView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_ArtifactCultivation(GameState) */

void GameStateMgr::onExitState_ArtifactCultivation(void)

{
  LawnApp::KillArtifactCultivationListView(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_PlantGeneEnhancement(GameState) */

void GameStateMgr::onEnterState_PlantGeneEnhancement(void)

{
  LawnApp::ShowPlantGeneEnhancementView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_PlantGeneEnhancement(GameState) */

void GameStateMgr::onExitState_PlantGeneEnhancement(void)

{
  LawnApp::KillPlantGeneEnhancementView(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_NostalgiaPVZ(GameState) */

void GameStateMgr::onEnterState_NostalgiaPVZ(void)

{
  LawnApp::ShowNostalgiaPVZGameView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_NostalgiaPVZ(GameState) */

void GameStateMgr::onExitState_NostalgiaPVZ(void)

{
  LawnApp::KillNostalgiaPVZGameView(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_CustomLevel(GameState) */

void GameStateMgr::onEnterState_CustomLevel(void)

{
  LawnApp::ShowCustomLevelView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_CustomLevel(GameState) */

void GameStateMgr::onExitState_CustomLevel(void)

{
  LawnApp::KillCustomLevelView(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_PlantAvatar(GameState) */

void GameStateMgr::onEnterState_PlantAvatar(void)

{
  LawnApp::ShowPlantAvatarListView(gLawnApp);
  return;
}


/* GameStateMgr::onExitState_PlantAvatar(GameState) */

void GameStateMgr::onExitState_PlantAvatar(void)

{
  LawnApp::KillPlantAvatarListView(gLawnApp);
  return;
}


/* GameStateMgr::onEnterState_PlantFamily(GameState) */

void GameStateMgr::onEnterState_PlantFamily(void)

{
  LawnApp::ShowPlantFamilyUI(gLawnApp,1);
  return;
}


/* GameStateMgr::onExitState_PlantFamily(GameState) */

void GameStateMgr::onExitState_PlantFamily(void)

{
  LawnApp::KillPlantFamilyUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_Lantern(GameState) */

void GameStateMgr::onEnterState_Lantern(long param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Effects_SignReward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Lantern");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GoldCan");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowLanternRiddlesUI(gLawnApp,*(bool *)(param_1 + 0x1e80));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_Lantern(GameState) */

void GameStateMgr::onExitState_Lantern(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillLanternRiddlesUI(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_SignReward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Lantern");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GoldCan");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Plantback");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_RedPack(GameState) */

void GameStateMgr::onEnterState_RedPack(long param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_RedPack");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Lantern");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GachaDetail");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowRedPackUI(gLawnApp,*(undefined4 *)(param_1 + 0x1ebc));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_RedPack(GameState) */

void GameStateMgr::onExitState_RedPack(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillRedPackUI(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_RedPack");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Lantern");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_Plant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GachaDetail");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_Consumption(GameState) */

void GameStateMgr::onEnterState_Consumption(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowConsumptionRewardDialog(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_Consumption(GameState) */

void GameStateMgr::onExitState_Consumption(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillConsumptionRewardDialog(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_DailyAchievement(GameState) */

void GameStateMgr::onEnterState_DailyAchievement(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_DailyAchievement");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowDailyAchievement(gLawnApp);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_DailyAchievement(GameState) */

void GameStateMgr::onExitState_DailyAchievement(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillDailyAchievement(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_DailyAchievement");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_Game(GameState) */

void GameStateMgr::onExitState_Game(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::EndLevel(*(Board **)(gLawnApp + 0x9f0));
  }
  LawnApp::KillBoard(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Keys");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelImage");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_PVPMap(GameState) */

void __thiscall GameStateMgr::onExitState_PVPMap(undefined8 param_1,int param_2)

{
  LawnApp *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVPMapUI(gLawnApp);
  LawnApp::KillPVZ2Dialog(gLawnApp);
  if (1 < param_2 - 0x16U) {
    LawnApp::StopMusic(gLawnApp,"Stop_Music_PVP_Street");
    this = gLawnApp;
    std::string::string(asStack_10,"PVPGlobalAudio");
    LawnApp::DeleteGroup(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::onExitState_PlantAdventure(GameState) */

void GameStateMgr::onExitState_PlantAdventure(void)

{
  LawnApp::KillPlantAdventureUI(gLawnApp);
  return;
}


/* GameStateMgr::onLevelLoaded() */

void __thiscall GameStateMgr::onLevelLoaded(GameStateMgr *this)

{
  FUN_03d47c34(*(long *)(this + 8) + 0xd0,0);
  return;
}


/* GameStateMgr::onWorldMapLoaded() */

void __thiscall GameStateMgr::onWorldMapLoaded(GameStateMgr *this)

{
  FUN_03d47c34(*(long *)(this + 8) + 0xd0,0);
  return;
}


/* GameStateMgr::updateState_GenericGameState() */

void __thiscall GameStateMgr::updateState_GenericGameState(GameStateMgr *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(long **)(this + 0x1ec8) + 0x48))(*(long **)(this + 0x1ec8));
  if (cVar1 != '\0') {
    FUN_03d47c34(*(long *)(this + 8) + 0xd0,0);
  }
  (**(code **)(**(long **)(this + 0x1ec8) + 0x58))(*(long **)(this + 0x1ec8));
  return;
}


/* GameStateMgr::onExitState_PlantTrial(GameState) */

void GameStateMgr::onExitState_PlantTrial(void)

{
  LawnApp::KillPlantTrialView(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* GameStateMgr::onExitState_WorldMap(GameState) */

void __thiscall GameStateMgr::onExitState_WorldMap(undefined8 param_1,int param_2)

{
  WorldMap *this;
  
  if ((((1 < param_2 - 8U) && (1 < param_2 - 0xbU)) && (param_2 != 0x13)) &&
     ((param_2 - 0x26U & 0xfffffffb) != 0)) {
    LawnApp::StopMusic(gLawnApp,"Stop_Amb_WorldMap_Space_BG_LP");
  }
  LawnApp::KillCoinStore(gLawnApp);
  LawnApp::KillChooseActivityLevelsDialog(gLawnApp);
  LawnApp::KillChoosePlantsDialog(gLawnApp);
  LawnApp::KillActivityHome(gLawnApp);
  LawnApp::KillActivityHomeExtra(gLawnApp);
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::UnloadResources(this);
  LawnApp::KillWorldMap(gLawnApp);
  LawnApp::KillGameMaskUI(gLawnApp);
  return;
}


/* GameStateMgr::updateState_WaitForNetworkLoad() */

void __thiscall GameStateMgr::updateState_WaitForNetworkLoad(GameStateMgr *this)

{
  char cVar1;
  int iVar2;
  TransitionOverlayWidget *this_00;
  PlayerInfo *pPVar3;
  
  iVar2 = FUN_03d47c28(*(undefined4 *)(*(long *)(this + 8) + 0xbc));
  if (iVar2 != -1) {
    return;
  }
  this_00 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::StopTransition(this_00);
  pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
  cVar1 = PlayerInfo::GetHasBeenConvertedToNewMap(pPVar3);
  if (cVar1 == '\0') {
    pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
    ProfileUtils::ConvertOldProfileToNewMap(pPVar3);
  }
  Sexy::OutputDebugStrF((wchar_t *)"WorldMapTransitionDecider::PickTutorialOrWorldMap() load rsb");
  WorldMapTransitionDecider::PickTutorialOrWorldMap();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_PlantTrial(GameState) */

void GameStateMgr::onEnterState_PlantTrial(void)

{
  LawnApp *pLVar1;
  GachaConfig *this;
  long lVar2;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  this = (GachaConfig *)LawnApp::GetPlantTrialConfig(gLawnApp);
  lVar2 = GachaConfig::GetGachaPlantRewardList(this);
  FUN_05475d88(asStack_10,lVar2 + 8);
  LawnApp::ShowPlantTrialView(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::updateState_MainMenu() */

void __thiscall GameStateMgr::updateState_MainMenu(GameStateMgr *this)

{
  int iVar1;
  
  iVar1 = GameStateTransitionController::GetTransitionState
                    (*(GameStateTransitionController **)(this + 8));
  if (((iVar1 == 1) && (this[0x1e44] != (GameStateMgr)0x0)) && (this[0x1e45] == (GameStateMgr)0x0))
  {
    LawnApp::StopMusic(gLawnApp,"Stop_Music_Opening_Splash");
    this[0x1e45] = (GameStateMgr)0x1;
    return;
  }
  return;
}


/* GameStateMgr::StaticGetClass() */

long * GameStateMgr::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GameStateMgr",uVar2,StaticNew);
  return sClass;
}


/* GameStateMgr::GetClass() const */

long * GameStateMgr::GetClass(void)

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
  (*pcVar3)(plVar1,"GameStateMgr",uVar2,StaticNew);
  return sClass;
}


/* GameStateMgr::GetState() */

void __thiscall GameStateMgr::GetState(GameStateMgr *this)

{
  FUN_03d47cd0(*(undefined4 *)(this + 0x1da0));
  return;
}


/* GameStateMgr::IsTransitioning() const */

void __thiscall GameStateMgr::IsTransitioning(GameStateMgr *this)

{
  GameStateTransitionController::IsTransitioning(*(GameStateTransitionController **)(this + 8));
  return;
}


/* GameStateMgr::GetAndClearQueuedWorldMapDestination() */

undefined8 __thiscall GameStateMgr::GetAndClearQueuedWorldMapDestination(GameStateMgr *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x1e90);
  *(undefined8 *)(this + 0x1e90) = 0;
  return uVar1;
}


/* GameStateMgr::GetQueuedWorldMapDestination() */

undefined8 __thiscall GameStateMgr::GetQueuedWorldMapDestination(GameStateMgr *this)

{
  return *(undefined8 *)(this + 0x1e90);
}


/* GameStateMgr::QueueWarpTunnel() */

void __thiscall GameStateMgr::QueueWarpTunnel(GameStateMgr *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 8);
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Tutorial();
  uVar2 = 2;
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  FUN_03d47c2c(lVar3 + 0xc0,uVar2);
  return;
}


/* GameStateMgr::transitionToState(GameState, GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::transitionToState
          (GameStateMgr *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03d47cd0(*(undefined4 *)(this + 0x1da0));
  *(undefined4 *)(this + 0x1e40) = uVar1;
  GameStateTransitionController::TransitionToState
            (*(GameStateTransitionController **)(this + 8),param_2,param_3,param_4);
  return;
}


/* GameStateMgr::showMainMenuWithoutLoadingData(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::showMainMenuWithoutLoadingData
          (GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,4,param_2,param_3);
  return;
}


/* GameStateMgr::ShowMainMenu(GameTransitionType, GameTransitionType) */

void __thiscall GameStateMgr::ShowMainMenu(GameStateMgr *this,undefined4 param_2,undefined8 param_3)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  showMainMenuWithoutLoadingData(this,param_2,param_3);
  return;
}


/* GameStateMgr::ShowAlmanac(Sexy::RtWeakPtr<ObjectTypeDescriptor const>, GameTransitionType,
   GameTransitionType) */

void __thiscall
GameStateMgr::ShowAlmanac
          (GameStateMgr *this,RtWeakPtr *param_2,undefined8 param_3,undefined8 param_4)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e88),param_2);
  transitionToState(this,8,param_3,param_4);
  return;
}


/* GameStateMgr::ShowStore(std::string const&, GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowStore(GameStateMgr *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_05475e00(this + 0x1e70);
  transitionToState(this,9,param_3,param_4);
  return;
}


/* GameStateMgr::ShowLevelUp(GameTransitionType, GameTransitionType) */

void __thiscall GameStateMgr::ShowLevelUp(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0xb,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPlantAvatar(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowPlantAvatar(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0xc,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPlantFamily(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowPlantFamily(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x1b,param_2,param_3);
  return;
}


/* GameStateMgr::ShowLanternRiddles(bool const&, GameTransitionType, GameTransitionType) */

void GameStateMgr::ShowLanternRiddles(GameStateMgr *param_1,GameStateMgr *param_2)

{
  param_1[0x1e80] = *param_2;
  transitionToState(param_1,0xd);
  return;
}


/* GameStateMgr::ShowRedPack(FestivalEventType, GameTransitionType, GameTransitionType) */

void GameStateMgr::ShowRedPack(GameStateMgr *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1ebc) = param_2;
  transitionToState(param_1,0xe);
  return;
}


/* GameStateMgr::ShowConsumption(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowConsumption(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x10,param_2,param_3);
  return;
}


/* GameStateMgr::ShowDailyAchievement(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowDailyAchievement(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x11,param_2,param_3);
  return;
}


/* GameStateMgr::ShowActiveCenter(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowActiveCenter(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x12,param_2,param_3);
  return;
}


/* GameStateMgr::ShowFestivalCenter(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowFestivalCenter(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x1c,param_2,param_3);
  return;
}


/* GameStateMgr::ShowRechargeWelfare(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowRechargeWelfare(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x1d,param_2,param_3);
  return;
}


/* GameStateMgr::Show5thCenter(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::Show5thCenter(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x23,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPlantTrial(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowPlantTrial(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0xf,param_2,param_3);
  return;
}


/* GameStateMgr::ShowLottery(GameTransitionType, GameTransitionType) */

void __thiscall GameStateMgr::ShowLottery(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,10,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPVPMap(GameTransitionType, GameTransitionType) */

void __thiscall GameStateMgr::ShowPVPMap(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_03d47c28(*(undefined4 *)(*(long *)(this + 8) + 0xbc));
  if (iVar1 != -1) {
    return;
  }
  transitionToState(this,0x13,param_2,param_3);
  return;
}


/* GameStateMgr::TranslateTo(GameState, GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::TranslateTo
          (GameStateMgr *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03d47cd0(*(undefined4 *)(this + 0x1da0));
  *(undefined4 *)(this + 0x1e40) = uVar1;
  GameStateTransitionController::TransitionToState
            (*(GameStateTransitionController **)(this + 8),param_2,param_3,param_4);
  return;
}


/* GameStateMgr::ShowJoustDashboardScreen() */

void __thiscall GameStateMgr::ShowJoustDashboardScreen(GameStateMgr *this)

{
  transitionToState(this,0x1e,0,0);
  return;
}


/* GameStateMgr::ShowJoustOrAdventureLandingScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowJoustOrAdventureLandingScreen
          (GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x20,param_2,param_3);
  return;
}


/* GameStateMgr::ShowJoustTournamentEndScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowJoustTournamentEndScreen(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x21,param_2,param_3);
  return;
}


/* GameStateMgr::ShowRiftTournamentEndScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowRiftTournamentEndScreen(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x22,param_2,param_3);
  return;
}


/* GameStateMgr::ShowJoustDashboardScreenAfterDashboardFetch(GameTransitionType, GameTransitionType)
    */

void __thiscall
GameStateMgr::ShowJoustDashboardScreenAfterDashboardFetch
          (GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x1f,param_2,param_3);
  return;
}


/* GameStateMgr::ShowNewPVPMainEntryScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowNewPVPMainEntryScreen(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x2b,param_2,param_3);
  return;
}


/* GameStateMgr::ShowNewPlantUIEntryScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowNewPlantUIEntryScreen(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x2e,param_2,param_3);
  return;
}


/* GameStateMgr::ShowRichManScreen(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowRichManScreen(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x24,param_2,param_3);
  return;
}


/* GameStateMgr::ShowRiftMap() */

void __thiscall GameStateMgr::ShowRiftMap(GameStateMgr *this)

{
  transitionToState(this,0x25,0,0);
  return;
}


/* GameStateMgr::ShowArtifactCultivation(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowArtifactCultivation(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x26,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPlantGeneEnhancement(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowPlantGeneEnhancement(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x2a,param_2,param_3);
  return;
}


/* GameStateMgr::ShowPVZ1Map() */

void __thiscall GameStateMgr::ShowPVZ1Map(GameStateMgr *this)

{
  transitionToState(this,0x27,0,0);
  return;
}


/* GameStateMgr::onPVZ1NetworkResponse(int, int) */

void __thiscall GameStateMgr::onPVZ1NetworkResponse(GameStateMgr *this,int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 2)) {
    ShowPVZ1Map(gGameStateMgr);
    return;
  }
  return;
}


/* GameStateMgr::ShowNostalgiaPVZ(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowNostalgiaPVZ(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x28,param_2,param_3);
  return;
}


/* GameStateMgr::ShowCustomLevel(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowCustomLevel(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x29,param_2,param_3);
  return;
}


/* GameStateMgr::WaitForNetworkLoad() */

void __thiscall GameStateMgr::WaitForNetworkLoad(GameStateMgr *this)

{
  char cVar1;
  
  cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,6);
  if (cVar1 == '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"GameStateMgr::WaitForNetworkLoad() load rsb grass");
    transitionToState(this,0x19,6,0);
    return;
  }
  Sexy::OutputDebugStrF((wchar_t *)"GameStateMgr::WaitForNetworkLoad() load rsb");
  transitionToState(this,0x19,0,0);
  return;
}


/* GameStateMgr::StartLevelFromSave(std::string const&, GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::StartLevelFromSave
          (GameStateMgr *this,undefined8 param_1,undefined8 param_3,undefined8 param_4)

{
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  thunk_FUN_05475e00(this + 0x1e58,param_1);
  this[0x1e81] = (GameStateMgr)0x1;
  transitionToState(this,5,param_3,param_4);
  return;
}


/* GameStateMgr::ShowPlantAdventure(GameTransitionType, GameTransitionType) */

void __thiscall
GameStateMgr::ShowPlantAdventure(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  transitionToState(this,0x14,param_2,param_3);
  return;
}


/* GameStateMgr::Draw(Sexy::Graphics*) */

void __thiscall GameStateMgr::Draw(GameStateMgr *this,Graphics *param_1)

{
  GameStateTransitionController::Draw(*(GameStateTransitionController **)(this + 8),param_1);
  return;
}


/* GameStateMgr::onNotConnectedDialogOK() */

void GameStateMgr::onNotConnectedDialogOK(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  Android::Device::ExitApp();
  return;
}


/* GameStateMgr::ShowDangerRoomSkipLevel() */

void __thiscall GameStateMgr::ShowDangerRoomSkipLevel(GameStateMgr *this)

{
  transitionToState(this,0x1a,5,5);
  return;
}


/* GameStateMgr::Update() */

void __thiscall GameStateMgr::Update(GameStateMgr *this)

{
  if (*(GameStateTransitionController **)(this + 8) != (GameStateTransitionController *)0x0) {
    GameStateTransitionController::Update(*(GameStateTransitionController **)(this + 8));
  }
  StateMachine<GameState>::UpdateState((StateMachine<GameState> *)(this + 0x1da0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_PVPMap(GameState) */

void __thiscall GameStateMgr::onEnterState_PVPMap(undefined8 param_1,int param_2)

{
  LawnApp *this;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_03d47cb8(lVar1 + 0x1c,2);
  LawnApp::ShowPVPMapUI(gLawnApp);
  this = gLawnApp;
  if (1 < param_2 - 0x16U) {
    std::string::string(asStack_10,"PVPGlobalAudio");
    LawnApp::LoadGroup(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    LawnApp::PlayMusic(gLawnApp,"Play_Music_PVP_Street");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_FestivalCenter(GameState) */

void GameStateMgr::onEnterState_FestivalCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UISingletonDialog<FestivalEventUI>::ShowDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_FestivalCenter(GameState) */

void GameStateMgr::onExitState_FestivalCenter(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalEventUI>::CloseDialog();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_RechargeWelfare(GameState) */

void GameStateMgr::onEnterState_RechargeWelfare(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  UISingletonDialog<RechargeWelfareUI>::ShowDialog();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_RechargeWelfare(GameState) */

void GameStateMgr::onExitState_RechargeWelfare(void)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<RechargeWelfareUI>::CloseDialog();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Consumption_Reward");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Pieces");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Fragment_Avatar");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Accessory_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Gacha");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_GLLottery");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ActivityCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_PlantAdventure");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_PVPEntry(GameState) */

void __thiscall GameStateMgr::onEnterState_PVPEntry(undefined8 param_1,int param_2)

{
  LawnApp *this;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_03d47cb8(lVar1 + 0x1c,1);
  UISingletonDialog<PVPEntryDlg>::ShowDialog();
  this = gLawnApp;
  if ((param_2 != 0x13) && (param_2 != 0x17)) {
    std::string::string(asStack_10,"PVPGlobalAudio");
    LawnApp::LoadGroup(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    LawnApp::PlayMusic(gLawnApp,"Play_Music_PVP_Street");
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_PVPEntry(GameState) */

void __thiscall GameStateMgr::onExitState_PVPEntry(undefined8 param_1,int param_2)

{
  LawnApp *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<PVPEntryDlg>::CloseDialog();
  if ((param_2 != 0x13) && (param_2 != 0x17)) {
    LawnApp::StopMusic(gLawnApp,"Stop_Music_PVP_Street");
    this = gLawnApp;
    std::string::string(asStack_10,"PVPGlobalAudio");
    LawnApp::DeleteGroup(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::onEnterState_PVPLab(GameState) */

PVPLabDlg * GameStateMgr::onEnterState_PVPLab(void)

{
  PVPLabDlg *pPVar1;
  char cVar2;
  PVPLabDlg *pPVar3;
  
  pPVar1 = UISingletonDialog<PVPLabDlg>::m_pInstance;
  pPVar3 = pPVar1;
  if (UISingletonDialog<PVPLabDlg>::m_pInstance == (PVPLabDlg *)0x0) {
    pPVar3 = ::operator_new(0x170);
    PVPLabDlg::PVPLabDlg(pPVar3);
    UISingletonDialog<PVPLabDlg>::m_pInstance = pPVar3;
    cVar2 = (**(code **)(*(long *)pPVar3 + 0x310))(pPVar3);
    pPVar3 = UISingletonDialog<PVPLabDlg>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<PVPLabDlg>::m_pInstance != (PVPLabDlg *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<PVPLabDlg>::m_pInstance + 0x18))();
      }
      UISingletonDialog<PVPLabDlg>::m_pInstance = (PVPLabDlg *)0x0;
      pPVar3 = pPVar1;
    }
  }
  return pPVar3;
}


/* GameStateMgr::onExitState_PVPLab(GameState) */

void GameStateMgr::onExitState_PVPLab(void)

{
  if (UISingletonDialog<PVPLabDlg>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<PVPLabDlg>::m_pInstance + 0x318))();
    UISingletonDialog<PVPLabDlg>::m_pInstance = (long *)0x0;
  }
  return;
}


/* GameStateMgr::onEnterState_DangerRoomSkipLevel(GameState) */

void __thiscall GameStateMgr::onEnterState_DangerRoomSkipLevel(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  UIDangerRoomSkipLevel *this;
  BaseReadWithoutBufferTask *this_00;
  DangerRoomManager *this_01;
  
  lVar4 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = FUN_03d47cc8(*(undefined4 *)(lVar4 + 0x2b8));
  if (iVar1 == 1) {
    UISingletonDialog<UIDangerRoomTrainingSkipLevel>::ShowDialog();
    return;
  }
  this = (UIDangerRoomSkipLevel *)UISingletonDialog<UIDangerRoomSkipLevel>::ShowDialog();
  if (param_2 != 5) {
    return;
  }
  this_00 = (BaseReadWithoutBufferTask *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar1 = BaseReadWithoutBufferTask::GetNumBytesRead(this_00);
  this_01 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar2 = DangerRoomManager::GetSunNum(this_01);
  lVar4 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  iVar3 = FUN_03d47cc4(*(undefined4 *)(lVar4 + 0xdc));
  UIDangerRoomSkipLevel::SkipToLevel(this,iVar1,iVar1 + 1);
  UIDangerRoomSkipLevel::SetSun(this,iVar2 - iVar3);
  return;
}


/* GameStateMgr::onGetLoginReward() */

void GameStateMgr::onGetLoginReward(void)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::setQihooLoginReward(this_00,true);
  PlayerInfo::AddGems(this_00,0x23,true);
  return;
}


/* GameStateMgr::onSuccessResponse() */

void GameStateMgr::onSuccessResponse(void)

{
  ProfileMgr *this;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  ShowRiftMap(gGameStateMgr);
  return;
}


/* GameStateMgr::onRiftNetworkResponse(int, int) */

void __thiscall GameStateMgr::onRiftNetworkResponse(GameStateMgr *this,int param_1,int param_2)

{
  if (param_1 == 1) {
    if (param_2 == 2) {
      onSuccessResponse();
      return;
    }
    if (param_2 == 4) {
      JoustUtils::ShowJoustNetworkIssuePopup(1);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::buildStateTable() */

void __thiscall GameStateMgr::buildStateTable(GameStateMgr *this)

{
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<GameState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<GameState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_150,"");
  StateDefinition<GameState>::StateDefinition(aSStack_a8,0,asStack_150);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x10),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_150);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x48);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x50);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x58);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Initializing");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,1,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x60);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x68);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x70);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_LogoScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x150),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x80);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_DirtyAccount");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1f0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x90);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x98);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_MainMenu");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x290),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Game");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,5,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x330),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xd0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_WorldMap");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,6,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x3d0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xd8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xe0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xe8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_DangerRoom");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,7,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x470),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x100);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Almanac");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,8,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x510),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x108);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x110);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x118);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Store");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,9,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x5b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x120);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x128);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x130);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Lottery");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x650),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x138);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x140);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x148);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_LevelUp");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0xb,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x6f0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x150);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x158);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x160);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PlantAvatar");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0xc,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x790),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x168);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x170);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x178);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Lantern");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0xd,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x830),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x180);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x188);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x190);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_RedPack");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0xe,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x8d0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x198);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PlantTrial");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0xf,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x970),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1b0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1b8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1c0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_Consumption");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x10,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xa10),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1c8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1d0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1d8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_DailyAchievement");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x11,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xab0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_ActiveCenter");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x12,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xb50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1f8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x200);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x208);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PVPMap");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x13,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xbf0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x210);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x218);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x220);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PlantAdventure");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x14,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xc90),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x230);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x238);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PVPEntry");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x16,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xdd0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x240);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x248);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x250);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PVPLab");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x17,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xe70),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x258);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x260);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x268);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_WaitForNetworkLoad");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x19,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0xfb0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x270);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x278);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x280);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_DangerRoomSkipLevel");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1050),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x288);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x290);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x298);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PlantFamily");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x10f0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2a0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2a8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_FestivalCenter");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1190),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2b8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2c8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_RechargeWelfare");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1d,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1230),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_JoustLoadDashboard");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1e,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x12d0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_JoustDashboardScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1370),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_JoustOrAdventureSelector");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1410),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_JoustTournamentEndScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x14b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_RiftTournamentEndScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1550),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f0);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2f8);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_5thCenter");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x15f0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_RichManScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1690),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_RiftLoadDashboard");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1730),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x300);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x308);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x310);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_ArtifactCultivation");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x17d0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PVZ1LoadDashboard");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1870),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x318);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x320);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x328);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_NostalgiaPVZ");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1910),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x330);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x338);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x340);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_CustomLevel");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x19b0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x348);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x350);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x358);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_PlantGeneEnhancement");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1a50),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_NewPVPMainEntryScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1af0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2d8);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x2e0);
  Sexy::Delegate1<GameState>::Delegate1<GameStateMgr,void(GameStateMgr::*)(GameState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"GAME_NewPlantUIEntryScreen");
  StateDefinition<GameState>::StateDefinition
            (aSStack_a8,0x2e,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  StateDefinition<WorldMapState>::operator=
            ((StateDefinition<WorldMapState> *)(this + 0x1cd0),(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::setState(GameState) */

void __thiscall GameStateMgr::setState(GameStateMgr *this,int param_2)

{
  StateMachine<GameState>::SetState
            ((StateMachine<GameState> *)(this + 0x1da0),
             (StateDefinition *)(this + (long)param_2 * 0xa0 + 0x10));
  return;
}


/* GameStateMgr::ShowLogoScreen() */

void __thiscall GameStateMgr::ShowLogoScreen(GameStateMgr *this)

{
  setState(this,2);
  return;
}


/* GameStateMgr::ShowDirtyAccountScreen() */

void __thiscall GameStateMgr::ShowDirtyAccountScreen(GameStateMgr *this)

{
  setState(this,3);
  return;
}


/* GameStateMgr::ShutDown() */

void __thiscall GameStateMgr::ShutDown(GameStateMgr *this)

{
  setState(this,0);
  return;
}


/* GameStateMgr::DoStateChange(GameState) */

void __thiscall GameStateMgr::DoStateChange(GameStateMgr *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_03d47cd0(*(undefined4 *)(this + 0x1da0));
  if (iVar1 != param_2) {
    setState(this);
    return;
  }
  StateMachine<GameState>::ReenterState((StateMachine<GameState> *)(this + 0x1da0));
  return;
}


/* GameStateMgr::ShowWorldMap(GameTransitionType, GameTransitionType) */

void __thiscall GameStateMgr::ShowWorldMap(GameStateMgr *this,undefined4 param_2,undefined4 param_3)

{
  GemOfferMgr *this_00;
  
  this_00 = (GemOfferMgr *)Sexy::LazySingleton<GemOfferMgr>::GetInstance();
  GemOfferMgr::ResetHintTimes(this_00);
  transitionToState(this,6,param_2,param_3);
  return;
}


/* GameStateMgr::ShowWorldMapWithDestination(MapEventItem const*, GameTransitionType,
   GameTransitionType) */

void __thiscall
GameStateMgr::ShowWorldMapWithDestination
          (GameStateMgr *this,undefined8 param_1,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)(this + 0x1e90) = param_1;
  ShowWorldMap(this,param_3,param_4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::ReturnFromBoard() */

void __thiscall GameStateMgr::ReturnFromBoard(GameStateMgr *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  NewPlantUIMgr *this_00;
  PVPManager *this_01;
  NetworkMgr *this_02;
  INetworkMsgProcess *pIVar4;
  ProfileMgr *this_03;
  PlayerInfo *pPVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  iVar2 = FUN_03d47cc0(*(undefined4 *)(lVar3 + 0x1c));
  if (iVar2 == 1) {
    TranslateTo(this,0x16,5,5);
    pIVar4 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    INetworkMsgProcess::RequestPVPLogin(pIVar4);
  }
  else {
    lVar3 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    iVar2 = FUN_03d47cc0(*(undefined4 *)(lVar3 + 0x1c));
    if (iVar2 == 2) {
      ShowPVPMap(this,0,0);
      this_01 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
      cVar1 = PVPManager::IsEvilDavidBattle(this_01);
      if (cVar1 == '\0') {
        this_02 = (NetworkMgr *)NetworkMgr::Instance();
        pIVar4 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_02);
        INetworkMsgProcess::RequestPVPMapInfo(pIVar4);
      }
    }
    else if (*(int *)(this + 0x1ec0) == 9) {
      ShowJoustDashboardScreen(this);
    }
    else {
      iVar2 = *(int *)(this + 0x1eb8);
      if (iVar2 == 0) {
        cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,6);
        if (cVar1 != '\0') {
          this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
          iVar2 = ProfileUtils::UnlockedWorldCount(pPVar5);
          if (0 < iVar2) {
            ShowWorldMap(this,5,5);
            goto LAB_03d4c08c;
          }
        }
        ShowMainMenu(this,1,1);
      }
      else {
        if (iVar2 == 2) {
          std::string::string(asStack_10,"Gacha");
          ShowStore(this,asStack_10,5,5);
          std::string::~string(asStack_10);
          nop();
        }
        else if (iVar2 == 3) {
          ShowPlantAdventure(this,0,0);
        }
        else if (iVar2 == 1) {
          this_00 = (NewPlantUIMgr *)Sexy::LazySingleton<NewPlantUIMgr>::GetInstancePtr();
          cVar1 = NewPlantUIMgr::IsNewUI(this_00);
          if (cVar1 == '\0') {
            ShowLevelUp(this,5,5);
          }
          else {
            ShowNewPlantUIEntryScreen(this,5,5);
          }
        }
        *(undefined4 *)(this + 0x1eb8) = 0;
      }
    }
  }
LAB_03d4c08c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateMgr::updateState_Initializing() */

void __thiscall GameStateMgr::updateState_Initializing(GameStateMgr *this)

{
  LevelUtils *this_00;
  NetworkMgr *this_01;
  INetworkMsgProcess *this_02;
  
  WorldMapUtils::LoadWorldMapData();
  this_00 = (LevelUtils *)Sexy::LazySingleton<LevelUtils>::GetInstance();
  LevelUtils::InitializeMetaDataStore(this_00);
  nop();
  nop();
  this_01 = (NetworkMgr *)NetworkMgr::Instance();
  this_02 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_01);
  INetworkMsgProcess::ICloudRequestGetServiceStatus(this_02);
  setState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_LogoScreen(GameState) */

void GameStateMgr::onEnterState_LogoScreen(long param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  TextureInfo *pTVar3;
  IdentifierMgr *this;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_MainMenu");
  LawnApp::PrepareLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"MainMenu_Background");
  LawnApp::PrepareLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"MainMenu_Background_Effect");
  LawnApp::PrepareLoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"StartupMusic");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowTitleScreen(gLawnApp);
  LawnApp::StartInitialLoad(gLawnApp);
  gLawnApp[0x6b6] = (LawnApp)0x1;
  *(undefined4 *)(param_1 + 0x1e50) = 0;
  pTVar3 = (TextureInfo *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar3);
  if (cVar2 != '\0') {
    this = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    IdentifierMgr::TryIdentifierCheck(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onExitState_MainMenu(GameState) */

void GameStateMgr::onExitState_MainMenu(long param_1)

{
  LawnApp *pLVar1;
  PlantFamilyMgr *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(char *)(param_1 + 0x1e44) != '\0') {
    if (*(char *)(param_1 + 0x1e45) == '\0') {
      LawnApp::StopMusic(gLawnApp,"Stop_Music_Opening_Splash");
      *(undefined1 *)(param_1 + 0x1e45) = 1;
    }
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"StartupMusic");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    *(undefined1 *)(param_1 + 0x1e44) = 0;
  }
  LawnApp::KillMainMenu(gLawnApp);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_MainMenu");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Help");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"MainMenu_Background");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"MainMenu_Background_Effect");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  this = (PlantFamilyMgr *)Sexy::LazySingleton<PlantFamilyMgr>::GetInstance();
  PlantFamilyMgr::PlantFamilyReset(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_Almanac(GameState) */

void GameStateMgr::onEnterState_Almanac(long param_1)

{
  LawnApp *pLVar1;
  CheatManager *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Almanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)(param_1 + 0x1e88));
  LawnApp::ShowAlmanac(pLVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  pCVar2 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  CheatManager::SetCurrentContext(pCVar2,0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_Store(GameState) */

void GameStateMgr::onEnterState_Store(long param_1)

{
  LawnApp *pLVar1;
  CheatManager *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"GameUpgrades");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ApplyNetworkContentChanges(gLawnApp);
  LawnApp::ShowStoreUI(gLawnApp,(string *)(param_1 + 0x1e70));
  pCVar2 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  CheatManager::SetCurrentContext(pCVar2,0x20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_MainMenu(GameState) */

void __thiscall GameStateMgr::onEnterState_MainMenu(undefined8 param_1,int param_2)

{
  LawnApp *pLVar1;
  PrimeText *this;
  CheatManager *pCVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this);
  pLVar1 = gLawnApp;
  if (param_2 != 2) {
    std::string::string(asStack_10,"UI_MainMenu");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"MainMenu_Background");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    pLVar1 = gLawnApp;
    std::string::string(asStack_10,"MainMenu_Background_Effect");
    LawnApp::LoadGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Help");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ShowMainMenu(gLawnApp);
  pCVar2 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  CheatManager::SetCurrentContext(pCVar2,2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_WorldMap(GameState) */

void __thiscall GameStateMgr::onEnterState_WorldMap(GameStateMgr *this,int param_2)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  ActivityManager *this_01;
  PVPManager *this_02;
  long lVar4;
  PrimeText *this_03;
  WorldMap *pWVar5;
  PlayerInfo *this_04;
  CheatManager *pCVar6;
  PVZ2UIDialog *this_05;
  PrimeTypeface *pPVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Initialse(this_01);
  this_02 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  PVPManager::Initialise(this_02);
  lVar4 = Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  FUN_03d47cb8(lVar4 + 0x1c,0);
  if ((((1 < param_2 - 8U) && (1 < param_2 - 0xbU)) && (param_2 != 0x13)) &&
     ((param_2 - 0x26U & 0xfffffffb) != 0)) {
    LawnApp::PlayMusic(gLawnApp,"Play_Amb_WorldMap_Space_BG_LP");
  }
  this_03 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_03);
  LawnApp::ApplyNetworkContentChanges(gLawnApp);
  FUN_03d47c34(*(long *)(this + 8) + 0xd0,1);
  LawnApp::ShowWorldMap(gLawnApp);
  pWVar5 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::SetPreviousState(pWVar5,param_2);
  this_04 = (PlayerInfo *)ProfileUtils::Profile();
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if (((iVar2 == 0x51) || (iVar2 = LawnApp::GetPlatform(gLawnApp), iVar2 == 0x1d)) &&
     ((cVar1 = PlayerInfo::getQihooLoginReward(this_04), this_00 = gLawnApp, cVar1 == '\0' &&
      (cVar1 = LawnApp::GetQiHooLogin(gLawnApp), cVar1 != '\0')))) {
    iVar2 = FUN_03d481e8(500);
    iVar3 = FUN_03d481e8(0xdc);
    this_05 = (PVZ2UIDialog *)
              LawnApp::ShowPVZ2Dialog(this_00,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
    FUN_05478178(awStack_50,L"[LOGIN_REWARD]",auStack_58);
    PVZ2UIDialog::SetHeaderLabel(this_05,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05478178(awStack_50,L"[LOGIN_REWARD_BODY]",auStack_58);
    PVZ2UIDialog::SetFooterLabel(this_05,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_Outline);
    PVZ2UIDialog::SetHeaderFont(this_05,pPVar7,(Color *)&PrimeText_Game::Color_Generic_Title);
    pPVar7 = (PrimeTypeface *)
             PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_HardShadow);
    Sexy::Color::Color((Color *)awStack_50,1);
    PVZ2UIDialog::SetFooterFont(this_05,pPVar7,(Color *)awStack_50);
    PVZ2UIDialog::SetBackgroundDarken(this_05,true,0.5);
    FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onGetLoginReward);
    Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>(aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(this_05,auStack_58,aDStack_38,0);
    FUN_05476c50(auStack_58);
    nop();
  }
  pCVar6 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  CheatManager::SetCurrentContext(pCVar6,8);
  LawnApp::KillGameMaskUI(gLawnApp);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GameStateMgr::onEnterState_PlantAdventure(GameState) */

void GameStateMgr::onEnterState_PlantAdventure(void)

{
  CheatManager *pCVar1;
  
  LawnApp::ShowPlantAdventureUI(gLawnApp);
  pCVar1 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  CheatManager::SetCurrentContext(pCVar1,0x40);
  return;
}


/* GameStateMgr::StaticNew() */

GameStateMgr * GameStateMgr::StaticNew(void)

{
  GameStateMgr *this;
  
  this = ::operator_new(0x1ed0);
  GameStateMgr(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::StartLevel(std::string const&, std::string const&, int, GameTransitionType,
   GameTransitionType, LevelSource) */

void __thiscall
GameStateMgr::StartLevel
          (GameStateMgr *this,undefined8 param_1,string *param_2,undefined4 param_3,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1ec0) = param_7;
  thunk_FUN_05475e00(this + 0x1e58,param_2);
  thunk_FUN_05475e00(this + 0x1e60,param_1);
  *(undefined4 *)(this + 0x1e68) = param_3;
  this[0x1e81] = (GameStateMgr)0x0;
  transitionToState(this,5,param_5,param_6);
  uVar4 = FUN_0547429c(param_1);
  uVar5 = FUN_0547429c(param_2);
  Sexy::OutputDebugStrF((wchar_t *)"GameStateMgr::StartLevel %s %s",uVar4,uVar5);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_18,param_1);
  FUN_05475d88(asStack_10,param_2);
  MessageRouter::Post<std::string_const&,std::string_const&,int,std::string,std::string,int>
            ((MessageRouter *)puVar1,Message::MissionStart,asStack_18,asStack_10,param_3);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar2 = std::operator==(param_2,"egypt1");
  if (bVar2) {
    MessageRouter::Post<int,TutorialEvent>((MessageRouter *)gMessageRouter,Message::TutorialFTUE,3);
    cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
    if (cVar3 == '\0') {
      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                ((MessageRouter *)gMessageRouter,Message::Toturi,0,1);
    }
  }
  else {
    bVar2 = std::operator==(param_2,"egypt2");
    if (bVar2) {
      MessageRouter::Post<int,TutorialEvent>
                ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,10);
      cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
      if (cVar3 == '\0') {
        MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                  ((MessageRouter *)gMessageRouter,Message::Toturi,0,5);
      }
    }
    else {
      bVar2 = std::operator==(param_2,"egypt3");
      if (bVar2) {
        MessageRouter::Post<int,TutorialEvent>
                  ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0xf);
        cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
        if (cVar3 == '\0') {
          MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                    ((MessageRouter *)gMessageRouter,Message::Toturi,0,7);
        }
      }
      else {
        bVar2 = std::operator==(param_2,"egyptchallenge0_1");
        if (bVar2) {
          MessageRouter::Post<int,TutorialEvent>
                    ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x14);
        }
        else {
          bVar2 = std::operator==(param_2,"egypt4");
          if (bVar2) {
            MessageRouter::Post<int,TutorialEvent>
                      ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x18);
            cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
            if (cVar3 == '\0') {
              MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                        ((MessageRouter *)gMessageRouter,Message::Toturi,0,10);
            }
          }
          else {
            bVar2 = std::operator==(param_2,"egypt5");
            if (bVar2) {
              MessageRouter::Post<int,TutorialEvent>
                        ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x1d);
              cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
              if (cVar3 == '\0') {
                MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                          ((MessageRouter *)gMessageRouter,Message::Toturi,0,0xb);
              }
            }
            else {
              bVar2 = std::operator==(param_2,"egypt6");
              if (bVar2) {
                MessageRouter::Post<int,TutorialEvent>
                          ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x23);
                cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                if (cVar3 == '\0') {
                  MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                            ((MessageRouter *)gMessageRouter,Message::Toturi,0,0xe);
                }
              }
              else {
                bVar2 = std::operator==(param_2,"egypt7");
                if (bVar2) {
                  MessageRouter::Post<int,TutorialEvent>
                            ((MessageRouter *)gMessageRouter,Message::TutorialFTUE,0x27);
                  cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                  if (cVar3 == '\0') {
                    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x10);
                  }
                }
                else {
                  bVar2 = std::operator==(param_2,"egypt8");
                  if (bVar2) {
                    cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                    if (cVar3 == '\0') {
                      MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                                ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x24);
                    }
                  }
                  else {
                    bVar2 = std::operator==(param_2,"egypt9");
                    if (bVar2) {
                      cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                      if (cVar3 == '\0') {
                        MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                                  ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x13);
                      }
                    }
                    else {
                      bVar2 = std::operator==(param_2,"egypt10");
                      if (bVar2) {
                        cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                        if (cVar3 == '\0') {
                          MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                                    ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x16);
                        }
                      }
                      else {
                        bVar2 = std::operator==(param_2,"egypt11");
                        if (bVar2) {
                          cVar3 = PlayerInfo::GetLevelCompleted(this_01,param_2);
                          if (cVar3 == '\0') {
                            MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
                                      ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x18);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
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
/* GameStateMgr::updateState_LogoScreen() */

void __thiscall GameStateMgr::updateState_LogoScreen(GameStateMgr *this)

{
  LawnApp *this_00;
  char cVar1;
  bool bVar2;
  TextureInfo *pTVar3;
  IdentifierMgr *pIVar4;
  ProfileMgr *pPVar5;
  long lVar6;
  time_t __time1;
  time_t __time0;
  float fVar7;
  double dVar8;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1e44] == (GameStateMgr)0x0) {
    LawnApp::PlayMusic(gLawnApp,"Play_Music_Opening_Splash");
    this[0x1e45] = (GameStateMgr)0x0;
    this[0x1e44] = (GameStateMgr)0x1;
  }
  fVar7 = (float)LawnApp::InitialLoadProgress(gLawnApp);
  if ((fVar7 < 1.0) || (cVar1 = LawnApp::GetNetworkRequestsCompleted(gLawnApp), cVar1 == '\0'))
  goto LAB_03d4d60c;
  if ((this[0x1eb0] == (GameStateMgr)0x0) &&
     (lVar6 = LawnApp::GetRealBeijingTime(gLawnApp), 0 < lVar6)) {
    LawnApp::CheckForUpdates(gLawnApp);
    this[0x1eb0] = (GameStateMgr)0x1;
    *(int *)(this + 0x1e50) = *(int *)(this + 0x1e50) + 1;
    cVar1 = LawnApp::IsTitleScreenFinished(gLawnApp);
  }
  else {
    *(int *)(this + 0x1e50) = *(int *)(this + 0x1e50) + 1;
    cVar1 = LawnApp::IsTitleScreenFinished(gLawnApp);
  }
  if (((cVar1 == '\0') || (*(int *)(this + 0x1e50) < 3)) || (gLawnApp[0x6b6] == (LawnApp)0x0))
  goto LAB_03d4d60c;
  pTVar3 = (TextureInfo *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar3);
  if (cVar1 != '\0') {
    pIVar4 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
    cVar1 = IdentifierMgr::IsRequestCheck(pIVar4);
    if (cVar1 != '\0') goto LAB_03d4d60c;
  }
  pIVar4 = (IdentifierMgr *)Sexy::LazySingleton<IdentifierMgr>::GetInstance();
  cVar1 = IdentifierMgr::IsRequestInit(pIVar4);
  if (cVar1 != '\0') goto LAB_03d4d60c;
  pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::hasPopulateProfiles(pPVar5);
  if (cVar1 == '\0') {
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    cVar1 = ProfileMgr::populateProfiles(pPVar5);
    if (cVar1 == '\0') {
      LawnApp::RequestGetRechargeAmoutFromServer(gLawnApp);
      goto LAB_03d4d60c;
    }
  }
  this_00 = gLawnApp;
  if (gLawnApp[0x299d] != (LawnApp)0x0) {
    gLawnApp[0x299d] = (LawnApp)0x0;
    LawnApp::ShowFakeSaveWarning(this_00,0x12e);
    goto LAB_03d4d60c;
  }
  LawnApp::FinishInitialLoad(gLawnApp);
  LawnApp::ApplyNetworkContentChanges(gLawnApp);
  Set8BytesTo0(asStack_18);
  lVar6 = FUN_05474178(asStack_18);
  if (lVar6 == 0) {
    bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    cVar1 = SaveGameMgr::CanLoadGame(bVar2);
    if (cVar1 != '\0') {
      bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
      cVar1 = SaveGameMgr::TryLoadGame(bVar2);
      lVar6 = Sexy::LazySingleton<ProfileMgr>::GetInstance();
      FUN_02fd3d68(lVar6 + 0x129);
      LawnApp::setSyncProfileSuccess(gLawnApp,true);
      if (cVar1 != '\0') {
        LawnApp::silenceRelogin(gLawnApp);
        goto LAB_03d4d7b4;
      }
    }
    bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    SaveGameMgr::ClearSaveGame(bVar2);
    __time1 = time((time_t *)0x0);
    __time0 = LawnApp::GetLoadingBeginTime(gLawnApp);
    dVar8 = difftime(__time1,__time0);
    LawnApp::SetLoadingDuration(gLawnApp,dVar8);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::GameLoad,1);
    showMainMenuWithoutLoadingData(this,0,0);
  }
  else {
    std::string::string(asStack_10,"tutorial");
    StartLevel(this,asStack_10,asStack_18,0xffffffff,6,6,0);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03d4d7b4:
  std::string::~string(asStack_18);
LAB_03d4d60c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_Game(GameState) */

void GameStateMgr::onEnterState_Game(long param_1)

{
  vector<std::string,std::allocator<std::string>> *this;
  LawnApp *pLVar1;
  bool bVar2;
  PrimeText *this_00;
  ulong uVar3;
  CheatManager *pCVar4;
  vector *pvVar5;
  size_t __n;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PrimeText *)Sexy::PrimeText::Instance();
  Sexy::PrimeText::ClearGlyphCache(this_00);
  FUN_03d47c34(*(long *)(param_1 + 8) + 0xd0,1);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelImage");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Keys");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PowerUpIcons");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  LawnApp::ApplyNetworkContentChanges(gLawnApp);
  if (*(char *)(param_1 + 0x1e81) == '\0') {
    LawnApp::ShowBoard(gLawnApp);
    uVar3 = FUN_03d47c18(*(undefined1 *)(param_1 + 0x1eb1));
    __n = uVar3 & 0xffffffff;
    Board::InitLevel(*(Board **)(gLawnApp + 0x9f0),(string *)(param_1 + 0x1e58),SUB81(__n,0));
    std::string::append((string *)(param_1 + 0x1e58),"",__n);
    *(undefined4 *)(param_1 + 0x1e68) = 0xffffffff;
    pCVar4 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    CheatManager::SetCurrentContext(pCVar4,4);
  }
  else {
    this = (vector<std::string,std::allocator<std::string>> *)(param_1 + 0x1e98);
    std::vector<std::string,std::allocator<std::string>>::clear(this);
    pvVar5 = (vector *)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    SaveGameMgr::GetResourceGroupsRequiredForLoad(pvVar5,SUB81(this,0));
    bVar2 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
    SaveGameMgr::ClearSaveGame(bVar2);
    LawnApp::PrepareLoadGroups(gLawnApp,(vector *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::buildGenericStateTable() */

void __thiscall GameStateMgr::buildGenericStateTable(GameStateMgr *this)

{
  map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
  *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_c;
  long local_8;
  
  this_00 = (map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
             *)(this + 0x1d70);
  local_c = 0x1e;
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = JoustDashboardLoadingState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x1f;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = JoustLandingScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x20;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = JoustOrAdventureScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x21;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = JoustTournamentEndScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x22;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = RiftTournamentEndScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x24;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = RichManScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x25;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = RiftDashboardLoadingState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x27;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = PVZ1DashboardLoadingState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x2b;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = NewPVPMainEntryScreenState::StaticGetClass();
  *puVar1 = uVar2;
  local_c = 0x2e;
  puVar1 = (undefined8 *)
           std::
           map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
           ::operator[](this_00,(GameState *)&local_c);
  uVar2 = NewPlantUIEntryScreenState::StaticGetClass();
  *puVar1 = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::Initialize(GameState) */

void __thiscall GameStateMgr::Initialize(GameStateMgr *this,undefined4 param_2,size_t param_3)

{
  undefined *puVar1;
  GameStateTransitionController *this_00;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x1e50) = 0;
  local_8 = ___stack_chk_guard;
  this[0x1e44] = (GameStateMgr)0x0;
  this[0x1e45] = (GameStateMgr)0x0;
  this[0x1eb0] = (GameStateMgr)0x0;
  *(undefined8 *)(this + 0x1e90) = 0;
  this_00 = ::operator_new(0xd8);
  GameStateTransitionController::GameStateTransitionController(this_00);
  *(GameStateTransitionController **)(this + 8) = this_00;
  FUN_03d47c20(this_00 + 8,this);
  std::string::append((string *)(this + 0x1e78),"",param_3);
  *(undefined8 *)(this + 0x1ec8) = 0;
  *(undefined4 *)(this + 0x1e68) = 0xffffffff;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoaded);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWorldMapLoaded);
  Sexy::Delegate0::Delegate0<GameStateMgr,void(GameStateMgr::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::WorldMapLoadComplete,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GameStateMgr,void(GameStateMgr::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVZ1NetworkResponse);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<GameStateMgr,void(GameStateMgr::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::PVZ1ModeNetworkResponseReceived,&local_90);
  buildStateTable(this);
  buildGenericStateTable(this);
  setState(this,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::onEnterState_GenericGameState(GameState) */

void GameStateMgr::onEnterState_GenericGameState(long param_1)

{
  LawnApp *this;
  char cVar1;
  long *plVar2;
  long *extraout_x0;
  char *pcVar3;
  long lVar4;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = FUN_03d47cd0(*(undefined4 *)(param_1 + 0x1da0));
  plVar2 = (long *)std::
                   map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
                   ::operator[]((map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
                                 *)(param_1 + 0x1d70),(GameState *)&local_14);
  FUN_03d47be8(*(undefined8 *)(*plVar2 + 0x18));
  nop();
  lVar4 = *extraout_x0;
  *(long **)(param_1 + 0x1ec8) = extraout_x0;
  (**(code **)(lVar4 + 0x50))();
  (**(code **)(**(long **)(param_1 + 0x1ec8) + 0x68))(asStack_10,*(long **)(param_1 + 0x1ec8));
  cVar1 = FUN_0547419c(asStack_10);
  this = gLawnApp;
  if (cVar1 == '\0') {
    pcVar3 = (char *)FUN_0547429c(asStack_10);
    LawnApp::PlayMusic(this,pcVar3);
  }
  FUN_03d47c34(*(long *)(param_1 + 8) + 0xd0,1);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMgr::updateState_Game() */

void GameStateMgr::updateState_Game(void)

{
  vector *this;
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  GameStateMgr *in_x0;
  ulong uVar16;
  PlantCthulhuActinia *this_00;
  CheatManager *pCVar17;
  PVPManager *pPVar18;
  MiniGameCollectionNetworkMgr *pMVar19;
  UIUpdateMgr *pUVar20;
  WorldMapCamera *this_01;
  DangerRoomManager *pDVar21;
  PennyClassroomManager *pPVar22;
  ProfileMgr *pPVar23;
  PlayerInfo *pPVar24;
  BaseTaskResource *pBVar25;
  ulong uVar26;
  BaseResStreamsDriver *pBVar27;
  char *pcVar28;
  TGALogMgr *pTVar29;
  CustomLevelMgr *this_02;
  TGACustomLevelData *pTVar30;
  long lVar31;
  undefined8 uVar32;
  string *psVar33;
  size_t in_x2;
  size_t sVar34;
  Board *this_03;
  string asStack_c8 [8];
  DString aDStack_c0 [16];
  function<bool(Sexy::Touch_const&)> afStack_b0 [32];
  TGACustomLevelData aTStack_90 [8];
  string asStack_88 [8];
  string asStack_80 [8];
  undefined1 auStack_78 [16];
  string asStack_68 [16];
  string asStack_58 [48];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = IsTransitioning(in_x0);
  if (cVar2 != '\0') goto LAB_03d4ec10;
  if (in_x0[0x1e81] != (GameStateMgr)0x0) {
    this = (vector *)(in_x0 + 0x1e98);
    cVar2 = LawnApp::IsGroupLoadComplete(gLawnApp,this);
    if (cVar2 == '\0') goto LAB_03d4ec10;
    LawnApp::FinalizeGroupLoads(gLawnApp,this);
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)this);
    this_00 = (PlantCthulhuActinia *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
    cVar2 = PlantCthulhuActinia::GetEyeballStatus(this_00);
    if (cVar2 == '\0') {
      pUVar20 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
      UIUpdateMgr::Init(pUVar20);
      pUVar20 = (UIUpdateMgr *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
      UIUpdateMgr::LoadUIUpdateRSB(pUVar20);
      this_01 = (WorldMapCamera *)Sexy::LazySingleton<UIUpdateMgr>::GetInstance();
      WorldMapCamera::SetUseClipViewport(this_01,true);
    }
    LawnApp::ShowBoard(gLawnApp);
    uVar16 = FUN_03d47c18(in_x0[0x1eb1]);
    in_x2 = uVar16 & 0xffffffff;
    Board::InitLevelForLoadGame
              (*(Board **)(gLawnApp + 0x9f0),(string *)(in_x0 + 0x1e58),SUB81(in_x2,0));
    Board::LoadGameState(*(Board **)(gLawnApp + 0x9f0),false);
    std::string::append((string *)(in_x0 + 0x1e58),"",in_x2);
    in_x0[0x1e81] = (GameStateMgr)0x0;
    pCVar17 = (CheatManager *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    CheatManager::SetCurrentContext(pCVar17,4);
  }
  cVar2 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0));
  if ((cVar2 == '\0') || (*(int *)(*(long *)(gLawnApp + 0x9f0) + 0x95c) < 3)) goto LAB_03d4ec10;
  bVar3 = (bool)Sexy::LazySingleton<SaveGameMgr>::GetInstance();
  cVar2 = '\x01';
  SaveGameMgr::ClearSaveGame(bVar3);
  this_03 = *(Board **)(gLawnApp + 0x9f0);
  Board::GetLevel(this_03);
  FUN_03d47c1c(*(undefined4 *)(this_03 + 0x87c));
  cVar4 = RiftUtils::IsPlayingRiftLevel();
  cVar5 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  if (cVar5 == '\0') {
    cVar5 = PVZ1ModeUtils::IsPlayingPVZ1Tutorial();
    cVar2 = '\0';
    if (cVar5 != '\0') {
      cVar2 = PVZ1ModeUtils::HasCompleteTutorial();
    }
  }
  cVar5 = CustomLevelUtils::IsCustomLevel();
  Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
  cVar6 = PennyClassroomManager::IsPennyClassroomLevel();
  cVar7 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel();
  cVar8 = CardGameUtils::IsPlayingCardGame();
  cVar9 = NewPVPUtils::IsPlayingNewPVP();
  cVar10 = PlantWarsUtils::IsPlayingPlantWarsLevel();
  cVar11 = MiniGameCollectionUtils::IsPlayingMiniGameCollectionLevel();
  pLVar1 = gLawnApp;
  uVar13 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  *(undefined4 *)(pLVar1 + 0x2968) = uVar13;
  uVar13 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
  switch(uVar13) {
  case 1:
    lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    iVar15 = (int)in_x2;
    FUN_05475d88(asStack_c8,lVar31 + 0x108);
    lVar31 = FUN_05474184(asStack_c8);
    if (lVar31 == 0) {
      if (*(int *)(in_x0 + 0x1ec0) == 9) {
LAB_03d4f0a4:
        ReturnFromBoard(in_x0);
      }
      else if (cVar4 == '\0') {
        if (cVar2 == '\0') {
          if (cVar5 == '\0') {
            if (cVar6 != '\0') {
              pPVar22 = (PennyClassroomManager *)
                        Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
              PennyClassroomManager::RequestMainUI(pPVar22);
              goto LAB_03d4f0a4;
            }
            if (cVar7 == '\0') {
              if (cVar8 == '\0') {
                if (cVar9 == '\0') {
                  if (cVar10 == '\0') {
                    if (cVar11 == '\0') {
                      pPVar18 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
                      cVar2 = PVPManager::IsInPVPMap(pPVar18);
                      if (cVar2 != '\0') goto LAB_03d4f0a4;
                      ShowWorldMap();
                    }
                    else {
                      pMVar19 = (MiniGameCollectionNetworkMgr *)
                                Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
                      FUN_02fd3e30(afStack_b0);
                      MiniGameCollectionNetworkMgr::RequestMainEntryData(pMVar19,afStack_b0);
                      std::function<bool(Sexy::Touch_const&)>::~function(afStack_b0);
                      ReturnFromBoard(in_x0);
                    }
                  }
                  else {
                    std::string::string((string *)aTStack_90,"");
                    PlantWarsUtils::GoToPlantWarsWorldMap((string *)aTStack_90);
                    std::string::~string((string *)aTStack_90);
                    nop();
                  }
                }
                else {
                  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
                  NewPVPMgr::CheatEnter();
                }
              }
              else {
                cVar2 = CardGameUtils::IsHardMode();
                bVar3 = true;
                if (cVar2 == '\0') {
                  psVar33 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
                  bVar3 = std::operator==(psVar33,"card_tutorial");
                }
                std::string::string((string *)aTStack_90,"card_game");
                CardGameUtils::GoToCardGameWorldMap((string *)aTStack_90,bVar3);
                std::string::~string((string *)aTStack_90);
                nop();
              }
            }
            else {
              PVZ2UnchartedModeUtils::IsHardMode();
              PVZ2UnchartedModeUtils::SendGet_MainEntry(true);
            }
          }
          else {
            this_02 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstance();
            pTVar30 = (TGACustomLevelData *)CustomLevelMgr::GetLogData(this_02);
            TGACustomLevelData::TGACustomLevelData(aTStack_90,pTVar30);
            pTVar29 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
            TGALogMgr::LogCustomLevel(pTVar29,aTStack_90);
            ShowCustomLevel(gGameStateMgr,5,5);
            TGACustomLevelData::~TGACustomLevelData(aTStack_90);
          }
        }
        else {
          cVar2 = PVZ1ModeUtils::IsPlayingPVZ1Tutorial();
          if (cVar2 != '\0') {
            PVZ1ModeUtils::SetFromTutorial(true);
          }
          bVar12 = PVZ1ModeUtils::IsPlayingPVZ1Tutorial();
          PVZ1ModeUtils::SendGet_MainEntry((bool)(bVar12 ^ 1));
        }
      }
      else {
        RiftUtils::SendGet_MainEntry();
      }
    }
    else {
      lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if (*(char *)(lVar31 + 0x110) == '\0') {
        lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        if (*(char *)(lVar31 + 0x112) == '\0') {
          StartLevel();
        }
        else {
          pDVar21 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
          cVar2 = DangerRoomManager::IsTrainingMode(pDVar21);
          if (cVar2 == '\0') {
            Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
            Sexy::IAsyncNetworkTask::GetName();
            pDVar21 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
            uVar14 = DangerRoomManager::GetNextLevel(pDVar21);
            if ((int)uVar14 < 0x96) {
              DangerRoomModule::GetLevelName
                        ((DangerRoomModule *)aDStack_c0,(string *)(ulong)uVar14,iVar15);
              StartLevel();
              std::string::~string((string *)aTStack_90);
            }
            else {
              ShowDangerRoomSkipLevel(in_x0);
            }
            std::string::~string((string *)aDStack_c0);
          }
          else {
            ShowDangerRoomSkipLevel(in_x0);
          }
        }
      }
      else {
        QueueWarpTunnel(in_x0);
        StartLevel();
      }
    }
    *(undefined4 *)(gLawnApp + 0x296c) = 0;
    std::string::~string(asStack_c8);
    break;
  case 2:
    goto switchD_03d4ed04_caseD_2;
  case 3:
    if ((cVar5 != '\0') && (*(int *)(in_x0 + 0x1ec0) == 10)) {
      CustomLevelUtils::TryRestartLevel();
      break;
    }
    if (cVar11 != '\0') {
      *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
      StartLevel();
      break;
    }
switchD_03d4ed04_caseD_2:
    pPVar18 = (PVPManager *)Sexy::LazySingleton<PVPManager>::GetInstancePtr();
    cVar10 = PVPManager::IsInPVPMap(pPVar18);
    if (cVar10 == '\0') {
      if (*(int *)(in_x0 + 0x1ec0) != 9) {
        if (cVar4 != '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        if (cVar2 != '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        if (cVar7 != '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        if (cVar5 != '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
        if (*(char *)(lVar31 + 0x112) != '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        if (cVar6 != '\0') {
          pPVar22 = (PennyClassroomManager *)
                    Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
          PennyClassroomManager::RequestMainUI(pPVar22);
          TGASecretStore::TGASecretStore((TGASecretStore *)aTStack_90);
          pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
          iVar15 = PlayerInfo::GetMaterialNum(pPVar24,0x5b6d);
          pBVar25 = (BaseTaskResource *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr()
          ;
          uVar26 = Sexy::BaseTaskResource::GetType(pBVar25);
          pBVar27 = (BaseResStreamsDriver *)
                    Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
          uVar16 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(pBVar27);
          sVar34 = uVar16 & 0xffffffff;
          uVar16 = sVar34;
          DString::DString(aDStack_c0,2);
          pcVar28 = (char *)DString::c_str(aDStack_c0);
          std::string::append((string *)aTStack_90,pcVar28,uVar16);
          DString::~DString(aDStack_c0);
          DString::DString(aDStack_c0,iVar15);
          pcVar28 = (char *)DString::c_str(aDStack_c0);
          std::string::append(asStack_88,pcVar28,uVar16);
          DString::~DString(aDStack_c0);
          std::string::append(asStack_80,"0",uVar16);
          Sexy::StrFormat("%d_%d",aDStack_c0,uVar26 & 0xffffffff);
          FUN_05474278(auStack_78,aDStack_c0);
          std::string::~string((string *)aDStack_c0);
          std::string::append(asStack_68,"0",sVar34);
          pTVar29 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
          TGALogMgr::LogPennyClassroom(pTVar29,(TGAPennyClassroomData *)aTStack_90);
          ReturnFromBoard(in_x0);
          DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_90);
          break;
        }
        if (cVar8 != '\0') {
          cVar2 = CardGameUtils::IsHardMode();
          bVar3 = true;
          if (cVar2 == '\0') {
            psVar33 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
            bVar3 = std::operator==(psVar33,"card_tutorial");
          }
          std::string::string((string *)aTStack_90,"card_game");
          CardGameUtils::GoToCardGameWorldMap((string *)aTStack_90,bVar3);
          std::string::~string((string *)aTStack_90);
          nop();
          break;
        }
        if (cVar9 != '\0') {
          Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          NewPVPMgr::CheatEnter();
          break;
        }
        if (cVar11 == '\0') {
          *(int *)(gLawnApp + 0x296c) = *(int *)(gLawnApp + 0x296c) + 1;
          StartLevel();
          break;
        }
        pMVar19 = (MiniGameCollectionNetworkMgr *)
                  Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
        FUN_03d4819c(afStack_b0);
        MiniGameCollectionNetworkMgr::RequestMainEntryData(pMVar19,afStack_b0);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_b0);
      }
      ReturnFromBoard(in_x0);
    }
    else {
LAB_03d4ef90:
      ReturnFromBoard(in_x0);
LAB_03d4ee88:
      *(undefined4 *)(gLawnApp + 0x296c) = 0;
    }
    break;
  case 4:
    StartLevel();
    break;
  case 5:
    if (cVar4 == '\0') {
      if (cVar2 != '\0') {
        PVZ1ModeUtils::SendGet_MainEntry(true);
        goto LAB_03d4ee88;
      }
      if (cVar5 != '\0') {
        TGACustomLevelData::TGACustomLevelData(aTStack_90);
        DString::DString(aDStack_c0,0xf);
        pcVar28 = (char *)DString::c_str(aDStack_c0);
        std::string::append((string *)aTStack_90,pcVar28,in_x2);
        DString::~DString(aDStack_c0);
        iVar15 = CustomLevelUtils::GetLevelDetailsLevelID();
        DString::DString(aDStack_c0,iVar15);
        pcVar28 = (char *)DString::c_str(aDStack_c0);
        std::string::append(asStack_58,pcVar28,in_x2);
        DString::~DString(aDStack_c0);
        std::string::append(asStack_28,"3",in_x2);
        pTVar29 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogCustomLevel(pTVar29,aTStack_90);
        ShowCustomLevel(gGameStateMgr,5,5);
        TGACustomLevelData::~TGACustomLevelData(aTStack_90);
        goto LAB_03d4ee88;
      }
      if (cVar6 != '\0') {
        pPVar22 = (PennyClassroomManager *)
                  Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
        PennyClassroomManager::RequestMainUI(pPVar22);
        TGASecretStore::TGASecretStore((TGASecretStore *)aTStack_90);
        pPVar23 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar24 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar23);
        iVar15 = PlayerInfo::GetMaterialNum(pPVar24,0x5b6d);
        pBVar25 = (BaseTaskResource *)Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
        uVar26 = Sexy::BaseTaskResource::GetType(pBVar25);
        pBVar27 = (BaseResStreamsDriver *)
                  Sexy::LazySingleton<PennyClassroomManager>::GetInstancePtr();
        uVar16 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete(pBVar27);
        sVar34 = uVar16 & 0xffffffff;
        uVar16 = sVar34;
        DString::DString(aDStack_c0,2);
        pcVar28 = (char *)DString::c_str(aDStack_c0);
        std::string::append((string *)aTStack_90,pcVar28,uVar16);
        DString::~DString(aDStack_c0);
        DString::DString(aDStack_c0,iVar15);
        pcVar28 = (char *)DString::c_str(aDStack_c0);
        std::string::append(asStack_88,pcVar28,uVar16);
        DString::~DString(aDStack_c0);
        std::string::append(asStack_80,"0",uVar16);
        Sexy::StrFormat("%d_%d",aDStack_c0,uVar26 & 0xffffffff);
        FUN_05474278(auStack_78,aDStack_c0);
        std::string::~string((string *)aDStack_c0);
        std::string::append(asStack_68,"0",sVar34);
        pTVar29 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPennyClassroom(pTVar29,(TGAPennyClassroomData *)aTStack_90);
        ReturnFromBoard(in_x0);
        DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_90);
        goto LAB_03d4ee88;
      }
      if (cVar7 != '\0') {
        PVZ2UnchartedModeUtils::IsHardMode();
        PVZ2UnchartedModeUtils::SendGet_MainEntry(true);
        goto LAB_03d4ee88;
      }
      if (cVar8 != '\0') {
        cVar2 = CardGameUtils::IsHardMode();
        bVar3 = true;
        if (cVar2 == '\0') {
          psVar33 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
          bVar3 = std::operator==(psVar33,"card_tutorial");
        }
        std::string::string((string *)aTStack_90,"card_game");
        CardGameUtils::GoToCardGameWorldMap((string *)aTStack_90,bVar3);
        std::string::~string((string *)aTStack_90);
        nop();
        goto LAB_03d4ee88;
      }
      if (cVar9 != '\0') {
        Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        NewPVPMgr::CheatEnter();
        goto LAB_03d4ee88;
      }
      if (cVar10 != '\0') {
        lVar31 = Sexy::LazySingleton<PlantWarsNetworkMgr>::GetInstancePtr();
        cVar2 = FUN_02fd3d64(*(undefined1 *)(lVar31 + 0x118));
        if (cVar2 == '\0') {
          std::string::string((string *)aTStack_90,"");
          PlantWarsUtils::GoToPlantWarsWorldMap((string *)aTStack_90);
          std::string::~string((string *)aTStack_90);
          nop();
        }
        else {
          uVar32 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
          FUN_05475d88((string *)aDStack_c0,uVar32);
          FUN_05475d88((string *)aTStack_90,(string *)aDStack_c0);
          iVar15 = PlantWarsUtils::CalcNodeType((string *)aTStack_90);
          std::string::~string((string *)aTStack_90);
          if (((iVar15 == 0) && (cVar2 = PlantWarsUtils::IsWonResult(), cVar2 != '\0')) &&
             (lVar31 = FUN_05474374((string *)aDStack_c0,&DAT_055fcab0,0), lVar31 != -1)) {
            uVar32 = FUN_05476368((string *)aDStack_c0,lVar31,2,&DAT_055fca88);
            FUN_05475d88((string *)aTStack_90,uVar32);
            StartLevel();
            std::string::~string((string *)aTStack_90);
          }
          std::string::~string((string *)aDStack_c0);
        }
        goto LAB_03d4ee88;
      }
      if (cVar11 != '\0') {
        pMVar19 = (MiniGameCollectionNetworkMgr *)
                  Sexy::LazySingleton<MiniGameCollectionNetworkMgr>::GetInstancePtr();
        FUN_02fd3de4(afStack_b0);
        MiniGameCollectionNetworkMgr::RequestMainEntryData(pMVar19,afStack_b0);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_b0);
        ReturnFromBoard(in_x0);
        goto LAB_03d4ee88;
      }
      lVar31 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      if ((*(char *)(lVar31 + 0x112) != '\0') && (*(int *)(in_x0 + 0x1eb8) == 0)) {
        ShowDangerRoomSkipLevel(in_x0);
        goto LAB_03d4ee88;
      }
      goto LAB_03d4ef90;
    }
    RiftUtils::SendGet_MainEntry();
    goto LAB_03d4ee88;
  default:
    uVar16 = Board::GetBoardResult(*(Board **)(gLawnApp + 0x9f0));
    Sexy::OutputDebugStrF((wchar_t *)"Unhandled BOARDRESULT: %d!",uVar16 & 0xffffffff);
  }
LAB_03d4ec10:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GameStateMgr::TEMPNAMEPLACEHOLDERVALUE(GameStateMgr const&) */

GameStateMgr * __thiscall GameStateMgr::operator=(GameStateMgr *this,GameStateMgr *param_1)

{
  GameStateMgr *pGVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GameStateMgr GVar5;
  GameStateMgr GVar6;
  GameStateMgr GVar7;
  GameStateMgr GVar8;
  GameStateMgr *this_00;
  GameStateMgr *pGVar9;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  this_00 = this + 0x10;
  pGVar9 = param_1 + 0x10;
  do {
    pGVar1 = this_00 + 0xa0;
    StateDefinition<CardGameState>::operator=
              ((StateDefinition<CardGameState> *)this_00,(StateDefinition *)pGVar9);
    this_00 = pGVar1;
    pGVar9 = (GameStateMgr *)(pGVar9 + 0xa0);
  } while (pGVar1 != this + 0x1d70);
  std::
  map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
  ::operator=((map<GameState,Sexy::RtClass*,std::less<GameState>,std::allocator<std::pair<GameState_const,Sexy::RtClass*>>>
               *)(this + 0x1d70),(map *)(param_1 + 0x1d70));
  StateMachine<GameState>::operator=
            ((StateMachine<GameState> *)(this + 0x1da0),(StateMachine *)(param_1 + 0x1da0));
  GVar5 = param_1[0x1e44];
  GVar6 = param_1[0x1e45];
  GVar7 = param_1[0x1e46];
  *(undefined4 *)(this + 0x1e40) = *(undefined4 *)(param_1 + 0x1e40);
  this[0x1e44] = GVar5;
  this[0x1e45] = GVar6;
  this[0x1e46] = GVar7;
  thunk_FUN_05475e00(this + 0x1e48,param_1 + 0x1e48);
  *(undefined4 *)(this + 0x1e50) = *(undefined4 *)(param_1 + 0x1e50);
  thunk_FUN_05475e00(this + 0x1e58,param_1 + 0x1e58);
  thunk_FUN_05475e00(this + 0x1e60,param_1 + 0x1e60);
  uVar2 = *(undefined4 *)(param_1 + 0x1e6c);
  *(undefined4 *)(this + 0x1e68) = *(undefined4 *)(param_1 + 0x1e68);
  *(undefined4 *)(this + 0x1e6c) = uVar2;
  thunk_FUN_05475e00(this + 0x1e70,param_1 + 0x1e70);
  thunk_FUN_05475e00(this + 0x1e78,param_1 + 0x1e78);
  GVar5 = param_1[0x1e81];
  this[0x1e80] = param_1[0x1e80];
  this[0x1e81] = GVar5;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e88),(RtWeakPtr *)(param_1 + 0x1e88));
  *(undefined8 *)(this + 0x1e90) = *(undefined8 *)(param_1 + 0x1e90);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1e98),
             (vector *)(param_1 + 0x1e98));
  GVar5 = param_1[0x1eb1];
  GVar6 = param_1[0x1eb2];
  GVar7 = param_1[0x1eb3];
  GVar8 = param_1[0x1eb4];
  this[0x1eb0] = param_1[0x1eb0];
  this[0x1eb1] = GVar5;
  this[0x1eb2] = GVar6;
  this[0x1eb3] = GVar7;
  this[0x1eb4] = GVar8;
  uVar2 = *(undefined4 *)(param_1 + 0x1eb8);
  uVar3 = *(undefined4 *)(param_1 + 0x1ebc);
  uVar4 = *(undefined4 *)(param_1 + 0x1ec0);
  *(undefined8 *)(this + 0x1ec8) = *(undefined8 *)(param_1 + 0x1ec8);
  *(undefined4 *)(this + 0x1eb8) = uVar2;
  *(undefined4 *)(this + 0x1ebc) = uVar3;
  *(undefined4 *)(this + 0x1ec0) = uVar4;
  return this;
}

