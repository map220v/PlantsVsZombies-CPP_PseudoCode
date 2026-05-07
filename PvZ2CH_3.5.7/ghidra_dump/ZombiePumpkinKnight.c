// Class: ZombiePumpkinKnight


/* ZombiePumpkinKnight::canAttack() */

bool __thiscall ZombiePumpkinKnight::canAttack(ZombiePumpkinKnight *this)

{
  return *(int *)(this + 0x804) != 0;
}


/* ZombiePumpkinKnight::onBullWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombiePumpkinKnight::onBullWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  param_1[0x808] = (string)0x1;
  return;
}


/* ZombiePumpkinKnight::onSummonAnimDone() */

void __thiscall ZombiePumpkinKnight::onSummonAnimDone(ZombiePumpkinKnight *this)

{
  Zombie::setZombieState((Zombie *)this,1,0);
  return;
}


/* ZombiePumpkinKnight::onBullSummonAnimDone() */

void __thiscall ZombiePumpkinKnight::onBullSummonAnimDone(ZombiePumpkinKnight *this)

{
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* ZombiePumpkinKnight::onBullPawingAnimationDone() */

void __thiscall ZombiePumpkinKnight::onBullPawingAnimationDone(ZombiePumpkinKnight *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x25);
      return;
    }
  }
  return;
}


/* ZombiePumpkinKnight::onRebirthAnimationDone() */

void __thiscall ZombiePumpkinKnight::onRebirthAnimationDone(ZombiePumpkinKnight *this)

{
  Zombie::ClearConditions((Zombie *)this);
  Zombie::SetIgnoresAllDamage((Zombie *)this,false);
  Zombie::SetIsControlled((Zombie *)this,false);
  Zombie::SetIgnoresCollisions((Zombie *)this,false);
  Zombie::SetIsTargetable((Zombie *)this,true);
  Zombie::ApplyCondition((Zombie *)0x41700000,0,this,0x5a,1);
  Zombie::setZombieState((Zombie *)this,0x22,0);
  return;
}


/* ZombiePumpkinKnight::onTranslateEffectDone(StandaloneEffect*) */

void ZombiePumpkinKnight::onTranslateEffectDone(StandaloneEffect *param_1)

