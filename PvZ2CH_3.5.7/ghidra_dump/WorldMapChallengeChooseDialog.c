// Class: WorldMapChallengeChooseDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::onSuccessResponse() */

void WorldMapChallengeChooseDialog::onSuccessResponse(void)

{
  ProfileMgr *this;
  TGALogMgr *pTVar1;
  size_t in_x2;
  TGAPennyPursuitData aTStack_e8 [112];
  TGAPennyPursuitData aTStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this);
  GameStateMgr::ShowRiftMap(gGameStateMgr);
  TGAPennyPursuitData::TGAPennyPursuitData(aTStack_e8);
  std::string::append((string *)aTStack_e8,"1",in_x2);
  pTVar1 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPennyPursuitData::TGAPennyPursuitData(aTStack_78,aTStack_e8);
  TGALogMgr::LogPennyPursuit(pTVar1,aTStack_78);
  TGAPennyPursuitData::~TGAPennyPursuitData(aTStack_78);
  TGAPennyPursuitData::~TGAPennyPursuitData(aTStack_e8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapChallengeChooseDialog::onNetworkError(int) */

int WorldMapChallengeChooseDialog::onNetworkError(int param_1)

{
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::GetAssociatedMainWidget() */

void WorldMapChallengeChooseDialog::GetAssociatedMainWidget(void)

{
  undefined8 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapChallengeButton");
  uVar1 = UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WorldMapChallengeChooseDialog::GetItemCount() */

void __thiscall WorldMapChallengeChooseDialog::GetItemCount(WorldMapChallengeChooseDialog *this)

{
  FUN_04594550(*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x200));
  return;
}


/* WorldMapChallengeChooseDialog::GetItemRightMargin() */

float WorldMapChallengeChooseDialog::GetItemRightMargin(void)

{
  int iVar1;
  
  iVar1 = FUN_04594a68(0x10);
  return (float)iVar1;
}


/* WorldMapChallengeChooseDialog::onPVPLogin(bool) */

void __thiscall
WorldMapChallengeChooseDialog::onPVPLogin(WorldMapChallengeChooseDialog *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  LawnApp::KillChallengeChooseDialog(gLawnApp);
  MessageRouter::Post((_func_void *)gMessageRouter);
  GameStateMgr::TranslateTo(gGameStateMgr,0x16,5,5);
  return;
}


/* WorldMapChallengeChooseDialog::onRiftNetworkResponse(int, int) */

void __thiscall
WorldMapChallengeChooseDialog::onRiftNetworkResponse
          (WorldMapChallengeChooseDialog *this,int param_1,int param_2)

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
/* WorldMapChallengeChooseDialog::InitView() */

void __thiscall WorldMapChallengeChooseDialog::InitView(WorldMapChallengeChooseDialog *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = (**(code **)(*(long *)this + 0x378))();
  if (-1 < iVar1) {
    uVar2 = FUN_04594a68(0);
    (**(code **)(*(long *)this + 0x198))
              (this,uVar2,uVar2,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214));
    plVar4 = (long *)(**(code **)(*(long *)this + 0x358))(this);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0xb0))(&local_10);
      iVar1 = FUN_04594a68(0x14);
      lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d50);
      iVar3 = FUN_04594a68(10);
      (**(code **)(*(long *)this + 0x1a8))
                (this,local_10 - *(int *)(this + 0x210) / 2,
                 (local_c - *(int *)(this + 0x214)) -
                 (int)((float)(iVar1 + *(int *)(lVar5 + 0x3c)) * 0.5 - (float)iVar3));
    }
  }
  this[0x59] = (WorldMapChallengeChooseDialog)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldMapChallengeChooseDialog::GetBaseHeight() */

int WorldMapChallengeChooseDialog::GetBaseHeight(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d50);
  iVar1 = FUN_04594a68(0x14);
  return iVar1 + *(int *)(lVar2 + 0x3c);
}


/* WorldMapChallengeChooseDialog::ButtonPress(int) */

void WorldMapChallengeChooseDialog::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to WorldMapChallengeChooseDialog::ButtonPress(int) */

