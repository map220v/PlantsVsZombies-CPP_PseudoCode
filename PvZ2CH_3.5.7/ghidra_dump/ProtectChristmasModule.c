// Class: ProtectChristmasModule


/* ProtectChristmasModule::onUpdate() */

void ProtectChristmasModule::onUpdate(void)

{
  return;
}


/* ProtectChristmasModule::levelEnded() */

void __thiscall ProtectChristmasModule::levelEnded(ProtectChristmasModule *this)

{
  this[0x1c] = (ProtectChristmasModule)0x0;
  return;
}


/* ProtectChristmasModule::winOutroStarted() */

void __thiscall ProtectChristmasModule::winOutroStarted(ProtectChristmasModule *this)

{
  this[0x1c] = (ProtectChristmasModule)0x0;
  return;
}


/* ProtectChristmasModule::gameplayStarted() */

void __thiscall ProtectChristmasModule::gameplayStarted(ProtectChristmasModule *this)

{
  this[0x1c] = (ProtectChristmasModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectChristmasModule::StaticClassInit() */

void ProtectChristmasModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProtectChristmasModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044a7ed0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProtectChristmasModule::StaticGetClass() */

long * ProtectChristmasModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProtectChristmasModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProtectChristmasModule::ProtectChristmasModule() */

void __thiscall ProtectChristmasModule::ProtectChristmasModule(ProtectChristmasModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  this[0x1c] = (ProtectChristmasModule)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_068526c0;
  return;
}


/* ProtectChristmasModule::StaticNew() */

ProtectChristmasModule * ProtectChristmasModule::StaticNew(void)

{
  ProtectChristmasModule *this;
  
  this = ::operator_new(0x20);
  ProtectChristmasModule(this);
  return this;
}


/* ProtectChristmasModule::~ProtectChristmasModule() */

void __thiscall ProtectChristmasModule::~ProtectChristmasModule(ProtectChristmasModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068526c0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ProtectChristmasModule::~ProtectChristmasModule() */

void __thiscall ProtectChristmasModule::~ProtectChristmasModule(ProtectChristmasModule *this)

{
  ~ProtectChristmasModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectChristmasModule::onChristmasProtectDestroy() */

void __thiscall ProtectChristmasModule::onChristmasProtectDestroy(ProtectChristmasModule *this)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x18) = iVar1 + 1;
  if ((4 < iVar1 + 1) && (this[0x1c] != (ProtectChristmasModule)0x0)) {
    cVar2 = Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
    if (cVar2 != '\0') {
      plVar3 = (long *)FUN_044a81d4(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
      pcVar4 = *(code **)(*plVar3 + 0xa0);
      FUN_05478178(auStack_10,L"[PROTECT_CHRISTMAS_FAIL_MESSAGE]",auStack_18);
      (*pcVar4)(plVar3,auStack_10);
      FUN_05476c50(auStack_10);
      nop();
      this[0x1c] = (ProtectChristmasModule)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectChristmasModule::registerForEvents() */

void __thiscall ProtectChristmasModule::registerForEvents(ProtectChristmasModule *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,levelEnded);
  Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,winOutroStarted);
  Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnWinOutroStarted(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onChristmasProtectDestroy);
  Sexy::Delegate0::Delegate0<ProtectChristmasModule,void(ProtectChristmasModule::*)()>
            (aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::ChristmasProtectDestroy,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

