// Class: AdaptorJoustTourneyResultsScreen


/* AdaptorJoustTourneyResultsScreen::Close() */

void __thiscall AdaptorJoustTourneyResultsScreen::Close(AdaptorJoustTourneyResultsScreen *this)

{
  (**(code **)(*(long *)this + 0x158))(this,0);
  return;
}


/* AdaptorJoustTourneyResultsScreen::HandleSuperFSMAction_TournamentResultsScreenState(TournamentResultsScreenState,
   StateAction) */

void AdaptorJoustTourneyResultsScreen::HandleSuperFSMAction_TournamentResultsScreenState(void)

{
  return;
}


/* AdaptorJoustTourneyResultsScreen::setState_TournamentResultsScreenState(TournamentResultsScreenState)
    */

void __thiscall
AdaptorJoustTourneyResultsScreen::setState_TournamentResultsScreenState
          (AdaptorJoustTourneyResultsScreen *this,int param_2)

{
  if (*(int *)(this + 0x1b8) != -1) {
    (**(code **)(*(long *)this + 0x350))(this,*(int *)(this + 0x1b8),3);
  }
  *(int *)(this + 0x1b8) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x350))(this,param_2,1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::StaticClassInit() */

void AdaptorJoustTourneyResultsScreen::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustTourneyResultsScreen");
    (*pcVar2)(plVar1,asStack_10,FUN_03871b40,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::StaticGetClass() */

long * AdaptorJoustTourneyResultsScreen::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AdaptorJoustTourneyResultsScreen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustTourneyResultsScreen::onAwardScreenDismissed() */

void __thiscall
AdaptorJoustTourneyResultsScreen::onAwardScreenDismissed(AdaptorJoustTourneyResultsScreen *this)

{
  PVZ2UIAwardScreen::KillAwardScreen(*(PVZ2UIAwardScreen **)(this + 0x148));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x148));
  GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
  Close(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::updateFTUE() */

void __thiscall AdaptorJoustTourneyResultsScreen::updateFTUE(AdaptorJoustTourneyResultsScreen *this)

{
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x128) == 0) && (0 < *(int *)(this + 0x120))) {
    TodStringTranslate((wstring *)&DAT_06ab5338);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5450,awStack_10);
    FUN_05476c50(awStack_10);
    TodStringTranslate((wstring *)&DAT_06ab5320);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5398,awStack_10);
    FUN_05476c50(awStack_10);
    TodStringTranslate((wstring *)&DAT_06ab53a0);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab53d0,awStack_10);
    FUN_05476c50(awStack_10);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06ab5368,false);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06ab5340,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::updateRewardData() */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateRewardData(AdaptorJoustTourneyResultsScreen *this)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  undefined8 uVar5;
  string *extraout_x1;
  ulong uVar6;
  LevelOfTheDay_RewardItemType aLStack_20 [8];
  Sexy aSStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_038716e0(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06ab5400,lVar2 != 0);
  lVar2 = FUN_038716e0(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06ab5350,lVar2 == 0);
  lVar2 = FUN_038716e0(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  uVar5 = DAT_06ab5370;
  if (lVar2 != 0) {
    uVar6 = 0;
    lVar2 = FUN_038716ec(DAT_06ab5370,DAT_06ab5378);
    if (lVar2 != 0) {
      do {
        uVar3 = FUN_038716e0(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
        bVar1 = uVar6 < uVar3;
        psVar4 = (string *)FUN_038716f8(uVar5,uVar6);
        HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar4,bVar1);
        psVar4 = (string *)FUN_038716f8(DAT_06ab5430,uVar6);
        HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,psVar4,bVar1);
        if (bVar1) {
          uVar5 = FUN_038716f8(DAT_06ab5370,uVar6);
          FUN_03871700(*(undefined8 *)(this + 0x130),uVar6);
          RewardImageFactory::GetImageForReward(aLStack_20);
          HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,uVar5,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          psVar4 = (string *)FUN_038716f8(DAT_06ab5430,uVar6);
          lVar2 = FUN_03871700(*(undefined8 *)(this + 0x130),uVar6);
          Sexy::StrFormat("x%d",aSStack_18,(ulong)*(uint *)(lVar2 + 0x28));
          Sexy::UTF8StringToWString(aSStack_18,extraout_x1);
          HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,psVar4,(wstring *)aRStack_10);
          FUN_05476c50(aRStack_10);
          std::string::~string((string *)aSStack_18);
        }
        uVar5 = DAT_06ab5370;
        uVar6 = uVar6 + 1;
        uVar3 = FUN_038716ec(DAT_06ab5370,DAT_06ab5378);
      } while (uVar6 < uVar3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::sendTournamentRegistrationRequest() */

void AdaptorJoustTourneyResultsScreen::sendTournamentRegistrationRequest(void)

{
  function<void(Sexy::Graphics*)> afStack_48 [32];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(Sexy::Graphics*)>::function(afStack_48);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  JoustUtils::SendAPIRegisterForTournament(afStack_48,afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_28);
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)afStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::onJoustNetworkIssueDecision(int, int) */

void __thiscall
AdaptorJoustTourneyResultsScreen::onJoustNetworkIssueDecision
          (AdaptorJoustTourneyResultsScreen *this,int param_1,int param_2)

{
  if (param_1 == 5) {
    if (param_2 == 0) {
      sendTournamentRegistrationRequest();
      return;
    }
    if (param_2 == 1) {
      GameStateMgr::ShowJoustOrAdventureLandingScreen(gGameStateMgr,0,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::setInputEnabled(bool) */

void __thiscall
AdaptorJoustTourneyResultsScreen::setInputEnabled
          (AdaptorJoustTourneyResultsScreen *this,bool param_1)

{
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,!param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::EnableFullScreenDismiss(bool) */

void __thiscall
AdaptorJoustTourneyResultsScreen::EnableFullScreenDismiss
          (AdaptorJoustTourneyResultsScreen *this,bool param_1)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
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
/* AdaptorJoustTourneyResultsScreen::setup() */

void __thiscall AdaptorJoustTourneyResultsScreen::setup(AdaptorJoustTourneyResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::onLinkToUIViewCreated() */

void __thiscall
AdaptorJoustTourneyResultsScreen::onLinkToUIViewCreated(AdaptorJoustTourneyResultsScreen *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"DialogDismiss");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,0,(ButtonListener *)(this + 0xd8));
  (**(code **)(*(long *)pHVar1 + 0x90))(pHVar1,1);
  HotUIButton::SetInvisible((HotUIButton *)pHVar1,true);
  std::string::string(asStack_10,"ContinueButton");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIButton::SetListener((HotUIButton *)pHVar1,1,(ButtonListener *)(this + 0xd8));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::onLoadUIView() */

void __thiscall
AdaptorJoustTourneyResultsScreen::onLoadUIView(AdaptorJoustTourneyResultsScreen *this)

{
  HotUIManager *this_00;
  HotUIFile *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  std::string::string(asStack_10,"JoustTourneyResultsScreen");
  pHVar1 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::showAwardScreen() */

void __thiscall
AdaptorJoustTourneyResultsScreen::showAwardScreen(AdaptorJoustTourneyResultsScreen *this)

{
  bool bVar1;
  int extraout_w0;
  PVZ2UIAwardScreen *this_00;
  long lVar2;
  TimeChallengeEndLevelUI *this_01;
  undefined8 local_58;
  undefined8 local_50 [3];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = ::operator_new(0x1a0);
  PVZ2UIAwardScreen::PVZ2UIAwardScreen(this_00);
  *(PVZ2UIAwardScreen **)(this + 0x148) = this_00;
  PVZ2UIAwardScreen::ShowAwardScreen(this_00);
  PVZ2UIAwardScreen::SetBackgroundType(*(PVZ2UIAwardScreen **)(this + 0x148),1);
  nop();
  UIHappyVaseBreaker::SetResetHammerNeed(*(UIHappyVaseBreaker **)(this + 0x148),extraout_w0);
  this_01 = *(TimeChallengeEndLevelUI **)(this + 0x148);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAwardScreenDismissed);
  Sexy::Delegate0::
  Delegate0<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)()>
            (aDStack_38,(__normal_iterator *)local_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  PirateStage::ShowGuides(*(PirateStage **)(this + 0x148),true);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x130));
  local_50[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x130));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
  if (bVar1) {
    do {
      lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
      switch(*(undefined4 *)(lVar2 + 0x10)) {
      case 0x22:
        PVZ2UIAwardScreen::AddJoustGemReward
                  (*(PVZ2UIAwardScreen **)(this + 0x148),*(int *)(lVar2 + 0x28));
        break;
      case 0x23:
        PVZ2UIAwardScreen::AddJoustCHCoinReward
                  (*(PVZ2UIAwardScreen **)(this + 0x148),*(int *)(lVar2 + 0x28));
        break;
      case 0x25:
        PVZ2UIAwardScreen::AddJoustCHMaterialReward
                  (*(PVZ2UIAwardScreen **)(this + 0x148),*(int *)(lVar2 + 0x38),
                   *(int *)(lVar2 + 0x28),false);
        break;
      case 0x26:
        PVZ2UIAwardScreen::AddJoustCHChestReward(*(PVZ2UIAwardScreen **)(this + 0x148),1);
      }
      eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
                ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_58);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_50);
    } while (bVar1);
  }
  PVZ2UIAwardScreen::Start(*(PVZ2UIAwardScreen **)(this + 0x148));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::onRegistrationDone() */

void __thiscall
AdaptorJoustTourneyResultsScreen::onRegistrationDone(AdaptorJoustTourneyResultsScreen *this)

{
  long lVar1;
  
  lVar1 = FUN_038716e0(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  if (lVar1 == 0) {
    GameStateMgr::ShowJoustDashboardScreen(gGameStateMgr);
    Close(this);
    return;
  }
  showAwardScreen(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::startHotUIAnim(WidgetAnimationData*) */

void __thiscall
AdaptorJoustTourneyResultsScreen::startHotUIAnim
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1)

{
  int iVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate3<std::string_const&,std::string_const&,int> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  if (param_1[0x18] == (WidgetAnimationData)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onHotUIAnimFinished);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,aCStack_50);
    iVar1 = HotUIAnim::PlayAndStop
                      ((HotUIAnim *)pHVar2,param_1 + 0x10,0,
                       (Delegate1<std::string_const&> *)aDStack_38);
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onHotUIAnimLoopFinished);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::
    Delegate3<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(std::string_const&,std::string_const&,int)>
              (aDStack_38,aCStack_50);
    iVar1 = HotUIAnim::PlayAndContinue((HotUIAnim *)pHVar2,param_1 + 0x10,0,aDStack_38);
  }
  if (iVar1 != -1) {
    param_1[0x1b] = (WidgetAnimationData)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::AdaptorJoustTourneyResultsScreen() */

void __thiscall
AdaptorJoustTourneyResultsScreen::AdaptorJoustTourneyResultsScreen
          (AdaptorJoustTourneyResultsScreen *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066acc00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066acf68;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066acfb0;
  AdaptorJoustTourneyResultsScreenParams::AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120));
  Sexy::RtDbTable::IteratorStorage::IteratorStorage((IteratorStorage *)(this + 0x158));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x188));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkResponse);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkIssueDecision);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkIssueDecision,&local_50);
  return;
}