void __thiscall
WorldMapChallengeChooseDialog::ButtonPress(WorldMapChallengeChooseDialog *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapChallengeChooseDialog::ButtonDepress(WorldMapChallengeChooseDialog *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  ProfileMgr *this_01;
  long lVar3;
  char *pcVar4;
  RtObject *pRVar5;
  WorldMap_ChallengeButton *pWVar6;
  NewPVPMgr *pNVar7;
  PlayerInfo *this_02;
  INetworkMsgProcess *this_03;
  string asStack_38 [8];
  string asStack_30 [8];
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)(this + 0xe0) + 0x30))(this + 0xe0);
  if (cVar1 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_01);
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Button_Click_Release");
    switch(param_1) {
    case 5:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        WorldMap_ChallengeButton::RequestData(pWVar6,0x297e);
      }
      break;
    case 0x1b:
      GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
      break;
    case 0x34:
      iVar2 = FUN_04594548(*(undefined4 *)(lVar3 + 0x1100));
      if (iVar2 == 0) {
        FUN_0459477c(lVar3 + 0x1100);
      }
      this_00 = gLawnApp;
      cVar1 = LawnApp::isSyncProfileSuccess(gLawnApp);
      if (cVar1 == '\0') {
        std::string::string(asStack_38,"[REVIVE_TIP]");
        std::string::string(asStack_30,"[PVP_ERROR_NOT_SYNC]");
        LawnApp::ShowMessageDialogNoCallback(this_00,asStack_38,asStack_30);
        std::string::~string(asStack_30);
        nop();
        std::string::~string(asStack_38);
        nop();
      }
      else {
        this_03 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(gNetworkMgr);
        INetworkMsgProcess::RequestPVPLogin(this_03);
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_UI_Map_Select_Universe_Release");
      }
      goto LAB_0459551c;
    case 0x35:
      RiftUtils::SendGet_MainEntry();
      break;
    case 0x3f:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        cVar1 = PVZ1ModeUtils::HasCompleteTutorial();
        if (cVar1 == '\0') {
          PVZ1ModeUtils::EnterTutorial();
        }
        else {
          PVZ1ModeUtils::SendGet_MainEntry(false);
        }
        this_02 = (PlayerInfo *)ProfileUtils::Profile();
        PlayerInfo::SetPVZ1ModeFirstPlay(this_02,false);
      }
      break;
    case 0x40:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        WorldMap_ChallengeButton::RequestData(pWVar6,0x2a58);
      }
      break;
    case 0x45:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        WorldMap_ChallengeButton::RequestData(pWVar6,0x2a61);
      }
      break;
    case 0x46:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        cVar1 = CardGameUtils::HasCompleteTutorial();
        if (cVar1 == '\0') {
          CardGameUtils::EnterTutorial();
        }
        else {
          GameStateMgr::QueueWarpTunnel(gGameStateMgr);
          std::string::string(asStack_30,"card_game");
          CardGameUtils::GoToCardGameWorldMap(asStack_30,true);
          std::string::~string(asStack_30);
          nop();
        }
      }
      break;
    case 0x47:
      cVar1 = LawnApp::IsNetworkModuleOK();
      if (((cVar1 != '\0') &&
          (pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this),
          pRVar5 != (RtObject *)0x0)) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        FUN_04594a1c(afStack_28);
        NewPVPMgr::RequestMainEntryData(pNVar7,afStack_28);
        std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
      }
      break;
    case 0x4d:
      pRVar5 = (RtObject *)(**(code **)(*(long *)this + 0x358))(this);
      if ((pRVar5 != (RtObject *)0x0) &&
         (pWVar6 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar5),
         pWVar6 != (WorldMap_ChallengeButton *)0x0)) {
        WorldMap_ChallengeButton::RequestData(pWVar6,0x2a88);
      }
    }
    LawnApp::KillChallengeChooseDialog(gLawnApp);
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
LAB_0459551c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapChallengeChooseDialog::ButtonDepress(int) */

