// Class: CustomLevelWaveActionSummonZombie


/* CustomLevelWaveActionSummonZombie::~CustomLevelWaveActionSummonZombie() */

void __thiscall
CustomLevelWaveActionSummonZombie::~CustomLevelWaveActionSummonZombie
          (CustomLevelWaveActionSummonZombie *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionSummonZombie_0665e930;
  nop();
  return;
}


/* CustomLevelWaveActionSummonZombie::~CustomLevelWaveActionSummonZombie() */

void __thiscall
CustomLevelWaveActionSummonZombie::~CustomLevelWaveActionSummonZombie
          (CustomLevelWaveActionSummonZombie *this)

{
  ~CustomLevelWaveActionSummonZombie(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionSummonZombie::CustomLevelWaveActionSummonZombie() */

void __thiscall
CustomLevelWaveActionSummonZombie::CustomLevelWaveActionSummonZombie
          (CustomLevelWaveActionSummonZombie *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionSummonZombie_0665e930;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionSummonZombie::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent
   const&, CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionSummonZombie::GenerateWaveAction
          (CustomLevelWaveActionSummonZombie *this,CustomLevelCreator *param_1,
          CustomWaveEvent *param_2,CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  CustomLevelMgr *this_00;
  string *psVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  string asStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((allocator *)(param_2 + 0x98));
  if (cVar1 == '\0') {
    CustomLevelCreator::AddAliasedObject<SummonZombieSpawnerProps>();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(int *)(lVar3 + 0x5c) = *(int *)(param_2 + 0x84) + -1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(int *)(lVar3 + 0x58) = *(int *)(param_2 + 0x80) + -1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(int *)(lVar3 + 100) = *(int *)(param_2 + 0x8c) + -1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(int *)(lVar3 + 0x60) = *(int *)(param_2 + 0x88) + -1;
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(undefined4 *)(lVar3 + 0x6c) = *(undefined4 *)(param_2 + 0x90);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    *(undefined4 *)(lVar3 + 0x68) = *(undefined4 *)(param_2 + 0x94);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    std::vector<std::string,std::allocator<std::string>>::vector
              ((ulong)avStack_20,(string *)(long)*(int *)(lVar3 + 0x68),
               (allocator *)(param_2 + 0x98));
    this_00 = (CustomLevelMgr *)Sexy::LazySingleton<CustomLevelMgr>::GetInstancePtr();
    std::string::string(asStack_28,"ValidZombies");
    CustomLevelMgr::FilterGroup(this_00,asStack_28,(vector *)avStack_20);
    std::string::~string(asStack_28);
    nop();
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      cVar1 = FUN_0547419c();
      if (cVar1 == '\0') {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        std::
        vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
        ::push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(lVar3 + 0x40),(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    cVar1 = std::
            vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
            ::empty((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)(lVar3 + 0x40));
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)aRStack_40);
      std::
      vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
      ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                   *)param_4,(RtWeakPtr *)asStack_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    }
    std::vector<std::string,std::allocator<std::string>>::~vector
              ((vector<std::string,std::allocator<std::string>> *)avStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

