// Class: DangerRoomStatScreen


/* DangerRoomStatScreen::SetDangerRoomInfo(DangerRoomInfo const&) */

void __thiscall
DangerRoomStatScreen::SetDangerRoomInfo(DangerRoomStatScreen *this,DangerRoomInfo *param_1)

{
  DangerRoomInfo::operator=((DangerRoomInfo *)(this + 0x118),param_1);
  return;
}


/* DangerRoomStatScreen::ScrollTargetReached(Sexy::ScrollWidget*) */

void DangerRoomStatScreen::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DangerRoomStatScreen::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
DangerRoomStatScreen::ScrollTargetReached(DangerRoomStatScreen *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe0));
  return;
}


/* DangerRoomStatScreen::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void DangerRoomStatScreen::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to DangerRoomStatScreen::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
DangerRoomStatScreen::ScrollTargetInterrupted(DangerRoomStatScreen *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::MouseDrag(int, int) */

void __thiscall DangerRoomStatScreen::MouseDrag(DangerRoomStatScreen *this,int param_1,int param_2)

{
  char cVar1;
  Toggles *this_00;
  UIWidget *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string(asStack_10,"PurchasableDangerRoomCard");
  cVar1 = Toggles::IsEnabled(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"UICoinBank");
    this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((this_01 != (UIWidget *)0x0) && (cVar1 = UIWidget::IsVisible(this_01), cVar1 != '\0')) {
      (**(code **)(*(long *)this_01 + 0x88))(this_01,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::OnBackToMap() */

void __thiscall DangerRoomStatScreen::OnBackToMap(DangerRoomStatScreen *this)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  (**(code **)(**(long **)(this + 0x298) + 0x188))(*(long **)(this + 0x298),1);
  *(undefined4 *)(this + 0x114) = 2;
  Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
  return;
}


/* DangerRoomStatScreen::HighlightRewards() */

void __thiscall DangerRoomStatScreen::HighlightRewards(DangerRoomStatScreen *this)

{
  *(undefined4 *)(this + 0xf4) = 10;
  return;
}


/* DangerRoomStatScreen::HighlightPlantfoodCount() */

void __thiscall DangerRoomStatScreen::HighlightPlantfoodCount(DangerRoomStatScreen *this)

{
  *(undefined4 *)(this + 0xf4) = 0xe;
  PVZ2UIDialog::SetButtonsVisible(SUB81(*(undefined8 *)(this + 0x298),0));
  return;
}


/* DangerRoomStatScreen::HighlightMowers() */

void __thiscall DangerRoomStatScreen::HighlightMowers(DangerRoomStatScreen *this)

{
  *(undefined4 *)(this + 0xf4) = 0xd;
  PVZ2UIDialog::SetButtonsVisible(SUB81(*(undefined8 *)(this + 0x298),0));
  return;
}


/* DangerRoomStatScreen::StopHighlight() */

void __thiscall DangerRoomStatScreen::StopHighlight(DangerRoomStatScreen *this)

{
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* DangerRoomStatScreen::removeAllOwnedWidgets() */

void __thiscall DangerRoomStatScreen::removeAllOwnedWidgets(DangerRoomStatScreen *this)

{
  (**(code **)(*(long *)this + 0x80))(this,0,0);
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x278));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x280));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x288));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x290));
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x268));
  if (*(long *)(this + 0x298) != 0) {
    (**(code **)(*gLawnApp + 0x150))(gLawnApp);
    *(undefined8 *)(this + 0x298) = 0;
  }
  return;
}


/* DangerRoomStatScreen::getSeed() */

void __thiscall DangerRoomStatScreen::getSeed(DangerRoomStatScreen *this)

{
  ProfileUtils::CalculateDangerRoomRandomSeed((DangerRoomInfo *)(this + 0x118));
  return;
}


/* DangerRoomStatScreen::getRepickSeed() */

long DangerRoomStatScreen::getRepickSeed(void)

{
  int iVar1;
  ProfileMgr *this;
  GridItemDuskSeed *this_00;
  long lVar2;
  PlayerInfo *pPVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (GridItemDuskSeed *)ProfileMgr::GetCurrentProfile(this);
  lVar2 = GridItemDuskSeed::getState(this_00);
  pPVar3 = (PlayerInfo *)ProfileUtils::Profile();
  iVar1 = LocalProfileSaveData::GetDangerRoomRepickSeed(pPVar3);
  return lVar2 + iVar1;
}


/* DangerRoomStatScreen::onTutorialWrapupNarrativeCompleted() */

void __thiscall DangerRoomStatScreen::onTutorialWrapupNarrativeCompleted(DangerRoomStatScreen *this)

{
  *(undefined4 *)(this + 0xf4) = 7;
  *(undefined4 *)(this + 0xe8) = 0;
  return;
}


/* DangerRoomStatScreen::isMowerTutorial(int) */

bool __thiscall DangerRoomStatScreen::isMowerTutorial(DangerRoomStatScreen *this,int param_1)

{
  return param_1 == 1;
}


/* DangerRoomStatScreen::isPlantFoodTutorial(int) */

bool __thiscall DangerRoomStatScreen::isPlantFoodTutorial(DangerRoomStatScreen *this,int param_1)

{
  return param_1 == 2;
}


/* DangerRoomStatScreen::clearFade() */

void __thiscall DangerRoomStatScreen::clearFade(DangerRoomStatScreen *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar1;
  *(undefined4 *)(this + 0xfc) = uVar1;
  return;
}


/* DangerRoomStatScreen::setActiveCardsToState(CardState) */

void __thiscall
DangerRoomStatScreen::setActiveCardsToState(DangerRoomStatScreen *this,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x2a8);
  lVar3 = 0;
  lVar1 = FUN_03c9fa54(uVar4,*(undefined8 *)(this + 0x2b0));
  if (lVar1 != 0) {
    do {
      lVar2 = FUN_03c9fa60(uVar4,lVar3);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffb) != 0) {
        *(undefined4 *)(lVar2 + 0x18) = param_2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar1);
  }
  return;
}


/* DangerRoomStatScreen::readyCards() */

void __thiscall DangerRoomStatScreen::readyCards(DangerRoomStatScreen *this)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(this + 0xf4) = 0;
  uVar4 = 0;
  setActiveCardsToState(this,3);
  uVar5 = *(undefined8 *)(this + 0x2a8);
  uVar1 = FUN_03c9fa54(uVar5,*(undefined8 *)(this + 0x2b0));
  if (uVar1 != 0) {
    do {
      lVar2 = FUN_03c9fa60(uVar5,uVar4);
      if ((((*(uint *)(lVar2 + 0x18) & 0xfffffffb) != 0) && (0 < *(int *)(lVar2 + 0x1c))) &&
         (plVar3 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)*(int *)(lVar2 + 0x1c)),
         *(char *)(*plVar3 + 0x36) != '\0')) {
        (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),0);
        (**(code **)(**(long **)(this + 0x280) + 0x158))(*(long **)(this + 0x280),1);
        uVar5 = *(undefined8 *)(this + 0x2a8);
        uVar1 = FUN_03c9fa54(uVar5,*(undefined8 *)(this + 0x2b0));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (this[0x2d4] == (DangerRoomStatScreen)0x0) {
    (**(code **)(**(long **)(this + 0x290) + 0x188))(*(long **)(this + 0x290));
    (**(code **)(**(long **)(this + 0x290) + 0x158))(*(long **)(this + 0x290),1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::startDangerRoom() */

void __thiscall DangerRoomStatScreen::startDangerRoom(DangerRoomStatScreen *this)

{
  int iVar1;
  PlayerInfo *pPVar2;
  long lVar3;
  string asStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x114) = 1;
  local_8 = ___stack_chk_guard;
  pPVar2 = (PlayerInfo *)ProfileUtils::Profile();
  LocalProfileSaveData::SetHasPurchasedExtraDRCard(pPVar2,false);
  iVar1 = FUN_03c9fa10(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d8));
  if (iVar1 != 0) {
    Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
  }
  if (this[0x104] != (DangerRoomStatScreen)0x0) {
    std::string::string(asStack_10,"UICoinBank");
    lVar3 = UIWidget::GetWidgetBySheetName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (lVar3 != 0) {
      UIWidget::SetPositionOffset(*(undefined4 *)(this + 0x2c8),*(undefined4 *)(this + 0x2cc),lVar3)
      ;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::onCardSelectedOrUnselected(bool) */

undefined8 __thiscall
DangerRoomStatScreen::onCardSelectedOrUnselected(DangerRoomStatScreen *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN_03c9fa2c(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138));
  if (!param_1) {
    lVar4 = **(long **)(this + 0x288);
    *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + -1;
    (**(code **)(lVar4 + 0x188))(*(long **)(this + 0x288),1);
    return 1;
  }
  iVar2 = *(int *)(this + 0x2d8);
  if (iVar2 < 6) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = *(int *)(this + 0x2d0) + 1 + iVar3;
  *(int *)(this + 0x2d0) = *(int *)(this + 0x2d0) + 1;
  if (iVar1 <= iVar2) {
    if (iVar2 == iVar1) {
      (**(code **)(**(long **)(this + 0x288) + 0x188))(*(long **)(this + 0x288),0);
    }
    return 1;
  }
  (**(code **)(**(long **)(this + 0x288) + 0x188))(*(long **)(this + 0x288),0);
  *(int *)(this + 0x2d0) = iVar2 - iVar3;
  return 0;
}


/* DangerRoomStatScreen::ResetRewardList() */

void __thiscall DangerRoomStatScreen::ResetRewardList(DangerRoomStatScreen *this)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x220);
    uVar2 = FUN_03c9fa40(uVar5,*(undefined8 *)(this + 0x228));
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 1;
      if (uVar2 <= uVar4) {
        std::vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>>::clear
                  ((vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>> *)
                   (this + 0x220));
        return;
      }
      plVar1 = (long *)FUN_03c9fa4c(uVar5,uVar4);
      plVar1 = (long *)*plVar1;
      uVar4 = uVar3;
    } while (plVar1 == (long *)0x0);
    (**(code **)(*plVar1 + 8))(plVar1);
  } while( true );
}


/* DangerRoomStatScreen::startFadeIn() */

void __thiscall DangerRoomStatScreen::startFadeIn(DangerRoomStatScreen *this)

{
  undefined4 uVar1;
  
  clearFade(this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xf8) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::onTutorialNarrativeCompleted() */

void __thiscall DangerRoomStatScreen::onTutorialNarrativeCompleted(DangerRoomStatScreen *this)

{
  CrazyNPCManager *pCVar1;
  undefined4 uVar2;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StopHighlight(this);
  startFadeIn(this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xf4) = 0xb;
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3f19999a;
  pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  CrazyNPCManager::SetTutorialMarkerDelegate(pCVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::startFadeOut() */

void __thiscall DangerRoomStatScreen::startFadeOut(DangerRoomStatScreen *this)

{
  undefined4 uVar1;
  
  clearFade(this);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xfc) = uVar1;
  return;
}


/* DangerRoomStatScreen::onTutorialNarrativeTutorialMarker() */

void __thiscall DangerRoomStatScreen::onTutorialNarrativeTutorialMarker(DangerRoomStatScreen *this)

{
  int iVar1;
  CrazyNPCManager *this_00;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0xf0);
  *(int *)(this + 0xf0) = iVar1 + 1;
  if (iVar1 + 1 != 1) {
    return;
  }
  startFadeOut(this);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xf4) = 9;
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3f19999a;
  this_00 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  CrazyNPCManager::SetNarrativePaused(this_00,true);
  return;
}


/* DangerRoomStatScreen::onSuccessNarrativeTutorialMarker() */

void __thiscall DangerRoomStatScreen::onSuccessNarrativeTutorialMarker(DangerRoomStatScreen *this)

