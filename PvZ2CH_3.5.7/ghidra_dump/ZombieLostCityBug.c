// Class: ZombieLostCityBug


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::onEnterState_FlyingUp(ZombieState) */

void ZombieLostCityBug::onEnterState_FlyingUp(Zombie *param_1)

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
  std::string::string(asStack_58,"onFlyUpCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityBug::PlayFlyingUp((ZombieAnimRig_LostCityBug *)pZVar1,aRStack_50);
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
/* ZombieLostCityBug::onEnterState_FlyingOver(ZombieState) */

void ZombieLostCityBug::onEnterState_FlyingOver(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsUsingAnimTranslation(param_1,true);
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyOverCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityBug::PlayFlyingOver((ZombieAnimRig_LostCityBug *)pZVar1,aRStack_50);
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
/* ZombieLostCityBug::onEnterState_FlyingDown(ZombieState) */

void ZombieLostCityBug::onEnterState_FlyingDown(Zombie *param_1)

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
  std::string::string(asStack_58,"onFlyDownCompleted");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_LostCityBug::PlayFlyingDown((ZombieAnimRig_LostCityBug *)pZVar1,aRStack_50);
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


/* ZombieLostCityBug::canTargetEntityHeight(BoardEntityHeight) */

bool __thiscall ZombieLostCityBug::canTargetEntityHeight(undefined8 param_1,int param_2)

{
  return 1 < param_2;
}


/* ZombieLostCityBug::AssignCatastrophicDamage() */

void __thiscall ZombieLostCityBug::AssignCatastrophicDamage(ZombieLostCityBug *this)

{
  this[0x804] = (ZombieLostCityBug)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::getElectrocutePAMName() const */

void __thiscall ZombieLostCityBug::getElectrocutePAMName(ZombieLostCityBug *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_LOSTCITY_BUG_SHOCK");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::getAshPAMName() const */

void __thiscall ZombieLostCityBug::getAshPAMName(ZombieLostCityBug *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"POPANIM_EFFECTS_ZOMBIE_LOSTCITY_BUG_ASH");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ZombieLostCityBug::onApplyCondition(ZombieConditions) */

void __thiscall ZombieLostCityBug::onApplyCondition(ZombieLostCityBug *this,int param_2)

{
  if (1 < param_2 - 3U) {
    return;
  }
  Zombie::TakeFatalDamage((Zombie *)this,(BoardEntity *)0x0);
  return;
}


/* ZombieLostCityBug::updateState_Walk() */

void __thiscall ZombieLostCityBug::updateState_Walk(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') &&
     (plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this), plVar3 != (long *)0x0)) {
    iVar2 = (**(code **)(*plVar3 + 0x180))();
    if (iVar2 != 3) {
      Zombie::setZombieState((Zombie *)this,0x1f,0);
      return;
    }
    Zombie::setZombieState((Zombie *)this,2,0);
    return;
  }
  return;
}


/* ZombieLostCityBug::onFlyUpCompleted() */

void __thiscall ZombieLostCityBug::onFlyUpCompleted(ZombieLostCityBug *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x20);
  return;
}


/* ZombieLostCityBug::updateState_FlyingOver() */

void __thiscall ZombieLostCityBug::updateState_FlyingOver(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((cVar1 == '\0') &&
     ((plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this), plVar3 == (long *)0x0 ||
      (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 3)))) {
    Zombie::setZombieState((Zombie *)this,0x21,1);
    return;
  }
  return;
}


/* ZombieLostCityBug::onFlyOverCompleted() */

