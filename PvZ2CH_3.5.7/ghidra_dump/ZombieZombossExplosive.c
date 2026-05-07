// Class: ZombieZombossExplosive


/* ZombieZombossExplosive::tryBigSummonAction() */

void __thiscall ZombieZombossExplosive::tryBigSummonAction(ZombieZombossExplosive *this)

{
  Zombie::setZombieState((Zombie *)this,0x27,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::CanBeTargetedByPlant(Sexy::RtWeakPtr<PlantType>, bool) const */

void __thiscall
ZombieZombossExplosive::CanBeTargetedByPlant
          (ZombieZombossExplosive *this,RtWeakPtr<Sexy::ResourceInfo> *param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 == '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    cVar1 = Zombie::CanBeTargetedByPlant((Zombie *)this,aRStack_10,param_3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    bVar2 = std::operator==((string *)(lVar3 + 8),"pitaya");
    if (!bVar2) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      bVar2 = std::operator==((string *)(lVar3 + 8),"cherry_bomb");
      if (!bVar2) {
        cVar1 = '\0';
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* ZombieZombossExplosive::canTargetEntityHeight(BoardEntityHeight) */

undefined8 __thiscall
ZombieZombossExplosive::canTargetEntityHeight(ZombieZombossExplosive *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsFlying((Zombie *)this);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = Zombie::canTargetEntityHeight((Zombie *)this,param_2);
  return uVar2;
}


/* ZombieZombossExplosive::CollidesWithType(CollisionTypeFlags) const */

undefined8 __thiscall
ZombieZombossExplosive::CollidesWithType(ZombieZombossExplosive *this,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::IsJumping((Zombie *)this);
  if (cVar1 == '\0') {
    cVar1 = Zombie::IsFlying((Zombie *)this);
    if (cVar1 == '\0') {
      uVar2 = Zombie::CollidesWithType((Zombie *)this,param_2);
      return uVar2;
    }
  }
  return 0;
}


/* ZombieZombossExplosive::GetGridExtents() const */

Point * __thiscall ZombieZombossExplosive::GetGridExtents(ZombieZombossExplosive *this)

{
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,3,2);
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_Summon(ZombieState) */

void ZombieZombossExplosive::onEnterState_Summon(Zombie *param_1)

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
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlaySummon((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50);
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


/* ZombieZombossExplosive::onJumpToSkyAnimDone(std::string const&) */

void ZombieZombossExplosive::onJumpToSkyAnimDone(string *param_1)

{
  return;
}


/* ZombieZombossExplosive::onJumpToChangeLaneAnimDone(std::string const&) */

void ZombieZombossExplosive::onJumpToChangeLaneAnimDone(string *param_1)

{
  return;
}


/* ZombieZombossExplosive::OnZombieZombossDied(Zombie*, DamageInfo const*) */

void ZombieZombossExplosive::OnZombieZombossDied(Zombie *param_1,DamageInfo *param_2)

{
  if (param_1 != (Zombie *)param_2) {
    return;
  }
  (**(code **)(*(long *)param_1 + 0x2f0))();
  return;
}


/* ZombieZombossExplosive::canChangeStage() const */

undefined8 __thiscall ZombieZombossExplosive::canChangeStage(ZombieZombossExplosive *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0);
  if ((((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x28), cVar1 == '\0')) &&
      (cVar1 = Zombie::isInState((Zombie *)this,0x29), cVar1 == '\0')) &&
     (cVar1 = Zombie::isInState((Zombie *)this,0x2a), cVar1 == '\0')) {
    uVar2 = Zombie::isInState((Zombie *)this,0x2b);
    return uVar2;
  }
  return 1;
}


/* ZombieZombossExplosive::onSummonAnimDone(std::string const&) */

void ZombieZombossExplosive::onSummonAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x28);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::onDropBombsAnimDone(std::string const&) */

void ZombieZombossExplosive::onDropBombsAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x2e);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::onLaunchImpAnimDone(std::string const&) */

void ZombieZombossExplosive::onLaunchImpAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x29);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::onSkyToLandAnimDone(std::string const&) */

void ZombieZombossExplosive::onSkyToLandAnimDone(string *param_1)

