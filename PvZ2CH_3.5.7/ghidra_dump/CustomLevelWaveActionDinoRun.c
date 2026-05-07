// Class: CustomLevelWaveActionDinoRun


/* CustomLevelWaveActionDinoRun::~CustomLevelWaveActionDinoRun() */

void __thiscall
CustomLevelWaveActionDinoRun::~CustomLevelWaveActionDinoRun(CustomLevelWaveActionDinoRun *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionDinoRun_0665e9c0;
  nop();
  return;
}


/* CustomLevelWaveActionDinoRun::~CustomLevelWaveActionDinoRun() */

void __thiscall
CustomLevelWaveActionDinoRun::~CustomLevelWaveActionDinoRun(CustomLevelWaveActionDinoRun *this)

{
  ~CustomLevelWaveActionDinoRun(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionDinoRun::CustomLevelWaveActionDinoRun() */

void __thiscall
CustomLevelWaveActionDinoRun::CustomLevelWaveActionDinoRun(CustomLevelWaveActionDinoRun *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionDinoRun_0665e9c0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionDinoRun::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionDinoRun::GenerateWaveAction
          (CustomLevelWaveActionDinoRun *this,CustomLevelCreator *param_1,CustomWaveEvent *param_2,
          CustomLevelConfig *param_3,vector *param_4)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x50) != -1) {
    CustomLevelCreator::AddAliasedObject<DinoRunActionProps>();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 0x50);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_2 + 0x54);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    std::string::string(asStack_20,"dino_run");
    std::string::string(asStack_18,"WaveStartMessage");
    std::string::string(asStack_28,"[WARNING_DINO_RUN]");
    CustomLevelConfig::GetWaveEventConfigValue<std::string>
              (asStack_10,param_3,asStack_20,asStack_18,asStack_28);
    FUN_05474278(lVar1 + 0x40,asStack_10);
    std::string::~string(asStack_10);
    std::string::~string(asStack_28);
    nop();
    std::string::~string(asStack_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_30);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

