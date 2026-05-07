// Class: GlacierModule


/* GlacierModule::gameplayStarted() */

void GlacierModule::gameplayStarted(void)

{
  return;
}


/* GlacierModule::onLevelLoaded() */

void GlacierModule::onLevelLoaded(void)

{
  return;
}


/* GlacierModule::onUpdate() */

void GlacierModule::onUpdate(void)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModule::StaticClassInit() */

void GlacierModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"GlacierModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a0bdd8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GlacierModule::StaticGetClass() */

long * GlacierModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GlacierModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GlacierModule::destroyPlantsAt(int, int) */

void __thiscall GlacierModule::destroyPlantsAt(GlacierModule *this,int param_1,int param_2)

{
  PlantGroup *pPVar1;
  
  pPVar1 = (PlantGroup *)Board::GetPlantGroupAt(*(Board **)(gLawnApp + 0x9f0),param_1,param_2);
  if (pPVar1 != (PlantGroup *)0x0) {
    PlantGroup::KillPlants(pPVar1,2,0);
    return;
  }
  return;
}


/* GlacierModule::~GlacierModule() */

void __thiscall GlacierModule::~GlacierModule(GlacierModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0692dc30;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* GlacierModule::~GlacierModule() */

void __thiscall GlacierModule::~GlacierModule(GlacierModule *this)

{
  ~GlacierModule(this);
  AK::FreeHook(this);
  return;
}


/* GlacierModule::GlacierModule() */

void __thiscall GlacierModule::GlacierModule(GlacierModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692dc30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  return;
}


/* GlacierModule::StaticNew() */

GlacierModule * GlacierModule::StaticNew(void)

{
  GlacierModule *this;
  
  this = ::operator_new(0x20);
  GlacierModule(this);
  return this;
}


/* GlacierModule::isColumnAvailableToFill(int) */

undefined8 __thiscall GlacierModule::isColumnAvailableToFill(GlacierModule *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = FUN_04a0b9e0(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (lVar2 != 0);
  return 1;
}


/* GlacierModule::GetMaxAvailableColumn() */

int __thiscall GlacierModule::GetMaxAvailableColumn(GlacierModule *this)

{
  char cVar1;
  int iVar2;
  
  iVar2 = k_maxGlacierColumn;
  if (k_minGlacierColumn <= k_maxGlacierColumn) {
    do {
      cVar1 = isColumnAvailableToFill(this,iVar2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + -1;
    } while (k_minGlacierColumn <= iVar2);
  }
  return -1;
}


/* GlacierModule::IsRoomForAdvance() */

bool __thiscall GlacierModule::IsRoomForAdvance(GlacierModule *this)

{
  int iVar1;
  
  iVar1 = GetMaxAvailableColumn(this);
  return k_minGlacierColumn <= iVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModule::GetBoss() */

void GlacierModule::GetBoss(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  vector *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  ulong uVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x18);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 == '\0') {
    uVar5 = 0;
    pvVar2 = (vector *)Board::GetZombies(*(Board **)(gLawnApp + 0x9f0));
    std::vector<Zombie*,std::allocator<Zombie*>>::vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20,pvVar2);
    uVar6 = local_20;
    uVar3 = FUN_04a0b164(local_20,local_18);
    if (uVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04a0b170(uVar6,uVar5);
        if ((Zombie *)*puVar4 != (Zombie *)0x0) {
          cVar1 = Zombie::IsBoss((Zombie *)*puVar4);
          uVar6 = local_20;
          if (cVar1 != '\0') {
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                      ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            break;
          }
          uVar3 = FUN_04a0b164(local_20,local_18);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModule::registerForEvents() */

void __thiscall GlacierModule::registerForEvents(GlacierModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gameplayStarted);
  Sexy::Delegate0::Delegate0<GlacierModule,void(GlacierModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<GlacierModule,void(GlacierModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoaded);
  Sexy::Delegate0::Delegate0<GlacierModule,void(GlacierModule::*)()>(aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GlacierModule::getZombieForColumn(int) */

void __thiscall GlacierModule::getZombieForColumn(GlacierModule *this,int param_1)

{
  ResilienceTutorialIntroProperties *pRVar1;
  ProbabilityTypeContainer *this_00;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (ProbabilityTypeContainer *)FUN_04a0b158(*(undefined8 *)(pRVar1 + 0x40),(long)param_1);
  ProbabilityTypeContainer::PickItem(this_00);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04a0c4f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* GlacierModule::addZombieToBlock(GridItem*, int) */

void __thiscall GlacierModule::addZombieToBlock(GlacierModule *this,GridItem *param_1,int param_2)

{
  bool bVar1;
  ProbabilityTypeRecord *pPVar2;
  ComponentRunner *this_00;
  ComponentOnDeath_SpawnZombie *pCVar3;
  RtMixedPtrBase aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  ProbabilityTypeRecord aPStack_28 [16];
  string asStack_18 [12];
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (ProbabilityTypeRecord *)getZombieForColumn(this,param_2);
  ProbabilityTypeRecord::ProbabilityTypeRecord(aPStack_28,pPVar2);
  GetBoss();
  this_00 = (ComponentRunner *)Sexy::RtMixedPtrBase::IsValid(aRStack_48);
  if (((ulong)this_00 & 0xff) != 0) {
    this_00 = (ComponentRunner *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Zombie::GetSummonZombieLevel((Zombie *)this_00);
    local_c = (int)this_00;
  }
  bVar1 = std::operator!=(asStack_18,"");
  if (bVar1) {
    BoardEntity::GetComponentRunner((BoardEntity *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
    std::string::string(asStack_30,"");
    pCVar3 = ComponentRunner::Add<ComponentOnDeath_SpawnZombie>(this_00,aRStack_38,asStack_30);
    std::string::~string(asStack_30);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    FUN_05475d88(asStack_30,asStack_18);
    ComponentOnDeath_SpawnZombie::SetZombieTypeToSpawn(pCVar3,asStack_30,local_c,0);
    std::string::~string(asStack_30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  ProbabilityTypeRecord::~ProbabilityTypeRecord(aPStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlacierModule::Advance(int, int) */

void __thiscall GlacierModule::Advance(GlacierModule *this,int param_1,int param_2)

{
  string *psVar1;
  long lVar2;
  GridItem *pGVar3;
  Board *pBVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_10,"zomboss_iceage_glacier_block");
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  lVar2 = FUN_04a0b9e0(param_1,param_2);
  if (lVar2 == 0) {
    destroyPlantsAt(this,param_1,param_2);
    pBVar4 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    pGVar3 = (GridItem *)Board::AddGridItem(pBVar4,asStack_10,param_1,param_2,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    FUN_04a0b26c(pGVar3 + 0x24);
    addZombieToBlock(this,pGVar3,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GlacierModule::spawnColumn(int) */

void __thiscall GlacierModule::spawnColumn(GlacierModule *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 <= iVar2) break;
    Advance(this,param_1,iVar2);
    iVar2 = iVar2 + 1;
  }
  return;
}


/* GlacierModule::Advance(int) */

void __thiscall GlacierModule::Advance(GlacierModule *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 <= iVar2) break;
    Advance(this,param_1,iVar2);
    iVar2 = iVar2 + 1;
  }
  return;
}


/* GlacierModule::Advance() */

void __thiscall GlacierModule::Advance(GlacierModule *this)

{
  int iVar1;
  
  iVar1 = GetMaxAvailableColumn(this);
  if (iVar1 < k_minGlacierColumn) {
    return;
  }
  Advance(this,iVar1);
  return;
}

