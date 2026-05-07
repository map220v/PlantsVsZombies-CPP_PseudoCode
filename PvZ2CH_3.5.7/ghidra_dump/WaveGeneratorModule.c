// Class: WaveGeneratorModule


/* WaveGeneratorModule::WaveGeneratorModule() */

void __thiscall WaveGeneratorModule::WaveGeneratorModule(WaveGeneratorModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR_GetModuleClass_06857090;
  return;
}


/* WaveGeneratorModule::~WaveGeneratorModule() */

void __thiscall WaveGeneratorModule::~WaveGeneratorModule(WaveGeneratorModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06857090;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WaveGeneratorModule::~WaveGeneratorModule() */

void __thiscall WaveGeneratorModule::~WaveGeneratorModule(WaveGeneratorModule *this)

{
  ~WaveGeneratorModule(this);
  AK::FreeHook(this);
  return;
}


/* WaveGeneratorModule::onZombieSpawned(Zombie*) */

void WaveGeneratorModule::onZombieSpawned(Zombie *param_1)

{
  return;
}


/* WaveGeneratorModule::onGameplayStarted() */

void __thiscall WaveGeneratorModule::onGameplayStarted(WaveGeneratorModule *this)

{
  WaveGenerator::OnLevelStarted(*(WaveGenerator **)(this + 0x18));
  return;
}


/* WaveGeneratorModule::onUpdate() */

void __thiscall WaveGeneratorModule::onUpdate(WaveGeneratorModule *this)

{
  WaveGenerator::Update(*(WaveGenerator **)(this + 0x18));
  return;
}


/* WaveGeneratorModule::onLevelEnded() */

void __thiscall WaveGeneratorModule::onLevelEnded(WaveGeneratorModule *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x18))();
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


/* WaveGeneratorModule::onSandStormSpawned(Zombie*) */

void WaveGeneratorModule::onSandStormSpawned(Zombie *param_1)

{
  WaveGenerator::OnSandStormSpawned(*(WaveGenerator **)(param_1 + 0x18));
  return;
}


/* WaveGeneratorModule::onSandStormDestroyed(Zombie*) */

void WaveGeneratorModule::onSandStormDestroyed(Zombie *param_1)

{
  WaveGenerator::OnSandStormDestroyed(*(WaveGenerator **)(param_1 + 0x18));
  return;
}


/* WaveGeneratorModule::GetIsDoneSpawning() */

bool __thiscall WaveGeneratorModule::GetIsDoneSpawning(WaveGeneratorModule *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x18);
  iVar1 = FUN_0450424c(*(undefined4 *)(lVar3 + 0x20));
  iVar2 = FUN_04504250(*(undefined4 *)(lVar3 + 0x24));
  return iVar2 <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::StaticClassInit() */

void WaveGeneratorModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveGeneratorModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04504a00,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveGeneratorModule::StaticGetClass() */

long * WaveGeneratorModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveGeneratorModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveGeneratorModule::StaticNew() */

WaveGeneratorModule * WaveGeneratorModule::StaticNew(void)

