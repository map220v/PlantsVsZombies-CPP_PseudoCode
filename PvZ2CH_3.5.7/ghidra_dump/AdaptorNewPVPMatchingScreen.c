// Class: AdaptorNewPVPMatchingScreen


/* AdaptorNewPVPMatchingScreen::HandleSuperFSMAction_NewPVPMatchingScreenState(NewPVPMatchingScreenState,
   StateAction) */

void AdaptorNewPVPMatchingScreen::HandleSuperFSMAction_NewPVPMatchingScreenState(void)

{
  return;
}


/* AdaptorNewPVPMatchingScreen::Update() */

void __thiscall AdaptorNewPVPMatchingScreen::Update(AdaptorNewPVPMatchingScreen *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  uVar1 = FUN_034ad88c(*(undefined4 *)(this + 0x120));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  return;
}


/* AdaptorNewPVPMatchingScreen::onNotifyLoadingLevelFinished() */

void __thiscall
AdaptorNewPVPMatchingScreen::onNotifyLoadingLevelFinished(AdaptorNewPVPMatchingScreen *this)

{
  AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
            ((AdaptorJoustMatchmakingScreen *)this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::StaticClassInit() */

void AdaptorNewPVPMatchingScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorNewPVPMatchingScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_034bf2ec,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::StaticGetClass() */

long * AdaptorNewPVPMatchingScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPMatchingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorNewPVPMatchingScreen::GetClass() const */

long * AdaptorNewPVPMatchingScreen::GetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorNewPVPMatchingScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::enterGame() */

void AdaptorNewPVPMatchingScreen::enterGame(void)

{
  GameStateMgr *pGVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_034b269c(gGameStateMgr + 0x1eb1);
  pGVar1 = gGameStateMgr;
  std::string::string(asStack_10,"pvp_game");
  GameStateMgr::StartLevel(pGVar1,&DAT_06aa3b50,asStack_10,0xffffffff,7,7,0xc);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::showNetConnecting(bool) */

void __thiscall
AdaptorNewPVPMatchingScreen::showNetConnecting(AdaptorNewPVPMatchingScreen *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x188);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::adjustCancelButton(bool) */

void __thiscall
AdaptorNewPVPMatchingScreen::adjustCancelButton(AdaptorNewPVPMatchingScreen *this,bool param_1)

{
  long lVar1;
  int iVar2;
  HotUIFile *this_00;
  long *plVar3;
  code *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"CancelButton");
  plVar3 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = plVar3[9];
  pcVar4 = *(code **)(*plVar3 + 0x1a8);
  if (param_1) {
    iVar2 = FUN_034b7438(0x1e);
    iVar2 = iVar2 + *(int *)((long)plVar3 + 0x4c);
  }
  else {
    iVar2 = FUN_034b7438(0x1e);
    iVar2 = *(int *)((long)plVar3 + 0x4c) - iVar2;
  }
  (*pcVar4)(plVar3,(int)lVar1,iVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::onMatchingError(UIMessageBox*, int) */

void AdaptorNewPVPMatchingScreen::onMatchingError(UIMessageBox *param_1,int param_2)

{
  bool bVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)param_1);
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x198));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(param_1 + 0x198));
  return;
}


/* AdaptorNewPVPMatchingScreen::onTimeOut(UIMessageBox*, int) */

void AdaptorNewPVPMatchingScreen::onTimeOut(UIMessageBox *param_1,int param_2)

{
  bool bVar1;
  
  UISingletonDialog<UIMessageBox>::CloseDialog();
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)param_1);
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x198));
  if (!bVar1) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(param_1 + 0x198));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::startShowMatchingText(bool) */

void __thiscall
AdaptorNewPVPMatchingScreen::startShowMatchingText(AdaptorNewPVPMatchingScreen *this,bool param_1)