{
  int iVar1;
  char cVar2;
  CrazyNPCManager *pCVar3;
  undefined4 uVar4;
  
  uVar4 = PVZ_T();
  iVar1 = *(int *)(this + 0xf0);
  *(undefined4 *)(this + 0xe8) = uVar4;
  *(int *)(this + 0xf0) = iVar1 + 1;
  cVar2 = isMowerTutorial(this,iVar1 + 1);
  if (cVar2 != '\0') {
    startFadeOut(this);
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0xf4) = 0xc;
    *(undefined4 *)(this + 0xe8) = uVar4;
    *(undefined4 *)(this + 0xec) = 0x3f19999a;
    PVZ2UIDialog::SetButtonsVisible(SUB81(*(undefined8 *)(this + 0x298),0));
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    CrazyNPCManager::SetNarrativePaused(pCVar3,true);
    return;
  }
  cVar2 = isPlantFoodTutorial(this,*(int *)(this + 0xf0));
  if (cVar2 == '\0') {
    StopHighlight(this);
    startFadeIn(this);
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0xf4) = 0xf;
    *(undefined4 *)(this + 0xe8) = uVar4;
    *(undefined4 *)(this + 0xec) = 0x3f19999a;
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    CrazyNPCManager::SetNarrativePaused(pCVar3,true);
    return;
  }
  StopHighlight(this);
  HighlightPlantfoodCount(this);
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar4;
  *(undefined4 *)(this + 0xec) = 0x3fc00000;
  pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
  CrazyNPCManager::SetNarrativePaused(pCVar3,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::DrawScreenFade(Sexy::Graphics*) */

void __thiscall DangerRoomStatScreen::DrawScreenFade(DangerRoomStatScreen *this,Graphics *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_20;
  undefined4 local_1c;
  Insets aIStack_18 [16];
  long local_8;
  
  fVar4 = *(float *)(this + 0xf8);
  fVar5 = *(float *)(this + 0xfc);
  local_20 = 0;
  local_1c = 0x80;
  local_8 = ___stack_chk_guard;
  fVar2 = (float)PVZ_EOT();
  if (fVar2 <= fVar4) {
    if (fVar2 <= fVar5) goto LAB_03ca0ccc;
  }
  else {
    local_20 = 0x80;
    local_1c = 0;
    fVar5 = fVar4;
  }
  uVar3 = PVZ_T();
  iVar1 = CurveLerp<int>(fVar5,fVar5 + 0.6,uVar3,&local_20,&local_1c,1);
  Sexy::Graphics::PushState(param_1);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  Sexy::Insets::Insets(aIStack_18,0,0,0,iVar1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::Graphics::SetColor(param_1,(Color *)aIStack_18);
  Sexy::Graphics::PopState(param_1);
LAB_03ca0ccc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::onSuccessNarrativeCompleted() */

void __thiscall DangerRoomStatScreen::onSuccessNarrativeCompleted(DangerRoomStatScreen *this)

{
  ProfileMgr *this_00;
  PlayerInfo *pPVar1;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar1 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::UnlockGameFeature(pPVar1,0xb);
  (**(code **)(**(long **)(this + 0x298) + 0x188))(*(long **)(this + 0x298),0);
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}


/* DangerRoomStatScreen::finalizeReward() */

void __thiscall DangerRoomStatScreen::finalizeReward(DangerRoomStatScreen *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this[0x154] = (DangerRoomStatScreen)0x0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetDangerRoomInfo(this_01,(string *)(this + 0x118),(DangerRoomInfo *)(this + 0x118));
  return;
}


/* DangerRoomStatScreen::finalizeRewardAndStartDangerRoom() */

void __thiscall DangerRoomStatScreen::finalizeRewardAndStartDangerRoom(DangerRoomStatScreen *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  
  *(undefined4 *)(this + 0xf4) = 6;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar2,9);
  if (cVar1 == '\0') {
    PlayerInfo::SetGameFeatureUnlockState(pPVar2,9,1);
  }
  finalizeReward(this);
  startDangerRoom(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::onFirstNarrativeCompleted() */

void __thiscall DangerRoomStatScreen::onFirstNarrativeCompleted(DangerRoomStatScreen *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  CrazyNPCManager *pCVar3;
  string asStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::GameFeatureIsUnlocked(this_01,9);
  if (cVar1 == '\0') {
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTutorialNarrativeTutorialMarker);
    Sexy::Delegate0::Delegate0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>
              (aDStack_38,asStack_50);
    CrazyNPCManager::SetTutorialMarkerDelegate(pCVar3,aDStack_38);
    pCVar3 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"DANGER_ROOM_TUTORIAL");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onTutorialNarrativeCompleted);
    Sexy::Delegate0::Delegate0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>
              (aDStack_38,asStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar3,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
  }
  else {
    uVar2 = FUN_0547429c(this + 0x118);
    Sexy::StrFormat("nar_dgr_%s",asStack_50,uVar2);
    PlayerInfo::CompleteNarrationEvent(this_01,asStack_50);
    *(undefined4 *)(this + 0xf4) = 1;
    std::string::~string(asStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomStatScreen::Draw(DangerRoomStatScreen *this,Graphics *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  Image *pIVar12;
  SalesProgressBar *pSVar13;
  LotteryResultProgressBar *pLVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  CachedResourcePtr<Sexy::Image> *pCVar20;
  UIWidget *pUVar21;
  Toggles *this_00;
  PlantType *pPVar22;
  byte bVar23;
  uint uVar24;
  code *pcVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  PrimeTypeface *pPVar34;
  float fVar29;
  float fVar30;
  float fVar31;
  byte bVar32;
  undefined4 uVar33;
  undefined4 local_9c;
  GraphicsAutoState aGStack_98 [8];
  undefined8 local_90;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  SexyTransform2D aSStack_58 [8];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_98,param_1);
  Sexy::Insets::Insets((Insets *)&local_68,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  uVar11 = CachedResourcePtr<Sexy::Image>::operator->
                     ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad28e0);
  DrawImageTiled(0x3f800000,param_1,(Insets *)&local_68,uVar11);
  if (*(long *)(this + 0x298) == 0) {
    bVar2 = false;
    bVar1 = false;
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    fVar31 = 0.0;
    iVar6 = FUN_03c9fdc0(0xfffffffd);
    iVar7 = *(int *)(this + 0x50);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Insets::Insets((Insets *)&local_78,0,iVar6,iVar7,iVar4 / 3);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pLVar14 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Insets::Insets((Insets *)&local_68,iVar7 / 3,0,iVar6 / 3,iVar4 / 3);
    Sexy::Graphics::DrawImage(param_1,pIVar12,(TRect *)&local_78,(TRect *)&local_68);
    iVar7 = FUN_03c9fdc0(0x66);
    iVar6 = *(int *)(this + 0x54) - iVar7;
    iVar4 = FUN_03c9fdc0(0xffffff9c);
    iVar5 = FUN_03c9fdc0(200);
    Sexy::Insets::Insets((Insets *)&local_68,iVar4,iVar6,iVar5 + *(int *)(this + 0x50),iVar7);
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2658);
    DrawImageTiled(0x3f800000,param_1,(Insets *)&local_68,uVar11);
    iVar4 = FUN_03c9fdc0(0xffffff9c);
    iVar5 = FUN_03c9fdc0(200);
    iVar7 = *(int *)(this + 0x50);
    iVar8 = FUN_03c9fdc0(0x66);
    Sexy::Insets::Insets((Insets *)&local_68,iVar4,iVar6,iVar5 + iVar7,iVar8);
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2608);
    Draw9SliceImage(param_1,(Insets *)&local_68,uVar11);
    iVar4 = FUN_03c9fdc0(8);
    iVar7 = *(int *)(this + 0x50);
    iVar5 = FUN_03c9fdc0(4);
    iVar8 = FUN_03c9fdc0(0xe);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad26a8);
    iVar9 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Insets::Insets((Insets *)&local_68,iVar5,iVar8 + iVar6,iVar7 - iVar4,iVar9);
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2938);
    uVar15 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad26a8);
    uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2798);
    Draw3SliceImage(param_1,(Insets *)&local_68,uVar11,uVar15,uVar16,0);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_58);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_90,0.0,0.0);
    local_9c = Sexy::SexyMath::DegToRad(360.0);
    uVar17 = FUN_03c9fa54(*(undefined8 *)(this + 0x2a8),*(undefined8 *)(this + 0x2b0));
    do {
      uVar26 = 0;
      if (uVar17 != 0) {
        do {
          Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_58);
          uVar11 = *(undefined8 *)(this + 0x2a8);
          puVar18 = (undefined4 *)FUN_03c9fa60(uVar11,uVar26);
          iVar7 = puVar18[6];
          if (iVar7 == 4) {
            if (bVar1) goto LAB_03ca1608;
          }
          else {
            if (bVar1) goto LAB_03ca1728;
LAB_03ca1608:
            pCVar20 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad2a00;
            if ((puVar18[7] == -1) || (iVar7 == 0)) {
              uVar24 = iVar7 - 1;
              lVar28 = 0;
              if (uVar24 < 6) goto LAB_03ca1780;
LAB_03ca1688:
              puVar18[2] = *puVar18;
              puVar18[3] = puVar18[1];
              puVar18[5] = puVar18[4];
              goto LAB_03ca16a0;
            }
            fVar31 = *(float *)(this + 0xec) + *(float *)(this + 0xe8);
            plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)(int)puVar18[7]);
            lVar28 = *plVar19;
            Sexy::FastCurve::SetOutRange
                      ((FastCurve *)&local_68,
                       (float)*(int *)(lVar28 + 0x20) + (float)*(int *)(lVar28 + 0x28) * 0.5,
                       (float)*(int *)(lVar28 + 0x24) + (float)*(int *)(lVar28 + 0x2c) * 0.5);
            local_90 = CONCAT44(iStack_64,local_68);
            uVar24 = puVar18[6] - 1;
            *(undefined4 *)(lVar28 + 0x30) = 0x3f800000;
            if (5 < uVar24) goto LAB_03ca1688;
LAB_03ca1780:
            switch((long)(char)(&switchD_03ca1790::switchdataD_05752514)[uVar24] * 4 + 0x3ca1794) {
            case 0x3ca1794:
              puVar18[2] = (undefined4)local_90;
              puVar18[3] = local_90._4_4_;
              puVar18[5] = local_9c;
              break;
            case 0x3ca17b0:
              fVar30 = *(float *)(this + 0xec);
              fVar29 = *(float *)(this + 0xe8);
              puVar18[2] = (undefined4)local_90;
              fVar29 = fVar29 + fVar30 * 0.5;
              puVar18[3] = local_90._4_4_;
              puVar18[5] = local_9c;
              fVar30 = (float)PVZ_T();
              if ((fVar29 <= fVar30) || (bVar2)) {
                uVar10 = PVZ_T();
                bVar2 = true;
                local_78 = 0x3dcccccd;
                local_68 = 0x3f800000;
                fVar29 = CurveLerp<float>(fVar29,fVar31,uVar10,(Insets *)&local_78,
                                          (Insets *)&local_68,3);
              }
              else {
                uVar33 = *(undefined4 *)(this + 0xe8);
                uVar10 = PVZ_T();
                local_68 = 0x3dcccccd;
                local_78 = 0x3f800000;
                fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,(Insets *)&local_78,
                                          (Insets *)&local_68,2);
              }
              *(float *)(lVar28 + 0x30) = fVar29;
              Sexy::SexyTransform2D::Scale(aSStack_58,fVar29,1.0);
              Sexy::SexyTransform2D::RotateRad(aSStack_58,(float)puVar18[5]);
              FUN_03c9f9f4(puVar18[2],puVar18[3],auStack_50,auStack_44);
              goto LAB_03ca16d4;
            case 0x3ca1858:
              uVar33 = *(undefined4 *)(this + 0xe8);
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,puVar18,(FastCurve *)&local_90,3);
              uVar33 = *(undefined4 *)(this + 0xe8);
              puVar18[2] = fVar29;
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,puVar18 + 1,(long)&local_90 + 4,3);
              uVar33 = *(undefined4 *)(this + 0xe8);
              puVar18[3] = fVar29;
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,puVar18 + 4,&local_9c,3);
              puVar18[5] = fVar29;
              break;
            case 0x3ca18d4:
              uVar33 = *(undefined4 *)(this + 0xe8);
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,(FastCurve *)&local_90,puVar18,2);
              uVar33 = *(undefined4 *)(this + 0xe8);
              puVar18[2] = fVar29;
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,(long)&local_90 + 4,puVar18 + 1,2);
              uVar33 = *(undefined4 *)(this + 0xe8);
              puVar18[3] = fVar29;
              uVar10 = PVZ_T();
              fVar29 = CurveLerp<float>(uVar33,fVar31,uVar10,&local_9c,puVar18 + 4,2);
              puVar18[5] = fVar29;
            }
LAB_03ca16a0:
            Sexy::SexyTransform2D::Scale(aSStack_58,1.0,1.0);
            Sexy::SexyTransform2D::RotateRad(aSStack_58,(float)puVar18[5]);
            FUN_03c9f9f4(puVar18[2],puVar18[3],auStack_50,auStack_44);
            if (lVar28 == 0) {
LAB_03ca16dc:
              iVar7 = puVar18[6];
              if (iVar7 == 2) {
                if (!bVar2) goto LAB_03ca16fc;
              }
              else if (iVar7 == 5) {
                if (bVar2) goto LAB_03ca16fc;
              }
              else if (1 < iVar7 - 3U) {
LAB_03ca16fc:
                if (lVar28 != 0) {
                  *(undefined1 *)(lVar28 + 0x35) = 0;
                }
                goto LAB_03ca1708;
              }
              if (lVar28 != 0) {
                *(undefined1 *)(lVar28 + 0x35) = 1;
              }
              pCVar20 = (CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680;
            }
            else {
LAB_03ca16d4:
              if (*(char *)(lVar28 + 0x36) == '\0') goto LAB_03ca16dc;
            }
LAB_03ca1708:
            pIVar12 = (Image *)CachedResourcePtr<Sexy::Image>::operator->(pCVar20);
            Sexy::Graphics::DrawImageMatrix(param_1,pIVar12,(SexyMatrix3 *)aSStack_58,0.0,0.0);
            uVar11 = *(undefined8 *)(this + 0x2a8);
          }
LAB_03ca1728:
          uVar26 = uVar26 + 1;
          uVar17 = FUN_03c9fa54(uVar11,*(undefined8 *)(this + 0x2b0));
        } while (uVar26 < uVar17);
      }
      if (bVar1) goto LAB_03ca19a0;
      bVar1 = true;
    } while( true );
  }
  Sexy::Insets::Insets((Insets *)&local_68,0,0,0,0x80);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
  Sexy::Graphics::FillRect(param_1,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  Sexy::Color::Color((Color *)&local_68,1);
  Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
  iVar4 = FUN_03c9fdc0(0x50);
  iVar7 = *(int *)(*(long *)(this + 0x298) + 0x4c);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_46_HardShadow);
  iVar6 = *(int *)(this + 0x50);
  iVar5 = FUN_03c9fdc0(0x50);
  FUN_05477b24(&local_78,this + 0x2a0);
  Sexy::Insets::Insets((Insets *)&local_68,(Insets *)&PrimeText_Game::Color_DangerRoom_LargeLabel);
  Sexy::PrimeTypeface::DrawString_Paragraph
            ((PrimeTypeface *)0x0,(float)(iVar7 - iVar4),(float)iVar6,(float)iVar5,uVar11,param_1,
             &local_78,1,1,(Insets *)&local_68,0);
  FUN_05476c50(&local_78);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
  goto LAB_03ca12a0;
