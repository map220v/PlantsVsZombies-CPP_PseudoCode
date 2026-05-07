// Class: BeghouledZombieSpawnerModule


/* BeghouledZombieSpawnerModule::startSpawner() */

void __thiscall BeghouledZombieSpawnerModule::startSpawner(BeghouledZombieSpawnerModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  float fVar4;
  
  iVar1 = BoardHelpers::ApplyLevelOverride_ZombieCountdownFirstWaveSecs(5);
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x18) = (float)iVar1 + fVar4;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar3 = FUN_044632e4(*(undefined8 *)(pRVar2 + 0x40),(long)*(int *)(this + 0x24));
  iVar1 = *(int *)(lVar3 + 0x18);
  *(int *)(this + 0x20) = iVar1;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar3 = FUN_044632e4(*(undefined8 *)(pRVar2 + 0x40),(long)*(int *)(this + 0x24));
  *(int *)(this + 0x1c) = iVar1 - *(int *)(lVar3 + 0x20);
  return;
}


/* BeghouledZombieSpawnerModule::stopSpawner() */

void __thiscall BeghouledZombieSpawnerModule::stopSpawner(BeghouledZombieSpawnerModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* BeghouledZombieSpawnerModule::onUpdate() */

void __thiscall BeghouledZombieSpawnerModule::onUpdate(BeghouledZombieSpawnerModule *this)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)PVZ_EOT();
  if ((*(float *)(this + 0x18) < fVar5) && (fVar5 = (float)PVZ_T(), *(float *)(this + 0x18) < fVar5)
     ) {
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    bVar1 = (bool)SimpleZombieSpawnerModule::spawnZombie((SimpleZombieSpawnerModule *)this);
    fVar5 = (float)PVZ_T();
    lVar3 = FUN_044632e4(*(undefined8 *)(pRVar2 + 0x40),(long)*(int *)(this + 0x24));
    fVar6 = *(float *)(lVar3 + 0x1c);
    iVar4 = *(int *)(this + 0x20) + -1;
    *(int *)(this + 0x20) = iVar4;
    *(float *)(this + 0x18) = fVar5 + fVar6;
    if (iVar4 == 0) {
      (**(code **)(*(long *)this + 0xb0))(this);
      iVar4 = *(int *)(this + 0x20);
    }
    if (*(int *)(this + 0x1c) == iVar4) {
      Zombie::SetHasPlantFood(bVar1);
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      lVar3 = FUN_044632e4(*(undefined8 *)(pRVar2 + 0x40),(long)*(int *)(this + 0x24));
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) - *(int *)(lVar3 + 0x20);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledZombieSpawnerModule::StaticClassInit() */

void BeghouledZombieSpawnerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"BeghouledZombieSpawnerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_03bad744,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BeghouledZombieSpawnerModule::StaticGetClass() */

long * BeghouledZombieSpawnerModule::StaticGetClass(void)

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
  uVar2 = SimpleZombieSpawnerModule::StaticGetClass();
  (*pcVar3)(plVar1,"BeghouledZombieSpawnerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BeghouledZombieSpawnerModule::BeghouledZombieSpawnerModule() */

void __thiscall
BeghouledZombieSpawnerModule::BeghouledZombieSpawnerModule(BeghouledZombieSpawnerModule *this)

{
  SimpleZombieSpawnerModule::SimpleZombieSpawnerModule((SimpleZombieSpawnerModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06737940;
  return;
}


/* BeghouledZombieSpawnerModule::StaticNew() */

BeghouledZombieSpawnerModule * BeghouledZombieSpawnerModule::StaticNew(void)

{
  BeghouledZombieSpawnerModule *this;
  
  this = ::operator_new(0x40);
  BeghouledZombieSpawnerModule(this);
  return this;
}


/* BeghouledZombieSpawnerModule::~BeghouledZombieSpawnerModule() */

void __thiscall
BeghouledZombieSpawnerModule::~BeghouledZombieSpawnerModule(BeghouledZombieSpawnerModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06737940;
  SimpleZombieSpawnerModule::~SimpleZombieSpawnerModule((SimpleZombieSpawnerModule *)this);
  return;
}


/* BeghouledZombieSpawnerModule::~BeghouledZombieSpawnerModule() */

void __thiscall
BeghouledZombieSpawnerModule::~BeghouledZombieSpawnerModule(BeghouledZombieSpawnerModule *this)

{
  ~BeghouledZombieSpawnerModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BeghouledZombieSpawnerModule::registerForEvents() */

void __thiscall BeghouledZombieSpawnerModule::registerForEvents(BeghouledZombieSpawnerModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<BeghouledZombieSpawnerModule,void(BeghouledZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<BeghouledZombieSpawnerModule,void(BeghouledZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<BeghouledZombieSpawnerModule,void(BeghouledZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

