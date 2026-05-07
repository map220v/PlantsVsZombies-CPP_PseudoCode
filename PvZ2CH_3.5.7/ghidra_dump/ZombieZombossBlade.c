// Class: ZombieZombossBlade


/* ZombieZombossBlade::onExitState_FlyAttack(ZombieState) */

void ZombieZombossBlade::onExitState_FlyAttack(long param_1)

{
  *(undefined4 *)(param_1 + 0x8fc) = 0xffffffff;
  return;
}


/* ZombieZombossBlade::onTakeShieldAnimDone(std::string const&) */

void ZombieZombossBlade::onTakeShieldAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x25,0);
  return;
}


/* ZombieZombossBlade::onSummonAnimDone(std::string const&) */

void ZombieZombossBlade::onSummonAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0,0);
  return;
}


/* ZombieZombossBlade::onDashAttackAnimDone(std::string const&) */

void ZombieZombossBlade::onDashAttackAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x2c,0);
  return;
}


/* ZombieZombossBlade::onJumpAnimDone(std::string const&) */

void ZombieZombossBlade::onJumpAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x2d,0);
  return;
}


/* ZombieZombossBlade::onLandAnimDone(std::string const&) */

void ZombieZombossBlade::onLandAnimDone(string *param_1)

{
  if (param_1[0x8f0] == (string)0x0) {
    Zombie::setZombieState((Zombie *)param_1,0,0);
    return;
  }
  Zombie::setZombieState((Zombie *)param_1,0x27,0);
  param_1[0x8f0] = (string)0x0;
  return;
}


/* ZombieZombossBlade::onFlyOusideScreenAnimDone(std::string const&) */

void ZombieZombossBlade::onFlyOusideScreenAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x30,0);
  return;
}


/* ZombieZombossBlade::onPrepareBladeKeeAnimDone(std::string const&) */

void ZombieZombossBlade::onPrepareBladeKeeAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x2b,0);
  return;
}


/* ZombieZombossBlade::onTakeBladeKeeAnimDone(std::string const&) */

void ZombieZombossBlade::onTakeBladeKeeAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0,0);
  return;
}


/* ZombieZombossBlade::onChopAnimDone(std::string const&) */

void ZombieZombossBlade::onChopAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0,0);
  return;
}


/* ZombieZombossBlade::canPerformAction() */

void __thiscall ZombieZombossBlade::canPerformAction(ZombieZombossBlade *this)

{
  char cVar1;
  
  cVar1 = Zombie::isInState((Zombie *)this,0);
  if (cVar1 != '\0') {
    return;
  }
  Zombie::isInState((Zombie *)this,0x25);
  return;
}


/* ZombieZombossBlade::canTargetEntityHeight(BoardEntityHeight) */

undefined8 __thiscall
ZombieZombossBlade::canTargetEntityHeight(ZombieZombossBlade *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 == '\0') {
    cVar1 = Zombie::IsFlying((Zombie *)this);
    if (cVar1 == '\0') {
      uVar2 = Zombie::canTargetEntityHeight((Zombie *)this,param_2);
      return uVar2;
    }
  }
  return 0;
}


/* ZombieZombossBlade::onExitState_Land(ZombieState) */

void ZombieZombossBlade::onExitState_Land(Zombie *param_1)

{
  Zombie::SetIsJumping(param_1,false);
  Zombie::SetIsFlying(param_1,false);
  return;
}


/* ZombieZombossBlade::onExitState_FlyAttackWarning(ZombieState) */

void ZombieZombossBlade::onExitState_FlyAttackWarning(void)

{
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  return;
}


/* ZombieZombossBlade::resetSkills() */

void __thiscall ZombieZombossBlade::resetSkills(ZombieZombossBlade *this)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x8e4) = 0;
  *(undefined4 *)(this + 0x8e8) = 0;
  pcVar1 = *(code **)(*(long *)this + 0xa70);
  *(undefined4 *)(this + 0x8fc) = 0xffffffff;
  *(undefined4 *)(this + 0x8ec) = 0;
  this[0x8f0] = (ZombieZombossBlade)0x0;
  *(undefined4 *)(this + 0x908) = 0;
  *(undefined4 *)(this + 0x8e0) = uVar2;
  *(undefined4 *)(this + 0x8f8) = uVar2;
  *(undefined4 *)(this + 0x904) = uVar2;
  (*pcVar1)(this);
  return;
}


/* ZombieZombossBlade::onChangeStageAnimDone(std::string const&) */

void ZombieZombossBlade::onChangeStageAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      resetSkills((ZombieZombossBlade *)param_1);
      Zombie::setZombieState((Zombie *)param_1,0,0);
      return;
    }
  }
  return;
}


/* ZombieZombossBlade::canCoolDownIdleTime() */

undefined8 __thiscall ZombieZombossBlade::canCoolDownIdleTime(ZombieZombossBlade *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x29), cVar1 == '\0')) {
    uVar2 = Zombie::isInState((Zombie *)this,0x25);
    return uVar2;
  }
  return 1;
}


