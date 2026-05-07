// Class: CustomLevelWaveActionBlackHole


/* CustomLevelWaveActionBlackHole::~CustomLevelWaveActionBlackHole() */

void __thiscall
CustomLevelWaveActionBlackHole::~CustomLevelWaveActionBlackHole
          (CustomLevelWaveActionBlackHole *this)

{
  *(undefined ***)this = &PTR__CustomLevelWaveActionBlackHole_0665ea80;
  nop();
  return;
}


/* CustomLevelWaveActionBlackHole::~CustomLevelWaveActionBlackHole() */

void __thiscall
CustomLevelWaveActionBlackHole::~CustomLevelWaveActionBlackHole
          (CustomLevelWaveActionBlackHole *this)

{
  ~CustomLevelWaveActionBlackHole(this);
  AK::FreeHook(this);
  return;
}


/* CustomLevelWaveActionBlackHole::CustomLevelWaveActionBlackHole() */

void __thiscall
CustomLevelWaveActionBlackHole::CustomLevelWaveActionBlackHole(CustomLevelWaveActionBlackHole *this)

{
  CustomLevelWaveAction::CustomLevelWaveAction((CustomLevelWaveAction *)this);
  *(undefined ***)this = &PTR__CustomLevelWaveActionBlackHole_0665ea80;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveActionBlackHole::GenerateWaveAction(CustomLevelCreator&, CustomWaveEvent const&,
   CustomLevelConfig const*, std::vector<Sexy::RtWeakPtr<WaveActionProperties>,
   std::allocator<Sexy::RtWeakPtr<WaveActionProperties> > >&) */

void __thiscall
CustomLevelWaveActionBlackHole::GenerateWaveAction
          (CustomLevelWaveActionBlackHole *this,CustomLevelCreator *param_1,CustomWaveEvent *param_2
          ,CustomLevelConfig *param_3,vector *param_4)

{
  long lVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_2 + 0x7c) != -1) {
    CustomLevelCreator::AddAliasedObject<BlackHoleWaveActionProps>();
    lVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x7c);
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

