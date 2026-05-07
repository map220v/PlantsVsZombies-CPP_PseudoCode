// Class: UniverseMap


/* UniverseMap::IsAbstract() const */

undefined8 UniverseMap::IsAbstract(void)

{
  return 0;
}


/* non-virtual thunk to UniverseMap::IsAbstract() const */

void __thiscall UniverseMap::IsAbstract(UniverseMap *this)

{
  IsAbstract();
  return;
}


/* UniverseMap::DrawOverlay(Sexy::Graphics*) */

void UniverseMap::DrawOverlay(Graphics *param_1)

{
  return;
}


/* non-virtual thunk to UniverseMap::DrawOverlay(Sexy::Graphics*) */

void __thiscall UniverseMap::DrawOverlay(UniverseMap *this,Graphics *param_1)

{
  DrawOverlay((Graphics *)(this + -0x10));
  return;
}


/* UniverseMap::ScrollTargetReached(Sexy::ScrollWidget*) */

void UniverseMap::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UniverseMap::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UniverseMap::ScrollTargetReached(UniverseMap *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xe8));
  return;
}


/* UniverseMap::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UniverseMap::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UniverseMap::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UniverseMap::ScrollTargetInterrupted(UniverseMap *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xe8));
  return;
}


/* UniverseMap::MouseMove(int, int) */

int UniverseMap::MouseMove(int param_1,int param_2)

{
  return param_1;
}


/* non-virtual thunk to UniverseMap::MouseMove(int, int) */

void __thiscall UniverseMap::MouseMove(UniverseMap *this,int param_1,int param_2)

{
  MouseMove((int)this + -0x10,param_1);
  return;
}


/* UniverseMap::KeyChar(wchar_t) */

wchar_t UniverseMap::KeyChar(wchar_t param_1)

{
  return param_1;
}


/* non-virtual thunk to UniverseMap::KeyChar(wchar_t) */

void __thiscall UniverseMap::KeyChar(UniverseMap *this,wchar_t param_1)

{
  KeyChar((int)this + L'\xfffffff0');
  return;
}


/* UniverseMap::KeyDown(Sexy::KeyCode) */

void UniverseMap::KeyDown(void)

{
  return;
}


/* non-virtual thunk to UniverseMap::KeyDown(Sexy::KeyCode) */

void __thiscall UniverseMap::KeyDown(UniverseMap *this)

{
  KeyDown(this + -0x10);
  return;
}


/* UniverseMap::updateState_TransitionToUniverseWaiting() */

void __thiscall UniverseMap::updateState_TransitionToUniverseWaiting(UniverseMap *this)

{
  (**(code **)(*(long *)this + 0xa0))(this,8);
  return;
}


/* UniverseMap::onExitState_TransitionBetweenWorldsOutro(UniverseMapState) */

void UniverseMap::onExitState_TransitionBetweenWorldsOutro(long *param_1)

{
  code *__n;
  
  __n = *(code **)(*param_1 + 0x78);
  (*__n)(param_1,0);
  std::string::append((string *)(param_1 + 0x50),"",(size_t)__n);
  return;
}


/* UniverseMap::OnConfirmPatchDownload() */

void UniverseMap::OnConfirmPatchDownload(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UniverseMap::OnRejectPatchDownload() */

void UniverseMap::OnRejectPatchDownload(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UniverseMap::onEnterState_Gate_Scorlling(MapAnimState) */

void UniverseMap::onEnterState_Gate_Scorlling(long param_1)

{
  long lVar1;
  
  lVar1 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(param_1 + 0x2a8));
  *(float *)(param_1 + 0x2c0) = (float)*(int *)(lVar1 + 0x48);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_Scorlling(MapAnimState) */

void UniverseMap::onEnterState_Scorlling(long param_1)

{
  long lVar1;
  UIWidget *pUVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(param_1 + 0x2a8));
  *(float *)(param_1 + 0x2c0) = (float)*(int *)(lVar1 + 0x48);
  std::string::string(asStack_10,"UIWorldMapBackButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_10,"UIWorldMapCoinBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::onEnterState_TransitionToUniverseIntro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionToUniverseIntro(long *param_1)

{
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  (**(code **)(*param_1 + 0x78))(param_1,1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),param_1 + 2);
  LawnApp::PushOverlaysToTop(gLawnApp);
  return;
}


/* UniverseMap::OnDoSnap(UniverseWorldButton*) */

void __thiscall UniverseMap::OnDoSnap(UniverseMap *this,UniverseWorldButton *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (UniverseWorldButton *)0x0) {
    uVar1 = FUN_044d558c(*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(this + 0x290) = uVar1;
  }
  return;
}


/* UniverseMap::updateState_Ready() */

void __thiscall UniverseMap::updateState_Ready(UniverseMap *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (this[0x7c] != (UniverseMap)0x0) {
    UIWidget::UpdateUI();
    uVar4 = 0;
    uVar5 = *(undefined8 *)(this + 0x328);
    uVar1 = FUN_044d55f4(uVar5,*(undefined8 *)(this + 0x330));
    while (uVar3 = uVar4, uVar4 < uVar1) {
      while( true ) {
        uVar4 = uVar3 + 1;
        plVar2 = (long *)FUN_044d5600(uVar5,uVar3);
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) break;
        (**(code **)(*plVar2 + 0x108))(plVar2);
        uVar5 = *(undefined8 *)(this + 0x328);
        uVar1 = FUN_044d55f4(uVar5,*(undefined8 *)(this + 0x330));
        uVar3 = uVar4;
        if (uVar1 <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}


/* UniverseMap::onEnterState_Ready(UniverseMapState) */

void __thiscall UniverseMap::onEnterState_Ready(undefined8 param_1,int param_2)

{
  if (param_2 != 8) {
    return;
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* UniverseMap::updateState_TransitionToWorldWaiting() */

void __thiscall UniverseMap::updateState_TransitionToWorldWaiting(UniverseMap *this)

{
  char cVar1;
  WorldMap *pWVar2;
  
  pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar1 = WorldMap::CanBeClosed(pWVar2);
  if (cVar1 != '\0') {
    pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::CenterOnMapEvent(pWVar2,(string *)(this + 0x280),false);
    (**(code **)(*(long *)this + 0xa0))(this,5);
  }
  return;
}


/* UniverseMap::onEnterState_TransitionBetweenWorldsWaiting(UniverseMapState) */

void UniverseMap::onEnterState_TransitionBetweenWorldsWaiting(long param_1)

{
  WorldMap *this;
  
  this = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::CenterOnMapEvent(this,(string *)(param_1 + 0x280),false);
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  return;
}


/* UniverseMap::updateState_TransitionBetweenWorldsWaiting() */

void __thiscall UniverseMap::updateState_TransitionBetweenWorldsWaiting(UniverseMap *this)

{
  char cVar1;
  WorldMap *pWVar2;
  
  pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar1 = WorldMap::CanBeClosed(pWVar2);
  if (cVar1 != '\0') {
    pWVar2 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
    WorldMap::CenterOnMapEvent(pWVar2,(string *)(this + 0x280),false);
    (**(code **)(*(long *)this + 0xa0))(this,0xb);
  }
  return;
}


/* UniverseMap::SetMouseDownPos(Sexy::Point const&) */

void __thiscall UniverseMap::SetMouseDownPos(UniverseMap *this,Point *param_1)

{
  *(undefined8 *)(this + 0x260) = *(undefined8 *)param_1;
  return;
}


/* UniverseMap::SetStartingMouseDownPos(Sexy::Point const&) */

void __thiscall UniverseMap::SetStartingMouseDownPos(UniverseMap *this,Point *param_1)

{
  *(undefined8 *)(this + 600) = *(undefined8 *)param_1;
  this[0x268] = (UniverseMap)0x0;
  SetMouseDownPos(this,param_1);
  FUN_044d5514(this + 0x269,1);
  return;
}


/* UniverseMap::StaticGetClass() */

long * UniverseMap::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"UniverseMap",uVar2,StaticNew);
  return sClass;
}


/* UniverseMap::GetClass() const */

long * UniverseMap::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"UniverseMap",uVar2,StaticNew);
  return sClass;
}


/* non-virtual thunk to UniverseMap::GetClass() const */

void __thiscall UniverseMap::GetClass(UniverseMap *this)

{
  GetClass();
  return;
}


/* UniverseMap::HideWorlds() */

void __thiscall UniverseMap::HideWorlds(UniverseMap *this)

{
  (**(code **)(**(long **)(this + 0x2a8) + 0x158))(*(long **)(this + 0x2a8),0);
  return;
}


/* UniverseMap::ShowWorlds() */

void __thiscall UniverseMap::ShowWorlds(UniverseMap *this)

{
  (**(code **)(**(long **)(this + 0x2a8) + 0x158))(*(long **)(this + 0x2a8),1);
  return;
}


/* UniverseMap::IsAdvertisementEnable() */

void UniverseMap::IsAdvertisementEnable(void)

{
  LawnApp::GetAdsStatus(gLawnApp,3);
  return;
}


/* UniverseMap::RemoveAdvertisement() */

void UniverseMap::RemoveAdvertisement(void)

{
  char cVar1;
  long *plVar2;
  
  plVar2 = (long *)EASquared::Instance();
  (**(code **)(*plVar2 + 0x40))(plVar2,1);
  cVar1 = IsAdvertisementEnable();
  if (cVar1 != '\0') {
    Sexy::OutputDebugStrF((wchar_t *)"UniverseMap::RemoveAdvertisement");
    plVar2 = (long *)EASquared::Instance();
    (**(code **)(*plVar2 + 0x40))(plVar2,0x3d);
  }
  return;
}


/* UniverseMap::onEnterState_TransitionToWorldIntro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionToWorldIntro(void)

{
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  RemoveAdvertisement();
  return;
}


/* UniverseMap::ClearEnteredUniverseFlag() */

void __thiscall UniverseMap::ClearEnteredUniverseFlag(UniverseMap *this)

{
  this[0x295] = (UniverseMap)0x0;
  return;
}


/* UniverseMap::GetHasEnteredUniverseFlag() const */

UniverseMap __thiscall UniverseMap::GetHasEnteredUniverseFlag(UniverseMap *this)

{
  return this[0x295];
}


/* UniverseMap::initializeWorldButtonState() */

void __thiscall UniverseMap::initializeWorldButtonState(UniverseMap *this)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = EA::Thread::Mutex::GetLockCount((Mutex *)(this + 0x2e8));
  plVar2 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),(long)iVar1);
  FUN_044d55c8(*plVar2 + 0x214,0xff);
  iVar1 = EA::Thread::Mutex::GetLockCount((Mutex *)(this + 0x2e8));
  plVar2 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),(long)iVar1);
  FUN_044d55d8(*plVar2 + 0x220,*plVar2 + 0x224);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x328);
    uVar3 = FUN_044d55f4(uVar5,*(undefined8 *)(this + 0x330));
    if (uVar3 <= uVar4) break;
    plVar2 = (long *)FUN_044d5600(uVar5,uVar4);
    FUN_044d57f0(*plVar2 + 0x21c);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* UniverseMap::TransitionToWorld() */

void __thiscall UniverseMap::TransitionToWorld(UniverseMap *this)

{
  (**(code **)(*(long *)this + 0xa0))(this,3);
  return;
}


/* UniverseMap::IsTransitioning() */

bool __thiscall UniverseMap::IsTransitioning(UniverseMap *this)

{
  int iVar1;
  
  iVar1 = FUN_044d56d8(*(undefined4 *)(this + 0x100));
  return iVar1 - 3U < 9;
}


/* UniverseMap::getState() const */

void __thiscall UniverseMap::getState(UniverseMap *this)

{
  FUN_044d56d8(*(undefined4 *)(this + 0x100));
  return;
}


/* UniverseMap::IsLoaded() */

bool __thiscall UniverseMap::IsLoaded(UniverseMap *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  return iVar1 != 0;
}


/* UniverseMap::PrepForLoading() */

void __thiscall UniverseMap::PrepForLoading(UniverseMap *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  if (iVar1 != -1) {
    return;
  }
  (**(code **)(*(long *)this + 0x90))(this);
  (**(code **)(*(long *)this + 0xa0))(this,0);
  return;
}


/* UniverseMap::isInState(unsigned int) const */

bool __thiscall UniverseMap::isInState(UniverseMap *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_044d56d8(*(undefined4 *)(this + 0x100));
  return uVar1 == param_1;
}


/* UniverseMap::CanBeClosed() */

void __thiscall UniverseMap::CanBeClosed(UniverseMap *this)

{
  isInState(this,2);
  return;
}


/* UniverseMap::isInState(MapAnimState) const */

bool __thiscall UniverseMap::isInState(UniverseMap *this,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_044d5724(*(undefined4 *)(this + 0x1a0));
  return iVar1 == param_2;
}


/* UniverseMap::DecideGateFullUnlockAnim() */

void UniverseMap::DecideGateFullUnlockAnim(void)

{
  long in_x0;
  long *plVar1;
  long lVar2;
  size_t in_x2;
  string *in_x8;
  
  Set8BytesTo0();
  plVar1 = (long *)FUN_044d5710(*(undefined8 *)(in_x0 + 0x340),(long)*(int *)(in_x0 + 0x35c));
  lVar2 = FUN_044d56dc(*(undefined8 *)(*plVar1 + 0xd8),*(undefined8 *)(*plVar1 + 0xe0));
  if (lVar2 == 1) {
    std::string::append(in_x8,"idle_1_1",in_x2);
  }
  else if (lVar2 == 2) {
    std::string::append(in_x8,"idle_2_1",in_x2);
  }
  else if (lVar2 == 3) {
    std::string::append(in_x8,"idle_3_1",in_x2);
    return;
  }
  return;
}


/* UniverseMap::HideAnims() */

void __thiscall UniverseMap::HideAnims(UniverseMap *this)

