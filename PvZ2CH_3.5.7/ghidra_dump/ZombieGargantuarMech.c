// Class: ZombieGargantuarMech


/* ZombieGargantuarMech::EMPeachStun(float) */

void __thiscall ZombieGargantuarMech::EMPeachStun(ZombieGargantuarMech *this,float param_1)

{
  *(float *)(this + 0x808) = param_1;
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieGargantuarMech::onEyeLaserEndComplete(std::string const&) */

void ZombieGargantuarMech::onEyeLaserEndComplete(string *param_1)

{
  int iVar1;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)param_1);
  if (iVar1 != 0x22) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x260))(param_1);
  return;
}


/* ZombieGargantuarMech::IsStunned() const */

undefined8 __thiscall ZombieGargantuarMech::IsStunned(ZombieGargantuarMech *this)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x21) {
    uVar2 = Zombie::IsStunned((Zombie *)this);
    return uVar2;
  }
  return 1;
}


/* ZombieGargantuarMech::~ZombieGargantuarMech() */

void __thiscall ZombieGargantuarMech::~ZombieGargantuarMech(ZombieGargantuarMech *this)

{
  *(undefined ***)this = &PTR_GetClass_068a5bf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGargantuarMech_068a6678;
  EyeLaserTracker::~EyeLaserTracker((EyeLaserTracker *)(this + 0x848));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x810));
  ZombieGargantuar::~ZombieGargantuar((ZombieGargantuar *)this);
  return;
}


/* non-virtual thunk to ZombieGargantuarMech::~ZombieGargantuarMech() */

void __thiscall ZombieGargantuarMech::~ZombieGargantuarMech(ZombieGargantuarMech *this)

{
  ~ZombieGargantuarMech(this + -0x10);
  return;
}


/* ZombieGargantuarMech::~ZombieGargantuarMech() */

void __thiscall ZombieGargantuarMech::~ZombieGargantuarMech(ZombieGargantuarMech *this)

{
  ~ZombieGargantuarMech(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieGargantuarMech::~ZombieGargantuarMech() */

void __thiscall ZombieGargantuarMech::~ZombieGargantuarMech(ZombieGargantuarMech *this)

{
  ~ZombieGargantuarMech(this + -0x10);
  return;
}


/* ZombieGargantuarMech::ZombieGargantuarMech() */

void __thiscall ZombieGargantuarMech::ZombieGargantuarMech(ZombieGargantuarMech *this)

{
  ZombieGargantuar::ZombieGargantuar((ZombieGargantuar *)this);
  *(undefined ***)this = &PTR_GetClass_068a5bf0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieGargantuarMech_068a6678;
  *(undefined4 *)(this + 0x808) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x810));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x818));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x820));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x828));
  DVec3::DVec3((DVec3 *)(this + 0x830));
  DVec3::DVec3((DVec3 *)(this + 0x83c));
  EyeLaserTracker::EyeLaserTracker((EyeLaserTracker *)(this + 0x848));
  this[0x894] = (ZombieGargantuarMech)0x0;
  *(undefined4 *)(this + 0x890) = 0;
  return;
}


/* ZombieGargantuarMech::StaticNew() */

ZombieGargantuarMech * ZombieGargantuarMech::StaticNew(void)

{
  ZombieGargantuarMech *this;
  
  this = ::operator_new(0x898);
  ZombieGargantuarMech(this);
  return this;
}


/* ZombieGargantuarMech::onDestroy() */

void __thiscall ZombieGargantuarMech::onDestroy(ZombieGargantuarMech *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  long *plVar3;
  
  Zombie::onDestroy((Zombie *)this);
  this_00 = (RtMixedPtrBase *)(this + 0x810);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x820));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820));
    (**(code **)(*plVar3 + 0x48))();
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x818));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
    (**(code **)(*plVar3 + 0x48))();
  }
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x828));
  if (bVar2) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x828));
    (**(code **)(*plVar3 + 0x48))();
  }
  return;
}


/* ZombieGargantuarMech::fireOnLaserTargets(Sexy::SexyVector3, Sexy::SexyVector3) */