/* AdaptorJoustTourneyResultsScreen::StaticNew() */

AdaptorJoustTourneyResultsScreen * AdaptorJoustTourneyResultsScreen::StaticNew(void)

{
  AdaptorJoustTourneyResultsScreen *this;
  
  this = ::operator_new(0x1c0);
  AdaptorJoustTourneyResultsScreen(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::endAnimsForState(TournamentResultsScreenState) */

void __thiscall
AdaptorJoustTourneyResultsScreen::endAnimsForState
          (AdaptorJoustTourneyResultsScreen *this,int param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                      *)(this + 0x188));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x188));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar2 + 0xc) == param_2) {
      HotUIAdaptor::setWidgetVisibility
                ((HotUIAdaptor *)this,(string *)(lVar2 + 0x10),*(bool *)(lVar2 + 0x22));
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::~AdaptorJoustTourneyResultsScreen() */

void __thiscall
AdaptorJoustTourneyResultsScreen::~AdaptorJoustTourneyResultsScreen
          (AdaptorJoustTourneyResultsScreen *this)

{
  *(undefined ***)this = &PTR_getHotUIAdaptorClass_066acc00;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066acf68;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066acfb0;
  std::
  map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
  ::~map((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
          *)(this + 0x188));
  CurveSequenceCollection<Sexy::SexyVector2>::~CurveSequenceCollection
            ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x158));
  AdaptorJoustTourneyResultsScreenParams::~AdaptorJoustTourneyResultsScreenParams
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustTourneyResultsScreen::~AdaptorJoustTourneyResultsScreen() */