{
  if (*(UniverseScrollingArea **)(this + 0x2a0) != (UniverseScrollingArea *)0x0) {
    UniverseScrollingArea::HideAnims(*(UniverseScrollingArea **)(this + 0x2a0));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::ScrollTouchEnd(Sexy::Touch const&) */

void UniverseMap::ScrollTouchEnd(Touch *param_1)

{
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[800] != (Touch)0x0) {
    DVec2::DVec2(aDStack_10,20.0,0.0);
    Sexy::ScrollWidget::SetScrollVelocity(*(ScrollWidget **)(param_1 + 0x2a8),(FPoint *)aDStack_10);
    UniverseMapScrollSnapper::DoSnap
              ((UniverseMapScrollSnapper *)(param_1 + 0x2e8),*(ScrollWidget **)(param_1 + 0x2a8));
  }
  param_1[800] = (Touch)0x1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UniverseMap::ScrollTouchEnd(Sexy::Touch const&) */

void __thiscall UniverseMap::ScrollTouchEnd(UniverseMap *this,Touch *param_1)

{
  ScrollTouchEnd((Touch *)(this + -0xe8));
  return;
}


/* UniverseMap::NeedPlayTargetWorldUnlockAnim(std::string const&) */

char __thiscall UniverseMap::NeedPlayTargetWorldUnlockAnim(UniverseMap *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x2c8);
  lVar2 = FUN_044d56dc(uVar5,*(undefined8 *)(this + 0x2d0));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return '\0';
    }
    psVar3 = (string *)FUN_044d56e8(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::GetButtonForWorld(std::string const&) */

void __thiscall UniverseMap::GetButtonForWorld(UniverseMap *this,string *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMapList(gLawnApp);
  uVar8 = 0;
  uVar4 = *(undefined8 *)(this + 0x328);
  for (uVar7 = 0; auVar9 = FUN_044d55f4(uVar4,*(undefined8 *)(this + 0x330)), uVar7 < auVar9._0_8_;
      uVar7 = uVar7 + 1) {
    Sexy::StringToUpper((Sexy *)param_1,auVar9._8_8_);
    plVar5 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar7);
    iVar2 = FUN_044d558c(*(undefined4 *)(*plVar5 + 0x1ac));
    auVar9 = FUN_044d56c8(*(undefined8 *)(lVar3 + 8),(long)iVar2);
    Sexy::StringToUpper(auVar9._0_8_,auVar9._8_8_);
    cVar1 = std::operator==(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_18);
    if (cVar1 == '\0') {
      uVar4 = *(undefined8 *)(this + 0x328);
    }
    else {
      uVar4 = *(undefined8 *)(this + 0x328);
      puVar6 = (undefined8 *)FUN_044d5600(uVar4,uVar7);
      uVar8 = *puVar6;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* UniverseMap::SetRevealedWorlds() */

void __thiscall UniverseMap::SetRevealedWorlds(UniverseMap *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  string *psVar4;
  UniverseWorldButton *this_00;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar2 = (long *)FUN_044d5710(*(undefined8 *)(this + 0x340),(long)*(int *)(this + 0x35c));
  lVar7 = *plVar2;
  uVar5 = 0;
  if (lVar7 != 0) {
    while( true ) {
      uVar6 = *(undefined8 *)(lVar7 + 0xf0);
      uVar3 = FUN_044d56dc(uVar6,*(undefined8 *)(lVar7 + 0xf8));
      uVar1 = uVar5 + 1;
      if (uVar3 <= uVar5) break;
      psVar4 = (string *)FUN_044d56e8(uVar6,uVar5);
      this_00 = (UniverseWorldButton *)GetButtonForWorld(this,psVar4);
      uVar5 = uVar1;
      if (this_00 != (UniverseWorldButton *)0x0) {
        UniverseWorldButton::SetIsRevealed(this_00,true);
      }
    }
  }
  return;
}


/* UniverseMap::SetPlayUnlockedWorlds() */

void __thiscall UniverseMap::SetPlayUnlockedWorlds(UniverseMap *this)

{
  ulong uVar1;
  ulong uVar2;
  string *psVar3;
  UniverseWorldButton *this_00;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(this + 0x2c8);
    uVar2 = FUN_044d56dc(uVar5,*(undefined8 *)(this + 0x2d0));
    uVar1 = uVar4 + 1;
    if (uVar2 <= uVar4) break;
    psVar3 = (string *)FUN_044d56e8(uVar5,uVar4);
    this_00 = (UniverseWorldButton *)GetButtonForWorld(this,psVar3);
    uVar4 = uVar1;
    if (this_00 != (UniverseWorldButton *)0x0) {
      UniverseWorldButton::SetPlayUnlockAnim(this_00,true);
    }
  }
  return;
}


/* UniverseMap::SetPlayRevealedWorlds() */

void __thiscall UniverseMap::SetPlayRevealedWorlds(UniverseMap *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  string *psVar4;
  UniverseWorldButton *this_00;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  plVar2 = (long *)FUN_044d5710(*(undefined8 *)(this + 0x340),(long)*(int *)(this + 0x35c));
  lVar7 = *plVar2;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(lVar7 + 0xf0);
    uVar3 = FUN_044d56dc(uVar6,*(undefined8 *)(lVar7 + 0xf8));
    uVar1 = uVar5 + 1;
    if (uVar3 <= uVar5) break;
    psVar4 = (string *)FUN_044d56e8(uVar6,uVar5);
    this_00 = (UniverseWorldButton *)GetButtonForWorld(this,psVar4);
    uVar5 = uVar1;
    if (this_00 != (UniverseWorldButton *)0x0) {
      UniverseWorldButton::SetPlayRevealAnim(this_00,true);
    }
  }
  return;
}


/* UniverseMap::EnterDangerRoomTrainingLevel() */

void UniverseMap::EnterDangerRoomTrainingLevel(void)

{
  string *psVar1;
  DangerRoomManager *this;
  
  Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::CloseMainDialog();
  psVar1 = (string *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetCurrentTrainingWorld(psVar1);
  this = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::EnterLevel(this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::setupMapUI() */

void UniverseMap::setupMapUI(void)

{
  char cVar1;
  long *extraout_x0;
  UIWidget *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIWorldMapCoinBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,2);
  if (cVar1 == '\0') {
    (**(code **)(*extraout_x0 + 0x198))(extraout_x0);
  }
  else {
    (**(code **)(*extraout_x0 + 0x198))(extraout_x0,1);
  }
  std::string::string(asStack_10,"UIWorldMapGemBank");
  UIWidget::GetWidgetBySheetName(asStack_10);
  nop();
  std::string::~string(asStack_10);
  nop();
  cVar1 = LawnApp::HasPlayerUnlockedFeature(gLawnApp,3);
  if (cVar1 == '\0') {
    UIWidget::SetVisible(this,false);
  }
  else {
    UIWidget::SetVisible(this,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::updateStateMachine() */

void __thiscall UniverseMap::updateStateMachine(UniverseMap *this)

{
  int iVar1;
  
  iVar1 = getState(this);
  if (iVar1 != -1) {
    StateMachine<UniverseMapState>::UpdateState((StateMachine<UniverseMapState> *)(this + 0x100));
    return;
  }
  return;
}


/* UniverseMap::Update() */

void __thiscall UniverseMap::Update(UniverseMap *this)

{
  char cVar1;
  
  updateStateMachine(this);
  cVar1 = isInState(this,0xffffffff);
  if (cVar1 != '\0') {
    return;
  }
  StateMachine<UniverseMapState>::UpdateState((StateMachine<UniverseMapState> *)(this + 0x1a0));
  return;
}


/* non-virtual thunk to UniverseMap::Update() */

void __thiscall UniverseMap::Update(UniverseMap *this)

{
  Update(this + -0x10);
  return;
}


/* UniverseMap::imageResourceUninitialize() */

void __thiscall UniverseMap::imageResourceUninitialize(UniverseMap *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  (**(code **)(**(long **)(this + 0x2a0) + 0x80))(*(long **)(this + 0x2a0),0,0);
  (**(code **)(**(long **)(this + 0x2a8) + 0x80))(*(long **)(this + 0x2a8),0,0);
  uVar5 = *(undefined8 *)(this + 0x328);
  uVar1 = FUN_044d55f4(uVar5,*(undefined8 *)(this + 0x330));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_044d5600(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puVar3 = (undefined8 *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x328);
        uVar1 = FUN_044d55f4(uVar5,*(undefined8 *)(this + 0x330));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar4 = 0;
  std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::clear
            ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)(this + 0x328));
  uVar5 = *(undefined8 *)(this + 0x340);
  uVar1 = FUN_044d5718(uVar5,*(undefined8 *)(this + 0x348));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_044d5710(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puVar3 = (undefined8 *)FUN_044d5710(*(undefined8 *)(this + 0x340),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x340);
        uVar1 = FUN_044d5718(uVar5,*(undefined8 *)(this + 0x348));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<UniverseUnlockGate*,std::allocator<UniverseUnlockGate*>>::clear
            ((vector<UniverseUnlockGate*,std::allocator<UniverseUnlockGate*>> *)(this + 0x340));
  (**(code **)(*(long *)(this + 0x10) + 0x68))(this + 0x10,*(undefined8 *)(this + 0x2a0));
  (**(code **)(*(long *)(this + 0x10) + 0x68))(this + 0x10,*(undefined8 *)(this + 0x2b8));
  if (*(long **)(this + 0x2a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2a0) + 0x18))();
    *(undefined8 *)(this + 0x2a0) = 0;
  }
  if (*(long **)(this + 0x2b8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2b8) + 0x18))();
    *(undefined8 *)(this + 0x2b8) = 0;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::unloadImageResource() */

void __thiscall UniverseMap::unloadImageResource(UniverseMap *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_WorldMap");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Universe_Gate");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe_Map");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this[0x294] != (UniverseMap)0x0) {
    imageResourceUninitialize(this);
    this[0x294] = (UniverseMap)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::onExitState_TransitionToWorldOutro(UniverseMapState) */

void UniverseMap::onExitState_TransitionToWorldOutro(UniverseMap *param_1)

{
  code *__n;
  
  __n = *(code **)(*(long *)param_1 + 0x78);
  (*__n)(param_1,0);
  std::string::append((string *)(param_1 + 0x280),"",(size_t)__n);
  unloadImageResource(param_1);
  return;
}


/* UniverseMap::updateState_TransitionToWorldIntro() */

void __thiscall UniverseMap::updateState_TransitionToWorldIntro(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 0.4 <= fVar1) {
    (**(code **)(*(long *)this + 0xa0))(this,4);
  }
  return;
}


/* UniverseMap::updateState_TransitionToWorldOutro() */

void __thiscall UniverseMap::updateState_TransitionToWorldOutro(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 0.4 <= fVar1) {
    (**(code **)(*(long *)this + 0xa0))(this,0);
  }
  return;
}


/* UniverseMap::updateState_TransitionToUniverseIntro() */

void __thiscall UniverseMap::updateState_TransitionToUniverseIntro(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 0.4 <= fVar1) {
    (**(code **)(*(long *)this + 0xa0))(this,7);
  }
  return;
}


/* UniverseMap::updateState_TransitionBetweenWorldsOutro() */

void __thiscall UniverseMap::updateState_TransitionBetweenWorldsOutro(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 0.4 <= fVar1) {
    (**(code **)(*(long *)this + 0xa0))(this,2);
  }
  return;
}


/* UniverseMap::updateState_TransitionBetweenWorldsIntro() */

void __thiscall UniverseMap::updateState_TransitionBetweenWorldsIntro(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 0.4 <= fVar1) {
    (**(code **)(*(long *)this + 0xa0))(this,10);
  }
  return;
}


/* UniverseMap::onEnterState_After_Unlocking(MapAnimState) */

void UniverseMap::onEnterState_After_Unlocking(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  return;
}


/* UniverseMap::SetVisible(bool) */

void __thiscall UniverseMap::SetVisible(UniverseMap *this,bool param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  float fVar1;
  
  if (this[0x7c] != (UniverseMap)param_1) {
    Sexy::Widget::SetVisible((Widget *)(this + 0x10),param_1);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      fVar1 = (float)PlayerInfo::GetLastWorldMapZoomLevel(this_01);
      PlayerInfo::SetWorldMapZoomData(this_01,fVar1,param_1);
      return;
    }
  }
  return;
}


/* non-virtual thunk to UniverseMap::SetVisible(bool) */

void __thiscall UniverseMap::SetVisible(UniverseMap *this,bool param_1)

{
  SetVisible(this + -0x10,param_1);
  return;
}


/* UniverseMap::UnlockAllLevels() */

void UniverseMap::UnlockAllLevels(void)

{
  ProfileMgr *pPVar1;
  long lVar2;
  PlayerInfo *pPVar3;
  
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(pPVar1);
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar1);
  ProfileUtils::CompleteAllLevels(lVar2 != 0,pPVar3);
  return;
}


/* UniverseMap::syncButtonStates() */

void __thiscall UniverseMap::syncButtonStates(UniverseMap *this)

{
  char cVar1;
  int iVar2;
  WorldMapList *this_00;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  string *psVar6;
  ProfileMgr *this_01;
  PlayerInfo *pPVar7;
  WorldMapEventAlert *this_02;
  undefined8 uVar8;
  long lVar9;
  UniverseWorldButton *this_03;
  
  this_00 = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar8 = *(undefined8 *)(this + 0x328);
  lVar3 = FUN_044d55f4(uVar8,*(undefined8 *)(this + 0x330));
  if (lVar3 == 0) {
    return;
  }
  lVar9 = 0;
  do {
    puVar5 = (undefined8 *)FUN_044d5600(uVar8,lVar9);
    this_03 = (UniverseWorldButton *)*puVar5;
    iVar2 = FUN_044d558c(*(undefined4 *)(this_03 + 0x1ac));
    psVar6 = (string *)FUN_044d56b8(*(undefined8 *)(this_00 + 8),(long)iVar2);
    cVar1 = WorldMapList::IsWorldComingSoon(this_00,psVar6);
    if (cVar1 == '\0') {
      UniverseWorldButton::SetIsRevealed(this_03,true);
      psVar6 = (string *)FUN_044d56b8(*(undefined8 *)(this_00 + 8),(long)iVar2);
      cVar1 = FUN_0547419c(psVar6 + 8);
      if (cVar1 == '\0') {
        this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
        cVar1 = ProfileUtils::IsWorldUnlocked(psVar6,pPVar7);
        if (cVar1 == '\0') {
          UniverseWorldButton::SetIsUnlockable(this_03,true);
          goto LAB_044d7ba4;
        }
      }
      UniverseWorldButton::SetUnlocked(this_03,true);
    }
    else {
      UniverseWorldButton::SetIsComingSoon(this_03,true);
    }
LAB_044d7ba4:
    plVar4 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),lVar9);
    uVar8 = *(undefined8 *)(*plVar4 + 0x1d0);
    cVar1 = FUN_044d5578(uVar8);
    if (cVar1 != '\0') {
      this_02 = (WorldMapEventAlert *)FUN_044d55bc(uVar8);
      WorldMapEventAlert::ShowBadge(this_02);
    }
    if (lVar9 + 1 == lVar3) {
      return;
    }
    lVar9 = lVar9 + 1;
    uVar8 = *(undefined8 *)(this + 0x328);
  } while( true );
}


/* UniverseMap::onStargatePurchased(MapEventItem const*) */

void UniverseMap::onStargatePurchased(MapEventItem *param_1)

{
  char cVar1;
  int iVar2;
  WorldMapList *this;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  string *psVar6;
  ProfileMgr *this_00;
  PlayerInfo *pPVar7;
  WorldMapEventAlert *this_01;
  undefined8 uVar8;
  long lVar9;
  UniverseWorldButton *this_02;
  
  this = (WorldMapList *)WorldMapUtils::GetWorldMapList();
  uVar8 = *(undefined8 *)(param_1 + 0x328);
  lVar3 = FUN_044d55f4(uVar8,*(undefined8 *)(param_1 + 0x330));
  if (lVar3 == 0) {
    return;
  }
  lVar9 = 0;
  do {
    puVar5 = (undefined8 *)FUN_044d5600(uVar8,lVar9);
    this_02 = (UniverseWorldButton *)*puVar5;
    iVar2 = FUN_044d558c(*(undefined4 *)(this_02 + 0x1ac));
    psVar6 = (string *)FUN_044d56b8(*(undefined8 *)(this + 8),(long)iVar2);
    cVar1 = WorldMapList::IsWorldComingSoon(this,psVar6);
    if (cVar1 == '\0') {
      UniverseWorldButton::SetIsRevealed(this_02,true);
      psVar6 = (string *)FUN_044d56b8(*(undefined8 *)(this + 8),(long)iVar2);
      cVar1 = FUN_0547419c(psVar6 + 8);
      if (cVar1 == '\0') {
        this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
        cVar1 = ProfileUtils::IsWorldUnlocked(psVar6,pPVar7);
        if (cVar1 == '\0') {
          UniverseWorldButton::SetIsUnlockable(this_02,true);
          goto LAB_044d7ba4;
        }
      }
      UniverseWorldButton::SetUnlocked(this_02,true);
    }
    else {
      UniverseWorldButton::SetIsComingSoon(this_02,true);
    }
LAB_044d7ba4:
    plVar4 = (long *)FUN_044d5600(*(undefined8 *)(param_1 + 0x328),lVar9);
    uVar8 = *(undefined8 *)(*plVar4 + 0x1d0);
    cVar1 = FUN_044d5578(uVar8);
    if (cVar1 != '\0') {
      this_01 = (WorldMapEventAlert *)FUN_044d55bc(uVar8);
      WorldMapEventAlert::ShowBadge(this_01);
    }
    if (lVar9 + 1 == lVar3) {
      return;
    }
    lVar9 = lVar9 + 1;
    uVar8 = *(undefined8 *)(param_1 + 0x328);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_UnlockTutorial(UniverseMapState) */

void __thiscall UniverseMap::onEnterState_UnlockTutorial(UniverseMap *this,undefined4 param_2)

{
  int iVar1;
  UIWidget *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x78))(this,1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),this + 0x10);
  LawnApp::PushOverlaysToTop(gLawnApp);
  (**(code **)(*(long *)this + 0x150))(this,param_2);
  syncButtonStates(this);
  (**(code **)(**(long **)(this + 0x2a8) + 0x158))(*(long **)(this + 0x2a8),1);
  *(uint *)(*(long *)(this + 0x2a8) + 0x60) = *(uint *)(*(long *)(this + 0x2a8) + 0x60) | 0x10;
  std::string::string(asStack_10,"UIWorldMapBackButton");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_00,false);
  }
  iVar1 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
  UniverseMapScrollSnapper::SnapToIndex
            ((UniverseMapScrollSnapper *)(this + 0x2e8),iVar1 + -4,*(ScrollWidget **)(this + 0x2a8),
             false);
  UniverseMapScrollSnapper::SnapToIndex
            ((UniverseMapScrollSnapper *)(this + 0x2e8),4,*(ScrollWidget **)(this + 0x2a8),true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::TransToWorldByName(std::string) */

void __thiscall UniverseMap::TransToWorldByName(UniverseMap *this,string *param_2)

{
  string *psVar1;
  char cVar2;
  ProfileMgr *this_00;
  string *psVar3;
  WorldMap *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar4;
  
  psVar1 = (string *)(this + 0x280);
  LawnApp::GetWorldMapList(gLawnApp);
  cVar2 = FUN_0547419c(psVar1);
  if ((cVar2 != '\0') &&
     (this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)WorldMapUtils::GetLevelToCenterOnInWorld(param_2),
     this_02 !=
     (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      *)0x0)) {
    uVar4 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_02);
    thunk_FUN_05475e00(psVar1,uVar4);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar3 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  if (psVar3 != (string *)0x0) {
    PlayerInfo::SetLastWorldName(psVar3);
  }
  this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::CenterOnMapEvent(this_01,psVar1,false);
  TransitionToWorld(this);
  return;
}


/* UniverseMap::enterWorld(int) */

void __thiscall UniverseMap::enterWorld(UniverseMap *this,int param_1)