LAB_03ca19a0:
  iVar7 = *(int *)(this + 0x54);
  iVar4 = FUN_03c9fdc0(0xffffff4c);
  pSVar13 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
  uVar11 = *(undefined8 *)(this + 0x220);
  lVar28 = FUN_03c9fa40(uVar11,*(undefined8 *)(this + 0x228));
  if (lVar28 == 0) {
    iVar6 = (iVar7 + iVar4) - iVar6;
  }
  else {
    plVar19 = (long *)FUN_03c9fa4c(uVar11,0);
    iVar6 = *(int *)(*plVar19 + 0x24);
  }
  iVar7 = *(int *)(this + 0xf4);
  if (iVar7 == 0) {
    iVar4 = FUN_03c9fdc0(0xffffffec);
    iVar5 = FUN_03c9fdc0(0x3c);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_46_HardShadow);
    iVar7 = *(int *)(this + 0x50);
    iVar8 = FUN_03c9fdc0(0x3c);
    FUN_05477b24((Insets *)&local_78,this + 0x2a0);
    Sexy::Insets::Insets((Insets *)&local_68,(Insets *)&PrimeText_Game::Color_DangerRoom_LargeLabel)
    ;
    Sexy::PrimeTypeface::DrawString_Paragraph
              ((PrimeTypeface *)0x0,(float)((iVar4 + iVar6) - iVar5),(float)iVar7,(float)iVar8,
               uVar11,param_1,(Insets *)&local_78,1,1,(Insets *)&local_68,0);
    FUN_05476c50((Insets *)&local_78);
    iVar7 = *(int *)(this + 0xf4);
  }
  if ((iVar7 - 3U < 5 || iVar7 - 0x10U < 3) || (iVar7 == 0)) {
    uVar11 = *(undefined8 *)(this + 0x220);
    uVar15 = *(undefined8 *)(this + 0x228);
    bVar32 = 0;
    uVar17 = FUN_03c9fa40(uVar11,uVar15);
    do {
      uVar26 = 0;
      if (uVar17 != 0) {
        do {
          plVar19 = (long *)FUN_03c9fa4c(uVar11,uVar26);
          lVar28 = *plVar19;
          bVar23 = *(byte *)(lVar28 + 0x34);
          if (((bVar32 == 1) || (bVar23 == 0)) && (bVar32 <= bVar23)) {
            if (*(char *)(lVar28 + 0x35) == '\0') {
              if ((*(char *)(lVar28 + 0x36) == '\0') ||
                 (bVar23 < (*(int *)(this + 0xf4) == 0x10 || *(int *)(this + 0xf4) == 6)))
              goto LAB_03ca1e8c;
LAB_03ca1d3c:
              if (bVar23 != 0) {
                Sexy::Insets::Insets((Insets *)&local_68,0,0,0,0x80);
                Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
                Sexy::Graphics::SetColorizeImages(param_1,true);
                pIVar12 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                             ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                Sexy::Graphics::DrawImage
                          (param_1,pIVar12,*(int *)(*plVar19 + 0x20),*(int *)(*plVar19 + 0x24));
                Sexy::Graphics::SetColorizeImages(param_1,false);
                Sexy::Color::Color((Color *)&local_68,1);
                Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
                pLVar14 = (LotteryResultProgressBar *)
                          CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2a50);
                iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                Sexy::Point::Point((Point *)&local_68,iVar7 / 2,iVar6 / 2);
                Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
                FUN_03c9f9f4((float)local_68,(float)iStack_64,auStack_28,auStack_1c);
                Sexy::SexyTransform2D::Scale(aSStack_30,1.0,1.0);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                iVar7 = FUN_03c9fdc0(0);
                FUN_03c9f9f4((float)(iVar7 + *(int *)(lVar28 + 0x20)),
                             (float)(iVar7 + *(int *)(lVar28 + 0x24)),auStack_28,auStack_1c);
                Sexy::Graphics::DrawImageMatrix
                          (param_1,(Image *)pLVar14,(SexyMatrix3 *)aSStack_30,0.0,0.0);
                Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
                FUN_03c9f9f4((float)local_68,(float)iStack_64,auStack_28,auStack_1c);
                Sexy::SexyTransform2D::Scale(aSStack_30,-1.0,1.0);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                iVar7 = *(int *)(lVar28 + 0x28);
                iVar6 = *(int *)(lVar28 + 0x20);
                iVar4 = FUN_03c9fdc0(0);
                FUN_03c9f9f4((float)(iVar6 + iVar7 + iVar4),(float)(iVar4 + *(int *)(lVar28 + 0x24))
                             ,auStack_28,auStack_1c);
                Sexy::Graphics::DrawImageMatrix
                          (param_1,(Image *)pLVar14,(SexyMatrix3 *)aSStack_30,0.0,0.0);
                Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
                FUN_03c9f9f4((float)local_68,(float)iStack_64,auStack_28,auStack_1c);
                Sexy::SexyTransform2D::Scale(aSStack_30,1.0,-1.0);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                iVar7 = FUN_03c9fdc0(0);
                FUN_03c9f9f4((float)(iVar7 + *(int *)(lVar28 + 0x20)),
                             (float)(iVar7 + *(int *)(lVar28 + 0x24) + *(int *)(lVar28 + 0x2c)),
                             auStack_28,auStack_1c);
                Sexy::Graphics::DrawImageMatrix
                          (param_1,(Image *)pLVar14,(SexyMatrix3 *)aSStack_30,0.0,0.0);
                Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
                FUN_03c9f9f4((float)local_68,(float)iStack_64,auStack_28,auStack_1c);
                Sexy::SexyTransform2D::Scale(aSStack_30,-1.0,-1.0);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                iVar7 = *(int *)(lVar28 + 0x28);
                iVar6 = *(int *)(lVar28 + 0x20);
                iVar4 = FUN_03c9fdc0(0);
                FUN_03c9f9f4((float)(iVar6 + iVar7 + iVar4),
                             (float)(iVar4 + *(int *)(lVar28 + 0x24) + *(int *)(lVar28 + 0x2c)),
                             auStack_28,auStack_1c);
                Sexy::Graphics::DrawImageMatrix
                          (param_1,(Image *)pLVar14,(SexyMatrix3 *)aSStack_30,0.0,0.0);
                uVar11 = *(undefined8 *)(this + 0x220);
                plVar19 = (long *)FUN_03c9fa4c(uVar11,uVar26);
                lVar28 = *plVar19;
              }
            }
            else {
              iVar7 = *(int *)(this + 0xf4);
              bVar2 = iVar7 == 6;
              if (bVar23 < (bVar2 || iVar7 == 0x10)) goto LAB_03ca1e8c;
              if (*(char *)(lVar28 + 0x36) != '\0') goto LAB_03ca1d3c;
              iVar6 = *(int *)(lVar28 + 8);
              if (iVar6 != 1) {
                if (iVar6 == 5) {
                  pLVar14 = (LotteryResultProgressBar *)
                            CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad26f8);
                }
                else if ((iVar6 == 8) || (iVar6 != 2)) {
                  pLVar14 = (LotteryResultProgressBar *)
                            CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad29b0);
                }
                else {
                  pLVar14 = (LotteryResultProgressBar *)
                            CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad27d8);
                }
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                iVar7 = *(int *)(lVar28 + 0x24) + *(int *)(lVar28 + 0x2c) / 2;
                iVar6 = *(int *)(lVar28 + 0x20) + *(int *)(lVar28 + 0x28) / 2;
                Sexy::Graphics::Translate(param_1,iVar6,iVar7);
                iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                fVar31 = *(float *)(*plVar19 + 0x30);
                iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                iVar8 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                fVar29 = *(float *)(*plVar19 + 0x30);
                iVar9 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar14);
                Sexy::Graphics::DrawImage
                          (param_1,(Image *)pLVar14,(int)((float)-(iVar4 / 2) * fVar31),-(iVar5 / 2)
                           ,(int)((float)iVar8 * fVar29),iVar9);
                Sexy::Graphics::Translate(param_1,-iVar6,-iVar7);
LAB_03ca2030:
                uVar11 = *(undefined8 *)(this + 0x220);
                plVar19 = (long *)FUN_03c9fa4c(uVar11,uVar26);
                lVar28 = *plVar19;
                bVar23 = *(byte *)(lVar28 + 0x34);
                goto LAB_03ca1d3c;
              }
              if (*(long *)(lVar28 + 0x18) != 0) {
                iVar7 = *(int *)(lVar28 + 0x28);
                iVar6 = *(int *)(lVar28 + 0x20);
                pPVar22 = (PlantType *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar28 + 0x10));
                lVar28 = PlantType::GetProps(pPVar22);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar27 = *plVar19;
                fVar31 = (float)FUN_03c9fdb0(*(float *)(lVar27 + 0x30) * *(float *)(lVar28 + 0x9c));
                iVar4 = *(int *)(lVar27 + 0x2c);
                iVar5 = *(int *)(lVar27 + 0x24);
                iVar6 = (int)((float)(iVar6 + iVar7 / 2) - fVar31);
                iVar7 = FUN_03c9fd9c(0x14);
                pPVar22 = (PlantType *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar27 + 0x10));
                lVar28 = PlantType::GetProps(pPVar22);
                fVar31 = (float)FUN_03c9fdb0(*(undefined4 *)(lVar28 + 0xa0));
                iVar7 = (int)((float)(iVar5 + iVar4 / 2 + iVar7) - fVar31);
                Sexy::Graphics::Translate(param_1,iVar6,iVar7);
                Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(*plVar19 + 0x30),1.0);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                PopAnimRig::SetRenderTransform(*(PopAnimRig **)(*plVar19 + 0x18),aSStack_30);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                PopAnimRig::Draw(*(PopAnimRig **)(*plVar19 + 0x18),param_1);
                Sexy::Graphics::Translate(param_1,-iVar6,-iVar7);
                uVar11 = *(undefined8 *)(this + 0x220);
                iVar7 = *(int *)(this + 0xf4);
                bVar2 = iVar7 == 6;
                plVar19 = (long *)FUN_03c9fa4c(uVar11,uVar26);
                lVar28 = *plVar19;
              }
              if (((iVar7 == 0) || (bVar2)) || (*(char *)(lVar28 + 0x34) != '\0')) {
                plVar19 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                            ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar28 + 0x10));
                uVar17 = (**(code **)(*plVar19 + 0x70))(plVar19,0xfffffffe);
                Sexy::StrFormat(L"%d",auStack_88,uVar17 & 0xffffffff);
                uVar11 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                fVar31 = (float)FUN_03c9fdd4(0x41700000);
                iVar7 = *(int *)(lVar28 + 0x20);
                fVar29 = (float)FUN_03c9fdd4(0x41000000);
                iVar6 = *(int *)(lVar28 + 0x24);
                iVar4 = FUN_03c9fdc0(200);
                iVar5 = FUN_03c9fdc0(0x3c);
                FUN_05477b24((Insets *)&local_78,auStack_88);
                Sexy::Color::Color((Color *)&local_68,1);
                Sexy::PrimeTypeface::DrawString_Paragraph
                          ((PrimeTypeface *)(fVar31 + (float)iVar7),fVar29 + (float)iVar6,
                           (float)iVar4,(float)iVar5,uVar11,param_1,(Insets *)&local_78,0,0,
                           (Insets *)&local_68,0);
                FUN_05476c50((Insets *)&local_78);
                Sexy::PrimeTextExtraParameters::PrimeTextExtraParameters
                          ((PrimeTextExtraParameters *)&local_80);
                local_80 = 0xbf800000;
                local_7c = 0xbf800000;
                uVar11 = PrimeText_PotentialTypeface::Typeface
                                   (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
                plVar19 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),uVar26);
                lVar28 = *plVar19;
                fVar31 = (float)FUN_03c9fdd4(0xc3580000);
                iVar7 = *(int *)(lVar28 + 0x20);
                iVar6 = *(int *)(lVar28 + 0x28);
                fVar29 = (float)FUN_03c9fdd4(0xc2880000);
                iVar4 = *(int *)(lVar28 + 0x24);
                iVar5 = *(int *)(lVar28 + 0x2c);
                iVar8 = FUN_03c9fdc0(200);
                iVar9 = FUN_03c9fdc0(0x3c);
                FUN_05477b24((Insets *)&local_78,auStack_88);
                Sexy::Color::Color((Color *)&local_68,1);
                Sexy::PrimeTypeface::DrawString_Paragraph
                          ((PrimeTypeface *)(fVar31 + (float)(iVar7 + iVar6)),
                           fVar29 + (float)(iVar4 + iVar5),(float)iVar8,(float)iVar9,uVar11,param_1,
                           (Insets *)&local_78,0,0,(Insets *)&local_68,
                           (PrimeTextExtraParameters *)&local_80);
                FUN_05476c50((Insets *)&local_78);
                FUN_05476c50(auStack_88);
                goto LAB_03ca2030;
              }
            }
            if ((*(char *)(lVar28 + 0x36) != '\0') && (*(int *)(this + 0xf4) == 0)) {
              plVar19 = *(long **)(this + 0x280);
              pcVar25 = *(code **)(*plVar19 + 0x198);
              iVar5 = FUN_03c9fdc0(0x6e);
              iVar7 = *(int *)(lVar28 + 0x28);
              iVar6 = *(int *)(lVar28 + 0x20);
              iVar8 = FUN_03c9fd9c(0x8c);
              iVar4 = *(int *)(lVar28 + 0x24);
              pSVar13 = (SalesProgressBar *)
                        CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
              uVar10 = SalesProgressBar::GetCurrentLevel(pSVar13);
              (*pcVar25)(plVar19,iVar6 + (iVar7 - iVar5) / 2,iVar8 + iVar4,iVar5,uVar10);
              (**(code **)(**(long **)(this + 0x280) + 0x48))
                        ((Insets *)&local_78,*(long **)(this + 0x280));
              uVar11 = PrimeText_PotentialTypeface::Typeface
                                 (PrimeText_Game::Typeface_FZCuYuan_26_Outline);
              fVar30 = (float)local_74;
              fVar29 = (float)local_6c;
              pPVar34._0_4_ = (PrimeTypeface *)(float)local_78;
              fVar31 = (float)local_70;
              TodStringTranslate(L"[DANGER_ROOM_REWARD_FOURTH_CARD]");
              Sexy::Color::Color((Color *)&local_68,1);
              Sexy::PrimeTypeface::DrawString_Paragraph
                        (pPVar34._0_4_,fVar30 - fVar29 * 0.75,fVar31,fVar29,uVar11,param_1,&local_80
                         ,1,1,(Insets *)&local_68,0);
              FUN_05476c50(&local_80);
              uVar11 = *(undefined8 *)(this + 0x220);
              uVar15 = *(undefined8 *)(this + 0x228);
              goto LAB_03ca1e8c;
            }
            uVar15 = *(undefined8 *)(this + 0x228);
            uVar17 = FUN_03c9fa40(uVar11,uVar15);
          }
          else {
LAB_03ca1e8c:
            uVar17 = FUN_03c9fa40(uVar11,uVar15);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 < uVar17);
      }
      if (bVar32 != 0) break;
      bVar32 = 1;
    } while( true );
  }
  std::string::string((string *)&local_68,"UIPauseButton");
  pUVar21 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  if ((pUVar21 != (UIWidget *)0x0) && (cVar3 = UIWidget::IsVisible(pUVar21), cVar3 != '\0')) {
    cVar3 = LawnApp::IsPauseMenuOpen(gLawnApp);
    if (cVar3 != '\0') {
      Sexy::Insets::Insets((Insets *)&local_68,0,0,0,0x80);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
      Sexy::Color::Color((Color *)&local_68,1);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
    }
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_68,param_1);
    (**(code **)(*(long *)pUVar21 + 0x78))(pUVar21,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_68);
  }
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string((string *)&local_68,"PurchasableDangerRoomCard");
  cVar3 = Toggles::IsEnabled(this_00,(string *)&local_68);
  std::string::~string((string *)&local_68);
  nop();
  if (cVar3 != '\0') {
    std::string::string((string *)&local_68,"UICoinBank");
    pUVar21 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)&local_68);
    std::string::~string((string *)&local_68);
    nop();
    if ((pUVar21 != (UIWidget *)0x0) && (cVar3 = UIWidget::IsVisible(pUVar21), cVar3 != '\0')) {
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)&local_68,param_1);
      (**(code **)(*(long *)pUVar21 + 0x78))(pUVar21,param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)&local_68);
    }
    cVar3 = LawnApp::IsCoinStoreShowing(gLawnApp);
    if (cVar3 != '\0') {
      Sexy::Insets::Insets((Insets *)&local_68,0,0,0,0x80);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
      Sexy::Graphics::FillRect(param_1,0,0,*(int *)(gLawnApp + 0xd4),*(int *)(gLawnApp + 0xd8));
      Sexy::Color::Color((Color *)&local_68,1);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_68);
    }
  }
  DrawScreenFade(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_98);
LAB_03ca12a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::DangerRoomStatScreen() */

void __thiscall DangerRoomStatScreen::DangerRoomStatScreen(DangerRoomStatScreen *this)

