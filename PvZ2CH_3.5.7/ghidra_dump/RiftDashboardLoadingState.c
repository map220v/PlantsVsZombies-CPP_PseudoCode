// Class: RiftDashboardLoadingState


/* RiftDashboardLoadingState::setState_RiftDashboardLoadingSubState(RiftDashboardLoadingSubState) */

void __thiscall
RiftDashboardLoadingState::setState_RiftDashboardLoadingSubState
          (RiftDashboardLoadingState *this,int param_2)

{
  if (*(int *)(this + 8) != -1) {
    (**(code **)(*(long *)this + 0x78))(this,*(int *)(this + 8),3);
  }
  *(int *)(this + 8) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x78))(this,param_2,1);
  }
  return;
}


/* RiftDashboardLoadingState::Enter() */

void __thiscall RiftDashboardLoadingState::Enter(RiftDashboardLoadingState *this)

{
  *(undefined4 *)(this + 8) = 0xffffffff;
  setState_RiftDashboardLoadingSubState(this,0);
  return;
}


/* RiftDashboardLoadingState::HandleSuperFSMAction_RiftDashboardLoadingSubState(RiftDashboardLoadingSubState,
   StateAction) */

void RiftDashboardLoadingState::HandleSuperFSMAction_RiftDashboardLoadingSubState(void)

{
  return;
}


/* RiftDashboardLoadingState::onRiftOverAcknowledged() */