{
  char cVar1;
  
  Zombie::SetIsFlying((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x2a);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::onChangeLaneToLandAnimDone(std::string const&) */

void ZombieZombossExplosive::onChangeLaneToLandAnimDone(string *param_1)

{
  char cVar1;
  
  Zombie::SetIsFlying((Zombie *)param_1,false);
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x2b);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::Reset() */

void __thiscall ZombieZombossExplosive::Reset(ZombieZombossExplosive *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x904) = 0;
  *(undefined4 *)(this + 0x90c) = 0;
  *(undefined4 *)(this + 0x8fc) = 0;
  *(undefined4 *)(this + 0x8f8) = uVar1;
  *(undefined4 *)(this + 0x900) = uVar1;
  *(undefined4 *)(this + 0x908) = uVar1;
  *(undefined4 *)(this + 0x910) = uVar1;
  *(undefined4 *)(this + 0x914) = uVar1;
  *(undefined4 *)(this + 0x918) = uVar1;
  *(undefined4 *)(this + 0x91c) = uVar1;
  return;
}


/* ZombieZombossExplosive::trySummonAction() */

void __thiscall ZombieZombossExplosive::trySummonAction(ZombieZombossExplosive *this)

{
  *(undefined4 *)(this + 0x904) = 0;
  Zombie::setZombieState((Zombie *)this,0x28,0);
  return;
}


/* ZombieZombossExplosive::onBigSummonAnimDone(std::string const&) */

void ZombieZombossExplosive::onBigSummonAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    trySummonAction((ZombieZombossExplosive *)param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::takeFireRocketAction() */

void __thiscall ZombieZombossExplosive::takeFireRocketAction(ZombieZombossExplosive *this)

{
  Board *pBVar1;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0x8fc) = 1;
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(auStack_10,L"[ZOMBOSS_EXPLOSIVE_BOMB_WARNING]",auStack_18);
  Board::DisplayAdviceAgain(pBVar1,auStack_10,0x11,0);
  FUN_05476c50(auStack_10);
  nop();
  Zombie::setZombieState((Zombie *)this,0x25,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossExplosive::initializeStageData(ZombossExplosiveStage const&) */

void __thiscall
ZombieZombossExplosive::initializeStageData
          (ZombieZombossExplosive *this,ZombossExplosiveStage *param_1)

{
  int iVar1;
  ZombieAnimRig *this_00;
  float fVar2;
  
  (**(code **)(*(long *)this + 0x198))(this,*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)param_1;
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  Zombie::SetHitpoints((Zombie *)this,fVar2 * (float)iVar1);
  iVar1 = *(int *)param_1;
  fVar2 = (float)Zombie::GetExtraHitPointsmodifier((Zombie *)this);
  FUN_04705ea0(fVar2 * (float)iVar1,this + 0x284);
  this_00 = (ZombieAnimRig *)Zombie::GetAnimRig((Zombie *)this);
  ZombieAnimRig::SetAnimRateModifier(this_00,*(float *)(param_1 + 8));
  return;
}


/* ZombieZombossExplosive::onChangeStageAnimDone(std::string const&) */

void ZombieZombossExplosive::onChangeStageAnimDone(string *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    Reset((ZombieZombossExplosive *)param_1);
    (**(code **)(*(long *)param_1 + 600))(param_1);
    fVar2 = (float)PVZ_T();
    *(float *)(param_1 + 0x8f8) = fVar2 + 3.0;
    return;
  }
  return;
}


/* ZombieZombossExplosive::startFunctioning() */

void __thiscall ZombieZombossExplosive::startFunctioning(ZombieZombossExplosive *this)

{
  float fVar1;
  
  (**(code **)(*(long *)this + 600))();
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x8f8) = fVar1 + 3.0;
  return;
}


/* ZombieZombossExplosive::onUpdate() */

void __thiscall ZombieZombossExplosive::onUpdate(ZombieZombossExplosive *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  Zomboss::onUpdate((Zomboss *)this);
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x8f8) < fVar2)) {
    trySummonAction(this);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x8f8) = uVar3;
    return;
  }
  return;
}


/* ZombieZombossExplosive::updateState_BigSkill() */

void __thiscall ZombieZombossExplosive::updateState_BigSkill(ZombieZombossExplosive *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = (float)PVZ_T();
  if (fVar4 <= *(float *)(this + 0x914)) {
    return;
  }
  if (*(int *)(this + 0x888) != 0) {
    iVar3 = Sexy::Rand();
    iVar1 = *(int *)(this + 0x888) + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    if (iVar3 - iVar2 * iVar1 != 1) {
      tryBigSummonAction(this);
      goto LAB_04706fc4;
    }
  }
  trySummonAction(this);
LAB_04706fc4:
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0x914) = uVar5;
  return;
}


/* ZombieZombossExplosive::updateState_JumpToSky() */

void __thiscall ZombieZombossExplosive::updateState_JumpToSky(ZombieZombossExplosive *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x91c) < fVar2) &&
     (cVar1 = Zombie::IsFlying((Zombie *)this), cVar1 == '\0')) {
    Zombie::SetIsFlying((Zombie *)this,true);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x91c) = uVar3;
  }
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x918)) {
    return;
  }
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x2d);
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x918) = uVar3;
  return;
}


/* ZombieZombossExplosive::updateState_JumpToChangeLane() */

void __thiscall ZombieZombossExplosive::updateState_JumpToChangeLane(ZombieZombossExplosive *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar2 = (float)PVZ_T();
  if ((*(float *)(this + 0x91c) < fVar2) &&
     (cVar1 = Zombie::IsFlying((Zombie *)this), cVar1 == '\0')) {
    Zombie::SetIsFlying((Zombie *)this,true);
    uVar3 = PVZ_EOT();
    *(undefined4 *)(this + 0x91c) = uVar3;
  }
  fVar2 = (float)PVZ_T();
  if (fVar2 <= *(float *)(this + 0x918)) {
    return;
  }
  cVar1 = (**(code **)(*(long *)this + 0x328))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x2f);
  }
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x918) = uVar3;
  return;
}


/* ZombieZombossExplosive::ZombieZombossExplosive() */

void __thiscall ZombieZombossExplosive::ZombieZombossExplosive(ZombieZombossExplosive *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Zomboss::Zomboss((Zomboss *)this);
  *(undefined ***)this = &PTR_GetClass_068bc700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossExplosive_068bd340;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x8e0));
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x904) = 0;
  *(undefined4 *)(this + 0x90c) = 0;
  *(undefined4 *)(this + 0x8fc) = 0;
  *(undefined4 *)(this + 0x8f8) = uVar2;
  *(undefined4 *)(this + 0x900) = uVar2;
  *(undefined4 *)(this + 0x908) = uVar2;
  *(undefined4 *)(this + 0x910) = uVar2;
  *(undefined4 *)(this + 0x914) = uVar2;
  *(undefined4 *)(this + 0x918) = uVar2;
  *(undefined4 *)(this + 0x91c) = uVar2;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnZombieZombossDied);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Zombie*,DamageInfo_const*,Sexy::CBMemberTranslatorX<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(Zombie*,DamageInfo_const*)>>
            ((MessageRouter *)puVar1,Message::ZombieDied,&local_40);
  return;
}