{
  HotUIFile *pHVar1;
  long *plVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"MatchingText");
  plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_10);
  (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  std::string::~string(asStack_10);
  nop();
  if (param_1) {
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 400) = uVar3;
  }
  else {
    *(undefined4 *)(this + 400) = 0;
  }
  pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"EstimitedMatchingText");
  plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_10);
  (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::startFindingOppoent() */

void __thiscall AdaptorNewPVPMatchingScreen::startFindingOppoent(AdaptorNewPVPMatchingScreen *this)

{
  *(undefined4 *)(this + 0x178) = 0;
  startShowMatchingText(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::startQueue() */

void __thiscall AdaptorNewPVPMatchingScreen::startQueue(AdaptorNewPVPMatchingScreen *this)

{
  long lVar1;
  HotUIFile *this_00;
  long *plVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x17c) = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"QueueWidget");
  plVar2 = (long *)HotUIFile::GetWidgetByName(this_00,asStack_10);
  (**(code **)(*plVar2 + 0x158))(plVar2,1);
  std::string::~string(asStack_10);
  nop();
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x194) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::~AdaptorNewPVPMatchingScreen() */

void __thiscall
AdaptorNewPVPMatchingScreen::~AdaptorNewPVPMatchingScreen(AdaptorNewPVPMatchingScreen *this)

{
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664c340;
  *(undefined ***)this = &PTR_GetClass_0664bf90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664c2f8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x1b8));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x198));
  AdaptorNewPVPMatchingScreenConfig::~AdaptorNewPVPMatchingScreenConfig
            ((AdaptorNewPVPMatchingScreenConfig *)(this + 0x128));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorNewPVPMatchingScreen::~AdaptorNewPVPMatchingScreen() */

void __thiscall
AdaptorNewPVPMatchingScreen::~AdaptorNewPVPMatchingScreen(AdaptorNewPVPMatchingScreen *this)

{
  ~AdaptorNewPVPMatchingScreen(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::timeout() */

void __thiscall AdaptorNewPVPMatchingScreen::timeout(AdaptorNewPVPMatchingScreen *this)

{
  UIMessageBox *this_00;
  Image *pIVar1;
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
  if (this_00 != (UIMessageBox *)0x0) {
    std::string::string(asStack_58,"[NEW_PVP_MAIN_VIEW_DISCONNECT_TEXT]");
    std::string::string(asStack_50,"[NEW_PVP_MAIN_VIEW_DISCONNECT_TITLE]");
    UIMessageBox::SetMessage(this_00,asStack_58,asStack_50);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    UIMessageBox::SetShowType(this_00,2);
    std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
    pIVar1 = (Image *)StringHelper::ToImage(asStack_50,false);
    UIMessageBox::SetBackground(this_00,pIVar1);
    std::string::~string(asStack_50);
    nop();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTimeOut);
    Sexy::Delegate2<UIMessageBox*,int>::
    Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,int)>
              (aDStack_38,asStack_50);
    UIMessageBox::SetCallback(this_00,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::updateAvatarIcon() */

void __thiscall AdaptorNewPVPMatchingScreen::updateAvatarIcon(AdaptorNewPVPMatchingScreen *this)

{
  HotUISeedPacketList *pHVar1;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"PlayerIconBottom");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetBottomImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x138),extraout_w1);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIcon");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x138),extraout_w1_00);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconFrame");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  JoustUtils::AvatarGetFrameImagePtr((JoustUtils *)(ulong)*(uint *)(this + 0x138),extraout_w1_01);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_10,"PlayerIconEffect");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x158))(pHVar1,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::updateRankAvatar() */

void __thiscall AdaptorNewPVPMatchingScreen::updateRankAvatar(AdaptorNewPVPMatchingScreen *this)

{
  HotUISeedPacketList *pHVar1;
  string *extraout_x1;
  string asStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  int local_38 [4];
  Sexy aSStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(this + 0x13c),0x7fffffff,0);
  if (local_38[0] == 0) {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_50,"IMAGE_UI_NEW_PVP_RANK_AVATAR_RANK_AVATAR_DEFAULT");
    nop();
  }
  else {
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_40,true);
    std::string::~string(asStack_40);
    nop();
    std::string::string(asStack_40,"PlayerNameLabelBg_Rank_Avatar");
    pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>
                       (*(HotUIFile **)(this + 0xf8),asStack_40);
    std::string::~string(asStack_40);
    nop();
    Sexy::Upper(aSStack_28,extraout_x1);
    std::operator+("IMAGE_UI_NEW_PVP_RANK_AVATAR_",asStack_40);
    std::string::~string(asStack_40);
  }
  GetUIResource<Sexy::Image>(asStack_50);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_40,(RtWeakPtrBase *)aRStack_48);
  HotUIImage::SetImage((HotUIImage *)pHVar1,asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::string::~string(asStack_50);
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::SetOnCancelAction(std::function<void ()>) */

void __thiscall
AdaptorNewPVPMatchingScreen::SetOnCancelAction(AdaptorNewPVPMatchingScreen *this,function *param_2)

{
  std::function<void()>::operator=((function<void()> *)(this + 0x198),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::AdaptorNewPVPMatchingScreen() */

void __thiscall
AdaptorNewPVPMatchingScreen::AdaptorNewPVPMatchingScreen(AdaptorNewPVPMatchingScreen *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_0664bf90;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0664c2f8;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_0664c340;
  AdaptorNewPVPMatchingScreenConfig::AdaptorNewPVPMatchingScreenConfig
            ((AdaptorNewPVPMatchingScreenConfig *)(this + 0x128));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x198));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x1b8));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x178) = uVar2;
  *(undefined4 *)(this + 0x17c) = uVar2;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewPVPNetworkResponseReceived);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NewPVPNetworkResponseReceived,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyLoadingLevelFinished);
  Sexy::Delegate0::Delegate0<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyLoadingLevelFinished,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::StaticNew() */

