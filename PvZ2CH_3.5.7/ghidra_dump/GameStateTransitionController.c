// Class: GameStateTransitionController


/* GameStateTransitionController::GetTransitionState() */

void __thiscall
GameStateTransitionController::GetTransitionState(GameStateTransitionController *this)

{
  FUN_03d47ccc(*(undefined4 *)(this + 0x10));
  return;
}


/* GameStateTransitionController::~GameStateTransitionController() */

void __thiscall
GameStateTransitionController::~GameStateTransitionController(GameStateTransitionController *this)

{
  *(undefined ***)this = &PTR_GetClass_0676ade0;
  std::_Destroy<StateDefinition<CardGameState>>((StateDefinition *)(this + 0x10));
  nop();
  return;
}


/* GameStateTransitionController::~GameStateTransitionController() */

void __thiscall
GameStateTransitionController::~GameStateTransitionController(GameStateTransitionController *this)

{
  ~GameStateTransitionController(this);
  AK::FreeHook(this);
  return;
}


/* GameStateTransitionController::onExitState_TransitionOut(GameTransitionState) */

void GameStateTransitionController::onExitState_TransitionOut(long param_1)

{
  int iVar1;
  TransitionOverlayWidget *this;
  
  iVar1 = GameStateMgr::GetState(*(GameStateMgr **)(param_1 + 8));
  if (iVar1 != 0x19) {
    this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
    TransitionOverlayWidget::StopTransition(this);
    return;
  }
  return;
}


/* GameStateTransitionController::onExitState_TransitionWarpTunnelPVZ1(GameTransitionState) */

void GameStateTransitionController::onExitState_TransitionWarpTunnelPVZ1(long param_1)

{
  TransitionOverlayWidget *this;
  
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::StopTransition(this);
  LawnApp::DeleteGroup(gLawnApp,(string *)&DAT_06ad75f0);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


/* GameStateTransitionController::onExitState_TransitionIn(GameTransitionState) */

void GameStateTransitionController::onExitState_TransitionIn(void)

{
  TransitionOverlayWidget *this;
  
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::StopTransition(this);
  return;
}


/* GameStateTransitionController::StaticGetClass() */

long * GameStateTransitionController::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GameStateTransitionController",uVar2,StaticNew);
  return sClass;
}


/* GameStateTransitionController::GetClass() const */

long * GameStateTransitionController::GetClass(void)

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
  (*pcVar3)(plVar1,"GameStateTransitionController",uVar2,StaticNew);
  return sClass;
}


/* GameStateTransitionController::SetOverlayRenderActive(bool) */

void __thiscall
GameStateTransitionController::SetOverlayRenderActive
          (GameStateTransitionController *this,bool param_1)

{
  long lVar1;
  
  lVar1 = LawnApp::GetTransitionOverlay(gLawnApp);
  FUN_03d4f8a4(lVar1 + 0xfe,param_1);
  return;
}


/* GameStateTransitionController::IsTransitioning() const */

bool __thiscall GameStateTransitionController::IsTransitioning(GameStateTransitionController *this)

{
  int iVar1;
  
  iVar1 = FUN_03d4f8b4(*(undefined4 *)(this + 0x10));
  return iVar1 == 4 || iVar1 == 1;
}


/* GameStateTransitionController::IsTransitioningOut() const */

bool __thiscall
GameStateTransitionController::IsTransitioningOut(GameStateTransitionController *this)

{
  int iVar1;
  
  iVar1 = FUN_03d4f8b4(*(undefined4 *)(this + 0x10));
  return iVar1 == 1;
}


/* GameStateTransitionController::doQueuedStateChange() */

void __thiscall
GameStateTransitionController::doQueuedStateChange(GameStateTransitionController *this)