void __thiscall
AdaptorJoustTourneyResultsScreen::~AdaptorJoustTourneyResultsScreen
          (AdaptorJoustTourneyResultsScreen *this)

{
  ~AdaptorJoustTourneyResultsScreen(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustTourneyResultsScreen::onHotUIAnimFinished(std::string const&) */

void __thiscall
AdaptorJoustTourneyResultsScreen::onHotUIAnimFinished
          (AdaptorJoustTourneyResultsScreen *this,string *param_1)

{
  long lVar1;
  
  lVar1 = std::
          map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
          ::operator[]((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                        *)(this + 0x188),param_1);
  *(undefined1 *)(lVar1 + 0x1b) = 1;
  return;
}


/* AdaptorJoustTourneyResultsScreen::onHotUIAnimLoopFinished(std::string const&, std::string const&,
   int) */

void AdaptorJoustTourneyResultsScreen::onHotUIAnimLoopFinished
               (string *param_1,string *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = std::
          map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
          ::operator[]((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                        *)(param_1 + 0x188),param_2);
  *(undefined1 *)(lVar1 + 0x1b) = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::setupAnimationsPromotion() */

void __thiscall
AdaptorJoustTourneyResultsScreen::setupAnimationsPromotion(AdaptorJoustTourneyResultsScreen *this)

{
  CurveSequenceCollection<Sexy::SexyVector2> *this_00;
  map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
  *this_01;
  bool bVar1;
  HotUIFile *this_02;
  WidgetAnimationData *pWVar2;
  long lVar3;
  CurveSequence<Sexy::SexyVector2> *pCVar4;
  HotUISeedPacketList *pHVar5;
  _func_void *extraout_x1;
  size_t __n;
  string *psVar6;
  float fVar7;
  uint local_40 [2];
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  long local_8;
  
  __n = 3;
  local_8 = ___stack_chk_guard;
  this_02 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  this_00 = (CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x158);
  this_01 = (map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             *)(this + 0x188);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"intro",__n);
  std::string::append(asStack_20,"PromotionIcon",__n);
  local_28 = 0x100000004;
  FUN_031dcc6c((string *)&local_30,asStack_20,asStack_18);
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,(string *)&local_30);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  std::string::~string((string *)&local_30);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslateNewIconIn",__n);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5498);
  local_28 = 0x300000000;
  lVar3 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar3 + 0x48),(float)(*(int *)(lVar3 + 0x4c) + 0x140));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar3 + 0x48),(float)*(int *)(lVar3 + 0x4c));
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar4,aFStack_38,(string *)&local_30,4)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadeNewIconIn",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5498);
  local_28 = 0x300000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,255.0,255.0);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3e4ccccd,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadePreviousIconOut",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5340);
  local_28 = 0x200000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,255.0,255.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,0.0);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3ecccccd,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScalePreviousIconOut",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5340);
  local_28 = 0x200000001;
  local_f = true;
  if (*(int *)(this + 0x128) == 0) {
    local_f = *(int *)(this + 0x120) < 1;
  }
  local_e = local_f;
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,asStack_20);
  fVar7 = (float)FUN_038716d8(*(undefined4 *)(pHVar5 + 0x27c));
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar7,fVar7);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar7 * 0.2,fVar7 * 0.2);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3ecccccd,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  pWVar2 = (WidgetAnimationData *)&local_28;
  std::string::string((string *)local_40,"BackgroundRays");
  nop();
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScaleShineIn",(size_t)pWVar2);
  thunk_FUN_05475e00(asStack_20,(string *)local_40);
  local_f = 0;
  local_28 = 0x400000003;
  local_10 = 1;
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_02,asStack_20);
  fVar7 = (float)FUN_038716dc(*(undefined4 *)(pHVar5 + 0x240));
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar7,fVar7);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_00,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f000000,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_01,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::string::~string((string *)local_40);
  local_40[0] = 1;
  do {
    WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
    std::string::append(asStack_18,"intro",(size_t)psVar6);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
    std::operator+("BackgroundStar",(string *)aFStack_38);
    FUN_05474278(asStack_20,(string *)&local_30);
    std::string::~string((string *)&local_30);
    std::string::~string((string *)aFStack_38);
    local_28 = 0x400000004;
    FUN_031dcc6c((string *)&local_30,asStack_20,asStack_18);
    pWVar2 = (WidgetAnimationData *)
             std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::operator[](this_01,(string *)&local_30);
    WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
    std::string::~string((string *)&local_30);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
    local_40[0] = local_40[0] + 1;
    psVar6 = (string *)(ulong)local_40[0];
  } while ((int)local_40[0] < 7);
  local_40[0] = 1;
  do {
    WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
    std::string::append(asStack_18,"loop",(size_t)psVar6);
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_40);
    std::operator+("BackgroundStar",(string *)aFStack_38);
    FUN_05474278(asStack_20,(string *)&local_30);
    std::string::~string((string *)&local_30);
    std::string::~string((string *)aFStack_38);
    local_f = 1;
    local_10 = 1;
    local_28 = 0x500000004;
    FUN_031dcc6c((string *)&local_30,asStack_20,asStack_18);
    pWVar2 = (WidgetAnimationData *)
             std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::operator[](this_01,(string *)&local_30);
    WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
    std::string::~string((string *)&local_30);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
    local_40[0] = local_40[0] + 1;
    psVar6 = (string *)(ulong)local_40[0];
  } while ((int)local_40[0] < 7);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin(this_01);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_01);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar3 + 0x10),*(bool *)(lVar3 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::setupAnimationsStay() */

void __thiscall
AdaptorJoustTourneyResultsScreen::setupAnimationsStay(AdaptorJoustTourneyResultsScreen *this)

{
  bool bVar1;
  HotUIFile *this_00;
  char *pcVar2;
  HotUISeedPacketList *pHVar3;
  CurveSequence<Sexy::SexyVector2> *this_01;
  WidgetAnimationData *pWVar4;
  long lVar5;
  _func_void *extraout_x1;
  size_t in_x2;
  map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
  *this_02;
  float fVar6;
  string asStack_40 [8];
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  undefined1 local_10;
  undefined1 local_f;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  if ((*(int *)(this + 0x128) == 0) && (0 < *(int *)(this + 0x120))) {
    pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar2,"Play_Joust_FUE_Welcome_Music_Stinger");
    std::string::string((string *)&local_28,"LeagueResultsIcon");
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&local_28,false);
    std::string::~string((string *)&local_28);
    nop();
  }
  else {
    WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
    std::string::append(asStack_18,"intro",in_x2);
    std::string::append(asStack_20,"StayIcon",in_x2);
    local_28 = 0x100000004;
    FUN_031dcc6c((string *)&local_30,asStack_20,asStack_18);
    pWVar4 = (WidgetAnimationData *)
             std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::operator[]((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                           *)(this + 0x188),(string *)&local_30);
    WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
    std::string::~string((string *)&local_30);
    RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  }
  this_02 = (map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             *)(this + 0x188);
  pWVar4 = (WidgetAnimationData *)&local_28;
  std::string::string(asStack_40,"BackgroundRays");
  nop();
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"ScaleShineIn",(size_t)pWVar4);
  thunk_FUN_05475e00(asStack_20,asStack_40);
  local_f = 0;
  local_28 = 0x400000003;
  local_10 = 1;
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_20);
  fVar6 = (float)FUN_038716dc(*(undefined4 *)(pHVar3 + 0x240));
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,fVar6,fVar6);
  this_01 = (CurveSequence<Sexy::SexyVector2> *)
            CurveSequenceCollection<Sexy::SexyVector2>::Get
                      ((CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x158),asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(this_01,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,this_01,aFStack_38,
             (FastCurve *)&local_30,1);
  pWVar4 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_02,asStack_18);
  WidgetAnimationData::operator=(pWVar4,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::string::~string(asStack_40);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin(this_02);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_02);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar5 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar5 + 0x10),*(bool *)(lVar5 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)&DAT_06ab5340,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::setupAnimationsDemotion() */