/* ZombieZombossExplosive::StaticNew() */

ZombieZombossExplosive * ZombieZombossExplosive::StaticNew(void)

{
  ZombieZombossExplosive *this;
  
  this = ::operator_new(0x920);
  ZombieZombossExplosive(this);
  return this;
}


/* ZombieZombossExplosive::getHeadIcon() */

void __thiscall ZombieZombossExplosive::getHeadIcon(ZombieZombossExplosive *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr
            ((CachedUIResourcePtr *)IMAGE_UI_HUD_INGAME_PROGRESS_METER_ZOMBOSS_HEAD_EXPLOSIVE);
  return;
}


/* ZombieZombossExplosive::getActiveStage() const */

void __thiscall ZombieZombossExplosive::getActiveStage(ZombieZombossExplosive *this)

{
  ZombieZombossExplosiveProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)this);
  FUN_04705f20(*(undefined8 *)(pZVar1 + 0x218),(long)*(int *)(this + 0x888));
  return;
}


/* ZombieZombossExplosive::onChangeActiveStage(int) */

void ZombieZombossExplosive::onChangeActiveStage(int param_1)

{
  ZombossExplosiveStage *pZVar1;
  
  Zomboss::onChangeActiveStage(param_1);
  pZVar1 = (ZombossExplosiveStage *)getActiveStage((ZombieZombossExplosive *)(ulong)(uint)param_1);
  initializeStageData((ZombieZombossExplosive *)(ulong)(uint)param_1,pZVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_LaunchImpIdle(ZombieState) */

void ZombieZombossExplosive::onEnterState_LaunchImpIdle(Zombie *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar5 = (float)PVZ_T();
  lVar3 = getActiveStage((ZombieZombossExplosive *)param_1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x908) = fVar5 + *(float *)(lVar3 + 0x60);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossExplosive::tryFireImpAction() */

void __thiscall ZombieZombossExplosive::tryFireImpAction(ZombieZombossExplosive *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  
  iVar1 = *(int *)(this + 0x90c);
  lVar3 = getActiveStage(this);
  if (iVar1 < *(int *)(lVar3 + 0x5c)) {
    *(undefined4 *)(this + 0x8fc) = 2;
    Zombie::setZombieState((Zombie *)this,0x26,0);
    return;
  }
  *(undefined4 *)(this + 0x90c) = 0;
  cVar2 = (**(code **)(*(long *)this + 0x328))(this);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(long *)this + 0x330))(this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x2e);
      return;
    }
  }
  return;
}


/* ZombieZombossExplosive::updateState_LaunchImpIdle() */

void __thiscall ZombieZombossExplosive::updateState_LaunchImpIdle(ZombieZombossExplosive *this)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x908)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x908) = uVar2;
  tryFireImpAction(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_SummonIdle(ZombieState) */

void ZombieZombossExplosive::onEnterState_SummonIdle(ZombieZombossExplosive *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  ResistenceValueInfo aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_58);
  lVar1 = getActiveStage(param_1);
  fVar4 = *(float *)(lVar1 + 0x40);
  lVar1 = getActiveStage(param_1);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_58,fVar4,*(float *)(lVar1 + 0x44));
  fVar4 = (float)PVZ_T();
  fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_58);
  *(float *)(param_1 + 0x900) = fVar5 + fVar4;
  plVar2 = (long *)Zombie::GetAnimRig((Zombie *)param_1);
  pcVar3 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar3)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossExplosive::updateState_SummonIdle() */

