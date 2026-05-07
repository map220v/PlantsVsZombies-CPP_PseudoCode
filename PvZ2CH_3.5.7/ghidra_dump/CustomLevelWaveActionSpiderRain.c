// Class: CustomLevelWaveActionSpiderRain


/* CustomLevelWaveActionSpiderRain::~CustomLevelWaveActionSpiderRain() */

void __thiscall
CustomLevelWaveActionSpiderRain::~CustomLevelWaveActionSpiderRain
          (CustomLevelWaveActionSpiderRain *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionSpiderRain_0665e960;
  nop();
  return;
}


/* CustomLevelWaveActionSpiderRain::~CustomLevelWaveActionSpiderRain() */

void __thiscall
CustomLevelWaveActionSpiderRain::~CustomLevelWaveActionSpiderRain
          (CustomLevelWaveActionSpiderRain *this)

{
  ~CustomLevelWaveActionSpiderRain(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionSpiderRain::CustomLevelWaveActionSpiderRain() */

void __thiscall
CustomLevelWaveActionSpiderRain::CustomLevelWaveActionSpiderRain
          (CustomLevelWaveActionSpiderRain *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionSpiderRain_0665e960;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionSpiderRain::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionSpiderRain::GenerateWaveAction
          (CustomLevelWaveActionSpiderRain *this,CustomLevelCreator *param_1,
          CustomWaveEvent *param_2,CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  long lVar2;
  CustomLevelMgr *this_00;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x30) != 0) {
    CustomLevelCreator::AddAliasedObject<SpiderRainZombieSpawnerProps>();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_2 + 0x28);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(param_2 + 0x2c);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(param_2 + 0x30);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::string::string(asStack_30,"ValidZombies");
    std::string::string(asStack_48,"spider_rain");
    std::string::string(asStack_40,"SpawnZombieName");
    std::string::string(asStack_50,"future_imp");
    CustomLevelConfig::GetWaveEventConfigValue<std::string>
              (asStack_38,param_3,asStack_48,asStack_40,asStack_50);
    cVar1 = CustomLevelMgr::IsValueValid(this_00,asStack_30,asStack_38);
    if (cVar1 == '\0') {
      std::string::string(asStack_10,"future_imp");
      FUN_05474278(lVar2 + 0x60,asStack_10);
      std::string::~string(asStack_10);
      nop();
    }
    else {
      std::string::string(asStack_20,"spider_rain");
      std::string::string(asStack_18,"SpawnZombieName");
      std::string::string(asStack_28,"future_imp");
      CustomLevelConfig::GetWaveEventConfigValue<std::string>
                (asStack_10,param_3,asStack_20,asStack_18,asStack_28);
      FUN_05474278(lVar2 + 0x60,asStack_10);
      std::string::~string(asStack_10);
      std::string::~string(asStack_28);
      nop();
      std::string::~string(asStack_18);
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
    std::string::string(asStack_20,"spider_rain");
    std::string::string(asStack_18,"WaveStartMessage");
    std::string::string(asStack_28,"[WARNING_SPIDERRAIN]");
    CustomLevelConfig::GetWaveEventConfigValue<std::string>
              (asStack_10,param_3,asStack_20,asStack_18,asStack_28);
    FUN_05474278(lVar2 + 0x68,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string(asStack_18,"spider_rain");
    std::string::string(asStack_10,"GroupSize");
    fVar3 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,1.0);
    *(int *)(lVar2 + 0x40) = (int)fVar3;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string(asStack_18,"spider_rain");
    std::string::string(asStack_10,"TimeBeforeFullSpawn");
    fVar3 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,4.0);
    *(float *)(lVar2 + 0x4c) = fVar3;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string(asStack_18,"spider_rain");
    std::string::string(asStack_10,"TimeBetweenGroups");
    fVar3 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,0.3);
    *(float *)(lVar2 + 0x48) = fVar3;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
    std::string::string(asStack_18,"spider_rain");
    std::string::string(asStack_10,"ZombieFallTime");
    fVar3 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,1.5);
    *(float *)(lVar2 + 0x50) = fVar3;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_58);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

