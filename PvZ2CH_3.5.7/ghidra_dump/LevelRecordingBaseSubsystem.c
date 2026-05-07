// Class: LevelRecordingBaseSubsystem


/* LevelRecordingBaseSubsystem::onLastStandInit() */

void __thiscall LevelRecordingBaseSubsystem::onLastStandInit(LevelRecordingBaseSubsystem *this)

{
  this[0x10] = (LevelRecordingBaseSubsystem)0x1;
  return;
}


/* LevelRecordingBaseSubsystem::onLastStandStart() */

void __thiscall LevelRecordingBaseSubsystem::onLastStandStart(LevelRecordingBaseSubsystem *this)

{
  this[0x10] = (LevelRecordingBaseSubsystem)0x0;
  (**(code **)(*(long *)this + 0x88))();
  return;
}


/* LevelRecordingBaseSubsystem::onGameplayStarted() */

void __thiscall LevelRecordingBaseSubsystem::onGameplayStarted(LevelRecordingBaseSubsystem *this)

{
  if (this[0x10] == (LevelRecordingBaseSubsystem)0x0) {
    (**(code **)(*(long *)this + 0x88))();
  }
  return;
}


/* LevelRecordingBaseSubsystem::onGameplayEnded() */

void __thiscall LevelRecordingBaseSubsystem::onGameplayEnded(LevelRecordingBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0x90))();
  return;
}


/* LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem() */

void __thiscall
LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem(LevelRecordingBaseSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a7600;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem() */

void __thiscall
LevelRecordingBaseSubsystem::~LevelRecordingBaseSubsystem(LevelRecordingBaseSubsystem *this)

{
  ~LevelRecordingBaseSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordingBaseSubsystem::StaticClassInit() */

void LevelRecordingBaseSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelRecordingBaseSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_0384a69c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelRecordingBaseSubsystem::StaticGetClass() */

long * LevelRecordingBaseSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelRecordingBaseSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelRecordingBaseSubsystem::GetClass() const */

long * LevelRecordingBaseSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"LevelRecordingBaseSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelRecordingBaseSubsystem::LevelRecordingBaseSubsystem() */

void __thiscall
LevelRecordingBaseSubsystem::LevelRecordingBaseSubsystem(LevelRecordingBaseSubsystem *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  this[0x10] = (LevelRecordingBaseSubsystem)0x0;
  *(undefined ***)this = &PTR_GetClass_066a7600;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandInit);
  Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelInitializing,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<LevelRecordingBaseSubsystem,void(LevelRecordingBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelRecordingBaseSubsystem::StaticNew() */

LevelRecordingBaseSubsystem * LevelRecordingBaseSubsystem::StaticNew(void)

{
  LevelRecordingBaseSubsystem *this;
  
  this = ::operator_new(0x18);
  LevelRecordingBaseSubsystem(this);
  return this;
}

