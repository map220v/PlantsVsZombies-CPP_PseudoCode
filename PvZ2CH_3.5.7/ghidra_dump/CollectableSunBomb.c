// Class: CollectableSunBomb


/* CollectableSunBomb::onAnimDone_Explode(StandaloneEffect*) */

void CollectableSunBomb::onAnimDone_Explode(StandaloneEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* CollectableSunBomb::onBeamAnimDone_Destroy(StandaloneEffect*) */

void CollectableSunBomb::onBeamAnimDone_Destroy(StandaloneEffect *param_1)

{
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::StaticClassInit() */

void CollectableSunBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectableSunBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_04925e84,0x210,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSunBomb::StaticGetClass() */

long * CollectableSunBomb::StaticGetClass(void)

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
  uVar2 = CollectableSun::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSunBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSunBomb::GetClass() const */

long * CollectableSunBomb::GetClass(void)

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
  uVar2 = CollectableSun::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableSunBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectableSunBomb::ShouldExplode() const */

byte __thiscall CollectableSunBomb::ShouldExplode(CollectableSunBomb *this)

{
  return (byte)this[0x208] ^ 1;
}


/* CollectableSunBomb::CollectableSunBomb() */

void __thiscall CollectableSunBomb::CollectableSunBomb(CollectableSunBomb *this)

{
  CollectableSun::CollectableSun((CollectableSun *)this);
  *(undefined ***)this = &PTR_GetClass_06910bf0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSunBomb_06910e40;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x200));
  return;
}


/* CollectableSunBomb::StaticNew() */

CollectableSunBomb * CollectableSunBomb::StaticNew(void)

{
  CollectableSunBomb *this;
  
  this = ::operator_new(0x210);
  CollectableSunBomb(this);
  return this;
}


/* CollectableSunBomb::~CollectableSunBomb() */

void __thiscall CollectableSunBomb::~CollectableSunBomb(CollectableSunBomb *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x200);
  *(undefined ***)this = &PTR_GetClass_06910bf0;
  *(undefined ***)(this + 0x10) = &PTR__CollectableSunBomb_06910e40;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  CollectableSun::~CollectableSun((CollectableSun *)this);
  return;
}


/* non-virtual thunk to CollectableSunBomb::~CollectableSunBomb() */

void __thiscall CollectableSunBomb::~CollectableSunBomb(CollectableSunBomb *this)

{
  ~CollectableSunBomb(this + -0x10);
  return;
}


/* CollectableSunBomb::~CollectableSunBomb() */

void __thiscall CollectableSunBomb::~CollectableSunBomb(CollectableSunBomb *this)