/* ZombieZombossBlade::performZombossTakeShieldAction() */

undefined8 __thiscall ZombieZombossBlade::performZombossTakeShieldAction(ZombieZombossBlade *this)

{
  *(undefined4 *)(this + 0x8e4) = 1;
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return 1;
}


/* ZombieZombossBlade::calcZombossAttackRect() */

void ZombieZombossBlade::calcZombossAttackRect(void)

{
  int iVar1;
  long in_x0;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(in_x0 + 0x1c);
  fVar2 = (float)FUN_046fa05c(*(undefined4 *)(in_x0 + 0x18),fVar3,*(undefined4 *)(in_x0 + 0x20));
  Sexy::Insets::Insets(in_x8);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)in_x8 = (int)(fVar2 - (float)iVar1 * 1.5);
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 4) = (int)(fVar3 - (float)iVar1 * 1.5);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(in_x8 + 8) = iVar1 << 1;
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  *(int *)(in_x8 + 0xc) = iVar1 << 1;
  return;
}


/* ZombieZombossBlade::initializeStageData(ZombossBladeStage const&) */

void __thiscall
ZombieZombossBlade::initializeStageData(ZombieZombossBlade *this,ZombossBladeStage *param_1)

{
  int iVar1;
  ZombieAnimRig *this_00;
  float fVar2;
  float fVar3;
  
  (**(code **)(*(long *)this + 0x198))(this,*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)param_1;
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::SetHitpoints((Zombie *)this,fVar2 * (float)iVar1);
  iVar1 = *(int *)param_1;
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  FUN_046f9e10(fVar2 * (float)iVar1,this + 0x284);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  ZombieAnimRig::SetAnimRateModifier(this_00,*(float *)(param_1 + 8));
  fVar3 = *(float *)(param_1 + 0x88);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar2 = *(float *)(param_1 + 0x90);
  *(float *)(this + 0x8f4) = (float)iVar1 * fVar3;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x900) = (float)iVar1 * fVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieZombossBlade::CanBeTargetedByPlant
          (ZombieZombossBlade *this,RtWeakPtrBase *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 == '\0') {
    cVar1 = Zombie::IsFlying((Zombie *)this);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
      uVar2 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      goto LAB_046fa524;
    }
  }
  uVar2 = 0;
LAB_046fa524:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieZombossBlade::onDestroy() */

void __thiscall ZombieZombossBlade::onDestroy(ZombieZombossBlade *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x910));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x910));
    (**(code **)(*plVar2 + 0x48))();
  }
  Zombie::onDestroy((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onDraw(Sexy::Graphics*) */

void __thiscall ZombieZombossBlade::onDraw(ZombieZombossBlade *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  float fVar5;
  float fVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onDraw((Graphics *)this);
  cVar1 = Zombie::isInState((Zombie *)this,0x30);
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr *)(this + 0x910);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar2) {
      Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
      iVar3 = BoardTransforms::GridToBoardSpaceX(0);
      fVar5 = (float)FUN_046fa200((float)iVar3 - DAT_06b20b50);
      iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x8fc));
      fVar6 = (float)FUN_046fa200((float)iVar3 - DAT_06b20b54);
      Sexy::Graphics::Translate(param_1,(int)fVar5,(int)fVar6);
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::SetRenderTransform(pPVar4,aSStack_30);
      pPVar4 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      PopAnimRig::Draw(pPVar4,param_1);
      Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::findPlantsToChop(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&)
    */

void __thiscall ZombieZombossBlade::findPlantsToChop(ZombieZombossBlade *this,vector *param_1)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1);
  calcZombossAttackRect();
  EntityFinder::GetEntitiesInRectangle(param_1,1,auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::findPlantsToFlyAttack(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall ZombieZombossBlade::findPlantsToFlyAttack(ZombieZombossBlade *this,vector *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar7 = *pfVar5;
  fVar6 = pfVar5[1];
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (aIStack_18,(int)(fVar7 - (float)iVar1 * 0.5),(int)(fVar6 - (float)iVar2 * 0.5),
             iVar3 * 3,iVar4);
  EntityFinder::GetEntitiesInRectangle(param_1,1,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossBlade::onEnterState_HangBeforeLanding(ZombieState) */

void ZombieZombossBlade::onEnterState_HangBeforeLanding(long param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(param_1 + 0x8f8) = fVar1 + 2.0;
  return;
}


/* ZombieZombossBlade::updateState_HangBeforeLanding() */

void __thiscall ZombieZombossBlade::updateState_HangBeforeLanding(ZombieZombossBlade *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x8f8);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar2) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x2e,0);
  return;
}


/* ZombieZombossBlade::updateState_FlyAttackWarning() */

void __thiscall ZombieZombossBlade::updateState_FlyAttackWarning(ZombieZombossBlade *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x904);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= fVar2) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x31,0);
  return;
}


/* ZombieZombossBlade::onEnterState_Shielding(ZombieState) */