{
  WaveGeneratorModule *this;
  
  this = ::operator_new(0x20);
  WaveGeneratorModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::onLoadComplete() */

void __thiscall WaveGeneratorModule::onLoadComplete(WaveGeneratorModule *this)

{
  long lVar1;
  WaveGenerator *pWVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  pWVar2 = *(WaveGenerator **)(this + 0x18);
  local_8 = ___stack_chk_guard;
  lVar1 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(lVar1 + 0xa0));
  WaveGenerator::InitZombieWaves(pWVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveGeneratorModule::onPostLoad() */

void __thiscall WaveGeneratorModule::onPostLoad(WaveGeneratorModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  WaveGenerator *this_00;
  
  this_00 = *(WaveGenerator **)(this + 0x18);
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  WaveGenerator::Initialize(this_00,(WaveGeneratorProperties *)pRVar1);
  WaveGenerator::PostSerialize(*(WaveGenerator **)(this + 0x18),true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::onLevelInit() */

void __thiscall WaveGeneratorModule::onLevelInit(WaveGeneratorModule *this)

{
  WaveGenerator *pWVar1;
  long lVar2;
  ProfileMgr *this_00;
  WorldDataManager *this_01;
  ResilienceTutorialIntroProperties *pRVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar1 = ::operator_new(0x2898);
  WaveGenerator::WaveGenerator(pWVar1);
  *(WaveGenerator **)(this + 0x18) = pWVar1;
  lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
  if (*(char *)(lVar2 + 0x112) != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(this_00);
    this_01 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
    PlantAnimRig_HoyaCordata::getIdleAnimationName();
    WorldDataManager::FindEventByLevelName(this_01,asStack_10);
    std::string::~string(asStack_10);
    FUN_04504780(*(long *)(this + 0x18) + 8);
  }
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  WaveGeneratorProperties::FixupData((WaveGeneratorProperties *)pRVar3);
  pWVar1 = *(WaveGenerator **)(this + 0x18);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  WaveGenerator::Initialize(pWVar1,(WaveGeneratorProperties *)pRVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::Serialize(Sexy::RtSerializeContext const&) */

void __thiscall
WaveGeneratorModule::Serialize(WaveGeneratorModule *this,RtSerializeContext *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  WaveGenerator *this_00;
  long *plVar5;
  code *pcVar6;
  RtSerialRtonKey aRStack_40 [8];
  RtSerializeContext aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_045041d4(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_045041bc(*(undefined1 *)(lVar4 + 0x10));
  if (cVar1 == '\0') {
    cVar1 = WaveGenerator::PreSerialize(*(WaveGenerator **)(this + 0x18),false);
  }
  else {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 0x18))();
      *(undefined8 *)(this + 0x18) = 0;
    }
    this_00 = ::operator_new(0x2898);
    WaveGenerator::WaveGenerator(this_00);
    *(WaveGenerator **)(this + 0x18) = this_00;
    bVar2 = (bool)FUN_045041bc(*(undefined1 *)(lVar4 + 0x10));
    cVar1 = WaveGenerator::PreSerialize(this_00,bVar2);
  }
  if (cVar1 != '\0') {
    plVar5 = *(long **)(this + 0x18);
    pcVar6 = *(code **)(*plVar5 + 0x30);
    Sexy::RtSerialRtonKey::RtSerialRtonKey(aRStack_40,"wavegeneratorobjdata");
    Sexy::RtSerializeContext::RtSerializeContext(aRStack_38,lVar4,aRStack_40,0);
    cVar1 = (*pcVar6)(plVar5,aRStack_38);
    Sexy::RtSerializeContext::~RtSerializeContext(aRStack_38);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_40);
    if (cVar1 != '\0') {
      uVar3 = GameObject::Serialize((GameObject *)this,param_1);
      goto LAB_04506a40;
    }
  }
  uVar3 = 0;
LAB_04506a40:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall WaveGeneratorModule::AddResourceRequirements(WaveGeneratorModule *this,set *param_1)

{
  bool bVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  long lVar4;
  ZombieType *pZVar5;
  long lVar6;
  long *plVar7;
  ProfileMgr *this_00;
  NewPVPMgr *this_01;
  undefined8 uVar8;
  string *psVar9;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_18 = FUN_04504d38(*(undefined8 *)(pRVar3 + 0x58));
  local_10 = FUN_04504d88(*(undefined8 *)(pRVar3 + 0x60));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x10));
    if (cVar2 != '\0') {
      pZVar5 = (ZombieType *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x10));
      ZombieType::AddInGameResourceRequirements(pZVar5,param_1);
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  }
  local_28 = FUN_04504dd8(*(undefined8 *)(pRVar3 + 0x40));
  local_20 = FUN_04504e28(*(undefined8 *)(pRVar3 + 0x48));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    do {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      local_18 = FUN_04504d38(*(undefined8 *)(lVar4 + 0x50));
      local_10 = FUN_04504d88(*(undefined8 *)(lVar4 + 0x58));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar6 + 0x10));
        if (cVar2 != '\0') {
          pZVar5 = (ZombieType *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x10));
          ZombieType::AddInGameResourceRequirements(pZVar5,param_1);
        }
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
      }
      local_18 = FUN_04504e78(*(undefined8 *)(lVar4 + 0x38));
      local_10 = FUN_04504ec8(*(undefined8 *)(lVar4 + 0x40));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar6 + 0x10));
        if (cVar2 != '\0') {
          pZVar5 = (ZombieType *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x10));
          ZombieType::AddInGameResourceRequirements(pZVar5,param_1);
        }
        std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_18);
      }
      local_18 = FUN_04504f18(*(undefined8 *)(lVar4 + 0x80));
      local_10 = FUN_04504f68(*(undefined8 *)(lVar4 + 0x88));
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar1) {
        lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(lVar4 + 0x18));
        if (cVar2 != '\0') {
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar4 + 0x18));
          (**(code **)(*plVar7 + 0x48))(plVar7,param_1);
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
      }
      eastl::generic_iterator<EA::Text::FeatureLookup*,void>::operator++
                ((generic_iterator<EA::Text::FeatureLookup*,void> *)&local_28);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    } while (bVar1);
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (NewPVPMgr *)ProfileMgr::GetCurrentProfile(this_00);
  PlantAnimRig_HoyaCordata::getIdleAnimationName();
  uVar8 = NewPVPMgr::GetSunUpgradeInfos(this_01);
  FUN_05475d88((string *)&local_20,uVar8);
  cVar2 = std::operator==((string *)&local_28,(string *)&local_20);
  if (cVar2 != '\0') {
    psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string((string *)&local_10,"treasureyeti");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar9);
    std::string::~string((string *)&local_10);
    nop();
    pZVar5 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    ZombieType::AddInGameResourceRequirements(pZVar5,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  }
  std::string::~string((string *)&local_20);
  std::string::~string((string *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveGeneratorModule::registerForEvents() */

void __thiscall WaveGeneratorModule::registerForEvents(WaveGeneratorModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelInit);
  Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelInit(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelEnded);
  Sexy::Delegate0::Delegate0<WaveGeneratorModule,void(WaveGeneratorModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLevelEnded(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<WaveGeneratorModule,bool(WaveGeneratorModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterWinCondition(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onZombieSpawned);
  local_a0 = local_80;
  uStack_98 = uStack_78;
  local_90 = local_70;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<WaveGeneratorModule,void(WaveGeneratorModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::ZombieAddedToBoard,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSandStormSpawned);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<WaveGeneratorModule,void(WaveGeneratorModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::SandstormSpawned,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSandStormDestroyed);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<Zombie*,Sexy::CBMemberTranslatorX<WaveGeneratorModule,void(WaveGeneratorModule::*)(Zombie*)>>
            ((MessageRouter *)puVar1,Message::SandstormDestroyed,&local_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

