// Class: TutorialMgr


/* TutorialMgr::~TutorialMgr() */

void __thiscall TutorialMgr::~TutorialMgr(TutorialMgr *this)

{
  *(undefined ***)this = &PTR__TutorialMgr_06853d40;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::LazySingleton<TutorialMgr>::~LazySingleton((LazySingleton<TutorialMgr> *)this);
  return;
}


/* TutorialMgr::~TutorialMgr() */

void __thiscall TutorialMgr::~TutorialMgr(TutorialMgr *this)

{
  ~TutorialMgr(this);
  AK::FreeHook(this);
  return;
}


/* TutorialMgr::IsExtraTutorial(MapTutorialState) */

bool __thiscall TutorialMgr::IsExtraTutorial(undefined8 param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (((7 < param_2 - 0x39) && (7 < param_2 - 0x44)) && (param_2 != 0x4d)) {
    bVar1 = (param_2 & 0xfffffffd) == 0x50;
  }
  return bVar1;
}


/* TutorialMgr::TryClearQueuedTutorial(MapTutorialState) */

void __thiscall TutorialMgr::TryClearQueuedTutorial(TutorialMgr *this,int param_2)

{
  if ((*(int *)(this + 0x10) == param_2) && (*(int *)(this + 0x10) != 0)) {
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}


/* TutorialMgr::ResetProfile() */

void TutorialMgr::ResetProfile(void)

{
  ProfileMgr *pPVar1;
  PlayerInfo *pPVar2;
  
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  ProfileUtils::DeleteAndRecreatePlayerInfo(pPVar2);
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  if (pPVar2 != (PlayerInfo *)0x0) {
    PlayerInfo::SetTutorialFirstChecked(pPVar2,true);
    return;
  }
  return;
}


/* TutorialMgr::GetTotalCompletedStars() */

void TutorialMgr::GetTotalCompletedStars(void)

{
  ProfileMgr *this;
  int iVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar1 = ProfileMgr::GetCurrentProfile(this);
  PlayerInfo::GetNumStars(iVar1);
  return;
}


/* TutorialMgr::TryProfileReset() */

void TutorialMgr::TryProfileReset(void)

{
  char cVar1;
  int iVar2;
  ProfileMgr *pPVar3;
  PlayerInfo *this;
  
  pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  cVar1 = ProfileMgr::HasValidProfile(pPVar3);
  if ((cVar1 != '\0') && (iVar2 = GetTotalCompletedStars(), iVar2 < 0xf)) {
    pPVar3 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar3);
    cVar1 = PlayerInfo::GetTutorialFirstChecked(this);
    if (cVar1 == '\0') {
      ResetProfile();
      return;
    }
  }
  return;
}


/* TutorialMgr::CompleteAllTutorials() */

void __thiscall TutorialMgr::CompleteAllTutorials(TutorialMgr *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  int iVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this_01,0x3a), cVar1 == '\0')) {
    iVar2 = 0x13;
    do {
      cVar1 = PlayerInfo::PlayerHasCompletedTutorial(this_01,iVar2);
      if ((cVar1 == '\0') && (cVar1 = IsExtraTutorial(this,iVar2), cVar1 == '\0')) {
        PlayerInfo::CompleteTutorial(this_01,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x53);
    PlayerInfo::UnlockGameFeature(this_01,4);
    PlayerInfo::SAVE_PROFILE(this_01);
    return;
  }
  return;
}


/* TutorialMgr::CompleteAllTutorials2() */

void TutorialMgr::CompleteAllTutorials2(void)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  int iVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    return;
  }
  iVar3 = 0x13;
  do {
    while (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(this_00,iVar3), cVar2 == '\0') {
      iVar1 = iVar3 + 1;
      PlayerInfo::CompleteTutorial(this_00,iVar3);
      iVar3 = iVar1;
      if (iVar1 == 0x53) goto LAB_044bb920;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x53);
LAB_044bb920:
  PlayerInfo::UnlockGameFeature(this_00,4);
  PlayerInfo::SAVE_PROFILE(this_00);
  return;
}


/* TutorialMgr::ResetAllTutorials() */

void TutorialMgr::ResetAllTutorials(void)