{
  GameStateMgr::DoStateChange(*(GameStateMgr **)(this + 8),*(undefined4 *)(this + 0xbc));
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::startTransitionEffect(GameTransitionType, bool) */

void __thiscall
GameStateTransitionController::startTransitionEffect(undefined8 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  TransitionOverlayWidget *this;
  long lVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == '\0') {
    uVar2 = LawnApp::GetTransitionOverlay(gLawnApp);
    lVar3 = (long)param_2;
    uVar1 = (&DAT_06ad7514)[lVar3 * 7];
    Sexy::Insets::Insets(aIStack_18,(Insets *)(&DAT_06ad7518 + lVar3 * 0x1c));
                    /* WARNING: Load size is inaccurate */
    TransitionOverlayWidget::QueueScreenFadeIn
              (*(TransitionOverlayWidget **)(&DAT_06ad7528 + lVar3 * 7),uVar2,uVar1,aIStack_18,0);
  }
  else {
    uVar2 = LawnApp::GetTransitionOverlay(gLawnApp);
    lVar3 = (long)param_2;
    uVar1 = (&DAT_06ad7514)[lVar3 * 7];
    Sexy::Insets::Insets(aIStack_18,(Insets *)(&DAT_06ad7518 + lVar3 * 0x1c));
                    /* WARNING: Load size is inaccurate */
    TransitionOverlayWidget::QueueScreenFadeOut
              (*(TransitionOverlayWidget **)(&DAT_06ad7528 + lVar3 * 7),uVar2,uVar1,aIStack_18,0);
  }
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::StartTransition(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateTransitionController::onEnterState_TransitionOut(GameTransitionState) */

void GameStateTransitionController::onEnterState_TransitionOut
               (GameStateTransitionController *param_1)

{
  char cVar1;
  
  param_1[0xb8] = (GameStateTransitionController)0x0;
  startTransitionEffect(param_1,*(undefined4 *)(param_1 + 0xb0),1);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') &&
     (((cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0' || (*(int *)(param_1 + 0xb0) == 7)) ||
      (*(int *)(param_1 + 0xb4) == 7)))) {
    SetOverlayRenderActive(param_1,false);
    return;
  }
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  return;
}


/* GameStateTransitionController::onEnterState_TransitionIn(GameTransitionState) */

void GameStateTransitionController::onEnterState_TransitionIn
               (GameStateTransitionController *param_1)

{
  char cVar1;
  TransitionOverlayWidget *this;
  
  startTransitionEffect(param_1,*(undefined4 *)(param_1 + 0xb4),0);
  GameStateMgr::GetState(*(GameStateMgr **)(param_1 + 8));
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::SetPaused(this,(bool)param_1[0xd0]);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if ((cVar1 != '\0') &&
     (((cVar1 = NewPVPUtils::IsPlayingNewPVP(), cVar1 == '\0' || (*(int *)(param_1 + 0xb0) == 7)) ||
      (*(int *)(param_1 + 0xb4) == 7)))) {
    SetOverlayRenderActive(param_1,false);
    return;
  }
  BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  return;
}


/* GameStateTransitionController::Update() */

void __thiscall GameStateTransitionController::Update(GameStateTransitionController *this)

{
  StateMachine<GameTransitionState>::UpdateState((StateMachine<GameTransitionState> *)(this + 0x10))
  ;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::Draw(Sexy::Graphics*) */

void __thiscall
GameStateTransitionController::Draw(GameStateTransitionController *this,Graphics *param_1)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 200) != 0) {
    lVar1 = FUN_03d4f8b0(*(undefined8 *)(*(long *)(this + 200) + 0x20));
    fVar3 = (float)*(int *)(lVar1 + 0x40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),fVar3);
    local_38 = (float)Sexy::SexyVector2::operator*
                                ((SexyVector2 *)&local_38,*(float *)(lVar1 + 0x28));
    local_34 = fVar3;
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar3 = local_38;
    local_40 = 1.0;
    local_3c = (float)*(int *)(gLawnApp + 0xd4) / local_38;
    pfVar2 = eastl::max_alt<float>(&local_40,&local_3c);
    fVar4 = *pfVar2;
    FUN_03d4f86c(-(fVar3 * 0.5),-(local_34 * 0.5),auStack_28,auStack_1c);
    Sexy::SexyTransform2D::Scale(aSStack_30,fVar4,fVar4);
    FUN_03d4f86c((float)(*(int *)(gLawnApp + 0xd4) / 2),(float)(*(int *)(gLawnApp + 0xd8) / 2),
                 auStack_28,auStack_1c);
    PopAnimRig::Draw(*(PopAnimRig **)(this + 200),param_1,aSStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::setTransitionState(StateDefinition<GameTransitionState> const&) */

void __thiscall
GameStateTransitionController::setTransitionState
          (GameStateTransitionController *this,StateDefinition *param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StateMachine<GameTransitionState>::SetState
            ((StateMachine<GameTransitionState> *)(this + 0x10),param_1);
  std::string::string(asStack_10,"GameStateTransitionController TransitionState");
  nop();
  StateDefinition<WorldMapState>::GetDisplayName();
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::GameStateTransitionController() */

void __thiscall
GameStateTransitionController::GameStateTransitionController(GameStateTransitionController *this)

{
  string asStack_b0 [8];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0676ade0;
  StateMachine<GameTransitionState>::StateMachine
            ((StateMachine<GameTransitionState> *)(this + 0x10));
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0xffffffff;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xb8] = (GameStateTransitionController)0x0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xd0] = (GameStateTransitionController)0x0;
  std::string::string(asStack_b0,"GAMETRANSITIONSTATE_Off");
  StateDefinition<GameTransitionState>::StateDefinition(aSStack_a8,0,asStack_b0);
  setTransitionState(this,(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_b0);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GameStateTransitionController::StaticNew() */

GameStateTransitionController * GameStateTransitionController::StaticNew(void)

{
  GameStateTransitionController *this;
  
  this = ::operator_new(0xd8);
  GameStateTransitionController(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::continueTransition() */

void __thiscall
GameStateTransitionController::continueTransition(GameStateTransitionController *this)

{
  undefined4 uVar1;
  string *this_00;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<GameTransitionState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<GameTransitionState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_03d4f8b4(*(undefined4 *)(this + 0x10));
  switch(uVar1) {
  case 1:
    if (*(int *)(this + 0xc0) == 1) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x60);
      this_00 = asStack_188;
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_138,aCStack_180);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x68);
      Sexy::Delegate0::
      Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
                (aDStack_108,aCStack_168);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x70);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_d8,asStack_150);
      std::string::string(this_00,"GAMETRANSITIONSTATE_WarpTunnel");
      StateDefinition<GameTransitionState>::StateDefinition
                (aSStack_a8,2,aDStack_138,aDStack_108,aDStack_d8,this_00);
    }
    else {
      if (*(int *)(this + 0xc0) != 2) {
        if (*(int *)(this + 0xb4) != 0) {
          doQueuedStateChange(this);
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,(_func_void *)0x90);
          Sexy::Delegate1<GameTransitionState>::
          Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                    (aDStack_138,aCStack_180);
          goto LAB_03d505e4;
        }
        doQueuedStateChange(this);
        std::string::string(asStack_150,"");
        goto LAB_03d50524;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x78);
      this_00 = asStack_188;
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_138,aCStack_180);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x80);
      Sexy::Delegate0::
      Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
                (aDStack_108,aCStack_168);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x88);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_d8,asStack_150);
      std::string::string(this_00,"GAMETRANSITIONSTATE_WarpTunnelPVZ1");
      StateDefinition<GameTransitionState>::StateDefinition
                (aSStack_a8,3,aDStack_138,aDStack_108,aDStack_d8,this_00);
    }
    break;
  case 2:
  case 3:
    doQueuedStateChange(this);
    if (*(int *)(this + 0xb4) == 0) {
      std::string::string(asStack_150,"GAMETRANSITIONSTATE_Off");
      goto LAB_03d50524;
    }
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x90);
    Sexy::Delegate1<GameTransitionState>::
    Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
              (aDStack_138,aCStack_180);
