// Class: AdaptorRiftLeaderBoardScreen


/* AdaptorRiftLeaderBoardScreen::~AdaptorRiftLeaderBoardScreen() */

void __thiscall
AdaptorRiftLeaderBoardScreen::~AdaptorRiftLeaderBoardScreen(AdaptorRiftLeaderBoardScreen *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_GetClass_066798d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06679c30;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679c78;
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


/* AdaptorRiftLeaderBoardScreen::~AdaptorRiftLeaderBoardScreen() */

void __thiscall
AdaptorRiftLeaderBoardScreen::~AdaptorRiftLeaderBoardScreen(AdaptorRiftLeaderBoardScreen *this)

{
  ~AdaptorRiftLeaderBoardScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::StaticClassInit() */

void AdaptorRiftLeaderBoardScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorRiftLeaderBoardScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03673ea4,0x128,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLeaderBoardScreen::StaticGetClass() */

long * AdaptorRiftLeaderBoardScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderBoardScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLeaderBoardScreen::GetClass() const */

long * AdaptorRiftLeaderBoardScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorRiftLeaderBoardScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorRiftLeaderBoardScreen::AdaptorRiftLeaderBoardScreen() */

void __thiscall
AdaptorRiftLeaderBoardScreen::AdaptorRiftLeaderBoardScreen(AdaptorRiftLeaderBoardScreen *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066798d0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06679c30;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06679c78;
  return;
}


/* AdaptorRiftLeaderBoardScreen::StaticNew() */

AdaptorRiftLeaderBoardScreen * AdaptorRiftLeaderBoardScreen::StaticNew(void)

{
  AdaptorRiftLeaderBoardScreen *this;
  
  this = ::operator_new(0x128);
  AdaptorRiftLeaderBoardScreen(this);
  return this;
}


/* AdaptorRiftLeaderBoardScreen::getWeeklyRewards() */

void AdaptorRiftLeaderBoardScreen::getWeeklyRewards(void)

{
  int iVar1;
  ulong uVar2;
  int in_w2;
  
  uVar2 = RiftUtils::PlayerGetLeague();
  iVar1 = RiftUtils::GetLocalPlayerLeaderboardIndex();
  RiftUtils::GetLeaderboardPlayerPlacementReward((RiftUtils *)(uVar2 & 0xffffffff),iVar1 + 1,in_w2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::updateAvatarIcon(int, int) */

void __thiscall
AdaptorRiftLeaderBoardScreen::updateAvatarIcon
          (AdaptorRiftLeaderBoardScreen *this,int param_1,int param_2)

{
  HotUISeedPacketList *pHVar1;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  ulong uVar2;
  JoustUtils *this_00;
  string asStack_10 [8];
  long local_8;
  
  uVar2 = (ulong)(uint)param_1;
  this_00 = (JoustUtils *)(ulong)(uint)param_2;
  local_8 = ___stack_chk_guard;
  Sexy::StrFormat("PlayerIconBottom%d",asStack_10,uVar2);
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,1);
  JoustUtils::AvatarGetBottomImagePtr(this_00,extraout_w1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::StrFormat("PlayerIcon%d",asStack_10,uVar2);
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  JoustUtils::AvatarGetImagePtr(this_00,extraout_w1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::StrFormat("PlayerIconFrame%d",asStack_10,uVar2);
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  JoustUtils::AvatarGetFrameImagePtr(this_00,extraout_w1_01);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::showOverview() */

void AdaptorRiftLeaderBoardScreen::showOverview(void)

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
    iVar2 = FUN_03673d54(0x352);
    iVar3 = FUN_03673d54(600);
  }
  else {
    iVar2 = FUN_03673d54(800);
    iVar3 = FUN_03673d54(600);
  }
  this = (PVZ2UIDialog *)
         LawnApp::ShowPVZ2Dialog(gLawnApp,(float)iVar2,(float)iVar3,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[RIFT_LEADERBOARD_OVERVIEW_TITLE]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(awStack_50,L"[RIFT_LEADERBOARD_OVERVIEW_CONTENT]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetFooterAlign(this,3);
  iVar2 = FUN_03673d54(2);
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
/* AdaptorRiftLeaderBoardScreen::onLoadUIView() */

void __thiscall AdaptorRiftLeaderBoardScreen::onLoadUIView(AdaptorRiftLeaderBoardScreen *this)

{
  undefined8 uVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  undefined1 auVar3 [12];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  std::string::string(asStack_48,"$LEAGUEICON");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_38,asStack_48);
  auVar3 = RiftUtils::PlayerGetLeague();
  RiftUtils::GetLeagueSmallIcon(auVar3._0_8_,auVar3._8_4_);
  thunk_FUN_05475e00(uVar1,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  SecretGachaMgr::GetScreenType((SecretGachaMgr *)this);
  uVar1 = FUN_0547429c(asStack_48);
  Sexy::StrFormat("RiftLeaderBoardScreen_%s",asStack_40,uVar1);
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::GetLegendReward(int) */

void __thiscall
AdaptorRiftLeaderBoardScreen::GetLegendReward(AdaptorRiftLeaderBoardScreen *this,int param_1)

{
  RtObject *this_00;
  WorldMap_RiftRankButton *this_01;
  undefined8 uVar1;
  DNetwork *this_02;
  int local_d54 [5];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2176];
  string asStack_468 [1120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d54[0] = param_1;
  std::string::string(asStack_ce8,"UIWorldMapRiftRankButton");
  this_00 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_ce8);
  std::string::~string(asStack_ce8);
  nop();
  if (this_00 != (RtObject *)0x0) {
    this_01 = Sexy::RtObject::Cast<WorldMap_RiftRankButton>(this_00);
    WorldMap_RiftRankButton::GetLegendReward(this_01,local_d54[0]);
  }
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"is");
  uVar1 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_d40);
  std::to_string<ActivityTypeID>((ActivityTypeID *)local_d54);
  FUN_05474278(uVar1,asStack_ce8);
  std::string::~string(asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_02 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_03673cf8(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_02,asStack_468,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::addLeaderboardOpponents(AdaptorRiftLeaderboardConfig&) */

void __thiscall
AdaptorRiftLeaderBoardScreen::addLeaderboardOpponents
          (AdaptorRiftLeaderBoardScreen *this,AdaptorRiftLeaderboardConfig *param_1)

{
  bool bVar1;
  int iVar2;
  RiftLeaderboardData *pRVar3;
  RiftPlayerData *pRVar4;
  wstring *extraout_x1;
  int iVar5;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  RiftPlayerData aRStack_b0 [8];
  undefined4 local_a8;
  undefined4 local_a4;
  Sexy aSStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  RiftLeaderboardData aRStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RiftLeaderboardData *)RiftUtils::GetLeaderboardData();
  iVar5 = 0;
  RiftLeaderboardData::RiftLeaderboardData(aRStack_58,pRVar3);
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_58);
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_58);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0), bVar1) {
    pRVar4 = (RiftPlayerData *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
    RiftPlayerData::RiftPlayerData(aRStack_b0,pRVar4);
    AdaptorJoustLeaderboardEntryConfig::AdaptorJoustLeaderboardEntryConfig
              ((AdaptorJoustLeaderboardEntryConfig *)local_88);
    local_88[0] = local_a8;
    iVar2 = RiftUtils::GetLocalPlayerLeaderboardIndex();
    local_78 = iVar2 == iVar5;
    iVar5 = iVar5 + 1;
    Sexy::ToWString(aSStack_a0,extraout_x1);
    FUN_054766c8(auStack_70,auStack_b8);
    FUN_05476c50(auStack_b8);
    local_80 = local_98;
    local_7c = local_a4;
    local_68 = local_94;
    local_64 = local_90;
    local_60 = local_8c;
    std::vector<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>
    ::push_back((vector<AdaptorRiftLeaderboardEntryConfig,std::allocator<AdaptorRiftLeaderboardEntryConfig>>
                 *)param_1,(AdaptorRiftLeaderboardEntryConfig *)local_88);
    PVZ2UIButtonPart::~PVZ2UIButtonPart((PVZ2UIButtonPart *)local_88);
    RiftPlayerData::~RiftPlayerData(aRStack_b0);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_c8);
  }
  RiftLeaderboardData::~RiftLeaderboardData(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorRiftLeaderBoardScreen::buildLeaderboard() */

void AdaptorRiftLeaderBoardScreen::buildLeaderboard(void)

{
  AdaptorRiftLeaderBoardScreen *in_x0;
  PIInterpolator *in_x8;
  
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  addLeaderboardOpponents(in_x0,(AdaptorRiftLeaderboardConfig *)in_x8);
  AdaptorRiftLeaderboardConfig::OrderByScore((AdaptorRiftLeaderboardConfig *)in_x8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::setup() */

void __thiscall AdaptorRiftLeaderBoardScreen::setup(AdaptorRiftLeaderBoardScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar7;
  WidgetContainer *pWVar8;
  AdaptorRiftLeaderboard *this_01;
  vector *pvVar9;
  RiftNetworkMgr *this_02;
  NetworkLeaderboardInfo *pNVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  code *pcVar16;
  undefined1 auVar17 [12];
  wstring awStack_f8 [8];
  Sexy aSStack_f0 [8];
  LevelOfTheDay_RewardItemType aLStack_e8 [8];
  wstring awStack_e0 [8];
  undefined8 local_d8;
  AdaptorRiftLeaderboardConfig aAStack_d0 [24];
  undefined8 local_b8 [3];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88 [13];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0367384c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string((string *)local_88,"CloseButton");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_88);
    std::string::~string((string *)local_88);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar7,3,pBVar1);
    std::string::string((string *)local_88,"LeaderboardHolder");
    pWVar8 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,(string *)local_88);
    std::string::~string((string *)local_88);
    nop();
    this_01 = ::operator_new(0x178);
    AdaptorRiftLeaderboard::AdaptorRiftLeaderboard(this_01);
    *(AdaptorRiftLeaderboard **)(this + 0x120) = this_01;
    buildLeaderboard();
    AdaptorRiftLeaderboard::Configure(*(AdaptorRiftLeaderboard **)(this + 0x120),pWVar8,aAStack_d0);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
    std::string::string((string *)local_88,"LeaderboardHeaderLabel");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),(string *)local_88);
    std::string::~string((string *)local_88);
    nop();
    pcVar16 = *(code **)(*(long *)pHVar7 + 0x360);
    auVar17 = RiftUtils::PlayerGetLeague();
    RiftUtils::GetLeagueName(auVar17._0_8_,auVar17._8_4_);
    Sexy::UTF8StringToWString((Sexy *)local_b8,extraout_x1);
    TodStringTranslate((wstring *)&local_a0);
    (*pcVar16)(pHVar7,(string *)local_88);
    FUN_05476c50((string *)local_88);
    FUN_05476c50((wstring *)&local_a0);
    std::string::~string((string *)local_b8);
    getWeeklyRewards();
    cVar2 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
            empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>
                   *)local_b8);
    if (cVar2 == '\0') {
      std::string::string((string *)local_88,"Reward1");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_88);
      std::string::~string((string *)local_88);
      nop();
      FUN_03673864(local_b8[0],0);
      RewardImageFactory::GetImageForReward(aLStack_e8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)&local_d8);
      HotUIImage::SetImage((HotUIImage *)pHVar7,(string *)local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      std::string::string((string *)local_88,"QuantityLabel1");
      lVar15 = FUN_03673864(local_b8[0],0);
      Sexy::StrFormat(L"x%d",(wstring *)&local_a0,(ulong)*(uint *)(lVar15 + 0x28));
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_a0)
      ;
      FUN_05476c50((wstring *)&local_a0);
      std::string::~string((string *)local_88);
      nop();
      std::string::string((string *)local_88,"Reward2");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_88);
      std::string::~string((string *)local_88);
      nop();
      FUN_03673864(local_b8[0],1);
      RewardImageFactory::GetImageForReward(aLStack_e8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&local_d8,(RtWeakPtr *)local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_88,(RtWeakPtrBase *)&local_d8);
      HotUIImage::SetImage((HotUIImage *)pHVar7,(string *)local_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_88);
      std::string::string((string *)local_88,"QuantityLabel2");
      lVar15 = FUN_03673864(local_b8[0],1);
      Sexy::StrFormat(L"x%d",(wstring *)&local_a0,(ulong)*(uint *)(lVar15 + 0x28));
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_a0)
      ;
      FUN_05476c50((wstring *)&local_a0);
      std::string::~string((string *)local_88);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d8);
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Sexy::StrFormat("PlayerIconBottom%d",(string *)local_88,(ulong)uVar5);
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),(string *)local_88);
      std::string::~string((string *)local_88);
      if (pHVar7 != (HotUISeedPacketList *)0x0) {
        (**(code **)(*(long *)pHVar7 + 0x158))(pHVar7,0);
      }
    } while (uVar5 != 3);
    pvVar9 = (vector *)RiftUtils::GetLeaderboardLeagueRewards();
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_a0,pvVar9);
    cVar2 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&local_a0);
    if (cVar2 == '\0') {
      iVar4 = RiftUtils::GetLocalPlayerLeaderboardIndex();
      local_d8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aAStack_d0);
      local_88[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)aAStack_d0);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_d8,(__normal_iterator *)local_88), bVar3
            ) {
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d8);
        if (*(char *)(lVar15 + 0x10) != '\0') {
          iVar4 = *(int *)(lVar15 + 4);
          break;
        }
        std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                  ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&local_d8);
      }
      TodStringTranslate(L"[RIFT_LEADERBOARD_LEAGUE_STR]");
      uVar5 = RiftUtils::PlayerGetLeague();
      uVar6 = RiftUtils::GetNextLeague(uVar5,iVar4);
      std::string::string((string *)local_88,"SeasonBoxLabel1_2");
      RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar5,extraout_w1);
      Sexy::UTF8StringToWString((Sexy *)aLStack_e8,extraout_x1_00);
      TodStringTranslate(awStack_e0);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_d8)
      ;
      FUN_05476c50((string *)&local_d8);
      FUN_05476c50(awStack_e0);
      std::string::~string((string *)aLStack_e8);
      std::string::~string((string *)local_88);
      nop();
      uVar11 = local_a0;
      piVar14 = (int *)FUN_0367386c(local_a0,(long)(int)uVar5);
      if (*piVar14 != 0) {
        updateAvatarIcon(this,1,*piVar14);
        uVar11 = local_a0;
      }
      lVar15 = FUN_03673858(uVar11,local_98);
      uVar12 = lVar15 - 1;
      if ((ulong)(long)(int)uVar6 <= uVar12) {
        std::string::string((string *)local_88,"SeasonBoxLabel2_2");
        if ((int)uVar6 < 1) {
          TodStringTranslate(L"[RIFT_LEADERBOARD_KEEP]");
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_d8);
          FUN_05476c50((string *)&local_d8);
          FUN_05476c50(awStack_e0);
        }
        else {
          RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar6,extraout_w1_01);
          Sexy::UTF8StringToWString(aSStack_f0,extraout_x1_02);
          TodStringTranslate((wstring *)aLStack_e8);
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_d8);
          FUN_05476c50((string *)&local_d8);
          FUN_05476c50(awStack_e0);
          FUN_05476c50((Sexy *)aLStack_e8);
          std::string::~string((string *)aSStack_f0);
        }
        std::string::~string((string *)local_88);
        nop();
        piVar14 = (int *)FUN_0367386c(local_a0,(long)(int)uVar6);
        updateAvatarIcon(this,2,*piVar14);
        lVar15 = FUN_03673858(local_a0,local_98);
        uVar12 = lVar15 - 1;
      }
      uVar5 = uVar6 + 1;
      if ((ulong)(long)(int)uVar5 <= uVar12) {
        std::string::string((string *)local_88,"SeasonBoxLabel3_2");
        if ((int)uVar6 < 1) {
          TodStringTranslate(L"[RIFT_LEADERBOARD_KEEP]");
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_d8);
          FUN_05476c50((string *)&local_d8);
          FUN_05476c50(awStack_e0);
        }
        else {
          RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar5,extraout_w1_00);
          Sexy::UTF8StringToWString(aSStack_f0,extraout_x1_01);
          TodStringTranslate((wstring *)aLStack_e8);
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)local_88,(wstring *)&local_d8);
          FUN_05476c50((string *)&local_d8);
          FUN_05476c50(awStack_e0);
          FUN_05476c50((Sexy *)aLStack_e8);
          std::string::~string((string *)aSStack_f0);
        }
        std::string::~string((string *)local_88);
        nop();
        piVar14 = (int *)FUN_0367386c(local_a0,(long)(int)uVar5);
        updateAvatarIcon(this,3,*piVar14);
      }
      FUN_05476c50(awStack_f8);
    }
    std::string::string((string *)local_88,"LeagueInfoButton");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)local_88);
    std::string::~string((string *)local_88);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar7,4,pBVar1);
    this_02 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
    pNVar10 = (NetworkLeaderboardInfo *)RiftNetworkMgr::GetLeaderboardInfo(this_02);
    NetworkLeaderboardInfo::NetworkLeaderboardInfo((NetworkLeaderboardInfo *)local_88,pNVar10);
    iVar4 = RiftUtils::PlayerGetLeague();
    if ((iVar4 == 7) &&
       (cVar2 = std::vector<LegendReward,std::allocator<LegendReward>>::empty
                          ((vector<LegendReward,std::allocator<LegendReward>> *)&local_20),
       cVar2 == '\0')) {
      uVar12 = 0;
      while (uVar13 = FUN_03673874(local_20,local_18), uVar12 < uVar13) {
        uVar13 = uVar12 + 1;
        Sexy::StrFormat("LegendBoxLabel%d",(string *)aSStack_f0,uVar13);
        FUN_05478178((wstring *)aLStack_e8,L"[RIFT_LEGEND_LABEL]",awStack_f8);
        piVar14 = (int *)FUN_03673888(local_20,uVar12);
        TodReplaceNumberString((wstring *)aLStack_e8,L"{NUMBER}",*piVar14);
        TodStringTranslate(awStack_e0);
        HotUIAdaptor::setLabelWidgetText
                  ((HotUIAdaptor *)this,(string *)aSStack_f0,(wstring *)&local_d8);
        FUN_05476c50((string *)&local_d8);
        FUN_05476c50(awStack_e0);
        FUN_05476c50((wstring *)aLStack_e8);
        nop();
        std::string::~string((string *)aSStack_f0);
        lVar15 = FUN_03673888(local_20,uVar12);
        uVar12 = uVar13;
        if (*(int *)(lVar15 + 0x24) == 0) {
          if (*(int *)(lVar15 + 0x20) == 0) {
            Sexy::StrFormat("LegendBoxChest%d",(string *)&local_d8,uVar13);
            pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_d8);
            HotUIButton::SetListener((HotUIButton *)pHVar7,(int)uVar13 + 10,pBVar1);
            std::string::~string((string *)&local_d8);
          }
          else {
            Sexy::StrFormat("LegendBoxChest%d",(string *)&local_d8,uVar13);
            pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_d8);
            HotUIButton::SetListener((HotUIButton *)pHVar7,(int)uVar13 + 0xd,pBVar1);
            std::string::~string((string *)&local_d8);
          }
        }
        else {
          Sexy::StrFormat("LegendBoxChest%d",(string *)&local_d8,uVar13);
          pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_d8);
          (**(code **)(*(long *)pHVar7 + 0x188))(pHVar7,1);
          std::string::~string((string *)&local_d8);
        }
      }
    }
    else {
      std::string::string((string *)&local_d8,"LegendReward");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_d8);
      (**(code **)(*(long *)pHVar7 + 0x158))(pHVar7,0);
      std::string::~string((string *)&local_d8);
      nop();
    }
    NetworkLeaderboardInfo::~NetworkLeaderboardInfo((NetworkLeaderboardInfo *)local_88);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_a0);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               local_b8);
    AdaptorRiftLeaderboardConfig::~AdaptorRiftLeaderboardConfig(aAStack_d0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorRiftLeaderBoardScreen::onLinkToUIViewCreated(AdaptorRiftLeaderBoardScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar7;
  WidgetContainer *pWVar8;
  AdaptorRiftLeaderboard *this_01;
  vector *pvVar9;
  RiftNetworkMgr *this_02;
  NetworkLeaderboardInfo *pNVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string *extraout_x1;
  string *extraout_x1_00;
  string *extraout_x1_01;
  string *extraout_x1_02;
  code *pcVar16;
  undefined1 auVar17 [12];
  wstring awStack_f8 [8];
  Sexy aSStack_f0 [8];
  LevelOfTheDay_RewardItemType aLStack_e8 [8];
  wstring awStack_e0 [8];
  undefined8 uStack_d8;
  AdaptorRiftLeaderboardConfig aAStack_d0 [24];
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_88 [13];
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0367384c(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    pBVar1 = (ButtonListener *)(this + 0xd8);
    std::string::string((string *)auStack_88,"CloseButton");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)auStack_88);
    std::string::~string((string *)auStack_88);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar7,3,pBVar1);
    std::string::string((string *)auStack_88,"LeaderboardHolder");
    pWVar8 = (WidgetContainer *)HotUIFile::GetWidgetByName(this_00,(string *)auStack_88);
    std::string::~string((string *)auStack_88);
    nop();
    this_01 = ::operator_new(0x178);
    AdaptorRiftLeaderboard::AdaptorRiftLeaderboard(this_01);
    *(AdaptorRiftLeaderboard **)(this + 0x120) = this_01;
    buildLeaderboard();
    AdaptorRiftLeaderboard::Configure(*(AdaptorRiftLeaderboard **)(this + 0x120),pWVar8,aAStack_d0);
    HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(this + 0x120));
    std::string::string((string *)auStack_88,"LeaderboardHeaderLabel");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),(string *)auStack_88);
    std::string::~string((string *)auStack_88);
    nop();
    pcVar16 = *(code **)(*(long *)pHVar7 + 0x360);
    auVar17 = RiftUtils::PlayerGetLeague();
    RiftUtils::GetLeagueName(auVar17._0_8_,auVar17._8_4_);
    Sexy::UTF8StringToWString((Sexy *)auStack_b8,extraout_x1);
    TodStringTranslate((wstring *)&uStack_a0);
    (*pcVar16)(pHVar7,(string *)auStack_88);
    FUN_05476c50((string *)auStack_88);
    FUN_05476c50((wstring *)&uStack_a0);
    std::string::~string((string *)auStack_b8);
    getWeeklyRewards();
    cVar2 = std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::
            empty((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>
                   *)auStack_b8);
    if (cVar2 == '\0') {
      std::string::string((string *)auStack_88,"Reward1");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)auStack_88);
      std::string::~string((string *)auStack_88);
      nop();
      FUN_03673864(auStack_b8[0],0);
      RewardImageFactory::GetImageForReward(aLStack_e8);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)auStack_88,(RtWeakPtrBase *)&uStack_d8);
      HotUIImage::SetImage((HotUIImage *)pHVar7,(string *)auStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_88);
      std::string::string((string *)auStack_88,"QuantityLabel1");
      lVar15 = FUN_03673864(auStack_b8[0],0);
      Sexy::StrFormat(L"x%d",(wstring *)&uStack_a0,(ulong)*(uint *)(lVar15 + 0x28));
      HotUIAdaptor::setLabelWidgetText
                ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_a0);
      FUN_05476c50((wstring *)&uStack_a0);
      std::string::~string((string *)auStack_88);
      nop();
      std::string::string((string *)auStack_88,"Reward2");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)auStack_88);
      std::string::~string((string *)auStack_88);
      nop();
      FUN_03673864(auStack_b8[0],1);
      RewardImageFactory::GetImageForReward(aLStack_e8);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)&uStack_d8,(RtWeakPtr *)auStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_88);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)auStack_88,(RtWeakPtrBase *)&uStack_d8);
      HotUIImage::SetImage((HotUIImage *)pHVar7,(string *)auStack_88);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)auStack_88);
      std::string::string((string *)auStack_88,"QuantityLabel2");
      lVar15 = FUN_03673864(auStack_b8[0],1);
      Sexy::StrFormat(L"x%d",(wstring *)&uStack_a0,(ulong)*(uint *)(lVar15 + 0x28));
      HotUIAdaptor::setLabelWidgetText
                ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_a0);
      FUN_05476c50((wstring *)&uStack_a0);
      std::string::~string((string *)auStack_88);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_d8);
    }
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Sexy::StrFormat("PlayerIconBottom%d",(string *)auStack_88,(ulong)uVar5);
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                         (*(HotUIFile **)(this + 0xf8),(string *)auStack_88);
      std::string::~string((string *)auStack_88);
      if (pHVar7 != (HotUISeedPacketList *)0x0) {
        (**(code **)(*(long *)pHVar7 + 0x158))(pHVar7,0);
      }
    } while (uVar5 != 3);
    pvVar9 = (vector *)RiftUtils::GetLeaderboardLeagueRewards();
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&uStack_a0,pvVar9);
    cVar2 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&uStack_a0);
    if (cVar2 == '\0') {
      iVar4 = RiftUtils::GetLocalPlayerLeaderboardIndex();
      uStack_d8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)aAStack_d0);
      auStack_88[0] =
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)aAStack_d0);
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&uStack_d8,(__normal_iterator *)auStack_88),
            bVar3) {
        lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_d8);
        if (*(char *)(lVar15 + 0x10) != '\0') {
          iVar4 = *(int *)(lVar15 + 4);
          break;
        }
        std::move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*>::operator++
                  ((move_iterator<Sexy::Delegate1wRet<bool,SexyURL_const&>*> *)&uStack_d8);
      }
      TodStringTranslate(L"[RIFT_LEADERBOARD_LEAGUE_STR]");
      uVar5 = RiftUtils::PlayerGetLeague();
      uVar6 = RiftUtils::GetNextLeague(uVar5,iVar4);
      std::string::string((string *)auStack_88,"SeasonBoxLabel1_2");
      RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar5,extraout_w1);
      Sexy::UTF8StringToWString((Sexy *)aLStack_e8,extraout_x1_00);
      TodStringTranslate(awStack_e0);
      HotUIAdaptor::setLabelWidgetText
                ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_d8);
      FUN_05476c50((string *)&uStack_d8);
      FUN_05476c50(awStack_e0);
      std::string::~string((string *)aLStack_e8);
      std::string::~string((string *)auStack_88);
      nop();
      uVar11 = uStack_a0;
      piVar14 = (int *)FUN_0367386c(uStack_a0,(long)(int)uVar5);
      if (*piVar14 != 0) {
        updateAvatarIcon(this,1,*piVar14);
        uVar11 = uStack_a0;
      }
      lVar15 = FUN_03673858(uVar11,uStack_98);
      uVar12 = lVar15 - 1;
      if ((ulong)(long)(int)uVar6 <= uVar12) {
        std::string::string((string *)auStack_88,"SeasonBoxLabel2_2");
        if ((int)uVar6 < 1) {
          TodStringTranslate(L"[RIFT_LEADERBOARD_KEEP]");
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_d8);
          FUN_05476c50((string *)&uStack_d8);
          FUN_05476c50(awStack_e0);
        }
        else {
          RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar6,extraout_w1_01);
          Sexy::UTF8StringToWString(aSStack_f0,extraout_x1_02);
          TodStringTranslate((wstring *)aLStack_e8);
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_d8);
          FUN_05476c50((string *)&uStack_d8);
          FUN_05476c50(awStack_e0);
          FUN_05476c50((Sexy *)aLStack_e8);
          std::string::~string((string *)aSStack_f0);
        }
        std::string::~string((string *)auStack_88);
        nop();
        piVar14 = (int *)FUN_0367386c(uStack_a0,(long)(int)uVar6);
        updateAvatarIcon(this,2,*piVar14);
        lVar15 = FUN_03673858(uStack_a0,uStack_98);
        uVar12 = lVar15 - 1;
      }
      uVar5 = uVar6 + 1;
      if ((ulong)(long)(int)uVar5 <= uVar12) {
        std::string::string((string *)auStack_88,"SeasonBoxLabel3_2");
        if ((int)uVar6 < 1) {
          TodStringTranslate(L"[RIFT_LEADERBOARD_KEEP]");
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_d8);
          FUN_05476c50((string *)&uStack_d8);
          FUN_05476c50(awStack_e0);
        }
        else {
          RiftUtils::GetLeagueName((RiftUtils *)(ulong)uVar5,extraout_w1_00);
          Sexy::UTF8StringToWString(aSStack_f0,extraout_x1_01);
          TodStringTranslate((wstring *)aLStack_e8);
          std::operator+(awStack_f8,awStack_e0);
          HotUIAdaptor::setLabelWidgetText
                    ((HotUIAdaptor *)this,(string *)auStack_88,(wstring *)&uStack_d8);
          FUN_05476c50((string *)&uStack_d8);
          FUN_05476c50(awStack_e0);
          FUN_05476c50((Sexy *)aLStack_e8);
          std::string::~string((string *)aSStack_f0);
        }
        std::string::~string((string *)auStack_88);
        nop();
        piVar14 = (int *)FUN_0367386c(uStack_a0,(long)(int)uVar5);
        updateAvatarIcon(this,3,*piVar14);
      }
      FUN_05476c50(awStack_f8);
    }
    std::string::string((string *)auStack_88,"LeagueInfoButton");
    pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)auStack_88);
    std::string::~string((string *)auStack_88);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar7,4,pBVar1);
    this_02 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
    pNVar10 = (NetworkLeaderboardInfo *)RiftNetworkMgr::GetLeaderboardInfo(this_02);
    NetworkLeaderboardInfo::NetworkLeaderboardInfo((NetworkLeaderboardInfo *)auStack_88,pNVar10);
    iVar4 = RiftUtils::PlayerGetLeague();
    if ((iVar4 == 7) &&
       (cVar2 = std::vector<LegendReward,std::allocator<LegendReward>>::empty
                          ((vector<LegendReward,std::allocator<LegendReward>> *)&uStack_20),
       cVar2 == '\0')) {
      uVar12 = 0;
      while (uVar13 = FUN_03673874(uStack_20,uStack_18), uVar12 < uVar13) {
        uVar13 = uVar12 + 1;
        Sexy::StrFormat("LegendBoxLabel%d",(string *)aSStack_f0,uVar13);
        FUN_05478178((wstring *)aLStack_e8,L"[RIFT_LEGEND_LABEL]",awStack_f8);
        piVar14 = (int *)FUN_03673888(uStack_20,uVar12);
        TodReplaceNumberString((wstring *)aLStack_e8,L"{NUMBER}",*piVar14);
        TodStringTranslate(awStack_e0);
        HotUIAdaptor::setLabelWidgetText
                  ((HotUIAdaptor *)this,(string *)aSStack_f0,(wstring *)&uStack_d8);
        FUN_05476c50((string *)&uStack_d8);
        FUN_05476c50(awStack_e0);
        FUN_05476c50((wstring *)aLStack_e8);
        nop();
        std::string::~string((string *)aSStack_f0);
        lVar15 = FUN_03673888(uStack_20,uVar12);
        uVar12 = uVar13;
        if (*(int *)(lVar15 + 0x24) == 0) {
          if (*(int *)(lVar15 + 0x20) == 0) {
            Sexy::StrFormat("LegendBoxChest%d",(string *)&uStack_d8,uVar13);
            pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&uStack_d8);
            HotUIButton::SetListener((HotUIButton *)pHVar7,(int)uVar13 + 10,pBVar1);
            std::string::~string((string *)&uStack_d8);
          }
          else {
            Sexy::StrFormat("LegendBoxChest%d",(string *)&uStack_d8,uVar13);
            pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&uStack_d8);
            HotUIButton::SetListener((HotUIButton *)pHVar7,(int)uVar13 + 0xd,pBVar1);
            std::string::~string((string *)&uStack_d8);
          }
        }
        else {
          Sexy::StrFormat("LegendBoxChest%d",(string *)&uStack_d8,uVar13);
          pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&uStack_d8);
          (**(code **)(*(long *)pHVar7 + 0x188))(pHVar7,1);
          std::string::~string((string *)&uStack_d8);
        }
      }
    }
    else {
      std::string::string((string *)&uStack_d8,"LegendReward");
      pHVar7 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&uStack_d8);
      (**(code **)(*(long *)pHVar7 + 0x158))(pHVar7,0);
      std::string::~string((string *)&uStack_d8);
      nop();
    }
    NetworkLeaderboardInfo::~NetworkLeaderboardInfo((NetworkLeaderboardInfo *)auStack_88);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&uStack_a0);
    std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
              ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
               auStack_b8);
    AdaptorRiftLeaderboardConfig::~AdaptorRiftLeaderboardConfig(aAStack_d0);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::ShowLegendReward(int) */

