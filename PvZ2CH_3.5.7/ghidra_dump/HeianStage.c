// Class: HeianStage


/* HeianStage::initializeModule() */

void __thiscall HeianStage::initializeModule(HeianStage *this)

{
  this[0x48] = (HeianStage)0x0;
  this[0xb8] = (HeianStage)0x1;
  this[0xb9] = (HeianStage)0x1;
  *(undefined4 *)(this + 0xbc) = 0;
  this[0xc0] = (HeianStage)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianStage::registerForEvents() */

void __thiscall HeianStage::registerForEvents(HeianStage *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  CBMemberTranslatorX aCStack_b0 [24];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  Delegate0 aDStack_38 [48];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::parseImages);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnIntroStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::stopMusic);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::unregisterObservers);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::startAmbientAudio);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::startGameStartedMusic);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::stopAmbientAudio);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf8);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::addBackgroundToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<StageModule,void(StageModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onZombieAdded);
  uStack_c0 = uStack_88;
  uStack_d0 = uStack_98;
  uStack_c8 = uStack_90;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&uStack_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onZombieDied);
  uStack_f0 = uStack_80;
  uStack_e8 = uStack_78;
  uStack_e0 = uStack_70;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&uStack_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onGamePaused);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onGameUnpaused);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onGameWon);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onGameLost);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameLost,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onHugeWave);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&uStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::HugeWave,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onHugeWaveComing);
  uStack_100 = uStack_58;
  uStack_110 = uStack_68;
  uStack_108 = uStack_60;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::HugeWaveComing,&uStack_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StageModule::onWaveStarted);
  uStack_130 = uStack_50;
  uStack_128 = uStack_48;
  uStack_120 = uStack_40;
  MessageRouter::
  Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<StageModule,void(StageModule::*)(int,WaveType::WaveType,bool)>>
            ((MessageRouter *)puVar1,Message::WaveStarted,&uStack_130);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xf0);
  Sexy::Delegate0::Delegate0<StageModule,void(StageModule::*)()>(aDStack_38,aCStack_b0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelLoadComplete,aDStack_38);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianStage::HeianStage() */

void __thiscall HeianStage::HeianStage(HeianStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06765d20;
  return;
}


/* HeianStage::StaticNew() */

HeianStage * HeianStage::StaticNew(void)

{
  HeianStage *this;
  
  this = ::operator_new(0xe8);
  HeianStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianStage::StaticClassInit() */

void HeianStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03d25434,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianStage::StaticGetClass() */

long * HeianStage::StaticGetClass(void)

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
  uVar2 = StageModule::StaticGetClass();
  (*pcVar3)(plVar1,"HeianStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianStage::~HeianStage() */

void __thiscall HeianStage::~HeianStage(HeianStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06765d20;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* HeianStage::~HeianStage() */

void __thiscall HeianStage::~HeianStage(HeianStage *this)

{
  ~HeianStage(this);
  AK::FreeHook(this);
  return;
}