{
  int iVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  int iVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (this_00 == (PlayerInfo *)0x0) {
    return;
  }
  iVar3 = 0x13;
  do {
    while (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(this_00,iVar3), cVar2 != '\0') {
      iVar1 = iVar3 + 1;
      PlayerInfo::ResetTutorialProgress(this_00,iVar3);
      iVar3 = iVar1;
      if (iVar1 == 0x53) goto LAB_044bb9a4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x53);
LAB_044bb9a4:
  PlayerInfo::SAVE_PROFILE(this_00);
  return;
}


/* TutorialMgr::HasRunningIconEffect() */

void TutorialMgr::HasRunningIconEffect(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
  FUN_044b9c9c(*(undefined1 *)(lVar1 + 0x70));
  return;
}


/* TutorialMgr::HasTutorial(MapTutorialState) */

bool __thiscall TutorialMgr::HasTutorial(TutorialMgr *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  switch(param_2) {
  case 0x18:
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_044b9ca0(*(undefined4 *)(lVar2 + 0x44));
    return iVar1 == 3;
  default:
    return false;
  case 0x1c:
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_044b9ca0(*(undefined4 *)(lVar2 + 0x44));
    return iVar1 == 4;
  case 0x1d:
    return *(int *)(this + 0x10) == 0x1d;
  case 0x1e:
    return *(int *)(this + 0x10) == 0x1e;
  }
}


/* TutorialMgr::TutorialMgr() */

void __thiscall TutorialMgr::TutorialMgr(TutorialMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<TutorialMgr>::LazySingleton((LazySingleton<TutorialMgr> *)this);
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined ***)this = &PTR__TutorialMgr_06853d40;
  this[8] = (TutorialMgr)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (TutorialMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTutorialEffectEnd);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::Subscribe<int,Sexy::CBMemberTranslatorX<TutorialMgr,void(TutorialMgr::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTutorialEffectEnd,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::RequestSkipReward() */

void __thiscall TutorialMgr::RequestSkipReward(TutorialMgr *this)

{
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [3056];
  string asStack_f8 [240];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_044bac7c(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_f8,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
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
/* TutorialMgr::StartRequest(bool) */

void __thiscall TutorialMgr::StartRequest(TutorialMgr *this,bool param_1)

{
  string *this_00;
  DNetwork *this_01;
  char *__s;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2088];
  string asStack_4c0 [1208];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"s");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  if (param_1) {
    __s = "1";
  }
  else {
    __s = "0";
  }
  std::string::append(this_00,__s,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_044bac20(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_4c0,(map *)amStack_d18,30.0,(function *)afStack_d38,false,true,
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


/* TutorialMgr::CheckTutorial() */

void __thiscall TutorialMgr::CheckTutorial(TutorialMgr *this)

{
  int iVar1;
  
  iVar1 = GetTotalCompletedStars();
  StartRequest(this,iVar1 < 0xf);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::SkipTutorials() */

void __thiscall TutorialMgr::SkipTutorials(TutorialMgr *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this_00;
  long lVar5;
  WorldMap *pWVar6;
  DNetwork *pDVar7;
  uint uVar8;
  string asStack_e10 [8];
  string asStack_e08 [8];
  function<bool(Sexy::Touch_const&)> afStack_e00 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_de0 [48];
  string asStack_db0 [72];
  ActiveItem aAStack_d68 [8];
  undefined4 local_d60;
  char local_d50;
  string asStack_ce8 [2072];
  string asStack_4d0 [936];
  string asStack_128 [32];
  string asStack_108 [256];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  if (this_00 != (PlayerInfo *)0x0) {
    iVar3 = 0x13;
    do {
      while (cVar2 = PlayerInfo::PlayerHasCompletedTutorial(this_00,iVar3), cVar2 == '\0') {
        iVar1 = iVar3 + 1;
        PlayerInfo::CompleteTutorial(this_00,iVar3);
        iVar3 = iVar1;
        if (iVar1 == 0x1a) goto LAB_044bc4d8;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x1a);
LAB_044bc4d8:
    PlayerInfo::UnlockGameFeature(this_00,4);
    uVar8 = 0;
    PlayerInfo::UnlockGameFeature(this_00,3);
    PlayerInfo::UnlockGameFeature(this_00,0x10);
    PlayerInfo::UnlockGameFeature(this_00,8);
    PlayerInfo::SAVE_PROFILE(this_00);
    pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::Save(pPVar4,false,false);
    std::string::string(asStack_e10,"");
    nop();
    do {
      uVar8 = uVar8 + 1;
      Sexy::StrFormat("egypt%d",asStack_db0,(ulong)uVar8);
      PlayerInfo::SetLevelCompleted(this_00,asStack_db0,true);
      Sexy::StrFormat("egypt_level_%d",asStack_ce8,(ulong)uVar8);
      FUN_05474278(asStack_e10,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_db0);
    } while (uVar8 != 6);
    lVar5 = LawnApp::GetWorldMap(gLawnApp);
    FUN_044b9cd8(lVar5 + 0x44c);
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar6,false);
    LawnApp::GetWorldMap(gLawnApp);
    WorldMap::RefreshUIs();
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::refreshMapPathGroups(pWVar6);
    pWVar6 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::CenterOnMapEvent(pWVar6,asStack_e10,false);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_044b9ca4(local_d60);
    if ((cVar2 != '\0') && (local_d50 != '\0')) {
      ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_db0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_d68,(RtObject *)asStack_db0);
      if (cVar2 != '\0') {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_de0);
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a7b);
        if (cVar2 == '\0') {
          pDVar7 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)asStack_ce8);
          FUN_044bacd8(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          DNetwork::requestMsg
                    (pDVar7,asStack_128,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)asStack_ce8);
        }
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a4c);
        if (cVar2 == '\0') {
          pDVar7 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)asStack_ce8);
          FUN_044bad34(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          DNetwork::requestMsg
                    (pDVar7,asStack_4d0,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)asStack_ce8);
        }
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a7c);
        if (cVar2 == '\0') {
          pDVar7 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)asStack_ce8);
          FUN_044bad90(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          DNetwork::requestMsg
                    (pDVar7,asStack_108,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)asStack_ce8);
        }
        std::
        map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)amStack_de0);
      }
      ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_db0);
    }
    ActiveItem::~ActiveItem(aAStack_d68);
    std::string::~string(asStack_e10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::onNarrationFinished() */

void __thiscall TutorialMgr::onNarrationFinished(TutorialMgr *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  WorldMapChooseDialog *this_00;
  UIWidget *pUVar5;
  TutorialEffectMgr *pTVar6;
  undefined8 uVar7;
  GameMaskUI *pGVar8;
  WorldMap *pWVar9;
  DNetwork *pDVar10;
  undefined8 uVar11;
  string *psVar12;
  string asStack_e18 [8];
  ResistenceValueInfo aRStack_e10 [8];
  string asStack_e08 [8];
  function<bool(Sexy::Touch_const&)> afStack_e00 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_de0 [48];
  string asStack_db0 [72];
  ActiveItem aAStack_d68 [8];
  undefined4 local_d60;
  char local_d50;
  Insets aIStack_ce8 [2072];
  string asStack_4d0 [936];
  string asStack_128 [32];
  string asStack_108 [256];
  long local_8;
  
  iVar3 = *(int *)(this + 0xc);
  local_8 = ___stack_chk_guard;
  switch(iVar3) {
  case 1:
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_044b9ca4(local_d60);
    if ((cVar2 != '\0') && (local_d50 != '\0')) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      std::string::string(asStack_e18,"");
      nop();
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_e10);
      std::string::string((string *)aIStack_ce8,"UIWorldMapNewPlayerButton");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aIStack_ce8);
      std::string::~string((string *)aIStack_ce8);
      nop();
      if ((pUVar5 != (UIWidget *)0x0) && (cVar2 = UIWidget::IsVisible(pUVar5), cVar2 != '\0')) {
        uVar7 = LawnApp::GetWorldMap(gLawnApp);
        std::string::string(asStack_db0,"");
        UIWidget::GetDrawRect();
        pGVar8 = (GameMaskUI *)GameMaskUI::ShowMask(uVar7,1,asStack_db0,(string *)aIStack_ce8);
        GameMaskUI::EnableScale(pGVar8,false);
        std::string::~string(asStack_db0);
        nop();
      }
      ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_db0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_d68,(RtObject *)asStack_db0);
      if (cVar2 != '\0') {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_de0);
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a7b);
        if (cVar2 == '\0') {
          pDVar10 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)aIStack_ce8);
          FUN_044badec(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          DNetwork::requestMsg
                    (pDVar10,asStack_128,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)aIStack_ce8);
        }
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a4c);
        if (cVar2 == '\0') {
          pDVar10 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)aIStack_ce8);
          FUN_044bae48(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          DNetwork::requestMsg
                    (pDVar10,asStack_4d0,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)aIStack_ce8);
        }
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a7c);
        if (cVar2 == '\0') {
          pDVar10 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)aIStack_ce8);
          FUN_044baea4(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          psVar12 = asStack_108;
LAB_044bcf88:
          DNetwork::requestMsg
                    (pDVar10,psVar12,(map *)amStack_de0,30.0,(function *)afStack_e00,true,true,
                     asStack_e08,0);
          std::string::~string(asStack_e08);
          nop();
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_e00);
          _PacketId::~_PacketId((_PacketId *)aIStack_ce8);
        }
