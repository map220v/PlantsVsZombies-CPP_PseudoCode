// Class: ZombieZombossQigong


/* ZombieZombossQigong::onChangeStageAnimDone(std::string const&) */

void ZombieZombossQigong::onChangeStageAnimDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0xa70))();
  return;
}


/* ZombieZombossQigong::canChangeStage() const */

undefined8 __thiscall ZombieZombossQigong::canChangeStage(ZombieZombossQigong *this)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::isInState((Zombie *)this,0);
  if ((cVar1 == '\0') && (cVar1 = Zombie::isInState((Zombie *)this,0x2c), cVar1 == '\0')) {
    uVar2 = Zombie::isInState((Zombie *)this,0x26);
    return uVar2;
  }
  return 1;
}


/* ZombieZombossQigong::onFlyAnimDone(std::string const&) */

void ZombieZombossQigong::onFlyAnimDone(string *param_1)

{
  Zombie::setZombieState((Zombie *)param_1,0x26,0);
  return;
}


/* ZombieZombossQigong::updateState_IceBall() */

void __thiscall ZombieZombossQigong::updateState_IceBall(ZombieZombossQigong *this)

{
  Zombie::setZombieState((Zombie *)this,0x2c,0);
  return;
}


/* ZombieZombossQigong::onPKAnimDone(std::string const&) */

void ZombieZombossQigong::onPKAnimDone(string *param_1)

{
  LawnApp::ShowPowerPKView(gLawnApp);
  return;
}


/* ZombieZombossQigong::getSunCollectPos() */