{
  string *psVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this_00;
  string *psVar4;
  WorldMap *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar5;
  
  if (*(WorldMapEventAlert **)(this + 0x288) != (WorldMapEventAlert *)0x0) {
    WorldMapEventAlert::HideBadge(*(WorldMapEventAlert **)(this + 0x288));
  }
  psVar1 = (string *)(this + 0x280);
  lVar3 = LawnApp::GetWorldMapList(gLawnApp);
  cVar2 = FUN_0547419c(psVar1);
  if (cVar2 != '\0') {
    psVar4 = (string *)FUN_044d56c8(*(undefined8 *)(lVar3 + 8),(long)param_1);
    this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)WorldMapUtils::GetLevelToCenterOnInWorld(psVar4);
    if (this_02 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) {
      uVar5 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_rightmost(this_02);
      thunk_FUN_05475e00(psVar1,uVar5);
    }
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar4 = (string *)ProfileMgr::GetCurrentProfile(this_00);
  if (psVar4 != (string *)0x0) {
    FUN_044d56c8(*(undefined8 *)(lVar3 + 8),(long)param_1);
    PlayerInfo::SetLastWorldName(psVar4);
  }
  this_01 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  WorldMap::CenterOnMapEvent(this_01,psVar1,false);
  TransitionToWorld(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::EnterWorldByName(std::string) */

void __thiscall UniverseMap::EnterWorldByName(UniverseMap *this,Sexy *param_2)

{
  TextureInfo *pTVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  string asStack_10 [8];
  string *local_8;
  
  pTVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  Sexy::StringToLower(param_2,___stack_chk_guard);
  cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar1);
  std::string::~string(asStack_10);
  if (cVar2 != '\0') {
    lVar3 = GetButtonForWorld(this,(string *)param_2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x1d0);
      cVar2 = FUN_044d5578(uVar4);
      if (cVar2 != '\0') {
        lVar3 = FUN_044d55bc(uVar4);
        lVar3 = FUN_044d5574(*(undefined8 *)(lVar3 + 0x298));
        thunk_FUN_05475e00(this + 0x280,lVar3 + 0x20);
      }
    }
    enterWorld(this,*(int *)(this + 0x290));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::HasPlayedTargetWorldAnim(std::string const&) */

void __thiscall UniverseMap::HasPlayedTargetWorldAnim(UniverseMap *this,string *param_1)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    PlayerInfo::HasTargetWorldPlayedAnim(this_01,param_1);
    return;
  }
  return;
}


/* UniverseMap::DecideGateActivtingAnim() */

void UniverseMap::DecideGateActivtingAnim(void)

{
  char cVar1;
  UniverseMap *in_x0;
  long *plVar2;
  long lVar3;
  string *psVar4;
  ulong uVar5;
  size_t in_x2;
  string *in_x8;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  Set8BytesTo0();
  plVar2 = (long *)FUN_044d5710(*(undefined8 *)(in_x0 + 0x340),(long)*(int *)(in_x0 + 0x35c));
  lVar7 = *plVar2;
  uVar6 = *(undefined8 *)(lVar7 + 0xd8);
  lVar3 = FUN_044d56dc(uVar6,*(undefined8 *)(lVar7 + 0xe0));
  if (lVar3 == 1) {
    std::string::append(in_x8,"light_1",in_x2);
  }
  else {
    if (lVar3 == 2) {
      uVar5 = 2;
      uVar8 = 0;
      while( true ) {
        if (uVar5 <= uVar8) {
          std::string::append(in_x8,"light_2_1",uVar5);
          return;
        }
        psVar4 = (string *)FUN_044d56e8(uVar6,uVar8);
        cVar1 = HasPlayedTargetWorldAnim(in_x0,psVar4);
        if (cVar1 != '\0') break;
        uVar6 = *(undefined8 *)(lVar7 + 0xd8);
        uVar5 = FUN_044d56dc(uVar6,*(undefined8 *)(lVar7 + 0xe0));
        uVar8 = uVar8 + 1;
      }
      std::string::append(in_x8,"light_2_2",uVar5);
      return;
    }
    if (lVar3 == 3) {
      uVar5 = 3;
      uVar8 = 0;
      while( true ) {
        if (uVar5 <= uVar8) {
          std::string::append(in_x8,"light_3_1",uVar5);
          return;
        }
        psVar4 = (string *)FUN_044d56e8(uVar6,uVar8);
        cVar1 = HasPlayedTargetWorldAnim(in_x0,psVar4);
        if (cVar1 != '\0') break;
        uVar6 = *(undefined8 *)(lVar7 + 0xd8);
        uVar5 = FUN_044d56dc(uVar6,*(undefined8 *)(lVar7 + 0xe0));
        uVar8 = uVar8 + 1;
      }
      std::string::append(in_x8,"light_3_2",uVar5);
      return;
    }
  }
  return;
}


/* UniverseMap::onEnterState_TransitionBetweenWorldsOutro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionBetweenWorldsOutro(void)

{
  ProfileMgr *this;
  string *psVar1;
  
  MessageRouter::Post((_func_void *)gMessageRouter);
  BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar1 = (string *)ProfileMgr::GetCurrentProfile(this);
  if (psVar1 != (string *)0x0) {
    PlayerInfo::SetCurrentLevel(psVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::LoadSandboxLevel(std::string) */

void __thiscall UniverseMap::LoadSandboxLevel(undefined8 param_1,undefined8 param_2)

{
  ProfileMgr *pPVar1;
  string *psVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(pPVar1);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  GameStateMgr::StartLevel(gGameStateMgr,&DAT_06b0df30,param_2,0xffffffff,0,0,0);
  pPVar1 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  psVar2 = (string *)ProfileMgr::GetCurrentProfile(pPVar1);
  PlayerInfo::SetCurrentLevel(psVar2);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::enterWorldAction(int) */

void __thiscall UniverseMap::enterWorldAction(UniverseMap *this,int param_1)

{
  TextureInfo *pTVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  UIWidget *pUVar5;
  undefined1 auVar6 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x290) = param_1;
  local_8 = ___stack_chk_guard;
  lVar3 = LawnApp::GetWorldMapList(gLawnApp);
  pTVar1 = (TextureInfo *)gLawnApp;
  auVar6 = FUN_044d56b8(*(undefined8 *)(lVar3 + 8),(long)param_1);
  Sexy::StringToLower(auVar6._0_8_,auVar6._8_8_);
  cVar2 = EA::Text::GlyphCache_Memory::EndUpdate(pTVar1);
  std::string::~string(asStack_10);
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"");
    nop();
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if (this_01 != (PlayerInfo *)0x0) {
      uVar4 = PlayerInfo::GetLastWorldName(this_01);
      thunk_FUN_05475e00(asStack_18,uVar4);
    }
    auVar6 = FUN_044d56b8(*(undefined8 *)(lVar3 + 8),(long)param_1);
    Sexy::StringToLower(auVar6._0_8_,auVar6._8_8_);
    cVar2 = std::operator==(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    if (cVar2 == '\0') {
      std::string::string(asStack_10,"UIWorldMapBackButton");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pUVar5 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar5,false);
      }
      std::string::string(asStack_10,"UIWorldMapCoinBank");
      pUVar5 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
      std::string::~string(asStack_10);
      nop();
      if (pUVar5 != (UIWidget *)0x0) {
        UIWidget::SetVisible(pUVar5,false);
      }
    }
    else {
      enterWorld(this,param_1);
    }
    std::string::~string(asStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::InitializeMapObjects() */

void __thiscall UniverseMap::InitializeMapObjects(UniverseMap *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  DVec2 *__n;
  ScrollWidget *pSVar5;
  string asStack_18 [8];
  DVec2 aDStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aDStack_10;
  std::string::string(asStack_18,"");
  nop();
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    uVar2 = PlayerInfo::GetLastWorldName(this_01);
    thunk_FUN_05475e00(asStack_18,uVar2);
  }
  cVar1 = FUN_0547419c(asStack_18);
  if ((cVar1 != '\0') || (this[0x360] != (UniverseMap)0x0)) {
    std::string::append(asStack_18,"egypt",(size_t)__n);
  }
  lVar3 = GetButtonForWorld(this,asStack_18);
  if (lVar3 != 0) {
    lVar4 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x2a8));
    pSVar5 = *(ScrollWidget **)(this + 0x2a8);
    DVec2::DVec2(aDStack_10,(float)(0xaa - *(int *)(lVar3 + 0x48)),(float)*(int *)(lVar4 + 0x4c));
    Sexy::ScrollWidget::SetScrollOffset(pSVar5,aDStack_10,0);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::HasFinishedTargetWorld(std::string const&) */

void UniverseMap::HasFinishedTargetWorld(string *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  char *__s;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = std::operator==(param_1,"egypt");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"pirate");
    if (bVar1) {
      __s = "pirate10";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"cowboy");
    if (bVar1) {
      __s = "cowboy10";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"kongfu");
    if (bVar1) {
      __s = "kongfu30";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"future");
    if (bVar1) {
      __s = "future29";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"dark");
    if (bVar1) {
      __s = "dark30";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"beach");
    if (bVar1) {
      __s = "beach30";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"iceage");
    if (bVar1) {
      __s = "iceage25";
      goto LAB_044d8814;
    }
    bVar1 = std::operator==(param_1,"skycity");
    if (bVar1) {
      __s = "skycity24";
      goto LAB_044d8814;
    }
  }
  __s = "egypt11";
LAB_044d8814:
  std::string::string(asStack_10,__s);
  iVar2 = PlayerInfo::GetWorldMapEventStatus(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(2 < iVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onNarrationFinished() */

void __thiscall UniverseMap::onNarrationFinished(UniverseMap *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  UIWidget *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = FUN_044d54f8(*(undefined4 *)(pPVar2 + 0x40));
  if (iVar1 == 0x26) {
    LawnApp::KillGameMaskUI(gLawnApp);
    PlayerInfo::CompleteTutorial(pPVar2,0x26);
  }
  std::string::string(asStack_10,"UIWorldMapBackButton");
  this_01 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_01 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_01,true);
  }
  *(uint *)(*(long *)(this + 0x2a8) + 0x60) = *(uint *)(*(long *)(this + 0x2a8) + 0x60) & 0xffffffef
  ;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onAdsFinish(EASquaredAdFinishedReason::EASquaredAdFinishedReason) */

void __thiscall UniverseMap::onAdsFinish(undefined8 param_1,int param_2)

{
  long *plVar1;
  char *__s;
  TGALogMgr *local_58;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"UniverseMap::onAdsFinish %d");
  if (param_2 == 0) {
    plVar1 = (long *)EASquared::Instance();
    (**(code **)(*plVar1 + 0x40))(plVar1,0x3d);
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "2";
  }
  else {
    plVar1 = (long *)EASquared::Instance();
    (**(code **)(*plVar1 + 0x40))(plVar1,0x3d);
    local_58 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    __s = "4";
  }
  std::string::string(asStack_28,__s);
  std::string::string(asStack_20,"");
  std::string::string(asStack_18,"");
  std::string::string(asStack_10,"");
  TGALogMgr::LogAD(local_58,asStack_28,asStack_20,0x3d,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  std::string::~string(asStack_20);
  nop();
  std::string::~string(asStack_28);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::ShowPromptToPatch() */

void __thiscall UniverseMap::ShowPromptToPatch(UniverseMap *this)

{
  LawnApp *this_00;
  int iVar1;
  int iVar2;
  PVZ2UIDialog *this_01;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_044d5aa0(0x1cc);
  iVar2 = FUN_044d5aa0(0xa0);
  this_01 = (PVZ2UIDialog *)
            LawnApp::ShowPVZ2Dialog(this_00,(float)iVar1,(float)iVar2,(PVZ2UIDialog *)0x0);
  FUN_05478178(awStack_50,L"[OUT_OF_CONTENT_HEADER]",auStack_58);
  PVZ2UIDialog::SetHeaderLabel(this_01,awStack_50);
  FUN_05476c50(awStack_50);
  nop();
  FUN_05478178(auStack_58,L"[OUT_OF_CONTENT_CONFIRM]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnConfirmPatchDownload);
  Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  FUN_05478178(auStack_58,L"[OUT_OF_CONTENT_REJECT]",auStack_60);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnRejectPatchDownload);
  Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_38,awStack_50);
  PVZ2UIDialog::AddButton(this_01,auStack_58,aDStack_38,0);
  FUN_05476c50(auStack_58);
  nop();
  PVZ2UIDialog::SetBackgroundDarken(this_01,true,0.5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::updateButtonStates(int, int, bool) */

void __thiscall
UniverseMap::updateButtonStates(UniverseMap *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  LawnApp *pLVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  WorldMap *this_00;
  undefined8 *puVar8;
  long lVar9;
  WorldMapList *pWVar10;
  long *plVar11;
  DangerRoomManager *pDVar12;
  PVZ2UIDialog *pPVar13;
  undefined8 uVar14;
  ulong uVar15;
  UniverseWorldButton *this_01;
  int iVar16;
  Delegate0 *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  string asStack_60 [8];
  wstring awStack_58 [8];
  DVec2 aDStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar3 = WorldMap::CanBeClosed(this_00);
  if ((cVar3 != '\0') && (cVar3 = CanBeClosed(this), cVar3 != '\0')) {
    if (*(int *)(this + 0x298) == 2) {
      iVar16 = 0;
    }
    else {
      iVar16 = -1;
      if (*(int *)(this + 0x298) == 1) {
        iVar16 = 1;
      }
    }
    uVar14 = *(undefined8 *)(this + 0x328);
    iVar5 = FUN_044d55f4(uVar14,*(undefined8 *)(this + 0x330));
    if (0 < iVar5) {
      uVar15 = 0;
      do {
        iVar1 = (int)uVar15;
        puVar8 = (undefined8 *)FUN_044d5600(uVar14,uVar15);
        this_01 = (UniverseWorldButton *)*puVar8;
        if ((this_01 != (UniverseWorldButton *)0x0) && ((iVar16 == iVar1 || (iVar16 == -1)))) {
          lVar9 = FUN_044d5524(*(undefined8 *)(this + 0x2a0));
          iVar7 = *(int *)(lVar9 + 0x4c);
          lVar9 = FUN_044d5520(*(undefined8 *)(this + 0x2a8));
          iVar7 = (param_2 - iVar7) - *(int *)(lVar9 + 0x4c);
          if (param_3) {
            cVar3 = UniverseWorldButton::IsMouseOver(this_01,param_1,iVar7);
            if (cVar3 == '\0') {
              UniverseWorldButton::SetPressed(this_01,false);
            }
            else {
              UniverseWorldButton::SetPressed(this_01,true);
            }
          }
          else {
            cVar3 = FUN_044d6d00(*(undefined4 *)(this_01 + 0x1a8));
            if (cVar3 != '\0') {
              UniverseWorldButton::SetPressed(this_01,param_3);
              puVar8 = (undefined8 *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar15);
              cVar3 = UniverseWorldButton::IsMouseOver((UniverseWorldButton *)*puVar8,param_1,iVar7)
              ;
              if (cVar3 != '\0') {
                pWVar10 = (WorldMapList *)LawnApp::GetWorldMapList(gLawnApp);
                plVar11 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar15);
                uVar6 = FUN_044d558c(*(undefined4 *)(*plVar11 + 0x1ac));
                *(undefined4 *)(this + 0x290) = uVar6;
                iVar7 = EA::Thread::Mutex::GetLockCount((Mutex *)(this + 0x2e8));
                if (iVar1 == iVar7) {
                  plVar11 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar15);
                  cVar3 = FUN_044d6d08(*(undefined4 *)(*plVar11 + 0x1a8));
                  if (cVar3 != '\0') {
                    uVar14 = FUN_044d56c8(*(undefined8 *)(pWVar10 + 8),(long)*(int *)(this + 0x290))
                    ;
                    FUN_05475d88(asStack_60,uVar14);
                    cVar3 = WorldMapList::IsWorldEnabled(pWVar10,asStack_60);
                    pLVar2 = gLawnApp;
                    if (cVar3 == '\0') {
                      FUN_05478178(awStack_58,L"[WORLDINFO_COMING_SOON_TITLE]",auStack_70);
                      FUN_05478178((wstring *)aDStack_50,L"[WORLDINFO_COMING_SOON]",auStack_68);
                      pPVar13 = (PVZ2UIDialog *)
                                LawnApp::ShowPVZ2Dialog(pLVar2,awStack_58,(wstring *)aDStack_50);
                      FUN_05476c50((wstring *)aDStack_50);
                      nop();
                      FUN_05476c50(awStack_58);
                      nop();
                      FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_68);
                      Sexy::
                      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                      Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                (aDStack_38,(wstring *)aDStack_50);
LAB_044d9578:
                      local_78 = aDStack_38;
                      PVZ2UIDialog::AddButton(pPVar13,awStack_58,local_78,param_3);
                      FUN_05476c50(awStack_58);
                      nop();
                    }
                    else {
                      plVar11 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar15);
                      cVar3 = FUN_044d55f0(*(undefined1 *)(*plVar11 + 0x228));
                      if (cVar3 == '\0') {
                        pWVar10 = (WorldMapList *)LawnApp::GetWorldMapList(gLawnApp);
                        lVar9 = WorldMapList::GetMapListNodeByName(pWVar10,asStack_60);
                        if (lVar9 == 0) {
                          LawnApp::ShowWorldPreview(gLawnApp,asStack_60);
                        }
                        else {
                          iVar1 = *(int *)(lVar9 + 0x38);
                          LawnApp::ShowWorldPreview(gLawnApp,asStack_60);
                          if (3 < iVar1) {
                            plVar11 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar15);
                            cVar3 = FUN_044d6d10(*(undefined4 *)(*plVar11 + 0x1a8));
                            pLVar2 = gLawnApp;
                            if (cVar3 == '\0') {
                              FUN_05478178(awStack_58,L"[WORLDINFO_DIFFICULTY_TIP_TITLE]",auStack_70
                                          );
                              FUN_05478178((wstring *)aDStack_50,L"[WORLDINFO_DIFFICULTY_TIP]",
                                           auStack_68);
                              pPVar13 = (PVZ2UIDialog *)
                                        LawnApp::ShowPVZ2Dialog
                                                  (pLVar2,awStack_58,(wstring *)aDStack_50);
                              FUN_05476c50((wstring *)aDStack_50);
                              nop();
                              FUN_05476c50(awStack_58);
                              nop();
                              FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_68);
                              Sexy::
                              MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                        ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                              Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                        (aDStack_38,(wstring *)aDStack_50);
                              PVZ2UIDialog::AddButton(pPVar13,awStack_58,aDStack_38,0);
                              FUN_05476c50(awStack_58);
                              nop();
                            }
                          }
                        }
                      }
                      else {
                        thunk_FUN_05475e00(this + 0x368,asStack_60);
                        pDVar12 = (DangerRoomManager *)
                                  Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
                        cVar3 = DangerRoomManager::HasTrainingInfo(pDVar12);
                        if (cVar3 != '\0') {
                          pDVar12 = (DangerRoomManager *)
                                    Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
                          DangerRoomManager::GetCurrentTrainingWorld(pDVar12);
                          bVar4 = std::operator!=((string *)aDStack_50,asStack_60);
                          std::string::~string((string *)aDStack_50);
                          pLVar2 = gLawnApp;
                          if (bVar4) {
                            FUN_05478178(awStack_58,L"[DANGERROOM_TRAINING_QUIT_HINT_TITLE]",
                                         auStack_70);
                            FUN_05478178((string *)aDStack_50,
                                         L"[DANGERROOM_TRAINING_QUIT_HINT_TEXT_2]",auStack_68);
                            pPVar13 = (PVZ2UIDialog *)
                                      LawnApp::ShowPVZ2Dialog
                                                (pLVar2,awStack_58,(wstring *)aDStack_50);
                            FUN_05476c50((string *)aDStack_50);
                            nop();
                            FUN_05476c50(awStack_58);
                            nop();
                            FUN_05478178(awStack_58,L"[DANGERROOM_NOT_BUY_BUTTON]",auStack_68);
                            Sexy::
                            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                      ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
                            Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
                                      (aDStack_38,(string *)aDStack_50);
                            PVZ2UIDialog::AddButton(pPVar13,awStack_58,aDStack_38,1);
                            FUN_05476c50(awStack_58);
                            nop();
                            FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_68);
                            Sexy::
                            MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                                      ((ReceivedDataCallback *)this,OnSelectClearTraining);
                            Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>
                                      (aDStack_38,(string *)aDStack_50);
                            goto LAB_044d9578;
                          }
                        }
                        EnterDangerRoomTrainingLevel();
                      }
                    }
                    std::string::~string(asStack_60);
                  }
                }
                else {
                  this[800] = (UniverseMap)param_3;
                  DVec2::DVec2(aDStack_50,20.0,0.0);
                  Sexy::ScrollWidget::SetScrollVelocity
                            (*(ScrollWidget **)(this + 0x2a8),(FPoint *)aDStack_50);
                  UniverseMapScrollSnapper::SnapToIndex
                            ((UniverseMapScrollSnapper *)(this + 0x2e8),iVar1,
                             *(ScrollWidget **)(this + 0x2a8),true);
                }
              }
            }
          }
        }
        if (uVar15 == iVar5 - 1) break;
        uVar14 = *(undefined8 *)(this + 0x328);
        uVar15 = uVar15 + 1;
      } while( true );
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::handleTouchBegan(int, int) */

