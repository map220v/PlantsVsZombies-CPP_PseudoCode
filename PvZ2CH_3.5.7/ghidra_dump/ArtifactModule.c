// Class: ArtifactModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactModule::StaticClassInit() */

void ArtifactModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactModule");
    (*pcVar2)(plVar1,asStack_10,FUN_037abadc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactModule::StaticGetClass() */

long * ArtifactModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactModule::ArtifactModule() */

void __thiscall ArtifactModule::ArtifactModule(ArtifactModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066965f0;
  return;
}


/* ArtifactModule::StaticNew() */

ArtifactModule * ArtifactModule::StaticNew(void)

{
  ArtifactModule *this;
  
  this = ::operator_new(0x18);
  ArtifactModule(this);
  return this;
}


/* ArtifactModule::~ArtifactModule() */

void __thiscall ArtifactModule::~ArtifactModule(ArtifactModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066965f0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ArtifactModule::~ArtifactModule() */

void __thiscall ArtifactModule::~ArtifactModule(ArtifactModule *this)

{
  ~ArtifactModule(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactModule::onArtifactInit() */

void ArtifactModule::onArtifactInit(void)

{
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::RecomputeEntityValues();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactModule::initializeArtifacts() */

void ArtifactModule::initializeArtifacts(void)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long *extraout_x0;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::GetArtifact();
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
  if (bVar1) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    pcVar3 = (char *)FUN_0547429c(lVar2 + 0x18);
    uVar4 = Sexy::RtClass::StaticGetClassNamed(pcVar3);
    GameObject::Create(uVar4,0x87);
    nop();
    pcVar5 = *(code **)(*extraout_x0 + 0x78);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_18);
    (*pcVar5)(extraout_x0,aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    FUN_037ab930((long)extraout_x0 + 0x1c,local_10);
    FUN_037ab938(extraout_x0 + 4,local_c);
    (**(code **)(*extraout_x0 + 0x80))(extraout_x0);
    (**(code **)(*extraout_x0 + 0xc0))(extraout_x0);
    onArtifactInit();
  }
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactModule::onInit() */

void ArtifactModule::onInit(void)

{
  ArtifactMgr *this;
  
  this = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  ArtifactMgr::TrySyncArtifact(this);
  initializeArtifacts();
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactModule::registerForEvents() */

void __thiscall ArtifactModule::registerForEvents(ArtifactModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onInit);
  Sexy::Delegate0::Delegate0<ArtifactModule,void(ArtifactModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