{
  LawnApp *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  string asStack_40 [8];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe0));
  *(undefined ***)this = &PTR_GetClass_0675bcd0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0675c010;
  *(undefined ***)(this + 0xe0) = &PTR__DangerRoomStatScreen_0675c058;
  DangerRoomInfo::DangerRoomInfo((DangerRoomInfo *)(this + 0x118));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1c0),(DummyInit *)0x0);
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x1f0),(DummyInit *)0x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x220));
  FUN_05476574(this + 0x238);
  FUN_05476574(this + 0x2a0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a8));
  uVar1 = PlantNameMapper::GetInstance();
  *(undefined8 *)(this + 0x2c0) = uVar1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x2c8));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10c) = 4;
  *(undefined4 *)(this + 0xf4) = 0;
  this[0x101] = (DangerRoomStatScreen)0x0;
  this[0x100] = (DangerRoomStatScreen)0x0;
  this[0x102] = (DangerRoomStatScreen)0x0;
  this[0x103] = (DangerRoomStatScreen)0x0;
  this[0x104] = (DangerRoomStatScreen)0x0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xf8) = uVar2;
  *(undefined4 *)(this + 0xfc) = uVar2;
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x1c0),(Delegate2 *)aDStack_38);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  this[0x2d4] = (DangerRoomStatScreen)0x0;
  *(undefined4 *)(this + 0x2d8) = 0;
  uVar1 = DangerRoomModule::GetDangerRoomPropertySheet();
  *(undefined8 *)(this + 0x248) = uVar1;
  Sexy::Widget::Resize((Widget *)this,0,0,*(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728));
  this_00 = gLawnApp;
  std::string::string(asStack_40,"Grass_Transition");
  LawnApp::LoadGroup(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::~DangerRoomStatScreen() */

void __thiscall DangerRoomStatScreen::~DangerRoomStatScreen(DangerRoomStatScreen *this)

{
  LawnApp *this_00;
  string asStack_10 [8];
  long local_8;
  
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0675c010;
  *(undefined ***)(this + 0xe0) = &PTR__DangerRoomStatScreen_0675c058;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0675bcd0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  ResetRewardList(this);
  this_00 = gLawnApp;
  std::string::string(asStack_10,"Grass_Transition");
  LawnApp::DeleteGroup(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::vector<FanCardData,std::allocator<FanCardData>>::~vector
            ((vector<FanCardData,std::allocator<FanCardData>> *)(this + 0x2a8));
  FUN_05476c50(this + 0x2a0);
  FUN_05476c50(this + 0x238);
  std::vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>>::~vector
            ((vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>> *)(this + 0x220));
  DangerRoomInfo::~DangerRoomInfo((DangerRoomInfo *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DangerRoomStatScreen::~DangerRoomStatScreen() */

void __thiscall DangerRoomStatScreen::~DangerRoomStatScreen(DangerRoomStatScreen *this)

{
  ~DangerRoomStatScreen(this + -0xe0);
  return;
}


/* DangerRoomStatScreen::~DangerRoomStatScreen() */

void __thiscall DangerRoomStatScreen::~DangerRoomStatScreen(DangerRoomStatScreen *this)

{
  ~DangerRoomStatScreen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DangerRoomStatScreen::~DangerRoomStatScreen() */

void __thiscall DangerRoomStatScreen::~DangerRoomStatScreen(DangerRoomStatScreen *this)

{
  ~DangerRoomStatScreen(this + -0xe0);
  return;
}


/* DangerRoomStatScreen::ButtonPress(int) */

void __thiscall DangerRoomStatScreen::ButtonPress(DangerRoomStatScreen *this,int param_1)

{
  char *pcVar1;
  
  if (*(int *)(this + 0x114) == 0) {
    switch(param_1) {
    case 0:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_StartGame_Button_Press");
      return;
    case 1:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_Continue_Button_Press");
      return;
    case 2:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_SaveQuit_Button_Press");
      return;
    case 4:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_CashOut_Button_Press");
      return;
    case 5:
      pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar1,"Play_UI_MiniGame_Card_Accept_Press");
      return;
    }
  }
  return;
}


/* non-virtual thunk to DangerRoomStatScreen::ButtonPress(int) */

void __thiscall DangerRoomStatScreen::ButtonPress(DangerRoomStatScreen *this,int param_1)

{
  ButtonPress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::onPauseButtonPressed() */

void __thiscall DangerRoomStatScreen::onPauseButtonPressed(DangerRoomStatScreen *this)

{
  LawnApp *pLVar1;
  char cVar2;
  char cVar3;
  UIWidget *this_00;
  char *pcVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPauseButton");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    cVar2 = UIWidget::IsVisible(this_00);
    if ((cVar2 != '\0') && (*(int *)(this + 0xf4) == 0)) {
      Board::ClearCursors(*(Board **)(gLawnApp + 0x9f0));
      pLVar1 = gLawnApp;
      cVar3 = LawnApp::IsPauseMenuOpen(gLawnApp);
      if (cVar3 == '\0') {
        pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar4,"Play_Pause");
        (**(code **)(**(long **)(gLawnApp + 0x9f0) + 800))(*(long **)(gLawnApp + 0x9f0),1);
        cVar3 = cVar2;
      }
      else {
        (**(code **)(**(long **)(pLVar1 + 0x9f0) + 800))(*(long **)(pLVar1 + 0x9f0),0);
      }
      goto LAB_03ca2efc;
    }
  }
  cVar3 = '\0';
LAB_03ca2efc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::MouseUp(int, int, int) */

void DangerRoomStatScreen::MouseUp(int param_1,int param_2,int param_3)

{
  char cVar1;
  long *plVar2;
  Toggles *this;
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIPauseButton");
  plVar2 = (long *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if ((plVar2 == (long *)0x0) ||
     (cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3), cVar1 == '\0')) {
    this = (Toggles *)Toggles::GetInstance();
    std::string::string(asStack_10,"PurchasableDangerRoomCard");
    cVar1 = Toggles::IsEnabled(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      std::string::string(asStack_10,"UICoinBank");
      this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (((this_00 != (UIWidget *)0x0) && (cVar1 = UIWidget::IsVisible(this_00), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0xa8))(this_00,param_2,param_3), cVar1 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x98))(this_00,param_2,param_3);
      }
    }
  }
  else {
    onPauseButtonPressed((DangerRoomStatScreen *)(ulong)(uint)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::OnBackButtonPressed() */

undefined8 __thiscall DangerRoomStatScreen::OnBackButtonPressed(DangerRoomStatScreen *this)

{
  if ((*(long *)(this + 0x298) != 0) && (*(char *)(*(long *)(this + 0x298) + 0x6e) == '\0')) {
    (**(code **)(*(long *)this + 0x318))(this,2);
    return 1;
  }
  onPauseButtonPressed(this);
  return 1;
}


/* DangerRoomStatScreen::flipCards() */

void __thiscall DangerRoomStatScreen::flipCards(DangerRoomStatScreen *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(this + 0xf4) = 3;
  lVar5 = 0;
  uVar7 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar7;
  *(undefined4 *)(this + 0xec) = 0x3eb33333;
  setActiveCardsToState(this,2);
  uVar6 = *(undefined8 *)(this + 0x2a8);
  lVar1 = FUN_03c9fa54(uVar6,*(undefined8 *)(this + 0x2b0));
  if (lVar1 != 0) {
    do {
      lVar2 = FUN_03c9fa60(uVar6,lVar5);
      if ((((*(uint *)(lVar2 + 0x18) & 0xfffffffb) != 0) && (0 < *(int *)(lVar2 + 0x1c))) &&
         (plVar3 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)*(int *)(lVar2 + 0x1c)),
         *(char *)(*plVar3 + 0x36) != '\0')) {
        *(undefined4 *)(lVar2 + 0x18) = 3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar1);
  }
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Danger_CardFlip");
  return;
}


/* DangerRoomStatScreen::unflipCards() */

void __thiscall DangerRoomStatScreen::unflipCards(DangerRoomStatScreen *this)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0xf4) = 4;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3eb33333;
  setActiveCardsToState(this,5);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_CardFlip_Back");
  (**(code **)(**(long **)(this + 0x288) + 0x188))(*(long **)(this + 0x288),1);
  (**(code **)(**(long **)(this + 0x288) + 0x158))(*(long **)(this + 0x288),0);
  return;
}


/* DangerRoomStatScreen::unflipCardsForReset() */

void __thiscall DangerRoomStatScreen::unflipCardsForReset(DangerRoomStatScreen *this)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0xf4) = 0x11;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3eb33333;
  setActiveCardsToState(this,5);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_CardFlip_Back");
  (**(code **)(**(long **)(this + 0x290) + 0x188))(*(long **)(this + 0x290),1);
  (**(code **)(**(long **)(this + 0x290) + 0x158))(*(long **)(this + 0x290),0);
  return;
}


/* DangerRoomStatScreen::ResetCards_Debug() */

void __thiscall DangerRoomStatScreen::ResetCards_Debug(DangerRoomStatScreen *this)

{
  if (this[0x6c] == (DangerRoomStatScreen)0x0) {
    return;
  }
  unflipCardsForReset(this);
  return;
}


/* DangerRoomStatScreen::returnCards() */

void __thiscall DangerRoomStatScreen::returnCards(DangerRoomStatScreen *this)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0xf4) = 5;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3f266666;
  setActiveCardsToState(this,6);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_CardSlide_Back");
  return;
}


/* DangerRoomStatScreen::returnCardsForReset() */

void __thiscall DangerRoomStatScreen::returnCardsForReset(DangerRoomStatScreen *this)

{
  char *pcVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0xf4) = 0x12;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar2;
  *(undefined4 *)(this + 0xec) = 0x3f266666;
  setActiveCardsToState(this,6);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Danger_CardSlide_Back");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::SetupCashout() */

void __thiscall DangerRoomStatScreen::SetupCashout(DangerRoomStatScreen *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  DangerRoomInfo aDStack_b0 [168];
  long local_8;
  
  *(undefined4 *)(this + 600) = *(undefined4 *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,(DangerRoomInfo *)(this + 0x118));
  DangerRoomInfo::RestartRoom();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetDangerRoomInfo(this_01,(string *)aDStack_b0,aDStack_b0);
  DangerRoomInfo::operator=((DangerRoomInfo *)(this + 0x118),aDStack_b0);
  Init(this);
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::Init() */

void __thiscall DangerRoomStatScreen::Init(DangerRoomStatScreen *this)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  removeAllOwnedWidgets(this);
  lVar5 = *(long *)(this + 0x248);
  local_10 = 0;
  local_c = 0;
  uVar4 = (uint)*(byte *)(lVar5 + 0x41);
  if (uVar4 != 0) {
    local_c = (*(int *)(this + 0x120) + -1) / (int)uVar4;
  }
  piVar3 = eastl::max_alt<int>(&local_10,&local_c);
  iVar1 = *piVar3;
  *(int *)(this + 0x108) = iVar1;
  uVar4 = (uint)*(byte *)(lVar5 + 0x41);
  *(uint *)(this + 0x10c) = uVar4 + iVar1 * uVar4;
  cVar2 = DangerRoomInfo::HasLostDangerRoom((DangerRoomInfo *)(this + 0x118));
  if ((cVar2 == '\0') || (this[0x103] != (DangerRoomStatScreen)0x0)) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    FUN_03c9fc24(this + 0x103);
    FUN_03c9fc10(this + 0x102);
    if (local_8 == ___stack_chk_guard) {
      SetupCashout(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::setUpProgressDialog() */

void __thiscall DangerRoomStatScreen::setUpProgressDialog(DangerRoomStatScreen *this)

{
  DangerRoomStatScreen *pDVar1;
  long lVar2;
  LawnApp *pLVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  PVZ2UIDialog *pPVar9;
  DangerRoomDialogContents *this_00;
  wchar_t *pwVar10;
  undefined8 uVar11;
  long lVar12;
  string asStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  string asStack_1c0 [8];
  wstring awStack_1b8 [8];
  wstring awStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined8 local_1a0 [5];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar9 = ::operator_new(0x1e8);
  PVZ2UIDialog::PVZ2UIDialog(pPVar9);
  *(PVZ2UIDialog **)(this + 0x298) = pPVar9;
  this_00 = ::operator_new(0x160);
  DangerRoomDialogContents::DangerRoomDialogContents(this_00,*(PVZ2UIDialog **)(this + 0x298),this);
  PVZ2UIDialog::SetContents(*(PVZ2UIDialog **)(this + 0x298),(Widget *)this_00);
  iVar6 = FUN_03c9fdc0(0x1c6);
  iVar7 = FUN_03c9fdc0(200);
  (**(code **)(**(long **)(this + 0x298) + 0x198))
            (*(long **)(this + 0x298),(*(int *)(this + 0x50) - iVar6) / 2,
             (*(int *)(this + 0x54) - iVar7) / 2,iVar6,iVar7);
  if (this[0x103] == (DangerRoomStatScreen)0x0) {
    pwVar10 = L"[DANGER_ROOM_BUTTON_BACKTOMAP]";
  }
  else {
    pwVar10 = L"[BACK_TO_MAP]";
  }
  pDVar1 = this + 0xd8;
  pPVar9 = *(PVZ2UIDialog **)(this + 0x298);
  FUN_05478178((vector<bool,std::allocator<bool>> *)local_1a0,pwVar10,auStack_1a8);
  PVZ2UIDialog::AddButton(pPVar9,2,(vector<bool,std::allocator<bool>> *)local_1a0,pDVar1,1);
  FUN_05476c50((vector<bool,std::allocator<bool>> *)local_1a0);
  nop();
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)local_1a0);
  lVar12 = 0;
  do {
    bVar4 = (bool)DangerRoomInfo::HasLawnMowerInRow((DangerRoomInfo *)(this + 0x118),(int)lVar12);
    std::vector<bool,std::allocator<bool>>::push_back
              ((vector<bool,std::allocator<bool>> *)local_1a0,bVar4);
    lVar2 = lVar12 + 1;
    FUN_03c9fc88(local_1a0[0],lVar12);
    lVar12 = lVar2;
  } while (lVar2 != 5);
  uVar8 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar8);
  FUN_0546065c(auStack_168,*(undefined4 *)(this + 0x19c));
  FUN_05462824(asStack_1d0,auStack_178);
  Sexy::ToWString(asStack_1d0);
  pLVar3 = gLawnApp;
  if (this[0x103] == (DangerRoomStatScreen)0x0) {
    iVar6 = *(int *)(this + 0x150);
    if ((*(int *)(this + 0x120) == 1) && (iVar6 == 0)) {
      cVar5 = LawnApp::GetShouldBackToMapAtDangerRoom(gLawnApp);
      if (cVar5 == '\0') {
        Sexy::StringToUpper((Sexy *)(this + 0x118),(string *)0x1);
        Sexy::ToWString(asStack_1c0);
        uVar11 = FUN_054766ec(awStack_1b8);
        Sexy::StrFormat(L"[DANGER_ROOM_%s_TITLE_WELCOME]",awStack_1b0,uVar11);
        TodStringTranslate(awStack_1b0);
        FUN_054766c8(this + 0x2a0,auStack_1a8);
        FUN_05476c50(auStack_1a8);
        FUN_05476c50(awStack_1b0);
        FUN_05476c50(awStack_1b8);
        TodStringTranslate(L"[DANGER_ROOM_MOWERS_LEFT]");
        FUN_05478178(auStack_1a8,&DAT_056f11a8,awStack_1b8);
        DangerRoomDialogContents::SetFirstLine
                  (this_00,awStack_1b0,auStack_1a8,(vector<bool,std::allocator<bool>> *)local_1a0,
                   0xffffffff);
        FUN_05476c50(auStack_1a8);
        nop();
        FUN_05476c50(awStack_1b0);
        TodStringTranslate(L"[DANGER_ROOM_HIGHEST]");
        FUN_05477b24(auStack_1a8,auStack_1c8);
        DangerRoomDialogContents::SetSecondLine
                  (this_00,awStack_1b0,auStack_1a8,*(undefined4 *)(this + 0x124),this[0x101]);
        FUN_05476c50(auStack_1a8);
        FUN_05476c50(awStack_1b0);
        pPVar9 = *(PVZ2UIDialog **)(this + 0x298);
        FUN_05478178(auStack_1a8,L"[DANGER_ROOM_BUTTON_START]",awStack_1b0);
        PVZ2UIDialog::AddButton(pPVar9,0,auStack_1a8,pDVar1,0);
        FUN_05476c50(auStack_1a8);
        nop();
        std::string::~string(asStack_1c0);
      }
      else {
        LawnApp::ShowBattleStatementUI(pLVar3);
        (**(code **)(*(long *)this + 0x158))(this,0);
      }
      goto LAB_03ca3a6c;
    }
    if ((iVar6 < 1) || (*(int *)(this + 0x120) <= iVar6)) {
      FUN_05478178(awStack_1b0,L"[DANGER_ROOM_TITLE_START_LEVEL]",asStack_1c0);
      Sexy::StrFormat(L"%d",awStack_1b8,(ulong)*(uint *)(this + 0x120));
      TodReplaceString(awStack_1b0,L"{NUMBER}",awStack_1b8);
      FUN_054766c8(this + 0x2a0,auStack_1a8);
      FUN_05476c50(auStack_1a8);
      FUN_05476c50(awStack_1b8);
      FUN_05476c50(awStack_1b0);
      nop();
      TodStringTranslate(L"[DANGER_ROOM_MOWERS_LEFT]");
      FUN_05478178(auStack_1a8,&DAT_056f11a8,awStack_1b8);
      DangerRoomDialogContents::SetFirstLine
                (this_00,awStack_1b0,auStack_1a8,(vector<bool,std::allocator<bool>> *)local_1a0,
                 0xffffffff);
      FUN_05476c50(auStack_1a8);
      nop();
      FUN_05476c50(awStack_1b0);
      TodStringTranslate(L"[DANGER_ROOM_HIGHEST]");
      FUN_05477b24(auStack_1a8,auStack_1c8);
      DangerRoomDialogContents::SetSecondLine
                (this_00,awStack_1b0,auStack_1a8,*(undefined4 *)(this + 0x124),this[0x101]);
      FUN_05476c50(auStack_1a8);
      FUN_05476c50(awStack_1b0);
      DangerRoomDialogContents::SetPlantfoodCount(this_00,(uint)(byte)this[0x128]);
      pPVar9 = *(PVZ2UIDialog **)(this + 0x298);
      pwVar10 = L"[DANGER_ROOM_BUTTON_START]";
    }
    else {
      if (*(int *)(gLawnApp + 0x2968) == 1) {
        LawnApp::ShowBattleStatementUI();
        (**(code **)(*(long *)this + 0x158))(this,0);
      }
      FUN_05478178(awStack_1b0,L"[DANGER_ROOM_TITLE_LEVEL_COMPLETE]",asStack_1c0);
      Sexy::StrFormat(L"%d",awStack_1b8,(ulong)*(uint *)(this + 0x150));
      TodReplaceString(awStack_1b0,L"{NUMBER}",awStack_1b8);
      FUN_054766c8(this + 0x2a0,auStack_1a8);
      FUN_05476c50(auStack_1a8);
      FUN_05476c50(awStack_1b8);
      FUN_05476c50(awStack_1b0);
      nop();
      TodStringTranslate(L"[DANGER_ROOM_MOWERS_LEFT]");
      FUN_05478178(auStack_1a8,&DAT_056f11a8,awStack_1b8);
      DangerRoomDialogContents::SetFirstLine
                (this_00,awStack_1b0,auStack_1a8,(vector<bool,std::allocator<bool>> *)local_1a0,
                 0xffffffff);
      FUN_05476c50(auStack_1a8);
      nop();
      FUN_05476c50(awStack_1b0);
      TodStringTranslate(L"[DANGER_ROOM_HIGHEST]");
      FUN_05477b24(auStack_1a8,auStack_1c8);
      DangerRoomDialogContents::SetSecondLine
                (this_00,awStack_1b0,auStack_1a8,*(undefined4 *)(this + 0x124),this[0x101]);
      FUN_05476c50(auStack_1a8);
      FUN_05476c50(awStack_1b0);
      DangerRoomDialogContents::SetPlantfoodCount(this_00,(uint)(byte)this[0x128]);
      pPVar9 = *(PVZ2UIDialog **)(this + 0x298);
      pwVar10 = L"[DANGER_ROOM_BUTTON_NEXT_LEVEL]";
    }
    FUN_05478178(auStack_1a8,pwVar10,awStack_1b0);
    uVar11 = 1;
  }
  else {
    TodStringTranslate(L"[DANGER_ROOM_BUTTON_NEW_GAME]");
    FUN_054766c8(this + 0x2a0,auStack_1a8);
    FUN_05476c50(auStack_1a8);
    TodStringTranslate(L"[DANGER_ROOM_HIGHEST]");
    FUN_05477b24(auStack_1a8,auStack_1c8);
    DangerRoomDialogContents::SetFirstLine
              (this_00,awStack_1b0,auStack_1a8,(vector<bool,std::allocator<bool>> *)local_1a0,0);
    FUN_05476c50(auStack_1a8);
    FUN_05476c50(awStack_1b0);
    pPVar9 = *(PVZ2UIDialog **)(this + 0x298);
    FUN_05478178(auStack_1a8,L"[DANGER_ROOM_BUTTON_NEW_GAME]",awStack_1b0);
    uVar11 = 0;
  }
  PVZ2UIDialog::AddButton(pPVar9,uVar11,auStack_1a8,pDVar1,uVar11);
  FUN_05476c50(auStack_1a8);
  nop();
LAB_03ca3a6c:
  DangerRoomDialogContents::FinalizeContentSize(this_00);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x298));
  FUN_05476c50(auStack_1c8);
  std::string::~string(asStack_1d0);
  FUN_054617bc(auStack_178);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::setUpCardSelection() */