void __thiscall UniverseMap::handleTouchBegan(UniverseMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = isInState(this,2);
  if (cVar3 != '\0') {
    iVar1 = param_1 + *(int *)(this + 0x58);
    iVar2 = param_2 + *(int *)(this + 0x5c);
    cVar3 = UIWidget::ProcessedMouseDown(iVar1,iVar2,200);
    if ((cVar3 == '\0') &&
       (cVar3 = (**(code **)(**(long **)(this + 0x288) + 0x30))
                          (*(long **)(this + 0x288),iVar1,iVar2), cVar3 == '\0')) {
      this[0x268] = (UniverseMap)0x0;
      Sexy::Point::Point(aPStack_10,param_1,param_2);
      SetStartingMouseDownPos(this,aPStack_10);
      updateButtonStates(this,iVar1,iVar2,true);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::TouchBegan(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchBegan(UniverseMap *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(long *)(this + 0x278) == 0) && (this[0x7c] != (UniverseMap)0x0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined8 *)(this + 0x278) = *(undefined8 *)param_1;
    handleTouchBegan(this,iVar1,iVar2);
    return;
  }
  return;
}


/* non-virtual thunk to UniverseMap::TouchBegan(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchBegan(UniverseMap *this,Touch *param_1)

{
  TouchBegan(this + -0x10,param_1);
  return;
}


/* UniverseMap::handleTouchEnded(int, int) */

void __thiscall UniverseMap::handleTouchEnded(UniverseMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  cVar3 = isInState(this,2);
  if (cVar3 == '\0') {
    return;
  }
  iVar7 = *(int *)(this + 0x58);
  iVar8 = *(int *)(this + 0x5c);
  FUN_044d5514(this + 0x269,0);
  uVar11 = *(undefined8 *)(this + 0x328);
  iVar7 = param_1 + iVar7;
  uVar9 = 0;
  iVar8 = param_2 + iVar8;
  uVar4 = FUN_044d55f4(uVar11,*(undefined8 *)(this + 0x330));
  if (uVar4 != 0) {
    do {
      plVar5 = (long *)FUN_044d5600(uVar11,uVar9);
      uVar10 = *(undefined8 *)(*plVar5 + 0x1d0);
      cVar3 = FUN_044d5578(uVar10);
      if (cVar3 != '\0') {
        lVar6 = FUN_044d5524(*(undefined8 *)(this + 0x2a0));
        iVar1 = *(int *)(lVar6 + 0x48);
        iVar2 = *(int *)(lVar6 + 0x4c);
        plVar5 = (long *)FUN_044d55bc(uVar10);
        iVar1 = iVar7 + iVar1;
        iVar2 = iVar8 + iVar2;
        cVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar1,iVar2);
        if (cVar3 != '\0') {
          plVar5 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar9);
          plVar5 = (long *)FUN_044d55bc(*(undefined8 *)(*plVar5 + 0x1d0));
          (**(code **)(*plVar5 + 0x20))(plVar5,iVar1,iVar2);
          return;
        }
        plVar5 = (long *)FUN_044d5600(*(undefined8 *)(this + 0x328),uVar9);
        plVar5 = (long *)FUN_044d55bc(*(undefined8 *)(*plVar5 + 0x1d0));
        (**(code **)(*plVar5 + 0x48))();
        uVar11 = *(undefined8 *)(this + 0x328);
        uVar4 = FUN_044d55f4(uVar11,*(undefined8 *)(this + 0x330));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  if (*(int *)(this + 0x298) == 0) {
    cVar3 = (**(code **)(**(long **)(this + 0x288) + 0x30))(*(long **)(this + 0x288),iVar7,iVar8);
    if (cVar3 != '\0') {
      (**(code **)(**(long **)(this + 0x288) + 0x20))(*(long **)(this + 0x288),iVar7,iVar8);
      iVar7 = -1;
      iVar8 = -1;
      goto LAB_044d9950;
    }
    WorldMapEventAlert::HideBadge(*(WorldMapEventAlert **)(this + 0x288));
  }
  cVar3 = UIWidget::ProcessedMouseUp(iVar7,iVar8,200);
  if (cVar3 != '\0') {
    iVar7 = -1;
    iVar8 = -1;
  }
LAB_044d9950:
  updateButtonStates(this,iVar7,iVar8,false);
  return;
}


/* UniverseMap::TouchEnded(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchEnded(UniverseMap *this,Touch *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(long *)(this + 0x278) != *(long *)param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x278) = 0;
  handleTouchEnded(this,iVar1,iVar2);
  return;
}


/* non-virtual thunk to UniverseMap::TouchEnded(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchEnded(UniverseMap *this,Touch *param_1)

{
  TouchEnded(this + -0x10,param_1);
  return;
}


/* UniverseMap::handleTouchMoved(int, int) */

void __thiscall UniverseMap::handleTouchMoved(UniverseMap *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = param_2 + *(int *)(this + 0x5c);
  iVar2 = param_1 + *(int *)(this + 0x58);
  UIWidget::ProcessedMouseMove(iVar2,iVar1,200);
  cVar3 = FUN_044d551c(this[0x269]);
  if ((cVar3 != '\0') &&
     (cVar3 = (**(code **)(**(long **)(this + 0x288) + 0x30))(*(long **)(this + 0x288),iVar2,iVar1),
     cVar3 == '\0')) {
    WorldMapEventAlert::HideBadge(*(WorldMapEventAlert **)(this + 0x288));
    this[0x268] = (UniverseMap)0x0;
    updateButtonStates(this,iVar2,iVar1,true);
    return;
  }
  return;
}


/* UniverseMap::TouchMoved(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchMoved(UniverseMap *this,Touch *param_1)

{
  if ((*(long *)(this + 0x278) != 0) && (*(long *)(this + 0x278) != *(long *)param_1)) {
    return;
  }
  handleTouchMoved(this,*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x14));
  return;
}


/* non-virtual thunk to UniverseMap::TouchMoved(Sexy::Touch const&) */

void __thiscall UniverseMap::TouchMoved(UniverseMap *this,Touch *param_1)

{
  TouchMoved(this + -0x10,param_1);
  return;
}


/* UniverseMap::TouchesCanceled() */

void __thiscall UniverseMap::TouchesCanceled(UniverseMap *this)

{
  *(undefined8 *)(this + 0x278) = 0;
  (**(code **)(*(long *)(this + 0x10) + 0x228))(this + 0x10,0xffffff9c,0xffffff9c,0);
  updateButtonStates(this,-1,-1,false);
  return;
}


/* non-virtual thunk to UniverseMap::TouchesCanceled() */

void __thiscall UniverseMap::TouchesCanceled(UniverseMap *this)

{
  TouchesCanceled(this + -0x10);
  return;
}


/* UniverseMap::setStateHelper(StateDefinition<UniverseMapState> const&) */

void __thiscall UniverseMap::setStateHelper(UniverseMap *this,StateDefinition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = StateMachine<MapAnimState>::SetState((StateMachine<MapAnimState> *)(this + 0x100),param_1)
  ;
  if (cVar1 != '\0') {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0xf8) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::setState(UniverseMapState) */

void __thiscall UniverseMap::setState(UniverseMap *this,uint param_2)

{
  undefined8 uVar1;
  string asStack_228 [8];
  CBMemberTranslatorX aCStack_220 [24];
  CBMemberTranslatorX aCStack_208 [24];
  CBMemberTranslatorX aCStack_1f0 [24];
  Delegate1<UniverseMapState> aDStack_1d8 [48];
  Delegate0 aDStack_1a8 [48];
  Delegate1<UniverseMapState> aDStack_178 [48];
  StateDefinition<UniverseMapState> aSStack_148 [160];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateDefinition<UniverseMapState>::StateDefinition(aSStack_148);
  if (param_2 < 0xd) {
    switch(param_2) {
    case 0:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xa8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xb0);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xb8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_Loading");
      uVar1 = 0;
      break;
    case 1:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xc0);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xc8);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xd0);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_Initializing");
      uVar1 = 1;
      break;
    case 2:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xd8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xe0);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xe8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_Ready");
      uVar1 = 2;
      break;
    case 3:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf0);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0xf8);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x100);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToWorldIntro");
      uVar1 = 3;
      break;
    case 4:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x108);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x110);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x118);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToWorldWaiting");
      uVar1 = 4;
      break;
    case 5:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x120);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x128);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x130);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToWorldOutro");
      uVar1 = 5;
      break;
    case 6:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x138);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x140);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x148);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToUniverseIntro");
      uVar1 = 6;
      break;
    case 7:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x150);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x158);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x160);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToUniverseWaiting");
      uVar1 = 7;
      break;
    case 8:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x168);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x170);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x178);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionToUniverseOutro");
      uVar1 = 8;
      break;
    case 9:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x180);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x188);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x190);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionBetweenWorldsIntro");
      uVar1 = 9;
      break;
    case 10:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x198);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1a0);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1a8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionBetweenWorldsWaiting");
      uVar1 = 10;
      break;
    case 0xb:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1b0);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1b8);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1c0);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_TransitionBetweenWorldsOutro");
      uVar1 = 0xb;
      break;
    case 0xc:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1c8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1d0);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1d8);
      Sexy::Delegate1<UniverseMapState>::
      Delegate1<UniverseMap,void(UniverseMap::*)(UniverseMapState)>(aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"UM_UnlockTutorial");
      uVar1 = 0xc;
    }
    StateDefinition<UniverseMapState>::StateDefinition
              (aSStack_a8,uVar1,aDStack_1d8,aDStack_1a8,aDStack_178,asStack_228);
    StateDefinition<WorldMapState>::operator=
              ((StateDefinition<WorldMapState> *)aSStack_148,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_228);
    nop();
  }
  setStateHelper(this,(StateDefinition *)aSStack_148);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::setState(MapAnimState) */

void __thiscall UniverseMap::setState(UniverseMap *this,uint param_2)

{
  undefined8 uVar1;
  string asStack_228 [8];
  CBMemberTranslatorX aCStack_220 [24];
  CBMemberTranslatorX aCStack_208 [24];
  CBMemberTranslatorX aCStack_1f0 [24];
  Delegate1<MapAnimState> aDStack_1d8 [48];
  Delegate0 aDStack_1a8 [48];
  Delegate1<MapAnimState> aDStack_178 [48];
  StateDefinition<MapAnimState> aSStack_148 [160];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateDefinition<MapAnimState>::StateDefinition(aSStack_148);
  if (param_2 < 7) {
    switch(param_2) {
    case 0:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1e0);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1e8);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1f0);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Scorlling");
      uVar1 = 0;
      break;
    case 1:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x1f8);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x200);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x208);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Unlocking");
      uVar1 = 1;
      break;
    case 2:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x210);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x218);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x220);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Winnie_Moving");
      uVar1 = 2;
      break;
    case 3:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)&DAT_00000228);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x230);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x238);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Gate_Scorlling");
      uVar1 = 3;
      break;
    case 4:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x240);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x248);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x250);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Gate_Activing");
      uVar1 = 4;
      break;
    case 5:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x258);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x260);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x268);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_After_Unlocking");
      uVar1 = 5;
      break;
    case 6:
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x270);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_1d8,aCStack_220);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x278);
      Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_1a8,aCStack_208);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x280);
      Sexy::Delegate1<MapAnimState>::Delegate1<UniverseMap,void(UniverseMap::*)(MapAnimState)>
                (aDStack_178,aCStack_1f0);
      std::string::string(asStack_228,"Anim_Finished");
      uVar1 = 6;
    }
    StateDefinition<MapAnimState>::StateDefinition
              (aSStack_a8,uVar1,aDStack_1d8,aDStack_1a8,aDStack_178,asStack_228);
    StateDefinition<WorldMapState>::operator=
              ((StateDefinition<WorldMapState> *)aSStack_148,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_228);
    nop();
  }
  StateMachine<MapAnimState>::SetState
            ((StateMachine<MapAnimState> *)(this + 0x1a0),(StateDefinition *)aSStack_148);
  StateDefinition<CardGameState>::~StateDefinition((StateDefinition<CardGameState> *)aSStack_148);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::updateState_Scorlling() */