LAB_03d505e4:
    this_00 = asStack_188;
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x98);
    Sexy::Delegate0::
    Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
              (aDStack_108,aCStack_168);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0xa0);
    Sexy::Delegate1<GameTransitionState>::
    Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
              (aDStack_d8,asStack_150);
    std::string::string(this_00,"GAMETRANSITIONSTATE_In");
    StateDefinition<GameTransitionState>::StateDefinition
              (aSStack_a8,4,aDStack_138,aDStack_108,aDStack_d8,this_00);
    break;
  case 4:
    std::string::string(asStack_150,"GAMETRANSITIONSTATE_Off");
LAB_03d50524:
    this_00 = asStack_150;
    StateDefinition<GameTransitionState>::StateDefinition(aSStack_a8,0,this_00);
    break;
  default:
    goto switchD_03d504f4_default;
  }
  setTransitionState(this,(StateDefinition *)aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(this_00);
  nop();
switchD_03d504f4_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GameStateTransitionController::updateState_TransitionOut() */

void __thiscall
GameStateTransitionController::updateState_TransitionOut(GameStateTransitionController *this)

{
  char cVar1;
  TransitionOverlayWidget *this_00;
  
  this_00 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  cVar1 = TransitionOverlayWidget::IsTransitionComplete(this_00);
  if (cVar1 != '\0') {
    if (this[0xb8] != (GameStateTransitionController)0x0) {
      continueTransition(this);
      return;
    }
    this[0xb8] = (GameStateTransitionController)0x1;
  }
  return;
}


/* GameStateTransitionController::updateState_TransitionWarpTunnelPVZ1() */

void __thiscall
GameStateTransitionController::updateState_TransitionWarpTunnelPVZ1
          (GameStateTransitionController *this)

{
  char cVar1;
  PopAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  this_00 = *(PopAnimRig **)(this + 200);
  if (this_00 != (PopAnimRig *)0x0) {
    fVar2 = (float)PVZ_T();
    fVar3 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar2,fVar3);
    cVar1 = PopAnimRig::IsPlayingAnything(*(PopAnimRig **)(this + 200));
    if ((cVar1 == '\0') && (*(long **)(this + 200) != (long *)0x0)) {
      (**(code **)(**(long **)(this + 200) + 0x18))();
      *(undefined8 *)(this + 200) = 0;
    }
    return;
  }
  if (this[0xb8] == (GameStateTransitionController)0x0) {
    this[0xb8] = (GameStateTransitionController)0x1;
    return;
  }
  continueTransition(this);
  return;
}