void __thiscall
AdaptorRiftLeaderBoardScreen::ShowLegendReward(AdaptorRiftLeaderBoardScreen *this,int param_1)

{
  RiftNetworkMgr *this_00;
  NetworkLeaderboardInfo *pNVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  UIRedPacketResult *this_01;
  undefined8 uVar7;
  ulong uVar8;
  wstring awStack_d8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_b8 [48];
  NetworkLeaderboardInfo aNStack_88 [104];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar8 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (RiftNetworkMgr *)Sexy::LazySingleton<RiftNetworkMgr>::GetInstancePtr();
  pNVar1 = (NetworkLeaderboardInfo *)RiftNetworkMgr::GetLeaderboardInfo(this_00);
  NetworkLeaderboardInfo::NetworkLeaderboardInfo(aNStack_88,pNVar1);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  uVar7 = local_20;
  uVar2 = FUN_03673874(local_20,local_18);
  if (uVar8 < uVar2) {
    uVar2 = 0;
    while( true ) {
      lVar5 = FUN_03673888(uVar7,uVar8);
      uVar7 = *(undefined8 *)(lVar5 + 8);
      uVar6 = FUN_03673894(uVar7,*(undefined8 *)(lVar5 + 0x10));
      if (uVar6 <= uVar2) break;
      piVar3 = (int *)FUN_036738a8(uVar7,uVar2);
      piVar3 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_b8,piVar3);
      lVar5 = FUN_03673888(local_20,uVar8);
      piVar4 = (int *)FUN_036738a8(*(undefined8 *)(lVar5 + 8),uVar2);
      *piVar3 = piVar4[1];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_d0,piVar4);
      uVar7 = local_20;
      uVar2 = uVar2 + 1;
    }
  }
  this_01 = (UIRedPacketResult *)
            UIRedPacketResult::create((map *)amStack_b8,(vector *)avStack_d0,true);
  TodStringTranslate(L"[RIFT_LEADERBOARD_SEASON_REWARD_HEADER]");
  UIRedPacketResult::setTitle(this_01,awStack_d8);
  FUN_05476c50(awStack_d8);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_d0);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_b8);
  NetworkLeaderboardInfo::~NetworkLeaderboardInfo(aNStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorRiftLeaderBoardScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftLeaderBoardScreen::ButtonDepress(AdaptorRiftLeaderBoardScreen *this,int param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  }
  else if (param_1 == 4) {
    showOverview();
  }
  else if (param_1 == 0xb) {
    ShowLegendReward(this,0);
  }
  else if (param_1 == 0xc) {
    ShowLegendReward(this,1);
  }
  else if (param_1 == 0xd) {
    ShowLegendReward(this,2);
  }
  else {
    if (param_1 == 0xe) {
      GetLegendReward(this,0);
      this_00 = (HotUIFile *)FUN_0367384c(*(undefined8 *)(this + 0xf8));
      __s = "LegendBoxChest1";
    }
    else if (param_1 == 0xf) {
      GetLegendReward(this,1);
      this_00 = (HotUIFile *)FUN_0367384c(*(undefined8 *)(this + 0xf8));
      __s = "LegendBoxChest2";
    }
    else {
      if (param_1 != 0x10) goto LAB_03676b28;
      GetLegendReward(this,2);
      this_00 = (HotUIFile *)FUN_0367384c(*(undefined8 *)(this + 0xf8));
      __s = "LegendBoxChest3";
    }
    std::string::string(asStack_10,__s);
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
    (**(code **)(*(long *)pHVar1 + 0x188))(pHVar1,1);
    std::string::~string(asStack_10);
    nop();
  }
LAB_03676b28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorRiftLeaderBoardScreen::ButtonDepress(int) */

void __thiscall
AdaptorRiftLeaderBoardScreen::ButtonDepress(AdaptorRiftLeaderBoardScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