void ZombieGargantuarMech::fireOnLaserTargets
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  EyeLaserTracker::StartFiring((SexyVector3 *)(param_4 + 0x848),(SexyVector3 *)&local_10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onExitState_EyeLaserFiring(ZombieState) */

void ZombieGargantuarMech::onExitState_EyeLaserFiring(RealObject *param_1)

{
  StandaloneEffect *this;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EyeLaserTracker::FiringInterrupted((EyeLaserTracker *)(param_1 + 0x848));
  this = (StandaloneEffect *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x818));
  StandaloneEffect::SetVisibility(this,false);
  uVar1 = PVZ_T();
  *(undefined4 *)(param_1 + 0x890) = uVar1;
  std::string::string(asStack_10,"Play_Zomb_Future_Gargantuar_Mvmt_Attack_DeathRay_End");
  RealObject::PlayPositionalSound(param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::drawLaserFromTo(Sexy::Graphics*, Sexy::SexyVector3 const&,
   Sexy::SexyVector3 const&) */

void __thiscall
ZombieGargantuarMech::drawLaserFromTo
          (ZombieGargantuarMech *this,Graphics *param_1,SexyVector3 *param_2,SexyVector3 *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  UIWidget *pUVar2;
  long lVar3;
  StandaloneEffect *pSVar4;
  Effect_PopAnim *this_01;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [8];
  undefined4 local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            (aFStack_20,*(float *)param_2,*(float *)(param_2 + 4) - *(float *)(param_2 + 8));
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x820);
  fVar9 = *(float *)(param_3 + 4) - *(float *)(param_3 + 8);
  Sexy::FastCurve::SetOutRange(aFStack_18,*(float *)param_3,fVar9);
  local_10 = Sexy::SexyVector2::operator-((SexyVector2 *)aFStack_18,(SexyVector2 *)aFStack_20);
  local_c = fVar9;
  fVar6 = (float)DVec2::getLength((DVec2 *)&local_10);
  pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = UIWidget::GetAtlasImage(pUVar2);
  lVar3 = FUN_046987f0(*(undefined8 *)(lVar3 + 0x20));
  iVar1 = *(int *)(lVar3 + 0x3c);
  pUVar2 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = UIWidget::GetAtlasImage(pUVar2);
  lVar3 = FUN_046987f0(*(undefined8 *)(lVar3 + 0x20));
  fVar7 = (float)FUN_04698ac0((float)iVar1 * *(float *)(lVar3 + 0x28));
  fVar8 = (float)Sexy::SexyVector2::Normalize((SexyVector2 *)&local_10);
  fVar8 = acosf(fVar8);
  if (0.0 <= fVar9) {
    fVar8 = -fVar8;
  }
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar4,param_2,-1);
  this_01 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Effect_PopAnim::SetOrientation(this_01,fVar8 + 3.1415927);
  plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar5 + 0xb8))(fVar6 / fVar7,0x3f800000);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar4,true);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::Draw(pSVar4,param_1);
  pSVar4 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetVisibility(pSVar4,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar8 + 3.1415927);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::AddToRenderQueue(RenderQueue*) */

void __thiscall
ZombieGargantuarMech::AddToRenderQueue(ZombieGargantuarMech *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::AddToRenderQueue((Zombie *)this,param_1);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,drawLaser);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<ZombieGargantuarMech,void(ZombieGargantuarMech::*)(Sexy::Graphics*)>
            (aDStack_38,aCStack_50);
  RenderQueue::Add(param_1,500000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuarMech::updateState_EMPeachStun() */

void __thiscall ZombieGargantuarMech::updateState_EMPeachStun(ZombieGargantuarMech *this)

{
  char cVar1;
  PopAnimRig *this_00;
  ZombieHydraHeadAnimRig *this_01;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)Zombie::getTimeInState((Zombie *)this);
  if (*(float *)(this + 0x808) < fVar2) {
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_FutureImp::PlayEMPeachStunEnd((ZombieAnimRig_FutureImp *)this_01);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x808) = uVar3;
  }
  this_00 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  cVar1 = PopAnimRig::IsPlayingAnything(this_00);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}


