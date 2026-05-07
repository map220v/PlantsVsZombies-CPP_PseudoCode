// Class: CustomLevelWaveActionFrostWind


/* CustomLevelWaveActionFrostWind::~CustomLevelWaveActionFrostWind() */

void __thiscall
CustomLevelWaveActionFrostWind::~CustomLevelWaveActionFrostWind
          (CustomLevelWaveActionFrostWind *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionFrostWind_0665ea20;
  nop();
  return;
}


/* CustomLevelWaveActionFrostWind::~CustomLevelWaveActionFrostWind() */

void __thiscall
CustomLevelWaveActionFrostWind::~CustomLevelWaveActionFrostWind
          (CustomLevelWaveActionFrostWind *this)

{
  ~CustomLevelWaveActionFrostWind(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionFrostWind::CustomLevelWaveActionFrostWind() */

void __thiscall
CustomLevelWaveActionFrostWind::CustomLevelWaveActionFrostWind(CustomLevelWaveActionFrostWind *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionFrostWind_0665ea20;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionFrostWind::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionFrostWind::GenerateWaveAction
          (CustomLevelWaveActionFrostWind *this,CustomLevelCreator *param_1,CustomWaveEvent *param_2
          ,CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  long lVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<CustomWaveWind,std::allocator<CustomWaveWind>>::empty
                    ((vector<CustomWaveWind,std::allocator<CustomWaveWind>> *)(param_2 + 0x60));
  if (cVar1 == '\0') {
    std::string::string((string *)&local_18,"frost_wind");
    std::string::string((string *)&local_10,"Direction");
    fVar5 = CustomLevelConfig::GetWaveEventConfigValue<float>
                      ((string *)param_3,(string *)&local_18,0.0);
    std::string::~string((string *)&local_10);
    nop();
    std::string::~string((string *)&local_18);
    nop();
    CustomLevelCreator::AddAliasedObject<FrostWindWaveActionProps>();
    local_20 = FUN_035ce308(*(undefined8 *)(param_2 + 0x60));
    local_18 = FUN_035ce358(*(undefined8 *)(param_2 + 0x68));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar3 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
      local_c = *puVar3;
      local_10 = (int)fVar5;
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      std::vector<FrostWindDescription,std::allocator<FrostWindDescription>>::push_back
                ((vector<FrostWindDescription,std::allocator<FrostWindDescription>> *)(lVar4 + 0x40)
                 ,(FrostWindDescription *)&local_10);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_28);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