undefined4 __thiscall ZombieZombossQigong::getSunCollectPos(ZombieZombossQigong *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_04701254(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onFallAnimDone(std::string const&) */

void ZombieZombossQigong::onFallAnimDone(string *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Board *this;
  float fVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  iVar3 = 0;
  (**(code **)(*(long *)param_1 + 0xd0))((string *)&local_10,param_1);
  if (0 < local_10) {
    do {
      iVar2 = 0;
      (**(code **)(*(long *)param_1 + 0xd0))((string *)&local_10,param_1);
      if (0 < local_c) {
        do {
          if (local_18 == iVar3) {
            Board::KillPlantNotInvincibleAt
                      (*(Board **)(gLawnApp + 0x9f0),iVar3 << 1,iVar2 + local_14,false);
          }
          else {
            Board::KillPlantNotInvincibleAt
                      (*(Board **)(gLawnApp + 0x9f0),iVar3 + local_18,iVar2 + local_14,true);
          }
          iVar2 = iVar2 + 1;
          (**(code **)(*(long *)param_1 + 0xd0))((string *)&local_10,param_1);
        } while (iVar2 < local_c);
      }
      iVar3 = iVar3 + 1;
      (**(code **)(*(long *)param_1 + 0xd0))((string *)&local_10,param_1);
    } while (iVar3 < local_10);
  }
  iVar3 = 0;
  do {
    (**(code **)(*(long *)param_1 + 0xd0))((string *)&local_10,param_1);
    if (local_c <= iVar3) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(param_1 + 0x8ec) <= fVar4) {
        Zombie::setZombieState((Zombie *)param_1,0x2a,0);
      }
      else {
        Zombie::setZombieState((Zombie *)param_1,0x29,0);
      }
LAB_0470194c:
      Zombie::SetIsFlying((Zombie *)param_1,false);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_10,"");
    lVar1 = Board::GetPlantAt(this,local_18 + -1,iVar3 + local_14,(string *)&local_10);
    std::string::~string((string *)&local_10);
    nop();
    if (lVar1 != 0) {
      Zombie::setZombieState((Zombie *)param_1,0x28,0);
      goto LAB_0470194c;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


/* ZombieZombossQigong::onEnterState_FlyIdle(ZombieState) */

void ZombieZombossQigong::onEnterState_FlyIdle(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = (float)ValueRange::GetRandomValue((ValueRange *)(param_1 + 0x8fc));
  *(float *)(param_1 + 0x8e4) = fVar2 + fVar1;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ZombieAnimRig_ZombossQigong::PlayFlyIdle((ZombieAnimRig_ZombossQigong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onEnterState_Jump(ZombieState) */

void ZombieZombossQigong::onEnterState_Jump(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  char *__s;
  float fVar1;
  float fVar2;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  param_1[0x8f0] = (Zombie)0x0;
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  ZombieAnimRig_ZombossQigong::PlayJumpUp((ZombieAnimRig_ZombossQigong *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  fVar1 = (float)PVZ_T();
  __s = (char *)ZombieAnimRig_ZombossQigong::getJumpUpAnimName();
  std::string::string(asStack_58,__s);
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_58);
  *(float *)(param_1 + 0x8f4) = fVar1 + fVar2 + 0.5;
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onJumpDownAnimDone(std::string const&) */

void ZombieZombossQigong::onJumpDownAnimDone(string *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  code *pcVar2;
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  pcVar2 = *(code **)(*(long *)pZVar1 + 0x110);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50);
  (*pcVar2)(pZVar1,aRStack_50);
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


/* ZombieZombossQigong::onZombieInitialize() */

void __thiscall ZombieZombossQigong::onZombieInitialize(ZombieZombossQigong *this)

{
  ZombieZombossQigongProps *pZVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  Zomboss::onZombieInitialize((Zomboss *)this);
  pZVar1 = Zombie::GetProps<ZombieZombossQigongProps>((Zombie *)this);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pZVar1 + 0x218);
    uVar3 = FUN_047010c4(uVar5,*(undefined8 *)(pZVar1 + 0x220));
    if (uVar3 <= uVar4) break;
    lVar2 = FUN_047010f4(uVar5,uVar4);
    ZombieSkillUtils::LoadSummonZombiesResources((CZombieSummonDataPool *)(lVar2 + 0x18));
    uVar4 = uVar4 + 1;
  }
  return;
}


/* ZombieZombossQigong::getStage(int) const */

void __thiscall ZombieZombossQigong::getStage(ZombieZombossQigong *this,int param_1)

{
  ZombieZombossQigongProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieZombossQigongProps>((Zombie *)this);
  FUN_047010f4(*(undefined8 *)(pZVar1 + 0x218),(long)param_1);
  return;
}


/* ZombieZombossQigong::initializeStageData(int) */

void __thiscall ZombieZombossQigong::initializeStageData(ZombieZombossQigong *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)getStage(this,param_1);
  Zombie::SetHitpoints((Zombie *)this,(float)*piVar1);
  FUN_047010a4((float)*piVar1,this + 0x284);
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x8fc),(float)piVar1[0x10],(float)piVar1[0x11]);
  return;
}


/* ZombieZombossQigong::onChangeActiveStage(int) */

void __thiscall ZombieZombossQigong::onChangeActiveStage(ZombieZombossQigong *this,int param_1)

{
  Zomboss::onChangeActiveStage((int)this);
  initializeStageData(this,param_1);
  return;
}


/* ZombieZombossQigong::getActiveStage() const */

void __thiscall ZombieZombossQigong::getActiveStage(ZombieZombossQigong *this)

{
  getStage(this,*(int *)(this + 0x888));
  return;
}


/* ZombieZombossQigong::startFunctioning() */

void __thiscall ZombieZombossQigong::startFunctioning(ZombieZombossQigong *this)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  lVar1 = getActiveStage(this);
  *(float *)(this + 0x8ec) = fVar2 + *(float *)(lVar1 + 0x4c);
  Zombie::setZombieState((Zombie *)this,0x24,0);
  return;
}


/* ZombieZombossQigong::onSummonAnimDone(std::string const&) */

void ZombieZombossQigong::onSummonAnimDone(string *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = getActiveStage((ZombieZombossQigong *)param_1);
  ZombieSkillUtils::SummonZombies((CZombieSummonDataPool *)(lVar1 + 0x18),(Zombie *)param_1);
  param_1[0x8e0] = (string)0x1;
  *(int *)(param_1 + 0x8e8) = *(int *)(param_1 + 0x8e8) + 1;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)ValueRange::GetRandomValue((ValueRange *)(param_1 + 0x8fc));
  *(float *)(param_1 + 0x8e4) = fVar3 + fVar2;
  Zombie::setZombieState((Zombie *)param_1,0x26,0);
  return;
}


/* ZombieZombossQigong::updateState_FlyIdle() */

void __thiscall ZombieZombossQigong::updateState_FlyIdle(ZombieZombossQigong *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  iVar1 = *(int *)(this + 0x8e8);
  lVar2 = getActiveStage(this);
  if (*(int *)(lVar2 + 0x48) <= iVar1) {
    Zombie::setZombieState((Zombie *)this,0x27,0);
    return;
  }
  fVar3 = (float)PVZ_T();
  if (fVar3 < *(float *)(this + 0x8e4)) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x25,0);
  return;
}


