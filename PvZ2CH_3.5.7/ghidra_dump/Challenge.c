// Class: Challenge


/* Challenge::GetLowThreatPosition() */

undefined1  [16] Challenge::GetLowThreatPosition(void)

{
  return ZEXT816(0);
}


/* Challenge::GetHighThreatPosition() */

undefined1  [16] Challenge::GetHighThreatPosition(void)

{
  return ZEXT816(0);
}


/* Challenge::GetThreatTargetPosition() */

undefined1  [16] Challenge::GetThreatTargetPosition(void)

{
  return ZEXT816(0);
}


/* Challenge::onFail() */

void Challenge::onFail(void)

{
  return;
}


/* Challenge::onCompleted() */

void Challenge::onCompleted(void)

{
  return;
}


/* Challenge::Challenge() */

void __thiscall Challenge::Challenge(Challenge *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetClass_06739320;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* Challenge::~Challenge() */

void __thiscall Challenge::~Challenge(Challenge *this)

{
  *(undefined ***)this = &PTR_GetClass_06739320;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* Challenge::~Challenge() */

void __thiscall Challenge::~Challenge(Challenge *this)

{
  ~Challenge(this);
  AK::FreeHook(this);
  return;
}


/* Challenge::GetDescriptiveName() const */

void Challenge::GetDescriptiveName(void)

{
  BasePowerup *in_x0;
  long *plVar1;
  
  plVar1 = (long *)BasePowerup::GetType(in_x0);
  (**(code **)(*plVar1 + 0x90))();
  return;
}


/* Challenge::GetProgressDescription() const */

void Challenge::GetProgressDescription(void)

{
  BasePowerup *in_x0;
  long *plVar1;
  
  plVar1 = (long *)BasePowerup::GetType(in_x0);
  (**(code **)(*plVar1 + 0x88))();
  return;
}


/* Challenge::onAnyChallengeFailed(Challenge*) */

void __thiscall Challenge::onAnyChallengeFailed(Challenge *this,Challenge *param_1)

{
  char cVar1;
  ChallengeUI *this_00;
  
  if (((this != param_1) &&
      (cVar1 = PVZ2UnchartedModeUtils::IsPlayingPVZ2UnchartedModeLevel(), cVar1 == '\0')) &&
     (this_00 = (ChallengeUI *)(**(code **)(*(long *)this + 0xe8))(this),
     this_00 != (ChallengeUI *)0x0)) {
    ChallengeUI::FadeWithoutFailing(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Challenge::StaticClassInit() */

void Challenge::StaticClassInit(void)

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
    std::string::string(asStack_10,"Challenge");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc0e3c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Challenge::StaticGetClass() */

long * Challenge::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"Challenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Challenge::GetClass() const */

long * Challenge::GetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"Challenge",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Challenge::HideUI() */

void __thiscall Challenge::HideUI(Challenge *this)

{
  ChallengeUI *this_00;
  
  this_00 = (ChallengeUI *)(**(code **)(*(long *)this + 0xe8))();
  if (this_00 != (ChallengeUI *)0x0) {
    ChallengeUI::FadeWithoutFailing(this_00);
    return;
  }
  return;
}


/* Challenge::Complete() */

void __thiscall Challenge::Complete(Challenge *this)

{
  if (*(int *)(this + 0x1c) == 1) {
    *(undefined4 *)(this + 0x1c) = 2;
    if (*(code **)(*(long *)this + 0xe0) != onCompleted) {
      (**(code **)(*(long *)this + 0xe0))();
      return;
    }
  }
  return;
}


/* Challenge::StaticNew() */

Challenge * Challenge::StaticNew(void)

{
  Challenge *this;
  
  this = ::operator_new(0x20);
  Challenge(this);
  return this;
}


/* Challenge::registerForEvents() */

void __thiscall Challenge::registerForEvents(Challenge *this)

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
            ((ReceivedDataCallback *)this,(_func_void *)0xd0);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Challenge*,Sexy::CBMemberTranslatorX<Challenge,void(Challenge::*)(Challenge*)>>
            ((MessageRouter *)puVar1,Message::ChallengeFailed,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Challenge::Fail() */

void Challenge::Fail(void)

{
  char cVar1;
  Challenge *in_x0;
  long lVar2;
  wchar16 *pwVar3;
  char *pcVar4;
  ChallengeUI *this;
  LineBreakCategory *pLVar5;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  undefined4 uVar6;
  LineBreakCategory aLStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = Sexy::LazySingleton<CheatManager>::GetInstancePtr();
  if (lVar2 != 0) {
    pwVar3 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pLVar5 = aLStack_18;
    std::string::string(asStack_10,"AutoTestAllLevel");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar3,(wchar16 *)asStack_10,pLVar5,in_x3,in_x4);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      Complete(in_x0);
      goto LAB_03bc19c0;
    }
  }
  if (*(int *)(in_x0 + 0x1c) == 1) {
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar4,"Play_UI_Game_Objective_Fail");
    uVar6 = PVZ_T();
    lVar2 = *(long *)in_x0;
    *(undefined4 *)(in_x0 + 0x1c) = 3;
    *(undefined4 *)(in_x0 + 0x18) = uVar6;
    if (*(code **)(lVar2 + 0xd8) != onFail) {
      (**(code **)(lVar2 + 0xd8))();
      lVar2 = *(long *)in_x0;
    }
    this = (ChallengeUI *)(**(code **)(lVar2 + 0xe8))();
    if (this != (ChallengeUI *)0x0) {
      ChallengeUI::SetFailTime(this,*(float *)(in_x0 + 0x18));
    }
    MessageRouter::Broadcast<Challenge*,Challenge*>
              ((MessageRouter *)gMessageRouter,Message::ObjectiveFailed,in_x0);
  }
LAB_03bc19c0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

