// Class: PVZ1DashboardLoadingState


/* PVZ1DashboardLoadingState::HandleSuperFSMAction_PVZ1DashboardLoadingSubState(PVZ1DashboardLoadingSubState,
   StateAction) */

void PVZ1DashboardLoadingState::HandleSuperFSMAction_PVZ1DashboardLoadingSubState(void)

{
  return;
}


/* PVZ1DashboardLoadingState::Update() */

void __thiscall PVZ1DashboardLoadingState::Update(PVZ1DashboardLoadingState *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_03618b5c(*(undefined4 *)(this + 8));
  (**(code **)(*(long *)this + 0x78))(this,uVar1,2);
  return;
}


/* PVZ1DashboardLoadingState::~PVZ1DashboardLoadingState() */

void __thiscall
PVZ1DashboardLoadingState::~PVZ1DashboardLoadingState(PVZ1DashboardLoadingState *this)

{
  *(undefined ***)this = &PTR_GetClass_06669060;
  PVZGameState::~PVZGameState((PVZGameState *)this);
  return;
}


/* PVZ1DashboardLoadingState::~PVZ1DashboardLoadingState() */

void __thiscall
PVZ1DashboardLoadingState::~PVZ1DashboardLoadingState(PVZ1DashboardLoadingState *this)

{
  ~PVZ1DashboardLoadingState(this);
  AK::FreeHook(this);
  return;
}


/* PVZ1DashboardLoadingState::PVZ1DashboardLoadingState() */

void __thiscall
PVZ1DashboardLoadingState::PVZ1DashboardLoadingState(PVZ1DashboardLoadingState *this)

{
  PVZGameState::PVZGameState((PVZGameState *)this);
  *(undefined ***)this = &PTR_GetClass_06669060;
  return;
}


/* PVZ1DashboardLoadingState::StaticNew() */

PVZ1DashboardLoadingState * PVZ1DashboardLoadingState::StaticNew(void)

{
  PVZ1DashboardLoadingState *this;
  
  this = ::operator_new(0x10);
  PVZ1DashboardLoadingState(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1DashboardLoadingState::StaticClassInit() */

void PVZ1DashboardLoadingState::StaticClassInit(void)

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
    std::string::string(asStack_10,"PVZ1DashboardLoadingState");
    (*pcVar2)(plVar1,asStack_10,FUN_03618e4c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PVZ1DashboardLoadingState::StaticGetClass() */

long * PVZ1DashboardLoadingState::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1DashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1DashboardLoadingState::GetClass() const */

long * PVZ1DashboardLoadingState::GetClass(void)

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
  (*pcVar3)(plVar1,"PVZ1DashboardLoadingState",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PVZ1DashboardLoadingState::finalizeAndExit() */

void PVZ1DashboardLoadingState::finalizeAndExit(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = PVZ1ModeUtils::GetIsFromLevel();
  if (cVar1 == '\0') {
    PVZ1ModeUtils::GoToPVZ1MainMenu();
    return;
  }
  bVar2 = (bool)PVZ1ModeUtils::IsHardMode();
  PVZ1ModeUtils::GoToPVZ1WorldMap(bVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVZ1DashboardLoadingState::HandleStateMachine_PVZ1DashboardLoadingSubState(PVZ1DashboardLoadingSubState,
   StateAction) */

void __thiscall
PVZ1DashboardLoadingState::HandleStateMachine_PVZ1DashboardLoadingSubState
          (PVZ1DashboardLoadingState *this,uint param_2,int param_3)

{
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate2<PVZ1DashboardLoadingSubState,StateAction> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,HandleSuperFSMAction_PVZ1DashboardLoadingSubState);
  Sexy::Delegate2<PVZ1DashboardLoadingSubState,StateAction>::
  Delegate2<PVZ1DashboardLoadingState,void(PVZ1DashboardLoadingState::*)(PVZ1DashboardLoadingSubState,StateAction)>
            (aDStack_38,aCStack_50);
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_0361900c;
    if (param_3 == 2) {
      RiftDashboardLoadingState::setState_RiftDashboardLoadingSubState
                ((RiftDashboardLoadingState *)this,1);
      goto LAB_0361900c;
    }
  }
  else if (param_2 == 1) {
    if (param_3 == 0) goto LAB_0361900c;
    if (param_3 == 1) {
      cVar1 = PVZ1ModeUtils::HasLeagueChangeEvent();
      if (cVar1 == '\0') {
        cVar1 = PVZ1ModeUtils::HasSeasonChangeEvent();
        if (cVar1 != '\0') {
          PVZ1ModeUtils::ResetPVZ1Mode(true);
        }
      }
      else {
        cVar1 = PVZ1ModeUtils::PlayerCanPlay();
        if (cVar1 != '\0') {
          PVZ1ModeUtils::ResetPVZ1Mode(false);
        }
      }
      finalizeAndExit();
      goto LAB_0361900c;
    }
  }
  else if ((param_2 == 0xffffffff) && (param_3 == 0)) goto LAB_0361900c;
  Sexy::Delegate2<char_const*,char_const*>::operator()((char *)aDStack_38,(char *)(ulong)param_2);
LAB_0361900c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

