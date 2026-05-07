// Class: CustomLevelWaveActionSandStorm


/* CustomLevelWaveActionSandStorm::~CustomLevelWaveActionSandStorm() */

void __thiscall
CustomLevelWaveActionSandStorm::~CustomLevelWaveActionSandStorm
          (CustomLevelWaveActionSandStorm *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionSandStorm_0665e900;
  nop();
  return;
}


/* CustomLevelWaveActionSandStorm::~CustomLevelWaveActionSandStorm() */

void __thiscall
CustomLevelWaveActionSandStorm::~CustomLevelWaveActionSandStorm
          (CustomLevelWaveActionSandStorm *this)

{
  ~CustomLevelWaveActionSandStorm(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionSandStorm::CustomLevelWaveActionSandStorm() */

void __thiscall
CustomLevelWaveActionSandStorm::CustomLevelWaveActionSandStorm(CustomLevelWaveActionSandStorm *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionSandStorm_0665e900;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionSandStorm::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionSandStorm::GenerateWaveAction
          (CustomLevelWaveActionSandStorm *this,CustomLevelCreator *param_1,CustomWaveEvent *param_2
          ,CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  CustomLevelMgr *this_00;
  string *psVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  string asStack_30 [16];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<std::string,std::allocator<std::string>>::empty
                    ((vector<std::string,std::allocator<std::string>> *)(param_2 + 8));
  if (cVar1 == '\0') {
    CustomLevelCreator::AddAliasedObject<StormZombieSpawnerProps>();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    *(undefined4 *)(lVar3 + 0x6c) = *(undefined4 *)param_2;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(param_2 + 4);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    std::string::string(asStack_30,"sandstorm");
    std::string::string(asStack_20,"GroupSize");
    fVar5 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_30,1.0);
    *(int *)(lVar3 + 0x5c) = (int)fVar5;
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_30);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    std::string::string(asStack_30,"sandstorm");
    std::string::string(asStack_20,"TimeBetweenGroups");
    fVar5 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_30,1.0);
    *(float *)(lVar3 + 0x60) = fVar5;
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_30);
    nop();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    *(undefined4 *)(lVar3 + 0x70) = *(undefined4 *)(param_2 + 0x20);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20,(vector *)(param_2 + 8)
              );
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::string::string(asStack_30,"ValidZombies");
    CustomLevelMgr::FilterGroup(this_00,asStack_30,(vector *)asStack_20);
    std::string::~string(asStack_30);
    nop();
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
      cVar1 = FUN_0547419c();
      if (cVar1 == '\0') {
        VaseConfiguration::VaseConfiguration((VaseConfiguration *)asStack_30);
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)asStack_30,(RtWeakPtr *)aRStack_38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        std::vector<StormZombieInstruction,std::allocator<StormZombieInstruction>>::push_back
                  ((vector<StormZombieInstruction,std::allocator<StormZombieInstruction>> *)
                   (lVar3 + 0x40),(StormZombieInstruction *)asStack_30);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)asStack_30);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    cVar1 = std::vector<StormZombieInstruction,std::allocator<StormZombieInstruction>>::empty
                      ((vector<StormZombieInstruction,std::allocator<StormZombieInstruction>> *)
                       (lVar3 + 0x40));
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_30,(RtWeakPtrBase *)aRStack_50);
      std::
      vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
      ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                   *)param_4,(RtWeakPtr *)asStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)asStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

