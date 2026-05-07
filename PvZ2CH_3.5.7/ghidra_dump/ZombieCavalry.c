// Class: ZombieCavalry


/* ZombieCavalry::IsPawing() */

void __thiscall ZombieCavalry::IsPawing(ZombieCavalry *this)

{
  Zombie::isInState((Zombie *)this,0x21);
  return;
}


/* ZombieCavalry::onEndCondition(ZombieConditions) */

void __thiscall ZombieCavalry::onEndCondition(ZombieCavalry *this,int param_2)

{
  char cVar1;
  
  if ((param_2 == 2) && (cVar1 = (**(code **)(*(long *)this + 0x328))(), cVar1 == '\0')) {
    (**(code **)(*(long *)this + 0x330))(this);
  }
  return;
}


/* ZombieCavalry::canAttack() */

ZombieCavalry __thiscall ZombieCavalry::canAttack(ZombieCavalry *this)

{
  return this[0x80c];
}


/* ZombieCavalry::onWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombieCavalry::onWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  param_1[0x801] = (string)0x1;
  return;
}


/* ZombieCavalry::onPawingAnimDone(std::string const&) */

void ZombieCavalry::onPawingAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x21);
      return;
    }
  }
  return;
}


/* ZombieCavalry::~ZombieCavalry() */

void __thiscall ZombieCavalry::~ZombieCavalry(ZombieCavalry *this)

{
  *(undefined ***)this = &PTR_GetClass_06897fe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCavalry_06898a60;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieCavalry::~ZombieCavalry() */

void __thiscall ZombieCavalry::~ZombieCavalry(ZombieCavalry *this)

{
  ~ZombieCavalry(this + -0x10);
  return;
}


/* ZombieCavalry::~ZombieCavalry() */

void __thiscall ZombieCavalry::~ZombieCavalry(ZombieCavalry *this)

{
  ~ZombieCavalry(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieCavalry::~ZombieCavalry() */

void __thiscall ZombieCavalry::~ZombieCavalry(ZombieCavalry *this)

{
  ~ZombieCavalry(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::GetStunnedEffectOffset() const */

void __thiscall ZombieCavalry::GetStunnedEffectOffset(ZombieCavalry *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x80c] == (ZombieCavalry)0x0) {
    fVar4 = 0.0;
    fVar5 = 35.0;
  }
  else {
    fVar5 = 75.0;
    fVar4 = -15.0;
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,fVar4,0.0,fVar5);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::getElectrocutePAMName() const */

void __thiscall ZombieCavalry::getElectrocutePAMName(ZombieCavalry *this)

{
  char cVar1;
  string *extraout_x1;
  string *in_x8;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_CAVALRY_SHOCK");
  nop();
  Zombie::GetElectrocuteColor();
  cVar1 = FUN_0547419c(aSStack_18);
  if (cVar1 == '\0') {
    FUN_05475ad8();
    Sexy::Upper(aSStack_18,extraout_x1);
    thunk_FUN_054757c0();
    std::string::~string(asStack_10);
  }
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieCavalry::ZombieCavalry() */

void __thiscall ZombieCavalry::ZombieCavalry(ZombieCavalry *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_06897fe0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieCavalry_06898a60;
  return;
}


/* ZombieCavalry::StaticNew() */

ZombieCavalry * ZombieCavalry::StaticNew(void)

{
  ZombieCavalry *this;
  
  this = ::operator_new(0x810);
  ZombieCavalry(this);
  return this;
}


/* ZombieCavalry::canPullDown() */

ulong __thiscall ZombieCavalry::canPullDown(ZombieCavalry *this)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = 0;
  if (this[0x80c] != (ZombieCavalry)0x0) {
    bVar1 = Zombie::isInState((Zombie *)this,0x20);
    if (bVar1 == 0) {
      uVar2 = Zombie::isInState((Zombie *)this,0x1f);
      return uVar2;
    }
  }
  return (ulong)bVar1;
}


/* ZombieCavalry::onRearingAnimDone(std::string const&) */

void ZombieCavalry::onRearingAnimDone(string *param_1)

{
  char cVar1;
  ZombieAnimRig *this;
  float fVar2;
  
  Zombie::SetIsUsingAnimTranslation((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    cVar1 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar1 == '\0') {
      if (*(code **)(*(long *)param_1 + 0x1d8) == Zombie::GetWalkSpeed) {
        fVar2 = (float)Zombie::GetWalkSpeed((Zombie *)param_1);
      }
      else {
        fVar2 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
      }
    }
    else {
      fVar2 = 0.15;
    }
    this = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,fVar2);
    (**(code **)(*(long *)param_1 + 0x260))(param_1);
    return;
  }
  return;
}


/* ZombieCavalry::applyButterGraphicalEffects() */

void __thiscall ZombieCavalry::applyButterGraphicalEffects(ZombieCavalry *this)

{
  ZombieAnimRig *this_00;
  
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  ZombieAnimRig::SetButterVisibility(this_00,(bool)this[0x80c]);
  return;
}


/* ZombieCavalry::CalcZombieAttackRect() */

void ZombieCavalry::CalcZombieAttackRect(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  Zombie *in_x0;
  long lVar4;
  ZombieCavalryProps *pZVar5;
  Insets *in_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  
  Sexy::Insets::Insets(in_x8);
  if (in_x0[0x80c] == (Zombie)0x0) {
    lVar4 = FUN_04677348(*(undefined8 *)(in_x0 + 0x550));
    uVar1 = *(undefined8 *)(lVar4 + 0x88);
    *(undefined8 *)in_x8 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(in_x8 + 8) = uVar1;
  }
  else {
    pZVar5 = Zombie::GetProps<ZombieCavalryProps>(in_x0);
    uVar1 = *(undefined8 *)(pZVar5 + 0x238);
    *(undefined8 *)in_x8 = *(undefined8 *)(pZVar5 + 0x230);
    *(undefined8 *)(in_x8 + 8) = uVar1;
  }
  fVar8 = *(float *)(in_x0 + 0x1c);
  fVar6 = (float)FUN_04677378(*(undefined4 *)(in_x0 + 0x18),fVar8,*(undefined4 *)(in_x0 + 0x20));
  iVar2 = *(int *)(in_x8 + 8);
  iVar3 = *(int *)in_x8;
  fVar7 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar6 - (float)(iVar2 / 2)) + (float)iVar3 * fVar7);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar8) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieCavalry::calcBuckRect() */

void ZombieCavalry::calcBuckRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieCavalryProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieCavalryProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x210));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_04677378(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieCavalry::calcGunRect() */

void ZombieCavalry::calcGunRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieCavalryProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieCavalryProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x220));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_04677378(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onEnterState_Entering(ZombieState) */

void ZombieCavalry::onEnterState_Entering(Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  ZombieAnimRig *this;
  ZombieCavalryProps *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar4)(plVar2,aRStack_50);
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
    pZVar3 = Zombie::GetProps<ZombieCavalryProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar3 + 0x248));
  }
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Ready");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onEnterState_Running(ZombieState) */

