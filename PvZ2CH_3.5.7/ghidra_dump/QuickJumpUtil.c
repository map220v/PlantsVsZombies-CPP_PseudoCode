// Class: QuickJumpUtil


/* QuickJumpUtil::ShowPennyRift() */

void QuickJumpUtil::ShowPennyRift(void)

{
  RiftNetworkMgr *this;
  
  this = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  RiftNetworkMgr::RequestGetMainEntry(this);
  return;
}


/* QuickJumpUtil::~QuickJumpUtil() */

void __thiscall QuickJumpUtil::~QuickJumpUtil(QuickJumpUtil *this)

{
  *(undefined ***)this = &PTR__QuickJumpUtil_06a2a0c0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<QuickJumpUtil>::~LazySingleton((LazySingleton<QuickJumpUtil> *)this);
  return;
}


/* QuickJumpUtil::~QuickJumpUtil() */

void __thiscall QuickJumpUtil::~QuickJumpUtil(QuickJumpUtil *this)

{
  ~QuickJumpUtil(this);
  AK::FreeHook(this);
  return;
}


/* QuickJumpUtil::onPVPLogin(bool) */

void __thiscall QuickJumpUtil::onPVPLogin(QuickJumpUtil *this,bool param_1)

{
  if ((param_1) && (this[8] != (QuickJumpUtil)0x0)) {
    GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
  }
  this[8] = (QuickJumpUtil)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickJumpUtil::ShowGachaStore() */

void QuickJumpUtil::ShowGachaStore(void)

{
  WorldMap *pWVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar1 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  std::string::string(asStack_10,"Gacha");
  WorldMap::SwitchToStore(pWVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* QuickJumpUtil::ShowPlantLevelUp() */

void QuickJumpUtil::ShowPlantLevelUp(void)

{
  GameStateMgr::ShowLevelUp(gGameStateMgr,5,5);
  return;
}


/* QuickJumpUtil::ShowPvP() */

void __thiscall QuickJumpUtil::ShowPvP(QuickJumpUtil *this)

{
  INetworkMsgProcess *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
  INetworkMsgProcess::RequestPVPLogin(this_00);
  return;
}


/* QuickJumpUtil::ShowBattleZ() */

void QuickJumpUtil::ShowBattleZ(void)

{
  GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
  return;
}


/* QuickJumpUtil::ShowPlantFamily() */

void QuickJumpUtil::ShowPlantFamily(void)

{
  GameStateMgr::ShowPlantFamily(gGameStateMgr,5,5);
  return;
}


/* QuickJumpUtil::ShowPlantGeneEnhancement() */

void QuickJumpUtil::ShowPlantGeneEnhancement(void)

{
  GameStateMgr::ShowPlantGeneEnhancement(gGameStateMgr,5,5);
  return;
}


/* QuickJumpUtil::ShowArtifactCultivation() */

void QuickJumpUtil::ShowArtifactCultivation(void)

{
  GameStateMgr::ShowArtifactCultivation(gGameStateMgr,5,5);
  return;
}


/* QuickJumpUtil::ShowAvatarListView() */

void QuickJumpUtil::ShowAvatarListView(void)

{
  GameStateMgr::ShowPlantAvatar(gGameStateMgr,5,5);
  return;
}


/* QuickJumpUtil::ShowAdventure() */

void QuickJumpUtil::ShowAdventure(void)

{
  Sexy::LazySingleton<PlantAdventureMgr>::GetInstancePtr();
  PlantAdventureMgr::onButtonClicked();
  return;
}


/* QuickJumpUtil::ShowTravelLog() */

void __thiscall QuickJumpUtil::ShowTravelLog(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x29f8,true,0);
  return;
}


/* QuickJumpUtil::ShowEndLess() */

void __thiscall QuickJumpUtil::ShowEndLess(QuickJumpUtil *this)

{
  char cVar1;
  long lVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  ActivityManager *this_02;
  
  this[8] = (QuickJumpUtil)0x1;
  lVar2 = Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  cVar1 = FUN_04fb38e8(*(undefined1 *)(lVar2 + 0x1f9));
  if (cVar1 == '\0') {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    INetworkMsgProcess::RequestStaticConfig(this_01);
    return;
  }
  this_02 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_02,0x297e,true,0);
  return;
}


/* QuickJumpUtil::ShowSecretStore() */

void __thiscall QuickJumpUtil::ShowSecretStore(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a39,true,0);
  return;
}