void __thiscall DangerRoomStatScreen::setUpCardSelection(DangerRoomStatScreen *this)

{
  ButtonListener *pBVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  Toggles *this_00;
  UIWidget *pUVar12;
  PVZ2UIButton *pPVar13;
  LotteryResultProgressBar *pLVar14;
  SalesProgressBar *pSVar15;
  DangerRoomSeedBank *pDVar16;
  string *psVar17;
  ulong uVar18;
  PVZ2UIScrollingWidget *this_01;
  long lVar19;
  undefined8 *puVar20;
  Insets *pIVar21;
  code *pcVar22;
  ulong uVar23;
  long *plVar24;
  float fVar25;
  wstring awStack_a0 [8];
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  int local_40 [2];
  int local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string((string *)local_40,"PurchasableDangerRoomCard");
  cVar2 = Toggles::IsEnabled(this_00,(string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if (cVar2 != '\0') {
    std::string::string((string *)local_40,"UICoinBank");
    pUVar12 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_40);
    std::string::~string((string *)local_40);
    nop();
    if (pUVar12 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar12,true);
    }
  }
  std::string::string((string *)local_40,"UIPauseButton");
  pUVar12 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if (pUVar12 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar12,false);
  }
  if (*(int *)(this + 0xf4) == 0) {
    *(undefined4 *)(this + 0xf4) = 1;
  }
  pBVar1 = (ButtonListener *)(this + 0xd8);
  TodStringTranslate(L"[DANGER_ROOM_TITLE_PICK_REWARD]");
  FUN_054766c8(this + 0x2a0,(string *)local_40);
  FUN_05476c50((string *)local_40);
  TodStringTranslate(L"[DANGER_ROOM_BUTTON_ACCEPT]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,5,pBVar1,(wstring *)&local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x278) = pPVar13;
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0x278);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06ad2908,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ad26d0,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x278));
  Sexy::StrFormat(L"%d",awStack_a0,(ulong)*(ushort *)(*(long *)(this + 0x248) + 0x44));
  Sexy::Color::Color((Color *)local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,6,pBVar1,awStack_a0,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x280) = pPVar13;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06ad2908,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ad26d0,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  fVar25 = (float)FUN_03c9fdd4(0xc1400000);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2800);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar15);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2800);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2800);
  iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2800);
  iVar8 = SalesProgressBar::GetCurrentLevel(pSVar15);
  Sexy::Insets::Insets
            (aIStack_98,(int)(((float)iVar3 - fVar25) - (float)iVar4),(iVar5 - iVar6) / 2,iVar7,
             iVar8);
  pPVar13 = *(PVZ2UIButton **)(this + 0x280);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ad2800,1);
  PVZ2UIButton::AddImage(pPVar13,(PVZ2UIImage *)local_40,(TRect *)aIStack_98);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  pLVar14 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2800);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar14);
  fVar25 = (float)FUN_03c9fdd4(0xc1400000);
  iVar5 = FUN_03c9fdc0(3);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  Sexy::Insets::Insets(aIStack_88,0,0,(int)(((float)(iVar3 - iVar4) - fVar25) - (float)iVar5),iVar6)
  ;
  PVZ2UIButton::SetContentsRect(*(PVZ2UIButton **)(this + 0x280),(TRect *)aIStack_88);
  PVZ2UIButton::SetTextJustification(*(PVZ2UIButton **)(this + 0x280),1);
  (**(code **)(**(long **)(this + 0x280) + 0x158))(*(long **)(this + 0x280),0);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x280));
  pDVar16 = ::operator_new(0xf0);
  DangerRoomSeedBank::DangerRoomSeedBank(pDVar16);
  *(DangerRoomSeedBank **)(this + 0x260) = pDVar16;
  pcVar22 = *(code **)(*(long *)pDVar16 + 0x198);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad26a8);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
  (*pcVar22)(pDVar16,0,0,0,uVar9);
  for (uVar23 = 0;
      uVar18 = FUN_03c9fa2c(*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138)),
      uVar23 < uVar18; uVar23 = uVar23 + 1) {
    psVar17 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    FUN_03c9fa38(*(undefined8 *)(this + 0x130),uVar23);
    NameMapperBase::GetNameForId((int)*(undefined8 *)(this + 0x2c0));
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar17);
    std::string::~string((string *)local_40);
    pDVar16 = *(DangerRoomSeedBank **)(this + 0x260);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_40,(RtWeakPtrBase *)&local_78);
    DangerRoomSeedBank::AddSeed(pDVar16,(string *)local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  }
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe0));
  *(PVZ2UIScrollingWidget **)(this + 0x268) = this_01;
  iVar5 = FUN_03c9fdc0(0xc);
  iVar3 = *(int *)(this + 0x50);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad26a8);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar6 = FUN_03c9fdc0(0x66);
  plVar24 = *(long **)(this + 0x268);
  iVar4 = *(int *)(this + 0x54);
  uVar10 = FUN_03c9fdc0(6);
  iVar7 = FUN_03c9fdc0(0xe);
  (**(code **)(*plVar24 + 0x198))(plVar24,uVar10,iVar7 + (iVar4 - iVar6),iVar3 - iVar5,uVar9);
  Sexy::ScrollWidget::SetScrollMode(*(ScrollWidget **)(this + 0x268),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x268));
  (**(code **)(**(long **)(this + 0x268) + 0x60))
            (*(long **)(this + 0x268),*(undefined8 *)(this + 0x260));
  TodStringTranslate(L"[DANGER_ROOM_BUTTON_START]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,5,pBVar1,(wstring *)&local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x288) = pPVar13;
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0x288);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06ad2908,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ad26d0,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  iVar5 = FUN_03c9fdc0(0x8c);
  iVar3 = *(int *)(this + 0x50);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad2908);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar15);
  iVar7 = FUN_03c9fdc0(0x66);
  iVar4 = *(int *)(this + 0x54);
  plVar24 = *(long **)(this + 0x288);
  uVar9 = FUN_03c9fdc0(0x6e);
  (**(code **)(*plVar24 + 0x198))
            (plVar24,iVar3 - iVar5,(iVar4 - iVar7) + (iVar7 - iVar6) / 2,uVar9,iVar6);
  (**(code **)(**(long **)(this + 0x288) + 0x158))(*(long **)(this + 0x288),1);
  (**(code **)(**(long **)(this + 0x288) + 0x188))(*(long **)(this + 0x288),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x288));
  TodStringTranslate(L"[DANGER_ROOM_BUTTON_RESET]");
  Sexy::Color::Color((Color *)local_40,1);
  pPVar13 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(pPVar13,8,pBVar1,(wstring *)&local_78,(Color *)local_40);
  *(PVZ2UIButton **)(this + 0x290) = pPVar13;
  FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_78);
  pPVar13 = *(PVZ2UIButton **)(this + 0x290);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06ad29d8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_40,&DAT_06ad28a0,3);
  PVZ2UIButton::SetDialogStates(pPVar13,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)local_40);
  iVar4 = FUN_03c9fdc0(0xf0);
  iVar3 = *(int *)(this + 0x50);
  pSVar15 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ad29d8);
  uVar9 = SalesProgressBar::GetCurrentLevel(pSVar15);
  plVar24 = *(long **)(this + 0x290);
  uVar10 = FUN_03c9fdc0(0x1b8);
  uVar11 = FUN_03c9fdc0(0xf0);
  (**(code **)(*plVar24 + 0x198))(plVar24,(iVar3 - iVar4) / 2,uVar10,uVar11,uVar9);
  (**(code **)(**(long **)(this + 0x290) + 0x158))(*(long **)(this + 0x290),0);
  (**(code **)(**(long **)(this + 0x290) + 0x188))(*(long **)(this + 0x290),1);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x290));
  iVar3 = *(int *)(gLawnApp + 0xd4);
  std::string::string((string *)local_40,"UIPauseButton");
  lVar19 = UIWidget::GetWidgetBySheetName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if (lVar19 != 0) {
    UIWidget::GetDrawRect();
    iVar3 = local_40[0] - local_38;
  }
  std::string::string((string *)local_40,"UICoinBank");
  pUVar12 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)local_40);
  std::string::~string((string *)local_40);
  nop();
  if ((pUVar12 != (UIWidget *)0x0) &&
     (fVar25 = (float)VectorNorm((FPoint *)(this + 0x2c8)), fVar25 < _FUN_03ca4d04)) {
    puVar20 = (undefined8 *)UIWidget::GetPositionOffset(pUVar12);
    *(undefined8 *)(this + 0x2c8) = *puVar20;
    pIVar21 = (Insets *)UIWidget::GetRect(pUVar12);
    Sexy::Insets::Insets((Insets *)local_40,pIVar21);
    iVar4 = FUN_03c9fdc0(0xfffffffb);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_78,
               (float)(int)((((double)iVar3 - (double)local_38 * 1.5) - (double)local_40[0]) +
                           (double)iVar4),0.0);
    UIWidget::SetPositionOffset(local_78,local_74,pUVar12);
  }
  FUN_05476c50(awStack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::MouseDown(int, int, int) */

void DangerRoomStatScreen::MouseDown(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  DangerRoomStatScreen *this;
  Toggles *this_00;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  PrimeTypeface *pPVar8;
  int *piVar9;
  wchar_t *pwVar10;
  long *plVar11;
  long lVar12;
  DangerRoomSeedBank *pDVar13;
  long lVar14;
  undefined8 uVar15;
  wstring awStack_20 [8];
  int local_18 [2];
  int local_10 [2];
  long local_8;
  
  this = (DangerRoomStatScreen *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xf4) != 0) goto LAB_03ca4d4c;
  this_00 = (Toggles *)Toggles::GetInstance();
  std::string::string((string *)local_10,"PurchasableDangerRoomCard");
  cVar1 = Toggles::IsEnabled(this_00,(string *)local_10);
  std::string::~string((string *)local_10);
  nop();
  if (cVar1 != '\0') {
    std::string::string((string *)local_10,"UICoinBank");
    plVar5 = (long *)UIWidget::GetWidgetBySheetName((string *)local_10);
    std::string::~string((string *)local_10);
    nop();
    if ((plVar5 != (long *)0x0) &&
       (cVar1 = (**(code **)(*plVar5 + 0xa8))(plVar5,param_2,param_3), cVar1 != '\0')) {
      (**(code **)(*plVar5 + 0x90))(plVar5,param_2,param_3);
      goto LAB_03ca4d4c;
    }
  }
  uVar15 = *(undefined8 *)(this + 0x220);
  lVar4 = FUN_03c9fa40(uVar15,*(undefined8 *)(this + 0x228));
  lVar7 = 0;
  do {
    lVar12 = lVar7;
    if (lVar12 == lVar4) goto LAB_03ca4d4c;
    plVar5 = (long *)FUN_03c9fa4c(uVar15,lVar12);
    lVar14 = *plVar5;
    cVar1 = Sexy::TRect<int>::Contains((TRect<int> *)(lVar14 + 0x20),param_2,param_3);
    lVar7 = lVar12 + 1;
  } while (cVar1 == '\0');
  cVar1 = onCardSelectedOrUnselected(this,(bool)(*(byte *)(lVar14 + 0x34) ^ 1));
  if (cVar1 == '\0') goto LAB_03ca4d4c;
  plVar5 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),lVar12);
  if (*(char *)(*plVar5 + 0x34) != '\0') {
    plVar11 = *(long **)(this + 0x278);
    *(undefined1 *)(*plVar5 + 0x34) = 0;
    (**(code **)(*plVar11 + 0x158))(plVar11);
    (**(code **)(**(long **)(this + 0x278) + 0x188))(*(long **)(this + 0x278),1);
    plVar5 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),lVar12);
    if (*(int *)(*plVar5 + 8) == 1) {
      pDVar13 = *(DangerRoomSeedBank **)(this + 0x260);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(*plVar5 + 0x10));
      DangerRoomSeedBank::RemoveSeed(pDVar13,(string *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
    goto LAB_03ca4d4c;
  }
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_UI_MiniGame_Card_Select");
  plVar5 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),lVar12);
  lVar7 = *plVar5;
  *(undefined1 *)(lVar7 + 0x34) = 1;
  if (*(char *)(lVar7 + 0x36) == '\0') {
    iVar2 = *(int *)(lVar7 + 8);
    if (iVar2 == 1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)(lVar7 + 0x10));
      Plant::GetFormattedToolTip((Plant *)local_10,(RtWeakPtr<Sexy::SoundResource> *)local_18);
      FUN_054766c8(this + 0x238,(string *)local_10);
      FUN_05476c50((string *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      pDVar13 = *(DangerRoomSeedBank **)(this + 0x260);
      plVar5 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),lVar12);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)(*plVar5 + 0x10));
      DangerRoomSeedBank::AddSeed(pDVar13,(string *)local_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    }
    else {
      if (iVar2 - 8U < 3) {
        pwVar10 = L"[DANGER_ROOM_REWARD_MOWER_DESC_SINGULAR]";
      }
      else {
        if (iVar2 - 2U < 3) {
          TodStringTranslate(L"[DANGER_ROOM_REWARD_SUN_DESC]");
          Sexy::StrFormat(L"%d",(RtWeakPtr<Sexy::SoundResource> *)local_18,200);
          TodReplaceString(awStack_20,L"{SUN_COUNT}",(wstring *)local_18);
          FUN_054766c8(this + 0x238,(string *)local_10);
          FUN_05476c50((string *)local_10);
          FUN_05476c50((RtWeakPtr<Sexy::SoundResource> *)local_18);
          FUN_05476c50(awStack_20);
          goto LAB_03ca4ed0;
        }
        if (iVar2 - 5U < 3) {
          pwVar10 = L"[DANGER_ROOM_REWARD_PLANTFOOD_DESC_SINGULAR]";
        }
        else if (iVar2 == 0xb) {
          pwVar10 = L"[DANGER_ROOM_REWARD_WIZARD_FINGER]";
        }
        else if (iVar2 == 0xc) {
          pwVar10 = L"[DANGER_ROOM_REWARD_FLICK_ZOMBIE]";
        }
        else {
          if (iVar2 != 0xd) goto LAB_03ca4ed0;
          pwVar10 = L"[DANGER_ROOM_REWARD_SNOWBALL]";
        }
      }
      TodStringTranslate(pwVar10);
      FUN_054766c8(this + 0x238,(string *)local_10);
      FUN_05476c50((string *)local_10);
    }
  }
  else {
    TodStringTranslate(L"[DANGER_ROOM_REWARD_FOURTH_CARD_DESC]");
    FUN_054766c8(this + 0x238,(string *)local_10);
    FUN_05476c50((string *)local_10);
    (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),0);
    (**(code **)(**(long **)(this + 0x278) + 0x188))(*(long **)(this + 0x278),1);
  }
