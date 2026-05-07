// Class: CustomLevelWaveActionPortal


/* CustomLevelWaveActionPortal::~CustomLevelWaveActionPortal() */

void __thiscall
CustomLevelWaveActionPortal::~CustomLevelWaveActionPortal(CustomLevelWaveActionPortal *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionPortal_0665e990;
  nop();
  return;
}


/* CustomLevelWaveActionPortal::~CustomLevelWaveActionPortal() */

void __thiscall
CustomLevelWaveActionPortal::~CustomLevelWaveActionPortal(CustomLevelWaveActionPortal *this)

{
  ~CustomLevelWaveActionPortal(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionPortal::CustomLevelWaveActionPortal() */

void __thiscall
CustomLevelWaveActionPortal::CustomLevelWaveActionPortal(CustomLevelWaveActionPortal *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionPortal_0665e990;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionPortal::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionPortal::GenerateWaveAction
          (CustomLevelWaveActionPortal *this,CustomLevelCreator *param_1,CustomWaveEvent *param_2,
          CustomLevelConfig *param_3,vector *param_4)

{
  char cVar1;
  long lVar2;
  size_t __n;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2 + 0x48);
  if (cVar1 == '\0') {
    CustomLevelCreator::AddAliasedObject<SpawnModernPortalsWaveActionProps>();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    *(undefined4 *)(lVar2 + 0x54) = *(undefined4 *)(param_2 + 0x44);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    *(undefined4 *)(lVar2 + 0x58) = *(undefined4 *)(param_2 + 0x40);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    thunk_FUN_05475e00(lVar2 + 0x60,param_2 + 0x48);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    std::string::append((string *)(lVar2 + 0x40),"",__n);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    std::string::append((string *)(lVar2 + 0x48),"",__n);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)param_4,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