/* ZombieGargantuarMech::onEyeLaserStartComplete(std::string const&) */

void ZombieGargantuarMech::onEyeLaserStartComplete(string *param_1)

{
  int iVar1;
  ZombieHydraHeadAnimRig *this;
  
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)param_1);
  if (iVar1 != 0x22) {
    return;
  }
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_Mech::PlayLaserIdle((ZombieAnimRig_Mech *)this);
  param_1[0x894] = (string)0x1;
  fireOnLaserTargets(*(undefined4 *)(param_1 + 0x830),*(undefined4 *)(param_1 + 0x834),
                     *(undefined4 *)(param_1 + 0x838),*(undefined4 *)(param_1 + 0x83c),
                     *(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x844),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onEnterState_EMPeachStun(ZombieState) */

void ZombieGargantuarMech::onEnterState_EMPeachStun(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar1;
  PopAnimRig *this_01;
  ZombieGargantuarMechProps *pZVar2;
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FutureImp::PlayEMPeachStunStart((ZombieAnimRig_FutureImp *)this);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_EMPEACH_DAMAGE");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar1,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,1.0,50.0);
  StandaloneEffect::SetAttached
            ((StandaloneEffect *)this_00,(RealObject *)param_1,(SexyVector3 *)aRStack_18,1);
  (**(code **)(*(long *)this_00 + 0x80))(0x3fd9999a,this_00);
  std::string::string((string *)aRStack_18,"animation");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_00,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  PopAnimRig::RandomizeCurrentAnimFrame(this_01);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(param_1 + 0x810),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pZVar2 = Zombie::GetProps<ZombieGargantuarMechProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar2 + 0x288),0.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuarMech::onExitState_EMPeachStun(ZombieState) */

void ZombieGargantuarMech::onExitState_EMPeachStun(Zombie *param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  ZombieGargantuarMechProps *pZVar3;
  
  this = (RtMixedPtrBase *)(param_1 + 0x810);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  pZVar3 = Zombie::GetProps<ZombieGargantuarMechProps>(param_1);
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)(pZVar3 + 0x290),0.0);
  return;
}


/* ZombieGargantuarMech::onEnterState_Walk(ZombieState) */

void __thiscall
ZombieGargantuarMech::onEnterState_Walk(ZombieGargantuarMech *this,undefined8 param_2)

{
  ZombieGargantuarMechProps *pZVar1;
  float fVar2;
  
  if (*(float *)(this + 0x890) == 0.0) {
    fVar2 = (float)PVZ_T();
    pZVar1 = Zombie::GetProps<ZombieGargantuarMechProps>((Zombie *)this);
    *(float *)(this + 0x890) = fVar2 - *(float *)(pZVar1 + 0x268) * 0.5;
  }
  Zombie::onEnterState_Walk(this,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::pickLaserTargets(Sexy::SexyVector3&, Sexy::SexyVector3&) */

void __thiscall
ZombieGargantuarMech::pickLaserTargets
          (ZombieGargantuarMech *this,SexyVector3 *param_1,SexyVector3 *param_2)

{
  int iVar1;
  ZombieGargantuarMechProps *pZVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  Insets aIStack_28 [16];
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieGargantuarMechProps>((Zombie *)this);
  fVar7 = *(float *)(pZVar2 + 0x278);
  fVar5 = (float)(**(code **)(*(long *)this + 0x308))(*(float *)(pZVar2 + 0x27c) - fVar7,this);
  Board::GetGridBoundingRect();
  Sexy::Insets::Insets((Insets *)&local_18,aIStack_28);
  Sexy::TRect<int>::Inflate((int)(Insets *)&local_18,-0x28);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar4 = (int)(((*pfVar3 - fVar7) - (float)local_18) - fVar5);
  local_10 = iVar4;
  if (0 < iVar4) {
    uVar6 = 0;
    DVec3::DVec3((DVec3 *)&local_68);
    iVar1 = (**(code **)(*(long *)this + 0x300))(this,local_10);
    local_68 = (float)(local_18 + iVar1);
    iVar1 = (**(code **)(*(long *)this + 0x300))(this,local_c);
    local_64 = (float)(local_14 + iVar1);
    local_60 = 0;
    fVar5 = (float)FUN_046988ac(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x20));
    fVar7 = *(float *)(this + 0x1c);
    FUN_046988ac(*(undefined4 *)(this + 0x18),fVar7,*(undefined4 *)(this + 0x20));
    EATextSquish::Vec3::Vec3((Vec3 *)&local_48,fVar5,fVar7,0.0);
    local_38 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_68,(SexyVector3 *)&local_48);
    local_34 = fVar7;
    local_30 = uVar6;
    local_58 = Sexy::SexyVector3::Normalize((SexyVector3 *)&local_38);
    local_54 = fVar7;
    local_50 = uVar6;
    local_38 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_58,*(float *)(pZVar2 + 0x280));
    local_34 = fVar7;
    local_30 = uVar6;
    local_48 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_68,(SexyVector3 *)&local_38);
    local_44 = fVar7;
    local_40 = uVar6;
    Sexy::SexyVector3::operator=(param_1,(SexyVector3 *)&local_68);
    Sexy::SexyVector3::operator=(param_2,(SexyVector3 *)&local_48);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0 < iVar4);
  }
  return;
}