void __thiscall
WorldMapChallengeChooseDialog::ButtonDepress(WorldMapChallengeChooseDialog *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog() */

void __thiscall
WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog(WorldMapChallengeChooseDialog *this)

{
  LawnApp *pLVar1;
  char cVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06865120;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapChallengeChooseDialog_068654f8;
  *(undefined **)(this + 0xd8) = &DAT_068654b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0x150));
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LUA_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"LUA_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UPDATE_UI_Anniversary");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_10,"UPDATE_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x1f8));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x1c0));
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::~unordered_map((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    *)(this + 0x188));
  InterfaceChooseDialog::~InterfaceChooseDialog((InterfaceChooseDialog *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog() */

void __thiscall
WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog(WorldMapChallengeChooseDialog *this)

{
  ~WorldMapChallengeChooseDialog(this + -0xe0);
  return;
}


/* WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog() */

void __thiscall
WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog(WorldMapChallengeChooseDialog *this)

{
  ~WorldMapChallengeChooseDialog(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog() */

void __thiscall
WorldMapChallengeChooseDialog::~WorldMapChallengeChooseDialog(WorldMapChallengeChooseDialog *this)

{
  ~WorldMapChallengeChooseDialog(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::GetHomeActivityPos(HomeActityType, Sexy::SexyVector2&) */

void __thiscall
WorldMapChallengeChooseDialog::GetHomeActivityPos
          (WorldMapChallengeChooseDialog *this,undefined4 param_2,float *param_3)

{
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             *)(this + 0xe8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             ::find(this_00,(HomeActityType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar3 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar3) {
    puVar4 = (undefined8 *)
             std::
             map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
             ::operator[](this_00,(HomeActityType *)local_24);
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x4c);
    *(undefined8 *)param_3 = *puVar4;
    *param_3 = *param_3 + (float)iVar1;
    param_3[1] = param_3[1] + (float)iVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* non-virtual thunk to WorldMapChallengeChooseDialog::GetHomeActivityPos(HomeActityType,
   Sexy::SexyVector2&) */

void __thiscall
WorldMapChallengeChooseDialog::GetHomeActivityPos(WorldMapChallengeChooseDialog *this)

{
  GetHomeActivityPos(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::PrepareActivityConfig() */

void __thiscall
WorldMapChallengeChooseDialog::PrepareActivityConfig(WorldMapChallengeChooseDialog *this)

{
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  char cVar1;
  string *psVar2;
  RiftUtils *this_02;
  ProfileMgr *pPVar3;
  PlayerInfo *pPVar4;
  size_t in_x2;
  size_t sVar5;
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
             *)(this + 0x118);
  local_8 = ___stack_chk_guard;
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x1f8);
  std::
  unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
  ::clear(this_00);
  local_10[0] = 5;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_ENDLESS_CHALLENGE",in_x2);
  sVar5 = 0x1b;
  local_10[0] = 0x1b;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_ACTIVITY_HOME_JOUST",sVar5);
  sVar5 = 0x34;
  local_10[0] = 0x34;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_BIG_ICON_PVP",sVar5);
  local_18[0] = 0x35;
  this_02 = (RiftUtils *)
            std::
            unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
            ::operator[](this_00,local_18);
  RiftUtils::GetChallengeChooseDialogResourceName(this_02);
  FUN_05474278(this_02,(string *)local_10);
  std::string::~string((string *)local_10);
  sVar5 = 0x3f;
  local_10[0] = 0x3f;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_PVZ1_ICON",sVar5);
  sVar5 = 0x40;
  local_10[0] = 0x40;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_CUSTOM_LEVEL_ICON",sVar5);
  sVar5 = 0x45;
  local_10[0] = 0x45;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_UNCHARTED_ICON",sVar5);
  sVar5 = 0x46;
  local_10[0] = 0x46;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_CARD_GAME_ICON",sVar5);
  sVar5 = 0x47;
  local_10[0] = 0x47;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_NEW_PVP_ICON",sVar5);
  sVar5 = 0x4d;
  local_10[0] = 0x4d;
  psVar2 = (string *)
           std::
           unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
           ::operator[](this_00,(int *)local_10);
  std::string::append(psVar2,"IMAGE_UI_HUD_WORLDMAP_PLANT_WARS_ICON",sVar5);
  std::vector<int,std::allocator<int>>::clear(this_01);
  std::string::string((string *)local_10,"egypt13");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 5;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  std::string::string((string *)local_10,"egypt12");
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedLevel((string *)local_10,false,pPVar4);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    local_10[0] = 0x1b;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(2,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x34;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(2,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x45;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(7,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x46;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(4,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x35;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(5,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x3f;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(6,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x40;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(9,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x47;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar4 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
  cVar1 = ProfileUtils::HasCompletedSecondWorldLevel(10,false,pPVar4);
  if (cVar1 != '\0') {
    local_10[0] = 0x4d;
    std::vector<int,std::allocator<int>>::push_back(this_01,(int *)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WorldMapChallengeChooseDialog::LayoutItems() */

void __thiscall WorldMapChallengeChooseDialog::LayoutItems(WorldMapChallengeChooseDialog *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  PVZ2UIButton *pPVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_210;
  undefined1 auStack_1f8 [12];
  int local_1ec;
  PVZ2UIButton *local_1e8;
  string asStack_1e0 [8];
  undefined8 local_1d8;
  string asStack_1d0 [8];
  string asStack_1c8 [8];
  int local_1c0 [4];
  undefined1 local_1b0 [3] [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [264];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = (**(code **)(*(long *)this + 0x350))();
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  local_1e8 = (PVZ2UIButton *)0x0;
  std::
  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
  ::clear((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
           *)(this + 0xe8));
  fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
  fVar18 = (float)(**(code **)(*(long *)this + 0x330))(this);
  fVar19 = (float)(**(code **)(*(long *)this + 0x338))(this);
  std::
  unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
  ::clear((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
           *)(this + 0x150));
  local_1ec = 0;
  Set8BytesTo0(asStack_1e0);
  lVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d50);
  iVar6 = FUN_04594a68(0x14);
  iVar1 = *(int *)(lVar11 + 0x3c);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d28);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d28);
  iVar8 = SalesProgressBar::GetCurrentLevel(this_01);
  if (iVar4 < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    fVar20 = (float)(int)((float)iVar7 * 0.9);
    lVar11 = 0;
    uVar9 = 0xffffffff;
    do {
      while( true ) {
        piVar12 = (int *)FUN_0459457c(*(undefined8 *)(this + 0x1f8),lVar11);
        local_1ec = *piVar12;
        local_1d8 = std::
                    unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                    ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                            *)(this + 0x188),&local_1ec);
        uVar13 = FUN_04595300();
        local_1b0[0]._0_8_ = uVar13;
        cVar3 = std::__exception_ptr::operator==
                          ((exception_ptr *)&local_1d8,(exception_ptr *)local_1b0);
        if ((cVar3 != '\0') ||
           (lVar14 = std::__detail::
                     _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                     operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                                 *)&local_1d8), *(char *)(lVar14 + 4) == '\0')) break;
        uVar13 = std::
                 unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                 ::operator[]((unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,std::string>>>
                               *)(this + 0x118),&local_1ec);
        thunk_FUN_05475e00(asStack_1e0,uVar13);
        std::string::string((string *)local_1b0,"");
        FUN_05462980(auStack_178,(string *)local_1b0);
        std::string::~string((string *)local_1b0);
        nop();
        FUN_0544a0a4(auStack_110,0);
        FUN_0545ec84(auStack_168,asStack_1e0);
        FUN_05462824((string *)local_1b0,auStack_178);
        local_210 = StringHelper::ToImage((string *)local_1b0,false);
        std::string::~string((string *)local_1b0);
        if (local_210 == 0) {
          local_210 = CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d28);
          std::string::string(asStack_1d0,"WorldMapChallengeChooseDialog");
          FUN_05462824(asStack_1c8,auStack_178);
          std::vector<std::string,std::allocator<std::string>>::vector
                    ((vector<std::string,std::allocator<std::string>> *)local_1b0,asStack_1c8,1,
                     auStack_1f8);
          std::string::string((string *)local_1c0,"");
          BehaviorLog::inGameBehavior(asStack_1d0,(vector *)local_1b0,(string *)local_1c0);
          std::string::~string((string *)local_1c0);
          nop();
          std::vector<std::string,std::allocator<std::string>>::~vector
                    ((vector<std::string,std::allocator<std::string>> *)local_1b0);
          std::string::~string(asStack_1c8);
          std::string::~string(asStack_1d0);
          nop();
          if (local_210 == 0) break;
        }
        uVar9 = uVar9 + 1;
        FUN_05478178((Color *)local_1c0,&DAT_056f11a8,asStack_1d0);
        Sexy::Color::Color((Color *)local_1b0,1);
        pPVar15 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar15,local_1ec,(ButtonListener *)(this + 0xd8),(wstring *)local_1c0,
                   (Color *)local_1b0);
        local_1e8 = pPVar15;
        FUN_05476c50((Color *)local_1c0);
        nop();
        pPVar15 = local_1e8;
        PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_1b0,local_210,2);
        Sexy::Color::Color((Color *)local_1c0,0x5a,0x5a,0x5a);
        PVZ2UIButton::SetDialogStates(pPVar15,(PVZ2UIImage *)local_1b0,(Color *)local_1c0);
        pPVar15 = local_1e8;
        iVar10 = FUN_04594a68(8);
        iVar2 = (iVar6 + iVar1) * ((int)uVar9 >> 2);
        (**(code **)(*(long *)pPVar15 + 0x198))
                  (pPVar15,(int)fVar17,iVar10 + iVar2,(int)((float)iVar7 * 0.9),
                   (int)((float)iVar8 * 0.9));
        local_1c0[0] = local_1ec;
        puVar16 = (undefined8 *)
                  std::
                  map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                  ::operator[]((map<HomeActityType,Sexy::SexyVector2,std::less<HomeActityType>,std::allocator<std::pair<HomeActityType_const,Sexy::SexyVector2>>>
                                *)(this + 0xe8),(HomeActityType *)local_1c0);
        iVar10 = FUN_04594a68(8);
        Sexy::FastCurve::SetOutRange((FastCurve *)local_1b0,fVar17,(float)(iVar2 + iVar10));
        *puVar16 = local_1b0[0]._0_8_;
        if ((uVar9 & 3) == 3) {
          fVar17 = fVar20 + fVar19 + fVar17;
          if ((float)*(int *)(this + 0x210) < fVar17) {
            *(int *)(this + 0x210) = (int)fVar17;
          }
          fVar17 = (float)(**(code **)(*(long *)this + 0x328))(this);
        }
        else {
          fVar17 = fVar17 + fVar20 + fVar18;
        }
        lVar11 = lVar11 + 1;
        (**(code **)(*(long *)this + 0x60))(this,local_1e8);
        local_1b0[0] = std::make_pair<int&,PVZ2UIButton*&>(&local_1ec,&local_1e8);
        std::
        unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
        ::insert<std::pair<int,PVZ2UIButton*>,void>
                  ((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                    *)(this + 0x150),(pair *)local_1b0);
        if (iVar4 <= (int)lVar11) goto LAB_04598a10;
      }
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar4);
LAB_04598a10:
    if (2 < (int)uVar9) goto LAB_04598a2c;
  }
  *(int *)(this + 0x210) = (int)((fVar19 - fVar18) + fVar17);
LAB_04598a2c:
  uVar5 = (**(code **)(*(long *)this + 0x348))(this);
  *(undefined4 *)(this + 0x214) = uVar5;
  std::string::~string(asStack_1e0);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::FillState() */

void __thiscall WorldMapChallengeChooseDialog::FillState(WorldMapChallengeChooseDialog *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  PlayerInfo *pPVar5;
  ProfileMgr *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  bool local_96;
  bool local_95;
  int local_94;
  undefined8 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  lVar8 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = (**(code **)(*(long *)this + 0x350))();
  local_96 = false;
  local_95 = false;
  if (0 < iVar2) {
    do {
      local_96 = false;
      local_95 = false;
      piVar4 = (int *)FUN_0459457c(*(undefined8 *)(this + 0x1f8),lVar8);
      local_94 = *piVar4;
      switch(local_94) {
      case 5:
        Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
        cVar1 = DangerRoomManager::IsOpened();
        if (cVar1 != '\0') {
          local_96 = true;
          iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
          ActivityManager::GetActiveItem(iVar3);
          iVar3 = ActiveItem::GetLeftDays(aAStack_88);
          if (-1 < iVar3) {
            local_95 = true;
          }
          goto LAB_04598d80;
        }
        break;
      default:
        goto switchD_04598c70_caseD_6;
      case 0x1b:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 == '\0') goto LAB_04598c90;
        goto LAB_04598d34;
      case 0x34:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          Sexy::LazySingleton<PVPManager>::GetInstancePtr();
          cVar1 = PVPManager::IsActivated();
          if (cVar1 != '\0') {
            lVar6 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
            if (lVar6 == 0) {
              lVar6 = LawnApp::GetWorldMap(gLawnApp);
              if ((lVar6 == 0) || (lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0)), lVar6 == 0)
                 ) {
LAB_04599070:
                local_96 = true;
                goto LAB_04598c90;
              }
              cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar6 + 0x38));
              if (cVar1 == '\0') {
                lVar6 = LawnApp::GetWorldMap(gLawnApp);
                lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar6 + 0x38));
                if (cVar1 == '\0') {
                  lVar6 = LawnApp::GetWorldMap(gLawnApp);
                  lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                  cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar6 + 0x38));
                  if (cVar1 == '\0') {
                    lVar6 = LawnApp::GetWorldMap(gLawnApp);
                    lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                    cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar6 + 0x38));
                    if (cVar1 == '\0') {
                      lVar6 = LawnApp::GetWorldMap(gLawnApp);
                      lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                      cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar6 + 0x38));
                      goto joined_r0x04599068;
                    }
                  }
                }
              }
            }
            else {
              lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
              cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar7 + 0x38));
              if (cVar1 == '\0') {
                lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar7 + 0x38));
                if (cVar1 == '\0') {
                  lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                  cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar7 + 0x38));
                  if (cVar1 == '\0') {
                    lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                    cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar7 + 0x38));
                    if (cVar1 == '\0') {
                      lVar6 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                      cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar6 + 0x38));