LAB_03ca4ed0:
  iVar2 = FUN_03c9fdc0(0x30);
  iVar2 = *(int *)(this + 0x50) - iVar2;
  local_18[0] = iVar2;
  pPVar8 = (PrimeTypeface *)
           PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26_Outline);
  FUN_05477b24((string *)local_10,this + 0x238);
  iVar3 = Sexy::PrimeTypeface::SizeString_Line(pPVar8,(string *)local_10);
  FUN_05476c50((string *)local_10);
  if (iVar2 < iVar3) {
    local_10[0] = (int)((float)iVar3 * 0.618034);
    piVar9 = eastl::min_alt<int>(local_18,local_10);
    *(int *)(this + 0x240) = *piVar9;
  }
  else {
    *(int *)(this + 0x240) = iVar2;
  }
LAB_03ca4d4c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::dealCards() */

void __thiscall DangerRoomStatScreen::dealCards(DangerRoomStatScreen *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  int local_24;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xf4) = 2;
  uVar10 = PVZ_T();
  *(undefined4 *)(this + 0xe8) = uVar10;
  *(undefined4 *)(this + 0xec) = 0x3f266666;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  uVar2 = *(undefined8 *)(this + 0x2a8);
  local_24 = 0;
  while (iVar1 = local_24, uVar3 = FUN_03c9fa54(uVar2,*(undefined8 *)(this + 0x2b0)),
        (ulong)(long)iVar1 < uVar3) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_20,&local_24);
    uVar2 = *(undefined8 *)(this + 0x2a8);
    iVar1 = local_24 + 1;
    lVar5 = FUN_03c9fa60(uVar2,(long)local_24);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    local_24 = iVar1;
  }
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar4);
  lVar5 = FUN_03c9fa40(*(undefined8 *)(this + 0x220),*(undefined8 *)(this + 0x228));
  if (lVar5 != 0) {
    lVar9 = 0;
    uVar2 = *(undefined8 *)(this + 0x2a8);
    do {
      piVar6 = (int *)FUN_03c9fa38(local_20[0],lVar9);
      puVar7 = (undefined8 *)FUN_03c9fa60(uVar2,(long)*piVar6);
      *(int *)((long)puVar7 + 0x1c) = (int)lVar9;
      lVar9 = lVar9 + 1;
      *(undefined4 *)(puVar7 + 3) = 1;
      puVar7[1] = *puVar7;
      *(undefined4 *)((long)puVar7 + 0x14) = *(undefined4 *)(puVar7 + 2);
    } while (lVar9 != lVar5);
  }
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar8,"Play_UI_Danger_CardSlide");
  (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),0);
  (**(code **)(**(long **)(this + 0x280) + 0x158))(*(long **)(this + 0x280),0);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::createFannedOutCards(int) */

void __thiscall DangerRoomStatScreen::createFannedOutCards(DangerRoomStatScreen *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  SalesProgressBar *pSVar11;
  float *pfVar12;
  undefined8 uVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  int local_44 [3];
  int local_38;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_44[0] = param_1;
  std::vector<FanCardData,std::allocator<FanCardData>>::clear
            ((vector<FanCardData,std::allocator<FanCardData>> *)(this + 0x2a8));
  uVar13 = *(undefined8 *)(this + 0x220);
  lVar8 = FUN_03c9fa40(uVar13,*(undefined8 *)(this + 0x228));
  if (lVar8 == 0) {
    iVar6 = FUN_03c9fdc0(0xb4);
    iVar1 = *(int *)(this + 0x54);
    pSVar11 = (SalesProgressBar *)
              CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar11);
    iVar7 = (iVar1 - iVar6) - iVar7;
  }
  else {
    plVar9 = (long *)FUN_03c9fa4c(uVar13,0);
    iVar7 = *(int *)(*plVar9 + 0x24);
  }
  local_38 = 0xf;
  piVar10 = eastl::min_alt<int>(local_44,&local_38);
  iVar1 = *piVar10;
  pSVar11 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2a00);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar11);
  iVar3 = FUN_03c9fdc0(6);
  iVar6 = *(int *)(this + 0x50);
  iVar4 = FUN_03c9fd9c(0xfffffec0);
  local_34 = 30.0;
  local_28 = CONCAT44(local_28._4_4_,115.0 / ((float)iVar1 - 1.0));
  pfVar12 = eastl::min_alt<float>((float *)&local_28,&local_34);
  fVar20 = *pfVar12;
  if (0 < iVar1) {
    iVar14 = 0;
    do {
      fVar18 = (float)iVar14;
      iVar14 = iVar14 + 1;
      fVar15 = (float)Sexy::Rand(5.0);
      iVar5 = Sexy::Rand(iVar3);
      fVar15 = (float)Sexy::SexyMath::DegToRad
                                (fVar15 + -2.5 +
                                 (360.0 - ((float)iVar1 - 1.0) * fVar20 * 0.5) + fVar20 * fVar18);
      dVar16 = sin((double)fVar15);
      dVar19 = (double)((int)((float)iVar2 * 0.6) + (iVar5 - iVar3 / 2));
      dVar17 = cos((double)fVar15);
      FanCardData::FanCardData((FanCardData *)&local_28);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_30,(float)(int)((double)(iVar6 / 2) + dVar16 * dVar19),
                 (float)(int)((double)(iVar7 + iVar4) + dVar17 * dVar19));
      local_10 = 0;
      local_20 = local_30;
      local_28 = local_30;
      local_c = 0xffffffff;
      local_18 = fVar15;
      local_14 = fVar15;
      std::vector<FanCardData,std::allocator<FanCardData>>::push_back
                ((vector<FanCardData,std::allocator<FanCardData>> *)(this + 0x2a8),
                 (FanCardData *)&local_28);
    } while (iVar14 != iVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::SetupRewards() */

void DangerRoomStatScreen::SetupRewards(void)

{
  int iVar1;
  int iVar2;
  Insets *pIVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  DangerRoomStatScreen *in_x0;
  ulong uVar18;
  ResourceInfo *pRVar19;
  IntroArenaTutorialBattleModule *this;
  undefined8 uVar20;
  ProfileMgr *pPVar21;
  ResourceInfo *pRVar22;
  long lVar23;
  string *psVar24;
  wchar16 *pwVar25;
  uint *puVar26;
  DangerRoomRewardCard *pDVar27;
  PlantType *this_00;
  SalesProgressBar *pSVar28;
  LotteryResultProgressBar *pLVar29;
  int *piVar30;
  long *plVar31;
  ulong uVar32;
  PlayerInfo *pPVar33;
  Toggles *this_01;
  LineBreakCategory *pLVar34;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long lVar35;
  Insets *pIVar36;
  code *pcVar37;
  LineBreakCategory aLStack_e8 [8];
  LevelEditorCardPlantInterface aLStack_e0 [8];
  DangerRoomRewardCard *local_d8;
  undefined4 local_d0 [2];
  ProbabilitySet<int> aPStack_c8 [48];
  Insets aIStack_98 [16];
  Insets aIStack_88 [16];
  Insets aIStack_78 [16];
  Insets local_68 [16];
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar18 = getSeed(in_x0);
  ProbabilitySet<int>::ProbabilitySet(aPStack_c8,uVar18);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_e0);
  while (bVar5 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)aLStack_e0), bVar5) {
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_e0);
    pRVar19 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_d8);
    if ((pRVar19 != (ResourceInfo *)0x0) && (pRVar19[0x30] != (ResourceInfo)0x0)) {
      pcVar37 = *(code **)(*(long *)pRVar19 + 0x80);
      this = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      uVar20 = IntroArenaTutorialBattleModule::getMowerAudio(this);
      cVar6 = (*pcVar37)(pRVar19,uVar20);
      if (cVar6 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_d0,(RtWeakPtrBase *)&local_d8);
        pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        uVar20 = ProfileMgr::GetCurrentProfile(pPVar21);
        cVar6 = ProfileUtils::IsPlantUnlocked((RtWeakPtr<Sexy::SoundResource> *)local_d0,uVar20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
        if (cVar6 == '\0') {
LAB_03ca5f3c:
          bVar5 = false;
        }
        else {
          FUN_03ca2818(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          DangerRoomModule::GetWorldSpecificPropertySheet();
          pRVar22 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_d0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d0)
          ;
          uVar20 = *(undefined8 *)(pRVar22 + 0x28);
          lVar23 = FUN_03c9fa68(uVar20,*(undefined8 *)(pRVar22 + 0x30));
          for (lVar35 = 0; lVar35 != lVar23; lVar35 = lVar35 + 1) {
            psVar24 = (string *)FUN_03c9fa74(uVar20,lVar35);
            cVar6 = std::operator==(psVar24,(string *)(pRVar19 + 8));
            if (cVar6 != '\0') goto LAB_03ca5f3c;
          }
          bVar5 = true;
        }
        pwVar25 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar34 = aLStack_e8;
        std::string::string((string *)local_d0,"NoDangerRoomPlants");
        cVar6 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar25,(wchar16 *)local_d0,pLVar34,in_x3,in_x4);
        std::string::~string((string *)local_d0);
        nop();
        if (cVar6 == '\0') {
          pwVar25 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          pLVar34 = aLStack_e8;
          std::string::string((string *)local_d0,"FreePlanting");
          cVar6 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar25,(wchar16 *)local_d0,pLVar34,in_x3,in_x4);
          std::string::~string((string *)local_d0);
          nop();
          if ((cVar6 != '\0') || (bVar5)) {
            uVar7 = NameMapperBase::GetIdForName
                              (*(NameMapperBase **)(in_x0 + 0x2c0),(string *)(pRVar19 + 8));
            uVar20 = *(undefined8 *)(in_x0 + 0x130);
            lVar23 = FUN_03c9fa2c(uVar20,*(undefined8 *)(in_x0 + 0x138));
            for (lVar35 = 0; lVar35 != lVar23; lVar35 = lVar35 + 1) {
              puVar26 = (uint *)FUN_03c9fa38(uVar20,lVar35);
              in_x3 = (LineBreakCategory *)(ulong)*puVar26;
              if (uVar7 == *puVar26) goto LAB_03ca5d0c;
            }
            pDVar27 = ::operator_new(0x40);
            DangerRoomRewardCard::DangerRoomRewardCard(pDVar27);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(pDVar27 + 0x10),(RtWeakPtr *)&local_d8);
            *(undefined4 *)(pDVar27 + 8) = 1;
            this_00 = (PlantType *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_d8);
            lVar35 = PlantType::GetProps(this_00);
            ProbabilitySet<DangerRoomRewardCard*>::AddItem
                      ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8,pDVar27,
                       *(int *)(lVar35 + 0xb8));
          }
        }
      }
    }