void __thiscall ZombieLostCityBug::onFlyOverCompleted(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 2)) {
    Zombie::setZombieState((Zombie *)this,0x20,1);
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieLostCityBug::onFlyDownCompleted() */

void __thiscall ZombieLostCityBug::onFlyDownCompleted(ZombieLostCityBug *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (cVar1 != '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1);
  return;
}


/* ZombieLostCityBug::~ZombieLostCityBug() */

void __thiscall ZombieLostCityBug::~ZombieLostCityBug(ZombieLostCityBug *this)

{
  *(undefined ***)this = &PTR_GetClass_068ea710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityBug_068eb180;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieLostCityBug::~ZombieLostCityBug() */

void __thiscall ZombieLostCityBug::~ZombieLostCityBug(ZombieLostCityBug *this)

{
  ~ZombieLostCityBug(this + -0x10);
  return;
}


/* ZombieLostCityBug::~ZombieLostCityBug() */

void __thiscall ZombieLostCityBug::~ZombieLostCityBug(ZombieLostCityBug *this)

{
  ~ZombieLostCityBug(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieLostCityBug::~ZombieLostCityBug() */

void __thiscall ZombieLostCityBug::~ZombieLostCityBug(ZombieLostCityBug *this)

{
  ~ZombieLostCityBug(this + -0x10);
  return;
}


/* ZombieLostCityBug::ZombieLostCityBug() */

void __thiscall ZombieLostCityBug::ZombieLostCityBug(ZombieLostCityBug *this)

{
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_068ea710;
  *(undefined ***)(this + 0x10) = &PTR__ZombieLostCityBug_068eb180;
  return;
}


/* ZombieLostCityBug::StaticNew() */

ZombieLostCityBug * ZombieLostCityBug::StaticNew(void)

{
  ZombieLostCityBug *this;
  
  this = ::operator_new(0x810);
  ZombieLostCityBug(this);
  return this;
}


/* ZombieLostCityBug::setBasicHelm(BasicHelmType) */

void __thiscall ZombieLostCityBug::setBasicHelm(ZombieLostCityBug *this,undefined4 param_2)

{
  ZombieHydraHeadAnimRig *this_00;
  
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_047d8f84(this_00 + 0x240,param_2);
  ZombieAnimRig_LostCityBug::SetLayerVisibilityForCurrentState
            ((ZombieAnimRig_LostCityBug *)this_00,false);
  *(undefined4 *)(this + 0x800) = param_2;
  return;
}


/* ZombieLostCityBug::onEnterState_Electrocute(ZombieState) */

void ZombieLostCityBug::onEnterState_Electrocute(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_LostCityBug::PlayDieNoBug((ZombieAnimRig_LostCityBug *)this);
  Zombie::onElectrocuted(param_1);
  return;
}


/* ZombieLostCityBug::onEnterState_Ash(ZombieState) */

void __thiscall ZombieLostCityBug::onEnterState_Ash(ZombieLostCityBug *this,int param_2)

{
  ZombieHydraHeadAnimRig *pZVar1;
  
  if (param_2 != 6) {
    if (this[0x804] != (ZombieLostCityBug)0x0) {
      pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      PopAnimRig::SetDisabled((PopAnimRig *)pZVar1,true);
      (**(code **)(*(long *)this + 0xa58))(this);
      Zombie::onTurnedToAsh((Zombie *)this);
      return;
    }
    pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    ZombieAnimRig_LostCityBug::PlayDieNoBug((ZombieAnimRig_LostCityBug *)pZVar1);
  }
  Zombie::onTurnedToAsh((Zombie *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::popBasicZombieParticles() */

void __thiscall ZombieLostCityBug::popBasicZombieParticles(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  ZombieParticle *pZVar5;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar6;
  char *__s;
  float fVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
LAB_047d9da4:
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    fVar7 = *(float *)(lVar4 + 0x1c4);
    cVar1 = Zombie::HasCondition(this,0x60);
  }
  else {
    std::string::string(asStack_10,"shrinkingviolet");
    iVar2 = PlayerInfo::GetEquipAvatarID(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if (iVar2 == -1) goto LAB_047d9da4;
    pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
    fVar7 = *(float *)(lVar4 + 0x1c8);
    cVar1 = Zombie::HasCondition(this,0x60);
  }
  if (cVar1 != '\0') {
    pEVar6 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    lVar4 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar6,0x60);
    fVar7 = *(float *)(lVar4 + 0xc);
  }
  std::string::string(asStack_10,"Play_limbs_pop");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_18,"zombie_torso");
  std::string::string(asStack_10,"particle_head");
  pZVar5 = (ZombieParticle *)SpawnZombieParticle((Zombie *)this,asStack_18,asStack_10,0.75);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if ((pZVar5 != (ZombieParticle *)0x0) &&
     ((cVar1 = Zombie::HasCondition(this,0x41), cVar1 != '\0' ||
      (cVar1 = Zombie::HasCondition(this,0x60), cVar1 != '\0')))) {
    ZombieParticle::SetScale(pZVar5,fVar7);
  }
  std::string::string(asStack_18,"zombie_leg_upper_outer");
  std::string::string(asStack_10,"particle_arm");
  pZVar5 = (ZombieParticle *)SpawnZombieParticle((Zombie *)this,asStack_18,asStack_10,0.75);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (pZVar5 == (ZombieParticle *)0x0) {
LAB_047d9cdc:
    iVar2 = *(int *)(this + 0x800);
    if (iVar2 != 1) goto LAB_047d9ce8;
LAB_047d9e00:
    std::string::string(asStack_18,"zombie_torso_backpack2");
    __s = "zombie_armor_cone_norm";
  }
  else {
    cVar1 = Zombie::HasCondition(this,0x41);
    if ((cVar1 != '\0') || (cVar1 = Zombie::HasCondition(this,0x60), cVar1 != '\0')) {
      ZombieParticle::SetScale(pZVar5,fVar7);
      goto LAB_047d9cdc;
    }
    iVar2 = *(int *)(this + 0x800);
    if (iVar2 == 1) goto LAB_047d9e00;
LAB_047d9ce8:
    if (iVar2 != 2) goto LAB_047d9d74;
    std::string::string(asStack_18,"zombie_torso_backpack2");
    __s = "zombie_armor_bucket_norm";
  }
  std::string::string(asStack_10,__s);
  pZVar5 = (ZombieParticle *)SpawnZombieParticle((Zombie *)this,asStack_18,asStack_10,0.75);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if ((pZVar5 != (ZombieParticle *)0x0) &&
     ((cVar1 = Zombie::HasCondition(this,0x41), cVar1 != '\0' ||
      (cVar1 = Zombie::HasCondition(this,0x60), cVar1 != '\0')))) {
    ZombieParticle::SetScale(pZVar5,fVar7);
  }
LAB_047d9d74:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::addBasicAshDeathEffect() */

void __thiscall ZombieLostCityBug::addBasicAshDeathEffect(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  AttachedEffect *this_00;
  long *plVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar5;
  long lVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  code *pcVar8;
  string asStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_047d8fa8(asStack_20);
  pcVar3 = (char *)FUN_0547429c(asStack_20);
  EATextSquish::Vec3::Vec3(aVStack_18,-11.0,-23.0,0.0);
  this_00 = (AttachedEffect *)
            Zombie::AddAttachedEffect
                      ((Zombie *)this,"basic_ash",pcVar3,"animation",(SexyVector3 *)aVStack_18,1,
                       false);
  std::string::~string(asStack_20);
  cVar1 = Zombie::HasCondition(this,0x41);
  if ((cVar1 != '\0') || (this[0x805] != (ZombieLostCityBug)0x0)) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    if (this_02 != (PlayerInfo *)0x0) {
      std::string::string((string *)aVStack_18,"shrinkingviolet");
      iVar2 = PlayerInfo::GetEquipAvatarID(this_02,(string *)aVStack_18);
      std::string::~string((string *)aVStack_18);
      nop();
      if (iVar2 != -1) {
        plVar4 = (long *)AttachedEffect::GetEffect(this_00);
        pcVar8 = *(code **)(*plVar4 + 0x80);
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        (*pcVar8)(*(undefined4 *)(lVar6 + 0x1c8),plVar4);
        goto LAB_047d9f00;
      }
    }
    plVar4 = (long *)AttachedEffect::GetEffect(this_00);
    pcVar8 = *(code **)(*plVar4 + 0x80);
    pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
    (*pcVar8)(*(undefined4 *)(lVar6 + 0x1c4),plVar4);
  }
LAB_047d9f00:
  cVar1 = Zombie::HasCondition(this,0x60);
  if (cVar1 != '\0') {
    plVar4 = (long *)AttachedEffect::GetEffect(this_00);
    pcVar8 = *(code **)(*plVar4 + 0x80);
    pEVar5 = (EntityConditionTracker<Zombie,ZombieConditions> *)
             Zombie::GetConditionTracker((Zombie *)this);
    lVar6 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar5,0x60);
    (*pcVar8)(*(undefined4 *)(lVar6 + 0xc),plVar4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityBug::onZombieInitialize() */

void __thiscall ZombieLostCityBug::onZombieInitialize(ZombieLostCityBug *this)

{
  ZombieBugProps *pZVar1;
  float fVar2;
  float fVar3;
  
  Zombie::SetIsFlying((Zombie *)this,true);
  pZVar1 = Zombie::GetProps<ZombieBugProps>((Zombie *)this);
  setBasicHelm(this,*(undefined4 *)(pZVar1 + 0x210));
  this[0x804] = (ZombieLostCityBug)0x0;
  fVar3 = *(float *)(pZVar1 + 0x250);
  this[0x805] = (ZombieLostCityBug)0x0;
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  *(float *)(this + 0x808) = fVar2 * fVar3;
  return;
}


/* ZombieLostCityBug::onTakeBodyDamage(DamageInfo const&) */

void __thiscall ZombieLostCityBug::onTakeBodyDamage(ZombieLostCityBug *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieBugProps *pZVar3;
  ZombieHydraHeadAnimRig *this_00;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pZVar3 = Zombie::GetProps<ZombieBugProps>((Zombie *)this);
  fVar5 = (float)FUN_047d8f80(*(undefined4 *)(this + 0x284));
  fVar7 = *(float *)(pZVar3 + 0x214);
  if ((fVar5 * fVar7 < 0.0) ||
     (fVar6 = (float)FUN_047d8f7c(*(undefined4 *)(this + 0x280)), fVar5 * fVar7 <= fVar6)) {
    return;
  }
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if (cVar1 != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    bVar2 = TestFlag<DamageTypeFlags>(uVar4,0x80);
    if (bVar2) {
      return;
    }
    bVar2 = TestFlag<DamageTypeFlags>(uVar4,0x1000);
    if (bVar2) {
      return;
    }
    bVar2 = TestFlag<DamageTypeFlags>(uVar4,4);
    if (bVar2) {
      return;
    }
  }
  this_00 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  ZombieAnimRig_LostCityBug::SetLayerVisibilityForCurrentState
            ((ZombieAnimRig_LostCityBug *)this_00,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::onDieCompleted() */

void __thiscall ZombieLostCityBug::onDieCompleted(ZombieLostCityBug *this)

{
  char cVar1;
  ZombieBugProps *pZVar2;
  string *psVar3;
  SexyVector3 *extraout_x0;
  float *pfVar4;
  long *plVar5;
  code *pcVar6;
  Zombie *pZVar7;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = FUN_047d8f78(*(undefined4 *)(this + 0x50));
  pZVar2 = Zombie::GetProps<ZombieBugProps>((Zombie *)this);
  FUN_05475d88(asStack_48,pZVar2 + 0x248);
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  (*pcVar6)(plVar5,aRStack_40,0xffffffff,(SpawnZombieParams *)local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,*pfVar4 - 11.0,pfVar4[1] - 4.0,pfVar4[2]);
  BoardEntity::PlaceOnBoard(extraout_x0);
  cVar1 = Zombie::HasCondition(this,0x41);
  if ((cVar1 != '\0') || (this[0x805] != (ZombieLostCityBug)0x0)) {
    pZVar7._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar7._0_4_,0,extraout_x0,0x41,1);
  }
  cVar1 = Zombie::HasCondition(this,0x60);
  if (cVar1 != '\0') {
    pZVar7._0_4_ = (Zombie *)PVZ_EOT();
    Zombie::ApplyCondition(pZVar7._0_4_,0,extraout_x0,0x60,1);
  }
  std::string::~string(asStack_48);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::StaticClassInit() */

void ZombieLostCityBug::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieLostCityBug");
      (*pcVar4)(plVar1,asStack_150,FUN_047dadd4,0x810,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieLostCityBug,void(ZombieLostCityBug::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUG_Flying_Up");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047da114(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieLostCityBug,void(ZombieLostCityBug::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUG_Flying_Over");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047da114(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieLostCityBug,void(ZombieLostCityBug::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieLostCityBug,void(ZombieLostCityBug::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUG_Flying_Down");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_047da114(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieLostCityBug::StaticGetClass() */

long * ZombieLostCityBug::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityBug",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieLostCityBug::GetClass() const */

long * ZombieLostCityBug::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieLostCityBug",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieLostCityBug::TakeDamage(DamageInfo const&) */

void __thiscall ZombieLostCityBug::TakeDamage(ZombieLostCityBug *this,DamageInfo *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ZombieBugProps *pZVar4;
  Plant *pPVar5;
  long lVar6;
  ZombieHydraHeadAnimRig *pZVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar4 = Zombie::GetProps<ZombieBugProps>((Zombie *)this);
  if ((*(RtObject **)param_1 == (RtObject *)0x0) ||
     (pPVar5 = Sexy::RtObject::Cast<Plant>(*(RtObject **)param_1), pPVar5 == (Plant *)0x0)) {
    fVar9 = (float)FUN_047d8f7c(*(undefined4 *)(this + 0x280));
    if ((*(float *)(param_1 + 8) < fVar9 + *(float *)(this + 0x808)) &&
       (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x4000), !bVar2))
    goto LAB_047db3a0;
  }
  else {
    Plant::GetType();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar1 = StringRestrictionSet::IsIncluded
                      ((StringRestrictionSet *)(pZVar4 + 0x218),(string *)(lVar6 + 8));
    if (((cVar1 == '\0') &&
        (fVar9 = (float)FUN_047d8f7c(*(undefined4 *)(this + 0x280)),
        *(float *)(param_1 + 8) < fVar9 + *(float *)(this + 0x808))) &&
       (bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),0x4000), !bVar2)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_047db3a0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  this[0x804] = (ZombieLostCityBug)0x1;
  pZVar7 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
  FUN_047d8f8c(pZVar7 + 0x244);
  uVar8 = operator|(0x1000,0x80);
  bVar2 = TestFlag<DamageTypeFlags>(*(undefined8 *)(param_1 + 0x10),uVar8);
  bVar3 = (**(code **)(*(long *)this + 0x328))(this);
  if (bVar2 < (bVar3 ^ 1)) {
    popBasicZombieParticles(this);
  }
LAB_047db3a0:
  Zombie::TakeDamage((Zombie *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieLostCityBug::onPopAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void ZombieLostCityBug::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  ZombieHydraHeadAnimRig *this;
  
  Zombie::onPopAnimCommand(param_1,param_2,param_3,param_4);
  bVar1 = std::operator==(param_4,"spawn_basic");
  if (!bVar1) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0xa50))(param_1);
  cVar2 = Zombie::isInState((Zombie *)param_1,7);
  if ((cVar2 == '\0') && (cVar2 = Zombie::isInState((Zombie *)param_1,6), cVar2 == '\0')) {
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  PopAnimRig::SetDisabled((PopAnimRig *)this,true);
  return;
}


/* ZombieLostCityBug::updateState_Eat() */

void __thiscall ZombieLostCityBug::updateState_Eat(ZombieLostCityBug *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if (((cVar1 == '\0') &&
      (plVar3 = (long *)(**(code **)(*(long *)this + 0x228))(this), plVar3 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x180))(), iVar2 == 2)) {
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  Zombie::updateState_Eat((Zombie *)this);
  return;
}


/* ZombieLostCityBug::onEnterState_Die(ZombieState) */

void __thiscall ZombieLostCityBug::onEnterState_Die(ZombieLostCityBug *this,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = Zombie::HasCondition(this,0x41);
  if ((((cVar1 != '\0') || (cVar1 = Zombie::HasCondition(this,0x40), cVar1 != '\0')) ||
      (cVar1 = Zombie::HasCondition(this,0x42), cVar1 != '\0')) ||
     ((cVar1 = Zombie::HasCondition(this,0x43), cVar1 != '\0' ||
      (cVar1 = Zombie::HasCondition(this,0x44), cVar1 != '\0')))) {
    this[0x805] = (ZombieLostCityBug)0x1;
  }
  Zombie::onEnterState_Die(this,param_2);
  return;
}