/* ZombieGargantuarMech::updateState_Walk() */

void __thiscall ZombieGargantuarMech::updateState_Walk(ZombieGargantuarMech *this)

{
  char cVar1;
  byte bVar2;
  ZombieGargantuarMechProps *pZVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this);
  if (cVar1 != '\0') {
    fVar4 = (float)PVZ_T();
    fVar7 = *(float *)(this + 0x890);
    pZVar3 = Zombie::GetProps<ZombieGargantuarMechProps>((Zombie *)this);
    fVar6 = *(float *)(pZVar3 + 0x268);
    bVar2 = EyeLaserTracker::IsActive((EyeLaserTracker *)(this + 0x848));
    if (((fVar6 - (fVar4 - fVar7) < 0.0) <= bVar2) ||
       (cVar1 = RealObject::IsOnTeam(this,2), cVar1 == '\0')) {
      ZombieGargantuar::updateState_Walk((ZombieGargantuar *)this);
      return;
    }
    cVar1 = pickLaserTargets(this,(SexyVector3 *)(this + 0x830),(SexyVector3 *)(this + 0x83c));
    if (cVar1 != '\0') {
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
  }
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x890) = uVar5;
  ZombieGargantuar::updateState_Walk((ZombieGargantuar *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onZombieInitialize() */

void __thiscall ZombieGargantuarMech::onZombieInitialize(ZombieGargantuarMech *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  Effect_PopAnim *pEVar3;
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onZombieInitialize((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_20);
  EyeLaserTracker::SetOwningZombie((EyeLaserTracker *)0x3f800000,0x3f800000,this + 0x848,aRStack_18)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_BEAM");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar1,1.0,0.5);
  std::string::string((string *)aRStack_18,"laser_beam");
  pEVar3._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x820),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_BASE");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar1,true);
  Effect_PopAnim::SetCentered(pEVar1,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x818),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_SCORCH");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"laser_hit");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  FUN_0469889c(pEVar1 + 0x1c);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.5,0.55);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar1,local_20,local_1c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onZombiePostLoad() */

void __thiscall ZombieGargantuarMech::onZombiePostLoad(ZombieGargantuarMech *this)

{
  Effect_PopAnim *pEVar1;
  ResourceInfo *pRVar2;
  Effect_PopAnim *pEVar3;
  float local_20;
  float local_1c;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)&local_20);
  EyeLaserTracker::SetOwningZombie((EyeLaserTracker *)0x3f800000,0x3f800000,this + 0x848,aRStack_18)
  ;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_BEAM");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar1,1.0,0.5);
  std::string::string((string *)aRStack_18,"laser_beam");
  pEVar3._0_4_ = (Effect_PopAnim *)PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar1,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x820),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_BASE");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  StandaloneEffect::SetKeepAlive((StandaloneEffect *)pEVar1,true);
  Effect_PopAnim::SetCentered(pEVar1,true);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x818),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  pEVar1 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_20,"POPANIM_EFFECTS_ZOMBIE_FUTURE_GARGANTUAR_SCORCH");
  GetPAMByName((string *)&local_20);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar1,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string((string *)&local_20);
  nop();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar1,(SexyVector3 *)aRStack_18,-1);
  std::string::string((string *)aRStack_18,"laser_hit");
  Effect_PopAnim::PlayLoopingAnimation(pEVar3._0_4_,pEVar1,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  StandaloneEffect::SetVisibility((StandaloneEffect *)pEVar1,false);
  FUN_0469889c(pEVar1 + 0x1c);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.5,0.55);
  Effect_PopAnim::SetCenteredOnArtLocationInFractionOfArtDimensions(pEVar1,local_20,local_1c);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x828),(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::updateState_EyeLaserFiring() */

void __thiscall ZombieGargantuarMech::updateState_EyeLaserFiring(ZombieGargantuarMech *this)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x894] != (ZombieGargantuarMech)0x0) {
    cVar1 = EyeLaserTracker::IsActive((EyeLaserTracker *)(this + 0x848));
    if (cVar1 == '\0') {
      this[0x894] = (ZombieGargantuarMech)0x0;
      pEVar2 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x818));
      std::string::string(asStack_58,"laser_end");
      Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onEyeLaserEndComplete");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_Mech::PlayLaserEnd((ZombieAnimRig_Mech *)pZVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onUpdate() */

