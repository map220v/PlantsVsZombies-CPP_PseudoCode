// Class: SimpleZombieSpawnerModule


/* SimpleZombieSpawnerModule::SimpleZombieSpawnerModule() */

void __thiscall
SimpleZombieSpawnerModule::SimpleZombieSpawnerModule(SimpleZombieSpawnerModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0684cc60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* SimpleZombieSpawnerModule::~SimpleZombieSpawnerModule() */

void __thiscall
SimpleZombieSpawnerModule::~SimpleZombieSpawnerModule(SimpleZombieSpawnerModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0684cc60;
  std::
  vector<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
  ::~vector((vector<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
             *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SimpleZombieSpawnerModule::~SimpleZombieSpawnerModule() */

void __thiscall
SimpleZombieSpawnerModule::~SimpleZombieSpawnerModule(SimpleZombieSpawnerModule *this)

{
  ~SimpleZombieSpawnerModule(this);
  AK::FreeHook(this);
  return;
}


/* SimpleZombieSpawnerModule::getIsDoneSpawning() */

bool __thiscall SimpleZombieSpawnerModule::getIsDoneSpawning(SimpleZombieSpawnerModule *this)

{
  return *(int *)(this + 0x20) == 0;
}


/* SimpleZombieSpawnerModule::stopSpawner() */

void __thiscall SimpleZombieSpawnerModule::stopSpawner(SimpleZombieSpawnerModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SimpleZombieSpawnerModule::StaticClassInit() */

void SimpleZombieSpawnerModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SimpleZombieSpawnerModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04464438,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SimpleZombieSpawnerModule::StaticGetClass() */

long * SimpleZombieSpawnerModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SimpleZombieSpawnerModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SimpleZombieSpawnerModule::PauseSpawning() */

void __thiscall SimpleZombieSpawnerModule::PauseSpawning(SimpleZombieSpawnerModule *this)

{
  (**(code **)(*(long *)this + 0xb0))();
  return;
}


/* SimpleZombieSpawnerModule::SetActiveStage(int) */

void __thiscall
SimpleZombieSpawnerModule::SetActiveStage(SimpleZombieSpawnerModule *this,int param_1)

{
  *(int *)(this + 0x24) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SimpleZombieSpawnerModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall
SimpleZombieSpawnerModule::AddResourceRequirements(SimpleZombieSpawnerModule *this,set *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  ZombieType *this_00;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  uVar8 = *(undefined8 *)(this + 0x28);
  lVar2 = FUN_04463340(uVar8,*(undefined8 *)(this + 0x30));
  if (lVar2 != 0) {
    do {
      uVar6 = 0;
      while( true ) {
        puVar3 = (undefined8 *)FUN_044632f0(uVar8,uVar9);
        uVar7 = *puVar3;
        uVar4 = FUN_0446332c(uVar7,puVar3[1]);
        if (uVar4 <= uVar6) break;
        pRVar5 = (RtWeakPtrBase *)FUN_04463338(uVar7,uVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,pRVar5);
        cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
        if (cVar1 != '\0') {
          this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          ZombieType::AddInGameResourceRequirements(this_00,param_1);
        }
        uVar6 = uVar6 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        uVar8 = *(undefined8 *)(this + 0x28);
      }
      uVar9 = uVar9 + 1;
      uVar6 = FUN_04463340(uVar8,*(undefined8 *)(this + 0x30));
    } while (uVar9 < uVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SimpleZombieSpawnerModule::ResumeSpawning(float) */

void __thiscall
SimpleZombieSpawnerModule::ResumeSpawning(SimpleZombieSpawnerModule *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x18) = fVar1 + param_1;
  return;
}


/* SimpleZombieSpawnerModule::startSpawner() */

void __thiscall SimpleZombieSpawnerModule::startSpawner(SimpleZombieSpawnerModule *this)

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


/* SimpleZombieSpawnerModule::StaticNew() */

SimpleZombieSpawnerModule * SimpleZombieSpawnerModule::StaticNew(void)

{
  SimpleZombieSpawnerModule *this;
  
  this = ::operator_new(0x40);
  SimpleZombieSpawnerModule(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SimpleZombieSpawnerModule::spawnZombie() */

void __thiscall SimpleZombieSpawnerModule::spawnZombie(SimpleZombieSpawnerModule *this)

{
  int iVar1;
  char cVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  ulong uVar8;
  Board *pBVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = 0;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  while( true ) {
    iVar1 = *(int *)(this + 0x24);
    puVar4 = (undefined8 *)FUN_044632f0(*(undefined8 *)(this + 0x28),(long)iVar1);
    uVar10 = *puVar4;
    uVar5 = FUN_0446332c(uVar10,puVar4[1]);
    if (uVar5 <= uVar8) break;
    puVar4 = (undefined8 *)FUN_044632e4(*(undefined8 *)(pRVar3 + 0x40),(long)iVar1);
    lVar6 = FUN_04463324(*puVar4,uVar8);
    pRVar7 = (RtWeakPtrBase *)FUN_04463338(uVar10,uVar8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar7);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
      ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::AddItem
                ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38,aRStack_40,
                 *(undefined4 *)(lVar6 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    }
    uVar8 = uVar8 + 1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::PickItem();
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
  uVar10 = Board::AddZombie(pBVar9,aRStack_40,0xffffffff,1,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>>::~ProbabilitySet
            ((ProbabilitySet<Sexy::RtWeakPtr<ZombieType_const>> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


/* SimpleZombieSpawnerModule::onUpdate() */

void __thiscall SimpleZombieSpawnerModule::onUpdate(SimpleZombieSpawnerModule *this)

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
    bVar1 = (bool)spawnZombie(this);
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
/* SimpleZombieSpawnerModule::initializeModule() */

void __thiscall SimpleZombieSpawnerModule::initializeModule(SimpleZombieSpawnerModule *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  undefined8 *puVar6;
  vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  *this_00;
  ulong uVar7;
  string *psVar8;
  RtWeakPtr *pRVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  RtWeakPtr<PowerPropertySheet> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = uVar13;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
            ((LevelEditorCardPlantInterface *)&local_40);
  while (bVar1 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                           ((ObjectTypeDirectoryIterator *)&local_40), bVar1) {
    ObjectTypeDirectoryIterator<ZombieType>::operator*
              ((ObjectTypeDirectoryIterator<ZombieType> *)&local_40);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    if (*(char *)(lVar4 + 0xa8) != '\0') {
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)&local_38,(RtWeakPtr *)local_20);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
    ObjectTypeDirectoryIterator<PlantType>::operator++
              ((ObjectTypeDirectoryIterator<PlantType> *)&local_40);
  }
  uVar12 = 0;
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar4 = FUN_044632b4(*(undefined8 *)(pRVar5 + 0x40),*(undefined8 *)(pRVar5 + 0x48));
  if (lVar4 != 0) {
    do {
      uVar10 = 0;
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      puVar6 = (undefined8 *)FUN_044632e4(*(undefined8 *)(pRVar5 + 0x40),uVar12);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      std::
      vector<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
      ::push_back((vector<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>,std::allocator<std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>>>
                   *)(this + 0x28),(vector *)local_20);
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
               *)local_20);
      this_00 = (vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)FUN_044632f0(*(undefined8 *)(this + 0x28),uVar12);
      while( true ) {
        uVar11 = *puVar6;
        uVar7 = FUN_044632fc(uVar11,puVar6[1]);
        if (uVar7 <= uVar10) break;
        psVar8 = (string *)FUN_04463324(uVar11,uVar10);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_50);
        bVar1 = std::operator==(psVar8,"random");
        if ((bVar1) &&
           (cVar2 = std::
                    vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                    ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                             *)&local_38), cVar2 == '\0')) {
          iVar3 = FUN_0446332c(local_38,local_30);
          iVar3 = Sexy::Rand(iVar3);
          pRVar9 = (RtWeakPtr *)FUN_04463338(local_38,(long)iVar3);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_50,pRVar9);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_38);
          local_40 = __gnu_cxx::
                     __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                     ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                  *)&local_48,(long)iVar3);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)local_20,(__normal_iterator *)&local_40);
          std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::erase((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                   *)&local_38,local_20[0]);
        }
        else {
          psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
          FUN_04463324(*puVar6,uVar10);
          ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar8);
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_50,(RtWeakPtr *)local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20)
          ;
        }
        uVar10 = uVar10 + 1;
        std::
        vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::push_back(this_00,(RtWeakPtr *)aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
      }
      uVar12 = uVar12 + 1;
      pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      uVar10 = FUN_044632b4(*(undefined8 *)(pRVar5 + 0x40),*(undefined8 *)(pRVar5 + 0x48));
    } while (uVar12 < uVar10);
  }
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SimpleZombieSpawnerModule::registerForEvents() */

void __thiscall SimpleZombieSpawnerModule::registerForEvents(SimpleZombieSpawnerModule *this)

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
  Sexy::Delegate0::Delegate0<SimpleZombieSpawnerModule,void(SimpleZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<SimpleZombieSpawnerModule,void(SimpleZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa0);
  Sexy::Delegate0::Delegate0<SimpleZombieSpawnerModule,void(SimpleZombieSpawnerModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,getIsDoneSpawning);
  Sexy::Delegate0wRet<bool>::
  Delegate0wRet<SimpleZombieSpawnerModule,bool(SimpleZombieSpawnerModule::*)()>
            ((Delegate0wRet<bool> *)aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

