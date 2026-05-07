// Class: AttachedEffect


/* AttachedEffect::SetAttachedSyncClipRect(bool) */

void __thiscall AttachedEffect::SetAttachedSyncClipRect(AttachedEffect *this,bool param_1)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  StandaloneEffect::SetAttachedSyncClipRect(this_00,param_1);
  return;
}


/* AttachedEffect::AttachedEffect(AttachedEffect const&) */

void __thiscall AttachedEffect::AttachedEffect(AttachedEffect *this,AttachedEffect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  AttachedEffect AVar4;
  
  AttachedGameObjectNode::AttachedGameObjectNode
            ((AttachedGameObjectNode *)this,(AttachedGameObjectNode *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined ***)this = &PTR__AttachedEffect_0675cd00;
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  AVar4 = param_1[0x3c];
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  this[0x3c] = AVar4;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  return;
}


/* AttachedEffect::AttachedEffect(std::string const&) */

void __thiscall AttachedEffect::AttachedEffect(AttachedEffect *this,string *param_1)

{
  AttachedGameObjectNode::AttachedGameObjectNode((AttachedGameObjectNode *)this,param_1);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__AttachedEffect_0675cd00;
  Set8BytesTo0(this + 0x20);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  this[0x3c] = (AttachedEffect)0x0;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  return;
}


/* AttachedEffect::AttachedEffect() */

void __thiscall AttachedEffect::AttachedEffect(AttachedEffect *this)

{
  AttachedGameObjectNode::AttachedGameObjectNode((AttachedGameObjectNode *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__AttachedEffect_0675cd00;
  Set8BytesTo0(this + 0x20);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x28));
  this[0x3c] = (AttachedEffect)0x0;
  *(undefined4 *)(this + 0x34) = 0x3f800000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0x3f800000;
  return;
}


/* AttachedEffect::~AttachedEffect() */

void __thiscall AttachedEffect::~AttachedEffect(AttachedEffect *this)

{
  *(undefined ***)this = &PTR__AttachedEffect_0675cd00;
  std::string::~string((string *)(this + 0x20));
  AttachedGameObjectNode::~AttachedGameObjectNode((AttachedGameObjectNode *)this);
  return;
}


/* AttachedEffect::~AttachedEffect() */

void __thiscall AttachedEffect::~AttachedEffect(AttachedEffect *this)

{
  ~AttachedEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffect::InitializeWithEffectPopAnim(Effect_PopAnim*) */

void __thiscall
AttachedEffect::InitializeWithEffectPopAnim(AttachedEffect *this,Effect_PopAnim *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)this);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)param_1,true);
  Effect_PopAnim::SetCentered(param_1,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffect::InitializeWithAnimation(Sexy::PopAnim*) */

void __thiscall AttachedEffect::InitializeWithAnimation(AttachedEffect *this,PopAnim *param_1)

{
  Effect_PopAnim *pEVar1;
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)this);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,param_1,(RtClass *)0x0);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  StandaloneEffect::SetKeepAlive(this_00,true);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::SetCentered(pEVar1,true);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffect::InitializeWithAnimationAndClass(Sexy::PopAnim*, Sexy::RtClass*) */

void __thiscall
AttachedEffect::InitializeWithAnimationAndClass
          (AttachedEffect *this,PopAnim *param_1,RtClass *param_2)

{
  Effect_PopAnim *pEVar1;
  StandaloneEffect *this_00;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)this);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,param_1,param_2);
  this_00 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  StandaloneEffect::SetKeepAlive(this_00,true);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Effect_PopAnim::SetCentered(pEVar1,true);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedEffect::GetEffect() const */

Effect_PopAnim * __thiscall AttachedEffect::GetEffect(AttachedEffect *this)

{
  bool bVar1;
  RtObject *this_00;
  Effect_PopAnim *pEVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x10));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
    pEVar2 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
    return pEVar2;
  }
  return (Effect_PopAnim *)0x0;
}


/* AttachedEffect::PlayAnimLoopedWithDelay(std::string const&, float, float) */

