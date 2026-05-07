// Class: CustomLevelChallengeSingleHandedTemplate


/* CustomLevelChallengeSingleHandedTemplate::CustomLevelChallengeSingleHandedTemplate(CustomLevelMgr*)
    */

void __thiscall
CustomLevelChallengeSingleHandedTemplate::CustomLevelChallengeSingleHandedTemplate
          (CustomLevelChallengeSingleHandedTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined ***)this = &PTR_nop_0665ec30;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeSingleHandedTemplate::generateWave(CustomLevelCreator&,
   std::vector<SingleHandedWaveZombie, std::allocator<SingleHandedWaveZombie> > const&, bool,
   CustomLevelConfig const*, WaveGeneratorProperties*) */

void __thiscall
CustomLevelChallengeSingleHandedTemplate::generateWave
          (CustomLevelChallengeSingleHandedTemplate *this,CustomLevelCreator *param_1,
          vector *param_2,bool param_3,CustomLevelConfig *param_4,WaveGeneratorProperties *param_5)

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
  int local_f0 [4];
  RtWeakPtr<PowerPropertySheet> aRStack_e0 [40];
  WaveDefinition local_b8 [16];
  uint local_a8;
  int local_a4;
  int local_a0;
  vector<ZombieSpawnData,std::allocator<ZombieSpawnData>> avStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveDefinition::WaveDefinition(local_b8);
  local_a8 = (uint)param_3;
  local_b8[0] = (WaveDefinition)0x1;
  std::string::string(asStack_100,"single_handed");
  std::string::string((string *)local_f0,"WavePointStart");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_4,asStack_100,100.0);
  local_a4 = (int)fVar4;
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  std::string::string(asStack_100,"single_handed");
  std::string::string((string *)local_f0,"WavePointIncrement");
  fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_4,asStack_100,120.0);
  local_a0 = (int)fVar4;
  std::string::~string((string *)local_f0);
  nop();
  std::string::~string(asStack_100);
  nop();
  local_138 = FUN_035cf314(*(undefined8 *)param_2);
  local_130 = FUN_035cf364(*(undefined8 *)(param_2 + 8));
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
        local_f0[0] = *(int *)(this_00 + 8);
        if (local_f0[0] == -1) {
          local_f0[0] = 6;
        }
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
              ((vector<WaveDefinition,std::allocator<WaveDefinition>> *)(param_5 + 0x40),local_b8);
  }
  WaveDefinition::~WaveDefinition(local_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelChallengeSingleHandedTemplate::GenerateTemplate(CustomLevelCreator&,
   CustomLevelWorldParams const&, CustomLevelConfig const*) */

void __thiscall
CustomLevelChallengeSingleHandedTemplate::GenerateTemplate
          (CustomLevelChallengeSingleHandedTemplate *this,CustomLevelCreator *param_1,
          CustomLevelWorldParams *param_2,CustomLevelConfig *param_3)

{
  string *psVar1;
  vector<SpecialWaveData,std::allocator<SpecialWaveData>> *this_00;
  int iVar2;
  char cVar3;
  bool bVar4;
  CustomLevelMgr *pCVar5;
  SingleHandedProperties *pSVar6;
  uint *puVar7;
  RailcartProperties *pRVar8;
  WaveGeneratorProperties *pWVar9;
  vector *pvVar10;
  ulong uVar11;
  int *piVar12;
  size_t __n;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  int local_40 [2];
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar5 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  std::string::string((string *)&local_20,"ValidPlants");
  cVar3 = CustomLevelMgr::IsValueValid(pCVar5,(string *)&local_20,(string *)(param_2 + 0x1b8));
  std::string::~string((string *)&local_20);
  nop();
  if (cVar3 != '\0') {
    pSVar6 = CustomLevelCreator::AddModule<SingleHandedProperties>(param_1);
    thunk_FUN_05475e00(pSVar6 + 0x70,(string *)(param_2 + 0x1b8));
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"InitWeaponLaunchTimePercent");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,0.5);
    *(float *)(pSVar6 + 0x78) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"MissileCount");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,1.0);
    *(int *)(pSVar6 + 0x7c) = (int)fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"MissileInterval");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,50.0);
    *(float *)(pSVar6 + 0x80) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"RocketHitTime");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,6.0);
    *(float *)(pSVar6 + 0x84) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"RocketSpeed");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,500.0);
    *(float *)(pSVar6 + 0x88) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"TimeSpeed");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,1.5);
    *(float *)(pSVar6 + 0x8c) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"ZombiesWalkSpeed");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,0.7);
    *(float *)(pSVar6 + 0x90) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    std::string::string((string *)&local_28,"single_handed");
    std::string::string((string *)&local_20,"ZombiesHitpointsPercent");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_28,0.1);
    *(float *)(pSVar6 + 0x94) = fVar16;
    std::string::~string((string *)&local_20);
    nop();
    std::string::~string((string *)&local_28);
    nop();
    local_30 = FUN_035cf1b4(*(undefined8 *)(param_2 + 0x188));
    local_28 = FUN_035cf204(*(undefined8 *)(param_2 + 400));
    while( true ) {
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
      local_38 = (uint)bVar4;
      if (local_38 == 0) break;
      puVar7 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      psVar1 = (string *)(puVar7 + 2);
      cVar3 = FUN_0547419c(psVar1);
      if (cVar3 == '\0') {
        pCVar5 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
        std::string::string((string *)&local_20,"ValidPlants");
        cVar3 = CustomLevelMgr::IsValueValid(pCVar5,(string *)&local_20,psVar1);
        std::string::~string((string *)&local_20);
        nop();
        if (cVar3 != '\0') {
          SingleWeaponData::SingleWeaponData((SingleWeaponData *)&local_20);
          local_20 = *puVar7;
          thunk_FUN_05475e00(local_18,psVar1);
          local_10 = 0x3f4ccccd;
          std::vector<SingleWeaponData,std::allocator<SingleWeaponData>>::push_back
                    ((vector<SingleWeaponData,std::allocator<SingleWeaponData>> *)(pSVar6 + 0x58),
                     (SingleWeaponData *)&local_20);
          PakRecord::~PakRecord((PakRecord *)&local_20);
        }
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
    }
    this_00 = (vector<SpecialWaveData,std::allocator<SpecialWaveData>> *)(pSVar6 + 0x40);
    SpecialWaveData::SpecialWaveData((SpecialWaveData *)&local_20,5,0.5,5.0,true);
    std::vector<SpecialWaveData,std::allocator<SpecialWaveData>>::push_back
              (this_00,(SpecialWaveData *)&local_20);
    SpecialWaveData::SpecialWaveData((SpecialWaveData *)&local_20,10,0.5,10.0,true);
    std::vector<SpecialWaveData,std::allocator<SpecialWaveData>>::push_back
              (this_00,(SpecialWaveData *)&local_20);
    SpecialWaveData::SpecialWaveData((SpecialWaveData *)&local_20,0xf,0.8,7.0,true);
    std::vector<SpecialWaveData,std::allocator<SpecialWaveData>>::push_back
              (this_00,(SpecialWaveData *)&local_20);
    __n = 1;
    SpecialWaveData::SpecialWaveData((SpecialWaveData *)&local_20,0x14,2.0,25.0,true);
    std::vector<SpecialWaveData,std::allocator<SpecialWaveData>>::push_back
              (this_00,(SpecialWaveData *)&local_20);
    pRVar8 = CustomLevelCreator::AddModule<RailcartProperties>(param_1);
    std::string::append((string *)(pRVar8 + 0x40),"railcart_future",__n);
    ObstacleNonSpawnData::ObstacleNonSpawnData((ObstacleNonSpawnData *)&local_38);
    uVar14 = (uint)bVar4;
    local_34 = uVar14;
    std::vector<RailcartLocation,std::allocator<RailcartLocation>>::push_back
              ((vector<RailcartLocation,std::allocator<RailcartLocation>> *)(pRVar8 + 0x60),
               (RailcartLocation *)&local_38);
    TutorialCard::TutorialCard((TutorialCard *)&local_20);
    local_18[0] = 4;
    local_20 = uVar14;
    local_1c = uVar14;
    std::vector<RailcartRail,std::allocator<RailcartRail>>::push_back
              ((vector<RailcartRail,std::allocator<RailcartRail>> *)(pRVar8 + 0x48),
               (RailcartRail *)&local_20);
    pWVar9 = CustomLevelCreator::AddModule<WaveGeneratorProperties>(param_1);
    uVar13 = 0;
    while( true ) {
      uVar15 = *(undefined8 *)(param_2 + 0x1a0);
      uVar11 = FUN_035cc0a4(uVar15,*(undefined8 *)(param_2 + 0x1a8));
      if (uVar11 <= uVar13) break;
      pvVar10 = (vector *)FUN_035cc0b0(uVar15,uVar13);
      generateWave(this,param_1,pvVar10,(bool)pvVar10[0x18],param_3,pWVar9);
      uVar13 = uVar13 + 1;
    }
    local_40[0] = FUN_035cc084(*(undefined8 *)(pWVar9 + 0x40),*(undefined8 *)(pWVar9 + 0x48));
    pCVar5 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
    std::string::string((string *)&local_28,"MaxWaves");
    fVar16 = (float)CustomLevelMgr::GetGroupValue(pCVar5,(string *)&local_28);
    local_30 = CONCAT44(local_30._4_4_,(int)fVar16);
    piVar12 = eastl::min_alt<int>(local_40,(int *)&local_30);
    iVar2 = *piVar12;
    std::string::~string((string *)&local_28);
    nop();
    *(int *)(pWVar9 + 0x74) = iVar2;
    *(undefined4 *)(pWVar9 + 0x70) = 0xffffffff;
    std::string::string((string *)&local_30,"single_handed");
    std::string::string((string *)&local_28,"WaveSpendingPointIncrement");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_30,500.0);
    *(int *)(pWVar9 + 0x78) = (int)fVar16;
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"single_handed");
    std::string::string((string *)&local_28,"WaveSpendingPoints");
    fVar16 = CustomLevelConfig::GetWaveEventConfigValue<float>
                       ((string *)param_3,(string *)&local_30,500.0);
    *(int *)(pWVar9 + 0x7c) = (int)fVar16;
    std::string::~string((string *)&local_28);
    nop();
    std::string::~string((string *)&local_30);
    nop();
    pWVar9[0x8c] = (WaveGeneratorProperties)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