void ZombieCavalry::onEnterState_Running(Zombie *param_1)

{
  char cVar1;
  ZombieHydraHeadAnimRig *this;
  long *plVar2;
  RiftThemeCharging *pRVar3;
  ZombieAnimRig *this_00;
  ZombieCavalryProps *pZVar4;
  code *pcVar5;
  Zombie *pZVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_FairyTaleImp::SetRunning((ZombieAnimRig_FairyTaleImp *)this,true);
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar5 = *(code **)(*plVar2 + 0x118);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onWalkAnimContinued");
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aRStack_50,aRStack_60,asStack_58);
  (*pcVar5)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    this_00 = (ZombieAnimRig *)Zombie::GetAnimRig(param_1);
    pZVar4 = Zombie::GetProps<ZombieCavalryProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this_00,*(float *)(pZVar4 + 0x240));
  }
  param_1[0x800] = (Zombie)0x0;
  param_1[0x801] = (Zombie)0x1;
  pRVar3 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar3 != (RiftThemeCharging *)0x0) {
    pZVar6._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar6._0_4_,0,param_1,0x6e,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onEnterState_Attack(ZombieState) */

void ZombieCavalry::onEnterState_Attack(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x130);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRiderAttackAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  (*pcVar2)(pZVar1,aRStack_50);
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
/* ZombieCavalry::onEnterState_Pawing(ZombieState) */

void ZombieCavalry::onEnterState_Pawing(Zombie *param_1)

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
  std::string::string(asStack_58,"onPawingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Cavalry::PlayPawing((ZombieAnimRig_Cavalry *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Start");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onEnterState_Rearing(ZombieState) */

void ZombieCavalry::onEnterState_Rearing(Zombie *param_1)

{
  RiftThemeCharging *pRVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar1 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  if (pRVar1 != (RiftThemeCharging *)0x0) {
    Zombie::EndCondition(param_1,0x6e);
  }
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onRearingAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_Cavalry::PlayRearing((ZombieAnimRig_Cavalry *)pZVar2,aRStack_50);
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
/* ZombieCavalry::updateState_Running() */

void __thiscall ZombieCavalry::updateState_Running(ZombieCavalry *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  RealObject *this_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  calcBuckRect();
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,auStack_30
             ,uVar2,uVar2);
  uVar7 = local_20;
  lVar4 = FUN_04677364(local_20,local_18);
  if (lVar4 != 0) {
    do {
      FUN_04677370(uVar7,uVar6);
      nop();
      iVar3 = (**(code **)(*(long *)this_00 + 0x180))();
      if ((((1 < iVar3) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0')) &&
          (cVar1 = Plant::CanBeTargeted((Plant *)this_00), cVar1 != '\0')) &&
         (cVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00), cVar1 != '\0')) goto LAB_046799cc;
      uVar7 = local_20;
      uVar6 = uVar6 + 1;
      uVar5 = FUN_04677364(local_20,local_18);
    } while (uVar6 < uVar5);
  }
  if (this[0x800] == (ZombieCavalry)0x0) {
    cVar1 = Zombie::HasCondition(this,0x8c);
    if (cVar1 == '\0') goto LAB_046799e4;
  }
  else {
LAB_046799cc:
    this[0x800] = (ZombieCavalry)0x1;
  }
  Zombie::setZombieState((Zombie *)this,0x22,0);
LAB_046799e4:
  this[0x801] = (ZombieCavalry)0x0;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::updateState_Entering() */

void __thiscall ZombieCavalry::updateState_Entering(ZombieCavalry *this)

{
  char cVar1;
  RiftThemeCharging *pRVar2;
  float *pfVar3;
  ZombieCavalryProps *pZVar4;
  float fVar5;
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = RiftUtils::GetThemeByClass<RiftThemeCharging>();
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    pZVar4 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)this);
    fVar5 = *(float *)(pZVar4 + 0x244);
  }
  else {
    fVar5 = *(float *)(this + 0x808);
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (((*pfVar3 <= fVar5) && (this[0x801] != (ZombieCavalry)0x0)) ||
     (pRVar2 != (RiftThemeCharging *)0x0)) {
    (**(code **)(*(long *)this + 0x938))(avStack_20,this);
    cVar1 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_20);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,3);
    }
    else {
      if (this[0x80c] != (ZombieCavalry)0x0) {
        Zombie::setZombieState((Zombie *)this,0x20,0);
        std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
        ~vector(avStack_20);
        goto LAB_04679b04;
      }
      (**(code **)(*(long *)this + 0x260))(this);
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_20);
  }
