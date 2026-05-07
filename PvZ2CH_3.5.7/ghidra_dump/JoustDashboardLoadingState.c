// Class: JoustDashboardLoadingState


/* JoustDashboardLoadingState::Exit() */

void __thiscall JoustDashboardLoadingState::Exit(JoustDashboardLoadingState *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(AdaptorJoustWinStreakDialog **)(this + 8) != (AdaptorJoustWinStreakDialog *)0x0) {
    AdaptorJoustWinStreakDialog::Close(*(AdaptorJoustWinStreakDialog **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  return;
}


/* JoustDashboardLoadingState::~JoustDashboardLoadingState() */

void __thiscall
JoustDashboardLoadingState::~JoustDashboardLoadingState(JoustDashboardLoadingState *this)

{
  *(undefined ***)this = &PTR_GetClass_066add50;
  PVZGameState::~PVZGameState((PVZGameState *)this);
  return;
}


/* JoustDashboardLoadingState::~JoustDashboardLoadingState() */

void __thiscall
JoustDashboardLoadingState::~JoustDashboardLoadingState(JoustDashboardLoadingState *this)

{
  ~JoustDashboardLoadingState(this);
  AK::FreeHook(this);
  return;
}


/* JoustDashboardLoadingState::JoustDashboardLoadingState() */

void __thiscall
JoustDashboardLoadingState::JoustDashboardLoadingState(JoustDashboardLoadingState *this)

{
  PVZGameState::PVZGameState((PVZGameState *)this);
  this[0x10] = (JoustDashboardLoadingState)0x0;
  *(undefined ***)this = &PTR_GetClass_066add50;
  return;
}


/* JoustDashboardLoadingState::StaticNew() */

JoustDashboardLoadingState * JoustDashboardLoadingState::StaticNew(void)

{
  JoustDashboardLoadingState *this;
  
  this = ::operator_new(0x18);
  JoustDashboardLoadingState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustDashboardLoadingState::StaticClassInit() */

void JoustDashboardLoadingState::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustDashboardLoadingState");
    (*pcVar2)(plVar1,asStack_10,FUN_038788bc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustDashboardLoadingState::StaticGetClass() */

long * JoustDashboardLoadingState::StaticGetClass(void)

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
  uVar2 = PVZGameState::StaticGetClass();
  (*pcVar3)(plVar1,"JoustDashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustDashboardLoadingState::GetClass() const */

long * JoustDashboardLoadingState::GetClass(void)

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
  uVar2 = PVZGameState::StaticGetClass();
  (*pcVar3)(plVar1,"JoustDashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustDashboardLoadingState::checkCurrentDashboardInfo() */

void JoustDashboardLoadingState::checkCurrentDashboardInfo(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::CheckCurrentDashboardInfo(this);
  return;
}


/* JoustDashboardLoadingState::sendNextInitRequest() */

void JoustDashboardLoadingState::sendNextInitRequest(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::CheckCurrentDashboardInfo(this);
  return;
}


/* JoustDashboardLoadingState::Update() */

void __thiscall JoustDashboardLoadingState::Update(JoustDashboardLoadingState *this)

{
  if (this[0x10] != (JoustDashboardLoadingState)0x0) {
    sendNextInitRequest();
    this[0x10] = (JoustDashboardLoadingState)0x0;
  }
  return;
}


/* JoustDashboardLoadingState::sendIncompleteMatch() */

void __thiscall JoustDashboardLoadingState::sendIncompleteMatch(JoustDashboardLoadingState *this)

{
  JoustIncompleteMatchData *pJVar1;
  
  pJVar1 = (JoustIncompleteMatchData *)EA::Thread::GetModuleHandleFromAddress(this);
  JoustUtils::SendAPIPostIncompleteMatch(pJVar1);
  return;
}


/* JoustDashboardLoadingState::showConnectionDialog() */

void __thiscall JoustDashboardLoadingState::showConnectionDialog(JoustDashboardLoadingState *this)

{
  long *plVar1;
  AdaptorJoustNetworkConnection *this_00;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,1);
    return;
  }
  this_00 = ::operator_new(0x120);
  AdaptorJoustNetworkConnection::AdaptorJoustNetworkConnection(this_00);
  *(AdaptorJoustNetworkConnection **)(this + 8) = this_00;
  HotUIAdaptor::LoadAndAddWidget((HotUIAdaptor *)this_00);
  return;
}


/* JoustDashboardLoadingState::hideConnectionDialog() */

void __thiscall JoustDashboardLoadingState::hideConnectionDialog(JoustDashboardLoadingState *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,0);
  }
  return;
}


/* JoustDashboardLoadingState::sendDashboardRequest() */

void JoustDashboardLoadingState::sendDashboardRequest(void)

{
  JoustNetworkMgr *this;
  
  this = (JoustNetworkMgr *)Sexy::LazySingleton<JoustNetworkMgr>::GetInstancePtr();
  JoustNetworkMgr::Send_GetDashboard(this);
  return;
}


/* JoustDashboardLoadingState::abandonNetworkFlow() */

void JoustDashboardLoadingState::abandonNetworkFlow(void)

{
  GameStateMgr::ShowJoustOrAdventureLandingScreen(gGameStateMgr,0,5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustDashboardLoadingState::sendAvatarCreationRequest() */

void JoustDashboardLoadingState::sendAvatarCreationRequest(void)

{
  function<void(Sexy::Graphics*)> afStack_48 [32];
  function<void(Sexy::Graphics*)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::function<void(Sexy::Graphics*)>::function(afStack_48);
  std::function<void(Sexy::Graphics*)>::function(afStack_28);
  JoustUtils::SendAPIPostAvatar(afStack_48,afStack_28);
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


/* JoustDashboardLoadingState::onJoustNetworkIssueDecision(int, int) */

void __thiscall
JoustDashboardLoadingState::onJoustNetworkIssueDecision
          (JoustDashboardLoadingState *this,int param_1,int param_2)

{
  if (param_1 == 2) {
    if (param_2 == 0) {
      BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      sendDashboardRequest();
      return;
    }
  }
  else if (param_1 == 1) {
    if (param_2 == 0) {
      BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      sendAvatarCreationRequest();
      return;
    }
  }
  else {
    if (param_1 != 4) {
      return;
    }
    if (param_2 == 0) {
      BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      sendNextInitRequest();
      return;
    }
  }
  if (param_2 != 1) {
    return;
  }
  abandonNetworkFlow();
  return;
}


/* JoustDashboardLoadingState::Enter() */

void __thiscall JoustDashboardLoadingState::Enter(JoustDashboardLoadingState *this)

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
  
  *(undefined8 *)(this + 8) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkResponse);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<JoustDashboardLoadingState,void(JoustDashboardLoadingState::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkResponseReceived,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onJoustNetworkIssueDecision);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<JoustDashboardLoadingState,void(JoustDashboardLoadingState::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::JoustNetworkIssueDecision,&local_50);
  showConnectionDialog(this);
  this[0x10] = (JoustDashboardLoadingState)0x1;
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustDashboardLoadingState::onJoustNetworkResponse(int, int) */

void __thiscall
JoustDashboardLoadingState::onJoustNetworkResponse
          (JoustDashboardLoadingState *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar5;
  JoustAPIResponseLeagueChange *pJVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_98;
  JoustAPIResponseLeagueChange aJStack_90 [4];
  undefined4 local_8c;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_80 [24];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 2) {
    switch(param_2) {
    case 2:
      cVar3 = JoustUtils::PlayerNeedsFirstTimeTournamentRegistration();
      if (cVar3 == '\0') {
        cVar3 = JoustUtils::HasCurrentTournamentEnded();
        if (cVar3 == '\0') {
          hideConnectionDialog(this);
          BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
          GameStateMgr::ShowJoustDashboardScreenAfterDashboardFetch(gGameStateMgr,5,5);
        }
        else {
          BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
          GameStateMgr::ShowJoustTournamentEndScreen(gGameStateMgr,0,0);
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::LazySingleton<JoustStatus>::GetInstance();
          lVar5 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_end(this_00);
          pJVar6 = (JoustAPIResponseLeagueChange *)JoustUtils::GetTournamentEndedData();
          JoustAPIResponseLeagueChange::JoustAPIResponseLeagueChange(aJStack_90,pJVar6);
          std::
          map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
          ::map(amStack_68);
          local_98 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin(avStack_80);
          local_38[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(avStack_80);
          while (bVar4 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_98,(__normal_iterator *)local_38),
                puVar2 = gMessageRouter, bVar4) {
            piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
            piVar8 = (int *)std::
                            map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                            operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                        *)amStack_68,piVar7);
            *piVar8 = piVar7[1];
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
          }
          uVar1 = *(undefined4 *)(lVar5 + 0x30);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     local_38,(map *)amStack_68);
          MessageRouter::
          Post<int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>const&,int,int,std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>>
                    ((MessageRouter *)puVar2,Message::BattleSettlement,uVar1,local_8c,
                     (map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     local_38);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     local_38);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     amStack_68);
          JoustAPIResponseLeagueChange::~JoustAPIResponseLeagueChange(aJStack_90);
        }
        break;
      }
    case 6:
    case 7:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      GameStateMgr::ShowJoustTournamentEndScreen(gGameStateMgr,0,0);
      break;
    case 3:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      JoustUtils::ShowJoustNetworkIssuePopup(2,2);
      break;
    case 4:
    case 5:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      JoustUtils::ShowJoustNetworkIssuePopup(1,2);
      break;
    case 8:
      JoustUtils::CreateNewLocalPlayer();
      sendAvatarCreationRequest();
    }
  }
  else if ((param_1 & 0xfffffffbU) == 1) {
    switch(param_2) {
    case 2:
      sendDashboardRequest();
      break;
    case 3:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      JoustUtils::ShowJoustNetworkIssuePopup(2,param_1);
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      JoustUtils::ShowJoustNetworkIssuePopup(1,param_1);
    }
  }
  else if (param_1 == 4) {
    switch(param_2) {
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      nop();
      sendNextInitRequest();
      break;
    case 3:
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      JoustUtils::ShowJoustNetworkIssuePopup(2,4);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