LAB_03ca5d0c:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_d8);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_e0);
  }
  iVar8 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                    ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
  ResetRewardList(in_x0);
  iVar9 = FUN_03c9fd9c(400);
  iVar9 = *(int *)(in_x0 + 0x50) / 2 - iVar9;
  iVar10 = FUN_03c9fdc0(0xffffff4c);
  iVar4 = *(int *)(in_x0 + 0x54);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar11 = SalesProgressBar::GetCurrentLevel(pSVar28);
  iVar11 = (iVar10 + iVar4) - iVar11;
  iVar10 = FUN_03c9fd9c(800);
  iVar12 = GetNumRewardableCards();
  iVar4 = 0;
  if (iVar12 != 0) {
    iVar4 = iVar10 / iVar12;
  }
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  iVar12 = iVar9 + iVar4 + iVar4;
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar14 = SalesProgressBar::GetCurrentLevel(pSVar28);
  iVar1 = iVar12 + iVar4;
  iVar2 = iVar1 + iVar4;
  Sexy::Insets::Insets(aIStack_98,iVar9,iVar11,iVar13,iVar14);
  iVar13 = *(int *)(in_x0 + 0x50);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar15 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar16 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_88,iVar13 / 2 - iVar14 / 2,iVar11,iVar15,iVar16);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar13 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar14 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar15 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_78,(iVar9 + iVar10) - iVar13,iVar11,iVar14,iVar15);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(local_68,iVar9,iVar11,iVar10,iVar13);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar13 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_58,iVar9 + iVar4,iVar11,iVar10,iVar13);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_48,iVar12,iVar11,iVar9,iVar10);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_38,iVar1,iVar11,iVar9,iVar10);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_28,iVar2,iVar11,iVar9,iVar10);
  pLVar29 = (LotteryResultProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar29);
  pSVar28 = (SalesProgressBar *)
            CachedResourcePtr<Sexy::Image>::operator->
                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad2680);
  iVar10 = SalesProgressBar::GetCurrentLevel(pSVar28);
  Sexy::Insets::Insets(aIStack_18,iVar2 + iVar4,iVar11,iVar9,iVar10);
  uVar17 = GetNumRewardableCards();
  local_d8 = (DangerRoomRewardCard *)CONCAT44(local_d8._4_4_,uVar17);
  local_d0[0] = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                          ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
  piVar30 = eastl::min_alt<int>((int *)&local_d8,(int *)local_d0);
  iVar4 = *piVar30;
  *(int *)(in_x0 + 0x2d8) = iVar4;
  pIVar36 = aIStack_98;
  if (3 < iVar4) {
    pIVar36 = local_68;
  }
  lVar35 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                     ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
  if ((lVar35 != 0) && (0 < iVar4)) {
    pIVar3 = pIVar36 + ((ulong)(iVar4 - 1) + 1) * 0x10;
    do {
      while( true ) {
        local_d8 = (DangerRoomRewardCard *)
                   ProbabilitySet<DangerRoomRewardCard*>::PickItem
                             ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
        ProbabilitySet<DangerRoomRewardCard*>::RemoveItem
                  ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8,local_d8);
        uVar20 = *(undefined8 *)(pIVar36 + 8);
        *(undefined8 *)(local_d8 + 0x20) = *(undefined8 *)pIVar36;
        *(undefined8 *)(local_d8 + 0x28) = uVar20;
        if (*(int *)(local_d8 + 8) != 1) break;
        pIVar36 = pIVar36 + 0x10;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_d0,(RtWeakPtrBase *)(local_d8 + 0x10));
        plVar31 = (long *)CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)local_d0,1)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_d0);
        (**(code **)(*plVar31 + 0x1a0))(plVar31,0);
        *(long **)(local_d8 + 0x18) = plVar31;
        std::vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>>::push_back
                  ((vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>> *)
                   (in_x0 + 0x220),&local_d8);
        if (pIVar36 == pIVar3) goto LAB_03ca6324;
      }
      pIVar36 = pIVar36 + 0x10;
      std::vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>>::push_back
                ((vector<DangerRoomRewardCard*,std::allocator<DangerRoomRewardCard*>> *)
                 (in_x0 + 0x220),&local_d8);
    } while (pIVar36 != pIVar3);
  }
LAB_03ca6324:
  uVar18 = FUN_03c9fa40(*(undefined8 *)(in_x0 + 0x220),*(undefined8 *)(in_x0 + 0x228));
  if (3 < uVar18) {
    this_01 = (Toggles *)Toggles::GetInstance();
    std::string::string((string *)local_d0,"PurchasableDangerRoomCard");
    cVar6 = Toggles::IsEnabled(this_01,(string *)local_d0);
    std::string::~string((string *)local_d0);
    nop();
    if (cVar6 != '\0') {
      pPVar33 = (PlayerInfo *)ProfileUtils::Profile();
      cVar6 = LocalProfileSaveData::GetHasPurchasedExtraDRCard(pPVar33);
      if (cVar6 == '\0') {
        plVar31 = (long *)std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(in_x0 + 0x220));
        *(undefined1 *)(*plVar31 + 0x36) = 1;
      }
    }
  }
  uVar18 = 0;
  lVar35 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                     ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
  if (lVar35 != 0) {
    do {
      pDVar27 = (DangerRoomRewardCard *)
                ProbabilitySet<DangerRoomRewardCard*>::PickItem
                          ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
      ProbabilitySet<DangerRoomRewardCard*>::RemoveItem
                ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8,pDVar27);
      if (pDVar27 != (DangerRoomRewardCard *)0x0) {
        (**(code **)(*(long *)pDVar27 + 8))(pDVar27);
      }
      uVar18 = uVar18 + 1;
      uVar32 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                         ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
    } while (uVar18 < uVar32);
  }
  FUN_054772c4(in_x0 + 0x238,&DAT_056f11a8);
  if (0 < iVar8) {
    createFannedOutCards(in_x0,iVar8);
  }
  iVar4 = *(int *)(in_x0 + 0x120);
  *(int *)(in_x0 + 0x150) = iVar4;
  if (*(int *)(in_x0 + 0x124) < iVar4) {
    *(int *)(in_x0 + 0x124) = iVar4;
  }
  pPVar21 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar33 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar21);
  PlayerInfo::SetDangerRoomInfo(pPVar33,(string *)(in_x0 + 0x118),(DangerRoomInfo *)(in_x0 + 0x118))
  ;
  Init(in_x0);
  ProbabilitySet<DangerRoomRewardCard*>::~ProbabilitySet
            ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomStatScreen::ButtonDepress(int) */

void __thiscall DangerRoomStatScreen::ButtonDepress(DangerRoomStatScreen *this,int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  PlayerInfo *pPVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  if (*(int *)(this + 0x114) != 0) {
    return;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 3:
    (**(code **)(**(long **)(this + 0x298) + 0x188))(*(long **)(this + 0x298),1);
    if ((this[0x154] != (DangerRoomStatScreen)0x0) && (*(int *)(this + 0x120) == 1)) {
      FUN_03c9fc18(this + 0x104);
      SetupRewards();
      lVar11 = FUN_03c9fa40(*(undefined8 *)(this + 0x220),*(undefined8 *)(this + 0x228));
      if (lVar11 != 0) goto switchD_03ca650c_caseD_7;
    }
    *(undefined4 *)(this + 0x114) = 1;
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 != 0) goto LAB_03ca68c8;
        goto switchD_03ca64dc_caseD_0;
      }
      goto switchD_03ca64dc_caseD_2;
    }
switchD_03ca64dc_caseD_1:
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_UI_Danger_Continue_Button_Release");
    break;
  case 2:
    (**(code **)(**(long **)(this + 0x298) + 0x188))(*(long **)(this + 0x298),1);
    *(undefined4 *)(this + 0x114) = 2;
switchD_03ca64dc_caseD_2:
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_UI_Danger_SaveQuit_Button_Release");
    break;
  case 4:
    (**(code **)(**(long **)(this + 0x298) + 0x188))(*(long **)(this + 0x298),1);
    FUN_03c9fc24(this + 0x103);
    FUN_03c9fc10(this + 0x102);
    SetupCashout(this);
switchD_03ca64dc_caseD_4:
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_UI_Danger_CashOut_Button_Release");
    break;
  case 5:
    lVar11 = 0;
    (**(code **)(**(long **)(this + 0x278) + 0x188))(*(long **)(this + 0x278),1);
    (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),0);
    (**(code **)(**(long **)(this + 0x280) + 0x158))(*(long **)(this + 0x280),0);
    (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),1);
    uVar12 = *(undefined8 *)(this + 0x2a8);
    lVar6 = FUN_03c9fa54(uVar12,*(undefined8 *)(this + 0x2b0));
    while (lVar11 != lVar6) {
      lVar7 = FUN_03c9fa60(uVar12,lVar11);
      if (*(int *)(lVar7 + 0x18) - 3U < 2) {
        lVar11 = lVar11 + 1;
        plVar8 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)*(int *)(lVar7 + 0x1c));
        uVar14 = 4;
        if (*(char *)(*plVar8 + 0x34) == '\0') {
          uVar14 = 3;
        }
        *(undefined4 *)(lVar7 + 0x18) = uVar14;
      }
      else {
        lVar11 = lVar11 + 1;
      }
    }
    unflipCards(this);
switchD_03ca64dc_caseD_5:
    pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar9,"Play_UI_MiniGame_Card_Accept_Release");
    break;
  case 6:
    uVar1 = *(ushort *)(*(long *)(this + 0x248) + 0x44);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlayerInfo::GetNumCoins(this_01,false);
    if (iVar3 < (int)(uint)uVar1) {
      LawnApp::ShowCoinStore(gLawnApp,0);
    }
    else {
      pPVar4 = (PlayerInfo *)ProfileUtils::Profile();
      bVar2 = false;
      LocalProfileSaveData::SetHasPurchasedExtraDRCard(pPVar4,true);
      PlayerInfo::SubtractCoins(this_01,(uint)uVar1);
      MessageRouter::Broadcast<int,int>
                ((MessageRouter *)gMessageRouter,Message::DangerRoomCardPurchased,(uint)uVar1);
      uVar12 = *(undefined8 *)(this + 0x2a8);
      uVar13 = *(undefined8 *)(this + 0x2b0);
      uVar5 = FUN_03c9fa54(uVar12,uVar13);
      for (uVar10 = 0; uVar10 < uVar5; uVar10 = uVar10 + 1) {
        lVar11 = FUN_03c9fa60(uVar12,uVar10);
        if (0 < *(int *)(lVar11 + 0x1c)) {
          plVar8 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)*(int *)(lVar11 + 0x1c))
          ;
          lVar6 = *plVar8;
          if (*(char *)(lVar6 + 0x36) != '\0') {
            *(undefined1 *)(lVar6 + 0x36) = 0;
            if (*(char *)(lVar6 + 0x34) != '\0') {
              plVar8 = *(long **)(this + 0x278);
              *(undefined1 *)(lVar6 + 0x34) = 0;
              (**(code **)(*plVar8 + 0x188))(plVar8,1);
              (**(code **)(**(long **)(this + 0x278) + 0x158))(*(long **)(this + 0x278),0);
              uVar12 = *(undefined8 *)(this + 0x2a8);
              lVar11 = FUN_03c9fa60(uVar12,uVar10);
              uVar13 = *(undefined8 *)(this + 0x2b0);
            }
            *(undefined4 *)(lVar11 + 0x18) = 2;
            bVar2 = true;
            uVar5 = FUN_03c9fa54(uVar12,uVar13);
          }
        }
      }
      if (bVar2) {
        (**(code **)(**(long **)(this + 0x280) + 0x188))(*(long **)(this + 0x280),1);
        (**(code **)(**(long **)(this + 0x280) + 0x158))(*(long **)(this + 0x280),0);
        FUN_054772c4(this + 0x238,&DAT_056f11a8);
        *(undefined4 *)(this + 0xf4) = 3;
        uVar14 = PVZ_T();
        *(undefined4 *)(this + 0xe8) = uVar14;
        *(undefined4 *)(this + 0xec) = 0x3f000000;
        pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar9,"Play_UI_Danger_CardFlip");
      }
    }
    break;
  default:
switchD_03ca650c_caseD_7:
    switch(param_1) {
    case 0:
switchD_03ca64dc_caseD_0:
      pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar9,"Play_UI_Danger_StartGame_Button_Release");
      break;
    case 1:
      goto switchD_03ca64dc_caseD_1;
    case 2:
      goto switchD_03ca64dc_caseD_2;
    case 4:
      goto switchD_03ca64dc_caseD_4;
    case 5:
      goto switchD_03ca64dc_caseD_5;
    }
    break;
  case 8:
    uVar12 = *(undefined8 *)(this + 0x2a8);
    lVar11 = 0;
    lVar6 = FUN_03c9fa54(uVar12,*(undefined8 *)(this + 0x2b0));
    while (lVar11 != lVar6) {
      lVar7 = FUN_03c9fa60(uVar12,lVar11);
      if (*(int *)(lVar7 + 0x18) - 3U < 2) {
        lVar11 = lVar11 + 1;
        plVar8 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),(long)*(int *)(lVar7 + 0x1c));
        uVar14 = 4;
        if (*(char *)(*plVar8 + 0x34) == '\0') {
          uVar14 = 3;
        }
        *(undefined4 *)(lVar7 + 0x18) = uVar14;
      }
      else {
        lVar11 = lVar11 + 1;
      }
    }
    unflipCardsForReset(this);
    this[0x2d4] = (DangerRoomStatScreen)0x1;
  }
  if (*(int *)(this + 0x114) != 1) {
    if ((*(int *)(this + 0x114) != 0) &&
       (iVar3 = FUN_03c9fa10(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d8)),
       iVar3 != 0)) {
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
      return;
    }
    return;
  }
LAB_03ca68c8:
  startDangerRoom(this);
  return;
}


/* non-virtual thunk to DangerRoomStatScreen::ButtonDepress(int) */

void __thiscall DangerRoomStatScreen::ButtonDepress(DangerRoomStatScreen *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::OnStartDangerRoomPlay(bool) */

void __thiscall DangerRoomStatScreen::OnStartDangerRoomPlay(DangerRoomStatScreen *this,bool param_1)

{
  LawnApp *this_00;
  int iVar1;
  PVZ2UIDialog *pPVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    if (*(int *)(this + 0x110) == 0) {
      SetupRewards();
      if (this[0x104] == (DangerRoomStatScreen)0x0) {
        setUpProgressDialog(this);
      }
      else {
        setUpCardSelection(this);
      }
    }
    else if (*(int *)(this + 0x110) == 1) {
      FUN_03c9fc18(this + 0x104);
      SetupRewards();
      lVar3 = FUN_03c9fa40(*(undefined8 *)(this + 0x220),*(undefined8 *)(this + 0x228));
      if (lVar3 == 0) {
        *(undefined4 *)(this + 0x114) = 1;
      }
      else if (*(int *)(this + 0x114) == 0) goto LAB_03ca6af8;
      iVar1 = FUN_03c9fa10(*(undefined8 *)(this + 0x1c8),*(undefined8 *)(this + 0x1d8));
      if (iVar1 != 0) {
        Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0))
        ;
      }
    }
    else {
      FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
      FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
      pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
      FUN_05476c50(awStack_50);
      nop();
      FUN_05476c50(awStack_58);
      nop();
      FUN_05478178(awStack_58,L"[BACK_TO_MAP]",auStack_60);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnBackToMap);
      Sexy::Delegate0::Delegate0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>
                (aDStack_38,awStack_50);
      PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
      FUN_05476c50(awStack_58);
      nop();
      *(undefined4 *)(this + 0x114) = 2;
      Sexy::Delegate0wRet<float>::InternalInvokeWithTypedReturn((RtInvokeVariant *)(this + 0x1c0));
    }
  }
  else {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178(awStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BACK_TO_MAP]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnBackToMap);
    Sexy::Delegate0::Delegate0<DangerRoomStatScreen,void(DangerRoomStatScreen::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
    *(undefined4 *)(this + 0x114) = 2;
  }