void ZombieZombossBlade::onEnterState_Shielding(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_ZombossBlade::PlayShielding((ZombieAnimRig_ZombossBlade *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_FlyAttack(ZombieState) */

void ZombieZombossBlade::onEnterState_FlyAttack(Zombie *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ZombieHydraHeadAnimRig *this;
  code *pcVar4;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  std::string::string(asStack_18,"Play_Boss_Blade_Fly");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_18,0.0);
  std::string::~string(asStack_18);
  nop();
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_ZombossBlade::PlayFlyAttackForward((ZombieAnimRig_ZombossBlade *)this);
  pcVar4 = *(code **)(*(long *)param_1 + 0x78);
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(param_1 + 0x8fc));
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iVar2,(float)iVar3,0.0);
  (*pcVar4)(param_1,asStack_18);
  lVar1 = ___stack_chk_guard;
  *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + -1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossBlade::ZombieZombossBlade() */

void __thiscall ZombieZombossBlade::ZombieZombossBlade(ZombieZombossBlade *this)

{
  Zomboss::Zomboss((Zomboss *)this);
  *(undefined ***)this = &PTR_GetClass_068baa60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossBlade_068bb6d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x910));
  return;
}


/* ZombieZombossBlade::StaticNew() */

ZombieZombossBlade * ZombieZombossBlade::StaticNew(void)

{
  ZombieZombossBlade *this;
  
  this = ::operator_new(0x918);
  ZombieZombossBlade(this);
  return this;
}


/* ZombieZombossBlade::getHeadIcon() */

