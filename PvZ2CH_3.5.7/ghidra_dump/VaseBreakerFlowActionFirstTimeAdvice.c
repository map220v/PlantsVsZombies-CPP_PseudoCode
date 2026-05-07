// Class: VaseBreakerFlowActionFirstTimeAdvice


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionFirstTimeAdvice::onBegin() */

void VaseBreakerFlowActionFirstTimeAdvice::onBegin(void)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[ADVICE_VASEBREAKER_TUTORIAL_1]",auStack_18);
  Board::DisplayAdviceAgain(pBVar1,auStack_10,8,0);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionFirstTimeAdvice::onBegin() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::onBegin(VaseBreakerFlowActionFirstTimeAdvice *this)

{
  onBegin();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionFirstTimeAdvice::onVaseBroken(GridItemVase*) */

void VaseBreakerFlowActionFirstTimeAdvice::onVaseBroken(GridItemVase *param_1)

{
  char cVar1;
  PlayerInfo *this;
  Board *pBVar2;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04972880(*(undefined4 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    FUN_05478178(asStack_10,L"[ADVICE_VASEBREAKER_TUTORIAL_2]",auStack_18);
    Board::DisplayAdviceAgain(pBVar2,asStack_10,7,0);
    FUN_05476c50(asStack_10);
    nop();
    this = (PlayerInfo *)ProfileUtils::Profile();
    std::string::string(asStack_10,"nar_vasebreaker_first_time_tutorial");
    PlayerInfo::CompleteNarrationEvent(this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    RunnableAction::End((RunnableAction *)(param_1 + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionFirstTimeAdvice::StaticGetClass() */

long * VaseBreakerFlowActionFirstTimeAdvice::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionFirstTimeAdvice",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionFirstTimeAdvice::GetClass() const */

long * VaseBreakerFlowActionFirstTimeAdvice::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionFirstTimeAdvice",uVar2,StaticNew);
  return sClass;
}


/* VaseBreakerFlowActionFirstTimeAdvice::VaseBreakerFlowActionFirstTimeAdvice() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::VaseBreakerFlowActionFirstTimeAdvice
          (VaseBreakerFlowActionFirstTimeAdvice *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_069174e0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionFirstTimeAdvice_06917588;
  return;
}


/* VaseBreakerFlowActionFirstTimeAdvice::StaticNew() */

VaseBreakerFlowActionFirstTimeAdvice * VaseBreakerFlowActionFirstTimeAdvice::StaticNew(void)

{
  VaseBreakerFlowActionFirstTimeAdvice *this;
  
  this = ::operator_new(0x30);
  VaseBreakerFlowActionFirstTimeAdvice(this);
  return this;
}


/* VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice
          (VaseBreakerFlowActionFirstTimeAdvice *this)

{
  *(undefined ***)this = &PTR_GetClass_069174e0;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionFirstTimeAdvice_06917588;
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice
          (VaseBreakerFlowActionFirstTimeAdvice *this)

{
  ~VaseBreakerFlowActionFirstTimeAdvice(this + -0x10);
  return;
}


/* VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice
          (VaseBreakerFlowActionFirstTimeAdvice *this)

{
  ~VaseBreakerFlowActionFirstTimeAdvice(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::~VaseBreakerFlowActionFirstTimeAdvice
          (VaseBreakerFlowActionFirstTimeAdvice *this)

{
  ~VaseBreakerFlowActionFirstTimeAdvice(this + -0x10);
  return;
}


/* VaseBreakerFlowActionFirstTimeAdvice::registerForEvents() */

void __thiscall
VaseBreakerFlowActionFirstTimeAdvice::registerForEvents(VaseBreakerFlowActionFirstTimeAdvice *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onVaseBroken);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<GridItemVase*,Sexy::CBMemberTranslatorX<VaseBreakerFlowActionFirstTimeAdvice,void(VaseBreakerFlowActionFirstTimeAdvice::*)(GridItemVase*)>>
            ((MessageRouter *)puVar1,Message::VaseBroken,&local_40);
  return;
}