void RiftDashboardLoadingState::onRiftOverAcknowledged(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* RiftDashboardLoadingState::Update() */

void __thiscall RiftDashboardLoadingState::Update(RiftDashboardLoadingState *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_036ad148(*(undefined4 *)(this + 8));
  (**(code **)(*(long *)this + 0x78))(this,uVar1,2);
  return;
}


/* RiftDashboardLoadingState::onZombossResultsScreenDismissed() */

void __thiscall
RiftDashboardLoadingState::onZombossResultsScreenDismissed(RiftDashboardLoadingState *this)

{
  AdaptorJoustLeagueInfoScreen::onClose(*(AdaptorJoustLeagueInfoScreen **)(this + 0x10));
  *(undefined8 *)(this + 0x10) = 0;
  setState_RiftDashboardLoadingSubState(this,4);
  return;
}


/* RiftDashboardLoadingState::~RiftDashboardLoadingState() */

void __thiscall
RiftDashboardLoadingState::~RiftDashboardLoadingState(RiftDashboardLoadingState *this)

{
  *(undefined ***)this = &PTR_GetClass_06680970;
  PVZGameState::~PVZGameState((PVZGameState *)this);
  return;
}


/* RiftDashboardLoadingState::~RiftDashboardLoadingState() */

void __thiscall
RiftDashboardLoadingState::~RiftDashboardLoadingState(RiftDashboardLoadingState *this)

{
  ~RiftDashboardLoadingState(this);
  AK::FreeHook(this);
  return;
}


/* RiftDashboardLoadingState::RiftDashboardLoadingState() */

void __thiscall
RiftDashboardLoadingState::RiftDashboardLoadingState(RiftDashboardLoadingState *this)

{
  PVZGameState::PVZGameState((PVZGameState *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06680970;
  return;
}


/* RiftDashboardLoadingState::StaticNew() */

RiftDashboardLoadingState * RiftDashboardLoadingState::StaticNew(void)

{
  RiftDashboardLoadingState *this;
  
  this = ::operator_new(0x18);
  RiftDashboardLoadingState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftDashboardLoadingState::StaticClassInit() */

void RiftDashboardLoadingState::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftDashboardLoadingState");
    (*pcVar2)(plVar1,asStack_10,FUN_036ad478,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftDashboardLoadingState::StaticGetClass() */

long * RiftDashboardLoadingState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftDashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftDashboardLoadingState::GetClass() const */

long * RiftDashboardLoadingState::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftDashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftDashboardLoadingState::onPinataRewardDialogEnded() */

void __thiscall
RiftDashboardLoadingState::onPinataRewardDialogEnded(RiftDashboardLoadingState *this)

{
  setState_RiftDashboardLoadingSubState(this,2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftDashboardLoadingState::finalizeAndExit() */

void RiftDashboardLoadingState::finalizeAndExit(void)

{
  char cVar1;
  WorldDataManager *this;
  long lVar2;
  string asStack_10 [8];
  RiftUtils *pRStack_8;
  
  pRStack_8 = ___stack_chk_guard;
  RiftUtils::GetCurrentLandingLevel(___stack_chk_guard);
  cVar1 = FUN_0547419c(asStack_10);
  if (cVar1 == '\0') {
    this = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    lVar2 = WorldDataManager::FindEventByDataName(this,asStack_10);
    if (lVar2 != 0) {
      GameStateMgr::ShowWorldMapWithDestination(gGameStateMgr,lVar2,5,5);
    }
  }
  std::string::~string(asStack_10);
  if (pRStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftDashboardLoadingState::finalizeAndFail() */

void __thiscall RiftDashboardLoadingState::finalizeAndFail(RiftDashboardLoadingState *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  char *pcVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_036ad268(0x1ea);
  iVar2 = FUN_036ad268(0x118);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  TodStringTranslate(L"[RIFT_OVER_HEADER]");
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  FUN_05478178(awStack_50,L"[RIFT_OVER_DESCRIPTION]",auStack_58);
  PVZ2UIDialog::SetFooterLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  FUN_05478178(auStack_58,L"[BUTTON_OK]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRiftOverAcknowledged);
  Sexy::Delegate0::Delegate0<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)()>
            (aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftDashboardLoadingState::HandleStateMachine_RiftDashboardLoadingSubState(RiftDashboardLoadingSubState,
   StateAction) */

void RiftDashboardLoadingState::HandleStateMachine_RiftDashboardLoadingSubState
               (ReceivedDataCallback *param_1,uint param_2,int param_3,undefined8 param_4,
               LineBreakCategory *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  AdaptorRiftZombossProgress *this_01;
  void *pvVar4;
  LineBreakCategory *pLVar5;
  LineBreakCategory *pLVar6;
  CBMemberTranslatorX aCStack_158 [24];
  Delegate2<RiftDashboardLoadingSubState,StateAction> aDStack_140 [48];
  Delegate0 aDStack_110 [48];
  AdaptorRiftZombossProgressParams aAStack_e0 [8];
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  Delegate2<Sexy::IPurchaseDriver*,bool> aDStack_88 [128];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar6 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,HandleSuperFSMAction_RiftDashboardLoadingSubState);
  Sexy::Delegate2<RiftDashboardLoadingSubState,StateAction>::
  Delegate2<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)(RiftDashboardLoadingSubState,StateAction)>
            (aDStack_140,aCStack_158);
  pLVar5 = (LineBreakCategory *)(ulong)(param_2 + 1);
  if (9 < param_2 + 1) {
    Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)(ulong)param_2)
    ;
    goto LAB_036ad7cc;
  }
  switch(pLVar5) {
  case (LineBreakCategory *)0x0:
    if (param_3 != 0) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0xffffffff);
    }
    break;
  case (LineBreakCategory *)0x1:
    if (param_3 == 0) break;
    if (param_3 != 2) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x0);
      break;
    }
    goto LAB_036ad828;
  case (LineBreakCategory *)0x2:
    if (param_3 == 0) break;
    if (param_3 != 1) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x1);
      break;
    }
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      ((wchar16 *)
                       ((long)(short)(&switchD_036ad80c::switchdataD_05751910)[(long)pLVar5] * 4 +
                       0x36ad810),
                       L"ﷵ㓿ڿ焀ᆁ吀ᦾ鐀⃛鐀ຠ됀Ϡꨘā劀곹韽￦៿ﲵ㓿ڿ焀ྡ吀ⅹ鐀ᰀ匀ᑀ㐀鲠送\x01劀Ϣ⨁\xf400鹿"
                       ,pLVar5,pLVar6,param_5);
    if (cVar1 != '\0') {
      pvVar4 = (void *)RiftUtils::GetCurrentEventProps();
      if (((pvVar4 != (void *)0x0) &&
          (lVar3 = EA::Thread::GetModuleHandleFromAddress(pvVar4), lVar3 != 0)) &&
         (*(int *)(lVar3 + 0x20) == 0)) {
        iVar2 = RiftUtils::GetZombossAttemptsMade();
        if (*(int *)(lVar3 + 8) <= iVar2) {
          RiftUtils::AddZombossWinLossRecord(false,0);
          nop();
          goto LAB_036ad8e0;
        }
      }
      nop();
    }
LAB_036ad8e0:
    setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,2);
    break;
  case (LineBreakCategory *)0x3:
    if (param_3 == 0) break;
    if (param_3 != 1) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x2);
      break;
    }
    cVar1 = RiftUtils::HasCompletedZombossAttempt();
    if (cVar1 != '\0') {
      RiftUtils::ClearZombossWinLossRecord();
      iVar2 = RiftUtils::GetZombossSignalResetValue();
      RiftUtils::ResetZombossSignalWithAdditionalValue(iVar2);
    }
    cVar1 = RiftUtils::IsZombossUnlocked();
    if ((cVar1 == '\0') || (lVar3 = RiftUtils::GetZombossUnlockedTimeRemaining(), 0 < lVar3)) {
      lVar3 = RiftUtils::GetCurrentEventProps();
      if ((lVar3 != 0) && (lVar3 = RiftUtils::GetCurrentRiftEventTimeRemaining(), 0 < lVar3))
      goto LAB_036ad928;
      cVar1 = RiftUtils::HasZombossUnawardedProgress();
      if (cVar1 == '\0') {
        setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,5);
        break;
      }
    }
    setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,3);
    break;
  case (LineBreakCategory *)0x4:
    if (param_3 != 0) {
      if (param_3 == 1) {
        this_01 = ::operator_new(0x230);
        AdaptorRiftZombossProgress::AdaptorRiftZombossProgress(this_01);
        *(AdaptorRiftZombossProgress **)(param_1 + 0x10) = this_01;
        AdaptorRiftZombossProgressParams::AdaptorRiftZombossProgressParams(aAStack_e0);
        local_d8 = 0;
        local_d7 = 0;
        local_d6 = 1;
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  (param_1,onZombossResultsScreenDismissed);
        Sexy::Delegate0::Delegate0<RiftDashboardLoadingState,void(RiftDashboardLoadingState::*)()>
                  (aDStack_110,aCStack_158);
        Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=(aDStack_88,(Delegate2 *)aDStack_110)
        ;
        AdaptorRiftZombossProgress::SetParams
                  (*(AdaptorRiftZombossProgress **)(param_1 + 0x10),aAStack_e0);
        HotUIAdaptor::LoadAndAddWidget(*(HotUIAdaptor **)(param_1 + 0x10));
        AdaptorRiftZombossProgressParams::~AdaptorRiftZombossProgressParams(aAStack_e0);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x3);
      }
    }
    break;
  case (LineBreakCategory *)0x5:
    if (param_3 != 0) {
      if (param_3 == 1) {
        RiftUtils::ClearZombossWinLossRecord();
        iVar2 = RiftUtils::GetZombossSignalResetValue();
        RiftUtils::ResetZombossSignalWithAdditionalValue(iVar2);
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,&DAT_00000004);
      }
    }
    break;
  case (LineBreakCategory *)0x6:
    if (param_3 == 0) break;
    if (param_3 != 1) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x5);
      break;
    }
    RiftUtils::DoEventRollover();
    lVar3 = RiftUtils::GetCurrentEventProps();
    if (lVar3 != 0) {
LAB_036ad928:
      setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,6);
      break;
    }