void ZombieGargantuarMech::onUpdate(void)

{
  EyeLaserTracker *this;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Zombie *in_x0;
  undefined8 uVar4;
  ZombieGargantuarMechProps *pZVar5;
  undefined8 *puVar6;
  ulong uVar7;
  StandaloneEffect *pSVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float in_s1;
  float in_s2;
  float fVar12;
  FastCurve aFStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  float local_90 [4];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate(in_x0);
  cVar1 = (**(code **)(*(long *)in_x0 + 0x328))();
  if (cVar1 == '\0') {
    this = (EyeLaserTracker *)(in_x0 + 0x848);
    cVar1 = Zombie::IsSuspended(in_x0);
    if (cVar1 != '\0') {
      EyeLaserTracker::FiringInterrupted(this);
    }
    fVar10 = (float)PVZ_Dt();
    EyeLaserTracker::Update(this,fVar10);
    cVar1 = EyeLaserTracker::IsSweeping(this);
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x828));
      if (bVar2) {
        pSVar8 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x828));
        StandaloneEffect::SetVisibility(pSVar8,false);
      }
    }
    else {
      local_90[0] = (float)EyeLaserTracker::GetCurrentFireLocationBoardSpace(this);
      Sexy::FastCurve::SetOutRange(aFStack_a8,local_90[0],in_s1 - in_s2);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar4 = operator|(2,0x10);
      uVar3 = operator|(uVar4,4);
      EntityFinder::GetEntitiesTouchingPoint
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3,
                 aFStack_a8,0xffffffff,0xffffffff);
      pZVar5 = Zombie::GetProps<ZombieGargantuarMechProps>(in_x0);
      fVar12 = *(float *)(pZVar5 + 0x274);
      pZVar5 = Zombie::GetProps<ZombieGargantuarMechProps>(in_x0);
      fVar10 = *(float *)(pZVar5 + 0x270);
      fVar11 = (float)PVZ_Dt();
      uVar4 = operator|(0x400,0x1000);
      uVar4 = operator|(uVar4,0x400000);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar11 * (fVar12 / fVar10)),local_98,local_94,aDStack_68,uVar4);
      uVar9 = 0;
      while( true ) {
        uVar4 = local_80;
        uVar7 = FUN_04698818(local_80,local_78);
        if (uVar7 <= uVar9) break;
        puVar6 = (undefined8 *)FUN_04698824(uVar4,uVar9);
        (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,aDStack_68);
        uVar9 = uVar9 + 1;
      }
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x828));
      StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)local_90,-1);
      pSVar8 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x828));
      StandaloneEffect::SetVisibility(pSVar8,true);
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::onEnterState_EyeLaserFiring(ZombieState) */