LAB_04679b04:
  this[0x801] = (ZombieCavalry)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onRiderAttackAnimDone(std::string const&) */

void __thiscall ZombieCavalry::onRiderAttackAnimDone(ZombieCavalry *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  code *pcVar4;
  RtMixedPtr aRStack_80 [8];
  RtId aRStack_78 [8];
  string asStack_70 [8];
  vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("attack",param_1);
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)this,3), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x938))(avStack_68,this);
    cVar2 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(avStack_68);
    if (cVar2 == '\0') {
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      pcVar4 = *(code **)(*(long *)pZVar3 + 0x130);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_80);
      std::string::string(asStack_70,"onRiderAttackAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
                 asStack_70);
      (*pcVar4)(pZVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_70);
      nop();
      Sexy::RtId::~RtId(aRStack_78);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    }
    else {
      cVar2 = Zombie::IsSuspended((Zombie *)this);
      if (cVar2 == '\0') {
        if (this[0x80c] == (ZombieCavalry)0x0) {
          (**(code **)(*(long *)this + 0x260))(this);
        }
        else {
          Zombie::setZombieState((Zombie *)this,0x20);
        }
      }
    }
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
              (avStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::takePullDown() */

void ZombieCavalry::takePullDown(void)

{
  char cVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *this;
  string *psVar3;
  ZombieType *this_00;
  SexyVector3 *extraout_x0;
  SexyVector3 *this_01;
  long *plVar4;
  code *pcVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  ZombieAnimRig_Cavalry::HideRider((ZombieAnimRig_Cavalry *)this);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  Zombie::GetProps<ZombieCavalryProps>(in_x0);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(in_x0 + 0x50);
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
  (*pcVar5)(plVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xffffffff,
            (SpawnZombieParams *)local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  if (((DAT_06b1dd30 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1dd30), iVar2 != 0)) {
    in_s1 = 0;
    in_s2 = 0x42480000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1de68,-60.0,0.0,50.0);
    __cxa_guard_release(&DAT_06b1dd30);
  }
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  local_40 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&DAT_06b1de68);
  local_3c = in_s1;
  local_38 = in_s2;
  BoardEntity::PlaceOnBoard(extraout_x0);
  (**(code **)(*(long *)extraout_x0 + 600))(extraout_x0);
  in_x0[0x80c] = (Zombie)0x0;
  cVar1 = (**(code **)(*(long *)in_x0 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)in_x0 + 0x330))(), cVar1 == '\0')) {
    (**(code **)(*(long *)in_x0 + 0x260))();
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(extraout_x0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::launchImp() */

void ZombieCavalry::launchImp(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieHydraHeadAnimRig *this;
  string *psVar3;
  ZombieType *this_00;
  SexyVector3 *extraout_x0;
  SexyVector3 *this_01;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(in_x0);
  ZombieAnimRig_Cavalry::HideRider((ZombieAnimRig_Cavalry *)this);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  Zombie::GetProps<ZombieCavalryProps>(in_x0);
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(in_x0 + 0x50);
  plVar4 = *(long **)(gLawnApp + 0x9f0);
  pcVar5 = *(code **)(*plVar4 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
  (*pcVar5)(plVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_40,0xffffffff,
            (SpawnZombieParams *)local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  if (((DAT_06b1de20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b1de20), iVar1 != 0)) {
    in_s1 = 0;
    in_s2 = 0x42480000;
    EATextSquish::Vec3::Vec3((Vec3 *)&DAT_06b1de78,-60.0,0.0,50.0);
    __cxa_guard_release(&DAT_06b1de20);
  }
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)in_x0);
  uVar6 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&DAT_06b1de78);
  local_40 = CONCAT44(in_s1,uVar6);
  local_38 = in_s2;
  BoardEntity::PlaceOnBoard(extraout_x0);
  fVar8 = *(float *)this_01;
  local_40 = *(undefined8 *)this_01;
  local_38 = *(undefined4 *)(this_01 + 8);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar7 = fVar8 - 200.0;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  if ((float)iVar2 * 3.0 <= fVar7) {
    fVar7 = (float)iVar1 * 3.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = fVar8 - fVar7;
  local_40 = CONCAT44(local_40._4_4_,fVar8);
  ZombieCavalryRider::SetFlyingDestinationWithTravelTime
            (fVar8,local_40._4_4_,local_38,0x3f400000,0x437a0000,extraout_x0,0);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::StaticClassInit() */

void ZombieCavalry::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieCavalry");
      (*pcVar4)(plVar1,asStack_150,FUN_0467a5a8,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieCavalry,void(ZombieCavalry::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAVALRY_Entering");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467a0e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieCavalry,void(ZombieCavalry::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAVALRY_Pawing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467a0e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieCavalry,void(ZombieCavalry::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAVALRY_Running");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467a0e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieCavalry,void(ZombieCavalry::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieCavalry,void(ZombieCavalry::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_CAVALRY_Rearing");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0467a0e8(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCavalry::StaticGetClass() */

long * ZombieCavalry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCavalry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieCavalry::GetClass() const */

long * ZombieCavalry::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieCavalry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onPlaceOnBoard() */

void __thiscall ZombieCavalry::onPlaceOnBoard(ZombieCavalry *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  Vec3 aVStack_18 [16];
  long local_8;
  
  this[0x80c] = (ZombieCavalry)0x1;
  this[0x80d] = (ZombieCavalry)0x1;
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x804) = 0;
  this[0x801] = (ZombieCavalry)0x0;
  Zombie::onPlaceOnBoard((Zombie *)this);
  fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3dcccccd,this);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x808) = (float)iVar2 + (fVar6 + 0.25) * (float)iVar3;
  Zombie::setZombieState((Zombie *)this,0x1f,0);
  cVar1 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar1 == '\0') {
    fVar6 = 920.0;
  }
  else {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)iVar2 + (fVar6 + 0.25) * (float)iVar3;
  }
  pcVar5 = *(code **)(*(long *)this + 0x78);
  lVar4 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar6,*(float *)(lVar4 + 4),*(float *)(lVar4 + 8));
  (*pcVar5)(this,aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onUpdate() */

void __thiscall ZombieCavalry::onUpdate(ZombieCavalry *this)

{
  int iVar1;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar2;
  int *piVar3;
  ZombieHydraHeadAnimRig *this_01;
  float fVar4;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  fVar4 = (float)FUN_0467734c(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  iVar1 = (int)*(float *)(lVar2 + 0x18) / 3;
  local_14[0] = 0;
  if (iVar1 != 0) {
    local_14[0] = (int)fVar4 / iVar1;
  }
  local_14[0] = 2 - local_14[0];
  piVar3 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = 2;
  piVar3 = eastl::min_alt<int>(piVar3,local_14 + 2);
  if (*(int *)(this + 0x804) != *piVar3) {
    *(int *)(this + 0x804) = *piVar3;
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_Cavalry::SetDamageState((ZombieAnimRig_Cavalry *)this_01,*(int *)(this + 0x804));
  }
  if (local_8 == ___stack_chk_guard) {
    Zombie::onUpdate((Zombie *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieCavalry::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieCavalry::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  RealObject *this;
  ulong uVar6;
  long extraout_x0;
  RtObject *this_00;
  CavalryGunAnimRig *this_01;
  Image *pIVar7;
  ZombieCavalryProps *pZVar8;
  ulong uVar9;
  undefined8 uVar10;
  Board *this_02;
  code *pcVar11;
  int local_a0 [2];
  undefined4 local_98;
  int local_94;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"launch_action");
  if (bVar1) {
    uVar9 = 0;
    calcGunRect();
    uVar3 = SharkMinion::getRow((SharkMinion *)param_1);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,
               auStack_90,uVar3,uVar3);
    cVar2 = Zombie::HasCondition(param_1,0x8c);
    uVar10 = local_80;
    if (cVar2 == '\0') {
      lVar5 = FUN_04677364(local_80,local_78);
      if (lVar5 != 0) {
        do {
          FUN_04677370(uVar10,uVar9);
          nop();
          iVar4 = (**(code **)(*(long *)this + 0x180))();
          if ((1 < iVar4) &&
             (cVar2 = RealObject::IsOnOpposingTeam(this,(RealObject *)param_1), cVar2 != '\0')) {
            this_02 = *(Board **)(gLawnApp + 0x9f0);
            std::string::string(asStack_68,"cavalrygun");
            BoardEntity::CalcGridPosition();
            BoardEntity::CalcGridPosition();
            Board::AddGridItem(this_02,asStack_68,local_a0[0],local_94,1);
            nop();
            std::string::~string(asStack_68);
            nop();
            if (extraout_x0 != 0) {
              pZVar8 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
              FUN_04677338(*(undefined4 *)(pZVar8 + 0x24c),extraout_x0 + 300);
              pZVar8 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
              FUN_04677340(*(undefined4 *)(pZVar8 + 0x24c),extraout_x0 + 0x128);
              GridItemAnimation::GetAnimRig();
              this_00 = (RtObject *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
              this_01 = Sexy::RtObject::Cast<CavalryGunAnimRig>(this_00);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
              if (this_01 != (CavalryGunAnimRig *)0x0) {
                CavalryGunAnimRig::PlayFlip(this_01);
              }
            }
            Plant::SetIsThrownAway((Plant *)this,true);
            pcVar11 = *(code **)(*(long *)this + 0x120);
            Sexy::Point::Point((Point *)local_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_98,local_94,asStack_68,param_1,(Point *)local_a0,0);
            (*pcVar11)(this,asStack_68);
            DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
            std::string::string(asStack_68,"Play_Zomb_DarkAges_Knight_Rush_Hit");
            RealObject::PlayPositionalSound((RealObject *)param_1,asStack_68,0.0);
            std::string::~string(asStack_68);
            nop();
            break;
          }
          uVar10 = local_80;
          uVar9 = uVar9 + 1;
          uVar6 = FUN_04677364(local_80,local_78);
        } while (uVar9 < uVar6);
      }
      param_1[0x80c] = (string)0x0;
      std::string::string(asStack_68,"butter");
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b1de98);
      Zombie::UnbindImageFromSprite((Zombie *)param_1,asStack_68,pIVar7);
    }
    else {
      Zombie::EndCondition((Zombie *)param_1,0x8c);
      param_1[0x80c] = (string)0x0;
      std::string::string(asStack_68,"butter");
      pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b1de98);
      Zombie::UnbindImageFromSprite((Zombie *)param_1,asStack_68,pIVar7);
    }
    std::string::~string(asStack_68);
    nop();
    pZVar8 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
    FUN_04677350(*(undefined4 *)(pZVar8 + 0x250),param_1 + 0x284);
    pZVar8 = Zombie::GetProps<ZombieCavalryProps>((Zombie *)param_1);
    Zombie::SetHitpoints((Zombie *)param_1,*(float *)(pZVar8 + 0x250));
    (**(code **)(*(long *)param_1 + 0xa68))(param_1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieCavalry::onElectrocuted() */

void __thiscall ZombieCavalry::onElectrocuted(ZombieCavalry *this)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_Cavalry::HideRider((ZombieAnimRig_Cavalry *)this_00);
  Zombie::onElectrocuted((Zombie *)this);
  return;
}

