// Class: SeedRainModule


/* SeedRainModule::onLoadComplete() */

void SeedRainModule::onLoadComplete(void)

{
  return;
}


/* SeedRainModule::onMissionFinish() */

void __thiscall SeedRainModule::onMissionFinish(SeedRainModule *this)

{
  this[0xac] = (SeedRainModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainModule::onCollectableSeedRainFinished(CollectableSeedRain*) */

void __thiscall
SeedRainModule::onCollectableSeedRainFinished(SeedRainModule *this,CollectableSeedRain *param_1)

{
  long lVar1;
  int local_18;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  if (param_1 != (CollectableSeedRain *)0x0) {
    CollectableSeedRain::GetTargetGrid();
    CollectableSeedRain::GetTargetGrid();
    *(undefined4 *)(this + ((long)local_c + (long)local_18 * 4) * 4 + 0x1c) = 0;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainModule::initializeModule() */

void __thiscall SeedRainModule::initializeModule(SeedRainModule *this)

{
  bool bVar1;
  SeedRainModule *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = PVZ_EOT();
  iVar5 = 0;
  this[0xac] = (SeedRainModule)0x0;
  *(undefined4 *)(this + 0x18) = uVar6;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
      iVar3 = 1;
      pSVar2 = this;
      if (0 < iVar4 + -1) {
        do {
          *(undefined4 *)(pSVar2 + 0x1c) = 0;
          iVar4 = BoardConstants::NUMBER_OF_ROWS();
          bVar1 = iVar3 < iVar4 + -1;
          iVar3 = iVar3 + 1;
          pSVar2 = pSVar2 + 4;
        } while (bVar1);
      }
      iVar5 = iVar5 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      this = this + 0x10;
    } while (iVar5 < iVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainModule::StaticClassInit() */

void SeedRainModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedRainModule");
    (*pcVar2)(plVar1,asStack_10,FUN_04a09288,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedRainModule::StaticGetClass() */

long * SeedRainModule::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedRainModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedRainModule::SeedRainModule() */

void __thiscall SeedRainModule::SeedRainModule(SeedRainModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0692da80;
  return;
}


/* SeedRainModule::StaticNew() */

SeedRainModule * SeedRainModule::StaticNew(void)

{
  SeedRainModule *this;
  
  this = ::operator_new(0xb0);
  SeedRainModule(this);
  return this;
}


/* SeedRainModule::~SeedRainModule() */

void __thiscall SeedRainModule::~SeedRainModule(SeedRainModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0692da80;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* SeedRainModule::~SeedRainModule() */

void __thiscall SeedRainModule::~SeedRainModule(SeedRainModule *this)

{
  ~SeedRainModule(this);
  AK::FreeHook(this);
  return;
}


/* SeedRainModule::onGameplayStarted() */

void __thiscall SeedRainModule::onGameplayStarted(SeedRainModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  *(float *)(this + 0x18) = fVar2 + *(float *)(pRVar1 + 0x58);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainModule::AddResourceRequirements(std::set<std::string, std::less<std::string >,
   std::allocator<std::string > >&) */

void __thiscall SeedRainModule::AddResourceRequirements(SeedRainModule *this,set *param_1)

{
  bool bVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  long lVar3;
  long lVar4;
  string *psVar5;
  long *plVar6;
  ZombieType *this_00;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LevelModule::AddResourceRequirements((LevelModule *)this,param_1);
  std::string::string(asStack_10,"UI_ZombieAlmanac");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"UI_ZombieAlmanac_Dynamic");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantHypnoShroom");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_20 = FUN_04a096e0(*(undefined8 *)(pRVar2 + 0x40));
  local_18 = FUN_04a09730(*(undefined8 *)(pRVar2 + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar4 = FUN_05474184();
    if ((lVar4 != 0) && (*(int *)(lVar3 + 0x10) == 0)) {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      (**(code **)(*plVar6 + 0x48))(plVar6,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    lVar4 = FUN_05474184(lVar3 + 8);
    if ((lVar4 != 0) && (*(int *)(lVar3 + 0x10) == 1)) {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
      this_00 = (ZombieType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      ZombieType::AddInGameResourceRequirements(this_00,param_1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainModule::registerForEvents() */

void __thiscall SeedRainModule::registerForEvents(SeedRainModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<SeedRainModule,void(SeedRainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<SeedRainModule,void(SeedRainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdate);
  Sexy::Delegate0::Delegate0<SeedRainModule,void(SeedRainModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCollectableSeedRainFinished);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<CollectableSeedRain*,Sexy::CBMemberTranslatorX<SeedRainModule,void(SeedRainModule::*)(CollectableSeedRain*)>>
            ((MessageRouter *)puVar1,Message::CollectableSeedRainFinished,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMissionFinish);
  Sexy::Delegate0::Delegate0<SeedRainModule,void(SeedRainModule::*)()>(aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedRainModule::takeRain() */

void __thiscall SeedRainModule::takeRain(SeedRainModule *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  long lVar8;
  string *psVar9;
  undefined8 uVar10;
  PVZDB *pPVar11;
  RtDbTable *pRVar12;
  RtObject *this_00;
  Plant *pPVar13;
  Collectable *this_01;
  CollectableSeedRain *extraout_x0;
  Zombie *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *this_03;
  string *extraout_x0_00;
  string *extraout_x0_01;
  Plant *this_04;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  SeedRainModule *pSVar14;
  SeedRainModule *pSVar15;
  CollectableSeedRain *pCVar16;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  float local_c8 [4];
  undefined8 local_b8 [2];
  undefined8 local_a8 [2];
  RtId aRStack_98 [16];
  Iterator aIStack_88 [16];
  int local_78;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_68 [48];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar5 = 0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_68);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  pSVar15 = this;
  if (0 < iVar3) {
    do {
      iVar4 = BoardConstants::NUMBER_OF_ROWS();
      iVar3 = 0;
      pSVar14 = pSVar15;
      if (0 < iVar4 + -1) {
        do {
          if (*(int *)(pSVar14 + 0x1c) == 0) {
            Sexy::Point::Point((Point *)local_38,iVar5,iVar3);
            ProbabilitySet<Sexy::Point>::AddItem
                      ((ProbabilitySet<Sexy::Point> *)aPStack_68,
                       (ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38,1);
          }
          iVar4 = BoardConstants::NUMBER_OF_ROWS();
          iVar3 = iVar3 + 1;
          pSVar14 = pSVar14 + 4;
        } while (iVar3 < iVar4 + -1);
      }
      iVar5 = iVar5 + 1;
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      pSVar15 = pSVar15 + 0x10;
    } while (iVar5 < iVar3);
  }
  Sexy::Point::Point((Point *)&local_d8);
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  uVar6 = Sexy::Rand(iVar5);
  local_d8 = CONCAT44(local_d8._4_4_,uVar6);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  iVar5 = Sexy::Rand(iVar5 + -1);
  local_d8 = CONCAT44(iVar5,(int)local_d8);
  lVar8 = ProbabilitySet<Sexy::Point>::GetSize((ProbabilitySet<Sexy::Point> *)aPStack_68);
  if (lVar8 != 0) {
    ProbabilitySet<Sexy::Point>::PickItem();
    local_d8 = local_38[0];
    iVar5 = (int)((ulong)local_38[0] >> 0x20);
  }
  *(undefined4 *)(this + ((long)(int)local_d8 * 4 + (long)iVar5) * 4 + 0x1c) = 1;
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_d8,(Point *)0x1);
  iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)local_c8,(float)local_d0,(float)local_cc - (float)iVar5 * 0.5,0.0);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
  local_b8[0] = FUN_04a096e0(*(undefined8 *)(pRVar7 + 0x40));
  local_a8[0] = FUN_04a09730(*(undefined8 *)(pRVar7 + 0x48));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)local_b8,(__normal_iterator *)local_a8);
    if (!bVar1) {
      ProbabilitySet<SeedRainContentProperties>::PickItem();
      EATextSquish::Vec3::Vec3((Vec3 *)local_b8,local_c8[0] - 50.0,-50.0,0.0);
      psVar9 = *(string **)(gLawnApp + 0x9f0);
      std::string::string((string *)aRStack_98,"seed_rain");
      this_01 = (Collectable *)
                Board::AddCollectableWithDefaultMotion(psVar9,(SexyVector3 *)aRStack_98);
      std::string::~string((string *)aRStack_98);
      nop();
      if (local_78 == 0) {
        nop();
        CollectableSeedRain::SetPlantSeedType(extraout_x0_00);
        pCVar16 = (CollectableSeedRain *)extraout_x0_00;
      }
      else if (local_78 == 1) {
        nop();
        CollectableSeedRain::SetZombieSeedType(extraout_x0_01);
        pCVar16 = (CollectableSeedRain *)extraout_x0_01;
      }
      else if (local_78 == 2) {
        nop();
        Plant::SetShowUpgrade(this_04,true);
        pCVar16 = (CollectableSeedRain *)this_04;
      }
      else {
        nop();
        pCVar16 = extraout_x0;
      }
      Sexy::Point::Point((Point *)aRStack_98,(TPoint *)&local_d8);
      CollectableSeedRain::SetTargetGrid(pCVar16,aRStack_98);
      DVec3::DVec3((DVec3 *)local_a8);
      DVec3::DVec3((DVec3 *)aRStack_98);
      switch(local_d8._4_4_) {
      case 0:
        CalculateTossVelocity
                  ((SexyVector3 *)local_b8,(SexyVector3 *)local_c8,10.0,2.0,(SexyVector3 *)local_a8,
                   (SexyVector3 *)aRStack_98);
        break;
      case 1:
        CalculateTossVelocity
                  ((SexyVector3 *)local_b8,(SexyVector3 *)local_c8,10.0,2.5,(SexyVector3 *)local_a8,
                   (SexyVector3 *)aRStack_98);
        break;
      case 2:
        CalculateTossVelocity
                  ((SexyVector3 *)local_b8,(SexyVector3 *)local_c8,10.0,3.0,(SexyVector3 *)local_a8,
                   (SexyVector3 *)aRStack_98);
        break;
      case 3:
        CalculateTossVelocity
                  ((SexyVector3 *)local_b8,(SexyVector3 *)local_c8,10.0,3.5,(SexyVector3 *)local_a8,
                   (SexyVector3 *)aRStack_98);
        break;
      default:
        CalculateTossVelocity
                  ((SexyVector3 *)local_b8,(SexyVector3 *)local_c8,10.0,4.0,(SexyVector3 *)local_a8,
                   (SexyVector3 *)aRStack_98);
      }
      Collectable::SetMotionNewtonian
                (this_01,(SexyVector3 *)local_a8,(SexyVector3 *)aRStack_98,true);
      Collectable::SetKeepOnBoard(this_01,true);
      NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this_01);
      Sexy::PACommand::~PACommand((PACommand *)aIStack_88);
      ProbabilitySet<SeedRainContentProperties>::~ProbabilitySet
                ((ProbabilitySet<SeedRainContentProperties> *)local_38);
      ProbabilitySet<Sexy::Point>::~ProbabilitySet((ProbabilitySet<Sexy::Point> *)aPStack_68);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar9 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_b8);
    iVar5 = *(int *)(psVar9 + 0x10);
    if (iVar5 == 0) {
      uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
      PVZDB::GetObjectIteratorForTable(aIStack_88,uVar10,0x2c);
      iVar5 = 0;
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar1) {
        pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar12 = (RtDbTable *)PVZDB::GetTable(pPVar11,0x2c);
        Sexy::RtDbTable::Iterator::operator*(aIStack_88);
        this_00 = (RtObject *)Sexy::RtDbTable::GetObjectForId(pRVar12,aRStack_98);
        pPVar13 = Sexy::RtObject::Cast<Plant>(this_00);
        Sexy::RtId::~RtId(aRStack_98);
        iVar3 = extraout_w1;
        if (pPVar13 != (Plant *)0x0) {
          Plant::GetType();
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          cVar2 = std::operator==((string *)(lVar8 + 8),psVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
          iVar3 = extraout_w1_00;
          if (cVar2 != '\0') {
            iVar5 = iVar5 + 1;
          }
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar3);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
      if (iVar5 < *(int *)(psVar9 + 0x14)) goto LAB_04a0a760;
    }
    else if (iVar5 == 1) {
      uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
      iVar5 = 0;
      PVZDB::GetObjectIteratorForTable(aIStack_88,uVar10,0x29);
      while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_88), bVar1) {
        pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        pRVar12 = (RtDbTable *)PVZDB::GetTable(pPVar11,0x29);
        Sexy::RtDbTable::Iterator::operator*(aIStack_88);
        Sexy::RtDbTable::GetObjectForId(pRVar12,aRStack_98);
        nop();
        Sexy::RtId::~RtId(aRStack_98);
        iVar3 = extraout_w1_01;
        if ((this_02 != (Zombie *)0x0) &&
           (cVar2 = RealObject::IsOnTeam(this_02,1), iVar3 = extraout_w1_02, cVar2 != '\0')) {
          this_03 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_02);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_03);
          cVar2 = std::operator==((string *)(lVar8 + 8),psVar9 + 8);
          iVar3 = extraout_w1_03;
          if (cVar2 != '\0') {
            iVar5 = iVar5 + 1;
          }
        }
        Sexy::RtDbTable::Iterator::operator++(aIStack_88,iVar3);
      }
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_88);
      if (iVar5 < *(int *)(psVar9 + 0x14)) goto LAB_04a0a760;
    }
    else if (iVar5 == 2) {
LAB_04a0a760:
      SeedRainContentProperties::SeedRainContentProperties
                ((SeedRainContentProperties *)aIStack_88,(SeedRainContentProperties *)psVar9);
      ProbabilitySet<SeedRainContentProperties>::AddItem
                ((ProbabilitySet<SeedRainContentProperties> *)local_38,aIStack_88,
                 *(undefined4 *)(psVar9 + 0x18));
      Sexy::PACommand::~PACommand((PACommand *)aIStack_88);
    }
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)local_b8);
  } while( true );
}


/* SeedRainModule::onUpdate() */

void __thiscall SeedRainModule::onUpdate(SeedRainModule *this)

{
  ResilienceTutorialIntroProperties *pRVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x18) < fVar2) && (this[0xac] == (SeedRainModule)0x0)) {
    fVar2 = (float)PVZ_T();
    pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(float *)(this + 0x18) = fVar2 + *(float *)(pRVar1 + 0x58);
    takeRain(this);
    return;
  }
  return;
}