void __thiscall UniverseMap::updateState_Scorlling(UniverseMap *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ScrollWidget *pSVar5;
  float fVar6;
  float fVar7;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x2a8));
  iVar1 = *(int *)(lVar3 + 0x48);
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x2a8));
  iVar2 = *(int *)(lVar3 + 0x4c);
  if (-*(int *)(this + 0x2e4) < iVar1) {
    fVar6 = (float)PVZ_RealDt();
    fVar7 = (float)FUN_044d5ab4();
    *(float *)(this + 0x2c0) = *(float *)(this + 0x2c0) - fVar6 * fVar7;
    Sexy::ScrollWidget::GetScrollMin();
    local_14 = local_10[0];
    pfVar4 = eastl::max_alt<float>((float *)(this + 0x2c0),&local_14);
    fVar6 = *pfVar4;
    pSVar5 = *(ScrollWidget **)(this + 0x2a8);
    *(float *)(this + 0x2c0) = fVar6;
    DVec2::DVec2((DVec2 *)local_10,fVar6,(float)iVar2);
    Sexy::ScrollWidget::SetScrollOffset(pSVar5,(DVec2 *)local_10,0);
  }
  else {
    *(undefined4 *)(this + 0x2c0) = 0;
    setState(this,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::updateState_Unlocking() */

void __thiscall UniverseMap::updateState_Unlocking(UniverseMap *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 - *(float *)(this + 0x358) <= 2.8) {
    return;
  }
  setState(this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::updateState_Gate_Scorlling() */

void __thiscall UniverseMap::updateState_Gate_Scorlling(UniverseMap *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  ScrollWidget *pSVar6;
  float fVar7;
  float fVar8;
  float local_14;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x2a8));
  iVar1 = *(int *)(lVar3 + 0x48);
  lVar3 = AccessoryContent::GetDisplayImage(*(AccessoryContent **)(this + 0x2a8));
  iVar2 = *(int *)(lVar3 + 0x4c);
  plVar4 = (long *)FUN_044d5710(*(undefined8 *)(this + 0x340),(long)*(int *)(this + 0x35c));
  if (-*(int *)(*plVar4 + 0x48) < iVar1) {
    fVar7 = (float)PVZ_RealDt();
    fVar8 = (float)FUN_044d5ab4();
    *(float *)(this + 0x2c0) = *(float *)(this + 0x2c0) - fVar7 * fVar8;
    Sexy::ScrollWidget::GetScrollMin();
    local_14 = local_10[0];
    pfVar5 = eastl::max_alt<float>((float *)(this + 0x2c0),&local_14);
    fVar7 = *pfVar5;
    pSVar6 = *(ScrollWidget **)(this + 0x2a8);
    *(float *)(this + 0x2c0) = fVar7;
    DVec2::DVec2((DVec2 *)local_10,fVar7,(float)iVar2);
    Sexy::ScrollWidget::SetScrollOffset(pSVar6,(DVec2 *)local_10,0);
  }
  else {
    *(undefined4 *)(this + 0x2c0) = 0;
    setState(this,5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::updateState_After_Unlocking() */

void __thiscall UniverseMap::updateState_After_Unlocking(UniverseMap *this)

{
  int iVar1;
  ProfileMgr *this_00;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)PVZ_T();
  if (fVar3 - *(float *)(this + 0x358) <= 2.8) {
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  lVar2 = ProfileMgr::GetCurrentProfile(this_00);
  if ((lVar2 != 0) && (iVar1 = FUN_044d54fc(*(undefined4 *)(lVar2 + 0xff0)), iVar1 < 4)) {
    FUN_044d5500(lVar2 + 0xff0,iVar1 + 1);
  }
  SetRevealedWorlds(this);
  setState(this,6);
  return;
}


/* UniverseMap::onGateUnlocked(std::string const&) */

void UniverseMap::onGateUnlocked(string *param_1)

{
  setState((UniverseMap *)param_1,2);
  return;
}


/* UniverseMap::InitializeWorldUnlockedAnim() */

void __thiscall UniverseMap::InitializeWorldUnlockedAnim(UniverseMap *this)

{
  string *psVar1;
  long lVar2;
  
  psVar1 = (string *)FUN_044d56e8(*(undefined8 *)(this + 0x2c8),0);
  lVar2 = GetButtonForWorld(this,psVar1);
  if (lVar2 != 0) {
    *(undefined4 *)(this + 0x2e4) = *(undefined4 *)(lVar2 + 0x48);
  }
  setState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_Gate_Activing(MapAnimState) */

void UniverseMap::onEnterState_Gate_Activing(ReceivedDataCallback *param_1)

{
  long *plVar1;
  PopAnimRig *pPVar2;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DecideGateActivtingAnim();
  plVar1 = (long *)FUN_044d5710(*(undefined8 *)(param_1 + 0x340),(long)*(int *)(param_1 + 0x35c));
  if (*plVar1 != 0) {
    Effect_PopAnim::GetPopAnimRigPtr();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (param_1,onGateActivited);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<UniverseMap,void(UniverseMap::*)(std::string_const&)>(aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar2,asStack_60,0,aDStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  std::string::~string(asStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onGateActivited(std::string const&) */

void UniverseMap::onGateActivited(string *param_1)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  string *psVar1;
  ulong uVar2;
  long *plVar3;
  PopAnimRig *pPVar4;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  uVar5 = 0;
  if (this_00 != (PlayerInfo *)0x0) {
    while( true ) {
      uVar6 = *(undefined8 *)(param_1 + 0x2c8);
      uVar2 = FUN_044d56dc(uVar6,*(undefined8 *)(param_1 + 0x2d0));
      if (uVar2 <= uVar5) break;
      psVar1 = (string *)FUN_044d56e8(uVar6,uVar5);
      PlayerInfo::AddWorldAnimPlayed(this_00,psVar1);
      uVar5 = uVar5 + 1;
    }
  }
  if (param_1[0x2e0] == (string)0x0) {
    setState((UniverseMap *)param_1,6);
  }
  else {
    DecideGateFullUnlockAnim();
    plVar3 = (long *)FUN_044d5710(*(undefined8 *)(param_1 + 0x340),(long)*(int *)(param_1 + 0x35c));
    if (*plVar3 != 0) {
      Effect_PopAnim::GetPopAnimRigPtr();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)param_1,onGateUnlocked);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<UniverseMap,void(UniverseMap::*)(std::string_const&)>(aDStack_38,aCStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_60,0,aDStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    }
    std::string::~string(asStack_60);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UniverseMap::onEnterState_Winnie_Moving(MapAnimState) */

void UniverseMap::onEnterState_Winnie_Moving(long param_1)

{
  UniverseScrollingArea::SetWinnieGatePosition(*(UniverseScrollingArea **)(param_1 + 0x2a0));
  return;
}


/* UniverseMap::StartLoad() */

void __thiscall UniverseMap::StartLoad(UniverseMap *this)

{
  char cVar1;
  
  cVar1 = isInState(this,0);
  if (cVar1 != '\0') {
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
    if (cVar1 == '\0') {
      LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(this + 0x240));
      return;
    }
  }
  return;
}


/* UniverseMap::onEnterState_Loading(UniverseMapState) */

void UniverseMap::onEnterState_Loading(UniverseMap *param_1)

{
  char cVar1;
  
  cVar1 = isInState(param_1,0);
  if (cVar1 != '\0') {
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(param_1 + 0x240));
    if (cVar1 == '\0') {
      LawnApp::PrepareLoadGroups(gLawnApp,(vector *)(param_1 + 0x240));
      return;
    }
  }
  return;
}


/* UniverseMap::checkLoadComplete() */

undefined8 __thiscall UniverseMap::checkLoadComplete(UniverseMap *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = LawnApp::IsGroupLoadComplete(gLawnApp,(vector *)(this + 0x240));
  return uVar2;
}


/* UniverseMap::CompleteLoad() */

void __thiscall UniverseMap::CompleteLoad(UniverseMap *this)

{
  char cVar1;
  
  cVar1 = isInState(this,0);
  if (cVar1 != '\0') {
    cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                      ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
    if (cVar1 == '\0') {
      LawnApp::FinalizeGroupLoads(gLawnApp,(vector *)(this + 0x240));
      (**(code **)(*(long *)this + 0xa0))(this,1);
      return;
    }
  }
  (**(code **)(*(long *)this + 0xa0))(this,1);
  return;
}


/* UniverseMap::updateState_Loading() */

void __thiscall UniverseMap::updateState_Loading(UniverseMap *this)

{
  char cVar1;
  
  cVar1 = checkLoadComplete(this);
  if (cVar1 == '\0') {
    return;
  }
  CompleteLoad(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_TransitionToWorldOutro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionToWorldOutro(long param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UIWidget *pUVar4;
  RtObject *pRVar5;
  WorldMap_TaptapButton *this;
  undefined8 *puVar6;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  WorldMap_ScrollBannerSwitchButton *this_02;
  WorldMap_LevelPackageButton *this_03;
  WorldMap_MonthVIPButton *this_04;
  FestivalManager *this_05;
  WorldMap_AdsRewardButton *this_06;
  WorldMap_AdsLotteryButton *this_07;
  string *extraout_x1;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(param_1 + 0x2a8) + 0x158))(*(long **)(param_1 + 0x2a8),0);
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x158))(*(long **)(param_1 + 0x2b8),0);
  std::string::string(asStack_20,"UIWorldMapLoginRewardButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPlatformGiftButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapVivoGameCenterButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapTaptapEvent");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this = Sexy::RtObject::Cast<WorldMap_TaptapButton>(pRVar5),
     this != (WorldMap_TaptapButton *)0x0)) {
    WorldMap_TaptapButton::CheckActivated(this);
  }
  iVar3 = LawnApp::GetPlatform(gLawnApp);
  if ((((iVar3 == 0x59) || (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x25)) ||
      (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x5a)) ||
     (iVar3 = LawnApp::GetPlatform(gLawnApp), iVar3 == 0x26)) {
    std::string::string(asStack_20,"UIWorldMapGameCommunityButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
    std::string::~string(asStack_20);
    nop();
    if (pUVar4 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  else {
    std::string::string(asStack_20,"UIWorldMapGameCommunityButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
    std::string::~string(asStack_20);
    nop();
    if (pUVar4 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar4,false);
    }
  }
  std::string::string(asStack_20,"UIWorldMapLotteryButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapNewerButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapWorldKeyBank");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIWorldMapPlantLevelUpButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapWelfareButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIWorldMapTreasureButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapTWLoginRewardButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapLuaVirtualBtns");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapUniverseViewButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string((string *)&local_28,"UIWorldMapPlantTrialButton");
  UIWidget::GetWidgetGroupBySheetName((UIWidget *)&local_28,extraout_x1);
  std::string::~string((string *)&local_28);
  nop();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((UIWidget *)*puVar6 != (UIWidget *)0x0) {
      UIWidget::SetVisible((UIWidget *)*puVar6,true);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<UIWidget*,std::allocator<UIWidget*>>::~vector
            ((vector<UIWidget*,std::allocator<UIWidget*>> *)asStack_20);
  std::string::string(asStack_20,"UIWorldMapBackButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIWorldMapActivityCenterButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapDailyAchievementButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPlantAdventure");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if ((this_01 != (PlayerInfo *)0x0) &&
     (cVar2 = PlayerInfo::getIsAuthIDCard(this_01), cVar2 == '\0')) {
    std::string::string(asStack_20,"UIWorldMapAuthenticationButton");
    pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
    std::string::~string(asStack_20);
    nop();
    if (pUVar4 != (UIWidget *)0x0) {
      UIWidget::SetVisible(pUVar4,true);
    }
  }
  std::string::string(asStack_20,"UIWorldFirstRechargeButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"WorldMapRechargeReward");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapChristmasButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPVPButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapStarConvertButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapActivityLevelsButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,false);
  }
  std::string::string(asStack_20,"UIWorldMapBagButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapRift");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapActivityHomeButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapActivityHomeButtonExtra");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapHeadshotButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapRechargeBundleButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapAnniversaryButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapLimitedGachaButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapOfflineBundleButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPlantSpecialButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapLuckBagButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapDailyActivityButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapChallengeButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapShopButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapWelfareButtonExtra");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapNewPlayerButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapOneYuanButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPiggyBankButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapDaveTreasureButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapCallOfWishButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapArtifactPresentButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPVZ2UnchartedModeButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapGrowthPackageButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapBattleOrderButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapLimitedSummonButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapCarnivalButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapNewYearGoodsButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapCornucopiaButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPlantCultivateButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapTenYearRecordButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapGiftFoReturnButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapPennyGiftBoxButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapLuckyChestShopButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapAutumnHarvestButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapTourismOctoberButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  std::string::string(asStack_20,"UIWorldMapNighttheToyButton");
  pUVar4 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar4 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar4,true);
  }
  LawnApp::SetScrollBannerVisible(gLawnApp,true);
  LawnApp::SetMarqueeViewVisible(gLawnApp,true);
  std::string::string(asStack_20,"UIWorldMapScrollBannerSwitchButton");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this_02 = Sexy::RtObject::Cast<WorldMap_ScrollBannerSwitchButton>(pRVar5),
     this_02 != (WorldMap_ScrollBannerSwitchButton *)0x0)) {
    WorldMap_ScrollBannerSwitchButton::checkVisiable(this_02);
  }
  std::string::string(asStack_20,"UIWorldMapLevelPackageButton");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this_03 = Sexy::RtObject::Cast<WorldMap_LevelPackageButton>(pRVar5),
     this_03 != (WorldMap_LevelPackageButton *)0x0)) {
    bVar1 = (bool)WorldMap_LevelPackageButton::CheckVisibility(false);
    UIWidget::SetVisible((UIWidget *)this_03,bVar1);
  }
  std::string::string(asStack_20,"UIWorldMapMonthVIPButton");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this_04 = Sexy::RtObject::Cast<WorldMap_MonthVIPButton>(pRVar5),
     this_04 != (WorldMap_MonthVIPButton *)0x0)) {
    WorldMap_MonthVIPButton::checkVisiable(this_04);
  }
  this_05 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::SetSpringFestivalButtonVisible(this_05,true);
  std::string::string(asStack_20,"UIWorldMapAdsRewardButton");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this_06 = Sexy::RtObject::Cast<WorldMap_AdsRewardButton>(pRVar5),
     this_06 != (WorldMap_AdsRewardButton *)0x0)) {
    WorldMap_AdsRewardButton::checkVisiable(this_06);
  }
  std::string::string(asStack_20,"UIWorldMapAdsLotteryButton");
  pRVar5 = (RtObject *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if ((pRVar5 != (RtObject *)0x0) &&
     (this_07 = Sexy::RtObject::Cast<WorldMap_AdsLotteryButton>(pRVar5),
     this_07 != (WorldMap_AdsLotteryButton *)0x0)) {
    WorldMap_AdsLotteryButton::checkVisiable(this_07);
  }
  MessageRouter::Post((_func_void *)gMessageRouter);
  BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  LawnApp::setCanDealProfile(gLawnApp,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_TransitionToUniverseWaiting(UniverseMapState) */

void UniverseMap::onEnterState_TransitionToUniverseWaiting(void)

{
  bool bVar1;
  UIWidget *pUVar2;
  undefined8 *puVar3;
  FestivalManager *this;
  string *extraout_x1;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_20,"UIWorldMapLoginRewardButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPlatformGiftButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapVivoGameCenterButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapTaptapEvent");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapGameCommunityButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLotteryButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapNewerButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapWorldKeyBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,true);
  }
  std::string::string(asStack_20,"UIWorldMapBackButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,true);
  }
  std::string::string(asStack_20,"UIWorldMapPlantLevelUpButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapWelfareButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapTreasureButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPerkLibraryButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapRiftRankButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapRiftStoreButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapEventBar");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapFuelBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIRiftPlayerInfoBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIPVZ1BannedUI");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIPVZ1InfoUI");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIPlantWarsMapThemBuff");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPVZ1EnergyBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPVZ1CoinBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPVZ1CoinHardBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UISpacetimeKeyBank");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapUnchartedBottomBar");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapCardGameBottomBar");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UICardGameCountDownWidget");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapTWLoginRewardButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapSales");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLuaVirtualBtns");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapDailyAchievementButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapUniverseViewButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string((string *)&local_28,"UIWorldMapPlantTrialButton");
  UIWidget::GetWidgetGroupBySheetName((UIWidget *)&local_28,extraout_x1);
  std::string::~string((string *)&local_28);
  nop();
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if ((UIWidget *)*puVar3 != (UIWidget *)0x0) {
      UIWidget::SetVisible((UIWidget *)*puVar3,false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<UIWidget*,std::allocator<UIWidget*>>::~vector
            ((vector<UIWidget*,std::allocator<UIWidget*>> *)asStack_20);
  std::string::string(asStack_20,"UIWorldMapActivityCenterButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapChristmasButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPlantAdventure");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapAuthenticationButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldFirstRechargeButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"WorldMapRechargeReward");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPVPButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapStarConvertButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapActivityLevelsButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapBagButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapRift");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapActivityHomeButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapActivityHomeButtonExtra");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapAdsRewardButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapAdsLotteryButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapHeadshotButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapRechargeBundleButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapAnniversaryButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLimitedGachaButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapOfflineBundleButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPlantSpecialButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLuckBagButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapDailyActivityButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapChallengeButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapShopButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapWelfareButtonExtra");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapNewPlayerButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapOneYuanButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPiggyBankButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapDaveTreasureButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapCallOfWishButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapArtifactPresentButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPVZ2UnchartedModeButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapGrowthPackageButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapBattleOrderButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLimitedSummonButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapCarnivalButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapNewYearGoodsButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapCornucopiaButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPlantCultivateButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapTenYearRecordButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapGiftFoReturnButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapPennyGiftBoxButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLuckyChestShopButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapAutumnHarvestButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapTourismOctoberButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapNighttheToyButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  LawnApp::SetScrollBannerVisible(gLawnApp,false);
  LawnApp::SetMarqueeViewVisible(gLawnApp,false);
  std::string::string(asStack_20,"UIWorldMapScrollBannerSwitchButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  std::string::string(asStack_20,"UIWorldMapLevelPackageButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  this = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::SetSpringFestivalButtonVisible(this,false);
  std::string::string(asStack_20,"UIWorldMapMonthVIPButton");
  pUVar2 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_20);
  std::string::~string(asStack_20);
  nop();
  if (pUVar2 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar2,false);
  }
  LawnApp::setCanDealProfile(gLawnApp,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::updateState_UnlockTutorial() */

void __thiscall UniverseMap::updateState_UnlockTutorial(UniverseMap *this)

{
  CrazyNPCManager *pCVar1;
  float fVar2;
  string asStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xe0))();
  fVar2 = (float)PVZ_T();
  if (*(float *)(this + 0xf8) + 3.0 < fVar2) {
    (**(code **)(*(long *)this + 0xa0))(this,2);
    pCVar1 = (CrazyNPCManager *)LawnApp::GetNarrationSystem(gLawnApp);
    std::string::string(asStack_60,"UNLOCK_WORLD_1");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onNarrationFinished);
    Sexy::Delegate0::Delegate0<UniverseMap,void(UniverseMap::*)()>(aDStack_38,aCStack_50);
    std::string::string(asStack_58,"");
    CrazyNPCManager::StartNarrativeID(pCVar1,asStack_60,aDStack_38,asStack_58);
    std::string::~string(asStack_58);
    nop();
    std::string::~string(asStack_60);
    nop();
    MessageRouter::Post<int,int,TutorialType,TutorialEventNew>
              ((MessageRouter *)gMessageRouter,Message::Toturi,0,0x1a);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::UnloadResources() */