AdaptorNewPVPMatchingScreen * AdaptorNewPVPMatchingScreen::StaticNew(void)

{
  AdaptorNewPVPMatchingScreen *this;
  
  this = ::operator_new(0x1e0);
  AdaptorNewPVPMatchingScreen(this);
  return this;
}


/* AdaptorNewPVPMatchingScreen::Setup(AdaptorNewPVPMatchingScreenConfig const&) */

void __thiscall
AdaptorNewPVPMatchingScreen::Setup
          (AdaptorNewPVPMatchingScreen *this,AdaptorNewPVPMatchingScreenConfig *param_1)

{
  AdaptorNewPVPMatchingScreenConfig::operator=
            ((AdaptorNewPVPMatchingScreenConfig *)(this + 0x128),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::onLoadUIView() */

void __thiscall AdaptorNewPVPMatchingScreen::onLoadUIView(AdaptorNewPVPMatchingScreen *this)

{
  ProfileMgr *this_00;
  long lVar1;
  SecretGachaMgr *this_01;
  undefined8 uVar2;
  HotUIManager *this_02;
  HotUIFile *this_03;
  HotUISeedPacketList *pHVar3;
  wstring *extraout_x1;
  undefined1 auVar4 [16];
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar1 = ProfileMgr::GetCurrentProfile(this_00);
  if (lVar1 == 0) {
    FUN_05478178(aSStack_58,L"-invalid-",asStack_40);
    nop();
  }
  else {
    PlayerInfo::AM_GetName();
  }
  std::string::string(asStack_48,"$PLAYERNAME");
  auVar4 = std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_38,asStack_48);
  Sexy::SexyStringToUTF8String(aSStack_58,auVar4._8_8_);
  FUN_05474278(auVar4._0_8_,asStack_40);
  std::string::~string(asStack_40);
  std::string::~string(asStack_48);
  nop();
  SecretGachaMgr::GetScreenType(this_01);
  uVar2 = FUN_0547429c(asStack_50);
  Sexy::StrFormat("NewPVPMatchingScreen_%s",asStack_48,uVar2);
  this_02 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  this_03 = (HotUIFile *)HotUIManager::LoadUIFile(this_02,asStack_48,(map *)amStack_38);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,this_03);
  std::string::string(asStack_40,"PlayerNameLabel");
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_03,asStack_40);
  std::string::~string(asStack_40);
  nop();
  Sexy::ToWString(aSStack_58,extraout_x1);
  (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,asStack_40);
  FUN_05476c50(asStack_40);
  std::string::~string(asStack_48);
  std::string::~string(asStack_50);
  FUN_05476c50(aSStack_58);
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


/* AdaptorNewPVPMatchingScreen::getEstimitedMatchingTime() */

int AdaptorNewPVPMatchingScreen::getEstimitedMatchingTime(void)