LAB_03ca6af8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::ResetCurrentRewards() */

void DangerRoomStatScreen::ResetCurrentRewards(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  ResourceInfo *pRVar6;
  IntroArenaTutorialBattleModule *this;
  undefined8 uVar7;
  ProfileMgr *this_00;
  ResourceInfo *pRVar8;
  long lVar9;
  string *psVar10;
  wchar16 *pwVar11;
  int *piVar12;
  long *plVar13;
  DangerRoomRewardCard *pDVar14;
  PlantType *this_01;
  PlayerInfo *pPVar15;
  long *plVar16;
  LineBreakCategory *pLVar17;
  LineBreakCategory *pLVar18;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  float fVar22;
  LineBreakCategory aLStack_58 [8];
  LevelEditorCardPlantInterface aLStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<int> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = getRepickSeed();
  ProbabilitySet<int>::ProbabilitySet(aPStack_38,uVar5);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_50);
  do {
    bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                      ((ObjectTypeDirectoryIterator *)aLStack_50);
    if (!bVar2) {
      uVar7 = *(undefined8 *)(in_x0 + 0x220);
      uVar20 = 0;
      uVar5 = FUN_03c9fa40(uVar7,*(undefined8 *)(in_x0 + 0x228));
      if (uVar5 != 0) {
        do {
          plVar13 = (long *)FUN_03c9fa4c(uVar7,uVar20);
          if (*(char *)(*plVar13 + 0x34) == '\0') {
            pDVar14 = (DangerRoomRewardCard *)
                      ProbabilitySet<DangerRoomRewardCard*>::PickItem
                                ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38);
            ProbabilitySet<DangerRoomRewardCard*>::RemoveItem
                      ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38,pDVar14);
            if (*(int *)(pDVar14 + 8) == 1) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_40,(RtWeakPtrBase *)(pDVar14 + 0x10));
              plVar13 = (long *)CreateStandalonePlantAnimRig(aRStack_40,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
              (**(code **)(*plVar13 + 0x1a0))(plVar13,0);
              plVar16 = (long *)FUN_03c9fa4c(*(undefined8 *)(in_x0 + 0x220),uVar20);
              *(long **)(*plVar16 + 0x18) = plVar13;
              plVar13 = (long *)FUN_03c9fa4c(*(undefined8 *)(in_x0 + 0x220),uVar20);
              lVar19 = *plVar13;
              *(undefined4 *)(lVar19 + 8) = *(undefined4 *)(pDVar14 + 8);
              Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                        ((RtWeakPtr<PowerPropertySheet> *)(lVar19 + 0x10),
                         (RtWeakPtr *)(pDVar14 + 0x10));
            }
            (**(code **)(*(long *)pDVar14 + 8))(pDVar14);
            uVar7 = *(undefined8 *)(in_x0 + 0x220);
            uVar5 = FUN_03c9fa40(uVar7,*(undefined8 *)(in_x0 + 0x228));
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar5);
      }
      uVar5 = 0;
      lVar19 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                         ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38);
      if (lVar19 != 0) {
        do {
          pDVar14 = (DangerRoomRewardCard *)
                    ProbabilitySet<DangerRoomRewardCard*>::PickItem
                              ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38);
          ProbabilitySet<DangerRoomRewardCard*>::RemoveItem
                    ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38,pDVar14);
          if (pDVar14 != (DangerRoomRewardCard *)0x0) {
            (**(code **)(*(long *)pDVar14 + 8))(pDVar14);
          }
          uVar5 = uVar5 + 1;
          uVar20 = ProbabilitySet<DangerRoomRewardCard*>::GetSize
                             ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38);
        } while (uVar5 < uVar20);
      }
      pPVar15 = (PlayerInfo *)ProfileUtils::Profile();
      fVar22 = (float)PVZ_RealT();
      LocalProfileSaveData::SetDangerRoomRandomSeed(pPVar15,(int)fVar22);
      pPVar15 = (PlayerInfo *)ProfileUtils::Profile();
      fVar22 = (float)PVZ_RealT();
      LocalProfileSaveData::SetDangerRoomRepickSeed(pPVar15,(int)fVar22);
      ProbabilitySet<DangerRoomRewardCard*>::~ProbabilitySet
                ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ObjectTypeDirectoryIterator<PlantType>::operator*
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_50);
    pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
    if ((pRVar6 != (ResourceInfo *)0x0) && (pRVar6[0x30] != (ResourceInfo)0x0)) {
      pcVar21 = *(code **)(*(long *)pRVar6 + 0x80);
      this = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
      uVar7 = IntroArenaTutorialBattleModule::getMowerAudio(this);
      cVar3 = (*pcVar21)(pRVar6,uVar7);
      if (cVar3 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        uVar7 = ProfileMgr::GetCurrentProfile(this_00);
        cVar3 = ProfileUtils::IsPlantUnlocked(aRStack_40,uVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        if (cVar3 == '\0') {
LAB_03ca6f80:
          bVar2 = false;
        }
        else {
          FUN_03ca2818(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
          DangerRoomModule::GetWorldSpecificPropertySheet();
          pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
          uVar7 = *(undefined8 *)(pRVar8 + 0x28);
          lVar9 = FUN_03c9fa68(uVar7,*(undefined8 *)(pRVar8 + 0x30));
          for (lVar19 = 0; lVar19 != lVar9; lVar19 = lVar19 + 1) {
            psVar10 = (string *)FUN_03c9fa74(uVar7,lVar19);
            cVar3 = std::operator==(psVar10,(string *)(pRVar6 + 8));
            if (cVar3 != '\0') goto LAB_03ca6f80;
          }
          bVar2 = true;
        }
        pwVar11 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
        pLVar18 = aLStack_58;
        pLVar17 = pLVar18;
        std::string::string((string *)aRStack_40,"NoDangerRoomPlants");
        cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          (pwVar11,(wchar16 *)aRStack_40,pLVar17,in_x3,in_x4);
        std::string::~string((string *)aRStack_40);
        nop();
        if (cVar3 == '\0') {
          pwVar11 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
          std::string::string((string *)aRStack_40,"FreePlanting");
          cVar3 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (pwVar11,(wchar16 *)aRStack_40,pLVar18,in_x3,in_x4);
          std::string::~string((string *)aRStack_40);
          nop();
          if ((cVar3 != '\0') || (bVar2)) {
            iVar4 = NameMapperBase::GetIdForName
                              (*(NameMapperBase **)(in_x0 + 0x2c0),(string *)(pRVar6 + 8));
            uVar7 = *(undefined8 *)(in_x0 + 0x130);
            lVar9 = FUN_03c9fa2c(uVar7,*(undefined8 *)(in_x0 + 0x138));
            for (lVar19 = 0; lVar19 != lVar9; lVar19 = lVar19 + 1) {
              piVar12 = (int *)FUN_03c9fa38(uVar7,lVar19);
              if (iVar4 == *piVar12) goto LAB_03ca6cf4;
            }
            uVar7 = *(undefined8 *)(in_x0 + 0x220);
            lVar19 = 0;
            lVar9 = FUN_03c9fa40(uVar7,*(undefined8 *)(in_x0 + 0x228));
            if (lVar9 != 0) {
              do {
                plVar13 = (long *)FUN_03c9fa4c(uVar7,lVar19);
                bVar1 = *(byte *)(*plVar13 + 0x34);
                in_x3 = (LineBreakCategory *)(ulong)bVar1;
                if ((bVar1 != 0) &&
                   (cVar3 = Sexy::RtWeakPtrBase::operator==
                                      ((RtWeakPtrBase *)(*plVar13 + 0x10),
                                       (RtWeakPtrBase *)aRStack_48), cVar3 != '\0'))
                goto LAB_03ca6cf4;
                lVar19 = lVar19 + 1;
              } while (lVar19 != lVar9);
            }
            pDVar14 = ::operator_new(0x40);
            DangerRoomRewardCard::DangerRoomRewardCard(pDVar14);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)(pDVar14 + 0x10),(RtWeakPtr *)aRStack_48);
            *(undefined4 *)(pDVar14 + 8) = 1;
            this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
            lVar19 = PlantType::GetProps(this_01);
            ProbabilitySet<DangerRoomRewardCard*>::AddItem
                      ((ProbabilitySet<DangerRoomRewardCard*> *)aPStack_38,pDVar14,
                       *(int *)(lVar19 + 0xb8));
          }
        }
      }
    }
LAB_03ca6cf4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_50);
  } while( true );
}


/* DangerRoomStatScreen::dealCardsForReset() */

void __thiscall DangerRoomStatScreen::dealCardsForReset(DangerRoomStatScreen *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  ResetCurrentRewards();
  lVar5 = 0;
  *(undefined4 *)(this + 0xf4) = 2;
  uVar7 = PVZ_T();
  uVar6 = *(undefined8 *)(this + 0x2a8);
  *(undefined4 *)(this + 0xe8) = uVar7;
  *(undefined4 *)(this + 0xec) = 0x3f266666;
  lVar1 = FUN_03c9fa54(uVar6,*(undefined8 *)(this + 0x2b0));
  if (lVar1 != 0) {
    do {
      puVar2 = (undefined8 *)FUN_03c9fa60(uVar6,lVar5);
      if ((-1 < *(int *)((long)puVar2 + 0x1c)) &&
         (plVar3 = (long *)FUN_03c9fa4c(*(undefined8 *)(this + 0x220),
                                        (long)*(int *)((long)puVar2 + 0x1c)),
         *(char *)(*plVar3 + 0x34) == '\0')) {
        *(undefined4 *)(puVar2 + 3) = 1;
        puVar2[1] = *puVar2;
        *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(puVar2 + 2);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar1);
  }
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Danger_CardSlide");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomStatScreen::Update() */

void __thiscall DangerRoomStatScreen::Update(DangerRoomStatScreen *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  TransitionOverlayWidget *pTVar4;
  CrazyNPCManager *pCVar5;
  ProfileMgr *this_00;
  PlayerInfo *pPVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  Color aCStack_48 [16];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar7 = (float)PVZ_EOT();
  if (*(float *)(this + 0xe8) < fVar7) {
    fVar8 = (float)PVZ_T();
    iVar2 = *(int *)(this + 0xf4);
    if (fVar8 - *(float *)(this + 0xe8) <= *(float *)(this + 0xec)) goto LAB_03ca727c;
    *(float *)(this + 0xe8) = fVar7;
    if (iVar2 == 9) {
      HighlightRewards(this);
      goto LAB_03ca73a8;
    }
    if (iVar2 != 0xb) {
      if (iVar2 == 0xc) {
        uVar9 = PVZ_T();
        *(undefined4 *)(this + 0xe8) = uVar9;
        *(undefined4 *)(this + 0xec) = 0x3f19999a;
        HighlightMowers(this);
        iVar2 = *(int *)(this + 0xf4);
      }
      else {
        if (1 < iVar2 - 0xdU) {
          if (iVar2 != 0xf) {
            if (iVar2 == 2) {
              flipCards(this);
              iVar2 = *(int *)(this + 0xf4);
            }
            else if (iVar2 == 3) {
              readyCards(this);
              iVar2 = *(int *)(this + 0xf4);
            }
            else if (iVar2 == 4) {
              returnCards(this);
              iVar2 = *(int *)(this + 0xf4);
            }
            else if (iVar2 == 0x11) {
              returnCardsForReset(this);
              iVar2 = *(int *)(this + 0xf4);
            }
            else if (iVar2 == 5) {
              setActiveCardsToState(this,0);
              this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
              pPVar6 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
              cVar1 = PlayerInfo::GameFeatureIsUnlocked(pPVar6,9);
              if (cVar1 == '\0') {
                finalizeRewardAndStartDangerRoom(this);
                iVar2 = *(int *)(this + 0xf4);
              }
              else {
LAB_03ca74b8:
                *(undefined4 *)(this + 0xf4) = 0x10;
                uVar9 = PVZ_T();
                *(undefined4 *)(this + 0xec) = 0x3f800000;
                *(undefined4 *)(this + 0xe8) = uVar9;
                uVar3 = LawnApp::GetTransitionOverlay(gLawnApp);
                Sexy::Color::Color(aCStack_48,1);
                TransitionOverlayWidget::QueueScreenFadeOut
                          ((TransitionOverlayWidget *)0x3f800000,uVar3,2,aCStack_48,1);
                pTVar4 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
                TransitionOverlayWidget::StartTransition(pTVar4);
                iVar2 = *(int *)(this + 0xf4);
              }
            }
            else if (iVar2 == 0x12) {
              setActiveCardsToState(this,0);
              dealCardsForReset(this);
              iVar2 = *(int *)(this + 0xf4);
            }
            else {
              if (iVar2 == 7) goto LAB_03ca74b8;
              if (iVar2 == 0x10) {
                finalizeRewardAndStartDangerRoom(this);
                uVar3 = LawnApp::GetTransitionOverlay(gLawnApp);
                Sexy::Color::Color(aCStack_48,1);
                TransitionOverlayWidget::QueueScreenFadeIn
                          ((TransitionOverlayWidget *)0x3f800000,uVar3,2,aCStack_48,1);
                pTVar4 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
                TransitionOverlayWidget::StartTransition(pTVar4);
                iVar2 = *(int *)(this + 0xf4);
              }
            }
            goto LAB_03ca727c;
          }
          clearFade(this);
          PVZ2UIDialog::SetButtonsVisible(SUB81(*(undefined8 *)(this + 0x298),0));
          pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
          Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
          CrazyNPCManager::SetTutorialMarkerDelegate(pCVar5,aDStack_38);
          *(undefined4 *)(this + 0xf4) = 0;
        }
LAB_03ca73a8:
        pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        CrazyNPCManager::SetNarrativePaused(pCVar5,false);
        pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
        CrazyNPCManager::ContinueNarration(pCVar5);
        iVar2 = *(int *)(this + 0xf4);
      }
      goto LAB_03ca727c;
    }
    clearFade(this);
    pCVar5 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
    CrazyNPCManager::SetTutorialMarkerDelegate(pCVar5,aDStack_38);
    *(undefined4 *)(this + 0xf4) = 1;
  }
  else {
    iVar2 = *(int *)(this + 0xf4);
LAB_03ca727c:
    if (iVar2 != 1) goto LAB_03ca7284;
  }
  dealCards(this);
LAB_03ca7284:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