void __thiscall
AdaptorJoustTourneyResultsScreen::setupAnimationsDemotion(AdaptorJoustTourneyResultsScreen *this)

{
  map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
  *this_00;
  CurveSequenceCollection<Sexy::SexyVector2> *this_01;
  bool bVar1;
  HotUIFile *this_02;
  WidgetAnimationData *pWVar2;
  long lVar3;
  CurveSequence<Sexy::SexyVector2> *pCVar4;
  _func_void *extraout_x1;
  size_t sVar5;
  string *psVar6;
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  string asStack_18 [9];
  undefined1 local_f;
  long local_8;
  
  sVar5 = 3;
  local_8 = ___stack_chk_guard;
  this_02 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  this_00 = (map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             *)(this + 0x188);
  this_01 = (CurveSequenceCollection<Sexy::SexyVector2> *)(this + 0x158);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"intro",sVar5);
  std::string::append(asStack_20,"DemotionIcon",sVar5);
  sVar5 = 4;
  local_28 = 0x100000004;
  FUN_031dcc6c((string *)&local_30,asStack_20,asStack_18);
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_00,(string *)&local_30);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  std::string::~string((string *)&local_30);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslateNewIconIn",sVar5);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5498);
  local_28 = 0x300000000;
  lVar3 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar3 + 0x48),(float)(*(int *)(lVar3 + 0x4c) + -0xd2));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar3 + 0x48),(float)*(int *)(lVar3 + 0x4c));
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar4,aFStack_38,(string *)&local_30,4)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadeNewIconIn",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5498);
  local_28 = 0x300000002;
  Sexy::FastCurve::SetOutRange(aFStack_38,0.0,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,255.0,255.0);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3e4ccccd,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"FadePreviousIconOut",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5340);
  local_28 = 0x200000002;
  local_f = 1;
  Sexy::FastCurve::SetOutRange(aFStack_38,255.0,255.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,0.0);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  psVar6 = (string *)&local_30;
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar4,aFStack_38,(string *)&local_30,1)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  WidgetAnimationData::WidgetAnimationData((WidgetAnimationData *)&local_28);
  std::string::append(asStack_18,"TranslatePreviousIconOut",(size_t)psVar6);
  thunk_FUN_05475e00(asStack_20,&DAT_06ab5340);
  local_28 = 0x200000000;
  local_f = 1;
  lVar3 = HotUIFile::GetWidgetByName(this_02,asStack_20);
  Sexy::FastCurve::SetOutRange
            (aFStack_38,(float)*(int *)(lVar3 + 0x48),(float)*(int *)(lVar3 + 0x4c));
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_30,(float)*(int *)(lVar3 + 0x48),
             (float)*(int *)(lVar3 + 0x4c) + 320.0);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::Get(this_01,asStack_18);
  CurveSequence<Sexy::SexyVector2>::StartSequence(pCVar4,0.0,(SexyVector2 *)aFStack_38);
  CurveSequence<Sexy::SexyVector2>::AddCurve
            ((CurveSequence<Sexy::SexyVector2> *)0x3f19999a,pCVar4,aFStack_38,(string *)&local_30,4)
  ;
  pWVar2 = (WidgetAnimationData *)
           std::
           map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
           ::operator[](this_00,asStack_18);
  WidgetAnimationData::operator=(pWVar2,(WidgetAnimationData *)&local_28);
  RiverEntityProperties::~RiverEntityProperties((RiverEntityProperties *)&local_28);
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_30,extraout_x1);
  local_30 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin(this_00);
  while( true ) {
    local_28 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)this_00);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_30,(rbtree_iterator *)&local_28);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
    HotUIAdaptor::setWidgetVisibility
              ((HotUIAdaptor *)this,(string *)(lVar3 + 0x10),*(bool *)(lVar3 + 0x21));
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::updateLeagueData() */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateLeagueData(AdaptorJoustTourneyResultsScreen *this)