/* GameStateTransitionController::updateState_TransitionIn() */

void __thiscall
GameStateTransitionController::updateState_TransitionIn(GameStateTransitionController *this)

{
  char cVar1;
  TransitionOverlayWidget *pTVar2;
  
  pTVar2 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::SetPaused(pTVar2,(bool)this[0xd0]);
  pTVar2 = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  cVar1 = TransitionOverlayWidget::IsTransitionComplete(pTVar2);
  if (cVar1 == '\0') {
    return;
  }
  continueTransition(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::TransitionToState(GameState, GameTransitionType,
   GameTransitionType) */

void __thiscall
GameStateTransitionController::TransitionToState
          (GameStateTransitionController *this,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  CBMemberTranslatorX aCStack_150 [24];
  Delegate1<GameTransitionState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<GameTransitionState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  *(undefined4 *)(this + 0xbc) = param_2;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0xb0) = param_3;
  *(undefined4 *)(this + 0xb4) = param_4;
  this[0xd0] = (GameStateTransitionController)0x0;
  if (param_3 == 0) {
    if (*(int *)(this + 0xc0) == 1) {
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x60);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_138,aCStack_180);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x68);
      Sexy::Delegate0::
      Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
                (aDStack_108,aCStack_168);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x70);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_d8,aCStack_150);
      std::string::string(asStack_188,"GAMETRANSITIONSTATE_WarpTunnel");
      uVar2 = 2;
    }
    else {
      if (*(int *)(this + 0xc0) != 2) {
        doQueuedStateChange(this);
        if (*(int *)(this + 0xb4) == 0) goto LAB_03d50a70;
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,(_func_void *)0x90);
        Sexy::Delegate1<GameTransitionState>::
        Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                  (aDStack_138,aCStack_180);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,(_func_void *)0x98);
        Sexy::Delegate0::
        Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
                  (aDStack_108,aCStack_168);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,(_func_void *)0xa0);
        Sexy::Delegate1<GameTransitionState>::
        Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                  (aDStack_d8,aCStack_150);
        std::string::string(asStack_188,"GAMETRANSITIONSTATE_In");
        uVar2 = 4;
        goto LAB_03d50b58;
      }
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x78);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_138,aCStack_180);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x80);
      Sexy::Delegate0::
      Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
                (aDStack_108,aCStack_168);
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,(_func_void *)0x88);
      Sexy::Delegate1<GameTransitionState>::
      Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
                (aDStack_d8,aCStack_150);
      std::string::string(asStack_188,"GAMETRANSITIONSTATE_WarpTunnelPVZ1");
      uVar2 = 3;
    }
    StateDefinition<GameTransitionState>::StateDefinition
              (aSStack_a8,uVar2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
    setTransitionState(this,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_188);
    nop();
  }
  else {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x48);
    Sexy::Delegate1<GameTransitionState>::
    Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
              (aDStack_138,aCStack_180);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x50);
    Sexy::Delegate0::
    Delegate0<GameStateTransitionController,void(GameStateTransitionController::*)()>
              (aDStack_108,aCStack_168);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x58);
    Sexy::Delegate1<GameTransitionState>::
    Delegate1<GameStateTransitionController,void(GameStateTransitionController::*)(GameTransitionState)>
              (aDStack_d8,aCStack_150);
    std::string::string(asStack_188,"GAMETRANSITIONSTATE_Out");
    uVar2 = 1;