void __thiscall ZombieZombossExplosive::updateState_SummonIdle(ZombieZombossExplosive *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x900) < fVar4) {
    iVar1 = *(int *)(this + 0x904);
    lVar3 = getActiveStage(this);
    if (iVar1 < *(int *)(lVar3 + 0x48)) {
      *(int *)(this + 0x904) = *(int *)(this + 0x904) + 1;
      Zombie::setZombieState((Zombie *)this,0x24,0);
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x900) = uVar5;
      return;
    }
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) {
      Zombie::setZombieState((Zombie *)this,0x2c);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_RandomSkill(ZombieState) */

void ZombieZombossExplosive::onEnterState_RandomSkill(Zombie *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar5 = (float)PVZ_T();
  lVar3 = getActiveStage((ZombieZombossExplosive *)param_1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x910) = fVar5 + *(float *)(lVar3 + 0xc);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_BigSkill(ZombieState) */

void ZombieZombossExplosive::onEnterState_BigSkill(Zombie *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  float fVar5;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar2 = (long *)Zombie::GetAnimRig(param_1);
  pcVar4 = *(code **)(*plVar2 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar4)(plVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar5 = (float)PVZ_T();
  lVar3 = getActiveStage((ZombieZombossExplosive *)param_1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x914) = fVar5 + *(float *)(lVar3 + 0x10);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::NewFire() */

void __thiscall ZombieZombossExplosive::NewFire(ZombieZombossExplosive *this)

{
  char cVar1;
  ZombieZombossExplosiveProps *pZVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)this);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)(pZVar2 + 0x250));
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    uVar4 = Board::AddProjectile((Board *)(fVar5 + 15.0),fVar6,0x42be0000,uVar4,aRStack_10,this,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::fireBomb(Sexy::RtWeakPtr<Plant>) */

void ZombieZombossExplosive::fireBomb
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               ZombieZombossExplosive *param_4,RtMixedPtrBase *param_5)

{
  char cVar1;
  Projectile *this;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_5);
  if (cVar1 == '\0') {
    this = (Projectile *)0x0;
  }
  else {
    this = (Projectile *)NewFire(param_4);
    if (this != (Projectile *)0x0) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
      local_18 = (**(code **)(*plVar2 + 0x1f0))(0x3f99999a);
      local_14 = param_2;
      local_10 = param_3;
      fVar3 = (float)(**(code **)(*(long *)param_4 + 0x308))(0x41c80000,param_4);
      fVar4 = (float)(**(code **)(*(long *)param_4 + 0x308))(0x3e6147af,param_4);
      Projectile::LaunchAt(this,(SexyVector3 *)&local_18,fVar3 + 250.0,fVar4 + 2.2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::DropAllLoot() */

void __thiscall ZombieZombossExplosive::DropAllLoot(ZombieZombossExplosive *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  FestivalManager *pFVar7;
  undefined8 uVar8;
  WorldDataManager *this_00;
  string *psVar9;
  ActivityConfig *this_01;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  undefined8 *puVar14;
  ulong uVar15;
  float fVar16;
  bool local_69;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  float local_50 [4];
  DVec3 aDStack_40 [4];
  undefined4 local_3c;
  DVec3 aDStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar16 = (float)FUN_04705e9c(*(undefined4 *)(this + 0x280));
  if ((((fVar16 <= 0.0) || (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) &&
      (cVar1 = Zombie::GetHasDroppedLoot((Zombie *)this), cVar1 == '\0')) &&
     ((lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar6 == 0 ||
      (lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)),
      *(char *)(lVar6 + 0x112) == '\0')))) {
    pFVar7 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
    uVar8 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = FestivalManager::IsFestivalLevel(pFVar7,uVar8,2);
    if (cVar1 == '\0') {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      psVar9 = (string *)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
      lVar6 = WorldDataManager::FindWorldDataByLevelName(this_00,psVar9);
      if (lVar6 != 0) {
        Zombie::DropAllLoot((Zombie *)this);
      }
    }
    else {
      std::string::string(asStack_68,"spring_mode");
      nop();
      std::string::string(asStack_60,"all");
      nop();
      Board::TryDevilDirectDropItemName(*(string **)(gLawnApp + 0x9f0),asStack_68);
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 != 0) {
        lVar6 = Sexy::LazySingleton<FestivalManager>::GetInstance();
        uVar2 = FUN_04705ec0(*(undefined4 *)(lVar6 + 0xc));
        uVar8 = LawnApp::GetActivityConfig();
        ActivityConfig::GetCurrentPieceDropPercentArray
                  ((vector<float,std::allocator<float>> *)&local_20,uVar8,asStack_58,uVar2);
        cVar1 = std::vector<float,std::allocator<float>>::empty
                          ((vector<float,std::allocator<float>> *)&local_20);
        if (cVar1 != '\0') {
LAB_04708ff8:
          std::vector<float,std::allocator<float>>::~vector
                    ((vector<float,std::allocator<float>> *)&local_20);
          std::string::~string(asStack_58);
          std::string::~string(asStack_60);
          std::string::~string(asStack_68);
          goto LAB_04708b9c;
        }
        uVar15 = 0;
        this_01 = (ActivityConfig *)LawnApp::GetActivityConfig();
        iVar3 = ActivityConfig::GetCurrentPieceDropActivityCombat(this_01,asStack_58);
        uVar10 = time((time_t *)0x0);
        Sexy::SRand(uVar10);
        uVar11 = FUN_04705ecc(local_20,local_18);
        cVar1 = FUN_04705ebc(*(undefined1 *)(*(long *)(gLawnApp + 0x9f0) + 0xa01));
        uVar10 = uVar11 << 1;
        if (cVar1 == '\0') {
          uVar10 = uVar11;
        }
        for (; uVar15 < uVar11; uVar15 = uVar15 + 1) {
          iVar4 = (**(code **)(*(long *)this + 0x2f8))(this);
          lVar6 = *(long *)(gLawnApp + 0x9f0);
          iVar5 = FUN_04705eb8(*(undefined4 *)(lVar6 + 0xc2c));
          uVar8 = local_20;
          if (uVar10 == (long)iVar5) goto LAB_04708ff8;
          pfVar12 = (float *)FUN_04705f58(local_20,uVar15);
          if ((float)iVar4 * (float)iVar3 * 4.656613e-10 <= *pfVar12) {
            FUN_04705ea8(lVar6 + 0xc2c);
            psVar9 = (string *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)this);
            p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9);
            if ((p_Var13 !=
                 (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0) &&
               (puVar14 = (undefined8 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(p_Var13), 490.0 <= *(float *)((long)puVar14 + 4))) {
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar5 = FUN_047063c0(200);
              iVar4 = 2;
              if (cVar1 != '\0') {
                iVar4 = 1;
              }
              fVar16 = local_50[0] - (float)iVar5;
              local_50[0] = fVar16;
              iVar5 = FUN_047063c0(0x96);
              local_50[0] = (float)(iVar5 * iVar4 * (int)uVar15) + fVar16;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_04705ec4(*(undefined4 *)(p_Var13 + 0x188));
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
              }
            }
            uVar8 = local_20;
            if ((cVar1 != '\0') &&
               (p_Var13 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Board::AddDirectCollectable(*(SexyVector3 **)(gLawnApp + 0x9f0),psVar9)
               , uVar8 = local_20,
               p_Var13 !=
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0)) {
              FUN_04705ea8(*(long *)(gLawnApp + 0x9f0) + 0xc2c);
              puVar14 = (undefined8 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var13);
              local_50[2] = *(float *)(puVar14 + 1);
              local_50[0] = (float)*puVar14;
              local_50[1] = 490.0;
              iVar4 = FUN_047063c0(200);
              fVar16 = local_50[0] - (float)iVar4;
              local_50[0] = fVar16;
              iVar4 = FUN_047063c0(0x96);
              local_50[0] = fVar16 + (float)iVar4;
              (**(code **)(*(long *)p_Var13 + 0x78))(p_Var13,local_50);
              iVar4 = FUN_04705ec4(*(undefined4 *)(p_Var13 + 0x188));
              uVar8 = local_20;
              if (iVar4 == 1) {
                DVec3::DVec3(aDStack_40);
                DVec3::DVec3(aDStack_30);
                Collectable::GetMotionNewtonianValues
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,&local_69);
                local_3c = 0;
                Collectable::SetMotionNewtonian
                          ((Collectable *)p_Var13,(SexyVector3 *)aDStack_40,
                           (SexyVector3 *)aDStack_30,local_69);
                uVar8 = local_20;
              }
            }
          }
          uVar11 = FUN_04705ecc(uVar8,local_18);
        }
        std::vector<float,std::allocator<float>>::~vector
                  ((vector<float,std::allocator<float>> *)&local_20);
      }
      std::string::~string(asStack_58);
      std::string::~string(asStack_60);
      std::string::~string(asStack_68);
    }
    Zombie::SetHasDroppedLoot((Zombie *)this,true);
  }