{
  uint uVar1;
  int extraout_w1;
  int iVar2;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  string *extraout_x1;
  string *extraout_x1_00;
  int iVar3;
  int local_20 [2];
  wstring awStack_18 [8];
  wstring awStack_10 [8];
  long local_8;
  
  iVar3 = *(int *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x128) == 0) {
    if (iVar3 < 1) {
      if (iVar3 != 0) goto LAB_0387492c;
    }
    else {
      iVar3 = 1;
    }
  }
  else if (iVar3 != 0) {
    if (0 < iVar3) {
      iVar3 = 0;
      TodStringTranslate((wstring *)&DAT_06ab5330);
      HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5308,awStack_10);
      FUN_05476c50(awStack_10);
      HotUIAdaptor::replaceImageWidgetImage
                ((HotUIAdaptor *)this,(string *)&DAT_06ab5358,(string *)&DAT_06ab5328);
      setupAnimationsPromotion(this);
      iVar2 = extraout_w1_02;
      goto LAB_03874670;
    }
LAB_0387492c:
    iVar3 = 0;
    TodStringTranslate((wstring *)&DAT_06ab5310);
    HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5308,awStack_10);
    FUN_05476c50(awStack_10);
    HotUIAdaptor::replaceImageWidgetImage
              ((HotUIAdaptor *)this,(string *)&DAT_06ab5358,(string *)&DAT_06ab5348);
    setupAnimationsDemotion(this);
    iVar2 = extraout_w1_03;
    goto LAB_03874670;
  }
  TodStringTranslate((wstring *)&DAT_06ab53f0);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5308,awStack_10);
  FUN_05476c50(awStack_10);
  HotUIAdaptor::replaceImageWidgetImage
            ((HotUIAdaptor *)this,(string *)&DAT_06ab5358,(string *)&DAT_06ab54a0);
  setupAnimationsStay(this);
  iVar2 = extraout_w1;