LAB_03d50b58:
    StateDefinition<GameTransitionState>::StateDefinition
              (aSStack_a8,uVar2,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
    setTransitionState(this,(StateDefinition *)aSStack_a8);
    StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
    std::string::~string(asStack_188);
    nop();
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"Play_UI_Map_Screen_Dissolve");
  }
LAB_03d50a70:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::onEnterState_TransitionWarpTunnel(GameTransitionState) */

void GameStateTransitionController::onEnterState_TransitionWarpTunnel
               (GameStateTransitionController *param_1)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  TransitionOverlayWidget *this;
  char *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameStateMgr::DoStateChange(*(GameStateMgr **)(param_1 + 8),0);
  LawnApp::LoadGroup(gLawnApp,(string *)&DAT_06ad75f0);
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ad74e8);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  *(PopAnimRig **)(param_1 + 200) = pPVar3;
  std::string::string(asStack_40,"animation");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  param_1[0xb8] = (GameStateTransitionController)0x0;
  startTransitionEffect(param_1,*(undefined4 *)(param_1 + 0xb4),0);
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::SetPaused(this,true);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Vortex_Oneshot");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateTransitionController::onEnterState_TransitionWarpTunnelPVZ1(GameTransitionState) */

void GameStateTransitionController::onEnterState_TransitionWarpTunnelPVZ1
               (GameStateTransitionController *param_1)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  TransitionOverlayWidget *this;
  char *pcVar4;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameStateMgr::DoStateChange(*(GameStateMgr **)(param_1 + 8),0);
  LawnApp::LoadGroup(gLawnApp,(string *)&DAT_06ad75f0);
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)&DAT_06ad7628);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  pPVar3 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable(pPVar1,pRVar2);
  *(PopAnimRig **)(param_1 + 200) = pPVar3;
  std::string::string(asStack_40,"animation");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar3,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  param_1[0xb8] = (GameStateTransitionController)0x0;
  startTransitionEffect(param_1,*(undefined4 *)(param_1 + 0xb4),0);
  this = (TransitionOverlayWidget *)LawnApp::GetTransitionOverlay(gLawnApp);
  TransitionOverlayWidget::SetPaused(this,true);
  pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar4,"Play_UI_Vortex_Oneshot");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

