// Class: PVZHotUIGameState


/* PVZHotUIGameState::onHotUILoaded(HotUIAdaptor*) */

void PVZHotUIGameState::onHotUILoaded(HotUIAdaptor *param_1)

{
  return;
}


/* PVZHotUIGameState::~PVZHotUIGameState() */

void __thiscall PVZHotUIGameState::~PVZHotUIGameState(PVZHotUIGameState *this)

{
  *(undefined ***)this = &PTR_GetClass_066a8470;
  PVZGameState::~PVZGameState((PVZGameState *)this);
  return;
}


/* PVZHotUIGameState::~PVZHotUIGameState() */

void __thiscall PVZHotUIGameState::~PVZHotUIGameState(PVZHotUIGameState *this)

{
  ~PVZHotUIGameState(this);
  AK::FreeHook(this);
  return;
}


/* PVZHotUIGameState::HandleSuperFSMAction_PVZGameStateLoadingState(PVZGameStateLoadingState,
   StateAction) */

void PVZHotUIGameState::HandleSuperFSMAction_PVZGameStateLoadingState(void)

{
  return;
}


/* PVZHotUIGameState::StaticNew() */

undefined8 PVZHotUIGameState::StaticNew(void)

{
  return 0;
}


/* PVZHotUIGameState::OnNotifyUILoadFinish() */

void __thiscall PVZHotUIGameState::OnNotifyUILoadFinish(PVZHotUIGameState *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x80))();
  if (lVar1 != 0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
  }
  return;
}


/* PVZHotUIGameState::Exit() */

void __thiscall PVZHotUIGameState::Exit(PVZHotUIGameState *this)

{
  (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],*(undefined8 *)(this + 0x20))
  ;
  (**(code **)(*gLawnApp + 0x150))(gLawnApp,*(undefined8 *)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  (**(code **)(**(long **)(this + 0x28) + 0x158))(*(long **)(this + 0x28),0);
  HotUIAdaptor::RemoveAndDeleteWidget(*(HotUIAdaptor **)(this + 0x28));
  *(undefined8 *)(this + 0x28) = 0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  return;
}


/* PVZHotUIGameState::IsFullyLoadedAndVisible() */

bool __thiscall PVZHotUIGameState::IsFullyLoadedAndVisible(PVZHotUIGameState *this)

{
  int iVar1;
  
  iVar1 = FUN_0385624c(*(undefined4 *)(this + 0x18));
  return iVar1 == 1;
}


/* PVZHotUIGameState::Update() */

void __thiscall PVZHotUIGameState::Update(PVZHotUIGameState *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0385624c(*(undefined4 *)(this + 0x18));
  (**(code **)(*(long *)this + 0x78))(this,uVar1,2);
  return;
}


/* PVZHotUIGameState::setState_PVZGameStateLoadingState(PVZGameStateLoadingState) */

void __thiscall
PVZHotUIGameState::setState_PVZGameStateLoadingState(PVZHotUIGameState *this,int param_2)

{
  if (*(int *)(this + 0x18) != -1) {
    (**(code **)(*(long *)this + 0x78))(this,*(int *)(this + 0x18),3);
  }
  *(int *)(this + 0x18) = param_2;
  if (param_2 != -1) {
    (**(code **)(*(long *)this + 0x78))(this,param_2,1);
  }
  return;
}


/* PVZHotUIGameState::Enter() */

void __thiscall PVZHotUIGameState::Enter(PVZHotUIGameState *this)