LAB_03874670:
  JoustUtils::GetLeagueIcon((JoustUtils *)(ulong)*(uint *)(this + 0x128),iVar2);
  HotUIAdaptor::replaceImageWidgetImage
            ((HotUIAdaptor *)this,(string *)&DAT_06ab5498,(string *)awStack_10);
  std::string::~string((string *)awStack_10);
  JoustUtils::GetLeagueName((JoustUtils *)(ulong)*(uint *)(this + 0x128),extraout_w1_00);
  Sexy::UTF8StringToWString((Sexy *)local_20,extraout_x1);
  TodStringTranslate(awStack_18);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5360,awStack_10);
  FUN_05476c50((string *)awStack_10);
  FUN_05476c50(awStack_18);
  std::string::~string((string *)local_20);
  std::string::string((string *)awStack_10,"BackgroundRays");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"PromotionIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"DemotionIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  std::string::string((string *)awStack_10,"StayIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
  std::string::~string((string *)awStack_10);
  nop();
  local_20[0] = 1;
  do {
    std::to_string<ActivityTypeID>((ActivityTypeID *)local_20);
    std::operator+("BackgroundStar",(string *)awStack_18);
    HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)awStack_10,false);
    std::string::~string((string *)awStack_10);
    std::string::~string((string *)awStack_18);
    local_20[0] = local_20[0] + 1;
  } while (local_20[0] < 7);
  if (iVar3 == 0) {
    uVar1 = *(int *)(this + 0x128) - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    JoustUtils::GetLeagueIcon((JoustUtils *)(ulong)uVar1,extraout_w1_01);
    HotUIAdaptor::replaceImageWidgetImage
              ((HotUIAdaptor *)this,(string *)&DAT_06ab5340,(string *)awStack_10);
    std::string::~string((string *)awStack_10);
  }
  Sexy::StrFormat("#%d",awStack_18,(ulong)(*(int *)(this + 0x124) + 1));
  Sexy::UTF8StringToWString((Sexy *)awStack_18,extraout_x1_00);
  HotUIAdaptor::setLabelWidgetText((HotUIAdaptor *)this,(string *)&DAT_06ab5368,awStack_10);
  FUN_05476c50((string *)awStack_10);
  std::string::~string((string *)awStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::refresh() */

void __thiscall AdaptorJoustTourneyResultsScreen::refresh(AdaptorJoustTourneyResultsScreen *this)

{
  updateLeagueData(this);
  updateFTUE(this);
  updateRewardData(this);
  *(undefined4 *)(this + 0x1b8) = 0xffffffff;
  setState_TournamentResultsScreenState(this,0);
  return;
}


/* AdaptorJoustTourneyResultsScreen::SetParams(AdaptorJoustTourneyResultsScreenParams const&) */

void __thiscall
AdaptorJoustTourneyResultsScreen::SetParams
          (AdaptorJoustTourneyResultsScreen *this,AdaptorJoustTourneyResultsScreenParams *param_1)

{
  AdaptorJoustTourneyResultsScreenParams::operator=
            ((AdaptorJoustTourneyResultsScreenParams *)(this + 0x120),param_1);
  refresh(this);
  return;
}


/* AdaptorJoustTourneyResultsScreen::updateWidgetFromAnimationTranslation(WidgetAnimationData*,
   float) */

void AdaptorJoustTourneyResultsScreen::updateWidgetFromAnimationTranslation
               (WidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this;
  HotUISeedPacketList *pHVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  long in_x1;
  float fVar4;
  float in_s1;
  
  this = (HotUIFile *)FUN_038716bc(*(undefined8 *)(param_1 + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this,(string *)(in_x1 + 8));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(param_1 + 0x158));
  fVar4 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar3,param_2);
  *(int *)(pHVar2 + 0x48) = (int)fVar4;
  *(int *)(pHVar2 + 0x4c) = (int)in_s1;
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(param_1 + 0x158));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar3,param_2);
  *(byte *)(in_x1 + 0x1b) = bVar1 ^ 1;
  return;
}


/* AdaptorJoustTourneyResultsScreen::updateHotUIImageWidgetFromAnimationScale(WidgetAnimationData*,
   float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateHotUIImageWidgetFromAnimationScale
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar2;
  CurveSequence<Sexy::SexyVector2> *pCVar3;
  undefined4 uVar4;
  
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  uVar4 = CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar3,param_2);
  FUN_038716d0(uVar4,pHVar2 + 0x27c);
  pCVar3 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar3,param_2);
  param_1[0x1b] = (WidgetAnimationData)(bVar1 ^ 1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::updateHotUIImageWidgetFromAnimationAlpha(WidgetAnimationData*,
   float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateHotUIImageWidgetFromAnimationAlpha
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1,float param_2)

{
  long lVar1;
  byte bVar2;
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar3;
  CurveSequence<Sexy::SexyVector2> *pCVar4;
  float fVar5;
  Insets aIStack_28 [12];
  int local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  pHVar3 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  fVar5 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar4,param_2);
  HotUIImage::GetImageColor();
  local_1c = (int)fVar5;
  Sexy::Insets::Insets(aIStack_18,aIStack_28);
  HotUIImage::SetImageColor((HotUIImage *)pHVar3,aIStack_18);
  pCVar4 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  bVar2 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar4,param_2);
  lVar1 = ___stack_chk_guard;
  param_1[0x1b] = (WidgetAnimationData)(bVar2 ^ 1);
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::updateHotUIAnimWidgetFromAnimationScale(WidgetAnimationData*,
   float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateHotUIAnimWidgetFromAnimationScale
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1,float param_2)

{
  byte bVar1;
  HotUIFile *this_00;
  HotUISeedPacketList *this_01;
  CurveSequence<Sexy::SexyVector2> *pCVar2;
  float fVar3;
  
  this_00 = (HotUIFile *)FUN_038716bc(*(undefined8 *)(this + 0xf8));
  this_01 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,(string *)(param_1 + 8));
  pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  fVar3 = (float)CurveSequence<Sexy::SexyVector2>::GetValueAt(pCVar2,param_2);
  HotUIAnim::SetScaleOverride((HotUIAnim *)this_01,fVar3);
  pCVar2 = (CurveSequence<Sexy::SexyVector2> *)
           CurveSequenceCollection<Sexy::SexyVector2>::operator[]((string *)(this + 0x158));
  bVar1 = CurveSequence<Sexy::SexyVector2>::IsTimeInSequence(pCVar2,param_2);
  param_1[0x1b] = (WidgetAnimationData)(bVar1 ^ 1);
  return;
}


/* AdaptorJoustTourneyResultsScreen::updateWidgetFromAnimation(WidgetAnimationData*, float) */