/* ZombieZombossQigong::onExitState_PK(ZombieState) */

void ZombieZombossQigong::onExitState_PK(ZombieZombossQigong *param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_T();
  lVar1 = getActiveStage(param_1);
  *(float *)(param_1 + 0x8ec) = fVar2 + *(float *)(lVar1 + 0x4c);
  return;
}


/* ZombieZombossQigong::getHeadIcon() */

void __thiscall ZombieZombossQigong::getHeadIcon(ZombieZombossQigong *this)

{
  CachedUIResourcePtr::operator_cast_to_RtWeakPtr
            ((CachedUIResourcePtr *)IMAGE_UI_HUD_INGAME_PROGRESS_METER_ZOMBOSS_HEAD_QIGONG);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onEnterState_Fly(ZombieState) */

void ZombieZombossQigong::onEnterState_Fly(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::SetIsFlying(param_1,true);
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onFlyAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossQigong::PlayJumpUp((ZombieAnimRig_ZombossQigong *)pZVar1,aRStack_50);
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
/* ZombieZombossQigong::onEnterState_Summon(ZombieState) */

void ZombieZombossQigong::onEnterState_Summon(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *pZVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_1[0x8e0] = (Zombie)0x0;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossQigong::PlaySummon((ZombieAnimRig_ZombossQigong *)pZVar1,aRStack_50);
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
/* ZombieZombossQigong::onEnterState_Fall(ZombieState) */

void ZombieZombossQigong::onEnterState_Fall(Zombie *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  RtMixedPtr aRStack_70 [8];
  int local_68 [2];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = time((time_t *)0x0);
  Sexy::SRand(uVar3);
  iVar1 = Sexy::Rand();
  pcVar5 = *(code **)(*(long *)param_1 + 0x78);
  (**(code **)(*(long *)param_1 + 0xd0))((RtId *)local_68,param_1);
  iVar2 = BoardTransforms::GridToBoardSpaceX(9 - local_68[0]);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1 % 3 + 1);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar2,(float)iVar1,0.0);
  (*pcVar5)(param_1,aVStack_60);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aVStack_60,"onFallAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (RtId *)local_68,aVStack_60);
  ZombieAnimRig_ZombossQigong::PlayPK((ZombieAnimRig_ZombossQigong *)pZVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aVStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onEnterState_Flick(ZombieState) */

void ZombieZombossQigong::onEnterState_Flick(Zombie *param_1)

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
  std::string::string(asStack_58,"onFlickAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossQigong::PlayFlick((ZombieAnimRig_ZombossQigong *)pZVar1,aRStack_50);
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
/* ZombieZombossQigong::onEnterState_Cure(ZombieState) */

void ZombieZombossQigong::onEnterState_Cure(Zombie *param_1)

{
  ZombieHydraHeadAnimRig *this;
  char *__s;
  float fVar1;
  float fVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onCureAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossQigong::PlayCureStart((ZombieAnimRig_ZombossQigong *)this,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  fVar1 = (float)PVZ_T();
  __s = (char *)ZombieAnimRig_ZombossQigong::getCureStartAnimName();
  std::string::string(asStack_58,__s);
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this,asStack_58);
  *(float *)(param_1 + 0x920) = fVar1 + fVar2 + 1.0;
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onEnterState_PK(ZombieState) */

void ZombieZombossQigong::onEnterState_PK(Zombie *param_1)

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
  std::string::string(asStack_58,"onPKAnimDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossQigong::PlayPK((ZombieAnimRig_ZombossQigong *)pZVar1,aRStack_50);
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
/* ZombieZombossQigong::updateState_Jump() */

void __thiscall ZombieZombossQigong::updateState_Jump(ZombieZombossQigong *this)

{
  int iVar1;
  int iVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  char *__s;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtMixedPtr aRStack_70 [8];
  int local_68 [2];
  Vec3 aVStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x8f0] == (ZombieZombossQigong)0x0) {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x8f4) <= fVar7) {
      this[0x8f0] = (ZombieZombossQigong)0x1;
      uVar4 = time((time_t *)0x0);
      Sexy::SRand(uVar4);
      iVar2 = Sexy::Rand();
      pcVar6 = *(code **)(*(long *)this + 0x78);
      (**(code **)(*(long *)this + 0xd0))((RtId *)local_68,this);
      iVar1 = BoardTransforms::GridToBoardSpaceX(9 - local_68[0]);
      iVar2 = BoardTransforms::GridToBoardSpaceY(iVar2 % 3 + 1);
      EATextSquish::Vec3::Vec3(aVStack_60,(float)iVar1,(float)iVar2,0.0);
      (*pcVar6)(this,aVStack_60);
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string((string *)aVStack_60,"onJumpDownAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                 (RtId *)local_68,aVStack_60);
      ZombieAnimRig_ZombossQigong::PlayPK((ZombieAnimRig_ZombossQigong *)pZVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aVStack_60);
      nop();
      Sexy::RtId::~RtId((RtId *)local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      fVar7 = (float)PVZ_T();
      pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
      __s = (char *)ZombieAnimRig_ZombossQigong::getJumpUpAnimName();
      std::string::string((string *)aVStack_60,__s);
      fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)pZVar3,(string *)aVStack_60);
      lVar5 = getActiveStage(this);
      *(float *)(this + 0x8f8) = fVar7 + fVar8 + *(float *)(lVar5 + 0x50);
      std::string::~string((string *)aVStack_60);
      nop();
    }
  }
  else {
    fVar7 = (float)PVZ_T();
    if (*(float *)(this + 0x8f8) <= fVar7) {
      uVar4 = time((time_t *)0x0);
      Sexy::SRand(uVar4);
      fVar7 = (float)FUN_047010a0(*(undefined4 *)(this + 0x280));
      fVar8 = (float)FUN_047010ac(*(undefined4 *)(this + 0x284));
      if (fVar7 / fVar8 < 0.5) {
        iVar2 = Sexy::Rand();
        lVar5 = getActiveStage(this);
        if ((float)(iVar2 % 100) < *(float *)(lVar5 + 0x54)) {
          Zombie::setZombieState((Zombie *)this,0x2b,0);
          goto LAB_04702d60;
        }
      }
      Zombie::setZombieState((Zombie *)this,0x24,0);
    }
  }
LAB_04702d60:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onFlickAnimDone(std::string const&) */

void ZombieZombossQigong::onFlickAnimDone(string *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  Plant *this;
  int iVar4;
  float fVar5;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [4];
  int local_1c;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  (**(code **)(*(long *)param_1 + 0xd0))(avStack_20,param_1);
  if (0 < local_1c) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,local_38 + -1,iVar4 + local_34);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      while( true ) {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (!bVar2) break;
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        this = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar3);
        if ((this != (Plant *)0x0) && (cVar1 = Plant::IsIgnoreControlAndDmg(this), cVar1 == '\0')) {
          Plant::beThrown(this);
        }
        FUN_04702004((exception_ptr *)&local_30);
      }
      iVar4 = iVar4 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      (**(code **)(*(long *)param_1 + 0xd0))(avStack_20,param_1);
    } while (iVar4 < local_1c);
  }
  fVar5 = (float)PVZ_T();
  if (*(float *)(param_1 + 0x8ec) <= fVar5) {
    Zombie::setZombieState((Zombie *)param_1,0x2a,0);
  }
  else {
    Zombie::setZombieState((Zombie *)param_1,0x29,0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::OnBossWinPower(bool) */

void __thiscall ZombieZombossQigong::OnBossWinPower(ZombieZombossQigong *this,bool param_1)

{
  float fVar1;
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::KillPowerPKView(gLawnApp);
  if (param_1) {
    Board::TryTriggerPlayerLoss(*(Board **)(gLawnApp + 0x9f0),0);
  }
  else {
    DamageInfo::DamageInfo(aDStack_68);
    local_60 = 0x447a0000;
    (**(code **)(*(long *)this + 0x110))(this,aDStack_68);
    fVar1 = (float)FUN_047010a0(*(undefined4 *)(this + 0x280));
    if (0.0 <= fVar1) {
      Zombie::setZombieState((Zombie *)this,0x2c,0);
    }
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossQigong::~ZombieZombossQigong() */

void __thiscall ZombieZombossQigong::~ZombieZombossQigong(ZombieZombossQigong *this)

{
  *(undefined ***)this = &PTR_GetClass_068bb7f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossQigong_068bc3e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<CollectableSun*,std::allocator<CollectableSun*>>::~vector
            ((vector<CollectableSun*,std::allocator<CollectableSun*>> *)(this + 0x908));
  Zomboss::~Zomboss((Zomboss *)this);
  return;
}


/* non-virtual thunk to ZombieZombossQigong::~ZombieZombossQigong() */

void __thiscall ZombieZombossQigong::~ZombieZombossQigong(ZombieZombossQigong *this)

{
  ~ZombieZombossQigong(this + -0x10);
  return;
}


/* ZombieZombossQigong::~ZombieZombossQigong() */

void __thiscall ZombieZombossQigong::~ZombieZombossQigong(ZombieZombossQigong *this)

{
  ~ZombieZombossQigong(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossQigong::~ZombieZombossQigong() */

void __thiscall ZombieZombossQigong::~ZombieZombossQigong(ZombieZombossQigong *this)

{
  ~ZombieZombossQigong(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::ZombieZombossQigong() */

void __thiscall ZombieZombossQigong::ZombieZombossQigong(ZombieZombossQigong *this)

{
  undefined *puVar1;
  string *psVar2;
  ZombieType *this_00;
  undefined4 uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zomboss::Zomboss((Zomboss *)this);
  *(undefined ***)this = &PTR_GetClass_068bb7f0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossQigong_068bc3e8;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x8fc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x908));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCollectableBanked);
  local_60 = local_28;
  local_70 = local_38;
  uStack_68 = uStack_30;
  MessageRouter::
  Subscribe<Collectable*,Sexy::CBMemberTranslatorX<ZombieZombossQigong,void(ZombieZombossQigong::*)(Collectable*)>>
            ((MessageRouter *)puVar1,Message::CollectableCollectionFinished,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnBossWinPower);
  local_90 = local_20;
  uStack_88 = uStack_18;
  local_80 = local_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<ZombieZombossQigong,void(ZombieZombossQigong::*)(bool)>>
            ((MessageRouter *)puVar1,Message::BossPowerWin,&local_90);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_40,"zomboss_ice_ball");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  std::string::~string(asStack_40);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  this[0x8e0] = (ZombieZombossQigong)0x1;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x8e8) = 0;
  this[0x8f0] = (ZombieZombossQigong)0x1;
  *(undefined4 *)(this + 0x8e4) = uVar3;
  *(undefined4 *)(this + 0x8ec) = uVar3;
  *(undefined4 *)(this + 0x8f4) = uVar3;
  *(undefined4 *)(this + 0x8f8) = uVar3;
  *(undefined4 *)(this + 0x920) = uVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossQigong::StaticNew() */

ZombieZombossQigong * ZombieZombossQigong::StaticNew(void)

{
  ZombieZombossQigong *this;
  
  this = ::operator_new(0x928);
  ZombieZombossQigong(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::onEnterState_IceBall(ZombieState) */

void ZombieZombossQigong::onEnterState_IceBall
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  string *psVar6;
  SexyVector3 *pSVar7;
  long *plVar8;
  code *pcVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  iVar1 = BoardTransforms::BoardSpaceToGridY(pfVar5[1]);
  iVar2 = BoardTransforms::BoardSpaceToGridX(*pfVar5);
  iVar4 = iVar1 + -1;
  do {
    DVec3::DVec3((DVec3 *)&local_18);
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar2);
    local_18 = (float)iVar3;
    iVar3 = iVar4 + 1;
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
    local_14 = (float)iVar4;
    plVar8 = *(long **)(gLawnApp + 0x9f0);
    pcVar9 = *(code **)(*plVar8 + 0x318);
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    std::string::string(asStack_30,"zomboss_ice_ball");
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
    (*pcVar9)(plVar8,aRStack_28,0xfffffffb,0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    std::string::~string(asStack_30);
    nop();
    pSVar7 = (SexyVector3 *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    BoardEntity::PlaceOnBoard(pSVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    iVar4 = iVar3;
  } while (iVar3 != iVar1 + 2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::OnCollectableBanked(Collectable*) */

void __thiscall
ZombieZombossQigong::OnCollectableBanked(ZombieZombossQigong *this,Collectable *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x908);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_04703a5c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((Collectable *)*puVar2 == param_1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<CollectableSun*,std::allocator<CollectableSun*>>::erase
                ((vector<CollectableSun*,std::allocator<CollectableSun*>> *)this_00,local_10);
      goto LAB_04703a5c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::updateState_Cure() */

void ZombieZombossQigong::updateState_Cure(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  ZombieZombossQigong *in_x0;
  long lVar4;
  undefined8 *puVar5;
  TRect<int> *this_00;
  ulong uVar6;
  Collectable *this_01;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  ulong uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float in_s1;
  float fVar12;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar9 = (float)PVZ_EOT();
  if (*(float *)(in_x0 + 0x920) == fVar9) {
    lVar4 = FUN_04701100(*(undefined8 *)(in_x0 + 0x908),*(undefined8 *)(in_x0 + 0x910));
    if (lVar4 == 0) {
      Zombie::setZombieState();
    }
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(in_x0 + 0x908);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
    do {
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
      while( true ) {
        if (!bVar1) goto LAB_04703c14;
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
        this_01 = (Collectable *)*puVar5;
        this_00 = (TRect<int> *)(**(code **)(*(long *)this_01 + 0x178))(this_01);
        fVar9 = (float)getSunCollectPos(in_x0);
        getSunCollectPos(in_x0);
        cVar2 = Sexy::TRect<int>::Contains(this_00,(int)fVar9,(int)in_s1);
        if (cVar2 == '\0') break;
        fVar9 = (float)FUN_047010a0(*(undefined4 *)(in_x0 + 0x280));
        iVar3 = CollectableCure::GetCureValue();
        in_s1 = (float)(iVar3 * 10);
        Zombie::SetHitpoints((Zombie *)in_x0,in_s1 + fVar9);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_20);
        local_20 = std::vector<CollectableSun*,std::allocator<CollectableSun*>>::erase
                             ((vector<CollectableSun*,std::allocator<CollectableSun*>> *)this,
                              local_18);
        Collectable::FinishCollect(this_01);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    } while( true );
  }
  fVar10 = (float)PVZ_T();
  fVar12 = *(float *)(in_x0 + 0x920);
  if (fVar12 <= fVar10) {
    *(float *)(in_x0 + 0x920) = fVar9;
    uVar7 = 0;
    while( true ) {
      uVar8 = *(undefined8 *)(in_x0 + 0x908);
      uVar6 = FUN_04701100(uVar8,*(undefined8 *)(in_x0 + 0x910));
      if (uVar6 <= uVar7) break;
      puVar5 = (undefined8 *)FUN_0470110c(uVar8,uVar7);
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar5;
      std::string::string((string *)&local_18,"red");
      CollectableSun::StartCaptureEffect((CollectableSun *)this_02,(string *)&local_18);
      std::string::~string((string *)&local_18);
      nop();
      DVec3::DVec3((DVec3 *)&local_18);
      uVar11 = getSunCollectPos(in_x0);
      local_18 = CONCAT44(local_18._4_4_,uVar11);
      getSunCollectPos(in_x0);
      local_18 = CONCAT44(fVar12,(undefined4)local_18);
      uVar8 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_02);
      Collectable::SetMotionInterpolate
                ((Collectable *)0x40000000,this_02,uVar8,(string *)&local_18,3);
      uVar7 = uVar7 + 1;
    }
  }
LAB_04703c14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::SummonSunFromSky() */

void __thiscall ZombieZombossQigong::SummonSunFromSky(ZombieZombossQigong *this)

{
  CollectableSun *pCVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  string *psVar4;
  float fVar5;
  CollectableSun *local_40;
  float local_38;
  float local_34;
  float local_30;
  Vec3 aVStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar4 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"sun");
  this_00 = (RtObject *)Board::AddCollectable(psVar4);
  local_40 = Sexy::RtObject::Cast<CollectableSun>(this_00);
  std::string::~string(asStack_18);
  nop();
  pCVar1 = local_40;
  fVar5 = (float)PVZ_T();
  FUN_047010b0(fVar5 + 100.0,pCVar1 + 0x1e8);
  iVar2 = (**(code **)(*(long *)this + 0x300))(this,0x1a4);
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  DVec3::DVec3((DVec3 *)&local_38);
  local_38 = (float)(0x280 - iVar2);
  iVar2 = (**(code **)(*(long *)this + 0x300))(this,0x118);
  local_34 = (float)(iVar2 + 200);
  local_30 = local_34 - (-15.0 - (float)iVar3);
  iVar3 = Sexy::Rand();
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,0.0,(float)(-iVar3 % 200 + 0x32));
  (**(code **)(*(long *)local_40 + 0x78))(local_40,(DVec3 *)&local_38);
  pCVar1 = local_40;
  DVec3::DVec3((DVec3 *)asStack_18);
  Collectable::SetMotionNewtonian
            ((Collectable *)pCVar1,(SexyVector3 *)aVStack_28,(SexyVector3 *)asStack_18,true);
  Collectable::StartExpirationTimerAfterMotion((Collectable *)local_40);
  Collectable::ForceUpdateEffect((Collectable *)local_40);
  std::vector<CollectableSun*,std::allocator<CollectableSun*>>::push_back
            ((vector<CollectableSun*,std::allocator<CollectableSun*>> *)(this + 0x908),&local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossQigong::onCureAnimDone(std::string const&) */

void ZombieZombossQigong::onCureAnimDone(string *param_1)

{
  long lVar1;
  ZombieHydraHeadAnimRig *this;
  int iVar2;
  
  std::vector<CollectableSun*,std::allocator<CollectableSun*>>::clear
            ((vector<CollectableSun*,std::allocator<CollectableSun*>> *)(param_1 + 0x908));
  iVar2 = 0;
  while( true ) {
    lVar1 = getActiveStage((ZombieZombossQigong *)param_1);
    if (*(int *)(lVar1 + 0x58) <= iVar2) break;
    SummonSunFromSky((ZombieZombossQigong *)param_1);
    iVar2 = iVar2 + 1;
  }
  this = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)param_1);
  ZombieAnimRig_ZombossQigong::PlayCureIdle((ZombieAnimRig_ZombossQigong *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossQigong::StaticClassInit() */

void ZombieZombossQigong::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieZombossQigong");
      (*pcVar4)(plVar1,asStack_150,FUN_04704920,0x928,0);
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
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Fly");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Summon");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_FlyIdle");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb58);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb60);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb68);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Fall");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb70);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb78);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb80);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Flick");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb88);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb90);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb98);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_IceBall");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xba8);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_PK");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbb8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc0);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbc8);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Cure");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbd8);
  Sexy::Delegate0::Delegate0<ZombieZombossQigong,void(ZombieZombossQigong::*)()>
            (aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xbe0);
  Sexy::Delegate1<ZombieState>::
  Delegate1<ZombieZombossQigong,void(ZombieZombossQigong::*)(ZombieState)>(aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZombossQigong_Jump");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_04704134(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieZombossQigong::StaticGetClass() */

long * ZombieZombossQigong::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossQigong::GetClass() const */

long * ZombieZombossQigong::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieZombossQigong",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

