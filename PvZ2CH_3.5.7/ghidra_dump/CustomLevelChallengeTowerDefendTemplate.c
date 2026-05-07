// Class: CustomLevelChallengeTowerDefendTemplate


/* CustomLevelChallengeTowerDefendTemplate::CustomLevelChallengeTowerDefendTemplate(CustomLevelMgr*)
    */

void __thiscall
CustomLevelChallengeTowerDefendTemplate::CustomLevelChallengeTowerDefendTemplate
          (CustomLevelChallengeTowerDefendTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665ec00;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeTowerDefendTemplate::generateWave(CustomLevelCreator&,
   std::vector<TowerDefendWaveZombie, std::allocator<TowerDefendWaveZombie> > const&,
   CustomLevelConfig const*, WaveGeneratorProperties*) */

void __thiscall
CustomLevelChallengeTowerDefendTemplate::generateWave
          (CustomLevelChallengeTowerDefendTemplate *this,CustomLevelCreator *param_1,vector *param_2
          ,CustomLevelConfig *param_3,WaveGeneratorProperties *param_4)

{
  bool bVar1;
  char cVar2;
  Sexy *this_00;
  CustomLevelMgr *this_01;
  wchar_t *pwVar3;
  string *extraout_x1;
  float fVar4;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  RtId aRStack_120 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_118 [8];
  RtName aRStack_110 [16];
  string asStack_100 [16];
  undefined4 local_f0 [4];
  RtWeakPtr<PowerPropertySheet> aRStack_e0 [16];
  int local_d0;
  WaveDefinition local_b8 [16];
  int local_a8;
  int local_a4;
  int local_a0;
  vector<ZombieSpawnData,std::allocator<ZombieSpawnData>> avStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveDefinition::WaveDefinition(local_b8);
  local_b8[0] = (WaveDefinition)0x1;
  std::string::string(asStack_100,"tower_defend");
  std::string::string((string *)local_f0,"SpawnPlantFoodCount");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_100,0.0);
  local_a8 = (int)fVar4;
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  std::string::string(asStack_100,"tower_defend");
  std::string::string((string *)local_f0,"WavePointStart");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_100,100.0);
  local_a4 = (int)fVar4;
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  std::string::string(asStack_100,"tower_defend");
  std::string::string((string *)local_f0,"WavePointIncrement");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_100,120.0);
  local_a0 = (int)fVar4;
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  std::string::string(asStack_100,"tower_defend");
  std::string::string((string *)local_f0,"SunDrop");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_100,50.0);
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  local_138 = FUN_035cf0e8(*(undefined8 *)param_2);
  local_130 = FUN_035cf138(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_138,(__normal_iterator *)&local_130), bVar1)
  {
    this_00 = (Sexy *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_138);
    cVar2 = FUN_0547419c();
    if (cVar2 == '\0') {
      this_01 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
      std::string::string((string *)local_f0,"ValidZombies");
      cVar2 = CustomLevelMgr::IsValueValid(this_01,(string *)local_f0,(string *)this_00);
      std::string::~string((string *)local_f0);
      nop();
      if (cVar2 != '\0') {
        ZombieSpawnData::ZombieSpawnData((ZombieSpawnData *)local_f0);
        Sexy::StringToWString(this_00,extraout_x1);
        pwVar3 = (wchar_t *)FUN_054766ec(auStack_128);
        Sexy::RtName::RtName(aRStack_110,pwVar3);
        Sexy::RtName::RtName((RtName *)asStack_100,L"ZombieTypes");
        Sexy::RtId::RtId(aRStack_120,aRStack_110,(RtName *)asStack_100);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_118,(RtWeakPtrBase *)aRStack_120);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_e0,(RtWeakPtr *)aRStack_118);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_118);
        Sexy::RtId::~RtId(aRStack_120);
        Sexy::RtName::~RtName((RtName *)asStack_100);
        Sexy::RtName::~RtName(aRStack_110);
        FUN_05476c50(auStack_128);
        local_f0[0] = 2;
        local_d0 = (int)fVar4;
        std::vector<ZombieSpawnData,std::allocator<ZombieSpawnData>>::push_back
                  (avStack_80,(ZombieSpawnData *)local_f0);
        PVPZoneData::~PVPZoneData((PVPZoneData *)local_f0);
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_138);
  }
  cVar2 = std::vector<ZombieSpawnData,std::allocator<ZombieSpawnData>>::empty(avStack_80);
  if (cVar2 == '\0') {
    std::vector<WaveDefinition,std::allocator<WaveDefinition>>::push_back
              ((vector<WaveDefinition,std::allocator<WaveDefinition>> *)(param_4 + 0x40),local_b8);
  }
  WaveDefinition::~WaveDefinition(local_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeTowerDefendTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

void __thiscall
CustomLevelChallengeTowerDefendTemplate::GenerateTemplate
          (CustomLevelChallengeTowerDefendTemplate *this,CustomLevelCreator *param_1,
          CustomLevelWorldParams *param_2,CustomLevelConfig *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  SeedBankProperties *pSVar6;
  CustomLevelMgr *pCVar7;
  TowerDefendProperties *pTVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  WaveGeneratorProperties *pWVar13;
  vector *pvVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar6 = CustomLevelCreator::AddModule<SeedBankProperties>(param_1);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50,
             (vector *)(param_2 + 0x128));
  uVar20 = local_50;
  iVar4 = FUN_035cc03c(local_50,local_48);
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar16 = (long)(int)uVar1 + -1;
    lVar10 = lVar16;
    lVar19 = (long)(int)uVar1;
    while( true ) {
      lVar17 = lVar10;
      FUN_035cc048(uVar20,lVar19);
      cVar2 = FUN_0547419c();
      uVar20 = local_50;
      if (cVar2 != '\0') {
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        local_38[0] = __gnu_cxx::
                      __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                   *)&local_58,lVar19);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)local_38);
        std::vector<std::string,std::allocator<std::string>>::erase
                  ((vector<std::string,std::allocator<std::string>> *)&local_50,
                   CONCAT44(uStack_1c,local_20));
        uVar20 = local_50;
      }
      if (lVar17 == lVar16 - (ulong)uVar1) break;
      lVar10 = lVar17 + -1;
      lVar19 = lVar17;
      local_50 = uVar20;
    }
  }
  pCVar7 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  std::string::string((string *)&local_20,"ValidPlants");
  CustomLevelMgr::FilterGroup(pCVar7,(string *)&local_20,(vector *)&local_50);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(pSVar6 + 0x60),(vector *)&local_50)
  ;
  *(undefined4 *)(pSVar6 + 0x40) = 0;
  pTVar8 = CustomLevelCreator::AddModule<TowerDefendProperties>(param_1);
  std::string::string((string *)&local_58,"tower_defend");
  std::string::string((string *)local_38,"HousePopAnim");
  std::string::string(asStack_60,"POPANIM_TOWERDEFEND_HOUSE_PIG_1");
  CustomLevelConfig::GetWaveEventConfigValue<std::string>
            ((string *)&local_20,param_3,(string *)&local_58,(string *)local_38,asStack_60);
  FUN_05474278(pTVar8 + 0x48,(string *)&local_20);
  std::string::~string((string *)&local_20);
  std::string::~string(asStack_60);
  nop();
  std::string::~string((string *)local_38);
  nop();
  std::string::~string((string *)&local_58);
  nop();
  std::string::string((string *)local_38,"tower_defend");
  std::string::string((string *)&local_20,"HitpointsPercentAddPerWave");
  fVar21 = CustomLevelConfig::GetWaveEventConfigValue<float>
                     ((string *)param_3,(string *)local_38,0.2);
  *(float *)(pTVar8 + 0x40) = fVar21;
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string((string *)local_38);
  nop();
  local_70 = FUN_035cef7c(*(undefined8 *)(param_2 + 0x140));
  local_68 = FUN_035cefcc(*(undefined8 *)(param_2 + 0x148));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
  if (bVar3) {
    do {
      uVar18 = 0;
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70)
      ;
      Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_38);
      lVar10 = FUN_035cc050(*puVar9,puVar9[1]);
      if (lVar10 != 0) {
        do {
          pCVar7 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
          std::string::string((string *)&local_20,"ValidPlants");
          lVar10 = FUN_035cc05c(*puVar9,uVar18);
          cVar2 = CustomLevelMgr::IsValueValid(pCVar7,(string *)&local_20,(string *)(lVar10 + 8));
          std::string::~string((string *)&local_20);
          nop();
          if (cVar2 != '\0') {
            TowerDefendPlantUpgradeInfo::TowerDefendPlantUpgradeInfo
                      ((TowerDefendPlantUpgradeInfo *)&local_20);
            puVar12 = (undefined4 *)FUN_035cc05c(*puVar9,uVar18);
            local_20 = *puVar12;
            thunk_FUN_05475e00(auStack_18,puVar12 + 2);
            if (uVar18 == 0) {
              std::string::string(asStack_60,"tower_defend");
              std::string::string((string *)&local_58,"BasicLaunchTimePercent");
              fVar21 = 0.5;
            }
            else {
              std::string::string(asStack_60,"tower_defend");
              std::string::string((string *)&local_58,"AdvLaunchTimePercent");
              fVar21 = 0.4;
            }
            local_10 = CustomLevelConfig::GetWaveEventConfigValue<float>
                                 ((string *)param_3,asStack_60,fVar21);
            std::string::~string((string *)&local_58);
            nop();
            std::string::~string(asStack_60);
            nop();
            std::vector<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>::
            push_back((vector<TowerDefendPlantUpgradeInfo,std::allocator<TowerDefendPlantUpgradeInfo>>
                       *)local_38,(TowerDefendPlantUpgradeInfo *)&local_20);
            PakRecord::~PakRecord((PakRecord *)&local_20);
          }
          uVar18 = uVar18 + 1;
          uVar11 = FUN_035cc050(*puVar9,puVar9[1]);
        } while (uVar18 < uVar11);
      }
      std::vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>>::
      push_back((vector<TowerDefendPlantUpgradeTree,std::allocator<TowerDefendPlantUpgradeTree>> *)
                (pTVar8 + 0x70),(TowerDefendPlantUpgradeTree *)local_38);
      TowerDefendPlantUpgradeTree::~TowerDefendPlantUpgradeTree
                ((TowerDefendPlantUpgradeTree *)local_38);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_70);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    } while (bVar3);
  }
  local_58 = FUN_035cf01c(*(undefined8 *)(param_2 + 0x170));
  local_38[0] = FUN_035cf06c(*(undefined8 *)(param_2 + 0x178));
  while (bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_38)
        , bVar3) {
    puVar12 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    TipsPropertyData::TipsPropertyData((TipsPropertyData *)&local_20);
    local_20 = *puVar12;
    uStack_1c = puVar12[1];
    thunk_FUN_05475e00(auStack_18,puVar12 + 2);
    std::vector<TowerDefendRoad,std::allocator<TowerDefendRoad>>::push_back
              ((vector<TowerDefendRoad,std::allocator<TowerDefendRoad>> *)(pTVar8 + 0x58),
               (TowerDefendRoad *)&local_20);
    PakRecord::~PakRecord((PakRecord *)&local_20);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
  }
  pWVar13 = CustomLevelCreator::AddModule<WaveGeneratorProperties>(param_1);
  uVar18 = 0;
  while( true ) {
    uVar20 = *(undefined8 *)(param_2 + 0x158);
    uVar11 = FUN_035cc064(uVar20,*(undefined8 *)(param_2 + 0x160));
    if (uVar11 <= uVar18) break;
    pvVar14 = (vector *)FUN_035cc078(uVar20,uVar18);
    generateWave(this,param_1,pvVar14,param_3,pWVar13);
    uVar18 = uVar18 + 1;
  }
  uVar5 = FUN_035cc084(*(undefined8 *)(pWVar13 + 0x40),*(undefined8 *)(pWVar13 + 0x48));
  local_58 = CONCAT44(local_58._4_4_,uVar5);
  pCVar7 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  std::string::string((string *)&local_20,"MaxWaves");
  fVar21 = (float)CustomLevelMgr::GetGroupValue(pCVar7,(string *)&local_20);
  local_38[0] = CONCAT44(local_38[0]._4_4_,(int)fVar21);
  piVar15 = eastl::min_alt<int>((int *)&local_58,(int *)local_38);
  iVar4 = *piVar15;
  std::string::~string((string *)&local_20);
  nop();
  *(int *)(pWVar13 + 0x74) = iVar4;
  *(undefined4 *)(pWVar13 + 0x70) = 0xffffffff;
  std::string::string((string *)local_38,"tower_defend");
  std::string::string((string *)&local_20,"WaveSpendingPointIncrement");
  fVar21 = CustomLevelConfig::GetWaveEventConfigValue<float>
                     ((string *)param_3,(string *)local_38,120.0);
  *(int *)(pWVar13 + 0x78) = (int)fVar21;
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string((string *)local_38);
  nop();
  std::string::string((string *)local_38,"tower_defend");
  std::string::string((string *)&local_20,"WaveSpendingPoints");
  fVar21 = CustomLevelConfig::GetWaveEventConfigValue<float>
                     ((string *)param_3,(string *)local_38,100.0);
  *(int *)(pWVar13 + 0x7c) = (int)fVar21;
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string((string *)local_38);
  nop();
  pWVar13[0x8c] = (WaveGeneratorProperties)0x1;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