void __thiscall ZombieZombossBlade::getHeadIcon(ZombieZombossBlade *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06b20b28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::chopPlantsInFront(std::string const&) */

void __thiscall ZombieZombossBlade::chopPlantsInFront(ZombieZombossBlade *this,string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_60 [8];
  RtId aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_60);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_58,
             param_1);
  ZombieAnimRig_ZombossBlade::PlayChop((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  Sexy::RtId::~RtId(aRStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onDashEndAnimDone(std::string const&) */

void ZombieZombossBlade::onDashEndAnimDone(string *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"onDashAttackAnimDone");
  chopPlantsInFront((ZombieZombossBlade *)param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_Chop(ZombieState) */

void ZombieZombossBlade::onEnterState_Chop(ZombieZombossBlade *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"onChopAnimDone");
  chopPlantsInFront(param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_TakeShield(ZombieState) */

void ZombieZombossBlade::onEnterState_TakeShield(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTakeShieldAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossBlade::PlayTakeShield((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
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
/* ZombieZombossBlade::onEnterState_DashAttack(ZombieState) */

void ZombieZombossBlade::onEnterState_DashAttack(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onDashEndAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossBlade::PlayBrakes((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
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
/* ZombieZombossBlade::onEnterState_ChangeLane(ZombieState) */

void ZombieZombossBlade::onEnterState_ChangeLane(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onJumpAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlayJumpStart((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Zombie::SetIsJumping(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_PrepareBladeKee(ZombieState) */

void ZombieZombossBlade::onEnterState_PrepareBladeKee(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onPrepareBladeKeeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossBlade::PlayPrepareBladeKee((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
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
/* ZombieZombossBlade::onEnterState_TakeBladeKee(ZombieState) */

void ZombieZombossBlade::onEnterState_TakeBladeKee(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTakeBladeKeeAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossBlade::PlayTakeBladeKee((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
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
/* ZombieZombossBlade::onEnterState_FlyOutsideScreen(ZombieState) */

void ZombieZombossBlade::onEnterState_FlyOutsideScreen(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyOusideScreenAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossBlade::PlayFlyOutsideScreen((ZombieAnimRig_ZombossBlade *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Zombie::SetIsFlying(param_1,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::tryDashAction() */

void __thiscall ZombieZombossBlade::tryDashAction(ZombieZombossBlade *this)

{
  char cVar1;
  undefined8 uVar2;
  int local_58;
  int local_54;
  undefined1 auStack_50 [4];
  int local_4c;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntities(avStack_38,1);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (cVar1 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    BoardEntity::CalcGridPosition();
    (**(code **)(*(long *)this + 0xd0))(auStack_50,this);
    Sexy::Insets::Insets(aIStack_48,0,(local_54 - local_4c) + 1,local_58,local_4c);
    EntityFinder::GetEntitiesInGridSquares(avStack_20,1,aIStack_48);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x27);
    }
    else {
      this[0x8f0] = (ZombieZombossBlade)0x1;
      Zombie::setZombieState((Zombie *)this,0x2c,0);
    }
    uVar2 = 1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::updateState_Dash() */

void __thiscall ZombieZombossBlade::updateState_Dash(ZombieZombossBlade *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 local_30;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  findPlantsToChop(this,(vector *)avStack_20);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    Zombie::setZombieState((Zombie *)this,0x28);
  }
  else {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    local_30 = *puVar3;
    fVar5 = *(float *)(this + 0x8f4);
    local_28 = *(undefined4 *)(puVar3 + 1);
    fVar4 = (float)PVZ_Dt();
    local_30 = CONCAT44(local_30._4_4_,(float)local_30 - fVar5 * fVar4);
    (**(code **)(*(long *)this + 0x78))(this,&local_30);
    iVar2 = BoardTransforms::BoardSpaceToGridX((float)local_30);
    if (iVar2 < 1) {
      Zombie::setZombieState((Zombie *)this,0x2c,0);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::updateState_FlyAttack() */

void __thiscall ZombieZombossBlade::updateState_FlyAttack(ZombieZombossBlade *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  Plant *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  float local_24;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_60 = *puVar3;
  fVar10 = *(float *)(this + 0x900);
  local_58 = *(undefined4 *)(puVar3 + 1);
  fVar8 = (float)PVZ_Dt();
  local_60 = CONCAT44(local_60._4_4_,(float)local_60 - fVar10 * fVar8);
  (**(code **)(*(long *)this + 0x78))(this,&local_60);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  (**(code **)(*(long *)this + 0xd0))((RelocationEvent *)&local_38,this);
  if ((float)(iVar2 * local_38) + (float)local_60 < 0.0) {
    if (*(int *)(this + 0x908) < 1) {
      Zombie::setZombieState((Zombie *)this,0x2d,0);
    }
    else {
      Zombie::setZombieState((Zombie *)this,0x30,0);
    }
  }
  uVar6 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  findPlantsToFlyAttack(this,(vector *)&local_50);
  uVar7 = local_50;
  lVar4 = FUN_046f9e74(local_50,local_48);
  if (lVar4 != 0) {
    do {
      FUN_046f9e80(uVar7,uVar6);
      nop();
      cVar1 = Plant::IsIgnoreControlAndDmg(this_00);
      if (cVar1 == '\0') {
        Plant::clearRelocationEvents(this_00);
        uVar9 = *(undefined4 *)(this_00 + 0x1c);
        iVar2 = FUN_046fa05c(*(undefined4 *)(this_00 + 0x18),uVar9,*(undefined4 *)(this_00 + 0x20));
        RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
        local_38 = iVar2;
        local_34 = uVar9;
        local_24 = (float)PVZ_T();
        local_20 = local_24 + 1.0;
        iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(-100);
        iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(iVar2);
        local_18 = 2;
        local_30 = (float)iVar2;
        local_1c = 1;
        local_2c = local_34;
        Plant::addRelocationEvent(this_00,(RelocationEvent *)&local_38);
        if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar1 = Plant::IsInPlantFoodState(this_00);
        }
        else {
          cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
        }
        if (cVar1 != '\0') {
          (**(code **)(**(long **)(this_00 + 0xa8) + 0x228))(*(long **)(this_00 + 0xa8));
        }
        if (*(code **)(**(long **)(this_00 + 0xa8) + 0x440) != PlantFramework::stopSpecialEffect) {
          (**(code **)(**(long **)(this_00 + 0xa8) + 0x440))();
        }
      }
      uVar7 = local_50;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_046f9e74(local_50,local_48);
    } while (uVar6 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossBlade::~ZombieZombossBlade() */

void __thiscall ZombieZombossBlade::~ZombieZombossBlade(ZombieZombossBlade *this)

{
  *(undefined ***)this = &PTR_GetClass_068baa60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossBlade_068bb6d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x910));
  Zomboss::~Zomboss((Zomboss *)this);
  return;
}


/* non-virtual thunk to ZombieZombossBlade::~ZombieZombossBlade() */

void __thiscall ZombieZombossBlade::~ZombieZombossBlade(ZombieZombossBlade *this)

{
  ~ZombieZombossBlade(this + -0x10);
  return;
}


/* ZombieZombossBlade::~ZombieZombossBlade() */

void __thiscall ZombieZombossBlade::~ZombieZombossBlade(ZombieZombossBlade *this)

{
  ~ZombieZombossBlade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossBlade::~ZombieZombossBlade() */

void __thiscall ZombieZombossBlade::~ZombieZombossBlade(ZombieZombossBlade *this)

{
  ~ZombieZombossBlade(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::FindZombieToChop(std::vector<Zombie*, std::allocator<Zombie*> >&) */

void __thiscall ZombieZombossBlade::FindZombieToChop(ZombieZombossBlade *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  Zombie *local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  calcZombossAttackRect();
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,auStack_30);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    local_38 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if ((((local_38 != (Zombie *)0x0) &&
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)local_38),
         cVar2 != '\0')) &&
        (cVar2 = (**(code **)(*(long *)local_38 + 0x328))(local_38), cVar2 == '\0')) &&
       (((cVar2 = Zombie::CanTakeFatalDamage(local_38), cVar2 != '\0' &&
         (cVar2 = Zombie::HasCondition(local_38,0x27), cVar2 == '\0')) &&
        (cVar2 = Zombie::HasCondition(local_38,0x65), cVar2 == '\0')))) {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)param_1,&local_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::updateState_Idle() */

void __thiscall ZombieZombossBlade::updateState_Idle(ZombieZombossBlade *this)

{
  char cVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::updateState_Idle((Zombie *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  findPlantsToChop(this,(vector *)avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (cVar1 == '\0') {
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  else {
    FindZombieToChop(this,(vector *)avStack_20);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  if ((cVar1 == '\0') ||
     (cVar1 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                        ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x29,0);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onZombieInitialize() */

void __thiscall ZombieZombossBlade::onZombieInitialize(ZombieZombossBlade *this)

{
  ResourceInfo *pRVar1;
  RtClass *pRVar2;
  PopAnimRig *pPVar3;
  ZombieZombossBladeProps *pZVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  string asStack_50 [8];
  RtWeakPtr aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zomboss::onZombieInitialize((Zomboss *)this);
  uVar9 = PVZ_EOT();
  *(undefined4 *)(this + 0x8e4) = 0;
  *(undefined4 *)(this + 0x8fc) = 0xffffffff;
  *(undefined4 *)(this + 0x8e8) = 0;
  *(undefined4 *)(this + 0x8ec) = 0;
  this[0x8f0] = (ZombieZombossBlade)0x0;
  *(undefined4 *)(this + 0x908) = 0;
  *(undefined4 *)(this + 0x8f8) = uVar9;
  *(undefined4 *)(this + 0x8e0) = uVar9;
  *(undefined4 *)(this + 0x900) = 0;
  *(undefined4 *)(this + 0x904) = uVar9;
  std::string::string(asStack_50,"POPANIM_EFFECTS_FLYATTACK_WARNING");
  GetPAMByName(asStack_50);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_48);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x910),(RtWeakPtrBase *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  std::string::~string(asStack_50);
  nop();
  pPVar3 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x910))
  ;
  std::string::string((string *)aRStack_40,"waning");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar3,aRStack_40,0,aDStack_38);
  std::string::~string((string *)aRStack_40);
  nop();
  pZVar4 = Zombie::GetProps<ZombieZombossBladeProps>((Zombie *)this);
  uVar7 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(pZVar4 + 0x218);
    uVar6 = FUN_046f9e28(uVar8,*(undefined8 *)(pZVar4 + 0x220));
    if (uVar6 <= uVar7) break;
    lVar5 = FUN_046f9e64(uVar8,uVar7);
    ZombieSkillUtils::LoadSummonZombiesResources((CZombieSummonDataPool *)(lVar5 + 0x50));
    uVar7 = uVar7 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossBlade::getActiveStage() const */

void __thiscall ZombieZombossBlade::getActiveStage(ZombieZombossBlade *this)

{
  ZombieZombossBladeProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieZombossBladeProps>((Zombie *)this);
  FUN_046f9e64(*(undefined8 *)(pZVar1 + 0x218),(long)*(int *)(this + 0x888));
  return;
}


/* ZombieZombossBlade::onChangeActiveStage(int) */

void ZombieZombossBlade::onChangeActiveStage(int param_1)

{
  ZombossBladeStage *pZVar1;
  
  Zomboss::onChangeActiveStage(param_1);
  pZVar1 = (ZombossBladeStage *)getActiveStage((ZombieZombossBlade *)(ulong)(uint)param_1);
  initializeStageData((ZombieZombossBlade *)(ulong)(uint)param_1,pZVar1);
  return;
}


/* ZombieZombossBlade::startFunctioning() */

void __thiscall ZombieZombossBlade::startFunctioning(ZombieZombossBlade *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = getActiveStage(this);
  uVar2 = ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0xc));
  *(undefined4 *)(this + 0x8e0) = uVar2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::processDamage(DamageInfo&) */

void __thiscall ZombieZombossBlade::processDamage(ZombieZombossBlade *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x25);
  if ((((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,0x26), cVar1 != '\0')) &&
      (*(RtObject **)param_1 != (RtObject *)0x0)) &&
     (bVar2 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1), bVar2)) {
    lVar3 = getActiveStage(this);
    uVar4 = FUN_046fac18(*(undefined8 *)(lVar3 + 0x18));
    uVar5 = FUN_046fac68(*(undefined8 *)(lVar3 + 0x20));
    nop();
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = FUN_046fac68(*(undefined8 *)(lVar3 + 0x20));
    bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar2) {
      lVar3 = getActiveStage(this);
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * *(float *)(lVar3 + 0x30);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossBlade::TakeDamage(DamageInfo const&) */

void __thiscall ZombieZombossBlade::TakeDamage(ZombieZombossBlade *this,DamageInfo *param_1)

{
  processDamage(this,param_1);
  Zomboss::TakeDamage((Zomboss *)this,param_1);
  return;
}


/* ZombieZombossBlade::onEndCondition(ZombieConditions) */

void __thiscall ZombieZombossBlade::onEndCondition(ZombieZombossBlade *this,uint param_2)

{
  ZombieAnimRig *this_00;
  long lVar1;
  
  if (1 < param_2) {
    return;
  }
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  lVar1 = getActiveStage(this);
  ZombieAnimRig::SetAnimRateModifier(this_00,*(float *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieZombossBlade::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Plant *extraout_x0;
  BladeKee *this;
  long lVar4;
  SexyVector3 *pSVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  int local_20;
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"summon_action");
  if (bVar1) {
    lVar4 = getActiveStage((ZombieZombossBlade *)param_1);
    ZombieSkillUtils::SummonZombies((CZombieSummonDataPool *)(lVar4 + 0x50),(Zombie *)param_1);
    *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + -1;
  }
  else {
    bVar1 = std::operator==(param_4,"attack_action");
    if (bVar1) {
      uVar7 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      findPlantsToChop((ZombieZombossBlade *)param_1,(vector *)&local_38);
      uVar9 = CONCAT44(iStack_34,local_38);
      uVar2 = FUN_046f9e74(uVar9,local_30);
      if (uVar2 != 0) {
        do {
          puVar3 = (undefined8 *)FUN_046f9e80(uVar9,uVar7);
          if ((RtObject *)*puVar3 != (RtObject *)0x0) {
            bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar3);
            if (bVar1) {
              uVar9 = CONCAT44(iStack_34,local_38);
              FUN_046f9e80(uVar9,uVar7);
              nop();
              if (extraout_x0 == (Plant *)0x0) {
                uVar2 = FUN_046f9e74(uVar9,local_30);
                goto LAB_046fd8dc;
              }
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)&local_40);
              Plant::TakeSmashAttack(extraout_x0,(RtWeakPtr<Sexy::SoundResource> *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            }
            uVar9 = CONCAT44(iStack_34,local_38);
            uVar2 = FUN_046f9e74(uVar9,local_30);
          }
LAB_046fd8dc:
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      FindZombieToChop((ZombieZombossBlade *)param_1,(vector *)&local_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
            bVar1) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        Zombie::TakeFatalDamage((Zombie *)*puVar3,(BoardEntity *)param_1);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
    else {
      bVar1 = std::operator==(param_4,"power_attack_action");
      if (bVar1) {
        this = GameObject::Create<BladeKee>();
        lVar4 = getActiveStage((ZombieZombossBlade *)param_1);
        pSVar5 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_1);
        BladeKee::InitializeBladeKee(this,*(float *)(lVar4 + 0x8c),pSVar5);
      }
      else {
        bVar1 = std::operator==(param_4,"jump_down_action");
        if (bVar1) {
          BoardEntity::CalcGridPosition();
          for (iVar8 = 0; (**(code **)(*(long *)param_1 + 0xd0))(&local_20,param_1),
              iVar8 < local_20; iVar8 = iVar8 + 1) {
            iVar6 = 0;
            (**(code **)(*(long *)param_1 + 0xd0))(&local_20,param_1);
            if (0 < local_1c) {
              do {
                if (local_38 == iVar8) {
                  Board::KillPlantNotInvincibleAt
                            (*(Board **)(gLawnApp + 0x9f0),iVar8 << 1,iVar6 + iStack_34,false);
                }
                else {
                  Board::KillPlantNotInvincibleAt
                            (*(Board **)(gLawnApp + 0x9f0),iVar8 + local_38,iVar6 + iStack_34,true);
                }
                iVar6 = iVar6 + 1;
                (**(code **)(*(long *)param_1 + 0xd0))(&local_20,param_1);
              } while (iVar6 < local_1c);
            }
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossBlade::performZombossSummonAction() */

undefined8 __thiscall ZombieZombossBlade::performZombossSummonAction(ZombieZombossBlade *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 0x8ec);
  *(undefined4 *)(this + 0x8e4) = 2;
  if (iVar1 == 0) {
    lVar2 = getActiveStage(this);
    iVar1 = *(int *)(lVar2 + 0x78);
    lVar2 = getActiveStage(this);
    iVar1 = RandRangeInt(iVar1,*(int *)(lVar2 + 0x7c));
    *(int *)(this + 0x8ec) = iVar1;
  }
  if (0 < iVar1) {
    Zombie::setZombieState((Zombie *)this,0x26,0);
    return 1;
  }
  return 0;
}


/* ZombieZombossBlade::performZombossFlyAttackAction() */

undefined8 __thiscall ZombieZombossBlade::performZombossFlyAttackAction(ZombieZombossBlade *this)

{
  int iVar1;
  long lVar2;
  
  *(undefined4 *)(this + 0x8e4) = 4;
  lVar2 = getActiveStage(this);
  iVar1 = *(int *)(lVar2 + 0x9c);
  lVar2 = getActiveStage(this);
  iVar1 = RandRangeInt(iVar1,*(int *)(lVar2 + 0xa0));
  *(int *)(this + 0x908) = iVar1;
  if (0 < iVar1) {
    Zombie::setZombieState((Zombie *)this,0x2f,0);
    return 1;
  }
  return 0;
}


/* ZombieZombossBlade::tryPerformZombossRandomAction(EZombossBladeRandomAction) */

undefined8 __thiscall
ZombieZombossBlade::tryPerformZombossRandomAction(ZombieZombossBlade *this,int param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = getActiveStage(this);
  lVar2 = FUN_046f9e88(*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  if ((lVar2 != 1) && (*(int *)(this + 0x8e8) == param_2)) {
    return 0;
  }
  if (param_2 == 1) {
    cVar1 = tryDashAction(this);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    Zombie::setZombieState((Zombie *)this,0x2a,0);
  }
  *(int *)(this + 0x8e8) = param_2;
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_Dash(ZombieState) */

void ZombieZombossBlade::onEnterState_Dash(Zombie *param_1)

{
  ZombieAnimRig *this;
  long lVar1;
  ZombieHydraHeadAnimRig *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  lVar1 = getActiveStage((ZombieZombossBlade *)param_1);
  ZombieAnimRig::SetAnimRateModifier(this,*(float *)(lVar1 + 0x84));
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_ZombossBlade::PlayDashForward((ZombieAnimRig_ZombossBlade *)this_00);
  std::string::string(asStack_10,"Play_Boss_Blade_Dash");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossBlade::onExitState_Dash(ZombieState) */

void ZombieZombossBlade::onExitState_Dash(Zombie *param_1)

{
  ZombieAnimRig *this;
  long lVar1;
  
  this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
  lVar1 = getActiveStage((ZombieZombossBlade *)param_1);
  ZombieAnimRig::SetAnimRateModifier(this,*(float *)(lVar1 + 8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_FlyAttackWarning(ZombieState) */

void ZombieZombossBlade::onEnterState_FlyAttackWarning(ZombieZombossBlade *param_1)

{
  undefined4 uVar1;
  long lVar2;
  Board *pBVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  lVar2 = getActiveStage(param_1);
  fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(lVar2 + 0x94));
  *(float *)(param_1 + 0x904) = fVar5 + fVar4;
  uVar1 = RandRangeInt(0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1);
  *(undefined4 *)(param_1 + 0x8fc) = uVar1;
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[ZOMBOSS_BLADE_FLYATTACK_WARNING]",auStack_18);
  Board::DisplayAdviceAgain(pBVar3,auStack_10,0x11,0);
  FUN_05476c50(auStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::StaticClassInit() */

void ZombieZombossBlade::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  StateMachineTableBuilder *this_00;
  RtClass *pRVar2;
  StateMachineTable *pSVar3;
  code *pcVar4;
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
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if (this != (CRefSymbolDb *)0x0) {
    plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this);
    if (plVar1 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar1 + 0x18);
      std::string::string(asStack_150,"ZombieZombossBlade");
      (*pcVar4)(plVar1,asStack_150,FUN_046fe9c4,0x918,0);
      std::string::~string(asStack_150);
      nop();
    }
  }
  this_00 = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance()
  ;
  pRVar2 = (RtClass *)StaticGetClass();
  pSVar3 = StateMachineTableBuilder::RegisterClass<ZombieState>(this_00,pRVar2);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_TakeShield");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_Shielding");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb60);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_Dash");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb78);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_DashAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb90);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_Chop");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba8);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_PrepareBladeKee");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_TakeBladeKee");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd8);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbe0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_ChangeLane");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbe8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbf0);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbf8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_HangBeforeLanding");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2d,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc00);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc08);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_Land");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2e,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc20);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_FlyOutsideScreen");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc38);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_FlyAttackWarning");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x30,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc50);
  Sexy::Delegate0::Delegate0<ZombieZombossBlade,void(ZombieZombossBlade::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossBlade,void(ZombieZombossBlade::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossBlade_FlyAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x31,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_046fde54(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossBlade::StaticGetClass() */

long * ZombieZombossBlade::StaticGetClass(void)

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
  uVar2 = Zomboss::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossBlade::GetClass() const */

long * ZombieZombossBlade::GetClass(void)

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
  uVar2 = Zomboss::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossBlade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::performZombossRandomAction() */

void __thiscall ZombieZombossBlade::performZombossRandomAction(ZombieZombossBlade *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  uVar7 = 0;
  *(undefined4 *)(this + 0x8e4) = 3;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  while( true ) {
    lVar3 = getActiveStage(this);
    uVar4 = FUN_046f9e88(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
    if (uVar4 <= uVar7) break;
    lVar3 = getActiveStage(this);
    piVar5 = (int *)FUN_046f9eb0(*(undefined8 *)(lVar3 + 0x38),uVar7);
    if (0 < *piVar5) {
      lVar3 = getActiveStage(this);
      lVar3 = FUN_046f9eb0(*(undefined8 *)(lVar3 + 0x38),uVar7);
      uVar2 = *(undefined4 *)(lVar3 + 4);
      lVar3 = getActiveStage(this);
      puVar6 = (undefined4 *)FUN_046f9eb0(*(undefined8 *)(lVar3 + 0x38),uVar7);
      ProbabilitySet<EZombossBladeRandomAction>::AddItem
                ((ProbabilitySet<EZombossBladeRandomAction> *)aPStack_38,uVar2,*puVar6);
    }
    uVar7 = uVar7 + 1;
  }
  do {
    lVar3 = ProbabilitySet<EZombossBladeRandomAction>::GetSize
                      ((ProbabilitySet<EZombossBladeRandomAction> *)aPStack_38);
    if (lVar3 == 0) {
      uVar8 = 0;
LAB_04700014:
      ProbabilitySet<EZombossBladeRandomAction>::~ProbabilitySet
                ((ProbabilitySet<EZombossBladeRandomAction> *)aPStack_38);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    uVar2 = ProbabilitySet<EZombossBladeRandomAction>::PickItem
                      ((ProbabilitySet<EZombossBladeRandomAction> *)aPStack_38);
    cVar1 = tryPerformZombossRandomAction(this,uVar2);
    if (cVar1 != '\0') {
      uVar8 = 1;
      goto LAB_04700014;
    }
    ProbabilitySet<EZombossBladeRandomAction>::RemoveItem
              ((ProbabilitySet<EZombossBladeRandomAction> *)aPStack_38,uVar2);
  } while( true );
}


/* ZombieZombossBlade::performZombossAction() */

void __thiscall ZombieZombossBlade::performZombossAction(ZombieZombossBlade *this)

{
  char cVar1;
  
  do {
    switch(*(undefined4 *)(this + 0x8e4)) {
    case 0:
    case 4:
      cVar1 = performZombossTakeShieldAction(this);
      break;
    default:
LAB_0470007c:
      cVar1 = performZombossSummonAction(this);
      break;
    case 2:
      if (0 < *(int *)(this + 0x8ec)) goto LAB_0470007c;
      cVar1 = performZombossRandomAction(this);
      break;
    case 3:
      cVar1 = performZombossFlyAttackAction(this);
    }
    if (cVar1 != '\0') {
      return;
    }
  } while( true );
}


/* ZombieZombossBlade::onUpdate() */

void __thiscall ZombieZombossBlade::onUpdate(ZombieZombossBlade *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  PopAnimRig *this_00;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  Zomboss::onUpdate((Zomboss *)this);
  cVar1 = canCoolDownIdleTime(this);
  if (cVar1 != '\0') {
    fVar5 = (float)PVZ_Dt();
    *(float *)(this + 0x8e0) = *(float *)(this + 0x8e0) - fVar5;
  }
  cVar1 = canPerformAction(this);
  if ((cVar1 == '\0') || (0.0 < *(float *)(this + 0x8e0))) {
    cVar1 = Zombie::isInState((Zombie *)this,0x30);
  }
  else {
    performZombossAction(this);
    lVar3 = getActiveStage(this);
    uVar4 = ValueRange::GetRandomValue((ValueRange *)(lVar3 + 0xc));
    *(undefined4 *)(this + 0x8e0) = uVar4;
    cVar1 = Zombie::isInState((Zombie *)this,0x30);
  }
  if (cVar1 != '\0') {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x910));
    if (bVar2) {
      this_00 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x910));
      fVar5 = (float)PVZ_T();
      fVar6 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar5,fVar6);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::findPositionToLand() */

void __thiscall ZombieZombossBlade::findPositionToLand(ZombieZombossBlade *this)

{
  int iVar1;
  int iVar2;
  Board *this_00;
  long lVar3;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  vector<int,std::allocator<int>> avStack_50 [24];
  undefined4 local_38 [12];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = 0;
  std::vector<int,std::allocator<int>>::vector
            ((ulong)avStack_50,(int *)(long)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),
             (allocator *)local_38);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = *(int *)(this_00 + 0xfc);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar1 = Board::GetPlantsCostInRow(this_00,iVar2);
      if (0 < iVar1) {
        iVar1 = Board::GetPlantsCostInRow(*(Board **)(gLawnApp + 0x9f0),iVar2);
        ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,iVar2,iVar1);
      }
      iVar2 = iVar2 + 1;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar1 = *(int *)(this_00 + 0xfc);
    } while (iVar2 < iVar1);
  }
  lVar3 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)local_38);
  if (lVar3 == 0) {
    iVar1 = (**(code **)(*(long *)this + 0x300))(this,iVar1);
  }
  else {
    iVar1 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
  }
  if (iVar1 < 1) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  (**(code **)(*(long *)this + 0xd0))(&local_60,this);
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 - (int)local_60);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_70,(float)iVar2,(float)iVar1,0.0);
  local_60 = local_70;
  local_58 = local_68;
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
  std::vector<int,std::allocator<int>>::~vector(avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_60,local_60._4_4_,local_58);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossBlade::onEnterState_Land(ZombieState) */

void ZombieZombossBlade::onEnterState_Land
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ZombieZombossBlade *param_4)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  pcVar2 = *(code **)(*(long *)param_4 + 0x78);
  local_8 = ___stack_chk_guard;
  local_60 = findPositionToLand(param_4);
  local_5c = param_2;
  local_58 = param_3;
  (*pcVar2)(param_4,(string *)&local_60);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)&local_60,"onLandAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             (string *)&local_60);
  ZombieAnimRig_ZombossExplosive::PlayJumpLand((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