void ZombieGargantuarMech::onEnterState_EyeLaserFiring(Zombie *param_1)

{
  Effect_PopAnim *this;
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  PIInterpolator aPStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x894] = (Zombie)0x0;
  Sexy::PIInterpolator::PIInterpolator(aPStack_68);
  std::string::string(asStack_70,"laser_start");
  AnimationSequence::AddSingleAnimation(aPStack_68,asStack_70,0);
  std::string::~string(asStack_70);
  nop();
  std::string::string(asStack_70,"laser_idle");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aPStack_68,asStack_70,0);
  std::string::~string(asStack_70);
  nop();
  this = (Effect_PopAnim *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                   ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x818));
  Effect_PopAnim::PlayAnimationSequence(this,(AnimationSequence *)aPStack_68);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
  std::string::string(asStack_70,"onEyeLaserStartComplete");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             asStack_70);
  ZombieAnimRig_Mech::PlayLaserStart((ZombieAnimRig_Mech *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  std::string::string(asStack_70,"Play_Zomb_Future_Gargantuar_Mvmt_Attack_DeathRay");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_70,0.0);
  std::string::~string(asStack_70);
  nop();
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::drawLaser(Sexy::Graphics*) */

void ZombieGargantuarMech::drawLaser(Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  EyeLaserTracker *this_00;
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  StandaloneEffect *pSVar5;
  Effect_PopAnim *this_01;
  CreatureConditionTracker *this_02;
  SexyVector3 *pSVar6;
  Graphics *in_x1;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 local_b0 [4];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  DVec3 aDStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Zombie::isInState((Zombie *)param_1,0x22);
  if (cVar2 != '\0') {
    std::string::string(asStack_20,"head_top");
    local_b0[0] = Zombie::LayerToWorld((Zombie *)param_1,asStack_20);
    std::string::~string(asStack_20);
    nop();
    if (((DAT_06b1ee48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1ee48), iVar3 != 0)) {
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1ee50,6.0,12.0,0.0);
      in_s2 = 0;
      in_s1 = 0x41300000;
      EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1ee5c,28.0,11.0,0.0);
      __cxa_guard_release(&DAT_06b1ee48);
    }
    if (((DAT_06b1eec8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06b1eec8), iVar3 != 0)) {
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::
      vector<Sexy::SexyVector3*,void>
                ((SexyVector3 *)&DAT_06b1ee98,(SexyVector3 *)&DAT_06b1ee50,
                 (allocator *)&DAT_06b1ee68);
      __cxa_guard_release(&DAT_06b1eec8);
      __cxa_atexit(std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector,
                   &DAT_06b1ee98,&DAT_06a88000);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
    uVar7 = 0;
    while( true ) {
      uVar1 = DAT_06b1ee98;
      uVar4 = FUN_046987f4(DAT_06b1ee98,DAT_06b1eea0);
      if (uVar4 <= uVar7) break;
      pSVar6 = (SexyVector3 *)FUN_0469882c(uVar1,uVar7);
      local_30 = Sexy::SexyVector3::operator+(pSVar6,(SexyVector3 *)local_b0);
      local_2c = in_s1;
      local_28 = in_s2;
      std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)asStack_20,
                 (SexyVector3 *)&local_30);
      uVar7 = uVar7 + 1;
    }
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      fVar9 = 0.0;
      this_00 = (EyeLaserTracker *)(param_1 + 0x848);
      this_02 = (CreatureConditionTracker *)Zombie::GetConditionTracker((Zombie *)param_1);
      fVar8 = (float)CreatureConditionTracker::GetDrawScale(this_02);
      pSVar6 = (SexyVector3 *)FUN_0469882c(DAT_06b1ee98,uVar7);
      local_30 = Sexy::SexyVector3::operator*(pSVar6,fVar8);
      local_2c = in_s1;
      local_28 = in_s2;
      local_a0 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_30,(SexyVector3 *)local_b0);
      uStack_9c = in_s1;
      local_98 = in_s2;
      cVar2 = EyeLaserTracker::IsActive(this_00);
      if (cVar2 != '\0') {
        local_90 = CONCAT44(uStack_9c,local_a0);
        local_88 = local_98;
        DVec3::DVec3(aDStack_80);
        fVar8 = (float)EyeLaserTracker::GetBeamExtent(this_00);
        local_70 = EyeLaserTracker::GetCurrentFireLocationBoardSpace(this_00);
        local_6c = in_s1;
        local_68 = in_s2;
        local_60 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_70,(SexyVector3 *)&local_90);
        local_5c = in_s1;
        local_58 = in_s2;
        fVar9 = (float)DVec3::getLength((DVec3 *)&local_60);
        if (fVar8 <= fVar9) {
          local_50 = Sexy::SexyVector3::operator/((SexyVector3 *)&local_60,fVar9);
          local_4c = in_s1;
          local_48 = in_s2;
          local_40 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_50,fVar8);
          local_3c = in_s1;
          local_38 = in_s2;
          local_30 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_90,(SexyVector3 *)&local_40)
          ;
          local_2c = in_s1;
          local_28 = in_s2;
          Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_80,(SexyVector3 *)&local_30);
        }
        else {
          Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_80,(SexyVector3 *)&local_70);
        }
        fVar9 = (float)drawLaserFromTo((ZombieGargantuarMech *)param_1,in_x1,
                                       (SexyVector3 *)&local_90,(SexyVector3 *)aDStack_80);
      }
      this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x818);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      StandaloneEffect::SetVisibility(pSVar5,true);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)&local_a0,-1);
      this_01 = (Effect_PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      Effect_PopAnim::SetOrientation(this_01,fVar9);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      StandaloneEffect::Draw(pSVar5,in_x1);
      pSVar5 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      StandaloneEffect::SetVisibility(pSVar5,false);
      uVar4 = FUN_046987f4(DAT_06b1ee98,DAT_06b1eea0);
    }
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)asStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarMech::StaticClassInit() */