/* QuickJumpUtil::ShowNoviceSevenDays() */

void __thiscall QuickJumpUtil::ShowNoviceSevenDays(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a4c,true,0);
  return;
}


/* QuickJumpUtil::ShowCallofWish() */

void __thiscall QuickJumpUtil::ShowCallofWish(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a4f,true,0);
  return;
}


/* QuickJumpUtil::ShowArtifactPresent() */

void __thiscall QuickJumpUtil::ShowArtifactPresent(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a50,true,0);
  return;
}


/* QuickJumpUtil::ShowPvz1Achievement() */

void __thiscall QuickJumpUtil::ShowPvz1Achievement(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a57,true,0);
  return;
}


/* QuickJumpUtil::ShowArborDay() */

void __thiscall QuickJumpUtil::ShowArborDay(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a5c,true,0);
  return;
}


/* QuickJumpUtil::ShowNewPVPBattlePass() */

void __thiscall QuickJumpUtil::ShowNewPVPBattlePass(QuickJumpUtil *this)

{
  ActivityManager *this_00;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a6d,true,0);
  return;
}


/* QuickJumpUtil::onNotifyStaticConfig(int, S2C_StaticConfig const*) */

void __thiscall
QuickJumpUtil::onNotifyStaticConfig(QuickJumpUtil *this,int param_1,S2C_StaticConfig *param_2)

{
  DangerRoomManager *this_00;
  ActivityManager *this_01;
  
  if ((param_1 == 0) && (this[8] != (QuickJumpUtil)0x0)) {
    this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
    DangerRoomManager::InitProps(this_00,(S2C_DangerRoomPropertySheet *)(param_2 + 0x18));
    this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::Request(this_01,0x297e,true,0);
    this[8] = (QuickJumpUtil)0x1;
    return;
  }
  this[8] = (QuickJumpUtil)0x0;
  return;
}


/* QuickJumpUtil::ShowNewPVP() */

void __thiscall QuickJumpUtil::ShowNewPVP(QuickJumpUtil *this)

{
  this[8] = (QuickJumpUtil)0x1;
  Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::CheatEnter();
  return;
}


/* QuickJumpUtil::ShowChallengeLevel() */

void __thiscall QuickJumpUtil::ShowChallengeLevel(QuickJumpUtil *this)