void __thiscall
AttachedEffect::PlayAnimLoopedWithDelay
          (AttachedEffect *this,string *param_1,float param_2,float param_3)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,param_1,2);
  StandaloneEffect::SetVisibility(this_00,true);
  *(undefined4 *)(this + 0x18) = 2;
  thunk_FUN_05475e00(this + 0x20,param_1);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x28),param_2,param_3);
  uVar1 = ValueRange::GetRandomValue((ValueRange *)(this + 0x28));
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* AttachedEffect::PlayAnimLooped(std::string const&, AnimSelectionMethod) */

void __thiscall
AttachedEffect::PlayAnimLooped(AttachedEffect *this,undefined8 param_1,undefined8 param_3)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation((Effect_PopAnim *)this_00,param_1,param_3);
  StandaloneEffect::SetVisibility(this_00,true);
  *(undefined4 *)(this + 0x18) = 1;
  return;
}


/* AttachedEffect::PlayAnimLooped(std::string const&, std::string const&) */

void __thiscall AttachedEffect::PlayAnimLooped(AttachedEffect *this,string *param_1,string *param_2)

{
  StandaloneEffect *this_00;
  undefined4 uVar1;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,param_1,2);
  StandaloneEffect::SetVisibility(this_00,true);
  *(undefined4 *)(this + 0x18) = 2;
  thunk_FUN_05475e00(this + 0x20,param_2);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x28),0.0,0.0);
  uVar1 = ValueRange::GetRandomValue((ValueRange *)(this + 0x28));
  *(undefined4 *)(this + 0x30) = uVar1;
  return;
}


/* AttachedEffect::PlayAnimAndDestroy(std::string const&, AnimSelectionMethod) */

void __thiscall
AttachedEffect::PlayAnimAndDestroy(AttachedEffect *this,undefined8 param_1,undefined8 param_3)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,param_1,param_3);
  StandaloneEffect::SetVisibility(this_00,true);
  *(undefined4 *)(this + 0x18) = 3;
  return;
}


/* AttachedEffect::PlayAnimSequence(AnimationSequence const&) */

void __thiscall AttachedEffect::PlayAnimSequence(AttachedEffect *this,AnimationSequence *param_1)

{
  Effect_PopAnim *this_00;
  
  this_00 = (Effect_PopAnim *)GetEffect(this);
  Effect_PopAnim::PlayAnimationSequence(this_00,param_1);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  *(undefined4 *)(this + 0x18) = 1;
  return;
}


/* AttachedEffect::PlayAnimSequenceAndDestroy(AnimationSequence const&) */

void __thiscall
AttachedEffect::PlayAnimSequenceAndDestroy(AttachedEffect *this,AnimationSequence *param_1)

{
  Effect_PopAnim *this_00;
  
  this_00 = (Effect_PopAnim *)GetEffect(this);
  Effect_PopAnim::PlayAnimationSequence(this_00,param_1);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
  *(undefined4 *)(this + 0x18) = 3;
  return;
}


/* AttachedEffect::IsAnimActive(std::string const&) */

void __thiscall AttachedEffect::IsAnimActive(AttachedEffect *this,string *param_1)

{
  UIWidget *this_00;
  PopAnimRig *this_01;
  
  this_00 = (UIWidget *)GetEffect(this);
  if (this_00 != (UIWidget *)0x0) {
    this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
    PopAnimRig::IsAnimStringActive(this_01,param_1);
    return;
  }
  return;
}


/* AttachedEffect::Attach(RealObject*, Sexy::SexyVector3 const&, int) */

void __thiscall
AttachedEffect::Attach(AttachedEffect *this,RealObject *param_1,SexyVector3 *param_2,int param_3)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  StandaloneEffect::SetAttached(this_00,param_1,param_2,param_3);
  return;
}


/* AttachedEffect::Update(float) */

void __thiscall AttachedEffect::Update(AttachedEffect *this,float param_1)