LAB_044bcb24:
        std::
        map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
        ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                *)amStack_de0);
      }
LAB_044bcc68:
      ActivityCollectionData::~ActivityCollectionData((ActivityCollectionData *)asStack_db0);
      std::string::~string(asStack_e18);
    }
    goto LAB_044bcc78;
  case 2:
  case 3:
  case 0xe:
  case 0xf:
    if (iVar3 == 0xf) {
      pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::handleTutorialEnd(pWVar9,false);
    }
    std::string::string(asStack_e08,"");
    nop();
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)amStack_de0);
    pLVar1 = gLawnApp;
    pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    uVar4 = TutorialEffectMgr::GetActivityIdByIconType(pTVar6,*(undefined4 *)(this + 0xc));
    uVar7 = LawnApp::GetRelativeParentPosition
                      (pLVar1,uVar4,(ResistenceValueInfo *)amStack_de0,asStack_e08);
    std::string::string(asStack_db0,"");
    Sexy::Insets::Insets(aIStack_ce8);
    pGVar8 = (GameMaskUI *)GameMaskUI::ShowMask(uVar7,2,asStack_db0,aIStack_ce8);
    GameMaskUI::EnableScale(pGVar8,false);
    std::string::~string(asStack_db0);
    nop();
    std::string::~string(asStack_e08);
    break;
  case 4:
  case 0x10:
  case 0x14:
  case 0x18:
    if (iVar3 == 0x10) {
      pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      WorldMap::handleTutorialEnd(pWVar9,false);
    }
    this_00 = (WorldMapChooseDialog *)LawnApp::GetChoosePlantsDialog(gLawnApp);
    if (this_00 == (WorldMapChooseDialog *)0x0) break;
    pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    iVar3 = TutorialEffectMgr::GetSpecialIconType(pTVar6,*(undefined4 *)(this + 0xc));
    uVar7 = WorldMapChooseDialog::GetButton(this_00,iVar3);
    std::string::string(asStack_db0,"");
    Sexy::Insets::Insets(aIStack_ce8);
    uVar11 = 2;
    goto LAB_044bc97c;
  case 5:
  case 10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
    pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar9,false);
    break;
  case 0xb:
    pWVar9 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar9,false);
    std::string::string((string *)aIStack_ce8,"UIWorldMapUniverseViewButton");
    UIWidget::GetWidgetBySheetName((string *)aIStack_ce8);
    std::string::~string((string *)aIStack_ce8);
    nop();
    uVar7 = LawnApp::GetWorldMap(gLawnApp);
    std::string::string(asStack_db0,"");
    UIWidget::GetDrawRect();
    uVar11 = 4;
