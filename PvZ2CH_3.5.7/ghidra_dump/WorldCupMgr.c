// Class: WorldCupMgr


/* WorldCupMgr::ShouldDoTutorial(TutorialStateType) */

bool __thiscall WorldCupMgr::ShouldDoTutorial(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LevelModuleManager *this;
  IntroWorldCup *this_00;
  
  this = (LevelModuleManager *)FUN_04c3c810(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<IntroWorldCup>(this);
  if (this_00 != (IntroWorldCup *)0x0) {
    iVar1 = IntroWorldCup::GetTutorialStateByType(this_00,param_2);
    iVar2 = FUN_04c3c80c(*(undefined4 *)(this_00 + 0x58));
    return iVar2 < iVar1;
  }
  return false;
}


/* WorldCupMgr::IsTutorial() */

void WorldCupMgr::IsTutorial(void)

{
  LevelModuleManager *this;
  IntroWorldCup *this_00;
  
  this = (LevelModuleManager *)FUN_04c3c810(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  this_00 = LevelModuleManager::GetModuleByClass<IntroWorldCup>(this);
  if (this_00 != (IntroWorldCup *)0x0) {
    IntroWorldCup::IsTutorial(this_00);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupMgr::SetCarrierForTutorial(Sexy::RtWeakPtr<Zombie>) */

void __thiscall WorldCupMgr::SetCarrierForTutorial(undefined8 param_1,RtWeakPtrBase *param_2)

{
  char cVar1;
  LevelModuleManager *this;
  IntroWorldCup *pIVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = IsTutorial();
  if (cVar1 != '\0') {
    this = (LevelModuleManager *)FUN_04c3c810(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
    pIVar2 = LevelModuleManager::GetModuleByClass<IntroWorldCup>(this);
    if (pIVar2 != (IntroWorldCup *)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      IntroWorldCup::SetCarrierForTutorial(pIVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldCupMgr::GetGameEndTime() */

undefined1  [16] WorldCupMgr::GetGameEndTime(void)

{
  LevelModuleManager *this;
  SoccerGameModule *pSVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  this = (LevelModuleManager *)FUN_04c3c810(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  pSVar1 = LevelModuleManager::GetModuleByClass<SoccerGameModule>(this);
  if (pSVar1 != (SoccerGameModule *)0x0) {
    FUN_04c3c81c(*(undefined4 *)(pSVar1 + 0x20));
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}


/* WorldCupMgr::GetCurrentScore(bool) */

void __thiscall WorldCupMgr::GetCurrentScore(WorldCupMgr *this,bool param_1)

{
  LevelModuleManager *this_00;
  SoccerGameModule *pSVar1;
  
  this_00 = (LevelModuleManager *)FUN_04c3c810(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pSVar1 = LevelModuleManager::GetModuleByClass<SoccerGameModule>(this_00);
  if (pSVar1 == (SoccerGameModule *)0x0) {
    return;
  }
  if (!param_1) {
    FUN_04c3c814(*(undefined4 *)(pSVar1 + 0x24));
    return;
  }
  FUN_04c3c818(*(undefined4 *)(pSVar1 + 0x28));
  return;
}


/* WorldCupMgr::WorldCupMgr() */

void __thiscall WorldCupMgr::WorldCupMgr(WorldCupMgr *this)

{
  Sexy::LazySingleton<WorldCupMgr>::LazySingleton((LazySingleton<WorldCupMgr> *)this);
  *(undefined ***)this = &PTR__WorldCupMgr_06985660;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupMgr::IsPlantDisabled(int, int) */

void __thiscall WorldCupMgr::IsPlantDisabled(WorldCupMgr *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = LawnApp::GetWorldCupConfig(gLawnApp);
  WorldCupConfig::GetTargetSetLocations(iVar2);
  cVar1 = std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::empty
                    ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)&local_20)
  ;
  if (cVar1 == '\0') {
    lVar5 = 0;
    lVar3 = FUN_04c3c820(local_20,local_18);
    if (lVar3 != 0) {
      do {
        piVar4 = (int *)FUN_04c3c82c(local_20,lVar5);
        if ((*piVar4 == param_1) && (piVar4[1] == param_2)) goto LAB_04c3cd10;
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar3);
    }
    cVar1 = '\x01';
  }
LAB_04c3cd10:
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::~vector
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupMgr::GetRandomPlantSpotForTutorial() */

void __thiscall WorldCupMgr::GetRandomPlantSpotForTutorial(WorldCupMgr *this)

{
  int iVar1;
  int *piVar2;
  Point *in_x8;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetWorldCupConfig(gLawnApp);
  WorldCupConfig::GetTargetSetLocations(iVar1);
  iVar1 = FUN_04c3c820(local_20,local_18);
  iVar1 = Sexy::Rand(iVar1);
  piVar2 = (int *)std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::at
                            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)
                             &local_20,(long)iVar1);
  Sexy::Point::Point(in_x8,*piVar2,piVar2[1]);
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::~vector
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupMgr::GetCurrentSetSize() */

void WorldCupMgr::GetCurrentSetSize(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = LawnApp::GetWorldCupConfig(gLawnApp);
  WorldCupConfig::GetTargetSetLocations(iVar1);
  uVar2 = FUN_04c3c820(local_20,local_18);
  std::vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>>::~vector
            ((vector<ObstacleNonSpawnData,std::allocator<ObstacleNonSpawnData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WorldCupMgr::NotifyTutorialState(TutorialStateType) */

void __thiscall WorldCupMgr::NotifyTutorialState(WorldCupMgr *this,int param_2)

{
  char cVar1;
  
  cVar1 = IsTutorial();
  if ((cVar1 != '\0') && (cVar1 = ShouldDoTutorial(this,param_2), cVar1 != '\0')) {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::NotifyTutorialState,param_2);
    return;
  }
  return;
}


/* WorldCupMgr::~WorldCupMgr() */

void __thiscall WorldCupMgr::~WorldCupMgr(WorldCupMgr *this)

{
  *(undefined ***)this = &PTR__WorldCupMgr_06985660;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  Sexy::LazySingleton<WorldCupMgr>::~LazySingleton((LazySingleton<WorldCupMgr> *)this);
  return;
}


/* WorldCupMgr::~WorldCupMgr() */

void __thiscall WorldCupMgr::~WorldCupMgr(WorldCupMgr *this)

{
  ~WorldCupMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupMgr::InitTestData() */

void __thiscall WorldCupMgr::InitTestData(WorldCupMgr *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  long lVar1;
  string asStack_10 [8];
  long local_8;
  
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  FUN_04c3c848(this + 8);
  std::string::string(asStack_10,"sunshroom");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"wallnut");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"homingthistle");
  std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x28) = 0x66;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

