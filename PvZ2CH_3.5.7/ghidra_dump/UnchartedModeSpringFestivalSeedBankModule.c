// Class: UnchartedModeSpringFestivalSeedBankModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalSeedBankModule::StaticClassInit() */

void UnchartedModeSpringFestivalSeedBankModule::StaticClassInit(void)

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
    std::string::string(asStack_10,"UnchartedModeSpringFestivalSeedBankModule");
    (*pcVar2)(plVar1,asStack_10,FUN_0383416c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UnchartedModeSpringFestivalSeedBankModule::StaticGetClass() */

long * UnchartedModeSpringFestivalSeedBankModule::StaticGetClass(void)

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
  uVar2 = SeedBankModule::StaticGetClass();
  (*pcVar3)(plVar1,"UnchartedModeSpringFestivalSeedBankModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UnchartedModeSpringFestivalSeedBankModule::UnchartedModeSpringFestivalSeedBankModule() */

void __thiscall
UnchartedModeSpringFestivalSeedBankModule::UnchartedModeSpringFestivalSeedBankModule
          (UnchartedModeSpringFestivalSeedBankModule *this)

{
  SeedBankModule::SeedBankModule((SeedBankModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_066a68b0;
  return;
}


/* UnchartedModeSpringFestivalSeedBankModule::StaticNew() */

UnchartedModeSpringFestivalSeedBankModule *
UnchartedModeSpringFestivalSeedBankModule::StaticNew(void)

{
  UnchartedModeSpringFestivalSeedBankModule *this;
  
  this = ::operator_new(0x48);
  UnchartedModeSpringFestivalSeedBankModule(this);
  return this;
}


/* UnchartedModeSpringFestivalSeedBankModule::~UnchartedModeSpringFestivalSeedBankModule() */

void __thiscall
UnchartedModeSpringFestivalSeedBankModule::~UnchartedModeSpringFestivalSeedBankModule
          (UnchartedModeSpringFestivalSeedBankModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_066a68b0;
  SeedBankModule::~SeedBankModule((SeedBankModule *)this);
  return;
}


/* UnchartedModeSpringFestivalSeedBankModule::~UnchartedModeSpringFestivalSeedBankModule() */

void __thiscall
UnchartedModeSpringFestivalSeedBankModule::~UnchartedModeSpringFestivalSeedBankModule
          (UnchartedModeSpringFestivalSeedBankModule *this)

{
  ~UnchartedModeSpringFestivalSeedBankModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UnchartedModeSpringFestivalSeedBankModule::initializeModule() */

void __thiscall
UnchartedModeSpringFestivalSeedBankModule::initializeModule
          (UnchartedModeSpringFestivalSeedBankModule *this)

{
  vector<std::string,std::allocator<std::string>> *this_00;
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  long extraout_x0;
  string *psVar6;
  UnchartedModeBoardRecord *pUVar7;
  int *piVar8;
  ulong uVar9;
  long extraout_x0_00;
  ProfileMgr *pPVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  IntroArenaTutorialBattleModule *this_01;
  undefined8 uVar13;
  PlayerInfo *pPVar14;
  long lVar15;
  ulong uVar16;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  string asStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<std::string,std::allocator<std::string>> *)(this + 0x18);
  this[0x40] = (UnchartedModeSpringFestivalSeedBankModule)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear(this_00);
  pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  lVar15 = *(long *)pRVar5;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(pRVar5 + 0x40);
  iVar4 = (**(code **)(lVar15 + 0xa0))();
  if ((((iVar4 != 0) && (iVar4 = (**(code **)(*(long *)pRVar5 + 0xa0))(pRVar5), iVar4 != 5)) &&
      (iVar4 = (**(code **)(*(long *)pRVar5 + 0xa0))(pRVar5), iVar4 != 6)) &&
     (iVar4 = (**(code **)(*(long *)pRVar5 + 0xa0))(pRVar5), iVar4 != 7)) {
    iVar4 = (**(code **)(*(long *)pRVar5 + 0xa0))(pRVar5);
    if (iVar4 == 1) {
      nop();
      uVar16 = 0;
      while( true ) {
        uVar11 = *(undefined8 *)(extraout_x0 + 0xd8);
        uVar9 = FUN_03832e20(uVar11,*(undefined8 *)(extraout_x0 + 0xe0));
        if (uVar9 <= uVar16) break;
        psVar6 = (string *)FUN_03832e34(uVar11,uVar16);
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar6);
        uVar16 = uVar16 + 1;
      }
    }
    else {
      iVar4 = (**(code **)(*(long *)pRVar5 + 0xa0))(pRVar5);
      if (iVar4 == 2) {
        nop();
        uVar16 = 0;
        while( true ) {
          uVar11 = *(undefined8 *)(extraout_x0_00 + 0xd8);
          uVar9 = FUN_03832e40(uVar11,*(undefined8 *)(extraout_x0_00 + 0xe0));
          if (uVar9 <= uVar16) break;
          psVar6 = (string *)FUN_03832e4c(uVar11,uVar16);
          std::vector<std::string,std::allocator<std::string>>::push_back(this_00,psVar6);
          uVar16 = uVar16 + 1;
        }
      }
    }
    goto LAB_0383ca64;
  }
  uVar1 = *(uint *)(pRVar5 + 0x40);
  if ((uVar1 & 0xfffffffd) == 0) {
    pUVar7 = (UnchartedModeBoardRecord *)PVZ2UnchartedModeUtils::GetCurrentBoardRecord();
    UnchartedModeBoardRecord::UnchartedModeBoardRecord((UnchartedModeBoardRecord *)&local_50,pUVar7)
    ;
    iVar4 = 0;
    for (uVar16 = 0; uVar11 = local_38, uVar9 = FUN_03832708(local_38,local_30), uVar16 < uVar9;
        uVar16 = uVar16 + 1) {
      piVar8 = (int *)FUN_03832d58(uVar11,uVar16);
      iVar2 = *piVar8;
      if (iVar2 == iVar4) {
        std::string::string(asStack_68,"imitater");
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_68);
        std::string::~string(asStack_68);
        nop();
      }
      else {
        iVar4 = PlantNameMapperServerID::GetInstance();
        FUN_03832d58(local_38,uVar16);
        NameMapperBase::GetNameForId(iVar4);
        std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_68);
        std::string::~string(asStack_68);
      }
      iVar4 = iVar2;
    }
    UnchartedModeBoardRecord::~UnchartedModeBoardRecord((UnchartedModeBoardRecord *)&local_50);
    goto LAB_0383ca64;
  }
  if (uVar1 == 3) {
    Sexy::LazySingleton<WorldCupManager>::GetInstancePtr();
    WorldCupManager::getCurTeamPlantByTeamID();
    uVar16 = 0;
    while( true ) {
      uVar9 = FUN_03832708(local_50,local_48);
      if (uVar9 <= uVar16) break;
      iVar4 = PlantNameMapperServerID::GetInstance();
      FUN_03832d58(local_50,uVar16);
      NameMapperBase::GetNameForId(iVar4);
      std::vector<std::string,std::allocator<std::string>>::push_back(this_00,asStack_68);
      std::string::~string(asStack_68);
      uVar16 = uVar16 + 1;
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_50);
    goto LAB_0383ca64;
  }
  if (uVar1 != 1) goto LAB_0383ca64;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_68);
  lVar15 = FUN_03832e14(*(undefined8 *)(pRVar5 + 0x90),*(undefined8 *)(pRVar5 + 0x98));
  if (lVar15 == 0) {
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar10);
    PlayerInfo::GetUnlockedPlantList();
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)asStack_68,(vector *)&local_50);
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)&local_50);
  }
  else {
    std::vector<std::string,std::allocator<std::string>>::operator=
              ((vector<std::string,std::allocator<std::string>> *)asStack_68,
               (vector *)(pRVar5 + 0x90));
  }
  cVar3 = FUN_0547419c((string *)(pRVar5 + 0xc0));
  if (cVar3 == '\0') {
    pPVar10 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar14 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar10);
    cVar3 = ProfileUtils::HasCompletedLevel((string *)(pRVar5 + 0xc0),false,pPVar14);
    if (cVar3 == '\0') goto LAB_0383cd5c;
  }
  else {
LAB_0383cd5c:
    uVar11 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_68);
    uVar12 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
    local_80 = FUN_03838d04(uVar11,uVar12,pRVar5);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_70,(__normal_iterator *)&local_80);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_68);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_50,(__normal_iterator *)&local_78);
    std::vector<std::string,std::allocator<std::string>>::erase
              ((vector<std::string,std::allocator<std::string>> *)asStack_68,local_70,local_50);
  }
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)asStack_68);
  local_80 = FUN_0383908c(uVar11,uVar12,pRVar5);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_80);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_50,(__normal_iterator *)&local_78);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)asStack_68,local_70,local_50);
  this_01 = (IntroArenaTutorialBattleModule *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  uVar11 = IntroArenaTutorialBattleModule::getMowerAudio(this_01);
  uVar12 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
  uVar13 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)asStack_68);
  local_80 = FUN_0383c774(uVar12,uVar13,uVar11);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_70,(__normal_iterator *)&local_80);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_50,(__normal_iterator *)&local_78);
  std::vector<std::string,std::allocator<std::string>>::erase
            ((vector<std::string,std::allocator<std::string>> *)asStack_68,local_70,local_50);
  std::vector<std::string,std::allocator<std::string>>::operator=(this_00,(vector *)asStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_68);
LAB_0383ca64:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