LAB_044bc97c:
    pGVar8 = (GameMaskUI *)GameMaskUI::ShowMask(uVar7,uVar11,asStack_db0,aIStack_ce8);
    GameMaskUI::EnableScale(pGVar8,false);
    std::string::~string(asStack_db0);
    nop();
    break;
  case 0x17:
  case 0x1a:
    std::string::string(asStack_e08,"");
    nop();
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)amStack_de0);
    pLVar1 = gLawnApp;
    pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    uVar4 = TutorialEffectMgr::GetActivityIdByIconType(pTVar6,*(undefined4 *)(this + 0xc));
    uVar7 = LawnApp::GetRelativeParentPosition
                      (pLVar1,uVar4,(ResistenceValueInfo *)amStack_de0,asStack_e08);
    std::string::string(asStack_db0,"");
    Sexy::Insets::Insets(aIStack_ce8);
    pGVar8 = (GameMaskUI *)GameMaskUI::ShowMask(uVar7,2,asStack_db0,aIStack_ce8);
    GameMaskUI::EnableScale(pGVar8,false);
    std::string::~string(asStack_db0);
    nop();
    std::string::~string(asStack_e08);
    break;
  case 0x19:
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_044b9ca4(local_d60);
    if ((cVar2 != '\0') && (local_d50 != '\0')) {
      MessageRouter::Post((_func_void *)gMessageRouter);
      std::string::string(asStack_e18,"");
      nop();
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_e10);
      std::string::string((string *)aIStack_ce8,"UIWorldMapNewPlayerButton");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aIStack_ce8);
      std::string::~string((string *)aIStack_ce8);
      nop();
      if ((pUVar5 != (UIWidget *)0x0) && (cVar2 = UIWidget::IsVisible(pUVar5), cVar2 != '\0')) {
        uVar7 = LawnApp::GetWorldMap(gLawnApp);
        std::string::string(asStack_db0,"");
        UIWidget::GetDrawRect();
        pGVar8 = (GameMaskUI *)GameMaskUI::ShowMask(uVar7,1,asStack_db0,(string *)aIStack_ce8);
        GameMaskUI::EnableScale(pGVar8,false);
        std::string::~string(asStack_db0);
        nop();
      }
      ActivityCollectionData::ActivityCollectionData((ActivityCollectionData *)asStack_db0);
      cVar2 = ActiveItem::GetDataSerialized(aAStack_d68,(RtObject *)asStack_db0);
      if (cVar2 != '\0') {
        std::
        map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
        ::map(amStack_de0);
        cVar2 = ActivityCollectionData::IsActivityClose
                          ((ActivityCollectionData *)asStack_db0,0x2a7b);
        if (cVar2 == '\0') {
          pDVar10 = (DNetwork *)DSingleton<DNetwork>::getInstance();
          _PacketId::_PacketId((_PacketId *)aIStack_ce8);
          FUN_044baf00(afStack_e00,this);
          std::string::string(asStack_e08,"[NET_CONNECTING]");
          psVar12 = asStack_128;
          goto LAB_044bcf88;
        }
        goto LAB_044bcb24;
      }
      goto LAB_044bcc68;
    }
