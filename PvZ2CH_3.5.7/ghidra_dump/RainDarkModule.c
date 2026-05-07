// Class: RainDarkModule


/* RainDarkModule::stopDroppingDark() */

void __thiscall RainDarkModule::stopDroppingDark(RainDarkModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RainDarkModule::StaticClassInit() */

void RainDarkModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"RainDarkModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044a618c,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RainDarkModule::StaticGetClass() */

long * RainDarkModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RainDarkModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RainDarkModule::RainDarkModule() */

void __thiscall RainDarkModule::RainDarkModule(RainDarkModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06852350;
  RainDropper::RainDropper((RainDropper *)(this + 0x24));
  return;
}


/* RainDarkModule::StaticNew() */

RainDarkModule * RainDarkModule::StaticNew(void)

{
  RainDarkModule *this;
  
  this = ::operator_new(0x40);
  RainDarkModule(this);
  return this;
}


/* RainDarkModule::~RainDarkModule() */

void __thiscall RainDarkModule::~RainDarkModule(RainDarkModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06852350;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* RainDarkModule::~RainDarkModule() */

void __thiscall RainDarkModule::~RainDarkModule(RainDarkModule *this)

{
  ~RainDarkModule(this);
  AK::FreeHook(this);
  return;
}


/* RainDarkModule::calcNextSpawnTime() */

void __thiscall RainDarkModule::calcNextSpawnTime(RainDarkModule *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x1c) = fVar1 + 10.0;
  return;
}


/* RainDarkModule::SetPaused(bool) */

void __thiscall RainDarkModule::SetPaused(RainDarkModule *this,bool param_1)

{
  if (!param_1) {
    calcNextSpawnTime(this);
    return;
  }
  stopDroppingDark(this);
  return;
}


/* RainDarkModule::initializeModule() */

void __thiscall RainDarkModule::initializeModule(RainDarkModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(undefined4 *)(this + 0x18) = 0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar2;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x20) = fVar3 + 1.5;
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  RainDropper::SetSnow((RainDropper *)(this + 0x24),(bool)pRVar1[0x55]);
  return;
}


/* RainDarkModule::startDroppingDark() */

void __thiscall RainDarkModule::startDroppingDark(RainDarkModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(float *)(this + 0x1c) = fVar2 + *(float *)(pRVar1 + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RainDarkModule::update() */

void __thiscall RainDarkModule::update(RainDarkModule *this)

{
  ResilienceTutorialIntroProperties RVar1;
  long lVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  float fVar4;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RainDropper::Update((RainDropper *)(this + 0x24));
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x20) < fVar4) {
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    fVar4 = *(float *)(pRVar3 + 0x58);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    RainDropper::Start((RainDropper *)(this + 0x24),fVar4,*(int *)(pRVar3 + 0x5c));
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x20) = fVar4 + 1.5;
  }
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x1c) < fVar4) {
    lVar2 = Effect_ScreenFade::Create();
    FUN_044a59b4(lVar2 + 0x1c);
    pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (pRVar3[0x55] == (ResilienceTutorialIntroProperties)0x0) {
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
      Effect_ScreenFade::AddFade
                ((Effect_ScreenFade *)0x3e570a3d,0x3e99999a,0x3f800000,lVar2,0,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar2,2,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
      Effect_ScreenFade::AddFade
                ((Effect_ScreenFade *)0x3e570a3d,0x3e800000,0x3f800000,lVar2,0,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar2,2,aIStack_18,2);
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      RVar1 = pRVar3[0x54];
    }
    else {
      pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      RVar1 = pRVar3[0x54];
    }
    if (RVar1 != (ResilienceTutorialIntroProperties)0x0) {
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
      Effect_ScreenFade::AddFade
                ((Effect_ScreenFade *)0x3e570a3d,0x3e4ccccd,0x3f800000,lVar2,0,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3d23d70a,0,0x3f800000,lVar2,2,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0xff);
      Effect_ScreenFade::AddFade
                ((Effect_ScreenFade *)0x3e570a3d,0x3e19999a,0x3f800000,lVar2,0,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0xff,0xff,0xfa,0);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f000000,0,0x3f800000,lVar2,2,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,lVar2,1,aIStack_18,2);
      Sexy::Insets::Insets(aIStack_18,0,0,0,0xff);
      Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x41000000,0,0x3f800000,lVar2,2,aIStack_18,2);
    }
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    calcNextSpawnTime(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RainDarkModule::registerForEvents() */

void __thiscall RainDarkModule::registerForEvents(RainDarkModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,calcNextSpawnTime);
  Sexy::Delegate0::Delegate0<RainDarkModule,void(RainDarkModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopDroppingDark);
  Sexy::Delegate0::Delegate0<RainDarkModule,void(RainDarkModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<RainDarkModule,void(RainDarkModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