void ZombieGargantuarMech::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  CBMemberTranslatorX aCStack_180 [24];
  CBMemberTranslatorX aCStack_168 [24];
  string asStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (pCVar1 != (CRefSymbolDb *)0x0) {
    plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1);
    if (plVar2 != (long *)0x0) {
      pcVar5 = *(code **)(*plVar2 + 0x18);
      std::string::string(asStack_150,"EyeLaserTracker");
      (*pcVar5)(plVar2,asStack_150,FUN_0469a454,0x48,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_150,"ZombieGargantuarMech");
    (*pcVar5)(plVar2,asStack_150,FUN_0469b594,0x898,0);
    std::string::~string(asStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieGargantuarMech,void(ZombieGargantuarMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate0::Delegate0<ZombieGargantuarMech,void(ZombieGargantuarMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieGargantuarMech,void(ZombieGargantuarMech::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_GARG_EMPeachStun");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469ae58(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieGargantuarMech,void(ZombieGargantuarMech::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate0::Delegate0<ZombieGargantuarMech,void(ZombieGargantuarMech::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieGargantuarMech,void(ZombieGargantuarMech::*)(ZombieState)>(aDStack_d8,asStack_150)
  ;
  std::string::string(asStack_188,"ZS_GARG_EyeLaserFiring");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0469ae58(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieGargantuarMech::StaticGetClass() */

long * ZombieGargantuarMech::StaticGetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGargantuarMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGargantuarMech::GetClass() const */

long * ZombieGargantuarMech::GetClass(void)

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
  uVar2 = ZombieGargantuar::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGargantuarMech",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

