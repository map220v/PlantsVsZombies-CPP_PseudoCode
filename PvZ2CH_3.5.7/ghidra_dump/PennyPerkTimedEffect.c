// Class: PennyPerkTimedEffect


/* PennyPerkTimedEffect::updateOthers() */

void PennyPerkTimedEffect::updateOthers(void)

{
  return;
}


/* PennyPerkTimedEffect::onLastStandLevelStarting() */

void __thiscall PennyPerkTimedEffect::onLastStandLevelStarting(PennyPerkTimedEffect *this)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0xb8))();
  *(undefined4 *)(this + 0x24) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTimedEffect::StaticClassInit() */

void PennyPerkTimedEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"PennyPerkTimedEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_036bef44,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PennyPerkTimedEffect::StaticGetClass() */

long * PennyPerkTimedEffect::StaticGetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTimedEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTimedEffect::GetClass() const */

long * PennyPerkTimedEffect::GetClass(void)

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
  uVar2 = PennyPerk::StaticGetClass();
  (*pcVar3)(plVar1,"PennyPerkTimedEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PennyPerkTimedEffect::~PennyPerkTimedEffect() */

void __thiscall PennyPerkTimedEffect::~PennyPerkTimedEffect(PennyPerkTimedEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_06681010;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PennyPerk::~PennyPerk((PennyPerk *)this);
  return;
}


/* PennyPerkTimedEffect::~PennyPerkTimedEffect() */

void __thiscall PennyPerkTimedEffect::~PennyPerkTimedEffect(PennyPerkTimedEffect *this)

{
  ~PennyPerkTimedEffect(this);
  AK::FreeHook(this);
  return;
}


/* PennyPerkTimedEffect::PennyPerkTimedEffect() */

void __thiscall PennyPerkTimedEffect::PennyPerkTimedEffect(PennyPerkTimedEffect *this)

{
  PennyPerk::PennyPerk((PennyPerk *)this);
  *(undefined ***)this = &PTR_GetClass_06681010;
  return;
}


/* PennyPerkTimedEffect::StaticNew() */

PennyPerkTimedEffect * PennyPerkTimedEffect::StaticNew(void)

{
  PennyPerkTimedEffect *this;
  
  this = ::operator_new(0x28);
  PennyPerkTimedEffect(this);
  return this;
}


/* PennyPerkTimedEffect::calcNextUpdateTime() */

void PennyPerkTimedEffect::calcNextUpdateTime(void)

{
  long lVar1;
  
  lVar1 = Sexy::LazySingleton<TimeMgr>::GetInstancePtr();
  FUN_03188de8(*(undefined4 *)(lVar1 + 0x24));
  return;
}


/* PennyPerkTimedEffect::onLevelStart() */

void __thiscall PennyPerkTimedEffect::onLevelStart(PennyPerkTimedEffect *this)

{
  LevelModuleManager *this_00;
  LastStandMinigameModule *pLVar1;
  
  this_00 = (LevelModuleManager *)FUN_036bdf74(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pLVar1 = LevelModuleManager::GetModuleByClass<LastStandMinigameModule>(this_00);
  if (pLVar1 != (LastStandMinigameModule *)0x0) {
    return;
  }
  (**(code **)(*(long *)this + 0xa8))(this);
  return;
}


/* PennyPerkTimedEffect::update() */

void __thiscall PennyPerkTimedEffect::update(PennyPerkTimedEffect *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x24) < fVar1) {
    MessageRouter::Broadcast<PennyPerk*,PennyPerkTimedEffect*>
              ((MessageRouter *)gMessageRouter,Message::RiftLevelPerkActivation,this);
    (**(code **)(*(long *)this + 0x90))(this);
    uVar2 = (**(code **)(*(long *)this + 0xb8))(this);
    *(undefined4 *)(this + 0x24) = uVar2;
  }
  if (*(code **)(*(long *)this + 0x98) != updateOthers) {
    (**(code **)(*(long *)this + 0x98))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyPerkTimedEffect::Activate() */

void __thiscall PennyPerkTimedEffect::Activate(PennyPerkTimedEffect *this)

{
  undefined *puVar1;
  long lVar2;
  LevelModuleManager *pLVar3;
  undefined4 uVar4;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
  pLVar3 = (LevelModuleManager *)FUN_036bdf74(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x88);
  Sexy::Delegate0::Delegate0<PennyPerkTimedEffect,void(PennyPerkTimedEffect::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayUpdate(pLVar3,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<PennyPerkTimedEffect,void(PennyPerkTimedEffect::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<PennyPerkTimedEffect,void(PennyPerkTimedEffect::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  uVar4 = PVZ_EOT();
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x24) = uVar4;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

