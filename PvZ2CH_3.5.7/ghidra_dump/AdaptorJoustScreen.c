// Class: AdaptorJoustScreen


/* AdaptorJoustScreen::canHandleInput() */

byte AdaptorJoustScreen::canHandleInput(void)

{
  byte bVar1;
  
  bVar1 = GameStateMgr::IsTransitioning(gGameStateMgr);
  return bVar1 ^ 1;
}


/* AdaptorJoustScreen::~AdaptorJoustScreen() */

void __thiscall AdaptorJoustScreen::~AdaptorJoustScreen(AdaptorJoustScreen *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066ac830;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066acb90;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066acbd8;
  if (*(long *)(this + 0x120) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x120) + 0x20);
    (**(code **)(*plVar1 + 0x68))(plVar1);
    if (*(long **)(this + 0x120) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x120) + 0x18))();
    }
    *(undefined8 *)(this + 0x120) = 0;
  }
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustScreen::~AdaptorJoustScreen() */

void __thiscall AdaptorJoustScreen::~AdaptorJoustScreen(AdaptorJoustScreen *this)

{
  ~AdaptorJoustScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustScreen::RemovedFromManager(Sexy::WidgetManager*) */

void __thiscall
AdaptorJoustScreen::RemovedFromManager(AdaptorJoustScreen *this,WidgetManager *param_1)

{
  Sexy::WidgetContainer::RemovedFromManager((WidgetContainer *)this,param_1);
  if (*(AdaptorJoustMatchmakingScreen **)(this + 0x128) != (AdaptorJoustMatchmakingScreen *)0x0) {
    AdaptorJoustMatchmakingScreen::Close(*(AdaptorJoustMatchmakingScreen **)(this + 0x128));
    *(undefined8 *)(this + 0x128) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::OnBackButtonPressed() */

void AdaptorJoustScreen::OnBackButtonPressed(void)

{
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"JoustDashboard");
  std::string::string(asStack_20,"Back");
  std::string::string(asStack_18,"Close Dashboard");
  std::string::string(asStack_10,"");
  UIMetrics::BroadcastUIEvent(asStack_28,asStack_20,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  UIHelper::TriggerWorldMapBackButton();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::StaticClassInit() */

void AdaptorJoustScreen::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AdaptorJoustScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_0386ed00,0x130,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustScreen::StaticGetClass() */

long * AdaptorJoustScreen::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustScreen::AdaptorJoustScreen() */

void __thiscall AdaptorJoustScreen::AdaptorJoustScreen(AdaptorJoustScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066ac830;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066acb90;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066acbd8;
  *(undefined8 *)(this + 0x128) = 0;
  return;
}


/* AdaptorJoustScreen::StaticNew() */

AdaptorJoustScreen * AdaptorJoustScreen::StaticNew(void)

{
  AdaptorJoustScreen *this;
  
  this = ::operator_new(0x130);
  AdaptorJoustScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onPlay() */

void __thiscall AdaptorJoustScreen::onPlay(AdaptorJoustScreen *this)

{
  AdaptorJoustMatchmakingScreen *pAVar1;
  HotUIFile *this_00;
  long *plVar2;
  function<bool(Sexy::Touch_const&)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar1 = ::operator_new(400);
  AdaptorJoustMatchmakingScreen::AdaptorJoustMatchmakingScreen(pAVar1);
  *(AdaptorJoustMatchmakingScreen **)(this + 0x128) = pAVar1;
  FUN_0386eaa4(afStack_28,this);
  AdaptorJoustMatchmakingScreen::SetOnCancelAction(pAVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pAVar1 = *(AdaptorJoustMatchmakingScreen **)(this + 0x128);
  FUN_0386eb00(afStack_28,this);
  AdaptorJoustMatchmakingScreen::SetOnFailAction(pAVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  pAVar1 = *(AdaptorJoustMatchmakingScreen **)(this + 0x128);
  FUN_0386eb5c(afStack_28,this);
  AdaptorJoustMatchmakingScreen::SetOnPlayAction(pAVar1,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_28);
  HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x128));
  this_00 = (HotUIFile *)FUN_0386e3bc(*(undefined8 *)(this + 0xf8));
  plVar2 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar2 + 0x158))(plVar2,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustScreen::onShowLeagueInfoScreen() */

void AdaptorJoustScreen::onShowLeagueInfoScreen(void)

{
  LawnApp::ShowJoustLeagueInfoScreen(gLawnApp);
  return;
}


/* AdaptorJoustScreen::onMatchmakingFailed() */

void __thiscall AdaptorJoustScreen::onMatchmakingFailed(AdaptorJoustScreen *this)

{
  AdaptorJoustMatchmakingScreen::Close(*(AdaptorJoustMatchmakingScreen **)(this + 0x128));
  *(undefined8 *)(this + 0x128) = 0;
  UIHelper::TriggerWorldMapBackButton();
  return;
}


/* AdaptorJoustScreen::onMatchmakingCanceled() */

void __thiscall AdaptorJoustScreen::onMatchmakingCanceled(AdaptorJoustScreen *this)

{
  HotUIFile *this_00;
  long *plVar1;
  
  AdaptorJoustMatchmakingScreen::Close(*(AdaptorJoustMatchmakingScreen **)(this + 0x128));
  *(undefined8 *)(this + 0x128) = 0;
  this_00 = (HotUIFile *)FUN_0386e3bc(*(undefined8 *)(this + 0xf8));
  plVar1 = (long *)HotUIFile::GetEntryPointWidget(this_00);
  (**(code **)(*plVar1 + 0x158))(plVar1,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::startJoustTutorial() */

void __thiscall AdaptorJoustScreen::startJoustTutorial(AdaptorJoustScreen *this)

{
  LawnApp *pLVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  HotUISeedPacketList *pHVar5;
  undefined8 uVar6;
  long lVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayFreeButton");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar5 != (HotUISeedPacketList *)0x0) {
    Sexy::Point::Point((Point *)&local_20,*(int *)(pHVar5 + 0x48),*(int *)(pHVar5 + 0x4c));
    for (lVar7 = *(long *)(pHVar5 + 0x20); pLVar1 = gLawnApp, lVar7 != 0;
        lVar7 = *(long *)(lVar7 + 0x20)) {
      UnchartedModePlantNumData::UnchartedModePlantNumData
                ((UnchartedModePlantNumData *)asStack_10,*(int *)(lVar7 + 0x48),
                 *(int *)(lVar7 + 0x4c));
      Sexy::TPoint<int>::operator+=((TPoint<int> *)&local_20,(TPoint *)asStack_10);
    }
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_18,
               (float)(int)((float)(*(int *)(pHVar5 + 0x50) / 2) + (float)local_20),
               (float)(int)((float)(*(int *)(pHVar5 + 0x54) / 2) + (float)local_1c));
    uVar2 = FUN_0386ebb8(0x96);
    uVar6 = FUN_0386e3c8(*(undefined8 *)(pHVar5 + 0x238));
    std::string::string(asStack_10,"[JOUST_SELECT_TUTORIAL_1]");
    LawnApp::ShowGameMaskUI(local_18,local_14,pLVar1,uVar2,uVar6,asStack_10);
    std::string::~string(asStack_10);
    nop();
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar3 = FUN_0386ebb8(100);
    uVar2 = FUN_0386ebb8(200);
    FUN_0386e538(lVar7 + 0xf8,lVar7 + 0x100,-iVar3,uVar2);
    lVar7 = LawnApp::GetGameMaskUI(gLawnApp);
    iVar3 = FUN_0386ebb8(300);
    iVar4 = FUN_0386ebb8(0x46);
    FUN_0386e4e0(lVar7 + 0x114,-iVar3,-iVar4);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::updateEASquaredForTicketsVisible() */

void AdaptorJoustScreen::updateEASquaredForTicketsVisible(void)

{
  wchar16 *in_x0;
  long lVar1;
  HotUISeedPacketList *pHVar2;
  LineBreakCategory *in_x2;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  string asStack_10 [8];
  wchar16 *local_8;
  
  local_8 = ___stack_chk_guard;
  EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
            (in_x0,___stack_chk_guard,in_x2,in_x3,in_x4);
  lVar1 = FUN_0386e3bc(*(undefined8 *)(in_x0 + 0x7c));
  if (lVar1 != 0) {
    std::string::string(asStack_10,"FreeTicketsButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(in_x0 + 0x7c),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar2 + 0x188))(pHVar2,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onEASquaredAdFinished(EASquaredAdFinishedReason::EASquaredAdFinishedReason)
    */

void AdaptorJoustScreen::onEASquaredAdFinished
               (wchar16 *param_1,undefined8 param_2,LineBreakCategory *param_3,
               LineBreakCategory *param_4,LineBreakCategory *param_5)

{
  long lVar1;
  HotUISeedPacketList *pHVar2;
  string asStack_10 [8];
  wchar16 *pwStack_8;
  
  pwStack_8 = ___stack_chk_guard;
  EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
            (param_1,___stack_chk_guard,param_3,param_4,param_5);
  lVar1 = FUN_0386e3bc(*(undefined8 *)(param_1 + 0x7c));
  if (lVar1 != 0) {
    std::string::string(asStack_10,"FreeTicketsButton");
    pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(param_1 + 0x7c),asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar2 + 0x188))(pHVar2,0);
  }
  if (pwStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::updatePlayButton() */

void __thiscall AdaptorJoustScreen::updatePlayButton(AdaptorJoustScreen *this)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  HotUISeedPacketList *pHVar3;
  TextureInfo *extraout_x0;
  long lVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayButton");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlayFreeButton");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(extraout_x0);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
    cVar1 = JoustUtils::PlayerCanPlay();
    lVar4 = *(long *)pHVar3;
  }
  else {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
    (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,1);
    cVar1 = JoustUtils::PlayerCanPlay();
    lVar4 = *(long *)pHVar3;
  }
  if (cVar1 == '\0') {
    (**(code **)(lVar4 + 0x188))(pHVar3,1);
  }
  else {
    (**(code **)(lVar4 + 0x188))(pHVar3,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::EnableFullScreenDismiss(bool) */

void __thiscall AdaptorJoustScreen::EnableFullScreenDismiss(AdaptorJoustScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0386e3bc(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string(asStack_10,"DialogDismiss");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onLayoutFinished() */

void __thiscall AdaptorJoustScreen::onLayoutFinished(AdaptorJoustScreen *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  CrazyNPCManager *pCVar4;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustPropertySheet::GetProperties();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_0386e3cc(*(undefined4 *)(pPVar3 + 0x40));
  if (iVar2 == 0x23) {
    cVar1 = JoustUtils::PlayerCanPlay();
    if (cVar1 == '\0') {
      PlayerInfo::CompleteTutorial(pPVar3,0x23);
    }
    else {
      pCVar4 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
      std::string::string(asStack_60,"JOUST_SELECT_TUTORIAL");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,startJoustTutorial);
      Sexy::Delegate0::Delegate0<AdaptorJoustScreen,void(AdaptorJoustScreen::*)()>
                (aDStack_38,aCStack_50);
      std::string::string(asStack_58,"");
      CrazyNPCManager::StartNarrativeID(pCVar4,asStack_60,aDStack_38,asStack_58);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
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
/* AdaptorJoustScreen::Update() */

void __thiscall AdaptorJoustScreen::Update(AdaptorJoustScreen *this)

{
  char cVar1;
  HotUISeedPacketList *pHVar2;
  TextureInfo *extraout_x0;
  StringHelper *pSVar3;
  long *plVar4;
  void *pvVar5;
  code *pcVar6;
  float fVar7;
  long local_30;
  wstring awStack_28 [8];
  long local_20;
  wstring awStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  std::string::string(asStack_10,"FreePlayTimer");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(extraout_x0);
  if ((cVar1 == '\0') && (cVar1 = Reflection::RSimpleType::GetTypeCategory(), cVar1 != '\0')) {
    pvVar5 = (void *)(**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,1);
    pSVar3 = (StringHelper *)EA::Thread::GetModuleHandleFromAddress(pvVar5);
    TodStringTranslate(L"[JOUST_PLAY_ENTRY]");
    pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
    StringHelper::ConvertTimeToHMString(pSVar3,*(long *)pHVar2);
    TodReplaceString((wstring *)&local_20,L"{DURATION}",awStack_18);
    (*pcVar6)(pHVar2,asStack_10);
    FUN_05476c50(asStack_10);
    FUN_05476c50(awStack_18);
    FUN_05476c50((wstring *)&local_20);
  }
  else {
    (**(code **)(*(long *)pHVar2 + 0x158))(pHVar2,0);
  }
  std::string::string(asStack_10,"LeaderboardTimeRemainingLabel");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pHVar2 != (HotUISeedPacketList *)0x0) {
    pSVar3 = (StringHelper *)JoustUtils::GetTournamentEventTimeRemaining();
    if ((long)pSVar3 < 0x15180) {
      TodStringTranslate(L"[STORE_SALE_REMAINING_TIME]");
      pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
      StringHelper::ConvertTimeToHMSString(pSVar3,*(long *)pHVar2);
      TodReplaceString((wstring *)&local_20,L"{DURATION}",awStack_18);
      (*pcVar6)(pHVar2,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50((wstring *)&local_20);
    }
    else {
      fVar7 = (float)std::ceil((float)((long)pSVar3 / 0xe10) * _FUN_0386fd2c);
      local_30 = (long)fVar7;
      TodStringTranslate(L"[STORE_SALE_REMAINING_DAYS]");
      pcVar6 = *(code **)(*(long *)pHVar2 + 0x360);
      local_20 = 0;
      plVar4 = std::max<long>(&local_30,&local_20);
      Sexy::CommaSeparate64(*plVar4);
      TodReplaceString(awStack_28,L"{DAYS}",awStack_18);
      (*pcVar6)(pHVar2,asStack_10);
      FUN_05476c50(asStack_10);
      FUN_05476c50(awStack_18);
      FUN_05476c50(awStack_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onMatchmakingPlay() */

void __thiscall AdaptorJoustScreen::onMatchmakingPlay(AdaptorJoustScreen *this)

{
  JoustUtils *pJVar1;
  long lVar2;
  ProfileMgr *this_00;
  long lVar3;
  AdaptorJoustMatchLoadingScreen *this_01;
  wstring *extraout_x1;
  wstring *pwVar4;
  wstring *extraout_x1_00;
  Sexy aSStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  string asStack_28 [8];
  undefined1 auStack_20 [8];
  uint local_18;
  undefined4 local_14;
  undefined1 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  JoustUtils::PlayerSpendTicket();
  AdaptorJoustMatchmakingScreen::Close(*(AdaptorJoustMatchmakingScreen **)(this + 0x128));
  *(undefined8 *)(this + 0x128) = 0;
  FUN_0386e4d8(gGameStateMgr + 0x1eb1);
  pJVar1 = gGameStateMgr;
  JoustUtils::GetLevelToPlay(gGameStateMgr);
  GameStateMgr::StartLevel((GameStateMgr *)pJVar1,&DAT_06ab52b8,asStack_28,0xffffffff,7,7,9);
  std::string::~string(asStack_28);
  lVar2 = JoustUtils::GetCurrentMatch();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar3 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar3 == 0) {
    FUN_05478178(aSStack_40,L"-invalid-",asStack_28);
    nop();
    pwVar4 = extraout_x1_00;
  }
  else {
    PlayerInfo::AM_GetName();
    pwVar4 = extraout_x1;
  }
  Sexy::ToWString(aSStack_40,pwVar4);
  this_01 = ::operator_new(0x180);
  memset(this_01,0,0x180);
  AdaptorJoustMatchLoadingScreen::AdaptorJoustMatchLoadingScreen(this_01);
  AdaptorJoustMatchLoadingScreenConfig::AdaptorJoustMatchLoadingScreenConfig
            ((AdaptorJoustMatchLoadingScreenConfig *)asStack_28);
  thunk_FUN_05477b9c(asStack_28,auStack_38);
  lVar3 = JoustUtils::GetLocalPlayerData();
  local_18 = *(uint *)(lVar3 + 0xc);
  Sexy::ToWString((Sexy *)(lVar2 + 0x30),(wstring *)(ulong)local_18);
  FUN_054766c8(auStack_20,auStack_30);
  FUN_05476c50(auStack_30);
  local_14 = *(undefined4 *)(lVar2 + 0x38);
  local_10 = 1;
  AdaptorJoustMatchLoadingScreen::Setup(this_01,(AdaptorJoustMatchLoadingScreenConfig *)asStack_28);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_01);
  MessageRouter::Broadcast((_func_void *)gMessageRouter);
  std::pair<std::wstring,std::wstring>::~pair((pair<std::wstring,std::wstring> *)asStack_28);
  FUN_05476c50(auStack_38);
  FUN_05476c50(aSStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::addLeaderboardOpponents(AdaptorJoustLeaderboardConfig&) */

void __thiscall
AdaptorJoustScreen::addLeaderboardOpponents
          (AdaptorJoustScreen *this,AdaptorJoustLeaderboardConfig *param_1)

{
  bool bVar1;
  int iVar2;
  JoustLeaderboardData *pJVar3;
  JoustPlayerData *pJVar4;
  wstring *extraout_x1;
  int iVar5;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  JoustPlayerData aJStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  Sexy aSStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined1 local_5c;
  JoustLeaderboardData aJStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pJVar3 = (JoustLeaderboardData *)JoustUtils::GetLeaderboardData();
  iVar5 = 0;
  JoustLeaderboardData::JoustLeaderboardData(aJStack_58,pJVar3);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aJStack_58);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aJStack_58);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8), bVar1) {
    pJVar4 = (JoustPlayerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
    JoustPlayerData::JoustPlayerData(aJStack_a8,pJVar4);
    AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
              ((AdaptorJoustLeaderboardEntryConfig *)local_80);
    local_80[0] = local_a0;
    iVar2 = JoustUtils::GetLocalPlayerLeaderboardIndex();
    local_70 = iVar2 == iVar5;
    iVar5 = iVar5 + 1;
    Sexy::ToWString(aSStack_98,extraout_x1);
    FUN_054766c8(auStack_68,auStack_b0);
    FUN_05476c50(auStack_b0);
    local_78 = local_90;
    local_74 = local_9c;
    local_60 = local_8c;
    local_5c = local_88;
    std::
    vector<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>::
    push_back((vector<AdaptorJoustLeaderboardEntryConfig,std::allocator<AdaptorJoustLeaderboardEntryConfig>>
               *)param_1,(AdaptorJoustLeaderboardEntryConfig *)local_80);
    PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_80);
    JoustPlayerData::~JoustPlayerData(aJStack_a8);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_c0);
  }
  JoustLeaderboardData::~JoustLeaderboardData(aJStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustScreen::buildLeaderboard() */

void AdaptorJoustScreen::buildLeaderboard(void)

{
  AdaptorJoustScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addLeaderboardOpponents(in_x0,(AdaptorJoustLeaderboardConfig *)in_x8);
  AdaptorJoustLeaderboardConfig::OrderByScore((AdaptorJoustLeaderboardConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::showHowToPlayScreen() */

void AdaptorJoustScreen::showHowToPlayScreen(void)

{
  long lVar1;
  AdaptorJoustHowToPlayScreen *this;
  JoustHowToPlayScreenData aJStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = JoustPropertySheet::GetProperties();
  JoustHowToPlayScreenData::JoustHowToPlayScreenData
            (aJStack_38,(JoustHowToPlayScreenData *)(lVar1 + 0xa0));
  this = ::operator_new(0x188);
  memset(this,0,0x188);
  AdaptorJoustHowToPlayScreen::AdaptorJoustHowToPlayScreen(this);
  AdaptorJoustHowToPlayScreen::SetData(this,aJStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData(aJStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onHowToPlayTapped() */

void AdaptorJoustScreen::onHowToPlayTapped(void)

{
  long lVar1;
  AdaptorJoustHowToPlayScreen *this;
  JoustHowToPlayScreenData aJStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = JoustPropertySheet::GetProperties();
  JoustHowToPlayScreenData::JoustHowToPlayScreenData
            (aJStack_38,(JoustHowToPlayScreenData *)(lVar1 + 0xa0));
  this = ::operator_new(0x188);
  memset(this,0,0x188);
  AdaptorJoustHowToPlayScreen::AdaptorJoustHowToPlayScreen(this);
  AdaptorJoustHowToPlayScreen::SetData(this,aJStack_38);
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this);
  JoustHowToPlayScreenData::~JoustHowToPlayScreenData(aJStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::ButtonDepress(int) */

void __thiscall AdaptorJoustScreen::ButtonDepress(AdaptorJoustScreen *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LawnApp *this_00;
  char cVar4;
  int iVar5;
  ProfileMgr *pPVar6;
  long lVar7;
  ZMatchShopMgr *this_01;
  TGALogMgr *pTVar8;
  PlayerInfo *this_02;
  int *piVar9;
  NetworkMgr *pNVar10;
  long *plVar11;
  PVZ2UIDialog *pPVar12;
  string asStack_168 [8];
  string asStack_160 [8];
  long local_158;
  long local_150 [3];
  TGALogJoustData aTStack_138 [152];
  TGALogJoustData aTStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = canHandleInput();
  if (cVar4 == '\0') goto switchD_03870898_caseD_3;
  switch(param_1) {
  case 0:
    std::string::string(asStack_168,"JoustDashboard");
    std::string::string(asStack_160,"Back");
    std::string::string((string *)&local_158,"Close Dashboard");
    std::string::string((string *)local_150,"");
    UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
    std::string::~string((string *)local_150);
    nop();
    std::string::~string((string *)&local_158);
    nop();
    std::string::~string(asStack_160);
    nop();
    std::string::~string(asStack_168);
    nop();
    AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
    break;
  case 1:
    std::string::string(asStack_168,"JoustDashboard");
    std::string::string(asStack_160,"FreeTickets");
    std::string::string((string *)&local_158,"Try To Watch Ad For Tickets");
    std::string::string((string *)local_150,"");
    UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
    std::string::~string((string *)local_150);
    nop();
    std::string::~string((string *)&local_158);
    nop();
    std::string::~string(asStack_160);
    nop();
    std::string::~string(asStack_168);
    nop();
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar6);
    local_158 = PlayerInfo::getLastZmatchShopRefrashTime(this_02);
    lVar7 = LawnApp::BeijingTime(gLawnApp,&local_158);
    iVar5 = *(int *)(lVar7 + 8);
    iVar1 = *(int *)(lVar7 + 0xc);
    iVar2 = *(int *)(lVar7 + 0x10);
    iVar3 = *(int *)(lVar7 + 0x14);
    local_150[0] = LawnApp::GetRealServerTime(gLawnApp);
    piVar9 = (int *)LawnApp::BeijingTime(gLawnApp,local_150);
    if (piVar9[2] < 9) {
      if (local_150[0] - (piVar9[1] * 0x3c + piVar9[2] * 0xe10 + *piVar9 + 54000) <= local_158)
      goto LAB_03870e44;
    }
    else if ((piVar9[3] <= iVar1 && (piVar9[5] <= iVar3 && piVar9[4] <= iVar2)) && (8 < iVar5)) {
LAB_03870e44:
      pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
      plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
      (**(code **)(*plVar11 + 400))(plVar11,0,0,0);
      break;
    }
    pNVar10 = (NetworkMgr *)NetworkMgr::Instance();
    plVar11 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar10);
    (**(code **)(*plVar11 + 400))(plVar11,1,0,0);
    PlayerInfo::setLastZmatchShopRefrashTime(this_02,local_150[0]);
    break;
  case 2:
    pPVar6 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar7 = ProfileMgr::GetCurrentProfile(pPVar6);
    iVar5 = FUN_0386e3cc(*(undefined4 *)(lVar7 + 0x40));
    if (iVar5 == 0x23) {
      LawnApp::KillGameMaskUI(gLawnApp);
    }
    cVar4 = JoustUtils::PlayerHasTicket();
    if (cVar4 == '\0') {
      std::string::string(asStack_168,"JoustDashboard");
      std::string::string(asStack_160,"PlayTickets");
      std::string::string((string *)&local_158,"Tickets Store (Play) from Dashboard");
      std::string::string((string *)local_150,"");
      UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
      std::string::~string((string *)local_150);
      nop();
      std::string::~string((string *)&local_158);
      nop();
      std::string::~string(asStack_160);
      nop();
      std::string::~string(asStack_168);
      nop();
      this_00 = gLawnApp;
      FUN_05478178((string *)&local_158,L"[JOUST_NO_TICKET_TITLE]",asStack_168);
      FUN_05478178((string *)local_150,L"[JOUST_NO_TICKET_TEXT]",asStack_160);
      pPVar12 = (PVZ2UIDialog *)
                LawnApp::ShowPVZ2Dialog(this_00,(wstring *)&local_158,(wstring *)local_150);
      FUN_05476c50((string *)local_150);
      nop();
      FUN_05476c50((string *)&local_158);
      nop();
      FUN_05478178((string *)&local_158,L"[DIALOG_STRING_OK]",asStack_160);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                ((Delegate0 *)aTStack_a0,(string *)local_150);
      PVZ2UIDialog::AddButton(pPVar12,(string *)&local_158,(Delegate0 *)aTStack_a0,0);
      FUN_05476c50((string *)&local_158);
      nop();
    }
    else {
      std::string::string(asStack_168,"JoustDashboard");
      std::string::string(asStack_160,"Play");
      std::string::string((string *)&local_158,"Matchmaking (Play) from Dashboard");
      std::string::string((string *)local_150,"");
      UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
      std::string::~string((string *)local_150);
      nop();
      std::string::~string((string *)&local_158);
      nop();
      std::string::~string(asStack_160);
      nop();
      std::string::~string(asStack_168);
      nop();
      this_01 = (ZMatchShopMgr *)Sexy::LazySingleton<ZMatchShopMgr>::GetInstancePtr();
      ZMatchShopMgr::SubtractMatchTicket(this_01,1);
      TGALogJoustData::TGALogJoustData(aTStack_138);
      pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
      TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
      TGALogMgr::LogJoust(pTVar8,7,aTStack_a0);
      TGALogJoustData::~TGALogJoustData(aTStack_a0);
      onPlay(this);
      TGALogJoustData::~TGALogJoustData(aTStack_138);
    }
    break;
  case 4:
    std::string::string(asStack_168,"JoustDashboard");
    std::string::string(asStack_160,"LeagueInfo");
    std::string::string((string *)&local_158,"Show Info On Leagues");
    std::string::string((string *)local_150,"");
    UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
    std::string::~string((string *)local_150);
    nop();
    std::string::~string((string *)&local_158);
    nop();
    std::string::~string(asStack_160);
    nop();
    std::string::~string(asStack_168);
    nop();
    onShowLeagueInfoScreen();
    break;
  case 5:
    std::string::string(asStack_168,"JoustDashboard");
    std::string::string(asStack_160,"HowToPlay");
    std::string::string((string *)&local_158,"Show How to Play Info");
    std::string::string((string *)local_150,"");
    UIMetrics::BroadcastUIEvent(asStack_168,asStack_160,(string *)&local_158,(string *)local_150);
    std::string::~string((string *)local_150);
    nop();
    std::string::~string((string *)&local_158);
    nop();
    std::string::~string(asStack_160);
    nop();
    std::string::~string(asStack_168);
    nop();
    onHowToPlayTapped();
    break;
  case 6:
    GameStateMgr::ShowWorldMap(gGameStateMgr,5,5);
  }
switchD_03870898_caseD_3:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorJoustScreen::ButtonDepress(int) */

void __thiscall AdaptorJoustScreen::ButtonDepress(AdaptorJoustScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::setup() */

void __thiscall AdaptorJoustScreen::setup(AdaptorJoustScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar5;
  WidgetContainer *pWVar6;
  AdaptorJoustLeaderboard *this_01;
  string *extraout_x1;
  code *pcVar7;
  undefined1 auVar8 [12];
  Sexy aSStack_b8 [8];
  wstring awStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  string asStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0386e3bc(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_a0,"DialogDismiss");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,0,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x90))(pHVar5,1);
    HotUIButton::SetInvisible((HotUIButton *)pHVar5,true);
    std::string::string(asStack_a0,"FreeTicketsButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,1,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x188))(pHVar5,0);
    std::string::string(asStack_a0,"PlayButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,2,pBVar1);
    std::string::string(asStack_a0,"PlayFreeButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,2,pBVar1);
    std::string::string(asStack_a0,"LeagueInfoButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,4,pBVar1);
    std::string::string(asStack_a0,"HowToPlayButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,5,pBVar1);
    std::string::string(asStack_a0,"BackToMenu");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,6,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x188))(pHVar5,0);
    std::string::string(asStack_a0,"LeaderboardHolder");
    pWVar6 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    this_01 = ::operator_new(0x178);
    AdaptorJoustLeaderboard::AdaptorJoustLeaderboard(this_01);
    *(AdaptorJoustLeaderboard **)(this + 0x120) = this_01;
    buildLeaderboard();
    AdaptorJoustLeaderboard::Configure
              (*(AdaptorJoustLeaderboard **)(this + 0x120),pWVar6,
               (AdaptorJoustLeaderboardConfig *)asStack_a0);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
    std::string::string(asStack_a8,"LeaderboardHeaderLabel");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_a8);
    std::string::~string(asStack_a8);
    nop();
    pcVar7 = *(code **)(*(long *)pHVar5 + 0x360);
    auVar8 = JoustUtils::PlayerGetLeague();
    JoustUtils::GetLeagueName(auVar8._0_8_,auVar8._8_4_);
    Sexy::UTF8StringToWString(aSStack_b8,extraout_x1);
    TodStringTranslate(awStack_b0);
    (*pcVar7)(pHVar5,asStack_a8);
    FUN_05476c50(asStack_a8);
    FUN_05476c50(awStack_b0);
    std::string::~string((string *)aSStack_b8);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0386e3d0(local_80);
    if (cVar2 != '\0') {
      cVar2 = FUN_0547419c(asStack_60);
      if (cVar2 == '\0') {
        iVar3 = StringHelper::ToInt(asStack_60);
        iVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
        FUN_05478178(asStack_a8,L"[JOUST_COUNT_TIME]",aSStack_b8);
        TodReplaceNumberString((wstring *)asStack_a8,L"{NUMBER}",(iVar3 - iVar4) / 0x15180);
        FUN_05476c50(asStack_a8);
        nop();
        std::string::string(asStack_a8,"TimeCountDownLabel");
        pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                           (*(HotUIFile **)(this + 0xf8),asStack_a8);
        std::string::~string(asStack_a8);
        nop();
        (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,awStack_b0);
        FUN_05476c50(awStack_b0);
      }
    }
    updatePlayButton(this);
    ActiveItem::~ActiveItem(aAStack_88);
    AdaptorJoustLeaderboardConfig::~AdaptorJoustLeaderboardConfig
              ((AdaptorJoustLeaderboardConfig *)asStack_a0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onLinkToUIViewCreated() */

void __thiscall AdaptorJoustScreen::onLinkToUIViewCreated(AdaptorJoustScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar5;
  WidgetContainer *pWVar6;
  AdaptorJoustLeaderboard *this_01;
  string *extraout_x1;
  code *pcVar7;
  undefined1 auVar8 [12];
  Sexy aSStack_b8 [8];
  wstring awStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 uStack_80;
  string asStack_60 [88];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0386e3bc(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string(asStack_a0,"DialogDismiss");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,0,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x90))(pHVar5,1);
    HotUIButton::SetInvisible((HotUIButton *)pHVar5,true);
    std::string::string(asStack_a0,"FreeTicketsButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,1,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x188))(pHVar5,0);
    std::string::string(asStack_a0,"PlayButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,2,pBVar1);
    std::string::string(asStack_a0,"PlayFreeButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,2,pBVar1);
    std::string::string(asStack_a0,"LeagueInfoButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,4,pBVar1);
    std::string::string(asStack_a0,"HowToPlayButton");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,5,pBVar1);
    std::string::string(asStack_a0,"BackToMenu");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar5,6,pBVar1);
    (**(code **)(*(long *)pHVar5 + 0x188))(pHVar5,0);
    std::string::string(asStack_a0,"LeaderboardHolder");
    pWVar6 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,asStack_a0);
    std::string::~string(asStack_a0);
    nop();
    this_01 = ::operator_new(0x178);
    AdaptorJoustLeaderboard::AdaptorJoustLeaderboard(this_01);
    *(AdaptorJoustLeaderboard **)(this + 0x120) = this_01;
    buildLeaderboard();
    AdaptorJoustLeaderboard::Configure
              (*(AdaptorJoustLeaderboard **)(this + 0x120),pWVar6,
               (AdaptorJoustLeaderboardConfig *)asStack_a0);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
    std::string::string(asStack_a8,"LeaderboardHeaderLabel");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_a8);
    std::string::~string(asStack_a8);
    nop();
    pcVar7 = *(code **)(*(long *)pHVar5 + 0x360);
    auVar8 = JoustUtils::PlayerGetLeague();
    JoustUtils::GetLeagueName(auVar8._0_8_,auVar8._8_4_);
    Sexy::UTF8StringToWString(aSStack_b8,extraout_x1);
    TodStringTranslate(awStack_b0);
    (*pcVar7)(pHVar5,asStack_a8);
    FUN_05476c50(asStack_a8);
    FUN_05476c50(awStack_b0);
    std::string::~string((string *)aSStack_b8);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0386e3d0(uStack_80);
    if (cVar2 != '\0') {
      cVar2 = FUN_0547419c(asStack_60);
      if (cVar2 == '\0') {
        iVar3 = StringHelper::ToInt(asStack_60);
        iVar4 = LawnApp::GetRealBeijingTime(gLawnApp);
        FUN_05478178(asStack_a8,L"[JOUST_COUNT_TIME]",aSStack_b8);
        TodReplaceNumberString((wstring *)asStack_a8,L"{NUMBER}",(iVar3 - iVar4) / 0x15180);
        FUN_05476c50(asStack_a8);
        nop();
        std::string::string(asStack_a8,"TimeCountDownLabel");
        pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                           (*(HotUIFile **)(this + 0xf8),asStack_a8);
        std::string::~string(asStack_a8);
        nop();
        (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,awStack_b0);
        FUN_05476c50(awStack_b0);
      }
    }
    updatePlayButton(this);
    ActiveItem::~ActiveItem(aAStack_88);
    AdaptorJoustLeaderboardConfig::~AdaptorJoustLeaderboardConfig
              ((AdaptorJoustLeaderboardConfig *)asStack_a0);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustScreen::onLoadUIView() */

void __thiscall AdaptorJoustScreen::onLoadUIView(AdaptorJoustScreen *this)

{
  int iVar1;
  undefined8 uVar2;
  HotUIManager *this_00;
  HotUIFile *pHVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  size_t __n;
  undefined1 auVar6 [12];
  string asStack_180 [8];
  string asStack_178 [16];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_168 [48];
  TGALogJoustData aTStack_138 [152];
  TGALogJoustData aTStack_a0 [152];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_168);
  std::string::string(asStack_180,"$LEAGUEICON");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_168,asStack_180);
  auVar6 = JoustUtils::PlayerGetLeague();
  JoustUtils::GetLeagueIcon(auVar6._0_8_,auVar6._8_4_);
  thunk_FUN_05475e00(uVar2,asStack_178);
  std::string::~string(asStack_178);
  std::string::~string(asStack_180);
  nop();
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_178,"JoustScreen");
  pHVar3 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_178,(map *)amStack_168);
  std::string::~string(asStack_178);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar3);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  __n = 0;
  AudioMgr::SendEvent(pcVar4,"Play_UI_Leaderboard_Dialogue_Appear");
  MessageRouter::Post((_func_void *)gMessageRouter);
  TGALogJoustData::TGALogJoustData(aTStack_138);
  iVar1 = JoustUtils::PlayerGetLeague();
  DString::DString((DString *)asStack_178,iVar1);
  pcVar4 = (char *)DString::c_str((DString *)asStack_178);
  std::string::append((string *)aTStack_138,pcVar4,__n);
  DString::~DString((DString *)asStack_178);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogJoustData::TGALogJoustData(aTStack_a0,aTStack_138);
  TGALogMgr::LogJoust(pTVar5,1,aTStack_a0);
  TGALogJoustData::~TGALogJoustData(aTStack_a0);
  TGALogJoustData::~TGALogJoustData(aTStack_138);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