{
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  BusyAnimationManager::StartBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
  setState_PVZGameStateLoadingState(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZHotUIGameState::StaticClassInit() */

void PVZHotUIGameState::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZHotUIGameState");
    (*pcVar2)(plVar1,asStack_10,FUN_0385697c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZHotUIGameState::StaticGetClass() */

long * PVZHotUIGameState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZHotUIGameState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZHotUIGameState::GetClass() const */

long * PVZHotUIGameState::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZHotUIGameState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZHotUIGameState::setupHotUI() */

void __thiscall PVZHotUIGameState::setupHotUI(PVZHotUIGameState *this)

{
  long lVar1;
  HotUIAdaptor *this_00;
  
  lVar1 = (**(code **)(*(long *)this + 0x88))();
  FUN_03856228(*(undefined8 *)(lVar1 + 0x18));
  nop();
  *(HotUIAdaptor **)(this + 0x28) = this_00;
  HotUIAdaptor::LoadAndAddWidget(this_00);
  if (*(code **)(*(long *)this + 0x90) != onHotUILoaded) {
    (**(code **)(*(long *)this + 0x90))(this,*(undefined8 *)(this + 0x28));
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZHotUIGameState::setupTopHud() */

void __thiscall PVZHotUIGameState::setupTopHud(PVZHotUIGameState *this)

{
  char cVar1;
  long lVar2;
  undefined8 extraout_x0;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = (**(code **)(*(long *)this + 0x80))();
  if (lVar2 != 0) {
    FUN_03856228(*(undefined8 *)(lVar2 + 0x18));
    nop();
    *(undefined8 *)(this + 0x20) = extraout_x0;
    Sexy::Insets::Insets(aIStack_18,0,0,0,0);
    cVar1 = Sexy::operator==((Color *)(this + 8),(Color *)aIStack_18);
    if (cVar1 == '\0') {
      (**(code **)(**(long **)(this + 0x20) + 0x198))
                (*(long **)(this + 0x20),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc),
                 *(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
      NewYearGoodsSelectTab::InitView(*(NewYearGoodsSelectTab **)(this + 0x20),*(int *)(this + 8));
    }
    else {
      (**(code **)(**(long **)(this + 0x20) + 0x198))
                (*(long **)(this + 0x20),(int)((float)*(int *)(gLawnApp + 0xd4) * 0.18),0,
                 (int)((float)*(int *)(gLawnApp + 0xd4) * 0.82),
                 (int)((float)*(int *)(gLawnApp + 0xd8) * 0.15));
      NewYearGoodsSelectTab::InitView
                (*(NewYearGoodsSelectTab **)(this + 0x20),
                 (int)((float)*(int *)(gLawnApp + 0xd4) * 0.18));
    }
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))
              (*(long **)(gLawnApp + 0x360),*(undefined8 *)(this + 0x20));
    (**(code **)(**(long **)(this + 0x20) + 0x310))(*(long **)(this + 0x20));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZHotUIGameState::PVZHotUIGameState() */

void __thiscall PVZHotUIGameState::PVZHotUIGameState(PVZHotUIGameState *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PVZGameState::PVZGameState((PVZGameState *)this);
  *(undefined ***)this = &PTR_GetClass_066a8470;
  Sexy::Insets::Insets((Insets *)(this + 8),0,0,0,0);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyUILoadFinish);
  Sexy::Delegate0::Delegate0<PVZHotUIGameState,void(PVZHotUIGameState::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::UILoadFinish,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZHotUIGameState::HandleStateMachine_PVZGameStateLoadingState(PVZGameStateLoadingState,
   StateAction) */

void __thiscall
PVZHotUIGameState::HandleStateMachine_PVZGameStateLoadingState
          (PVZHotUIGameState *this,uint param_2,int param_3)

{
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<PVZGameStateLoadingState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_PVZGameStateLoadingState);
  Sexy::Delegate2<PVZGameStateLoadingState,StateAction>::
  Delegate2<PVZHotUIGameState,void(PVZHotUIGameState::*)(PVZGameStateLoadingState,StateAction)>
            (aDStack_38,aCStack_50);
  if (param_2 == 0) {
    if (param_3 == 1) {
      setupTopHud(this);
      setupHotUI(this);
      goto LAB_03856ca0;
    }
    if (param_3 == 0) goto LAB_03856ca0;
    if (param_3 == 2) {
      if ((*(PVZGameStateTopHUDController **)(this + 0x20) == (PVZGameStateTopHUDController *)0x0)
         || (cVar1 = PVZGameStateTopHUDController::IsLoaded
                               (*(PVZGameStateTopHUDController **)(this + 0x20)), cVar1 != '\0')) {
        setState_PVZGameStateLoadingState(this,1);
      }
      goto LAB_03856ca0;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) goto LAB_03856ca0;
    if (param_3 == 1) {
      BusyAnimationManager::StopBusyIcon(*(BusyAnimationManager **)(gLawnApp + 0x28d0));
      goto LAB_03856ca0;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_03856ca0;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
LAB_03856ca0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