{
  char cVar1;
  UIWidget *this_00;
  PopAnimRig *pPVar2;
  float fVar3;
  undefined4 uVar4;
  
  this_00 = (UIWidget *)GetEffect(this);
  if (this_00 != (UIWidget *)0x0) {
    if (*(int *)(this + 0x18) == 2) {
      pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        fVar3 = *(float *)(this + 0x30);
        *(float *)(this + 0x30) = fVar3 - param_1;
        if (0.0 < fVar3 - param_1) {
          StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,false);
          return;
        }
        Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this_00,this + 0x20,2);
        StandaloneEffect::SetVisibility((StandaloneEffect *)this_00,true);
        uVar4 = ValueRange::GetRandomValue((ValueRange *)(this + 0x28));
        *(undefined4 *)(this + 0x30) = uVar4;
      }
    }
    else if (*(int *)(this + 0x18) == 3) {
      pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
      cVar1 = PopAnimRig::IsPlayingAnything(pPVar2);
      if (cVar1 == '\0') {
        AttachedGameObjectNode::Destroy((AttachedGameObjectNode *)this);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffect::UpdateDynamicScale(float) */

void AttachedEffect::UpdateDynamicScale(float param_1)

{
  AttachedEffect *in_x0;
  StandaloneEffect *pSVar1;
  long *plVar2;
  float in_s1;
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x0[0x3c] == (AttachedEffect)0x0) {
    pSVar1 = (StandaloneEffect *)GetEffect(in_x0);
    local_20 = (float)StandaloneEffect::GetAttachmentOffset(pSVar1);
    local_1c = in_s1;
    Sexy::SexyVector2::operator/=((SexyVector2 *)&local_20,*(float *)(in_x0 + 0x38));
    *(float *)(in_x0 + 0x38) = param_1;
    Sexy::SexyVector2::operator*=((SexyVector2 *)&local_20,param_1);
    pSVar1 = (StandaloneEffect *)GetEffect(in_x0);
    EATextSquish::Vec3::Vec3(aVStack_18,local_20,local_1c,0.0);
    StandaloneEffect::SetAttachmentOffset(pSVar1,(SexyVector3 *)aVStack_18);
    plVar2 = (long *)GetEffect(in_x0);
    (**(code **)(*plVar2 + 0x80))(*(float *)(in_x0 + 0x38) * *(float *)(in_x0 + 0x34));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedEffect::UpdateStaticScale(float) */

void AttachedEffect::UpdateStaticScale(float param_1)

{
  AttachedEffect *in_x0;
  StandaloneEffect *pSVar1;
  long *plVar2;
  float in_s1;
  float local_20;
  float local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (StandaloneEffect *)GetEffect(in_x0);
  local_20 = (float)StandaloneEffect::GetAttachmentOffset(pSVar1);
  local_1c = in_s1;
  Sexy::SexyVector2::operator/=((SexyVector2 *)&local_20,*(float *)(in_x0 + 0x34));
  *(float *)(in_x0 + 0x34) = param_1;
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_20,param_1);
  pSVar1 = (StandaloneEffect *)GetEffect(in_x0);
  EATextSquish::Vec3::Vec3(aVStack_18,local_20,local_1c,0.0);
  StandaloneEffect::SetAttachmentOffset(pSVar1,(SexyVector3 *)aVStack_18);
  plVar2 = (long *)GetEffect(in_x0);
  (**(code **)(*plVar2 + 0x80))(*(float *)(in_x0 + 0x38) * *(float *)(in_x0 + 0x34));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AttachedEffect::Detach() */

void __thiscall AttachedEffect::Detach(AttachedEffect *this)

{
  StandaloneEffect *this_00;
  
  this_00 = (StandaloneEffect *)GetEffect(this);
  if (this_00 != (StandaloneEffect *)0x0) {
    StandaloneEffect::ClearAttachedTo(this_00);
    Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x10));
    return;
  }
  return;
}


/* AttachedEffect::TEMPNAMEPLACEHOLDERVALUE(AttachedEffect&&) */

AttachedEffect * __thiscall AttachedEffect::operator=(AttachedEffect *this,AttachedEffect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  AttachedEffect AVar4;
  
  AttachedGameObjectNode::operator=
            ((AttachedGameObjectNode *)this,(AttachedGameObjectNode *)param_1);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_05474278(this + 0x20,param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  AVar4 = param_1[0x3c];
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  this[0x3c] = AVar4;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar3;
  return this;
}