void __thiscall UniverseMap::UnloadResources(UniverseMap *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  char cVar1;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x240);
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty(this_00);
  if (cVar1 != '\0') {
    return;
  }
  LawnApp::DeleteGroups(gLawnApp,(vector *)this_00);
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  return;
}


/* UniverseMap::ResetAnimData() */

void __thiscall UniverseMap::ResetAnimData(UniverseMap *this)

{
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8));
  this[0x2e0] = (UniverseMap)0x0;
  *(undefined4 *)(this + 0x2e4) = 0;
  *(undefined4 *)(this + 0x35c) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::onEnterState_Finished(MapAnimState) */

void UniverseMap::onEnterState_Finished(UniverseMap *param_1)

{
  UIWidget *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ResetAnimData(param_1);
  std::string::string(asStack_10,"UIWorldMapBackButton");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
  }
  std::string::string(asStack_10,"UIWorldMapCoinBank");
  pUVar1 = (UIWidget *)UIWidget::GetWidgetBySheetName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (pUVar1 != (UIWidget *)0x0) {
    UIWidget::SetVisible(pUVar1,true);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::UniverseMap() */

void __thiscall UniverseMap::UniverseMap(UniverseMap *this)

{
  MapPopupDialog *this_00;
  PVZ2UIScrollingWidget *this_01;
  Renderable *extraout_x1;
  code *__n;
  undefined4 uVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SnapHandler::SnapHandler((SnapHandler *)this);
  Renderable::Renderable((Renderable *)(this + 8),extraout_x1);
  Sexy::Widget::Widget((Widget *)(this + 0x10));
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xe8));
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xf0));
  *(undefined ***)this = &PTR__UniverseMap_06854ee0;
  *(undefined ***)(this + 8) = &PTR__UniverseMap_06855180;
  *(undefined ***)(this + 0x10) = &PTR_GetClass_068551b0;
  *(undefined ***)(this + 0xe8) = &PTR__UniverseMap_068554d0;
  *(undefined ***)(this + 0xf0) = &PTR_ButtonPress_06855518;
  StateMachine<UniverseMapState>::StateMachine((StateMachine<UniverseMapState> *)(this + 0x100));
  StateMachine<MapAnimState>::StateMachine((StateMachine<MapAnimState> *)(this + 0x1a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  Sexy::Point::Point((Point *)(this + 600));
  Sexy::Point::Point((Point *)(this + 0x260));
  Sexy::Point::Point((Point *)(this + 0x26c));
  Set8BytesTo0(this + 0x280);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  UniverseMapScrollSnapper::UniverseMapScrollSnapper((UniverseMapScrollSnapper *)(this + 0x2e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x328));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x340));
  Set8BytesTo0((string *)(this + 0x368));
  UniverseMapScrollSnapper::SetSnapHandler
            ((UniverseMapScrollSnapper *)(this + 0x2e8),(SnapHandler *)this);
  this[0x294] = (UniverseMap)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar1;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  Sexy::Point::Point((Point *)&local_10,0,0);
  this[0x268] = (UniverseMap)0x0;
  *(undefined8 *)(this + 0x260) = local_10;
  this[0x269] = (UniverseMap)0x0;
  this[0x26a] = (UniverseMap)0x0;
  this[0x295] = (UniverseMap)0x0;
  Sexy::Point::Point((Point *)&local_10,0,0);
  *(undefined8 *)(this + 0x26c) = local_10;
  *(undefined8 *)(this + 0x278) = 0;
  this_00 = ::operator_new(0x280);
  MapPopupDialog::MapPopupDialog(this_00);
  *(MapPopupDialog **)(this + 0x288) = this_00;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 0x2b0) = 0;
  this[0x7c] = (UniverseMap)0x0;
  this_01 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_01,(ScrollWidgetListener *)(this + 0xe8));
  *(PVZ2UIScrollingWidget **)(this + 0x2a8) = this_01;
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_01,1);
  __n = *(code **)(**(long **)(this + 0x2a8) + 0x158);
  (*__n)(*(long **)(this + 0x2a8),0);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)(this + 0x10),*(Widget **)(this + 0x2a8));
  *(undefined4 *)(this + 0x35c) = 0;
  this[800] = (UniverseMap)0x1;
  this[0x2e0] = (UniverseMap)0x0;
  *(undefined4 *)(this + 0x2e4) = 0;
  this[0x360] = (UniverseMap)0x0;
  *(undefined4 *)(this + 0x2c0) = 0;
  *(undefined4 *)(this + 0x358) = uVar1;
  std::string::append((string *)(this + 0x368),"",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::StaticNew() */

UniverseMap * UniverseMap::StaticNew(void)

{
  UniverseMap *this;
  
  this = ::operator_new(0x370);
  UniverseMap(this);
  return this;
}


/* UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__UniverseMap_06854ee0;
  *(undefined ***)(this + 8) = &PTR__UniverseMap_06855180;
  *(undefined ***)(this + 0x10) = &PTR_GetClass_068551b0;
  *(undefined ***)(this + 0xe8) = &PTR__UniverseMap_068554d0;
  *(undefined ***)(this + 0xf0) = &PTR_ButtonPress_06855518;
  if (this[0x294] != (UniverseMap)0x0) {
    imageResourceUninitialize(this);
    this[0x294] = (UniverseMap)0x0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)(this + 0x10),false,false);
  if (*(long **)(this + 0x288) == (long *)0x0) {
    plVar1 = *(long **)(this + 0x2a8);
  }
  else {
    (**(code **)(**(long **)(this + 0x288) + 8))();
    *(undefined8 *)(this + 0x288) = 0;
    plVar1 = *(long **)(this + 0x2a8);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(this + 0x2a8) = 0;
  }
  RemoveAdvertisement();
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  UnloadResources(this);
  std::string::~string((string *)(this + 0x368));
  std::vector<UniverseUnlockGate*,std::allocator<UniverseUnlockGate*>>::~vector
            ((vector<UniverseUnlockGate*,std::allocator<UniverseUnlockGate*>> *)(this + 0x340));
  std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::~vector
            ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)(this + 0x328));
  UniverseMapScrollSnapper::~UniverseMapScrollSnapper((UniverseMapScrollSnapper *)(this + 0x2e8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8));
  std::string::~string((string *)(this + 0x280));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x1a0));
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)(this + 0x10));
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -0xe8);
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -0x10);
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -8);
  return;
}


/* UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -0xe8);
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -0x10);
  return;
}


/* non-virtual thunk to UniverseMap::~UniverseMap() */

void __thiscall UniverseMap::~UniverseMap(UniverseMap *this)

{
  ~UniverseMap(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::isInDangerRoom(std::string const&) */

void __thiscall UniverseMap::isInDangerRoom(UniverseMap *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::GetTrainingWorldList();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(avStack_20);
  FUN_05475d88((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28,param_1);
  local_30 = FUN_044e1038(uVar2,uVar3,(pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)&local_28);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::showPopup(int, int) */

void __thiscall UniverseMap::showPopup(UniverseMap *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  MapPopupDialog *pMVar4;
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"UIWorldMapTopBar");
  lVar2 = UIWidget::GetWidgetBySheetName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_044d5508(*(undefined4 *)(lVar2 + 0x3c));
  }
  Sexy::Insets::Insets
            (aIStack_28,-*(int *)(this + 0x58),iVar1 - *(int *)(this + 0x5c),
             *(int *)(gLawnApp + 0x724),*(int *)(gLawnApp + 0x728) - iVar1);
  pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar3,"Play_UI_Menu_PopUp_General");
  pMVar4 = *(MapPopupDialog **)(this + 0x288);
  Sexy::Insets::Insets((Insets *)asStack_18,aIStack_28);
  MapPopupDialog::SetPositionBounds(pMVar4,asStack_18);
  pMVar4 = *(MapPopupDialog **)(this + 0x288);
  Sexy::Point::Point((Point *)asStack_18,param_1,param_2);
  MapPopupDialog::SetAnchorLocation(pMVar4,asStack_18);
  MapPopupDialog::PopIn(*(MapPopupDialog **)(this + 0x288));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::onEnterState_TransitionBetweenWorldsIntro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionBetweenWorldsIntro(long *param_1)

{
  char *pcVar1;
  
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  (**(code **)(*param_1 + 0x78))(param_1,1);
  (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),param_1 + 2);
  LawnApp::PushOverlaysToTop(gLawnApp);
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Map_Select_World_Segue");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::OnSelectClearTraining() */

void UniverseMap::OnSelectClearTraining(void)

{
  DangerRoomManager *pDVar1;
  DangerRoomInfo *pDVar2;
  DangerRoomInfo aDStack_b0 [168];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPVZ2Dialog(gLawnApp);
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  pDVar2 = (DangerRoomInfo *)DangerRoomManager::GetDangerRoomInfo(pDVar1,true);
  DangerRoomInfo::DangerRoomInfo(aDStack_b0,pDVar2);
  DangerRoomInfo::RestartRoom();
  pDVar1 = (DangerRoomManager *)Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
  DangerRoomManager::SetDangerRoomInfo(pDVar1,aDStack_b0,true);
  EnterDangerRoomTrainingLevel();
  DangerRoomInfo::~DangerRoomInfo(aDStack_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x044e1c50 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* UniverseMap::DrawUI(Sexy::Graphics*) */

void UniverseMap::DrawUI(Graphics *param_1)

{
  CachedUIResourcePtr<Sexy::Image> *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  Delegate1wRet<bool,SexyURL_const&> *this_00;
  ulong uVar12;
  Image *pIVar13;
  Graphics *in_x1;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  LineBreakCategory *pLVar17;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  ulong uVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  GraphicsAutoState aGStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined4 local_28 [8];
  LineBreakCategory *local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x7c] != (Graphics)0x0) {
    pLVar17 = ___stack_chk_guard;
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,in_x1);
    cVar4 = isInState((UniverseMap *)param_1,2);
    if ((cVar4 != '\0') || (cVar4 = isInState((UniverseMap *)param_1,0xc), cVar4 != '\0')) {
      plVar15 = *(long **)(param_1 + 0x288);
      lVar16 = *plVar15;
      *(undefined4 *)(in_x1 + 0x10) = 0;
      pLVar17 = *(LineBreakCategory **)(lVar16 + 0x10);
      *(undefined4 *)(in_x1 + 0x14) = 0;
      (*(code *)pLVar17)(plVar15);
    }
    cVar4 = isInState((UniverseMap *)param_1,2);
    if (cVar4 == '\0') {
      cVar4 = isInState((UniverseMap *)param_1,6);
      if (((cVar4 == '\0') && (cVar4 = isInState((UniverseMap *)param_1,3), cVar4 == '\0')) &&
         (cVar4 = isInState((UniverseMap *)param_1,9), cVar4 == '\0')) {
        cVar4 = isInState((UniverseMap *)param_1,8);
        if (((cVar4 != '\0') || (cVar4 = isInState((UniverseMap *)param_1,5), cVar4 != '\0')) ||
           (cVar4 = isInState((UniverseMap *)param_1,0xb), cVar4 != '\0')) {
          fVar20 = *(float *)(param_1 + 0xf8);
          auVar21 = PVZ_T();
          pLVar17 = (LineBreakCategory *)0x3;
          local_28[0] = 0;
          local_30[0] = 0x3f800000;
          CurveLerp<float>(auVar21,fVar20 + 0.4,auVar21._0_4_,local_30,local_28);
        }
      }
      else {
        fVar20 = *(float *)(param_1 + 0xf8);
        auVar21 = PVZ_T();
        pLVar17 = (LineBreakCategory *)0x2;
        local_30[0] = 0;
        local_28[0] = 0x3f800000;
        CurveLerp<float>(auVar21,fVar20 + 0.4,auVar21._0_4_,local_30,local_28);
      }
    }
    RenderQueue::RenderQueue((RenderQueue *)local_28,0x40);
    UIWidget::AddToRenderQueueForAllWidgets((RenderQueue *)local_28);
    Sexy::OutputDebugStrF((wchar_t *)"start sort");
    puVar10 = (undefined8 *)RenderQueue::GetSortedQueue((RenderQueue *)local_28);
    Sexy::OutputDebugStrF((wchar_t *)"end sort, start draw");
    uVar11 = *puVar10;
    *(undefined4 *)(in_x1 + 0x10) = 0;
    *(undefined4 *)(in_x1 + 0x14) = 0;
    local_40 = FUN_044d8be4(uVar11);
    local_38 = FUN_044d8c34(puVar10[1]);
    while (bVar5 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar5)
    {
      this_00 = (Delegate1wRet<bool,SexyURL_const&> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
      Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_30,in_x1);
      Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(this_00,(SexyURL *)in_x1);
      Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_30);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_40);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x328);
    uVar18 = 0;
    uVar12 = FUN_044d55f4(uVar11,*(undefined8 *)(param_1 + 0x330));
    if (uVar12 != 0) {
      do {
        plVar15 = (long *)FUN_044d5600(uVar11,uVar18);
        cVar4 = FUN_044d5578(*(undefined8 *)(*plVar15 + 0x1d0));
        if (cVar4 != '\0') {
          auVar21 = LawnApp::GetWorldMap(gLawnApp);
          cVar4 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                            (auVar21._0_8_,auVar21._8_8_,pLVar17,in_x3,in_x4);
          if (cVar4 == '\0') {
            uVar11 = *(undefined8 *)(param_1 + 0x328);
            uVar2 = *(undefined4 *)(in_x1 + 0x14);
            *(undefined4 *)(in_x1 + 0x14) = 0;
            uVar3 = *(undefined4 *)(in_x1 + 0x10);
            *(undefined4 *)(in_x1 + 0x10) = 0;
            plVar15 = (long *)FUN_044d5600(uVar11,uVar18);
            plVar15 = (long *)FUN_044d55bc(*(undefined8 *)(*plVar15 + 0x1d0));
            pLVar17 = *(LineBreakCategory **)(*plVar15 + 0x10);
            (*(code *)pLVar17)();
            uVar11 = *(undefined8 *)(param_1 + 0x328);
            uVar14 = *(undefined8 *)(param_1 + 0x330);
            *(undefined4 *)(in_x1 + 0x14) = uVar2;
            *(undefined4 *)(in_x1 + 0x10) = uVar3;
            uVar12 = FUN_044d55f4(uVar11,uVar14);
          }
          else {
            uVar11 = *(undefined8 *)(param_1 + 0x328);
            uVar12 = FUN_044d55f4(uVar11,*(undefined8 *)(param_1 + 0x330));
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar12);
    }
    cVar4 = isInState((UniverseMap *)param_1,6);
    if (cVar4 == '\0') {
      uVar12 = 3;
      lVar16 = FUN_044d55f4(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330));
      iVar6 = FUN_044d5aa0(((int)lVar16 + -1) * 0x19);
      iVar1 = *(int *)(gLawnApp + 0x724);
      iVar19 = 0x4b;
      while (iVar8 = (int)uVar12, uVar12 < lVar16 - 3U) {
        iVar9 = EA::Thread::Mutex::GetLockCount((Mutex *)(param_1 + 0x2e8));
        if (iVar9 < 3) {
          iVar7 = FUN_044d55f4(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330));
          iVar9 = iVar9 + iVar7 + -6;
        }
        else {
          lVar16 = FUN_044d55f4(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330));
          if (lVar16 - 3U <= (ulong)(long)iVar9) {
            iVar9 = iVar9 + (6 - (int)lVar16);
          }
        }
        uVar12 = uVar12 + 1;
        this = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0df98;
        if (iVar8 == iVar9) {
          this = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0e118;
        }
        pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this);
        iVar8 = FUN_044d5aa0(iVar19);
        iVar9 = FUN_044d5aa0(0x226);
        Sexy::Graphics::DrawImage(in_x1,pIVar13,iVar8 + (iVar1 - iVar6) / 2,iVar9);
        lVar16 = FUN_044d55f4(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x330));
        iVar19 = iVar19 + 0x19;
      }
    }
    RenderQueue::~RenderQueue((RenderQueue *)local_28);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::Draw(Sexy::Graphics*) */

void __thiscall UniverseMap::Draw(UniverseMap *this,Graphics *param_1)

{
  char cVar1;
  Image *pIVar2;
  GraphicsAutoState aGStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x7c] != (UniverseMap)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_10,param_1);
    UniverseMapScrollSnapper::UpdateVisualStates
              ((UniverseMapScrollSnapper *)(this + 0x2e8),*(ScrollWidget **)(this + 0x2a8));
    cVar1 = isInState(this,8);
    if (((cVar1 == '\0') && (cVar1 = isInState(this,3), cVar1 == '\0')) &&
       ((cVar1 = isInState(this,2), cVar1 != '\0' || (cVar1 = isInState(this,0xc), cVar1 != '\0'))))
    {
      pIVar2 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0dc68);
      Sexy::Graphics::DrawImage(param_1,pIVar2,0,0,*(int *)(this + 0x60),*(int *)(this + 100));
    }
    DrawUI((Graphics *)this);
    Sexy::Widget::DeferOverlay((Widget *)(this + 0x10),2);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to UniverseMap::Draw(Sexy::Graphics*) */

