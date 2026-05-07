// Class: PinataRewardDrawer


/* PinataRewardDrawer::PinataRewardDrawer(PinataRewardDrawer const&) */

void __thiscall
PinataRewardDrawer::PinataRewardDrawer(PinataRewardDrawer *this,PinataRewardDrawer *param_1)

{
  *(undefined ***)this = &PTR__PinataRewardDrawer_06926db0;
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
          *)(this + 8),(vector *)(param_1 + 8));
  Sexy::Insets::Insets((Insets *)(this + 0x20),(Insets *)(param_1 + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataRewardDrawer::SetOpacity(int) */

void __thiscall PinataRewardDrawer::SetOpacity(PinataRewardDrawer *this,int param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x2c) = param_1;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    (**(code **)(*plVar3 + 0x78))(plVar3,this + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataRewardDrawer::SetDarkened(bool) */

void __thiscall PinataRewardDrawer::SetDarkened(PinataRewardDrawer *this,bool param_1)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  long *plVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    *(undefined4 *)(this + 0x20) = 0x80;
    *(undefined4 *)(this + 0x28) = 0x80;
    *(undefined4 *)(this + 0x24) = 0x80;
  }
  else {
    Sexy::Color::Color((Color *)&local_18,1);
    *(undefined8 *)(this + 0x20) = local_18;
    *(undefined8 *)(this + 0x28) = uStack_10;
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,pRVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    (**(code **)(*plVar3 + 0x78))(plVar3,this + 0x20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataRewardDrawer::PinataRewardDrawer() */

void __thiscall PinataRewardDrawer::PinataRewardDrawer(PinataRewardDrawer *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR__PinataRewardDrawer_06926db0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Sexy::Color::Color((Color *)(this + 0x20));
  Sexy::Color::Color((Color *)&local_18,1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x20) = local_18;
  *(undefined8 *)(this + 0x28) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataRewardDrawer::~PinataRewardDrawer() */

void __thiscall PinataRewardDrawer::~PinataRewardDrawer(PinataRewardDrawer *this)

{
  bool bVar1;
  RtWeakPtrBase *pRVar2;
  ResourceInfo *pRVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  *(undefined ***)this = &PTR__PinataRewardDrawer_06926db0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    if (pRVar3 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)pRVar3 + 0x48))();
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  clear((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
         *)this_00);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  ~vector((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
           *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PinataRewardDrawer::~PinataRewardDrawer() */

void __thiscall PinataRewardDrawer::~PinataRewardDrawer(PinataRewardDrawer *this)

{
  ~PinataRewardDrawer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PinataRewardDrawer::SetReward(int, int, TheDayRewardItem const*, bool) */

void PinataRewardDrawer::SetReward(int param_1,int param_2,TheDayRewardItem *param_3,bool param_4)

{
  bool bVar1;
  StandaloneEffectFactory *this;
  long lVar2;
  RtWeakPtrBase *pRVar3;
  StandaloneEffect *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar4;
  long *plVar5;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_02;
  code *pcVar6;
  FastCurve aFStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_48,(float)param_2,(float)(int)param_3);
  this = (StandaloneEffectFactory *)StandaloneEffectFactory::GetEffectsTableFactory();
  lVar2 = LevelOfTheDay_Rewards::CreateStandaloneEffectForReward
                    (this,(TheDayRewardItem *)(ulong)param_4);
  if (lVar2 != 0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
    std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
    ::push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
                 *)((ulong)(uint)param_1 + 8),(RtWeakPtr *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  this_02 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)((ulong)(uint)param_1 + 8);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_02);
  local_30[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_02);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)local_30)
        , bVar1) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,pRVar3);
    this_00 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    StandaloneEffect::SetScreenSpaceOrigin(this_00,(SexyVector2 *)aFStack_48,0xf4242);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  if (*(int *)((TheDayRewardItem *)(ulong)param_4 + 8) - 2U < 3) {
    this_01 = (Effect_PopAnim *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectPopAnim(this);
    CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr
              ((CachedResourcePtr<Sexy::PopAnim> *)local_30,"POPANIM_EFFECTS_PRIZE_RAYS");
    pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)local_30);
    Effect_PopAnim::CreatePopAnimRig(this_01,pPVar4,(RtClass *)0x0);
    CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr
              ((CachedResourcePtr<Sexy::PopAnim> *)local_30);
    std::string::string((string *)local_30,"animation");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this_01,(CachedResourcePtr<Sexy::PopAnim> *)local_30,0);
    std::string::~string((string *)local_30);
  }
  else {
    this_01 = (Effect_PopAnim *)
              StandaloneEffectFactory::CreateCenteredScreenSpaceEffectPopAnim(this);
    CachedResourcePtr<Sexy::PopAnim>::CachedResourcePtr
              ((CachedResourcePtr<Sexy::PopAnim> *)local_30,
               "POPANIM_UI_LEVELOFTHEDAY_ANIM_COLLECTED_UPGRADE_EFFECT");
    pPVar4 = CachedResourcePtr::operator_cast_to_PopAnim_((CachedResourcePtr *)local_30);
    Effect_PopAnim::CreatePopAnimRig(this_01,pPVar4,(RtClass *)0x0);
    CachedResourcePtr<Sexy::PopAnim>::~CachedResourcePtr
              ((CachedResourcePtr<Sexy::PopAnim> *)local_30);
    (**(code **)(*(long *)this_01 + 0x80))(0x3fa66666,this_01);
    plVar5 = (long *)UIWidget::GetAtlasImage((UIWidget *)this_01);
    pcVar6 = *(code **)(*plVar5 + 0x78);
    std::string::string((string *)&local_38,"idle");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_30);
    (*pcVar6)(plVar5,(exception_ptr *)&local_38,1,0,(CachedResourcePtr<Sexy::PopAnim> *)local_30);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_30);
    std::string::~string((string *)&local_38);
  }
  nop();
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector2 *)aFStack_48,0xf4241);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_30,(RtWeakPtrBase *)&local_38);
  std::vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>::
  push_back((vector<Sexy::RtWeakPtr<StandaloneEffect>,std::allocator<Sexy::RtWeakPtr<StandaloneEffect>>>
             *)this_02,(RtWeakPtr *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