joined_r0x04599068:
                      if (cVar1 == '\0') goto LAB_04599070;
                    }
                  }
                }
              }
            }
            local_96 = false;
          }
        }
        goto LAB_04598c90;
      case 0x35:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        cVar1 = local_70;
        ActiveItem::~ActiveItem(aAStack_88);
        if (cVar1 != '\0') {
          this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
          std::string::string((string *)&local_90,"egypt9");
          cVar1 = PlayerInfo::GetLevelCompleted(pPVar5,(string *)&local_90);
          std::string::~string((string *)&local_90);
          nop();
          if (cVar1 != '\0') {
            lVar6 = GameStateMgr::GetQueuedWorldMapDestination(gGameStateMgr);
            if (lVar6 == 0) {
              lVar6 = LawnApp::GetWorldMap(gLawnApp);
              if ((lVar6 != 0) && (lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0)), lVar6 != 0)
                 ) {
                cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar6 + 0x38));
                if (cVar1 == '\0') {
                  lVar6 = LawnApp::GetWorldMap(gLawnApp);
                  lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                  cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar6 + 0x38));
                  if (cVar1 == '\0') {
                    lVar6 = LawnApp::GetWorldMap(gLawnApp);
                    lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                    cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar6 + 0x38));
                    if (cVar1 == '\0') {
                      lVar6 = LawnApp::GetWorldMap(gLawnApp);
                      lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                      cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar6 + 0x38));
                      if (cVar1 == '\0') {
                        lVar6 = LawnApp::GetWorldMap(gLawnApp);
                        lVar6 = FUN_0459454c(*(undefined8 *)(lVar6 + 0x2f0));
                        cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar6 + 0x38));
                        goto joined_r0x045991f8;
                      }
                    }
                  }
                }
                goto LAB_04598fac;
              }
