// Class: NewPVPDataBaseSubsystem


/* NewPVPDataBaseSubsystem::onNotifyReachMaxInterval() */

void __thiscall NewPVPDataBaseSubsystem::onNotifyReachMaxInterval(NewPVPDataBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0xa8))();
  return;
}


/* NewPVPDataBaseSubsystem::onLevelLoadComplete() */

void __thiscall NewPVPDataBaseSubsystem::onLevelLoadComplete(NewPVPDataBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


/* NewPVPDataBaseSubsystem::onGameplayStarted() */

void __thiscall NewPVPDataBaseSubsystem::onGameplayStarted(NewPVPDataBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0x88))();
  return;
}


/* NewPVPDataBaseSubsystem::onGameplayEnded() */

void __thiscall NewPVPDataBaseSubsystem::onGameplayEnded(NewPVPDataBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0x90))();
  return;
}


/* NewPVPDataBaseSubsystem::onGameplayRealUpdate() */

void __thiscall NewPVPDataBaseSubsystem::onGameplayRealUpdate(NewPVPDataBaseSubsystem *this)

{
  (**(code **)(*(long *)this + 0x98))();
  return;
}


/* NewPVPDataBaseSubsystem::~NewPVPDataBaseSubsystem() */

void __thiscall NewPVPDataBaseSubsystem::~NewPVPDataBaseSubsystem(NewPVPDataBaseSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_06646520;
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* NewPVPDataBaseSubsystem::~NewPVPDataBaseSubsystem() */

void __thiscall NewPVPDataBaseSubsystem::~NewPVPDataBaseSubsystem(NewPVPDataBaseSubsystem *this)

{
  ~NewPVPDataBaseSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataBaseSubsystem::StaticClassInit() */

void NewPVPDataBaseSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPDataBaseSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_034a71e4,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataBaseSubsystem::StaticGetClass() */

long * NewPVPDataBaseSubsystem::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPDataBaseSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPDataBaseSubsystem::GetClass() const */

long * NewPVPDataBaseSubsystem::GetClass(void)

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
  (*pcVar3)(plVar1,"NewPVPDataBaseSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPDataBaseSubsystem::NewPVPDataBaseSubsystem() */

void __thiscall NewPVPDataBaseSubsystem::NewPVPDataBaseSubsystem(NewPVPDataBaseSubsystem *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  long lVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_06646520;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayEnded);
  Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameplayEnded,aDStack_38);
  pLVar2 = (LevelModuleManager *)FUN_034a5e4c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayRealUpdate);
  Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayRealUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyReachMaxInterval);
  Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::NotifyReachMaxInterval,aDStack_38);
  pLVar2 = (LevelModuleManager *)FUN_034a5e4c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoadComplete);
  Sexy::Delegate0::Delegate0<NewPVPDataBaseSubsystem,void(NewPVPDataBaseSubsystem::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  lVar3 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_034a633c(lVar3 + 0x5c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPDataBaseSubsystem::StaticNew() */

NewPVPDataBaseSubsystem * NewPVPDataBaseSubsystem::StaticNew(void)

{
  NewPVPDataBaseSubsystem *this;
  
  this = ::operator_new(0x10);
  NewPVPDataBaseSubsystem(this);
  return this;
}