{
  int iVar1;
  int iVar2;
  NewPVPMgr *pNVar3;
  
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar1 = NewPVPMgr::GetMinEstimitedMatchingTime(pNVar3);
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar2 = NewPVPMgr::GetMaxEstimitedMatchingTime(pNVar3);
  iVar2 = Sexy::Rand(iVar2 - iVar1);
  return iVar2 + iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::onRequestMatchingPlayerData() */

void __thiscall
AdaptorNewPVPMatchingScreen::onRequestMatchingPlayerData(AdaptorNewPVPMatchingScreen *this)

{
  uint uVar1;
  long lVar2;
  UIMessageBox *this_00;
  Image *pIVar3;
  float fVar4;
  string asStack_68 [8];
  wstring awStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = FUN_034ad8e4(*(undefined4 *)(lVar2 + 0xb0));
  if (uVar1 == 0) {
    AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
              ((AdaptorJoustMatchmakingScreen *)this,1);
  }
  else if (uVar1 == 3) {
    fVar4 = (float)PVZ_EOT();
    if (*(float *)(this + 0x17c) == fVar4) {
      startQueue(this);
    }
  }
  else if (0 < (int)uVar1) {
    Sexy::StrFormat("[NEW_PVP_MAIN_VIEW_MATCHING_RESULT_TEXT_%d]",asStack_68,(ulong)uVar1);
    StringHelper::ToStringValue(asStack_68);
    this_00 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
    if (this_00 != (UIMessageBox *)0x0) {
      std::string::string(asStack_58,"[NEW_PVP_MAIN_VIEW_QUEUEING_TITLE]");
      StringHelper::ToStringValue(asStack_58);
      UIMessageBox::SetMessage(this_00,awStack_60,(wstring *)asStack_50);
      FUN_05476c50(asStack_50);
      std::string::~string(asStack_58);
      nop();
      UIMessageBox::SetShowType(this_00,2);
      std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
      pIVar3 = (Image *)StringHelper::ToImage(asStack_50,false);
      UIMessageBox::SetBackground(this_00,pIVar3);
      std::string::~string(asStack_50);
      nop();
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onMatchingError);
      Sexy::Delegate2<UIMessageBox*,int>::
      Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,int)>
                (aDStack_38,asStack_50);
      UIMessageBox::SetCallback(this_00,aDStack_38);
    }
    FUN_05476c50(awStack_60);
    std::string::~string(asStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::onRequestCancelMatchingPlayerData() */

void __thiscall
AdaptorNewPVPMatchingScreen::onRequestCancelMatchingPlayerData(AdaptorNewPVPMatchingScreen *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar1 = FUN_034ad8e8(*(undefined4 *)(lVar3 + 0x3b4));
  if (cVar1 == '\0') {
    AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
              ((AdaptorJoustMatchmakingScreen *)this,2);
    return;
  }
  AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
  bVar2 = std::function::operator_cast_to_bool((function *)(this + 0x198));
  if (!bVar2) {
    return;
  }
  std::function<void()>::operator()((function<void()> *)(this + 0x198));
  return;
}


/* AdaptorNewPVPMatchingScreen::onRequestQueryMatchingPlayerData() */

void __thiscall
AdaptorNewPVPMatchingScreen::onRequestQueryMatchingPlayerData(AdaptorNewPVPMatchingScreen *this)

{
  CRefSymbolDb *pCVar1;
  long lVar2;
  ulong uVar3;
  
  *(int *)(this + 0x1d8) = *(int *)(this + 0x1d8) + -1;
  pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
  uVar3 = FUN_034b04a4(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
  if (1 < uVar3) {
    pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
    lVar2 = FUN_034b04d4(*(undefined8 *)(lVar2 + 0x20),0);
    if (*(int *)(lVar2 + 0x5c) == 1) {
      pCVar1 = (CRefSymbolDb *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      lVar2 = Reflection::CRefSymbolDb::GetClasses(pCVar1);
      lVar2 = FUN_034b04d4(*(undefined8 *)(lVar2 + 0x20),1);
      if (*(int *)(lVar2 + 0x5c) == 1) {
        AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
                  ((AdaptorJoustMatchmakingScreen *)this,2);
        return;
      }
    }
  }
  return;
}


/* AdaptorNewPVPMatchingScreen::onNewPVPNetworkResponseReceived(int, int) */

void __thiscall
AdaptorNewPVPMatchingScreen::onNewPVPNetworkResponseReceived
          (AdaptorNewPVPMatchingScreen *this,int param_1,int param_2)

{
  if (param_1 == 2) {
    if (param_2 == 2) {
      onRequestMatchingPlayerData(this);
      return;
    }
  }
  else if (param_1 == 3) {
    if (param_2 == 2) {
      onRequestQueryMatchingPlayerData(this);
      return;
    }
  }
  else if ((param_1 == 4) && (param_2 == 2)) {
    onRequestCancelMatchingPlayerData(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::setup() */

void __thiscall AdaptorNewPVPMatchingScreen::setup(AdaptorNewPVPMatchingScreen *this)

{
  char cVar1;
  int iVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  undefined8 uVar4;
  HotUIFile *pHVar5;
  long *plVar6;
  PuzzleRotatePanel *this_01;
  vector *pvVar7;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar8;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  if (this_00 != (HotUIFile *)0x0) {
    std::string::string((string *)&local_20,"RetryButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,0,(ButtonListener *)(this + 0xd8));
    std::string::string((string *)&local_20,"CancelButton");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    HotUIButton::SetListener((HotUIButton *)pHVar3,1,(ButtonListener *)(this + 0xd8));
    cVar1 = NewPVPUtils::IsPlayingNewPVPTutorial();
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pHVar3 + 0x158))(pHVar3,0);
    }
    std::string::string((string *)&local_20,"NetConnectingWaitingWidget");
    uVar4 = HotUIFile::GetWidgetByName(this_00,(string *)&local_20);
    *(undefined8 *)(this + 0x188) = uVar4;
    std::string::~string((string *)&local_20);
    nop();
    pHVar5 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)&local_20,"RetryButton");
    plVar6 = (long *)HotUIFile::GetWidgetByName(pHVar5,(string *)&local_20);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)&local_20);
    nop();
    showNetConnecting(this,false);
    startShowMatchingText(this,false);
    pHVar5 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)&local_20,"QueueWidget");
    plVar6 = (long *)HotUIFile::GetWidgetByName(pHVar5,(string *)&local_20);
    (**(code **)(*plVar6 + 0x158))(plVar6,0);
    std::string::~string((string *)&local_20);
    nop();
    this_01 = (PuzzleRotatePanel *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    iVar2 = PuzzleRotatePanel::GetCurrentIndex(this_01);
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_ESTIMATED_QUEUEING_TIME]");
    StringHelper::ToTimeString((StringHelper *)0x1,(float)iVar2,extraout_w1);
    TodReplaceString(awStack_28,L"{TIME}",(wstring *)&local_20);
    FUN_05476c50((string *)&local_20);
    FUN_05476c50(awStack_28);
    pHVar5 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)&local_20,"EstimitedQueueingText");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar5,(string *)&local_20);
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,auStack_40);
    std::string::~string((string *)&local_20);
    nop();
    iVar2 = getEstimitedMatchingTime();
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_ES_MATCHING_OPPOENT]");
    StringHelper::ToTimeString((StringHelper *)0x2,(float)iVar2,extraout_w1_00);
    TodReplaceString(awStack_28,L"{TIME}",(wstring *)&local_20);
    FUN_05476c50((string *)&local_20);
    FUN_05476c50(awStack_28);
    pHVar5 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string((string *)&local_20,"EstimitedMatchingText");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(pHVar5,(string *)&local_20);
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,auStack_38);
    std::string::~string((string *)&local_20);
    nop();
    std::string::string((string *)&local_20,"FoundOppoentTips");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)&local_20);
    std::string::~string((string *)&local_20);
    nop();
    pvVar7 = (vector *)NewPVPMatchingTips::GetTips((NewPVPMatchingTips *)pHVar3);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20,pvVar7);
    iVar2 = FUN_034b0554(local_20,local_18);
    iVar2 = Sexy::Rand(iVar2);
    uVar4 = FUN_034b0560(local_20,(long)iVar2);
    FUN_05475d88(asStack_30,uVar4);
    pcVar8 = *(code **)(*(long *)pHVar3 + 0x360);
    StringHelper::ToStringValue(asStack_30);
    (*pcVar8)(pHVar3,awStack_28);
    FUN_05476c50(awStack_28);
    updateRankAvatar(this);
    updateAvatarIcon(this);
    std::string::~string(asStack_30);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_20);
    FUN_05476c50(auStack_38);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorNewPVPMatchingScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorNewPVPMatchingScreen::onLinkToUIViewCreated(AdaptorNewPVPMatchingScreen *this)