LAB_036ad9f8:
    finalizeAndFail((RiftDashboardLoadingState *)param_1);
    break;
  case (LineBreakCategory *)0x7:
    if (param_3 == 0) break;
    if (param_3 != 1) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,&DAT_00000006);
      break;
    }
    lVar3 = RiftUtils::GetCurrentSubEventProps();
    if ((lVar3 == 0) || (lVar3 = RiftUtils::GetCurrentSubEventTimeRemaining(), lVar3 < 1)) {
      setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,7);
      break;
    }
    goto LAB_036ad828;
  case (LineBreakCategory *)0x8:
    if (param_3 == 0) break;
    if (param_3 != 1) {
      Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x7);
      break;
    }
    RiftUtils::DoSubEventRollover();
    lVar3 = RiftUtils::GetCurrentSubEventProps();
    if (lVar3 == 0) goto LAB_036ad9f8;
LAB_036ad828:
    setState_RiftDashboardLoadingSubState((RiftDashboardLoadingState *)param_1,8);
    break;
  case (LineBreakCategory *)0x9:
    if (param_3 != 0) {
      if (param_3 == 1) {
        cVar1 = RiftUtils::HasCurrentTournamentEnded();
        if (cVar1 == '\0') {
          cVar1 = RiftUtils::HasCurrentSeasonEnded();
          if (cVar1 != '\0') {
            RiftUtils::ResetRift();
          }
          finalizeAndExit();
        }
        else {
          GameStateMgr::ShowRiftTournamentEndScreen(gGameStateMgr,0,0);
          RiftUtils::ResetRift();
          cVar1 = RiftUtils::PlayerCanPlay();
          if (cVar1 == '\0') {
            this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
            this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
            if (this_00 != (PlayerInfo *)0x0) {
              PlayerInfo::SetRiftStoreFirstEntered(this_00,false);
            }
          }
        }
      }
      else {
        Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_140,(char *)0x8);
      }
    }
  }
LAB_036ad7cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