LAB_04708b9c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_DropBombs(ZombieState) */

void ZombieZombossExplosive::onEnterState_DropBombs(Zombie *param_1)

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
  std::string::string(asStack_58,"onDropBombsAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlayDropBombs((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50)
  ;
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
/* ZombieZombossExplosive::onEnterState_LaunchImp(ZombieState) */

void ZombieZombossExplosive::onEnterState_LaunchImp(Zombie *param_1)

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
  std::string::string(asStack_58,"onLaunchImpAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlayLaunchImp((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50)
  ;
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
/* ZombieZombossExplosive::onEnterState_BigSummon(ZombieState) */

void ZombieZombossExplosive::onEnterState_BigSummon(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  Board *pBVar2;
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
  std::string::string(asStack_58,"onBigSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlaySummonRocket
            ((ZombieAnimRig_ZombossExplosive *)pZVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  FUN_05478178(asStack_58,L"[ZOMBOSS_EXPLOSIVE_SUMMON_WARNING]",aRStack_60);
  Board::DisplayAdviceAgain(pBVar2,asStack_58,0x11,0);
  FUN_05476c50(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_JumpToSky(ZombieState) */

void ZombieZombossExplosive::onEnterState_JumpToSky(Zombie *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  float fVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onJumpToSkyAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlayJumpStart((ZombieAnimRig_ZombossExplosive *)pZVar2,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar4 = (float)PVZ_T();
  lVar3 = getActiveStage((ZombieZombossExplosive *)param_1);
  *(float *)(param_1 + 0x918) = fVar4 + *(float *)(lVar3 + 0x14);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x91c) = fVar4 + 1.5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_SkyToLand(ZombieState) */

void ZombieZombossExplosive::onEnterState_SkyToLand
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = time((time_t *)0x0);
  Sexy::SRand(uVar2);
  iVar1 = Sexy::Rand();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[2];
  pcVar5 = *(code **)(*(long *)param_1 + 0x78);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1 % 3 + 1);
  EATextSquish::Vec3::Vec3(aVStack_60,fVar6,(float)iVar1,fVar7);
  (*pcVar5)(param_1,aVStack_60);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aVStack_60,"onSkyToLandAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             aVStack_60);
  ZombieAnimRig_ZombossExplosive::PlayJumpLand((ZombieAnimRig_ZombossExplosive *)pZVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_JumpToChangeLane(ZombieState) */

void ZombieZombossExplosive::onEnterState_JumpToChangeLane(Zombie *param_1)

{
  bool bVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  float fVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onJumpToChangeLaneAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossExplosive::PlayJumpStart((ZombieAnimRig_ZombossExplosive *)pZVar2,aRStack_50)
  ;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar4 = (float)PVZ_T();
  lVar3 = getActiveStage((ZombieZombossExplosive *)param_1);
  *(float *)(param_1 + 0x918) = fVar4 + *(float *)(lVar3 + 0x14);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(param_1 + 0x91c) = fVar4 + 1.5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onEnterState_ChangeLaneToLand(ZombieState) */

void ZombieZombossExplosive::onEnterState_ChangeLaneToLand
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = time((time_t *)0x0);
  Sexy::SRand(uVar2);
  iVar1 = Sexy::Rand();
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[2];
  pcVar5 = *(code **)(*(long *)param_1 + 0x78);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1 % 3 + 1);
  EATextSquish::Vec3::Vec3(aVStack_60,fVar6,(float)iVar1,fVar7);
  (*pcVar5)(param_1,aVStack_60);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aVStack_60,"onChangeLaneToLandAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             aVStack_60);
  ZombieAnimRig_ZombossExplosive::PlayJumpLand((ZombieAnimRig_ZombossExplosive *)pZVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossExplosive::~ZombieZombossExplosive() */

void __thiscall ZombieZombossExplosive::~ZombieZombossExplosive(ZombieZombossExplosive *this)

{
  *(undefined ***)this = &PTR_GetClass_068bc700;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossExplosive_068bd340;
  std::vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>
           *)(this + 0x8e0));
  Zomboss::~Zomboss((Zomboss *)this);
  return;
}


/* non-virtual thunk to ZombieZombossExplosive::~ZombieZombossExplosive() */

void __thiscall ZombieZombossExplosive::~ZombieZombossExplosive(ZombieZombossExplosive *this)

{
  ~ZombieZombossExplosive(this + -0x10);
  return;
}


/* ZombieZombossExplosive::~ZombieZombossExplosive() */

void __thiscall ZombieZombossExplosive::~ZombieZombossExplosive(ZombieZombossExplosive *this)

{
  ~ZombieZombossExplosive(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossExplosive::~ZombieZombossExplosive() */

void __thiscall ZombieZombossExplosive::~ZombieZombossExplosive(ZombieZombossExplosive *this)

{
  ~ZombieZombossExplosive(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onZombieInitialize() */

void __thiscall ZombieZombossExplosive::onZombieInitialize(ZombieZombossExplosive *this)

{
  ZombieZombossExplosiveProps *pZVar1;
  long lVar2;
  ulong uVar3;
  string *psVar4;
  ZombieType *this_00;
  Board *this_01;
  ulong uVar5;
  undefined8 uVar6;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zomboss::onZombieInitialize((Zomboss *)this);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (this_01 != (Board *)0x0) {
    std::string::string(asStack_10,"Missile_Explosion_Common");
    Board::LoadResourceGroupForGameplay(this_01,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pZVar1 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)this);
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(pZVar1 + 0x218);
    uVar3 = FUN_04705ee4(uVar6,*(undefined8 *)(pZVar1 + 0x220));
    if (uVar3 <= uVar5) break;
    lVar2 = FUN_04705f20(uVar6,uVar5);
    ZombieSkillUtils::LoadSummonZombiesResources((CZombieSummonDataPool *)(lVar2 + 0x18));
    uVar5 = uVar5 + 1;
  }
  pZVar1 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)this);
  FUN_05475d88(asStack_18,pZVar1 + 0x248);
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
  this_00 = (ZombieType *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Reset(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::OnRocketDestroyed(ZombossCrosshair*) */

void __thiscall
ZombieZombossExplosive::OnRocketDestroyed(ZombieZombossExplosive *this,ZombossCrosshair *param_1)

{
  int iVar1;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 0x8e0);
    iVar1 = (int)uVar4;
    uVar3 = FUN_04705f30(uVar5,*(undefined8 *)(this + 0x8e8));
    if (uVar3 <= uVar4) goto LAB_0470a370;
    this_00 = (RtWeakPtr *)FUN_04705f3c(uVar5,uVar4);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    uVar4 = uVar4 + 1;
  } while (param_1 != (ZombossCrosshair *)pRVar2);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x8e0));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar1);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>::
  erase((vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>
         *)(this + 0x8e0),local_10);
LAB_0470a370:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::getRocketTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&) */

void __thiscall
ZombieZombossExplosive::getRocketTargets(ZombieZombossExplosive *this,vector *param_1)

{
  bool bVar1;
  ulong uVar2;
  long extraout_x0;
  long lVar3;
  BoardEntity **ppBVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  uVar7 = local_18;
  uVar6 = local_20;
  uVar2 = FUN_04705f44(local_20,local_18);
  if (uVar2 != 0) {
    for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      FUN_04705f50(uVar6,uVar5);
      nop();
      if (extraout_x0 != 0) {
        Plant::GetType();
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        FUN_05475d88(asStack_30,lVar3 + 8);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        bVar1 = std::operator==(asStack_30,"iceburg");
        if ((((((bVar1) || (bVar1 = std::operator==(asStack_30,"cherry_bomb"), bVar1)) ||
              (bVar1 = std::operator==(asStack_30,"potatomine"), bVar1)) ||
             ((bVar1 = std::operator==(asStack_30,"squash"), bVar1 ||
              (bVar1 = std::operator==(asStack_30,"jalapeno"), bVar1)))) ||
            ((bVar1 = std::operator==(asStack_30,"powerlily"), bVar1 ||
             ((bVar1 = std::operator==(asStack_30,"spikerock"), bVar1 ||
              (bVar1 = std::operator==(asStack_30,"spikeweed"), bVar1)))))) ||
           (bVar1 = std::operator==(asStack_30,"bamboo"), bVar1)) {
          std::string::~string(asStack_30);
          uVar6 = local_20;
          uVar7 = local_18;
        }
        else {
          ppBVar4 = (BoardEntity **)FUN_04705f50(local_20,uVar5);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_1,ppBVar4);
          std::string::~string(asStack_30);
          uVar6 = local_20;
          uVar7 = local_18;
        }
      }
      uVar2 = FUN_04705f44(uVar6,uVar7);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::tryFireRocketAction() */

void __thiscall ZombieZombossExplosive::tryFireRocketAction(ZombieZombossExplosive *this)

{
  long lVar1;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  getRocketTargets(this,(vector *)&local_20);
  lVar1 = FUN_04705f44(local_20,local_18);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 != 0);
}


/* ZombieZombossExplosive::updateState_RandomSkill() */

void __thiscall ZombieZombossExplosive::updateState_RandomSkill(ZombieZombossExplosive *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar3 = (float)PVZ_T();
  if (fVar3 <= *(float *)(this + 0x910)) {
    return;
  }
  if (*(int *)(this + 0x8fc) == 0) {
    iVar2 = Sexy::Rand();
    if (iVar2 % 2 == 1) goto LAB_0470a900;
  }
  else if (*(int *)(this + 0x8fc) == 2) {
LAB_0470a900:
    cVar1 = tryFireRocketAction(this);
    if (cVar1 != '\0') {
      takeFireRocketAction(this);
      goto LAB_0470a8d4;
    }
  }
  tryFireImpAction(this);
LAB_0470a8d4:
  uVar4 = PVZ_EOT();
  *(undefined4 *)(this + 0x910) = uVar4;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::pickRocketTargets() */

void __thiscall ZombieZombossExplosive::pickRocketTargets(ZombieZombossExplosive *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar6;
  ZombossCrosshair *this_01;
  Projectile *this_02;
  ZombossCrosshair *extraout_x0;
  ulong uVar7;
  float fVar8;
  ResistenceValueInfo aRStack_40 [8];
  Point aPStack_38 [4];
  int local_34;
  string asStack_30 [8];
  string asStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar7 = 0;
  getRocketTargets(this,(vector *)&local_20);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_40);
  lVar2 = getActiveStage(this);
  iVar1 = *(int *)(lVar2 + 0x4c);
  lVar2 = getActiveStage(this);
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_40,(float)iVar1,(float)*(int *)(lVar2 + 0x50));
  fVar8 = (float)ValueRange::GetRandomValue((ValueRange *)aRStack_40);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
            (uVar3,uVar4);
  uVar3 = local_20;
  uVar5 = FUN_04705f44(local_20,local_18);
  if (uVar5 != 0) {
    do {
      if ((int)fVar8 <= (int)uVar7) break;
      FUN_04705f50(uVar3,uVar7);
      nop();
      if (this_00 !=
          (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           *)0x0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(this_00);
        Sexy::Point::Point(aPStack_38,(int)*pfVar6,(int)pfVar6[1]);
        local_34 = local_34 + -0x14;
        this_01 = GameObject::Create<ZombossCrosshair>();
        ZombossCrosshair::InitializeRocketController(this_01,this,aPStack_38);
        std::string::string(asStack_30,"POPANIM_EFFECTS_ZOMBOSS_MISSILE_EXPLOSION_COMMON");
        std::string::string(asStack_28,"missile_lock_reticle");
        ZombossCrosshair::StartCrosshairEffect(this_01,asStack_30,asStack_28);
        std::string::~string(asStack_28);
        nop();
        std::string::~string(asStack_30);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)asStack_30);
        std::
        vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>
        ::push_back((vector<Sexy::RtWeakPtr<ZombossCrosshair>,std::allocator<Sexy::RtWeakPtr<ZombossCrosshair>>>
                     *)(this + 0x8e0),(RtWeakPtr *)asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)asStack_30);
        this_02 = (Projectile *)fireBomb(this,asStack_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30)
        ;
        if (this_02 != (Projectile *)0x0) {
          Projectile::SetUpdateTimeOverride(this_02,_FUN_0470abe4);
          nop();
          BombProjectile::SetOwningRocket(extraout_x0);
          Plant::SetBombProjectile((Projectile *)this_00);
        }
        uVar3 = local_20;
        uVar5 = FUN_04705f44(local_20,local_18);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombieZombossExplosive::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ZombieZombossExplosiveProps *pZVar4;
  string *psVar5;
  long lVar6;
  SexyVector3 *this;
  long *plVar7;
  long *extraout_x0;
  ZombieType *this_00;
  uint uVar8;
  int iVar9;
  Board *pBVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  undefined4 in_s2;
  undefined4 uVar14;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"summon_action");
  if (bVar1) {
    lVar6 = getActiveStage((ZombieZombossExplosive *)param_1);
    ZombieSkillUtils::SummonZombies((CZombieSummonDataPool *)(lVar6 + 0x18),(Zombie *)param_1);
  }
  else {
    bVar1 = std::operator==(param_4,"thorw_bomb_action");
    if (bVar1) {
      pickRocketTargets((ZombieZombossExplosive *)param_1);
    }
    else {
      bVar1 = std::operator==(param_4,"jump_down_action");
      uVar8 = (uint)bVar1;
      if (bVar1) {
        BoardEntity::CalcGridPosition();
        for (iVar3 = 0; (**(code **)(*(long *)param_1 + 0xd0))(&local_18,param_1), iVar3 < local_18;
            iVar3 = iVar3 + 1) {
          for (iVar9 = 0; (**(code **)(*(long *)param_1 + 0xd0))(&local_18,param_1),
              iVar9 < (int)local_14; iVar9 = iVar9 + 1) {
            Board::KillPlantNotInvincibleAt
                      (*(Board **)(gLawnApp + 0x9f0),iVar3 + local_20,iVar9 + local_1c,true);
          }
        }
      }
      else {
        bVar1 = std::operator==(param_4,"thorw_imp_action");
        if (bVar1) {
          *(int *)(param_1 + 0x90c) = *(int *)(param_1 + 0x90c) + 1;
          pZVar4 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)param_1);
          FUN_05475d88(asStack_30,pZVar4 + 0x248);
          psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
          ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_20);
          lVar6 = getActiveStage((ZombieZombossExplosive *)param_1);
          iVar3 = *(int *)(lVar6 + 0x54);
          lVar6 = getActiveStage((ZombieZombossExplosive *)param_1);
          fVar13 = (float)*(int *)(lVar6 + 0x58);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar3,fVar13);
          fVar12 = (float)ValueRange::GetRandomValue((ValueRange *)&local_20);
          if (0 < (int)fVar12) {
            this = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)param_1);
            do {
              pBVar10 = *(Board **)(gLawnApp + 0x9f0);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_28);
              plVar7 = (long *)Board::AddZombie(pBVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                                                0,1,0,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              pcVar11 = *(code **)(*plVar7 + 0x78);
              pZVar4 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)param_1);
              local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)(pZVar4 + 0x238));
              local_14 = fVar13;
              local_10 = in_s2;
              (*pcVar11)(plVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18);
              pZVar4 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)param_1);
              iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(pZVar4 + 0x230));
              iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
              iVar9 = 0;
              if (iVar3 != 0) {
                iVar9 = (int)uVar8 / iVar3;
              }
              iVar3 = uVar8 - iVar9 * iVar3;
              uVar8 = uVar8 + 1;
              iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
              EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(float)iVar2,(float)iVar3,0.0);
              pZVar4 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)param_1);
              uVar14 = *(undefined4 *)(pZVar4 + 0x234);
              pZVar4 = Zombie::GetProps<ZombieZombossExplosiveProps>((Zombie *)param_1);
              nop();
              fVar13 = local_14;
              (**(code **)(*extraout_x0 + 0xa08))
                        (local_18,local_14,local_10,*(undefined4 *)(pZVar4 + 0x244),uVar14);
              in_s2 = local_10;
            } while (uVar8 != (int)fVar12);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          std::string::~string(asStack_30);
        }
        else {
          bVar1 = std::operator==(param_4,"summon_rocket_action");
          if (bVar1) {
            ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                      ((ResistenceValueInfo *)asStack_30);
            lVar6 = getActiveStage((ZombieZombossExplosive *)param_1);
            iVar3 = *(int *)(lVar6 + 100);
            lVar6 = getActiveStage((ZombieZombossExplosive *)param_1);
            Sexy::FastCurve::SetOutRange
                      ((FastCurve *)asStack_30,(float)iVar3,(float)*(int *)(lVar6 + 0x68));
            for (iVar3 = 0; fVar13 = (float)ValueRange::GetRandomValue((ValueRange *)asStack_30),
                (float)iVar3 < fVar13; iVar3 = iVar3 + 1) {
              std::string::string((string *)aRStack_28,"kongfu_rocket");
              nop();
              psVar5 = (string *)
                       Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
              ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
              this_00 = (ZombieType *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              ZombieType::EnsureResourceGroupsLoaded(this_00);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)&local_20);
              iVar9 = *(int *)(*(Board **)(gLawnApp + 0x9f0) + 0xfc);
              iVar2 = 0;
              if (iVar9 != 0) {
                iVar2 = iVar3 / iVar9;
              }
              Board::AddZombieInRow
                        (*(Board **)(gLawnApp + 0x9f0),(RtWeakPtr<Sexy::SoundResource> *)&local_18,
                         iVar3 - iVar2 * iVar9,0,0,1,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              std::string::~string((string *)aRStack_28);
            }
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossExplosive::StaticClassInit() */

void ZombieZombossExplosive::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  StateMachineTableBuilder *this;
  RtClass *pRVar3;
  StateMachineTable *pSVar4;
  code *pcVar5;
  string asStack_188 [8];
  undefined4 local_180 [6];
  pair<std::string,unsigned_int> apStack_168 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_150 [24];
  Delegate1<ZombieState> aDStack_138 [48];
  Delegate0 aDStack_108 [48];
  Delegate1<ZombieState> aDStack_d8 [48];
  StateDefinition<CardGameState> aSStack_a8 [160];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_150);
  local_180[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"ExplosiveInvalidAction",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  local_180[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"ExplosiveDropBombsAction",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  local_180[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_168,"ExplosiveLaunchImpAction",(MagicianActionStatus *)local_180);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_150,(pair *)apStack_168);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_168);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_168,"EZombossExplosiveRandomAction");
    (*pcVar5)(plVar2,apStack_168,avStack_150,0);
    std::string::~string((string *)apStack_168);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_150);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_150,"ZombieZombossExplosive");
    (*pcVar5)(plVar2,avStack_150,FUN_0470c2d8,0x920,0);
    std::string::~string((string *)avStack_150);
    nop();
  }
  this = (StateMachineTableBuilder *)Sexy::LazySingleton<StateMachineTableBuilder>::GetInstance();
  pRVar3 = (RtClass *)StaticGetClass();
  pSVar4 = StateMachineTableBuilder::RegisterClass<ZombieState>(this,pRVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_DropBombs");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_LaunchImp");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb60);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_BigSummon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb78);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_SummonIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb90);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_LaunchImpIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba8);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_RandomSkill");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_BigSkill");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd8);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbe0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_JumpToSky");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbe8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbf0);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbf8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_SkyToLand");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2d,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc00);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc08);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc10);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_JumpToChangeLane");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2e,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc18);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_138,(MagicianActionStatus *)local_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc20);
  Sexy::Delegate0::Delegate0<ZombieZombossExplosive,void(ZombieZombossExplosive::*)()>
            (aDStack_108,apStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xc28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossExplosive,void(ZombieZombossExplosive::*)(ZombieState)>
            (aDStack_d8,avStack_150);
  std::string::string(asStack_188,"ZombossExplosive_ChangeLaneToLand");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0470b7f0(pSVar4,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossExplosive::StaticGetClass() */

long * ZombieZombossExplosive::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossExplosive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossExplosive::GetClass() const */

long * ZombieZombossExplosive::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossExplosive",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