{
  setup(this);
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
            ((AdaptorJoustMatchmakingScreen *)this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::finishFindingOppoent() */

void __thiscall AdaptorNewPVPMatchingScreen::finishFindingOppoent(AdaptorNewPVPMatchingScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  NewPVPMgr *pNVar2;
  Network_PlayerSyncData *pNVar3;
  char *pcVar4;
  long lVar5;
  TGALogMgr *pTVar6;
  code *__n;
  undefined4 uVar7;
  float fVar8;
  Network_PlayerSyncData aNStack_308 [96];
  vector avStack_2a8 [40];
  Network_PlayerSyncData aNStack_280 [124];
  int local_204;
  TGANewPVPData aTStack_1f8 [24];
  string asStack_1e0 [8];
  string asStack_1d8 [216];
  string asStack_100 [248];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = PVZ_EOT();
  *(undefined4 *)(this + 0x178) = uVar7;
  startShowMatchingText(this,false);
  this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_100,"RetryButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_100);
  __n = *(code **)(*(long *)pHVar1 + 0x188);
  (*__n)(pHVar1,0);
  std::string::~string(asStack_100);
  nop();
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar3 = (Network_PlayerSyncData *)NewPVPMgr::GetSelfPlayerData(pNVar2);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_308,pNVar3);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::SyncArea(pNVar2,avStack_2a8);
  TGANewPVPData::TGANewPVPData(aTStack_1f8);
  DString::DString((DString *)asStack_100,7);
  pcVar4 = (char *)DString::c_str((DString *)asStack_100);
  std::string::append((string *)aTStack_1f8,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_100);
  lVar5 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  fVar8 = (float)FUN_034c6a54(lVar5 + 0x4c0);
  DString::DString((DString *)asStack_100,(int)fVar8);
  pcVar4 = (char *)DString::c_str((DString *)asStack_100);
  std::string::append(asStack_1e0,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_100);
  pNVar2 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  pNVar3 = (Network_PlayerSyncData *)NewPVPMgr::GetOppoentPlayerData(pNVar2);
  Network_PlayerSyncData::Network_PlayerSyncData(aNStack_280,pNVar3);
  DString::DString((DString *)asStack_100,local_204);
  pcVar4 = (char *)DString::c_str((DString *)asStack_100);
  std::string::append(asStack_1d8,pcVar4,(size_t)__n);
  DString::~DString((DString *)asStack_100);
  pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGANewPVPData::TGANewPVPData((TGANewPVPData *)asStack_100,aTStack_1f8);
  TGALogMgr::LogNewPVP(pTVar6,asStack_100);
  TGANewPVPData::~TGANewPVPData((TGANewPVPData *)asStack_100);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_280);
  TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  Network_PlayerSyncData::~Network_PlayerSyncData(aNStack_308);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::updateFindingOppoent() */

void __thiscall AdaptorNewPVPMatchingScreen::updateFindingOppoent(AdaptorNewPVPMatchingScreen *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  PageControl *this_00;
  HotUIFile *this_01;
  HotUISeedPacketList *pHVar5;
  NewPVPMgr *pNVar6;
  GridItem *this_02;
  string *psVar7;
  UIMessageBox *this_03;
  Image *pIVar8;
  int extraout_w1;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  string asStack_50 [24];
  Delegate2<UIMessageBox*,int> aDStack_38 [48];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  this_00 = (PageControl *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  iVar4 = Sexy::PageControl::GetCurrentPage(this_00);
  if (iVar4 <= iVar1) {
    timeout(this);
  }
  fVar9 = (float)PVZ_T();
  if (*(float *)(this + 0x178) < fVar9) {
    pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    bVar2 = (bool)NewPVPUtils::IsPlayingFakeMatch();
    cVar3 = NewPVPMgr::IsCurrentMatchingTimeout(pNVar6,bVar2);
    if (cVar3 == '\0') {
      pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      this_02 = (GridItem *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      psVar7 = (string *)GridItem::GetConditionTracker(this_02);
      bVar2 = (bool)NewPVPUtils::IsPlayingFakeMatch();
      NewPVPMgr::RequestQueryPlayerData(pNVar6,psVar7,true,bVar2);
      *(int *)(this + 0x1d8) = *(int *)(this + 0x1d8) + 1;
      fVar9 = (float)PVZ_T();
      pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      fVar10 = (float)NewPVPMgr::GetSyncPlayerInterval(pNVar6);
      fVar11 = 2.0;
      if (fVar10 != 0.0) {
        pNVar6 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
        fVar11 = (float)NewPVPMgr::GetSyncPlayerInterval(pNVar6);
      }
      *(float *)(this + 0x178) = fVar11 + fVar9;
    }
    else {
      finishFindingOppoent(this);
      this_03 = (UIMessageBox *)UISingletonDialog<UIMessageBox>::ShowDialog();
      if (this_03 != (UIMessageBox *)0x0) {
        std::string::string((string *)awStack_58,"[RIFT_REACH_MAX_INTERVAL_TEXT]");
        std::string::string(asStack_50,"[RIFT_REACH_MAX_INTERVAL_TITLE]");
        UIMessageBox::SetMessage(this_03,(string *)awStack_58,asStack_50);
        std::string::~string(asStack_50);
        nop();
        std::string::~string((string *)awStack_58);
        nop();
        UIMessageBox::SetShowType(this_03,2);
        std::string::string(asStack_50,"IMAGE_UI_DIALOG_ASSET_BG_ROUND_GREEN");
        pIVar8 = (Image *)StringHelper::ToImage(asStack_50,false);
        UIMessageBox::SetBackground(this_03,pIVar8);
        std::string::~string(asStack_50);
        nop();
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,onTimeOut);
        Sexy::Delegate2<UIMessageBox*,int>::
        Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(UIMessageBox*,int)>
                  (aDStack_38,asStack_50);
        UIMessageBox::SetCallback(this_03,aDStack_38);
      }
    }
  }
  if (*(float *)(this + 400) != 0.0) {
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_MATCHING_OPPOENT]");
    fVar9 = (float)PVZ_T();
    StringHelper::ToTimeString((StringHelper *)0x2,fVar9 - *(float *)(this + 400),extraout_w1);
    TodReplaceString(awStack_58,L"{TIME}",(wstring *)asStack_50);
    FUN_05476c50(asStack_50);
    FUN_05476c50(awStack_58);
    this_01 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_50,"MatchingText");
    pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_01,asStack_50);
    (**(code **)(*(long *)pHVar5 + 0x360))(pHVar5,auStack_60);
    std::string::~string(asStack_50);
    nop();
    FUN_05476c50(auStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::findOppoent() */

void __thiscall AdaptorNewPVPMatchingScreen::findOppoent(AdaptorNewPVPMatchingScreen *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  TextureInfo *pTVar4;
  NewPVPMgr *pNVar5;
  long lVar6;
  vector<int,std::allocator<int>> avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pTVar4 = (TextureInfo *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar4);
  if (cVar2 == '\0') {
    startFindingOppoent(this);
  }
  else {
    pNVar5 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar1 = *(undefined4 *)(this + 0x170);
    std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)(this + 0x140));
    std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)(this + 0x158));
    uVar3 = NewPVPUtils::IsPlayingFakeMatch();
    NewPVPMgr::RequestMatching(pNVar5,uVar1,avStack_38,avStack_20,uVar3);
    std::vector<int,std::allocator<int>>::~vector(avStack_20);
    std::vector<int,std::allocator<int>>::~vector(avStack_38);
  }
  lVar6 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  FUN_034c6a34(lVar6 + 0x4c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::checkQueue() */

void __thiscall AdaptorNewPVPMatchingScreen::checkQueue(AdaptorNewPVPMatchingScreen *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  NewPVPMgr *pNVar3;
  vector<int,std::allocator<int>> avStack_38 [24];
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  NewPVPMgr::ClearCurrentQueryPlayerData(pNVar3);
  pNVar3 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
  uVar1 = *(undefined4 *)(this + 0x170);
  std::vector<int,std::allocator<int>>::vector(avStack_38,(vector *)(this + 0x140));
  std::vector<int,std::allocator<int>>::vector(avStack_20,(vector *)(this + 0x158));
  uVar2 = NewPVPUtils::IsPlayingFakeMatch();
  NewPVPMgr::RequestMatching(pNVar3,uVar1,avStack_38,avStack_20,uVar2);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::updateQueueing() */

void __thiscall AdaptorNewPVPMatchingScreen::updateQueueing(AdaptorNewPVPMatchingScreen *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  NewPVPMgr *pNVar4;
  int extraout_w1;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_40 [8];
  wstring awStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x17c) < fVar5) {
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    uVar1 = *(undefined4 *)(this + 0x170);
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)awStack_38,(vector *)(this + 0x140));
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)asStack_20,(vector *)(this + 0x158));
    uVar2 = NewPVPUtils::IsPlayingFakeMatch();
    NewPVPMgr::RequestMatching
              (pNVar4,uVar1,(vector<int,std::allocator<int>> *)awStack_38,
               (vector<int,std::allocator<int>> *)asStack_20,uVar2);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)awStack_38);
    fVar5 = (float)PVZ_T();
    pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    fVar6 = (float)NewPVPMgr::GetSyncQueueInterval(pNVar4);
    fVar7 = 10.0;
    if (fVar6 != 0.0) {
      pNVar4 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
      fVar7 = (float)NewPVPMgr::GetSyncQueueInterval(pNVar4);
    }
    *(float *)(this + 0x17c) = fVar7 + fVar5;
  }
  if (*(float *)(this + 0x194) != 0.0) {
    TodStringTranslate(L"[NEW_PVP_MAIN_VIEW_QUEUEING_WAITED_TIME]");
    fVar5 = (float)PVZ_T();
    StringHelper::ToTimeString((StringHelper *)0x2,fVar5 - *(float *)(this + 0x194),extraout_w1);
    TodReplaceString(awStack_38,L"{TIME}",(wstring *)asStack_20);
    FUN_05476c50(asStack_20);
    FUN_05476c50(awStack_38);
    this_00 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
    std::string::string(asStack_20,"QueueingWaitedTime");
    pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
    (**(code **)(*(long *)pHVar3 + 0x360))(pHVar3,auStack_40);
    std::string::~string(asStack_20);
    nop();
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::HandleStateMachine_NewPVPMatchingScreenState(NewPVPMatchingScreenState,
   StateAction) */

void __thiscall
AdaptorNewPVPMatchingScreen::HandleStateMachine_NewPVPMatchingScreenState
          (AdaptorNewPVPMatchingScreen *this,uint param_2,int param_3)

{
  HotUIFile *pHVar1;
  long *plVar2;
  string asStack_50 [24];
  Delegate2<NewPVPMatchingScreenState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_NewPVPMatchingScreenState);
  Sexy::Delegate2<NewPVPMatchingScreenState,StateAction>::
  Delegate2<AdaptorNewPVPMatchingScreen,void(AdaptorNewPVPMatchingScreen::*)(NewPVPMatchingScreenState,StateAction)>
            (aDStack_38,asStack_50);
  switch(param_2) {
  case 0:
    if (param_3 == 1) {
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoent");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoentTipsImage");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"MatchingAnim");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"MainBackgroundImageMask");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"BackToMenu");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      adjustCancelButton(this,true);
      checkQueue(this);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        updateQueueing(this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
      }
    }
    break;
  case 1:
    if (param_3 == 1) {
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoent");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoentTipsImage");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"MatchingAnim");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"MainBackgroundImageMask");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"BackToMenu");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"QueueWidget");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      adjustCancelButton(this,false);
      startFindingOppoent(this);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        updateFindingOppoent(this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
      }
    }
    break;
  case 2:
    if (param_3 == 1) {
      finishFindingOppoent(this);
    }
    else if (param_3 != 0) {
      if (param_3 == 2) {
        AdaptorJoustMatchmakingScreen::setState_MatchmakingScreenState
                  ((AdaptorJoustMatchmakingScreen *)this,3);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
      }
    }
    break;
  case 3:
    if (param_3 == 1) {
      enterGame();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoent");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,1);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"FoundOppoentTipsImage");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"MatchingAnim");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"CancelButton");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"RetryButton");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
      pHVar1 = (HotUIFile *)FUN_034ad7f0(*(undefined8 *)(this + 0xf8));
      std::string::string(asStack_50,"BackToMenu");
      plVar2 = (long *)HotUIFile::GetWidgetByName(pHVar1,asStack_50);
      (**(code **)(*plVar2 + 0x158))(plVar2,0);
      std::string::~string(asStack_50);
      nop();
    }
    else if ((param_3 != 0) && (param_3 != 2)) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
    }
    break;
  case 4:
    if (param_3 != 0) {
      if (param_3 == 1) {
        AdaptorJoustWinStreakDialog::Close((AdaptorJoustWinStreakDialog *)this);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
      }
    }
    break;
  case 0xffffffff:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0xffffffff);
    }
    break;
  default:
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorNewPVPMatchingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPMatchingScreen::ButtonDepress(AdaptorNewPVPMatchingScreen *this,int param_1)

