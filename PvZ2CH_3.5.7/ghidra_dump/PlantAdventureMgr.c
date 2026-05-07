// Class: PlantAdventureMgr


/* PlantAdventureMgr::~PlantAdventureMgr() */

void __thiscall PlantAdventureMgr::~PlantAdventureMgr(PlantAdventureMgr *this)

{
  *(undefined ***)this = &PTR__PlantAdventureMgr_0698ce90;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<PlantAdventureMgr>::~LazySingleton((LazySingleton<PlantAdventureMgr> *)this);
  return;
}


/* PlantAdventureMgr::~PlantAdventureMgr() */

void __thiscall PlantAdventureMgr::~PlantAdventureMgr(PlantAdventureMgr *this)

{
  ~PlantAdventureMgr(this);
  AK::FreeHook(this);
  return;
}


/* PlantAdventureMgr::BackToMap() */

void PlantAdventureMgr::BackToMap(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  LawnApp::KillAdventureOpenedUI(gLawnApp);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureMgr::CheckActivated() */

void PlantAdventureMgr::CheckActivated(void)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    cVar1 = '\x01';
  }
  else {
    std::string::string(asStack_10,"egypt5");
    cVar1 = PlayerInfo::GetLevelCompleted(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      PlayerInfo::RefreshPlantAdventureStates(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAdventureMgr::OnGotExploreTeamStatus(bool) */

void __thiscall PlantAdventureMgr::OnGotExploreTeamStatus(PlantAdventureMgr *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsAdventureOpenedUIValid(gLawnApp);
  if (cVar2 != '\0') {
    LawnApp::KillAdventureOpenedUI(pLVar1);
  }
  pLVar1 = gLawnApp;
  if (param_1) {
    GameStateMgr::ShowPlantAdventure(gGameStateMgr,5,5);
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[PLANT_ADVENTURE_FINISHED_FAILED]",auStack_60);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(pLVar1,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,BackToMap);
    Sexy::Delegate0::Delegate0<PlantAdventureMgr,void(PlantAdventureMgr::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar3,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAdventureMgr::PlantAdventureMgr() */

void __thiscall PlantAdventureMgr::PlantAdventureMgr(PlantAdventureMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PlantAdventureMgr>::LazySingleton((LazySingleton<PlantAdventureMgr> *)this);
  *(undefined ***)this = &PTR__PlantAdventureMgr_0698ce90;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnGotExploreTeamStatus);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<PlantAdventureMgr,void(PlantAdventureMgr::*)(bool)>>
            ((MessageRouter *)puVar1,Message::GotExploreTeamStatus,&local_40);
  return;
}


/* PlantAdventureMgr::onButtonClicked() */

void PlantAdventureMgr::onButtonClicked(void)

{
  LawnApp *this;
  char cVar1;
  ProfileMgr *this_00;
  long lVar2;
  long *plVar3;
  
  this = gLawnApp;
  cVar1 = LawnApp::IsPlantAdventureUIValid(gLawnApp);
  if (cVar1 != '\0') {
    LawnApp::KillPlantAdventureUI(this);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar2 != 0) {
    cVar1 = LawnApp::IsNetworkModuleOK();
    if (cVar1 == '\0') {
      MessageRouter::Post<bool,bool>
                ((MessageRouter *)gMessageRouter,Message::GotExploreTeamStatus,false);
      return;
    }
    plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
    (**(code **)(*plVar3 + 0x100))();
  }
  return;
}