WidgetAnimationData __thiscall
AdaptorJoustTourneyResultsScreen::updateWidgetFromAnimation
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1,float param_2)

{
  switch(*(undefined4 *)param_1) {
  case 0:
    updateWidgetFromAnimationTranslation((WidgetAnimationData *)this,param_2);
    return param_1[0x1b];
  case 1:
    updateHotUIImageWidgetFromAnimationScale(this,param_1,param_2);
    break;
  case 2:
    updateHotUIImageWidgetFromAnimationAlpha(this,param_1,param_2);
    return param_1[0x1b];
  case 3:
    updateHotUIAnimWidgetFromAnimationScale(this,param_1,param_2);
    return param_1[0x1b];
  }
  return param_1[0x1b];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::updateAnimsForState(TournamentResultsScreenState, float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::updateAnimsForState
          (float param_1,AdaptorJoustTourneyResultsScreen *this,int param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  uVar4 = 1;
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                      *)(this + 0x188));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x188));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar3 + 0xc) == param_3) {
      uVar2 = updateWidgetFromAnimation(this,(WidgetAnimationData *)(lVar3 + 8),param_1);
      uVar4 = uVar2 & uVar4;
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* AdaptorJoustTourneyResultsScreen::startWidgetAnimation(WidgetAnimationData*, float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::startWidgetAnimation
          (AdaptorJoustTourneyResultsScreen *this,WidgetAnimationData *param_1,float param_2)

{
  param_1[0x1b] = (WidgetAnimationData)0x0;
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,(string *)(param_1 + 8),true);
  if (*(int *)param_1 == 4) {
    startHotUIAnim(this,param_1);
    return;
  }
  updateWidgetFromAnimation(this,param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::startAnimsForState(TournamentResultsScreenState, float) */

void __thiscall
AdaptorJoustTourneyResultsScreen::startAnimsForState
          (float param_1,AdaptorJoustTourneyResultsScreen *this,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  _func_void *local_8;
  
  local_8 = ___stack_chk_guard;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,___stack_chk_guard);
  local_18 = std::
             map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
             ::begin((map<std::string,WidgetAnimationData,std::less<std::string>,std::allocator<std::pair<std::string_const,WidgetAnimationData>>>
                      *)(this + 0x188));
  while( true ) {
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x188));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (!bVar1) break;
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    if (*(int *)(lVar2 + 0xc) == param_3) {
      startWidgetAnimation(this,(WidgetAnimationData *)(lVar2 + 8),param_1);
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::HandleStateMachine_TournamentResultsScreenState(TournamentResultsScreenState,
   StateAction) */

void __thiscall
AdaptorJoustTourneyResultsScreen::HandleStateMachine_TournamentResultsScreenState
          (AdaptorJoustTourneyResultsScreen *this,uint param_2,int param_3)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<TournamentResultsScreenState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_TournamentResultsScreenState);
  Sexy::Delegate2<TournamentResultsScreenState,StateAction>::
  Delegate2<AdaptorJoustTourneyResultsScreen,void(AdaptorJoustTourneyResultsScreen::*)(TournamentResultsScreenState,StateAction)>
            (aDStack_38,aCStack_50);
  switch(param_2) {
  case 0:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,0);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      if (0.5 < fVar2 - *(float *)(this + 0x150)) {
        setState_TournamentResultsScreenState(this,1);
      }
      break;
    case 3:
      endAnimsForState(this,0);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x0);
    }
    break;
  case 1:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,1);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorJoustTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x150)),this,1);
      if (cVar1 != '\0') {
        setState_TournamentResultsScreenState(this,2);
      }
      break;
    case 3:
      endAnimsForState(this,1);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x1);
    }
    break;
  case 2:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,2);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorJoustTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x150)),this,2);
      if (cVar1 != '\0') {
        setState_TournamentResultsScreenState(this,3);
      }
      break;
    case 3:
      endAnimsForState(this,2);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x2);
    }
    break;
  case 3:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,3);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorJoustTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x150)),this,3);
      if (cVar1 != '\0') {
        setState_TournamentResultsScreenState(this,4);
      }
      break;
    case 3:
      endAnimsForState(this,3);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x3);
    }
    break;
  case 4:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,4);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorJoustTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x150)),this,4);
      if (cVar1 != '\0') {
        setState_TournamentResultsScreenState(this,5);
      }
      break;
    case 3:
      endAnimsForState(this,4);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,&DAT_00000004);
    }
    break;
  case 5:
    switch(param_3) {
    case 0:
      break;
    case 1:
      uVar3 = PVZ_RealT();
      *(undefined4 *)(this + 0x150) = uVar3;
      startAnimsForState((AdaptorJoustTourneyResultsScreen *)0x0,this,5);
      break;
    case 2:
      fVar2 = (float)PVZ_RealT();
      cVar1 = updateAnimsForState((AdaptorJoustTourneyResultsScreen *)
                                  (fVar2 - *(float *)(this + 0x150)),this,5);
      if (cVar1 != '\0') {
        setState_TournamentResultsScreenState(this,6);
      }
      break;
    case 3:
      endAnimsForState(this,5);
      break;
    default:
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)0x5);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::Update() */