{
  ~CollectableSunBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableSunBomb::~CollectableSunBomb() */

void __thiscall CollectableSunBomb::~CollectableSunBomb(CollectableSunBomb *this)

{
  ~CollectableSunBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::beamUpdate() */

void __thiscall CollectableSunBomb::beamUpdate(CollectableSunBomb *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  float *pfVar3;
  StandaloneEffect *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x200);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    local_28 = (float)*(undefined8 *)pfVar3;
    fStack_24 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
    _local_28 = CONCAT44(fStack_24 - 105.0,local_28 - 97.0);
    local_20 = 0;
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetBoardSpaceOrigin(pSVar4,(SexyVector3 *)&local_28,-1);
    fVar5 = (float)FUN_049253bc(*pfVar3 - 300.0);
    fVar7 = pfVar3[2];
    fVar6 = (float)FUN_049253bc(pfVar3[1] - fVar7);
    iVar2 = FUN_049253a8();
    fVar7 = (float)FUN_049253bc(fVar7 + 100.0);
    Sexy::Insets::Insets(aIStack_18,(int)fVar5,(int)fVar6,iVar2,(int)fVar7);
    pSVar4 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    StandaloneEffect::SetClipRect(pSVar4,(TRect *)aIStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSunBomb::onUpdate() */

void __thiscall CollectableSunBomb::onUpdate(CollectableSunBomb *this)

{
  CollectableSun::onUpdate((CollectableSun *)this);
  beamUpdate(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::getAnim() */

void CollectableSunBomb::getAnim(void)

{
  undefined8 extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DandelionBomb::getAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(extraout_x0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::animationSequenceIdle() */

void __thiscall CollectableSunBomb::animationSequenceIdle(CollectableSunBomb *this)

{
  PIInterpolator *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  std::string::string(asStack_10,"animation");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::animationSequenceTransitionToNormal() */

void __thiscall CollectableSunBomb::animationSequenceTransitionToNormal(CollectableSunBomb *this)

{
  PIInterpolator *in_x8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::PIInterpolator::PIInterpolator(in_x8);
  std::string::string(asStack_10,"transition");
  AnimationSequence::AddSingleAnimation();
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"normalSunIdle");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation();
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::beamDestroy() */

void __thiscall CollectableSunBomb::beamDestroy(CollectableSunBomb *this)

{
  Effect_PopAnim *pEVar1;
  StandaloneEffect *pSVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200))
  ;
  std::string::string(asStack_58,"animation3");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_58,0);
  std::string::~string(asStack_58);
  nop();
  pSVar2 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x200))
  ;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBeamAnimDone_Destroy");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback(pSVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::ExplodeMe() */

void __thiscall CollectableSunBomb::ExplodeMe(CollectableSunBomb *this)

{
  long lVar1;
  Effect_PopAnim *pEVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Collectable::SetMotionIdle((Collectable *)this);
  pEVar2 = (Effect_PopAnim *)getAnim();
  std::string::string(asStack_58,"attack");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
  std::string::~string(asStack_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimDone_Explode");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
             asStack_58);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  beamDestroy(this);
  lVar1 = ___stack_chk_guard;
  this[0x208] = (CollectableSunBomb)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::switchToNormalSun() */

void __thiscall CollectableSunBomb::switchToNormalSun(CollectableSunBomb *this)

{
  Effect_PopAnim *this_00;
  AnimationSequence aAStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 500) = 0;
  local_8 = ___stack_chk_guard;
  Collectable::SetDisableCollection((Collectable *)this,false);
  this_00 = (Effect_PopAnim *)getAnim();
  if (this_00 != (Effect_PopAnim *)0x0) {
    animationSequenceTransitionToNormal(this);
    Effect_PopAnim::PlayAnimationSequence(this_00,aAStack_20);
    AnimationSequence::~AnimationSequence(aAStack_20);
  }
  std::string::string((string *)aAStack_20,"Play_Zomb_Future_SunBomb_Defuse");
  RealObject::PlayPositionalSound((RealObject *)this,(string *)aAStack_20,0.0);
  std::string::~string((string *)aAStack_20);
  nop();
  beamDestroy(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSunBomb::onFinishMotion() */

void __thiscall CollectableSunBomb::onFinishMotion(CollectableSunBomb *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  CollectableSun::onFinishMotion((CollectableSun *)this);
  iVar2 = Collectable::getState((Collectable *)this);
  if ((iVar2 == 0) && (*(int *)(this + 500) == 1)) {
    switchToNormalSun(this);
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((pPVar3 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,2), cVar1 != '\0')) {
      Collectable::TryToCollect((Collectable *)this);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::beamCreate() */

void __thiscall CollectableSunBomb::beamCreate(CollectableSunBomb *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  long lVar3;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x200);
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string(asStack_28,"POPANIM_EFFECTS_SUN_BOMB_BEAM");
  GetPAMByName(asStack_28);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  std::string::string(asStack_28,"animation");
  AnimationSequence::AddSingleAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_28,"animation2");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aRStack_20,asStack_28,0);
  std::string::~string(asStack_28);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  FUN_04925328(lVar3 + 0x1c);
  pEVar1 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Effect_PopAnim::PlayAnimationSequence(pEVar1,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectableSunBomb::startSunBomb() */

void __thiscall CollectableSunBomb::startSunBomb(CollectableSunBomb *this)

{
  Effect_PopAnim *this_00;
  StandaloneEffect *this_01;
  AnimationSequence aAStack_20 [24];
  long local_8;
  
  *(undefined4 *)(this + 500) = 1;
  this[0x208] = (CollectableSunBomb)0x0;
  local_8 = ___stack_chk_guard;
  Collectable::SetDisableCollection((Collectable *)this,true);
  this_00 = (Effect_PopAnim *)getAnim();
  animationSequenceIdle(this);
  Effect_PopAnim::PlayAnimationSequence(this_00,aAStack_20);
  AnimationSequence::~AnimationSequence(aAStack_20);
  this_01 = (StandaloneEffect *)getAnim();
  StandaloneEffect::SetKeepAlive(this_01,true);
  beamCreate(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectableSunBomb::onCollectableInitialize() */

void __thiscall CollectableSunBomb::onCollectableInitialize(CollectableSunBomb *this)

{
  this[0x1f8] = (CollectableSunBomb)0x0;
  startSunBomb(this);
  return;
}