LAB_044bcc78:
    ActiveItem::~ActiveItem(aAStack_d68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::onQueuedNarrationFinished() */

void __thiscall TutorialMgr::onQueuedNarrationFinished(TutorialMgr *this)

{
  undefined4 uVar1;
  ProfileMgr *this_00;
  long lVar2;
  WorldMap *pWVar3;
  RtObject *pRVar4;
  WorldMap_ChallengeButton *this_01;
  WorldMap_PlantLevelUpButton *pWVar5;
  TutorialEffectMgr *pTVar6;
  WorldMap_WelfareButtonExtra *this_02;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x10) != 0) {
    if (*(int *)(this + 0x10) == 0x19) {
      pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
      std::string::string(asStack_18,"egypt_level_6");
      FUN_05478178(awStack_10,L"[ADVICE_EGYPT6]",auStack_20);
      WorldMap::showLevelArrow(pWVar3,asStack_18,awStack_10);
      FUN_05476c50(awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
    }
    goto switchD_044bd1dc_caseD_1c;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = FUN_044b9c6c(*(undefined4 *)(lVar2 + 0x40));
  switch(uVar1) {
  case 0x1b:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x50:
    pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar3,false);
  default:
    goto switchD_044bd1dc_caseD_1c;
  case 0x1e:
    std::string::string(asStack_18,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 == 0) {
      std::string::~string(asStack_18);
      nop();
    }
    else {
      std::string::string((string *)awStack_10,"UIWorldMapPlantLevelUpButton");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      pWVar5 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (pWVar5 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar5);
        *(undefined4 *)(this + 0xc) = 4;
        onNarrationFinished(this);
      }
    }
    goto switchD_044bd1dc_caseD_1c;
  case 0x21:
    std::string::string(asStack_18,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 != 0) {
      std::string::string((string *)awStack_10,"UIWorldMapPlantLevelUpButton");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      pWVar5 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (pWVar5 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar5);
        pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
        TutorialEffectMgr::TriggerIconEffect(pTVar6,6);
      }
      goto switchD_044bd1dc_caseD_1c;
    }
    break;
  case 0x39:
    std::string::string(asStack_18,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 != 0) {
      std::string::string((string *)awStack_10,"UIWorldMapPlantLevelUpButton");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      pWVar5 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (pWVar5 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar5);
        pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
        TutorialEffectMgr::TriggerIconEffect(pTVar6,0x14);
      }
      goto switchD_044bd1dc_caseD_1c;
    }
    break;
  case 0x3e:
    pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar3,false);
    std::string::string(asStack_18,"UIWorldMapWelfareButtonExtra");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 != 0) {
      std::string::string((string *)awStack_10,"UIWorldMapWelfareButtonExtra");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      this_02 = Sexy::RtObject::Cast<WorldMap_WelfareButtonExtra>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_02 != (WorldMap_WelfareButtonExtra *)0x0) {
        WorldMap_WelfareButtonExtra::OnTouch(this_02);
      }
      goto switchD_044bd1dc_caseD_1c;
    }
    break;
  case 0x3f:
  case 0x44:
  case 0x52:
    pWVar3 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(pWVar3,false);
    std::string::string(asStack_18,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 != 0) {
      std::string::string((string *)awStack_10,"UIWorldMapChallengeButton");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      this_01 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (this_01 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(this_01);
      }
      goto switchD_044bd1dc_caseD_1c;
    }
    break;
  case 0x45:
    std::string::string(asStack_18,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
    if (lVar2 != 0) {
      std::string::string((string *)awStack_10,"UIWorldMapPlantLevelUpButton");
      pRVar4 = (RtObject *)UIWidget::GetWidgetBySheetName((string *)awStack_10);
      pWVar5 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar4);
      std::string::~string((string *)awStack_10);
      nop();
      std::string::~string(asStack_18);
      nop();
      if (pWVar5 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar5);
        pTVar6 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
        TutorialEffectMgr::TriggerIconEffect(pTVar6,0x18);
      }
      goto switchD_044bd1dc_caseD_1c;
    }
  }
  std::string::~string(asStack_18);
  nop();