LAB_04599144:
              local_96 = true;
            }
            else {
              lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
              cVar1 = WorldMapUtils::IsRiftWorld((string *)(lVar7 + 0x38));
              if (cVar1 == '\0') {
                lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                cVar1 = WorldMapUtils::IsPVZ1World((string *)(lVar7 + 0x38));
                if (cVar1 == '\0') {
                  lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                  cVar1 = WorldMapUtils::IsUnchartedWorld((string *)(lVar7 + 0x38));
                  if (cVar1 == '\0') {
                    lVar7 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                    cVar1 = WorldMapUtils::IsCardGameWorld((string *)(lVar7 + 0x38));
                    if (cVar1 == '\0') {
                      lVar6 = FUN_04594544(*(undefined8 *)(lVar6 + 0xe8));
                      cVar1 = WorldMapUtils::IsPlantWarsWorld((string *)(lVar6 + 0x38));
joined_r0x045991f8:
                      if (cVar1 == '\0') goto LAB_04599144;
                    }
                  }
                }
              }
LAB_04598fac:
              local_96 = false;
            }
            local_95 = false;
            break;
          }
        }
        local_95 = false;
        break;
      case 0x3f:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          local_96 = true;
        }
        cVar1 = LocalProfileSaveData::CheckPVZ1Tips();
        if (cVar1 != '\0') {
          local_95 = true;
        }
        goto LAB_04598d80;
      case 0x40:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          local_96 = true;
          pPVar5 = (PlayerInfo *)ProfileUtils::Profile();
          cVar1 = PlayerInfo::GetCustomLevelFirstPlay(pPVar5);
          if (cVar1 != '\0') {
            local_95 = true;
            goto LAB_04598d80;
          }
        }
        goto LAB_04598d7c;
      case 0x45:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        if (local_70 != '\0') {
          local_96 = true;
          cVar1 = PVZ2UnchartedModeUtils::CheckShowNotice();
          if (cVar1 != '\0') {
            local_95 = true;
            goto LAB_04598d80;
          }
        }
