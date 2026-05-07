// Class: InitialZombiePlacer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialZombiePlacer::StaticClassInit() */

void InitialZombiePlacer::StaticClassInit(void)

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
    std::string::string(asStack_10,"InitialZombiePlacer");
    (*pcVar2)(plVar1,asStack_10,FUN_0435cb6c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* InitialZombiePlacer::StaticGetClass() */

long * InitialZombiePlacer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"InitialZombiePlacer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* InitialZombiePlacer::InitialZombiePlacer() */

void __thiscall InitialZombiePlacer::InitialZombiePlacer(InitialZombiePlacer *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06834c40;
  return;
}


/* InitialZombiePlacer::StaticNew() */

InitialZombiePlacer * InitialZombiePlacer::StaticNew(void)

{
  InitialZombiePlacer *this;
  
  this = ::operator_new(0x18);
  InitialZombiePlacer(this);
  return this;
}


/* InitialZombiePlacer::~InitialZombiePlacer() */

void __thiscall InitialZombiePlacer::~InitialZombiePlacer(InitialZombiePlacer *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06834c40;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* InitialZombiePlacer::~InitialZombiePlacer() */

void __thiscall InitialZombiePlacer::~InitialZombiePlacer(InitialZombiePlacer *this)

{
  ~InitialZombiePlacer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialZombiePlacer::onLoadComplete() */

void __thiscall InitialZombiePlacer::onLoadComplete(InitialZombiePlacer *this)

{
  int iVar1;
  bool bVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  ResilienceEntity *pRVar4;
  SexyVector3 *pSVar5;
  string *psVar6;
  code *pcVar7;
  Zombie *pZVar8;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Vec3 aVStack_58 [16];
  ResilienceEntity aRStack_48 [8];
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  local_78 = FUN_0435ceb4(*(undefined8 *)(pRVar3 + 0x40));
  local_70 = FUN_0435cf04(*(undefined8 *)(pRVar3 + 0x48));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar2) {
    pRVar4 = (ResilienceEntity *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    ResilienceEntity::ResilienceEntity(aRStack_48,pRVar4);
    Sexy::Point::Point((Point *)local_30,local_3c,local_38);
    BoardTransforms::GridToBoardSpace((Point *)local_30);
    EATextSquish::Vec3::Vec3(aVStack_58,(float)local_68,(float)local_64,0.0);
    Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
    local_30[0] = local_40;
    psVar6 = *(string **)(gLawnApp + 0x9f0);
    pcVar7 = *(code **)(*(long *)psVar6 + 0x318);
    Board::GetZombieType(psVar6);
    pSVar5 = (SexyVector3 *)(*pcVar7)(psVar6,aRStack_60,0xfffffffb,(Point *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    BoardEntity::PlaceOnBoard(pSVar5);
    iVar1 = local_34;
    if (local_34 != -1) {
      pZVar8._0_4_ = (Zombie *)PVZ_EOT();
      Zombie::ApplyCondition(pZVar8._0_4_,0,pSVar5,iVar1,1);
    }
    ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_48);
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_78);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InitialZombiePlacer::registerForEvents() */

void __thiscall InitialZombiePlacer::registerForEvents(InitialZombiePlacer *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLoadComplete);
  Sexy::Delegate0::Delegate0<InitialZombiePlacer,void(InitialZombiePlacer::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterOnLoadComplete(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