switchD_044bd1dc_caseD_1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::onNotifyTutorialEffectEnd(int) */

void __thiscall TutorialMgr::onNotifyTutorialEffectEnd(TutorialMgr *this,int param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  WorldMap *this_01;
  TutorialEffectMgr *pTVar3;
  CrazyNPCManager *pCVar4;
  WorldMapChooseDialog *this_02;
  undefined8 uVar5;
  GameMaskUI *this_03;
  char *pcVar6;
  string *__n;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0xc) = param_1;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 1:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_DAILY_REWARD_NEWPLAYER";
    break;
  case 2:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_STAR_INTRO";
    break;
  case 3:
    __n = asStack_50;
    std::string::string(asStack_60,"");
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_00);
    iVar1 = FUN_044b9c6c(*(undefined4 *)(lVar2 + 0x40));
    if (iVar1 == 0x17) {
      std::string::append(asStack_60,"TUTORIAL_GACHA_INTRO",(size_t)__n);
    }
    else if (iVar1 == 0x18) {
      std::string::append(asStack_60,"TUTORIAL_GACHA_AVATAR_INTRO",(size_t)__n);
    }
    else if (iVar1 == 0x1c) {
      std::string::append(asStack_60,"TUTORIAL_LEGEND_GACHA_INTRO",(size_t)__n);
    }
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 != (CrazyNPCManager *)0x0) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onNarrationFinished);
      Sexy::Delegate0::Delegate0<TutorialMgr,void(TutorialMgr::*)()>(aDStack_38,asStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
    }
    std::string::~string(asStack_60);
    goto switchD_044bd68c_caseD_15;
  case 4:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_AVATAR_INTRO";
    break;
  case 5:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_TRAVELLOG_INTRO";
    break;
  case 6:
    goto switchD_044bd68c_caseD_6;
  case 7:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    pcVar6 = "[ADVICE_CHALLENGE]";
    goto LAB_044bd7ac;
  case 8:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    pcVar6 = "[ADVICE_JOUST]";
    goto LAB_044bd7ac;
  case 9:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    pcVar6 = "[ADVICE_DANGERROOM]";
    goto LAB_044bd7ac;
  case 10:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_CRYSTAL_STORE_INTRO";
    break;
  case 0xb:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_GALAXY1_INTRO";
    break;
  case 0xc:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    pcVar6 = "[ADVICE_FIRST_RECHARGE]";
LAB_044bd7ac:
    std::string::string(asStack_50,pcVar6);
    TutorialEffectMgr::DisplayAdvice(pTVar3,asStack_50);
    std::string::~string(asStack_50);
    nop();
switchD_044bd68c_caseD_6:
    this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::handleTutorialEnd(this_01,false);
    goto switchD_044bd68c_caseD_15;
  case 0xd:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    std::string::string(asStack_50,"[ADVICE_PLANT_LEVEL_UP]");
    TutorialEffectMgr::DisplayAdvice(pTVar3,asStack_50);
    std::string::~string(asStack_50);
    nop();
    this_02 = (WorldMapChooseDialog *)LawnApp::GetChoosePlantsDialog(gLawnApp);
    if (this_02 != (WorldMapChooseDialog *)0x0) {
      pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
      iVar1 = TutorialEffectMgr::GetSpecialIconType(pTVar3,*(undefined4 *)(this + 0xc));
      uVar5 = WorldMapChooseDialog::GetButton(this_02,iVar1);
      std::string::string(asStack_58,"");
      Sexy::Insets::Insets((Insets *)asStack_50);
      this_03 = (GameMaskUI *)GameMaskUI::ShowMask(uVar5,2,asStack_58,asStack_50);
      GameMaskUI::EnableScale(this_03,false);
      std::string::~string(asStack_58);
      nop();
    }
    goto switchD_044bd68c_caseD_15;
  case 0xe:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_PLANTADVENTURE_INTRO";
    break;
  case 0xf:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_PVP_INTRO";
    break;
  case 0x10:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_TRANSGENOSIS_INTRO";
    break;
  case 0x11:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_RIFT_INTRO";
    break;
  case 0x12:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_PVZ1_INTRO";
    break;
  case 0x13:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_CUSTOM_LEVEL_INTRO";
    break;
  case 0x14:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_ARTIFACT_SECOND_INTRO";
    break;
  default:
    goto switchD_044bd68c_caseD_15;
  case 0x16:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_CARD_GAME_INTRO";
    break;
  case 0x17:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_NEW_PVP_INTRO";
    break;
  case 0x18:
    pTVar3 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    std::string::string(asStack_50,"[ADVICE_GENE]");
    TutorialEffectMgr::DisplayAdvice(pTVar3,asStack_50);
    std::string::~string(asStack_50);
    nop();
  case 0x19:
    onNarrationFinished(this);
    goto switchD_044bd68c_caseD_15;
  case 0x1a:
    pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar4 == (CrazyNPCManager *)0x0) goto switchD_044bd68c_caseD_15;
    pcVar6 = "TUTORIAL_PLANTWARS_INTRO";
  }
  std::string::string(asStack_60,pcVar6);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNarrationFinished);
  Sexy::Delegate0::Delegate0<TutorialMgr,void(TutorialMgr::*)()>(aDStack_38,asStack_50);
  std::string::string(asStack_58,"");
  CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
  std::string::~string(asStack_58);
  nop();
  std::string::~string(asStack_60);
  nop();