void __thiscall UniverseMap::Draw(UniverseMap *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* non-virtual thunk to UniverseMap::Draw(Sexy::Graphics*) */

void __thiscall UniverseMap::Draw(UniverseMap *this,Graphics *param_1)

{
  Draw(this + -8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::addToLoadingResourcesGroupList(std::string const&) */

void __thiscall UniverseMap::addToLoadingResourcesGroupList(UniverseMap *this,string *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x240);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    if (local_8 == ___stack_chk_guard) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)this_00,param_1);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::CheckNewWorldsFinished() */

void __thiscall UniverseMap::CheckNewWorldsFinished(UniverseMap *this)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 *puVar10;
  long lVar11;
  string *psVar12;
  UniverseWorldButton *pUVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  UniverseUnlockGate *pUVar18;
  undefined8 uVar19;
  long lVar20;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    iVar6 = 0;
    iVar9 = 1;
    std::string::string(asStack_10,"egypt5");
    lVar16 = 0;
LAB_044e25a4:
    PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    iVar7 = iVar6;
  }
  else {
    iVar6 = FUN_044d54fc(*(undefined4 *)(this_01 + 0xff0));
    if (iVar6 == -1) {
      lVar16 = 0;
      bVar1 = false;
      bVar5 = false;
      do {
        iVar7 = (int)lVar16;
        uVar17 = 0;
        plVar15 = (long *)FUN_044d5710(*(undefined8 *)(this + 0x340),lVar16);
        lVar20 = *plVar15;
        uVar19 = *(undefined8 *)(lVar20 + 0xd8);
        uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(lVar20 + 0xe0));
        if (uVar14 == 0) {
          bVar5 = true;
        }
        while (uVar17 < uVar14) {
          psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
          cVar4 = HasFinishedTargetWorld(psVar12);
          if (cVar4 == '\0') {
            bVar1 = true;
          }
          else if (0 < iVar7) {
            bVar5 = true;
          }
          uVar19 = *(undefined8 *)(lVar20 + 0xd8);
          uVar2 = uVar17 + 1;
          uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(lVar20 + 0xe0));
          bVar3 = uVar17 == uVar14 - 1;
          uVar17 = uVar2;
          if ((bVar3) && (bVar1)) {
            if (bVar5) {
              iVar9 = iVar7 + 1;
              iVar6 = iVar7;
            }
            else {
              lVar16 = 0;
              iVar9 = 1;
              iVar6 = 0;
            }
            std::string::string(asStack_10,"egypt5");
            iVar7 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
            std::string::~string(asStack_10);
            nop();
            bVar1 = 2 < iVar7;
            if (!bVar5) goto LAB_044e1f18;
            iVar7 = iVar6;
            if (0 < iVar6) goto LAB_044e2420;
            goto LAB_044e1fcc;
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != 5);
      if (bVar1) {
        lVar16 = -1;
        iVar9 = 0;
        std::string::string(asStack_10,"egypt5");
        goto LAB_044e25a4;
      }
      iVar9 = 5;
      lVar16 = 4;
      std::string::string(asStack_10,"egypt5");
      iVar6 = 5;
      iVar7 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      bVar1 = 2 < iVar7;
      iVar7 = 4;
LAB_044e2420:
      lVar20 = 0;
      do {
        puVar10 = (undefined8 *)FUN_044d5710(*(undefined8 *)(this + 0x340),lVar20);
        pUVar18 = (UniverseUnlockGate *)*puVar10;
        uVar17 = 0;
        while( true ) {
          uVar19 = *(undefined8 *)(pUVar18 + 0xd8);
          uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xe0));
          if (uVar14 <= uVar17) break;
          psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
          PlayerInfo::AddWorldAnimPlayed(this_01,psVar12);
          uVar17 = uVar17 + 1;
        }
        uVar17 = 0;
        UniverseUnlockGate::SetGateStatus(pUVar18,2);
        if (bVar1) {
          uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
          lVar11 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
          if (lVar11 != 0) {
            do {
              psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
              pUVar13 = (UniverseWorldButton *)GetButtonForWorld(this,psVar12);
              if (pUVar13 != (UniverseWorldButton *)0x0) {
                UniverseWorldButton::SetIsRevealed(pUVar13,true);
              }
              uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
              uVar17 = uVar17 + 1;
              uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
            } while (uVar17 < uVar14);
          }
        }
        else {
          while( true ) {
            uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
            uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
            if (uVar14 <= uVar17) break;
            psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
            pUVar13 = (UniverseWorldButton *)GetButtonForWorld(this,psVar12);
            if (pUVar13 == (UniverseWorldButton *)0x0) {
LAB_044e250c:
              uVar17 = uVar17 + 1;
            }
            else {
              UniverseWorldButton::GetWorldName();
              bVar5 = std::operator==(asStack_10,"egypt");
              std::string::~string(asStack_10);
              if (bVar5) {
                UniverseWorldButton::SetIsRevealed(pUVar13,true);
                goto LAB_044e250c;
              }
              uVar17 = uVar17 + 1;
            }
          }
        }
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < iVar6);
    }
    else {
      lVar16 = (long)iVar6;
      iVar9 = iVar6 + 1;
      std::string::string(asStack_10,"egypt5");
      iVar7 = PlayerInfo::GetWorldMapEventStatus(this_01,asStack_10);
      std::string::~string(asStack_10);
      nop();
      bVar1 = 2 < iVar7;
LAB_044e1f18:
      iVar7 = iVar6;
      if (0 < iVar6) {
        if (iVar6 == 4) {
          plVar15 = (long *)FUN_044d5710(*(undefined8 *)(this + 0x340),4);
          lVar20 = *plVar15;
          uVar17 = 0;
          do {
            uVar19 = *(undefined8 *)(lVar20 + 0xd8);
            uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(lVar20 + 0xe0));
            if (uVar14 <= uVar17) {
              iVar6 = 5;
              goto LAB_044e1f2c;
            }
            psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
            cVar4 = HasFinishedTargetWorld(psVar12);
            if (cVar4 == '\0') break;
            psVar12 = (string *)FUN_044d56e8(*(undefined8 *)(lVar20 + 0xd8),uVar17);
            cVar4 = HasPlayedTargetWorldAnim(this,psVar12);
            uVar17 = uVar17 + 1;
          } while (cVar4 != '\0');
          iVar6 = 4;
        }
LAB_044e1f2c:
        lVar20 = 0;
        do {
          uVar17 = 0;
          puVar10 = (undefined8 *)FUN_044d5710(*(undefined8 *)(this + 0x340),lVar20);
          pUVar18 = (UniverseUnlockGate *)*puVar10;
          UniverseUnlockGate::SetGateStatus(pUVar18,2);
          if (bVar1) {
            uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
            lVar11 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
            if (lVar11 != 0) {
              do {
                psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
                pUVar13 = (UniverseWorldButton *)GetButtonForWorld(this,psVar12);
                if (pUVar13 != (UniverseWorldButton *)0x0) {
                  UniverseWorldButton::SetIsRevealed(pUVar13,true);
                }
                uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
                uVar17 = uVar17 + 1;
                uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
              } while (uVar17 < uVar14);
            }
          }
          else {
            while( true ) {
              uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
              uVar14 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
              if (uVar14 <= uVar17) break;
              psVar12 = (string *)FUN_044d56e8(uVar19,uVar17);
              pUVar13 = (UniverseWorldButton *)GetButtonForWorld(this,psVar12);
              if (pUVar13 == (UniverseWorldButton *)0x0) {
LAB_044e2180:
                uVar17 = uVar17 + 1;
              }
              else {
                UniverseWorldButton::GetWorldName();
                bVar5 = std::operator==(asStack_10,"egypt");
                std::string::~string(asStack_10);
                if (bVar5) {
                  UniverseWorldButton::SetIsRevealed(pUVar13,true);
                  goto LAB_044e2180;
                }
                uVar17 = uVar17 + 1;
              }
            }
          }
          lVar20 = lVar20 + 1;
        } while ((int)lVar20 < iVar6);
      }
    }
  }
LAB_044e1fcc:
  FUN_044d5500(this_01 + 0xff0,iVar7);
  this[0x2e0] = (UniverseMap)0x0;
  puVar10 = (undefined8 *)FUN_044d5710(*(undefined8 *)(this + 0x340),lVar16);
  pUVar18 = (UniverseUnlockGate *)*puVar10;
  uVar19 = *(undefined8 *)(pUVar18 + 0xd8);
  uVar17 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xe0));
  if (uVar17 == 0) {
    iVar8 = 0;
    uVar14 = 0;
LAB_044e2298:
    this[0x2e0] = (UniverseMap)0x1;
  }
  else {
    lVar16 = 0;
    iVar8 = 0;
    iVar6 = 0;
    while( true ) {
      psVar12 = (string *)FUN_044d56e8(uVar19,lVar16);
      cVar4 = HasFinishedTargetWorld(psVar12);
      if (cVar4 != '\0') {
        iVar6 = iVar6 + 1;
        psVar12 = (string *)FUN_044d56e8(*(undefined8 *)(pUVar18 + 0xd8),lVar16);
        cVar4 = HasPlayedTargetWorldAnim(this,psVar12);
        if (cVar4 == '\0') {
          psVar12 = (string *)FUN_044d56e8(*(undefined8 *)(pUVar18 + 0xd8),lVar16);
          std::vector<std::string,std::allocator<std::string>>::push_back
                    ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8),psVar12);
        }
        else {
          iVar8 = iVar8 + 1;
        }
      }
      if (lVar16 + 1U == uVar17) break;
      lVar16 = lVar16 + 1;
      uVar19 = *(undefined8 *)(pUVar18 + 0xd8);
    }
    uVar14 = (ulong)iVar8;
    if (uVar17 == (long)iVar6) goto LAB_044e2298;
  }
  if (uVar17 == uVar14) {
    UniverseUnlockGate::SetGateStatus(pUVar18,2);
    if (iVar9 < 5) goto LAB_044e20b8;
LAB_044e21f8:
    uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
    lVar16 = FUN_044d56dc(uVar19,*(undefined8 *)(pUVar18 + 0xf8));
    if (lVar16 != 0) {
      lVar20 = 0;
      bVar1 = false;
      while( true ) {
        psVar12 = (string *)FUN_044d56e8(uVar19,lVar20);
        pUVar13 = (UniverseWorldButton *)GetButtonForWorld(this,psVar12);
        if ((pUVar13 != (UniverseWorldButton *)0x0) &&
           (cVar4 = FUN_044d6d18(*(undefined4 *)(pUVar13 + 0x1a8)), cVar4 == '\0')) {
          bVar1 = true;
          UniverseWorldButton::SetIsRevealed(pUVar13,true);
        }
        if (lVar20 + 1 == lVar16) break;
        lVar20 = lVar20 + 1;
        uVar19 = *(undefined8 *)(pUVar18 + 0xf0);
      }
      if (bVar1) {
        this[0x2e0] = (UniverseMap)0x0;
        if (3 < iVar7) {
          *(int *)(this + 0x35c) = iVar7;
          goto LAB_044e2108;
        }
        FUN_044d5500(this_01 + 0xff0,iVar9);
        iVar7 = iVar9;
      }
    }
  }
  else {
    if ((iVar8 == 0) || (uVar17 <= uVar14)) {
      UniverseUnlockGate::SetGateStatus(pUVar18,0);
    }
    else {
      UniverseUnlockGate::SetGateStatus(pUVar18,1);
    }
    if (iVar9 < 5) {
LAB_044e20b8:
      lVar16 = (long)iVar9;
      iVar6 = iVar9;
      do {
        puVar10 = (undefined8 *)FUN_044d5710(*(undefined8 *)(this + 0x340),lVar16);
        if ((UniverseUnlockGate *)*puVar10 != (UniverseUnlockGate *)0x0) {
          UniverseUnlockGate::SetGateStatus((UniverseUnlockGate *)*puVar10,0);
        }
        iVar6 = iVar6 + 1;
        lVar16 = lVar16 + 1;
      } while (iVar6 < 5);
      if (uVar17 == uVar14) goto LAB_044e21f8;
    }
  }
  *(int *)(this + 0x35c) = iVar7;
  if (this[0x2e0] != (UniverseMap)0x0) {
    SetPlayRevealedWorlds(this);
  }
