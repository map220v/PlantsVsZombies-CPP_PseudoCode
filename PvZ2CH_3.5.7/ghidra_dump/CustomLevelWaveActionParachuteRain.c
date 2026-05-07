// Class: CustomLevelWaveActionParachuteRain


/* CustomLevelWaveActionParachuteRain::~CustomLevelWaveActionParachuteRain() */

void __thiscall
CustomLevelWaveActionParachuteRain::~CustomLevelWaveActionParachuteRain
          (CustomLevelWaveActionParachuteRain *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionParachuteRain_0665ea50;
  nop();
  return;
}


/* CustomLevelWaveActionParachuteRain::~CustomLevelWaveActionParachuteRain() */

void __thiscall
CustomLevelWaveActionParachuteRain::~CustomLevelWaveActionParachuteRain
          (CustomLevelWaveActionParachuteRain *this)

{
  ~CustomLevelWaveActionParachuteRain(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionParachuteRain::CustomLevelWaveActionParachuteRain() */

void __thiscall
CustomLevelWaveActionParachuteRain::CustomLevelWaveActionParachuteRain
          (CustomLevelWaveActionParachuteRain *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionParachuteRain_0665ea50;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionParachuteRain::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent
   const&, CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionParachuteRain::GenerateWaveAction
          (CustomLevelWaveActionParachuteRain *this,CustomLevelCreator *param_1,
          CustomWaveEvent *param_2,CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  CustomLevelMgr *this_00;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18 [2];
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x78) != -1) {
    CustomLevelCreator::AddAliasedObject<ParachuteRainZombieSpawnerProps>();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_2 + 0x78);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    local_18[0] = 0;
    local_10[0] = *(int *)(param_2 + 0x78) + -1;
    piVar3 = eastl::max_alt<int>((int *)local_18,local_10);
    *(int *)(lVar2 + 0x54) = *piVar3;
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)local_18,"parachute_rain");
    std::string::string((string *)local_10,"SpiderCount");
    fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)local_18,4.0);
    *(int *)(lVar2 + 0x44) = (int)fVar4;
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::string::string(asStack_30,"ValidZombies");
    std::string::string(asStack_48,"parachute_rain");
    std::string::string(asStack_40,"SpawnZombieName");
    std::string::string(asStack_50,"lostcity_lostpilot");
    CustomLevelConfig::GetWaveEventConfigValue<std::string>
              (asStack_38,param_3,asStack_48,asStack_40,asStack_50);
    cVar1 = CustomLevelMgr::IsValueValid(this_00,asStack_30,asStack_38);
    if (cVar1 == '\0') {
      std::string::string((string *)local_10,"lostcity_lostpilot");
      FUN_05474278(lVar2 + 0x68,(string *)local_10);
      std::string::~string((string *)local_10);
      nop();
    }
    else {
      std::string::string(asStack_20,"parachute_rain");
      std::string::string((string *)local_18,"SpawnZombieName");
      std::string::string(asStack_28,"lostcity_lostpilot");
      CustomLevelConfig::GetWaveEventConfigValue<std::string>
                ((string *)local_10,param_3,asStack_20,(string *)local_18,asStack_28);
      FUN_05474278(lVar2 + 0x68,(string *)local_10);
      std::string::~string((string *)local_10);
      std::string::~string(asStack_28);
      nop();
      std::string::~string((string *)local_18);
      nop();
      std::string::~string(asStack_20);
      nop();
    }
    std::string::~string(asStack_38);
    std::string::~string(asStack_50);
    nop();
    std::string::~string(asStack_40);
    nop();
    std::string::~string(asStack_48);
    nop();
    std::string::~string(asStack_30);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string(asStack_20,"parachute_rain");
    std::string::string((string *)local_18,"WaveStartMessage");
    std::string::string(asStack_28,"[WARNING_PARACHUTERAIN]");
    CustomLevelConfig::GetWaveEventConfigValue<std::string>
              ((string *)local_10,param_3,asStack_20,(string *)local_18,asStack_28);
    FUN_05474278(lVar2 + 0x60,(string *)local_10);
    std::string::~string((string *)local_10);
    std::string::~string(asStack_28);
    nop();
    std::string::~string((string *)local_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)local_18,"parachute_rain");
    std::string::string((string *)local_10,"GroupSize");
    fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)local_18,1.0);
    *(int *)(lVar2 + 0x40) = (int)fVar4;
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)local_18,"parachute_rain");
    std::string::string((string *)local_10,"TimeBeforeFullSpawn");
    fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)local_18,4.0);
    *(float *)(lVar2 + 0x4c) = fVar4;
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)local_18,"parachute_rain");
    std::string::string((string *)local_10,"TimeBetweenGroups");
    fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)local_18,0.3);
    *(float *)(lVar2 + 0x48) = fVar4;
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string((string *)local_18,"parachute_rain");
    std::string::string((string *)local_10,"ZombieFallTime");
    fVar4 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)local_18,1.5);
    *(float *)(lVar2 + 0x50) = fVar4;
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_10,(RtWeakPtrBase *)aRStack_58);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

