// Class: AnimateArtifactMower


/* AnimateArtifactMower::GetEffect() */

RtWeakPtr<Sexy::SoundResource> * AnimateArtifactMower::GetEffect(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0x38));
  return in_x8;
}


/* AnimateArtifactMower::GetEffectPosition() */

undefined4 __thiscall AnimateArtifactMower::GetEffectPosition(AnimateArtifactMower *this)

{
  undefined4 local_10;
  
  local_10 = (undefined4)*(undefined8 *)(this + 0x28);
  return local_10;
}


/* AnimateArtifactMower::OnArtifactIdle() */

void __thiscall AnimateArtifactMower::OnArtifactIdle(AnimateArtifactMower *this)

{
  (**(code **)(*(long *)this + 0x98))(this,0);
  return;
}


/* AnimateArtifactMower::OnArtifactTrigger() */

void __thiscall AnimateArtifactMower::OnArtifactTrigger(AnimateArtifactMower *this)

{
  (**(code **)(*(long *)this + 0x98))(this,2);
  return;
}


/* AnimateArtifactMower::OnArtifactPrepare() */

void __thiscall AnimateArtifactMower::OnArtifactPrepare(AnimateArtifactMower *this)

{
  (**(code **)(*(long *)this + 0x98))(this,1);
  return;
}


/* AnimateArtifactMower::onMowerCreated(LawnMower*) */

AnimateArtifactMower * __thiscall
AnimateArtifactMower::onMowerCreated(AnimateArtifactMower *this,LawnMower *param_1)

{
  AnimateArtifactMower *pAVar1;
  
  if ((param_1 != (LawnMower *)0x0) &&
     (this = (AnimateArtifactMower *)FUN_04dc7ba0(*(undefined4 *)(param_1 + 200)), (int)this == 2))
  {
    pAVar1 = (AnimateArtifactMower *)(**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    return pAVar1;
  }
  return this;
}


/* AnimateArtifactMower::onMowerReset(LawnMower*) */

AnimateArtifactMower * __thiscall
AnimateArtifactMower::onMowerReset(AnimateArtifactMower *this,LawnMower *param_1)

{
  AnimateArtifactMower *pAVar1;
  
  if ((param_1 != (LawnMower *)0x0) &&
     (this = (AnimateArtifactMower *)FUN_04dc7ba0(*(undefined4 *)(param_1 + 200)), (int)this == 2))
  {
    pAVar1 = (AnimateArtifactMower *)(**(code **)(*(long *)param_1 + 0x80))(param_1,1);
    return pAVar1;
  }
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMower::StaticClassInit() */

void AnimateArtifactMower::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"AnimateArtifactMower");
    (*pcVar2)(plVar1,asStack_10,FUN_04dcd600,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMower::StaticGetClass() */

long * AnimateArtifactMower::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMower::GetClass() const */

long * AnimateArtifactMower::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = AnimationController::StaticGetClass();
  (*pcVar3)(plVar1,"AnimateArtifactMower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnimateArtifactMower::~AnimateArtifactMower() */

void __thiscall AnimateArtifactMower::~AnimateArtifactMower(AnimateArtifactMower *this)

{
  *(undefined ***)this = &PTR_GetClass_069c4040;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  AnimationController::~AnimationController((AnimationController *)this);
  return;
}


/* AnimateArtifactMower::~AnimateArtifactMower() */

void __thiscall AnimateArtifactMower::~AnimateArtifactMower(AnimateArtifactMower *this)

{
  ~AnimateArtifactMower(this);
  AK::FreeHook(this);
  return;
}


/* AnimateArtifactMower::onDestroy() */

void AnimateArtifactMower::onDestroy(void)

{
  RtMixedPtrBase *this;
  char cVar1;
  long in_x0;
  long *plVar2;
  
  this = (RtMixedPtrBase *)(in_x0 + 0x38);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* AnimateArtifactMower::Create() */

void AnimateArtifactMower::Create(void)

{
  GameObject::Create<AnimateArtifactMower>();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMower::Init(std::string) */

void __thiscall AnimateArtifactMower::Init(AnimateArtifactMower *this,Sexy *param_2)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  bool bVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  string *extraout_x1;
  string asStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::StringToUpper(param_2,extraout_x1);
  std::operator+("POPANIM_EFFECTS_",(string *)aRStack_18);
  std::string::~string((string *)aRStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_00);
  if (bVar1) {
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GetPAMByName(asStack_28);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
    iVar2 = 0;
    Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Effect_PopAnim::SetCentered(pEVar3,true);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetKeepAlive(pSVar5,true);
    BoardTransforms::GridToBoardSpacePos((BoardTransforms *)0x0,2,iVar2);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,(float)(local_20 + -0x41),(float)(local_1c + -0x14),0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x28),(SexyVector3 *)aRStack_18);
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
      *(float *)(this + 0x30) = 10.0 - (float)iVar2;
    }
    iVar2 = Board::MakeRenderOrder(0x64d48,2,0);
    pSVar5 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_18,*(float *)(this + 0x28),*(float *)(this + 0x2c),
               *(float *)(this + 0x30));
    StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)aRStack_18,iVar2);
  }
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMower::AnimateArtifactMower() */

void __thiscall AnimateArtifactMower::AnimateArtifactMower(AnimateArtifactMower *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  AnimationController::AnimationController((AnimationController *)this,0.0,true);
  *(undefined ***)this = &PTR_GetClass_069c4040;
  DVec3::DVec3((DVec3 *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xa8);
  Sexy::Delegate0::Delegate0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactIdle,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb0);
  Sexy::Delegate0::Delegate0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactTrigger,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xb8);
  Sexy::Delegate0::Delegate0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactPrepare,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0xc0);
  Sexy::Delegate0::Delegate0<AnimateArtifactMower,void(AnimateArtifactMower::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ArtifactCooldown,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMowerCreated);
  local_80 = local_58;
  local_90 = local_68;
  uStack_88 = uStack_60;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<AnimateArtifactMower,void(AnimateArtifactMower::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerInitialized,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onMowerReset);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<LawnMower*,Sexy::CBMemberTranslatorX<AnimateArtifactMower,void(AnimateArtifactMower::*)(LawnMower*)>>
            ((MessageRouter *)puVar1,Message::MowerReset,&local_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnimateArtifactMower::StaticNew() */

AnimateArtifactMower * AnimateArtifactMower::StaticNew(void)

{
  AnimateArtifactMower *this;
  
  this = ::operator_new(0x40);
  AnimateArtifactMower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateArtifactMower::PlayAnimation(ArtifactAnimState) */

void __thiscall AnimateArtifactMower::PlayAnimation(AnimateArtifactMower *this,uint param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *pSVar3;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    if (param_2 == 0) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
    }
    else if (param_2 == 1) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_60,"prepare");
      std::string::string(asStack_58,"ok");
      PVZ_EOT();
      Effect_PopAnim::PlaySingleAndLoopingAnimation(pEVar2,asStack_60,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      std::string::~string(asStack_60);
      nop();
    }
    else if (param_2 == 2) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"trigger");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pSVar3 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"TriggerEndCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,
                 (RtId *)asStack_60,asStack_58);
      StandaloneEffect::SetCompletionCallback(pSVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else if (param_2 == 3) {
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      std::string::string(asStack_58,"cooldown");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
    }
    else {
      Sexy::OutputDebugStrF
                ((wchar_t *)"AnimateArtifactMower::PlayAnimation() %d is invalid",(ulong)param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