LAB_044e2108:
  lVar16 = FUN_044d56dc(*(undefined8 *)(this + 0x2c8),*(undefined8 *)(this + 0x2d0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar16 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::imageResourceInitialize(bool) */

void __thiscall UniverseMap::imageResourceInitialize(UniverseMap *this,bool param_1)

{
  vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *this_00;
  UniverseMapScrollSnapper *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  UniverseScrollingArea *this_02;
  ProfileMgr *this_03;
  PlayerInfo *this_04;
  string *psVar13;
  UniverseWorldButton *pUVar14;
  Sexy *pSVar15;
  long lVar16;
  undefined8 *puVar17;
  UniverseWorldButton **ppUVar18;
  ulong uVar19;
  DangerRoomManager *this_05;
  PrimeText_PotentialText *pPVar20;
  PrimeTextWidget *this_06;
  wchar16 *extraout_x1;
  string *extraout_x1_00;
  LineBreakCategory *pLVar21;
  LineBreakCategory *pLVar22;
  LineBreakCategory *pLVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long *plVar30;
  undefined8 uVar31;
  uint local_94;
  int local_90;
  UniverseWorldButton *local_68;
  string asStack_60 [8];
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_20 [24];
  long local_8;
  
  this[0x360] = (UniverseMap)param_1;
  this_00 = (vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)(this + 0x328);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::empty(this_00);
  if (cVar1 != '\0') {
    if (*(long *)(this + 0x2b8) == 0) {
      uVar29 = PrimeText_PotentialTypeface::Typeface
                         (PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
      iVar6 = FUN_044d5aa0(0x28);
      iVar3 = *(int *)(this + 0x60);
      iVar4 = FUN_044d5aa0(0x3c);
      TodStringTranslate(L"[UNIVERSE_MAP_TITLE]");
      Sexy::Insets::Insets((Insets *)asStack_20,(Insets *)&PrimeText_Game::Color_Generic_Title);
      pPVar20 = (PrimeText_PotentialText *)
                Sexy::BuildPotentialText_Paragraph
                          (0,(float)iVar6,(float)iVar3,(float)iVar4,uVar29,
                           (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_38,1,1,asStack_20);
      this_06 = ::operator_new(0xf8);
      Sexy::PrimeTextWidget::PrimeTextWidget(this_06,pPVar20);
      *(PrimeTextWidget **)(this + 0x2b8) = this_06;
      FUN_05476c50((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      (**(code **)(**(long **)(this + 0x2b8) + 0x158))(*(long **)(this + 0x2b8),0);
      (**(code **)(*(long *)(this + 0x10) + 0x60))(this + 0x10,*(undefined8 *)(this + 0x2b8));
    }
    local_68 = (UniverseWorldButton *)0x0;
    lVar12 = LawnApp::GetWorldMapList(gLawnApp);
    this_02 = ::operator_new(0x128);
    UniverseScrollingArea::UniverseScrollingArea(this_02,this);
    *(UniverseScrollingArea **)(this + 0x2a0) = this_02;
    this_03 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_04 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_03);
    iVar6 = *(int *)(this + 0x60);
    iVar3 = FUN_044d5aa0(0xb0);
    iVar3 = (iVar6 - iVar3) / 2;
    iVar4 = FUN_044d5aa0(0x2c0);
    iVar5 = FUN_044d5aa0(0x19);
    iVar4 = ((iVar6 - iVar4) - iVar5) / 7;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::clear
              ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)&local_38);
    uVar29 = *(undefined8 *)(lVar12 + 8);
    iVar6 = FUN_044d56f0(uVar29,*(undefined8 *)(lVar12 + 0x10));
    iVar6 = iVar6 + -1;
    if (0 < iVar6) {
      lVar25 = (long)iVar6;
      local_94 = 0;
      do {
        psVar13 = (string *)FUN_044d56c8(uVar29,lVar25);
        if (psVar13[0x32] == (string)0x0) {
          if (psVar13[0xaf] == (string)0x0) {
            if (this[0x360] != (UniverseMap)0x0) goto LAB_044e29c8;
LAB_044e29d8:
            iVar5 = FUN_044d55f4(local_38,local_30);
            pUVar14 = ::operator_new(0x230);
            UniverseWorldButton::UniverseWorldButton
                      (pUVar14,2 - iVar5,(ButtonListener *)(this + 0xf0));
            local_68 = pUVar14;
            iVar5 = FUN_044d5aa0(0xb0);
            iVar7 = FUN_044d55f4(local_38,local_30);
            iVar8 = FUN_044d5aa0(0);
            iVar9 = FUN_044d5aa0(0x198);
            Sexy::Insets::Insets
                      (aIStack_48,iVar3 + iVar4 + (iVar5 + iVar4) * (2 - iVar7),iVar8,iVar5,iVar9);
            (**(code **)(*(long *)local_68 + 0x1a0))(local_68,aIStack_48);
            FUN_044d55e8(local_68 + 0x228,this[0x360]);
            Set8BytesTo0(asStack_50);
            pSVar15 = (Sexy *)FUN_044d56c8(*(undefined8 *)(lVar12 + 8),lVar25);
            if (pSVar15[0x30] == (Sexy)0x0) {
              local_94 = local_94 + 1;
              Sexy::StringToUpper(pSVar15,(string *)(ulong)local_94);
              FUN_05474278(asStack_50,asStack_20);
              std::string::~string(asStack_20);
              UniverseWorldButton::SetIsUniverseButton(local_68,true);
              pUVar14 = local_68;
              lVar16 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),lVar25);
              UniverseWorldButton::SetIsComingSoon(pUVar14,*(bool *)(lVar16 + 0x30));
              FUN_044d5584(local_68 + 0x1ac,iVar6);
              pUVar14 = local_68;
              lVar16 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),lVar25);
              Sexy::Point::Point((Point *)asStack_20,(TPoint *)(lVar16 + 0x40));
              UniverseWorldButton::SetUniverseIconOffset(pUVar14,asStack_20);
              pUVar14 = local_68;
              Sexy::Insets::Insets((Insets *)asStack_20,aIStack_48);
              UniverseWorldButton::Init(pUVar14,asStack_20,asStack_50);
              std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::push_back
                        ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)
                         &local_38,&local_68);
              if (local_94 == 3) {
                std::string::~string(asStack_50);
                break;
              }
            }
            std::string::~string(asStack_50);
          }
          else if (this[0x360] != (UniverseMap)0x0) {
LAB_044e29c8:
            cVar1 = isInDangerRoom(this,psVar13);
            if (cVar1 != '\0') goto LAB_044e29d8;
          }
        }
        iVar6 = iVar6 + -1;
        lVar25 = lVar25 + -1;
        if (iVar6 == 0) break;
        uVar29 = *(undefined8 *)(lVar12 + 8);
      } while( true );
    }
    iVar6 = FUN_044d55f4(local_38,local_30);
    uVar24 = iVar6 - 1;
    if (-1 < (int)uVar24) {
      uVar26 = (long)(int)uVar24 - 1;
      uVar28 = uVar26;
      uVar19 = (long)(int)uVar24;
      while( true ) {
        uVar27 = uVar28;
        plVar30 = *(long **)(this + 0x2a0);
        puVar17 = (undefined8 *)
                  std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::at
                            ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)
                             &local_38,uVar19);
        (**(code **)(*plVar30 + 0x60))(plVar30,*puVar17);
        ppUVar18 = (UniverseWorldButton **)
                   std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::at
                             ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)
                              &local_38,uVar19);
        std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::push_back
                  (this_00,ppUVar18);
        if (uVar27 == uVar26 - uVar24) break;
        uVar28 = uVar27 - 1;
        uVar19 = uVar27;
      }
    }
    local_90 = 3;
    uVar28 = 0;
    std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::clear
              ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)&local_38);
    uVar29 = *(undefined8 *)(lVar12 + 8);
    uVar31 = *(undefined8 *)(lVar12 + 0x10);
    uVar19 = FUN_044d56f0(uVar29,uVar31);
    uVar10 = 0;
    if (uVar19 != 0) {
      do {
        psVar13 = (string *)FUN_044d56c8(uVar29,uVar28);
        if (psVar13[0x32] == (string)0x0) {
          if (psVar13[0xaf] == (string)0x0) {
            if (this[0x360] != (UniverseMap)0x0) goto LAB_044e2ea4;
LAB_044e2eb4:
            iVar6 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
            pUVar14 = ::operator_new(0x230);
            UniverseWorldButton::UniverseWorldButton(pUVar14,iVar6,(ButtonListener *)(this + 0xf0));
            local_68 = pUVar14;
            iVar6 = FUN_044d5aa0(0xb0);
            iVar5 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
            iVar7 = FUN_044d5aa0(0);
            iVar8 = FUN_044d5aa0(0x198);
            Sexy::Insets::Insets
                      (aIStack_48,iVar3 + iVar4 + (iVar6 + iVar4) * iVar5,iVar7,iVar6,iVar8);
            (**(code **)(*(long *)local_68 + 0x1a0))(local_68,aIStack_48);
            FUN_044d55e8(local_68 + 0x228,this[0x360]);
            std::string::string(asStack_60,"");
            nop();
            pSVar15 = (Sexy *)FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
            if (pSVar15[0x30] == (Sexy)0x0) {
              Sexy::StringToUpper(pSVar15,(string *)0x0);
              FUN_05474278(asStack_60,asStack_20);
              std::string::~string(asStack_20);
              if (this[0x360] == (UniverseMap)0x0) {
                uVar29 = PlayerInfo::GetLastWorldName(this_04);
                FUN_05475d88(aSStack_58,uVar29);
              }
              else {
                this_05 = (DangerRoomManager *)
                          Sexy::LazySingleton<DangerRoomManager>::GetInstancePtr();
                DangerRoomManager::GetCurrentTrainingWorld(this_05);
              }
              bVar2 = std::operator!=(asStack_60,"");
              if ((bVar2) && (this_04 != (PlayerInfo *)0x0)) {
                Sexy::StringToLower((Sexy *)asStack_60,(string *)this_04);
                Sexy::StringToLower(aSStack_58,extraout_x1_00);
                cVar1 = std::operator==(asStack_50,asStack_20);
                std::string::~string(asStack_20);
                std::string::~string(asStack_50);
                if (cVar1 != '\0') {
                  local_90 = FUN_044d55f4(*(undefined8 *)(this + 0x328),
                                          *(undefined8 *)(this + 0x330));
                }
              }
              UniverseWorldButton::SetIsUniverseButton(local_68,true);
              pUVar14 = local_68;
              lVar25 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
              UniverseWorldButton::SetIsComingSoon(pUVar14,*(bool *)(lVar25 + 0x30));
              FUN_044d5584(local_68 + 0x1ac,uVar10);
              pUVar14 = local_68;
              lVar25 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
              Sexy::Point::Point((Point *)asStack_20,(TPoint *)(lVar25 + 0x40));
              UniverseWorldButton::SetUniverseIconOffset(pUVar14,asStack_20);
              pUVar14 = local_68;
              Sexy::Insets::Insets((Insets *)asStack_20,aIStack_48);
              UniverseWorldButton::Init(pUVar14,asStack_20,asStack_60);
              std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::push_back
                        (this_00,&local_68);
              (**(code **)(**(long **)(this + 0x2a0) + 0x60))(*(long **)(this + 0x2a0),local_68);
              std::string::~string((string *)aSStack_58);
              std::string::~string(asStack_60);
            }
            else {
              std::string::~string(asStack_60);
            }
          }
          else {
            if (this[0x360] == (UniverseMap)0x0) goto LAB_044e3100;
LAB_044e2ea4:
            cVar1 = isInDangerRoom(this,psVar13);
            if (cVar1 != '\0') goto LAB_044e2eb4;
          }
          uVar29 = *(undefined8 *)(lVar12 + 8);
          uVar31 = *(undefined8 *)(lVar12 + 0x10);
          uVar19 = FUN_044d56f0(uVar29,uVar31);
        }
LAB_044e3100:
        uVar28 = uVar28 + 1;
        uVar10 = (undefined4)uVar28;
      } while (uVar28 < uVar19);
    }
    uVar24 = 0;
    for (uVar28 = 0; uVar28 < uVar19; uVar28 = uVar28 + 1) {
      psVar13 = (string *)FUN_044d56c8(uVar29,uVar28);
      if (psVar13[0x32] == (string)0x0) {
        if (psVar13[0xaf] == (string)0x0) {
          if (this[0x360] == (UniverseMap)0x0) {
LAB_044e31b0:
            iVar6 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
            pUVar14 = ::operator_new(0x230);
            UniverseWorldButton::UniverseWorldButton(pUVar14,iVar6,(ButtonListener *)(this + 0xf0));
            local_68 = pUVar14;
            iVar6 = FUN_044d5aa0(0xb0);
            iVar5 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
            iVar7 = FUN_044d5aa0(0);
            iVar8 = FUN_044d5aa0(0x198);
            Sexy::Insets::Insets
                      (aIStack_48,iVar3 + iVar4 + (iVar6 + iVar4) * iVar5,iVar7,iVar6,iVar8);
            (**(code **)(*(long *)local_68 + 0x1a0))(local_68,aIStack_48);
            FUN_044d55e8(local_68 + 0x228,this[0x360]);
            Set8BytesTo0(asStack_50);
            pSVar15 = (Sexy *)FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
            if (pSVar15[0x30] != (Sexy)0x0) {
              std::string::~string(asStack_50);
              uVar29 = *(undefined8 *)(lVar12 + 8);
              uVar31 = *(undefined8 *)(lVar12 + 0x10);
              goto LAB_044e3168;
            }
            uVar24 = uVar24 + 1;
            Sexy::StringToUpper(pSVar15,(string *)(ulong)uVar24);
            FUN_05474278(asStack_50,asStack_20);
            std::string::~string(asStack_20);
            UniverseWorldButton::SetIsUniverseButton(local_68,true);
            pUVar14 = local_68;
            lVar25 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
            UniverseWorldButton::SetIsComingSoon(pUVar14,*(bool *)(lVar25 + 0x30));
            FUN_044d5584(local_68 + 0x1ac,uVar28 & 0xffffffff);
            pUVar14 = local_68;
            lVar25 = FUN_044d56c8(*(undefined8 *)(lVar12 + 8),uVar28);
            Sexy::Point::Point((Point *)asStack_20,(TPoint *)(lVar25 + 0x40));
            UniverseWorldButton::SetUniverseIconOffset(pUVar14,asStack_20);
            pUVar14 = local_68;
            Sexy::Insets::Insets((Insets *)asStack_20,aIStack_48);
            UniverseWorldButton::Init(pUVar14,asStack_20,asStack_50);
            std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::push_back
                      (this_00,&local_68);
            (**(code **)(**(long **)(this + 0x2a0) + 0x60))(*(long **)(this + 0x2a0),local_68);
            if (uVar24 == 3) {
              std::string::~string(asStack_50);
              break;
            }
            std::string::~string(asStack_50);
          }
          else {
LAB_044e3150:
            cVar1 = isInDangerRoom(this,psVar13);
            if (cVar1 != '\0') goto LAB_044e31b0;
          }
          uVar29 = *(undefined8 *)(lVar12 + 8);
          uVar31 = *(undefined8 *)(lVar12 + 0x10);
        }
        else if (this[0x360] != (UniverseMap)0x0) goto LAB_044e3150;
      }
LAB_044e3168:
      uVar19 = FUN_044d56f0(uVar29,uVar31);
    }
    this_01 = (UniverseMapScrollSnapper *)(this + 0x2e8);
    iVar6 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
    iVar5 = FUN_044d5aa0(0xb0);
    plVar30 = *(long **)(this + 0x2a0);
    uVar10 = FUN_044d5aa0(400);
    (**(code **)(*plVar30 + 0x198))
              (plVar30,0,0,(iVar6 + 2) * iVar4 + iVar5 * iVar6 + iVar3 * 2,uVar10);
    plVar30 = *(long **)(this + 0x2a8);
    uVar10 = FUN_044d5aa0(0);
    uVar11 = FUN_044d5aa0(100);
    uVar28 = FUN_044d5aa0(400);
    pLVar23 = (LineBreakCategory *)(uVar28 & 0xffffffff);
    (**(code **)(*plVar30 + 0x198))(plVar30,uVar10,uVar11,*(undefined4 *)(this + 0x60));
    (**(code **)(**(long **)(this + 0x2a8) + 0x60))
              (*(long **)(this + 0x2a8),*(undefined8 *)(this + 0x2a0));
    FUN_044d57fc(*(long *)(this + 0x2a8) + 0x208);
    iVar3 = FUN_044d5aa0(0xb0);
    iVar6 = FUN_044d55f4(*(undefined8 *)(this + 0x328),*(undefined8 *)(this + 0x330));
    FUN_044d54f0(*(long *)(this + 0x2a8) + 0x20c,(iVar3 + iVar4) * (iVar6 + -6));
    std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::vector
              ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)asStack_20,
               (vector *)this_00);
    UniverseMapScrollSnapper::SetWorldButtons(this_01,asStack_20);
    std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::~vector
              ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)asStack_20);
    UniverseMapScrollSnapper::DoSnap(this_01,*(ScrollWidget **)(this + 0x2a8));
    pLVar21 = *(LineBreakCategory **)(this + 0x2a8);
    pLVar22 = (LineBreakCategory *)0x1;
    UniverseMapScrollSnapper::SnapToIndex(this_01,local_90,(ScrollWidget *)pLVar21,true);
    if ((this_04 != (PlayerInfo *)0x0) &&
       (cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                          ((wchar16 *)this_04,extraout_x1,pLVar21,pLVar22,pLVar23), cVar1 != '\0'))
    {
      (**(code **)(**(long **)(this + 0x2a8) + 0x158))(*(long **)(this + 0x2a8),1);
    }
    std::vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>>::~vector
              ((vector<UniverseWorldButton*,std::allocator<UniverseWorldButton*>> *)&local_38);
  }
  syncButtonStates(this);
  (**(code **)(*(long *)this + 0xa0))(this,2);
  InitializeMapObjects(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::loadImageResource(bool) */

void __thiscall UniverseMap::loadImageResource(UniverseMap *this,bool param_1)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_WorldMap");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Universe_Gate");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Universe_Map");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this[0x294] == (UniverseMap)0x0) {
    imageResourceInitialize(this,param_1);
    this[0x294] = (UniverseMap)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::TransitionToUniverse(bool) */

void __thiscall UniverseMap::TransitionToUniverse(UniverseMap *this,bool param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  WorldMap *this_00;
  ProfileMgr *this_01;
  long lVar4;
  
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar1 = WorldMap::CanBeClosed(this_00);
  if (cVar1 != '\0') {
    loadImageResource(this,param_1);
    this[0x295] = (UniverseMap)0x1;
    initializeWorldButtonState(this);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar4 = ProfileMgr::GetCurrentProfile(this_01);
    if (lVar4 == 0) {
      uVar3 = 6;
    }
    else {
      iVar2 = FUN_044d54f8(*(undefined4 *)(lVar4 + 0x40));
      uVar3 = 6;
      if (iVar2 == 0x26) {
        uVar3 = 0xc;
      }
    }
    (**(code **)(*(long *)this + 0xa0))(this,uVar3);
    MessageRouter::Post((_func_void *)gMessageRouter);
    return;
  }
  return;
}


/* UniverseMap::TransitionBetweenWorlds(std::string const&) */

void __thiscall UniverseMap::TransitionBetweenWorlds(UniverseMap *this,string *param_1)

{
  char cVar1;
  WorldMap *this_00;
  
  loadImageResource(this,false);
  this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp);
  cVar1 = WorldMap::CanBeClosed(this_00);
  if ((cVar1 != '\0') && (cVar1 = CanBeClosed(this), cVar1 != '\0')) {
    thunk_FUN_05475e00(this + 0x280,param_1);
    (**(code **)(*(long *)this + 0xa0))(this,9);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseMap::SetupAdvertisement() */

void __thiscall UniverseMap::SetupAdvertisement(UniverseMap *this)

{
  char cVar1;
  long *plVar2;
  TGALogMgr *pTVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  string asStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  vector<std::string,std::allocator<std::string>> avStack_50 [24];
  Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason> aDStack_38 [8];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsAdvertisementEnable();
  if (cVar1 != '\0') {
    plVar2 = (long *)EASquared::Instance();
    pcVar4 = *(code **)(*plVar2 + 0x28);
    std::string::string(asStack_60,"UniverseMap");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAdsFinish);
    Sexy::Delegate1<EASquaredAdFinishedReason::EASquaredAdFinishedReason>::
    Delegate1<UniverseMap,void(UniverseMap::*)(EASquaredAdFinishedReason::EASquaredAdFinishedReason)>
              (aDStack_38,avStack_50);
    (*pcVar4)(plVar2,asStack_60,aDStack_38,1,2,0x3d);
    std::string::~string(asStack_60);
    nop();
    Sexy::OutputDebugStrF((wchar_t *)"ShowBanner(BANNER_AD_WORLD_SELECT)");
    std::string::string(asStack_70,"2019_SUMMER");
    std::string::string((string *)aDStack_38,"AD_SHOW");
    DString::DString((DString *)asStack_60,0x3d);
    DString::operator_cast_to_string((DString *)asStack_60);
    std::vector<std::string,std::allocator<std::string>>::vector(avStack_50,aDStack_38,2,auStack_80)
    ;
    std::string::string(asStack_68,"");
    BehaviorLog::inGameBehavior(asStack_70,(vector *)avStack_50,asStack_68);
    std::string::~string(asStack_68);
    nop();
    std::vector<std::string,std::allocator<std::string>>::~vector(avStack_50);
    std::string::~string(asStack_30);
    std::string::~string((string *)aDStack_38);
    DString::~DString((DString *)asStack_60);
    nop();
    std::string::~string(asStack_70);
    nop();
    pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
    std::string::string(asStack_70,"1");
    std::string::string(asStack_68,"");
    std::string::string(asStack_60,"");
    std::string::string((string *)avStack_50,"");
    TGALogMgr::LogAD(pTVar3,asStack_70,asStack_68,0x3d,asStack_60,avStack_50);
    std::string::~string((string *)avStack_50);
    nop();
    std::string::~string(asStack_60);
    nop();
    std::string::~string(asStack_68);
    nop();
    std::string::~string(asStack_70);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseMap::onEnterState_TransitionToUniverseOutro(UniverseMapState) */

void UniverseMap::onEnterState_TransitionToUniverseOutro(UniverseMap *param_1)

{
  syncButtonStates(param_1);
  (**(code **)(**(long **)(param_1 + 0x2a8) + 0x158))(*(long **)(param_1 + 0x2a8),1);
  BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  SetupAdvertisement(param_1);
  return;
}

