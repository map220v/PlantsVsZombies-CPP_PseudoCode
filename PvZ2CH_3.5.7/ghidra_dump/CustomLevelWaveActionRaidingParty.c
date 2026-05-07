// Class: CustomLevelWaveActionRaidingParty


/* CustomLevelWaveActionRaidingParty::~CustomLevelWaveActionRaidingParty() */

void __thiscall
CustomLevelWaveActionRaidingParty::~CustomLevelWaveActionRaidingParty
          (CustomLevelWaveActionRaidingParty *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionRaidingParty_0665e9f0;
  nop();
  return;
}


/* CustomLevelWaveActionRaidingParty::~CustomLevelWaveActionRaidingParty() */

void __thiscall
CustomLevelWaveActionRaidingParty::~CustomLevelWaveActionRaidingParty
          (CustomLevelWaveActionRaidingParty *this)

{
  ~CustomLevelWaveActionRaidingParty(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionRaidingParty::CustomLevelWaveActionRaidingParty() */

void __thiscall
CustomLevelWaveActionRaidingParty::CustomLevelWaveActionRaidingParty
          (CustomLevelWaveActionRaidingParty *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionRaidingParty_0665e9f0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionRaidingParty::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent
   const&, CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionRaidingParty::GenerateWaveAction
          (CustomLevelWaveActionRaidingParty *this,CustomLevelCreator *param_1,
          CustomWaveEvent *param_2,CustomLevelConfig *param_3,vector *param_4)

{
  long lVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x58) != -1) {
    CustomLevelCreator::AddAliasedObject<RaidingPartyZombieSpawnerProps>();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x58);
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    std::string::string(asStack_18,"raiding_party");
    std::string::string(asStack_10,"GroupSize");
    fVar2 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,1.0);
    *(int *)(lVar1 + 0x44) = (int)fVar2;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    std::string::string(asStack_18,"raiding_party");
    std::string::string(asStack_10,"TimeBetweenGroups");
    fVar2 = CustomLevelConfig::GetWaveEventConfigValue<float>((string *)param_3,asStack_18,1.0);
    *(float *)(lVar1 + 0x48) = fVar2;
    std::string::~string(asStack_10);
    nop();
    std::string::~string(asStack_18);
    nop();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_20);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

