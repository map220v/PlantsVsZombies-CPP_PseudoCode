// Class: EgyptStage


/* EgyptStage::EgyptStage() */

void __thiscall EgyptStage::EgyptStage(EgyptStage *this)

{
  StageModule::StageModule((StageModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_067608b0;
  return;
}


/* EgyptStage::StaticNew() */

EgyptStage * EgyptStage::StaticNew(void)

{
  EgyptStage *this;
  
  this = ::operator_new(0xe8);
  EgyptStage(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgyptStage::StaticClassInit() */

void EgyptStage::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgyptStage");
    (*pcVar2)(plVar1,asStack_10,FUN_03ce0cdc,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgyptStage::StaticGetClass() */

long * EgyptStage::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgyptStage",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgyptStage::onGameWon() */

void EgyptStage::onGameWon(void)

{
  long lVar1;
  
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(int *)(lVar1 + 0x30) == 1) {
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1c);
    return;
  }
  if (*(int *)(lVar1 + 0x30) == 2) {
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x20);
    return;
  }
  return;
}


/* EgyptStage::onLoadComplete() */

void EgyptStage::onLoadComplete(void)

{
  long lVar1;
  
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(int *)(lVar1 + 0x30) == 1) {
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1b);
    return;
  }
  if (*(int *)(lVar1 + 0x30) == 2) {
    ProfileUtils::TriggerTutorialFunnelEventForCurrentProfile(0x1e);
    return;
  }
  return;
}


/* EgyptStage::stopZombieGroans() */

void EgyptStage::stopZombieGroans(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Stop_Zomb_Egypt_Sarcophagus_Mommy");
  StageModule::stopZombieGroans();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgyptStage::onZombieTypeCountChange(Sexy::RtWeakPtr<ZombieType const>, int, int) */

void __thiscall
EgyptStage::onZombieTypeCountChange(EgyptStage *this,RtWeakPtrBase *param_2,int param_3,int param_4)

{
  char cVar1;
  string *psVar2;
  char *pcVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  StageModule::onZombieTypeCountChange((StageModule *)this,aRStack_10,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"pharaoh");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  cVar1 = Sexy::RtWeakPtrBase::operator==(param_2,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string(asStack_18);
  nop();
  if (cVar1 != '\0') {
    if ((param_3 < 1) || (0 < param_4)) {
      if ((param_3 == 0) && (0 < param_4)) {
        pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar3,"Play_Zomb_Egypt_Sarcophagus_Mommy");
      }
    }
    else {
      pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar3,"Stop_Zomb_Egypt_Sarcophagus_Mommy");
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgyptStage::registerForEvents() */

void __thiscall EgyptStage::registerForEvents(EgyptStage *this)

{
  undefined *this_00;
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  StageModule::registerForEvents((StageModule *)this);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<EgyptStage,void(EgyptStage::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameWon);
  Sexy::Delegate0::Delegate0<EgyptStage,void(EgyptStage::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgyptStage::~EgyptStage() */

void __thiscall EgyptStage::~EgyptStage(EgyptStage *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_067608b0;
  StageModule::~StageModule((StageModule *)this);
  return;
}


/* EgyptStage::~EgyptStage() */

void __thiscall EgyptStage::~EgyptStage(EgyptStage *this)

{
  ~EgyptStage(this);
  AK::FreeHook(this);
  return;
}