{
  FestivalManager *this_00;
  ActivityManager *this_01;
  
  this[8] = (QuickJumpUtil)0x1;
  this_00 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::FestivalInit(this_00);
  this_01 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_01,0x2970,true,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickJumpUtil::ShowPvz1() */

void QuickJumpUtil::ShowPvz1(void)

{
  char cVar1;
  RtObject *this;
  WorldMap_ChallengeButton *pWVar2;
  PlayerInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapChallengeButton");
  this = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((this != (RtObject *)0x0) &&
     (pWVar2 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(this),
     pWVar2 != (WorldMap_ChallengeButton *)0x0)) {
    cVar1 = PVZ1ModeUtils::HasCompleteTutorial();
    if (cVar1 == '\0') {
      PVZ1ModeUtils::EnterTutorial();
    }
    else {
      PVZ1ModeUtils::SendGet_MainEntry(false);
    }
    this_00 = (PlayerInfo *)ProfileUtils::Profile();
    PlayerInfo::SetPVZ1ModeFirstPlay(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* QuickJumpUtil::QuickJumpUtil() */

void __thiscall QuickJumpUtil::QuickJumpUtil(QuickJumpUtil *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<QuickJumpUtil>::LazySingleton((LazySingleton<QuickJumpUtil> *)this);
  this[8] = (QuickJumpUtil)0x0;
  *(undefined ***)this = &PTR__QuickJumpUtil_06a2a0c0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLogin);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<QuickJumpUtil,void(QuickJumpUtil::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVPLogin,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<QuickJumpUtil,void(QuickJumpUtil::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyStaticConfig);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<int,S2C_StaticConfig_const*,Sexy::CBMemberTranslatorX<QuickJumpUtil,void(QuickJumpUtil::*)(int,S2C_StaticConfig_const*)>>
            ((MessageRouter *)puVar1,Message::NotifyStaticConfig,&local_b0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* QuickJumpUtil::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
QuickJumpUtil::onNotifyRefreshActivityList(QuickJumpUtil *this,bool param_1,set *param_2)

{
  bool bVar1;
  DangerRoomManager *this_00;
  MysteryCrystalMgr *this_01;
  ArtifactPresentMgr *this_02;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[8] != (QuickJumpUtil)0x0)) {
    local_1c = 0x29f8;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      UISingletonDialog<UITravelLog>::ShowDialog();
    }
    else {
      local_1c = 0x297e;
      local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
      local_10 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      if (bVar1) {
        this_00 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        DangerRoomManager::ShowMainDialog(this_00);
      }
      else {
        local_1c = 0x2970;
        local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar1) {
          UISingletonDialog<ActivityLevelsChoose>::ShowDialog();
        }
        else {
          local_1c = 0x2a39;
          local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                               ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          if (bVar1) {
            this_01 = (MysteryCrystalMgr *)Sexy::LazySingleton<MysteryCrystalMgr>::GetInstance();
            MysteryCrystalMgr::Init(this_01,true);
          }
          else {
            local_1c = 0x2a4c;
            local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                 ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
            local_10 = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
            if (bVar1) {
              UISingletonDialog<UINoviceSevenDays>::ShowDialog();
            }
            else {
              local_1c = 0x2a4f;
              local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                   ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c
                                   );
              local_10 = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
              if (bVar1) {
                UISingletonDialog<UICallofWish>::ShowDialog();
              }
              else {
                local_1c = 0x2a50;
                local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                     ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                      &local_1c);
                local_10 = std::
                           map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)param_2);
                bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10)
                ;
                if (bVar1) {
                  this_02 = (ArtifactPresentMgr *)
                            Sexy::LazySingleton<ArtifactPresentMgr>::GetInstance();
                  ArtifactPresentMgr::Init(this_02);
                }
                else {
                  local_1c = 0x2a57;
                  local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                       ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                        &local_1c);
                  local_10 = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_2);
                  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,
                                            (rbtree_iterator *)&local_10);
                  if (bVar1) {
                    UISingletonDialog<PVZ1ModeAchievement>::ShowDialog();
                  }
                  else {
                    local_1c = 0x2a5c;
                    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                          &local_1c);
                    local_10 = std::
                               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)param_2);
                    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,
                                              (rbtree_iterator *)&local_10);
                    if (bVar1) {
                      UISingletonDialog<UIArborDay>::ShowDialog();
                    }
                    else {
                      local_1c = 0x2a54;
                      local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                           ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                            &local_1c);
                      local_10 = std::
                                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        *)param_2);
                      bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,
                                                (rbtree_iterator *)&local_10);
                      if (bVar1) {
                        PVZ1ModeUtils::GoToPVZ1MainMenu();
                      }
                      else {
                        local_1c = 0x2a6d;
                        local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                                             ((set<int,std::less<int>,std::allocator<int>> *)param_2
                                              ,&local_1c);
                        local_10 = std::
                                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)param_2);
                        bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,
                                                  (rbtree_iterator *)&local_10);
                        if (bVar1) {
                          UISingletonDialog<UINewPVPBattlePass>::ShowDialog();
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
  this[8] = (QuickJumpUtil)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