{
  (**(code **)(*(long *)param_1 + 0x80))(param_1,0);
  Zombie::EndCondition((Zombie *)param_1,0x5a);
  Zombie::setZombieState((Zombie *)param_1,0x22,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onAttackAnimStopped(std::string const&) */

void __thiscall ZombiePumpkinKnight::onAttackAnimStopped(ZombiePumpkinKnight *this,string *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Zombie::GetAnimRig((Zombie *)this);
  (**(code **)(*plVar4 + 0x1e8))(asStack_10);
  cVar2 = std::operator==(param_1,asStack_10);
  if ((cVar2 == '\0') || (cVar2 = Zombie::isInState((Zombie *)this,3), cVar2 == '\0')) {
    std::string::~string(asStack_10);
  }
  else {
    std::string::~string(asStack_10);
    iVar1 = *(int *)(this + 0x828);
    *(int *)(this + 0x828) = iVar1 + 1;
    if (iVar1 + 1 < 3) {
      uVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
      Zombie::onEnterState_Attack(this,uVar3);
    }
    else {
      Zombie::setZombieState((Zombie *)this,0x22,0);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::onExitState_Bull_Running(ZombieState) */

void ZombiePumpkinKnight::onExitState_Bull_Running(Zombie *param_1)

{
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(param_1 + 0x810));
  Zombie::SetIsUsingAnimTranslation(param_1,false);
  return;
}


/* ZombiePumpkinKnight::onExitState_Rebirth(ZombieState) */

void ZombiePumpkinKnight::onExitState_Rebirth(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  *(undefined4 *)(param_1 + 0x804) = 1;
  FUN_04f25d4c(pZVar1 + 0x240);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playRetreatLoopAnimation() */

void __thiscall ZombiePumpkinKnight::playRetreatLoopAnimation(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f259a4(asStack_10);
  ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onRetreatStartAnimationDone() */

void ZombiePumpkinKnight::onRetreatStartAnimationDone(void)

{
  ZombieHydraHeadAnimRig *pZVar1;
  Zombie *in_x0;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  FUN_04f259a4(asStack_10);
  ZombieAnimRig_PumpkinKnightGhost::playLoopAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_10);
  std::string::~string(asStack_10);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::ZombiePumpkinKnight() */

void __thiscall ZombiePumpkinKnight::ZombiePumpkinKnight(ZombiePumpkinKnight *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06a11280;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinKnight_06a11d58;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x804) = 0;
  this[0x808] = (ZombiePumpkinKnight)0x0;
  *(undefined4 *)(this + 0x800) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x810));
  *(undefined4 *)(this + 0x828) = 0;
  return;
}


/* ZombiePumpkinKnight::StaticNew() */

ZombiePumpkinKnight * ZombiePumpkinKnight::StaticNew(void)

{
  ZombiePumpkinKnight *this;
  
  this = ::operator_new(0x830);
  ZombiePumpkinKnight(this);
  return this;
}


/* ZombiePumpkinKnight::checkForPumpkinGhostSummon() */

void __thiscall ZombiePumpkinKnight::checkForPumpkinGhostSummon(ZombiePumpkinKnight *this)

{
  char cVar1;
  ZombiePumpkinKnightProps *pZVar2;
  int iVar3;
  float fVar4;
  
  cVar1 = RealObject::IsOnTeam(this,1);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(this + 0x804);
    if (iVar3 == 0) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x800) < fVar4) {
        fVar4 = (float)PVZ_T();
        pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
        *(float *)(this + 0x800) = fVar4 + *(float *)(pZVar2 + 0x210);
        Zombie::setZombieState((Zombie *)this,0x1f,0);
        return;
      }
      iVar3 = *(int *)(this + 0x804);
    }
    if ((iVar3 == 1) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x800) < fVar4)) {
      fVar4 = (float)PVZ_T();
      pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
      *(float *)(this + 0x800) = fVar4 + *(float *)(pZVar2 + 0x210);
      Zombie::setZombieState((Zombie *)this,0x22,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::updateState_Retreat() */

void __thiscall ZombiePumpkinKnight::updateState_Retreat(ZombiePumpkinKnight *this)

{
  char cVar1;
  int iVar2;
  ZombiePumpkinKnightProps *pZVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  string asStack_20 [8];
  undefined8 local_18;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
  Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  iVar2 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if ((float)iVar2 < *pfVar4) {
    Zombie::setZombieState((Zombie *)this,0x21,0);
  }
  else {
    PopAnimRig::CalcPlayingAnimLabelName();
    FUN_04f259a4((string *)&local_18);
    cVar1 = std::operator==(asStack_20,(string *)&local_18);
    std::string::~string((string *)&local_18);
    std::string::~string(asStack_20);
    if (cVar1 != '\0') {
      local_18 = *(undefined8 *)pfVar4;
      local_10 = pfVar4[2];
      fVar6 = *(float *)(pZVar3 + 0x224);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar5 = (float)PVZ_Dt();
      local_18 = CONCAT44(local_18._4_4_,(float)local_18 + (float)iVar2 * fVar5 * fVar6);
      (**(code **)(*(long *)this + 0x78))(this,(string *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playRunningAnimation() */

void __thiscall ZombiePumpkinKnight::playRunningAnimation(ZombiePumpkinKnight *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this_00;
  ZombiePumpkinKnightProps *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  Zombie::SetIsUsingAnimTranslation((Zombie *)this,true);
  FUN_04f25974(this_00 + 0x244,1);
  pcVar3 = *(code **)(*(long *)this_00 + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity((ZombieAnimRig *)this_00,*(float *)(pZVar2 + 0x244));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Bull_Running(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Bull_Running(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  ZombiePumpkinKnightProps *pZVar2;
  code *pcVar3;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  FUN_04f25974(this + 0x244,1);
  pcVar3 = *(code **)(*(long *)this + 0x118);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity((ZombieAnimRig *)this,*(float *)(pZVar2 + 0x244));
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::getRunningAttackRect() */

void ZombiePumpkinKnight::getRunningAttackRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombiePumpkinKnightProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  pZVar3 = Zombie::GetProps<ZombiePumpkinKnightProps>(in_x0);
  fVar4 = (float)Zombie::GetZombieScale(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x230));
  fVar8 = *(float *)(in_x0 + 0x1c);
  uVar5 = *(undefined4 *)(in_x0 + 0x18);
  uVar9 = *(undefined4 *)(in_x0 + 0x20);
  *(int *)(in_x8 + 0xc) = (int)(fVar4 * (float)*(int *)(in_x8 + 0xc));
  *(int *)(in_x8 + 8) = (int)(fVar4 * (float)*(int *)(in_x8 + 8));
  fVar6 = (float)FUN_04f25d58(uVar5,fVar8,uVar9);
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar7 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar6 - (float)(iVar1 / 2)) + (float)iVar2 * fVar4 * fVar7);
  *(int *)(in_x8 + 4) =
       (int)((fVar8 - (float)*(int *)(in_x8 + 0xc)) + (float)*(int *)(in_x8 + 4) * fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playSummonAnim() */

void __thiscall ZombiePumpkinKnight::playSummonAnim(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25a0c(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Summon(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Summon(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_04f25a0c(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playRetreatStartAnimation() */

void __thiscall ZombiePumpkinKnight::playRetreatStartAnimation(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25a74(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRetreatStartAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::onEnterState_Retreat(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Retreat(Zombie *param_1)

{
  ZombiePumpkinKnightProps *pZVar1;
  float fVar2;
  float fVar3;
  
  pZVar1 = Zombie::GetProps<ZombiePumpkinKnightProps>(param_1);
  fVar3 = *(float *)(pZVar1 + 0x228);
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier(param_1);
  FUN_04f25968(fVar2 * fVar3,param_1 + 0x284);
  fVar2 = (float)FUN_04f25970(*(undefined4 *)(param_1 + 0x284));
  Zombie::SetHitpoints(param_1,fVar2);
  Zombie::SetIgnoresAllDamage(param_1,true);
  Zombie::SetIsControlled(param_1,true);
  Zombie::SetIgnoresCollisions(param_1,true);
  Zombie::SetIsTargetable(param_1,false);
  playRetreatStartAnimation((ZombiePumpkinKnight *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playRebirthAnimation() */

void __thiscall ZombiePumpkinKnight::playRebirthAnimation(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25adc(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRebirthAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Rebirth(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Rebirth(ZombiePumpkinKnight *param_1)

{
  code *pcVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar1 = *(code **)(*(long *)param_1 + 0x9d0);
  std::string::string(asStack_10,"POPANIM_ZOMBIE_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_CAVALRY");
  (*pcVar1)(param_1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  playRebirthAnimation(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playBullSummonAnim() */

void __thiscall ZombiePumpkinKnight::playBullSummonAnim(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25b44(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Bull_Summon(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Bull_Summon(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_04f25b44(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playBullPawingAnimation() */

void __thiscall ZombiePumpkinKnight::playBullPawingAnimation(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25bac(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullPawingAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Start");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Bull_Pawing(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Bull_Pawing(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_04f25bac(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullPawingAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Start");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playTranslateStartAnimation() */

void __thiscall ZombiePumpkinKnight::playTranslateStartAnimation(ZombiePumpkinKnight *this)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_04f25c14(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTranslateStartAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Bull_Translate(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Bull_Translate(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  FUN_04f25c14(asStack_70);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onTranslateStartAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_PumpkinKnightGhost::playSingleAnimation
            ((ZombieAnimRig_PumpkinKnightGhost *)pZVar1,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::playBullEnteringAnimation() */

void __thiscall ZombiePumpkinKnight::playBullEnteringAnimation(ZombiePumpkinKnight *this)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombieAnimRig *this_00;
  ZombiePumpkinKnightProps *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  Zombie::SetIsUsingAnimTranslation((Zombie *)this,true);
  FUN_04f25974(pZVar2 + 0x244,0);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
    pZVar3 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar3 + 0x240));
  }
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Ready");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onEnterState_Bull_Entering(ZombieState) */

void ZombiePumpkinKnight::onEnterState_Bull_Entering(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  ZombieAnimRig *this;
  ZombiePumpkinKnightProps *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  FUN_04f25974(pZVar2 + 0x244,0);
  pcVar4 = *(code **)(*(long *)pZVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onBullWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    this = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
    pZVar3 = Zombie::GetProps<ZombiePumpkinKnightProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar3 + 0x240));
  }
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Ready");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::addTranslateEffect() */

void __thiscall ZombiePumpkinKnight::addTranslateEffect(ZombiePumpkinKnight *this)

{
  int iVar1;
  Effect_PopAnim *pEVar2;
  PopAnim *pPVar3;
  SexyVector3 *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  RtMixedPtr aRStack_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  string asStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_70,"POPANIM_ZOMBIE_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_CAVALRY");
  GetPAMByName(asStack_70);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  std::string::~string(asStack_70);
  nop();
  Effect_PopAnim::SetCentered(pEVar2,true);
  this_00 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  uVar4 = 0xc1a00000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_70,0.0,-20.0,0.0);
  local_60 = Sexy::SexyVector3::operator+(this_00,(SexyVector3 *)asStack_70);
  local_5c = uVar4;
  local_58 = uVar5;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)&local_60,-1);
  std::string::string((string *)&local_60,"teleport disappear");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0);
  std::string::~string((string *)&local_60);
  nop();
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_70,"POPANIM_ZOMBIE_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_CAVALRY");
  GetPAMByName(asStack_70);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  std::string::~string(asStack_70);
  nop();
  Effect_PopAnim::SetCentered(pEVar2,true);
  local_80 = *(undefined8 *)this_00;
  local_78 = *(undefined4 *)(this_00 + 8);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
  uVar4 = 0xc1a00000;
  uVar5 = 0;
  local_80 = CONCAT44(local_80._4_4_,(float)iVar1);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_70,0.0,-20.0,0.0);
  local_60 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_80,(SexyVector3 *)asStack_70);
  local_5c = uVar4;
  local_58 = uVar5;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)&local_60,-1);
  std::string::string((string *)&local_60,"teleport appear");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60,0);
  std::string::~string((string *)&local_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_88);
  std::string::string((string *)&local_60,"onTranslateEffectDone");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            (aRStack_50,asStack_70,(RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)pEVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string((string *)&local_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onTranslateStartAnimationDone() */

void __thiscall ZombiePumpkinKnight::onTranslateStartAnimationDone(ZombiePumpkinKnight *this)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  addTranslateEffect(this);
  (**(code **)(*(long *)this + 0x80))(this,1);
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *puVar2;
  local_10 = *(undefined4 *)(puVar2 + 1);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(8);
  local_18 = CONCAT44(local_18._4_4_,(float)iVar1);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::~ZombiePumpkinKnight() */

void __thiscall ZombiePumpkinKnight::~ZombiePumpkinKnight(ZombiePumpkinKnight *this)

{
  *(undefined ***)this = &PTR_GetClass_06a11280;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePumpkinKnight_06a11d58;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x810));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombiePumpkinKnight::~ZombiePumpkinKnight() */

void __thiscall ZombiePumpkinKnight::~ZombiePumpkinKnight(ZombiePumpkinKnight *this)

{
  ~ZombiePumpkinKnight(this + -0x10);
  return;
}


/* ZombiePumpkinKnight::~ZombiePumpkinKnight() */

void __thiscall ZombiePumpkinKnight::~ZombiePumpkinKnight(ZombiePumpkinKnight *this)

{
  ~ZombiePumpkinKnight(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePumpkinKnight::~ZombiePumpkinKnight() */

void __thiscall ZombiePumpkinKnight::~ZombiePumpkinKnight(ZombiePumpkinKnight *this)

{
  ~ZombiePumpkinKnight(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::updateState_Bull_Entering() */

void __thiscall ZombiePumpkinKnight::updateState_Bull_Entering(ZombiePumpkinKnight *this)

{
  char cVar1;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x938))(avStack_20);
  cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(avStack_20);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x828) = 0;
    Zombie::setZombieState((Zombie *)this,3);
  }
  else {
    Zombie::setZombieState((Zombie *)this,0x24,0);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::addFireGroundEffect() */

void __thiscall ZombiePumpkinKnight::addFireGroundEffect(ZombiePumpkinKnight *this)

{
  int iVar1;
  ZombiePumpkinKnightProps *pZVar2;
  Effect_PopAnim *this_00;
  PopAnim *pPVar3;
  SexyVector3 *this_01;
  EffectPumpkinKnightBullRunning *this_02;
  undefined4 uVar4;
  undefined4 uVar5;
  string asStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBIE_UNCHARTED_PUMPKIN_KNIGHT_FLOOR_FIRE");
  GetPAMByName(asStack_30);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
  uVar4 = 0xc1f00000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,0.0,-30.0,0.0);
  local_20 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)asStack_30);
  local_1c = uVar4;
  local_18 = uVar5;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar1 = Board::MakeGroundRenderOrder(iVar1,2);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_20,iVar1);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)&local_20);
  std::string::string(asStack_30,"animation");
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"animation2");
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"animation3");
  AnimationSequence::AddSingleAnimation((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)&local_20);
  this_02 = Board::AddEffect<EffectPumpkinKnightBullRunning>(*(Board **)(gLawnApp + 0x9f0));
  BoardEntity::CalcGridPosition();
  EffectPumpkinKnightBullRunning::setGridPoint(this_02,asStack_30);
  EffectPumpkinKnightBullRunning::setAliveDruation(this_02,*(float *)(pZVar2 + 0x248));
  AnimationSequence::~AnimationSequence((AnimationSequence *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::checkAndFireGround() */

void __thiscall ZombiePumpkinKnight::checkAndFireGround(ZombiePumpkinKnight *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x810);
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                       (uVar2,uVar3,aPStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    addFireGroundEffect(this);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,aPStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::updateState_Bull_Running() */

void __thiscall ZombiePumpkinKnight::updateState_Bull_Running(ZombiePumpkinKnight *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Plant *pPVar5;
  code *pcVar6;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  checkAndFireGround(this);
  getRunningAttackRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,1,auStack_90,uVar2,uVar3);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
LAB_04f28c20:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    pPVar5 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar4);
    if (pPVar5 != (Plant *)0x0) {
      pcVar6 = *(code **)(*(long *)pPVar5 + 0x120);
      Sexy::Point::Point(aPStack_a0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_98,local_94,aDStack_68,2,this,aPStack_a0,0);
      (*pcVar6)(pPVar5,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      Zombie::setZombieState((Zombie *)this,0x26,0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      goto LAB_04f28c20;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::summonPumpkinGhostAtPosition(Sexy::SexyVector3) */

void ZombiePumpkinKnight::summonPumpkinGhostAtPosition(Zombie *param_1)

{
  undefined4 uVar1;
  ZombiePumpkinKnightProps *pZVar2;
  string *psVar3;
  RtObject *this;
  ZombiePumpkinKnightGhost *pZVar4;
  long *plVar5;
  code *pcVar6;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombiePumpkinKnightProps>(param_1);
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_18,"pumpkin_knight_ghost");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  this = (RtObject *)(*pcVar6)(plVar5,aRStack_10,0xfffffffb,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  pZVar4 = Sexy::RtObject::Cast<ZombiePumpkinKnightGhost>(this);
  uVar1 = FUN_04f25964(*(undefined4 *)(param_1 + 0x50));
  (**(code **)(*(long *)pZVar4 + 0x198))(pZVar4,uVar1);
  (**(code **)(*(long *)pZVar4 + 0x9d8))(pZVar4);
  BoardEntity::PlaceOnBoard((SexyVector3 *)pZVar4);
  FUN_04f2597c(*(undefined4 *)(pZVar2 + 0x218),pZVar4 + 0x814);
  FUN_04f25984(*(undefined4 *)(pZVar2 + 0x21c),pZVar4 + 0x818);
  FUN_04f2598c(*(undefined4 *)(pZVar2 + 0x220),pZVar4 + 0x81c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::summonPumpkinGhosts() */

void __thiscall ZombiePumpkinKnight::summonPumpkinGhosts(ZombiePumpkinKnight *this)

{
  SexyVector3 *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x804) == 1) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-110.0,20.0,0.0);
    Sexy::SexyVector3::operator+(pSVar1,(SexyVector3 *)&local_18);
    summonPumpkinGhostAtPosition(this);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,-60.0,-60.0,0.0);
    Sexy::SexyVector3::operator+(pSVar1,(SexyVector3 *)&local_18);
    summonPumpkinGhostAtPosition(this);
    uVar2 = 0x428c0000;
    uVar3 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,70.0,0.0);
    local_28 = Sexy::SexyVector3::operator+(pSVar1,(SexyVector3 *)&local_18);
    local_24 = uVar2;
    local_20 = uVar3;
    summonPumpkinGhostAtPosition(this);
  }
  else if (*(int *)(this + 0x804) == 0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    uVar2 = 0;
    uVar3 = 0;
    EATextSquish::Vec3::Vec3((Vec3 *)&local_28,-64.0,0.0,0.0);
    local_18 = Sexy::SexyVector3::operator+(pSVar1,(SexyVector3 *)&local_28);
    local_14 = uVar2;
    local_10 = uVar3;
    summonPumpkinGhostAtPosition(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::StaticClassInit() */

void ZombiePumpkinKnight::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombiePumpkinKnight");
      (*pcVar4)(plVar1,asStack_150,FUN_04f29770,0x830,0);
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
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa08);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Retreat");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Rebirth");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Bull_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Bull_Entering");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Bull_Pawing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Bull_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombiePumpkinKnight,void(ZombiePumpkinKnight::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_PUMPKIN_KNIGHT_Bull_Translate");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04f28fc4(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombiePumpkinKnight::StaticGetClass() */

long * ZombiePumpkinKnight::StaticGetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinKnight::GetClass() const */

long * ZombiePumpkinKnight::GetClass(void)

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
  uVar2 = Zombie::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePumpkinKnight",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePumpkinKnight::onPlaceOnBoard() */

void __thiscall ZombiePumpkinKnight::onPlaceOnBoard(ZombiePumpkinKnight *this)

{
  ZombiePumpkinKnightProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombiePumpkinKnightProps>((Zombie *)this);
  *(float *)(this + 0x800) = fVar2 + *(float *)(pZVar1 + 0x210);
  Zombie::onPlaceOnBoard((Zombie *)this);
  return;
}


/* ZombiePumpkinKnight::chooseDeathState(DamageInfo const&) */

void __thiscall ZombiePumpkinKnight::chooseDeathState(ZombiePumpkinKnight *this,DamageInfo *param_1)

{
  if (*(int *)(this + 0x804) != 0) {
    Zombie::chooseDeathState((Zombie *)this,param_1);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::CalcZombieAttackRect() */

void ZombiePumpkinKnight::CalcZombieAttackRect(void)

{
  long lVar1;
  long in_x0;
  undefined8 *in_x8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = ___stack_chk_guard;
  Zombie::CalcZombieAttackRect();
  if (*(int *)(in_x0 + 0x804) == 1) {
    getRunningAttackRect();
    *in_x8 = local_18;
    in_x8[1] = uStack_10;
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePumpkinKnight::updateState_Walk() */

void __thiscall ZombiePumpkinKnight::updateState_Walk(ZombiePumpkinKnight *this)

{
  checkForPumpkinGhostSummon(this);
  Zombie::updateState_Walk((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePumpkinKnight::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombiePumpkinKnight::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  FUN_04f25c7c(asStack_10);
  cVar1 = std::operator==(param_4,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 == '\0') {
    FUN_04f25ce4(asStack_10);
    cVar1 = std::operator==(param_4,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') goto LAB_04f2a4d4;
  }
  summonPumpkinGhosts((ZombiePumpkinKnight *)param_1);
LAB_04f2a4d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

