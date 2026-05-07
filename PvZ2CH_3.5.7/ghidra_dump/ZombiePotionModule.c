// Class: ZombiePotionModule


/* ZombiePotionModule::stopSpawnTimer() */

void __thiscall ZombiePotionModule::stopSpawnTimer(ZombiePotionModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* ZombiePotionModule::initializeModule() */

void __thiscall ZombiePotionModule::initializeModule(ZombiePotionModule *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::StaticClassInit() */

void ZombiePotionModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePotionModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0449e970,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePotionModule::StaticGetClass() */

long * ZombiePotionModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePotionModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionModule::ZombiePotionModule() */

void __thiscall ZombiePotionModule::ZombiePotionModule(ZombiePotionModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06851ee0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x18) = uVar1;
  return;
}


/* ZombiePotionModule::StaticNew() */

ZombiePotionModule * ZombiePotionModule::StaticNew(void)

{
  ZombiePotionModule *this;
  
  this = ::operator_new(0x20);
  ZombiePotionModule(this);
  return this;
}


/* ZombiePotionModule::~ZombiePotionModule() */

void __thiscall ZombiePotionModule::~ZombiePotionModule(ZombiePotionModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06851ee0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* ZombiePotionModule::~ZombiePotionModule() */

void __thiscall ZombiePotionModule::~ZombiePotionModule(ZombiePotionModule *this)

{
  ~ZombiePotionModule(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePotionModule::resetSpawnTimer() */

void __thiscall ZombiePotionModule::resetSpawnTimer(ZombiePotionModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)PVZ_T();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(pRVar1 + 0x40));
  *(float *)(this + 0x18) = fVar3 + fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::countPotionsOnBoard() */

void ZombiePotionModule::countPotionsOnBoard(void)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,4);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    bVar1 = Sexy::RtObject::IsA<GridItemZombiePotion>((RtObject *)*puVar2);
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* ZombiePotionModule::pickRandomPotionType() */

void ZombiePotionModule::pickRandomPotionType(void)

{
  int iVar1;
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar2;
  string *psVar3;
  
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  iVar1 = FUN_0449e5b4(*(undefined8 *)(pRVar2 + 0x50),*(undefined8 *)(pRVar2 + 0x58));
  iVar1 = Sexy::Rand(iVar1);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  FUN_0449e5c0(*(undefined8 *)(pRVar2 + 0x50),(long)iVar1);
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::registerForEvents() */

void __thiscall ZombiePotionModule::registerForEvents(ZombiePotionModule *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<ZombiePotionModule,void(ZombiePotionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnUpdate(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLevelLoaded);
  Sexy::Delegate0::Delegate0<ZombiePotionModule,void(ZombiePotionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,resetSpawnTimer);
  Sexy::Delegate0::Delegate0<ZombiePotionModule,void(ZombiePotionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar1,aDStack_38);
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,stopSpawnTimer);
  Sexy::Delegate0::Delegate0<ZombiePotionModule,void(ZombiePotionModule::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnGameplayEnded(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::pickSpotForNewPotion() */

void __thiscall ZombiePotionModule::pickSpotForNewPotion(ZombiePotionModule *this)

{
  bool bVar1;
  long lVar2;
  Point *in_x8;
  int iVar3;
  int iVar4;
  int iVar5;
  Board *this_00;
  int iVar6;
  int local_48 [2];
  string asStack_40 [8];
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
    iVar6 = 0;
    do {
      iVar4 = 0;
      Sexy::Point::Point((Point *)local_48,-1,iVar6);
      iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + -1;
      if (iVar3 < 0) {
        bVar1 = true;
        iVar5 = 0x168;
      }
      else {
        do {
          while (lVar2 = FUN_0449f0bc(iVar3,iVar6), lVar2 != 0) {
            iVar3 = iVar3 + -1;
            iVar4 = iVar4 + 1;
            if (iVar3 == -1) goto LAB_0449fc1c;
          }
          this_00 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_40,"");
          lVar2 = Board::GetPlantAt(this_00,iVar3,iVar6,asStack_40);
          if ((lVar2 == 0) && (lVar2 = FUN_0449f1a0(iVar3,iVar6), lVar2 == 0)) {
            iVar5 = 0x168;
            std::string::~string(asStack_40);
            nop();
            local_48[0] = iVar3;
            if (iVar4 == 0) goto LAB_0449fc4c;
            goto LAB_0449fc24;
          }
          iVar3 = iVar3 + -1;
          std::string::~string(asStack_40);
          nop();
        } while (iVar3 != -1);
LAB_0449fc1c:
        if (iVar4 == 0) {
          bVar1 = true;
          iVar5 = 0x168;
        }
        else {
LAB_0449fc24:
          iVar5 = 0x168;
          do {
            iVar4 = iVar4 + -1;
            iVar5 = iVar5 / 2;
          } while (iVar4 != 0);
          bVar1 = iVar5 != 0;
        }
      }
      if ((-1 < local_48[0]) && (bVar1)) {
LAB_0449fc4c:
        Sexy::Point::Point((Point *)asStack_40,(TPoint *)local_48);
        ProbabilitySet<Sexy::Point>::AddItem
                  ((ProbabilitySet<Sexy::Point> *)aPStack_38,asStack_40,iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  lVar2 = ProbabilitySet<Sexy::Point>::GetSize((ProbabilitySet<Sexy::Point> *)aPStack_38);
  if (lVar2 == 0) {
    Sexy::Point::Point(in_x8,-1,-1);
  }
  else {
    ProbabilitySet<Sexy::Point>::PickItem();
  }
  ProbabilitySet<Sexy::Point>::~ProbabilitySet((ProbabilitySet<Sexy::Point> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::onLevelLoaded() */

void __thiscall ZombiePotionModule::onLevelLoaded(ZombiePotionModule *this)

{
  LawnApp *this_00;
  char cVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  int iVar4;
  Board *pBVar5;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  if (0 < *(int *)(pRVar2 + 0x4c)) {
    do {
      pickSpotForNewPotion(this);
      if ((-1 < local_20) && (-1 < local_1c)) {
        pickRandomPotionType();
        this_00 = gLawnApp;
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
        cVar1 = LawnApp::CanLoadGroups(this_00,(vector *)(lVar3 + 0x18));
        if (cVar1 != '\0') {
          pBVar5 = *(Board **)(gLawnApp + 0x9f0);
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          Board::LoadResourceGroupsForGameplay(pBVar5,(vector *)(lVar3 + 0x18));
        }
        pBVar5 = *(Board **)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        Board::AddGridItem(pBVar5,aRStack_10,local_20,local_1c,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      iVar4 = iVar4 + 1;
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    } while (iVar4 < *(int *)(pRVar2 + 0x4c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionModule::onUpdate() */

void __thiscall ZombiePotionModule::onUpdate(ZombiePotionModule *this)

{
  int iVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  Board *pBVar3;
  float fVar4;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x18) < fVar4) {
    resetSpawnTimer(this);
    iVar1 = countPotionsOnBoard();
    pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    if (((iVar1 < *(int *)(pRVar2 + 0x48)) && (pickSpotForNewPotion(this), -1 < local_20)) &&
       (-1 < local_1c)) {
      pickRandomPotionType();
      pBVar3 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      Board::AddGridItem(pBVar3,aRStack_10,local_20,local_1c,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