void __thiscall AdaptorJoustTourneyResultsScreen::Update(AdaptorJoustTourneyResultsScreen *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::Update((HotUIAdaptor *)this);
  uVar1 = FUN_038716cc(*(undefined4 *)(this + 0x1b8));
  (**(code **)(*(long *)this + 0x350))(this,uVar1,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustTourneyResultsScreen::giveRewards() */

void __thiscall
AdaptorJoustTourneyResultsScreen::giveRewards(AdaptorJoustTourneyResultsScreen *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s;
  TGALogMgr *pTVar6;
  __normal_iterator *__n;
  undefined8 local_2e8;
  undefined8 local_2e0;
  string asStack_2d8 [48];
  TGALogJoustData aTStack_2a8 [72];
  undefined1 auStack_260 [80];
  TGALogJoustData aTStack_210 [152];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  __n = (__normal_iterator *)&local_2e0;
  std::string::string(asStack_2d8,"");
  FUN_05462980(auStack_178,asStack_2d8);
  std::string::~string(asStack_2d8);
  nop();
  local_2e8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x130));
  local_2e0 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x130));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_2e8,(__normal_iterator *)&local_2e0), bVar1)
  {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_2e8);
    if (*(int *)(lVar4 + 0x10) != 0) {
      __n = (__normal_iterator *)0x0;
      ProfileChangeItemAmount(*(int *)(lVar4 + 0x38),*(int *)(lVar4 + 0x28),false);
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)asStack_2d8);
      uVar5 = FUN_0546065c(auStack_168,*(undefined4 *)(lVar4 + 0x38));
      uVar5 = FUN_054603b8(uVar5,&DAT_05593348);
      uVar5 = FUN_0546065c(uVar5,*(undefined4 *)(lVar4 + 0x28));
      FUN_054603b8(uVar5,&DAT_05594620);
    }
    eastl::generic_iterator<EA::Text::Typesetter::Item*,void>::operator++
              ((generic_iterator<EA::Text::Typesetter::Item*,void> *)&local_2e8);
  }
  TGALogJoustData::TGALogJoustData(aTStack_2a8);
  iVar3 = JoustUtils::PlayerGetLeague();
  DString::DString((DString *)asStack_2d8,iVar3);
  __s = (char *)DString::c_str((DString *)asStack_2d8);
  std::string::append((string *)aTStack_2a8,__s,(size_t)__n);
  DString::~DString((DString *)asStack_2d8);
  FUN_05462824(asStack_2d8,auStack_178);
  FUN_05474278(auStack_260,asStack_2d8);
  std::string::~string(asStack_2d8);
  pTVar6 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogJoustData::TGALogJoustData(aTStack_210,aTStack_2a8);
  TGALogMgr::LogJoust(pTVar6,6,aTStack_210);
  TGALogJoustData::~TGALogJoustData(aTStack_210);
  TGALogJoustData::~TGALogJoustData(aTStack_2a8);
  FUN_054617bc(auStack_178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustTourneyResultsScreen::onContinueClick() */

void __thiscall
AdaptorJoustTourneyResultsScreen::onContinueClick(AdaptorJoustTourneyResultsScreen *this)

{
  giveRewards(this);
  onRegistrationDone(this);
  setInputEnabled(this,false);
  return;
}


/* AdaptorJoustTourneyResultsScreen::OnBackButtonPressed() */

undefined8 __thiscall
AdaptorJoustTourneyResultsScreen::OnBackButtonPressed(AdaptorJoustTourneyResultsScreen *this)

{
  onContinueClick(this);
  return 1;
}


/* AdaptorJoustTourneyResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustTourneyResultsScreen::ButtonDepress(AdaptorJoustTourneyResultsScreen *this,int param_1)

{
  if (param_1 == 0) {
    Close(this);
    return;
  }
  if (param_1 == 1) {
    onContinueClick(this);
    return;
  }
  return;
}


/* non-virtual thunk to AdaptorJoustTourneyResultsScreen::ButtonDepress(int) */

void __thiscall
AdaptorJoustTourneyResultsScreen::ButtonDepress(AdaptorJoustTourneyResultsScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* AdaptorJoustTourneyResultsScreen::onJoustNetworkResponse(int, int) */

void __thiscall
AdaptorJoustTourneyResultsScreen::onJoustNetworkResponse
          (AdaptorJoustTourneyResultsScreen *this,int param_1,int param_2)

{
  if (param_1 == 5) {
    switch(param_2) {
    case 2:
      giveRewards(this);
      onRegistrationDone(this);
      MessageRouter::Broadcast((_func_void *)gMessageRouter);
      return;
    case 3:
      JoustUtils::ShowJoustNetworkIssuePopup(2,5);
      return;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      JoustUtils::ShowJoustNetworkIssuePopup(1,5);
      return;
    }
  }
  return;
}