{
  bool bVar1;
  char *__s;
  TGALogMgr *pTVar2;
  NewPVPMgr *this_00;
  size_t __n;
  TGANewPVPData aTStack_1f8 [248];
  DString aDStack_100 [248];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0) {
    findOppoent(this);
  }
  else if (param_1 == 1) {
    __n = ___stack_chk_guard;
    TGANewPVPData::TGANewPVPData(aTStack_1f8);
    DString::DString(aDStack_100,8);
    __s = (char *)DString::c_str(aDStack_100);
    std::string::append((string *)aTStack_1f8,__s,__n);
    DString::~DString(aDStack_100);
    pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    TGANewPVPData::TGANewPVPData((TGANewPVPData *)aDStack_100,aTStack_1f8);
    TGALogMgr::LogNewPVP(pTVar2,aDStack_100);
    TGANewPVPData::~TGANewPVPData((TGANewPVPData *)aDStack_100);
    this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    bVar1 = (bool)NewPVPUtils::IsPlayingFakeMatch();
    NewPVPMgr::RequestCancelMatching(this_00,bVar1);
    TGANewPVPData::~TGANewPVPData(aTStack_1f8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AdaptorNewPVPMatchingScreen::ButtonDepress(int) */

void __thiscall
AdaptorNewPVPMatchingScreen::ButtonDepress(AdaptorNewPVPMatchingScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

