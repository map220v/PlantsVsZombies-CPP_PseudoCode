// Class: SunDropperModule


/* SunDropperModule::initializeModule() */

void __thiscall SunDropperModule::initializeModule(SunDropperModule *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* SunDropperModule::stopDroppingSun() */

void __thiscall SunDropperModule::stopDroppingSun(SunDropperModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunDropperModule::StaticClassInit() */

void SunDropperModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SunDropperModule");
    (*pcVar2)(plVar1,asStack_10,FUN_044a5340,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunDropperModule::StaticGetClass() */

long * SunDropperModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SunDropperModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SunDropperModule::SunDropperModule() */

void __thiscall SunDropperModule::SunDropperModule(SunDropperModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_068521f0;
  return;
}


/* SunDropperModule::StaticNew() */

SunDropperModule * SunDropperModule::StaticNew(void)

{
  SunDropperModule *this;
  
  this = ::operator_new(0x20);
  SunDropperModule(this);
  return this;
}


/* SunDropperModule::~SunDropperModule() */

void __thiscall SunDropperModule::~SunDropperModule(SunDropperModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_068521f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SunDropperModule::~SunDropperModule() */

void __thiscall SunDropperModule::~SunDropperModule(SunDropperModule *this)

{
  ~SunDropperModule(this);
  AK::FreeHook(this);
  return;
}


/* SunDropperModule::GetSunDropperProps() */

void __thiscall SunDropperModule::GetSunDropperProps(SunDropperModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  BoardHelpers::ApplyLevelOverride_SunDropperProperties((SunDropperProperties *)pRVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunDropperModule::calcNextSpawnTime() */

void __thiscall SunDropperModule::calcNextSpawnTime(SunDropperModule *this)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetSunDropperProps(this);
  local_c = *(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x50) * (float)*(int *)(this + 0x18);
  pfVar3 = eastl::min_alt<float>((float *)(lVar2 + 0x4c),&local_c);
  fVar6 = *pfVar3;
  fVar4 = (float)Sexy::Rand(*(float *)(lVar2 + 0x48));
  fVar5 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1c) = fVar5 + fVar4 + fVar6;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SunDropperModule::SetPaused(bool) */

void __thiscall SunDropperModule::SetPaused(SunDropperModule *this,bool param_1)

{
  if (!param_1) {
    calcNextSpawnTime(this);
    return;
  }
  stopDroppingSun(this);
  return;
}


/* SunDropperModule::update() */

void __thiscall SunDropperModule::update(SunDropperModule *this)

{
  char cVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x1c)) {
    return;
  }
  cVar1 = Board::IsSunSpawningSuppressed(*(Board **)(gLawnApp + 0x9f0));
  if (cVar1 != '\0') {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
    calcNextSpawnTime(this);
    return;
  }
  Board::SpawnSunFromSky(*(Board **)(gLawnApp + 0x9f0));
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  calcNextSpawnTime(this);
  return;
}


/* SunDropperModule::startDroppingSun() */

void __thiscall SunDropperModule::startDroppingSun(SunDropperModule *this)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  lVar1 = GetSunDropperProps(this);
  *(float *)(this + 0x1c) = fVar2 + *(float *)(lVar1 + 0x40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunDropperModule::registerForEvents() */

void __thiscall SunDropperModule::registerForEvents(SunDropperModule *this)

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
  Sexy::Delegate0::Delegate0<SunDropperModule,void(SunDropperModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopDroppingSun);
  Sexy::Delegate0::Delegate0<SunDropperModule,void(SunDropperModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,update);
  Sexy::Delegate0::Delegate0<SunDropperModule,void(SunDropperModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