switchD_044bd68c_caseD_15:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TutorialMgr::StartTutorial(MapTutorialState) */

void __thiscall TutorialMgr::StartTutorial(TutorialMgr *this,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  RtObject *pRVar3;
  WorldMap_ChallengeButton *pWVar4;
  TutorialEffectMgr *pTVar5;
  WorldMap_PlantLevelUpButton *pWVar6;
  WorldMap_DailyActivityButton *pWVar7;
  WorldMap_ShopButton *pWVar8;
  WorldMap *this_00;
  CrazyNPCManager *pCVar9;
  char *__s;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 0x13:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "NEWPLAYER_COLLECTION_ACTIVITY_SIGN_INTRO";
    goto LAB_044bde68;
  case 0x14:
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,1);
    break;
  case 0x16:
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar8 != (WorldMap_ShopButton *)0x0) {
        WorldMap_ShopButton::OnTouch(pWVar8);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,2);
    break;
  case 0x17:
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar8 != (WorldMap_ShopButton *)0x0) {
        WorldMap_ShopButton::OnTouch(pWVar8);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,3);
    break;
  case 0x18:
    lVar2 = Sexy::LazySingleton<GachaMgr>::GetInstance();
    iVar1 = FUN_044b9ca0(*(undefined4 *)(lVar2 + 0x44));
    if (iVar1 == 3) {
      std::string::string(asStack_58,"UIWorldMapPlantLevelUpButton");
      lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
      if (lVar2 == 0) {
        std::string::~string(asStack_58);
        nop();
      }
      else {
        std::string::string(asStack_50,"UIWorldMapPlantLevelUpButton");
        pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
        pWVar6 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar3);
        std::string::~string(asStack_50);
        nop();
        std::string::~string(asStack_58);
        nop();
        if (pWVar6 != (WorldMap_PlantLevelUpButton *)0x0) {
          WorldMap_PlantLevelUpButton::OnTouch(pWVar6);
        }
      }
      pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
      TutorialEffectMgr::TriggerIconEffect(pTVar5,4);
      break;
    }
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 != 0) {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      goto joined_r0x044be90c;
    }
    std::string::~string(asStack_58);
    nop();
    goto LAB_044be918;
  case 0x19:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_EGYPT6_INTRO";
    goto LAB_044bde68;
  case 0x1a:
    std::string::string(asStack_58,"UIWorldMapDailyActivityButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapDailyActivityButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar7 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar7 != (WorldMap_DailyActivityButton *)0x0) {
        WorldMap_DailyActivityButton::OnTouch(pWVar7);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,5);
    break;
  case 0x1b:
    this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    std::string::string(asStack_58,"egypt_level_8");
    FUN_05478178((wstring *)asStack_50,L"[ADVICE_EGYPT8]",asStack_60);
    WorldMap::showLevelArrow(this_00,asStack_58,(wstring *)asStack_50);
    FUN_05476c50((wstring *)asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 != (CrazyNPCManager *)0x0) {
      std::string::string(asStack_60,"TUTORIAL_EGYPT8_INTRO");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
      Sexy::Delegate0::Delegate0<TutorialMgr,void(TutorialMgr::*)()>
                (aDStack_38,(wstring *)asStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar9,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    break;
  case 0x1c:
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
joined_r0x044be90c:
      if (pWVar8 != (WorldMap_ShopButton *)0x0) {
        WorldMap_ShopButton::OnTouch(pWVar8);
      }
    }
LAB_044be918:
    onNotifyTutorialEffectEnd(this,3);
    break;
  case 0x1d:
    std::string::string(asStack_58,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapPlantLevelUpButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar6 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar6 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar6);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    std::string::string(asStack_50,"[ADVICE_PLANT_LEVEL_UP]");
    TutorialEffectMgr::DisplayAdvice(pTVar5,asStack_50);
    std::string::~string(asStack_50);
    nop();
    break;
  case 0x1e:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_ACCESSORY_INTRO";
    goto LAB_044bde68;
  case 0x20:
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar8 != (WorldMap_ShopButton *)0x0) {
        WorldMap_ShopButton::OnTouch(pWVar8);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0xc);
    break;
  case 0x21:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_PLANT_FAMILY_INTRO";
    goto LAB_044bde68;
  case 0x22:
    std::string::string(asStack_58,"UIWorldMapDailyActivityButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapDailyActivityButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar7 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar7 != (WorldMap_DailyActivityButton *)0x0) {
        WorldMap_DailyActivityButton::OnTouch(pWVar7);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,7);
    break;
  case 0x23:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,8);
    break;
  case 0x24:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,9);
    break;
  case 0x25:
    std::string::string(asStack_58,"UIWorldMapShopButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapShopButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar8 = Sexy::RtObject::Cast<WorldMap_ShopButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar8 != (WorldMap_ShopButton *)0x0) {
        WorldMap_ShopButton::OnTouch(pWVar8);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,10);
    break;
  case 0x26:
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0xb);
    break;
  case 0x27:
    std::string::string(asStack_58,"UIWorldMapDailyActivityButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapDailyActivityButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar7 = Sexy::RtObject::Cast<WorldMap_DailyActivityButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar7 != (WorldMap_DailyActivityButton *)0x0) {
        WorldMap_DailyActivityButton::OnTouch(pWVar7);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0xe);
    break;
  case 0x28:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0xf);
    break;
  case 0x29:
    std::string::string(asStack_58,"UIWorldMapPlantLevelUpButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapPlantLevelUpButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar6 = Sexy::RtObject::Cast<WorldMap_PlantLevelUpButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar6 != (WorldMap_PlantLevelUpButton *)0x0) {
        WorldMap_PlantLevelUpButton::OnTouch(pWVar6);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x10);
    break;
  case 0x2a:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x11);
    break;
  case 0x39:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_ARTIFACT_INTRO";
    goto LAB_044bde68;
  case 0x3a:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x12);
    break;
  case 0x3b:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x13);
    break;
  case 0x3e:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_PENNY_CLASSROOM_INTRO";
    goto LAB_044bde68;
  case 0x3f:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "TUTORIAL_PVZ2_UNCHARTED_MODE_INTRO";
    goto LAB_044bde68;
  case 0x40:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x16);
    break;
  case 0x44:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x17);
    break;
  case 0x45:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "GENE_ENHANCEMENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x46:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "SPECIAL_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x47:
  case 0x48:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "ANNIVERSARY_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x49:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "ICEAGE_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x4a:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "SPRING_FESTIVAL_2024_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x4b:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "ARBORDAY_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x4d:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "CHILDRENSDAY_UNCHARTED_EVENT_TUTORIAL";
    goto LAB_044bde68;
  case 0x50:
    pCVar9 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    if (pCVar9 == (CrazyNPCManager *)0x0) break;
    __s = "NEEDFORSPEED_202406_UNCHARTED_EVENT_TUTORIAL";
LAB_044bde68:
    std::string::string(asStack_60,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onQueuedNarrationFinished);
    Sexy::Delegate0::Delegate0<TutorialMgr,void(TutorialMgr::*)()>(aDStack_38,asStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar9,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    break;
  case 0x52:
    std::string::string(asStack_58,"UIWorldMapChallengeButton");
    lVar2 = UIWidget::GetWidgetBySheetName(asStack_58);
    if (lVar2 == 0) {
      std::string::~string(asStack_58);
      nop();
    }
    else {
      std::string::string(asStack_50,"UIWorldMapChallengeButton");
      pRVar3 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_50);
      pWVar4 = Sexy::RtObject::Cast<WorldMap_ChallengeButton>(pRVar3);
      std::string::~string(asStack_50);
      nop();
      std::string::~string(asStack_58);
      nop();
      if (pWVar4 != (WorldMap_ChallengeButton *)0x0) {
        WorldMap_ChallengeButton::OnTouch(pWVar4);
      }
    }
    pTVar5 = (TutorialEffectMgr *)Sexy::LazySingleton<TutorialEffectMgr>::GetInstance();
    TutorialEffectMgr::TriggerIconEffect(pTVar5,0x1a);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