LAB_04598d7c:
        local_95 = false;
LAB_04598d80:
        ActiveItem::~ActiveItem(aAStack_88);
        break;
      case 0x46:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        goto joined_r0x04598c8c;
      case 0x47:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
        goto joined_r0x04598c8c;
      case 0x4d:
        iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
        ActivityManager::GetActiveItem(iVar3);
joined_r0x04598c8c:
        if (local_70 != '\0') {
LAB_04598d34:
          local_96 = true;
        }
LAB_04598c90:
        local_95 = false;
        ActiveItem::~ActiveItem(aAStack_88);
      }
      local_90 = std::make_pair<int&,bool>(&local_94,&local_96);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x188),(pair *)&local_90);
      local_90 = std::make_pair<int&,bool>(&local_94,&local_95);
      std::
      unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
      ::insert<std::pair<HomeActityType,unsigned_char>,void>
                ((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                  *)(this + 0x1c0),(pair *)&local_90);
switchD_04598c70_caseD_6:
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::WorldMapChallengeChooseDialog(int) */

void __thiscall
WorldMapChallengeChooseDialog::WorldMapChallengeChooseDialog
          (WorldMapChallengeChooseDialog *this,int param_1)

{
  undefined *puVar1;
  LawnApp *pLVar2;
  char cVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  InterfaceChooseDialog::InterfaceChooseDialog((InterfaceChooseDialog *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_06865120;
  *(undefined **)(this + 0xd8) = &DAT_068654b0;
  *(undefined ***)(this + 0xe0) = &PTR__WorldMapChallengeChooseDialog_068654f8;
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x188),(hash *)0xa,(equal_to *)&local_50,(allocator *)&local_38);
  std::
  unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
  ::unordered_map((ulong)(this + 0x1c0),(hash *)0xa,(equal_to *)&local_50,(allocator *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f8));
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"LUA_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"LUA_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  pLVar2 = gLawnApp;
  std::string::string((string *)&local_20,"UPDATE_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar2,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  pLVar2 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)&local_20,"UPDATE_UI_Anniversary");
    LawnApp::LoadGroup(pLVar2,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
  }
  *(undefined4 *)(this + 0x210) = 0;
  PrepareActivityConfig(this);
  FillState(this);
  InitView(this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPVPLogin);
  local_70 = local_50;
  uStack_68 = uStack_48;
  local_60 = local_40;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<WorldMapChallengeChooseDialog,void(WorldMapChallengeChooseDialog::*)(bool)>>
            ((MessageRouter *)puVar1,Message::PVPLogin,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNetworkError);
  local_80 = local_28;
  local_90 = local_38;
  uStack_88 = uStack_30;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WorldMapChallengeChooseDialog,void(WorldMapChallengeChooseDialog::*)(int)>>
            ((MessageRouter *)puVar1,Message::MsgError,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftNetworkResponse);
  local_b0 = local_20;
  uStack_a8 = uStack_18;
  local_a0 = local_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<WorldMapChallengeChooseDialog,void(WorldMapChallengeChooseDialog::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::RiftNetworkResponseReceived,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::Draw(Sexy::Graphics*) */

void __thiscall
WorldMapChallengeChooseDialog::Draw(WorldMapChallengeChooseDialog *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  Image *pIVar8;
  LotteryResultProgressBar *this_00;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04594a68(0x14);
  iVar1 = *(int *)(this + 0x214);
  nop();
  iVar3 = FUN_04594a68(0);
  iVar4 = FUN_04594a68(0x14);
  Sexy::Insets::Insets(aIStack_18,iVar3,iVar4,*(int *)(this + 0x210),iVar1 - iVar2);
  uVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d50);
  Draw9SliceImage(param_1,aIStack_18,uVar7);
  pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d78);
  iVar3 = *(int *)(this + 0x210);
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13d78);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar5 = FUN_04594a68(0x14);
  iVar6 = FUN_04594a68(10);
  Sexy::Graphics::DrawImage(param_1,pIVar8,(iVar3 - iVar4) / 2,(iVar5 + (iVar1 - iVar2)) - iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMapChallengeChooseDialog::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
WorldMapChallengeChooseDialog::DrawAll
          (WorldMapChallengeChooseDialog *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  Image *pIVar9;
  long lVar10;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  iVar5 = (**(code **)(*(long *)this + 0x350))(this);
  local_24 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
LAB_0459966c:
    do {
      piVar7 = (int *)FUN_0459457c(*(undefined8 *)(this + 0x1f8),lVar10);
      local_24 = *piVar7;
      local_20 = std::
                 unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                 ::find((unordered_map<int,unsigned_char,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,unsigned_char>>>
                         *)(this + 0x1c0),&local_24);
      local_10 = FUN_04595300();
      cVar3 = std::__exception_ptr::operator==
                        ((exception_ptr *)&local_20,(exception_ptr *)&local_10);
      if ((cVar3 == '\0') &&
         (lVar8 = std::__detail::
                  _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                  operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                              *)&local_20), *(char *)(lVar8 + 4) != '\0')) {
        local_18 = std::
                   unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                   ::find((unordered_map<int,PVZ2UIButton*,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,PVZ2UIButton*>>>
                           *)(this + 0x150),&local_24);
        local_10 = FUN_045953a8();
        bVar4 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
        if (bVar4) {
          lVar8 = std::__detail::
                  _Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>::
                  operator->((_Node_const_iterator<std::pair<unsigned_int_const,unsigned_int>,false,false>
                              *)&local_18);
          lVar8 = *(long *)(lVar8 + 8);
          if (lVar8 != 0) {
            iVar1 = *(int *)(lVar8 + 0x4c);
            iVar2 = *(int *)(lVar8 + 0x48);
            lVar10 = lVar10 + 1;
            pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b13fd8);
            iVar6 = FUN_04594a68(0x10);
            Sexy::Graphics::DrawImage(param_2,pIVar9,iVar2 - iVar6,iVar1);
            if (iVar5 <= (int)lVar10) break;
            goto LAB_0459966c;
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

