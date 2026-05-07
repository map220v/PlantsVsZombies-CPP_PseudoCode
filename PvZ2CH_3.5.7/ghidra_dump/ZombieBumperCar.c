// Class: ZombieBumperCar


/* ZombieBumperCar::onWalkAnimContinued(std::string const&, std::string const&, int) */

void ZombieBumperCar::onWalkAnimContinued(string *param_1,string *param_2,int param_3)

{
  param_1[0x80c] = (string)0x1;
  return;
}


/* ZombieBumperCar::onImpactAnimDone(std::string const&) */

void ZombieBumperCar::onImpactAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x24);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onBumpingImpactAnimDone(std::string const&) */

void ZombieBumperCar::onBumpingImpactAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x2a);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onPrepareChargedAnimDone(std::string const&) */

void ZombieBumperCar::onPrepareChargedAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x24);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onPrepareBumpingAnimDone(std::string const&) */

void ZombieBumperCar::onPrepareBumpingAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x22);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onSpinEndAnimDone(std::string const&) */

void ZombieBumperCar::onSpinEndAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)param_1,0x2b);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onBumpingBackStopAnimDone(std::string const&) */

void ZombieBumperCar::onBumpingBackStopAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Zombie::SetFacing((Zombie *)param_1,0);
      Zombie::setZombieState((Zombie *)param_1,0x2b,0);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateBumpingBack(float) */

void ZombieBumperCar::updateBumpingBack(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x828),param_1);
  local_28 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateCharge(float) */

void ZombieBumperCar::updateCharge(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar5;
  long lVar6;
  float in_s1;
  undefined8 local_38;
  undefined4 local_30;
  float local_28;
  float local_24;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_38 = *puVar5;
  local_30 = *(undefined4 *)(puVar5 + 1);
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)(in_x0 + 0x800),param_1);
  local_28 = (float)Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)local_18);
  lVar6 = *(long *)(gLawnApp + 0x9f0);
  iVar1 = *(int *)(lVar6 + 0xf8);
  local_24 = in_s1;
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = *(int *)(lVar6 + 0xfc);
  iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_28 = (float)ClampFloat(local_28,190.0,(float)(iVar1 * iVar3 + 0xd2));
  local_24 = (float)ClampFloat(local_24,150.0,(float)(iVar2 * iVar4 + 0xaa));
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::prepareCharge() */

void __thiscall ZombieBumperCar::prepareCharge(ZombieBumperCar *this)

{
  Zombie::setZombieState((Zombie *)this,0x23,0);
  return;
}


/* ZombieBumperCar::Trigger(BumperCarSkillSet) */

void __thiscall ZombieBumperCar::Trigger(ZombieBumperCar *this,int param_2)

{
  *(undefined4 *)(this + 0x850) = 0;
  if (param_2 == 1) {
    prepareCharge(this);
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 2) {
      ZombieZombossExplosive::tryBigSummonAction((ZombieZombossExplosive *)this);
      return;
    }
    return;
  }
  ZombieVan::prepareBumping((ZombieVan *)this);
  return;
}


/* ZombieBumperCar::onPreparingAnimDone(std::string const&) */

void ZombieBumperCar::onPreparingAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
    if (cVar1 == '\0') {
      Trigger((ZombieBumperCar *)param_1);
      return;
    }
  }
  return;
}


/* ZombieBumperCar::onSpinStartAnimDone(std::string const&) */

void ZombieBumperCar::onSpinStartAnimDone(string *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x328))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 == '\0'))
  {
    ZombieZombossMech::BeginExiting((ZombieZombossMech *)param_1);
    return;
  }
  return;
}


/* ZombieBumperCar::onExitState_BumpingImpact(ZombieState) */

void ZombieBumperCar::onExitState_BumpingImpact(ZombieVan *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl(param_1,false,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::findChargeReturnLocation() */

void __thiscall ZombieBumperCar::findChargeReturnLocation(ZombieBumperCar *this)

{
  int iVar1;
  int iVar2;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2 + -1);
  iVar1 = BoardTransforms::GridToBoardSpaceY(iVar1);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar1,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x83c),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::resetBumping() */

void __thiscall ZombieBumperCar::resetBumping(ZombieBumperCar *this)

{
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x828),(SexyVector3 *)aVStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::onExitState_ReturnNormal(ZombieState) */

void ZombieBumperCar::onExitState_ReturnNormal(ZombieBumperCar *param_1)

{
  float fVar1;
  
  resetBumping(param_1);
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl((ZombieVan *)param_1,false,fVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)param_1,false);
  return;
}


/* ZombieBumperCar::triggerRandomSkill() */

void __thiscall ZombieBumperCar::triggerRandomSkill(ZombieBumperCar *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(long *)this + 0x300))(this,2);
  if (iVar1 == 2) {
    Trigger(this,0);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  Trigger(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::resetCharge() */

void __thiscall ZombieBumperCar::resetCharge(ZombieBumperCar *this)

{
  undefined8 local_18 [2];
  long local_8;
  
  this[0x820] = (ZombieBumperCar)0x1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)local_18,-9,-9);
  *(undefined8 *)(this + 0x818) = local_18[0];
  *(undefined4 *)(this + 0x814) = 0;
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x800),(SexyVector3 *)local_18);
  FUN_033d38d8(this + 0x84c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onDrawRotation(Sexy::Graphics*, Sexy::SexyTransform2D&) */

void __thiscall
ZombieBumperCar::onDrawRotation(ZombieBumperCar *this,Graphics *param_1,SexyTransform2D *param_2)

{
  SexyTransform2D *pSVar1;
  SexyTransform2D *pSVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  pSVar1 = param_2 + 0x14;
  pSVar2 = param_2 + 8;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_18);
  (**(code **)(**(long **)(this + 0xc0) + 0x90))(*(long **)(this + 0xc0),(Insets *)&local_18);
  fVar7 = (float)local_18 + (float)local_10 * 0.5;
  fVar6 = (float)local_14 + (float)local_c * 0.5;
  FUN_033d37c0(-fVar7,-fVar6,pSVar2,pSVar1);
  fVar5 = (float)FUN_033d38bc(*(undefined4 *)(this + 0x36c));
  Sexy::SexyTransform2D::RotateDeg(param_2,fVar5);
  FUN_033d37c0(fVar7,fVar6,pSVar2,pSVar1);
  fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  fVar6 = (float)FUN_033d4400(*(undefined4 *)(lVar4 + 0xc4));
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  fVar7 = (float)FUN_033d4400(*(undefined4 *)(lVar4 + 200));
  FUN_033d37c0(-(fVar6 * fVar5),-fVar7,pSVar2,pSVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::bumpingBack() */

void ZombieBumperCar::bumpingBack(void)

{
  Zombie *in_x0;
  ZombieAnimRig_BumperCar *this;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator-((SexyVector3 *)(in_x0 + 0x828));
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x828),(SexyVector3 *)local_18);
  Zombie::SetFacing();
  Zombie::GetAnimRig(in_x0);
  nop();
  if (this != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlayNormal(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::onEnterState_ReturnNormal(ZombieState) */

void __thiscall ZombieBumperCar::onEnterState_ReturnNormal(ZombieBumperCar *this,int param_2)

{
  float fVar1;
  
  if (param_2 == 0x26) {
    bumpingBack();
  }
  else if (param_2 == 0x24) {
    resetBumping(this);
    Zombie::SetFacing((Zombie *)this,0);
    resetCharge(this);
    findChargeReturnLocation(this);
  }
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl((ZombieVan *)this,true,fVar1);
  Zombie::SetIgnoresAllDamage((Zombie *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::createImpactEffect(Sexy::SexyVector3 const&) */

void ZombieBumperCar::createImpactEffect(SexyVector3 *param_1)

{
  undefined4 uVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  SexyVector3 *in_x1;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18[0] = Sexy::SexyVector3::operator+(in_x1,(SexyVector3 *)&DAT_06a9e338);
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_BUMP_EFFECT");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"impact");
  Effect_PopAnim::PlaySingleAnimation(this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)local_18,-1);
  uVar1 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(*(float *)(in_x1 + 4));
  uVar1 = Board::MakeRenderOrder(0x65130,uVar1,0);
  FUN_033d38a8(this + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::launchProjectile(Projectile*) */

void ZombieBumperCar::launchProjectile(Projectile *param_1)

{
  int iVar1;
  ZombieBumperCarProps *pZVar2;
  undefined8 uVar3;
  Projectile *in_x1;
  float fVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_x1 != (Projectile *)0x0) {
    std::
    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)param_1);
    pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
    ValueRange::GetRandomValue((ValueRange *)(pZVar2 + 0x270));
    (**(code **)(*(long *)in_x1 + 0x78))();
    pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
    local_48 = *(undefined8 *)(pZVar2 + 600);
    local_40 = *(undefined4 *)(pZVar2 + 0x260);
    pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
    local_30 = *(undefined4 *)(pZVar2 + 0x26c);
    local_38 = *(undefined8 *)(pZVar2 + 0x264);
    fVar4 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
    local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_48,fVar4);
    local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,-1.0);
    Projectile::SetVelocity(in_x1,(SexyVector3 *)local_18);
    Projectile::SetAcceleration(in_x1,(SexyVector3 *)&local_38);
    iVar1 = Zombie::GetFacing((Zombie *)param_1);
    FUN_033d38b0(in_x1 + 0xd4,iVar1 == 0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_18);
    Projectile::SetTarget(in_x1,(RtWeakPtr *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
    uVar3 = operator|(0x40,0x80);
    uVar3 = operator|(uVar3,7);
    uVar3 = operator|(uVar3,0x100);
    iVar1 = operator|(uVar3,8);
    DangerRoomManager::SetMaxLevel((DangerRoomManager *)in_x1,iVar1);
    Projectile::SetInstigator(in_x1,(BoardEntity *)param_1);
    Projectile::NotifyDeflection((BoardEntity *)in_x1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateDamageState() */

void __thiscall ZombieBumperCar::updateDamageState(ZombieBumperCar *this)

{
  int iVar1;
  int iVar2;
  ZombieBumperCarProps *pZVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar4;
  int *piVar5;
  ZombieHydraHeadAnimRig *this_01;
  float fVar6;
  int local_14 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  iVar1 = *(int *)(pZVar3 + 0x304);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar2 = 0;
  if (iVar1 + 1 != 0) {
    iVar2 = (int)*(float *)(lVar4 + 0x18) / (iVar1 + 1);
  }
  fVar6 = (float)FUN_033d38c0(*(undefined4 *)(this + 0x280));
  local_14[1] = 0;
  local_14[0] = 0;
  if (iVar2 != 0) {
    local_14[0] = (int)fVar6 / iVar2;
  }
  local_14[0] = iVar1 - local_14[0];
  piVar5 = eastl::max_alt<int>(local_14,local_14 + 1);
  local_14[2] = iVar1;
  piVar5 = eastl::min_alt<int>(piVar5,local_14 + 2);
  if (*(int *)(this + 0x85c) == *piVar5) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
  }
  else {
    *(int *)(this + 0x85c) = *piVar5;
    this_01 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this);
    if (local_8 == ___stack_chk_guard) {
      ZombieAnimRig_BumperCar::SetDamageState
                ((ZombieAnimRig_BumperCar *)this_01,*(int *)(this + 0x85c));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::bump() */

void __thiscall ZombieBumperCar::bump(ZombieBumperCar *this)

{
  ZombieBumperCarProps *pZVar1;
  ZombieAnimRig_BumperCar *this_00;
  
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x828),(SexyVector3 *)(pZVar1 + 0x234));
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlayBumping(this_00);
    return;
  }
  return;
}


/* ZombieBumperCar::onEnterState_Bumping(ZombieState) */

void ZombieBumperCar::onEnterState_Bumping(Zombie *param_1)

{
  ZombieBumperCarProps *pZVar1;
  ZombieAnimRig_BumperCar *this;
  
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>(param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x828),(SexyVector3 *)(pZVar1 + 0x234));
  Zombie::GetAnimRig(param_1);
  nop();
  if (this != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlayBumping(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateBumping(float) */

void ZombieBumperCar::updateBumping(float param_1)

{
  SexyVector3 *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined8 *puVar1;
  ZombieBumperCarProps *pZVar2;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_58 [4];
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (SexyVector3 *)(in_x0 + 0x828);
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  local_88 = *puVar1;
  local_80 = *(undefined4 *)(puVar1 + 1);
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)in_x0);
  local_78 = *(undefined8 *)(pZVar2 + 0x228);
  local_70 = *(undefined4 *)(pZVar2 + 0x230);
  local_58[0] = Sexy::SexyVector3::operator*(this,param_1);
  local_48[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_88,(SexyVector3 *)local_58);
  local_38[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,param_1);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_38,param_1);
  local_18[0] = Sexy::SexyVector3::operator*((SexyVector3 *)local_28,0.5);
  local_68 = Sexy::SexyVector3::operator+((SexyVector3 *)local_48,(SexyVector3 *)local_18);
  local_28[0] = Sexy::SexyVector3::operator*((SexyVector3 *)&local_78,param_1);
  local_18[0] = Sexy::SexyVector3::operator+(this,(SexyVector3 *)local_28);
  Sexy::SexyVector3::operator=(this,(SexyVector3 *)local_18);
  (**(code **)(*(long *)in_x0 + 0x78))();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::calcHitRect() */

void ZombieBumperCar::calcHitRect(void)

{
  int iVar1;
  int iVar2;
  Zombie *in_x0;
  ZombieBumperCarProps *pZVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pZVar3 = Zombie::GetProps<ZombieBumperCarProps>(in_x0);
  Sexy::Insets::Insets(in_x8,(Insets *)(pZVar3 + 0x218));
  fVar6 = *(float *)(in_x0 + 0x1c);
  fVar4 = (float)FUN_033d3e98(*(undefined4 *)(in_x0 + 0x18),fVar6,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = *(int *)(in_x8 + 8);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier(in_x0);
  *(int *)in_x8 = (int)((fVar4 - (float)(iVar1 / 2)) + (float)iVar2 * fVar5);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  return;
}


/* ZombieBumperCar::updateState_Entering() */

void __thiscall ZombieBumperCar::updateState_Entering(ZombieBumperCar *this)

{
  float *pfVar1;
  ZombieBumperCarProps *pZVar2;
  float fVar3;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar1;
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  if ((fVar3 <= *(float *)(pZVar2 + 0x214)) && (this[0x80c] != (ZombieBumperCar)0x0)) {
    ZombieVan::prepareSpawn((ZombieVan *)this);
  }
  this[0x80c] = (ZombieBumperCar)0x0;
  return;
}


/* ZombieBumperCar::doSpinning() */

void __thiscall ZombieBumperCar::doSpinning(ZombieBumperCar *this)

{
  ZombieAnimRig_BumperCar *this_00;
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlaySpinning(this_00);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  *(float *)(this + 0x848) = fVar2 + *(float *)(pZVar1 + 0x254);
  return;
}


/* ZombieBumperCar::onEnterState_Spinning(ZombieState) */

void ZombieBumperCar::onEnterState_Spinning(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *this;
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig(param_1);
  nop();
  if (this != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlaySpinning(this);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>(param_1);
  *(float *)(param_1 + 0x848) = fVar2 + *(float *)(pZVar1 + 0x254);
  return;
}


/* ZombieBumperCar::onExitState_SpinEnd(ZombieState) */

void ZombieBumperCar::onExitState_SpinEnd(ZombieVan *param_1)

{
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  
  fVar2 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl(param_1,false,fVar2);
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
  *(float *)(param_1 + 0x838) = fVar2 + *(float *)(pZVar1 + 0x248);
  return;
}


/* ZombieBumperCar::onExitState_Charging(ZombieState) */

void ZombieBumperCar::onExitState_Charging(ZombieBumperCar *param_1)

{
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x824) == 0) {
    resetCharge(param_1);
    fVar2 = (float)PVZ_T();
    fVar4 = *(float *)(param_1 + 0x854);
    fVar3 = *(float *)(param_1 + 0x850);
    pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
    if ((fVar2 - fVar4) + fVar3 < *(float *)(pZVar1 + 0x300)) {
      param_1[0x858] = (ZombieBumperCar)0x1;
      *(float *)(param_1 + 0x850) = *(float *)(param_1 + 0x850) + (fVar2 - fVar4);
      fVar2 = (float)PVZ_EOT();
      ZombieVan::setImmuneControl((ZombieVan *)param_1,false,fVar2);
      return;
    }
  }
  fVar2 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl((ZombieVan *)param_1,false,fVar2);
  return;
}


/* ZombieBumperCar::enterNormal() */

void __thiscall ZombieBumperCar::enterNormal(ZombieBumperCar *this)

{
  ZombieAnimRig_BumperCar *this_00;
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (this_00 != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlayNormal(this_00);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  *(float *)(this + 0x834) = fVar2 + *(float *)(pZVar1 + 0x240);
  return;
}


/* ZombieBumperCar::onEnterState_Normal(ZombieState) */

void ZombieBumperCar::onEnterState_Normal(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *this;
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  
  Zombie::GetAnimRig(param_1);
  nop();
  if (this != (ZombieAnimRig_BumperCar *)0x0) {
    ZombieAnimRig_BumperCar::PlayNormal(this);
  }
  fVar2 = (float)PVZ_T();
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>(param_1);
  *(float *)(param_1 + 0x834) = fVar2 + *(float *)(pZVar1 + 0x240);
  return;
}


/* ZombieBumperCar::updateState_Normal() */

void __thiscall ZombieBumperCar::updateState_Normal(ZombieBumperCar *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ZombieLaneChangingSubsystem *pZVar4;
  long lVar5;
  ZombieBumperCarProps *pZVar6;
  float fVar7;
  
  pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = ZombieLaneChangingSubsystem::IsZombieChangingLanes((Zombie *)pZVar4);
  if (cVar1 == '\0') {
    if (this[0x858] == (ZombieBumperCar)0x0) {
      lVar5 = FUN_033d3aa8(*(undefined8 *)(this + 0x8f0),*(undefined8 *)(this + 0x8f8));
      if ((lVar5 == 0) || (fVar7 = (float)PVZ_T(), fVar7 < *(float *)(this + 0x838))) {
        fVar7 = (float)PVZ_T();
        if (*(float *)(this + 0x834) <= fVar7) {
          triggerRandomSkill(this);
          fVar7 = (float)PVZ_T();
          pZVar6 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
          *(float *)(this + 0x834) = fVar7 + *(float *)(pZVar6 + 0x240);
        }
      }
      else {
        Trigger(this,2);
      }
    }
    else {
      Trigger(this,1);
      this[0x858] = (ZombieBumperCar)0x0;
    }
  }
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 + -1 == iVar2) {
      iVar3 = iVar3 + -2;
    }
    else {
      fVar7 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      iVar3 = iVar2 + -1;
      if (fVar7 < 0.5) {
        iVar3 = iVar2 + 1;
      }
    }
  }
  pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar6 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  ZombieLaneChangingSubsystem::ForceLaneChange
            ((ZombieLaneChangingSubsystem *)0x3f4ccccd,*(undefined4 *)(pZVar6 + 0x244),pZVar4,this,
             iVar3,4);
  return;
}


/* ZombieBumperCar::onEnterState_RecoveryResilienceHorizon(ZombieState) */

void ZombieBumperCar::onEnterState_RecoveryResilienceHorizon(Zombie *param_1)

{
  char cVar1;
  ZombieBumperCarProps *pZVar2;
  ProfileMgr *this;
  PlayerInfo *pPVar3;
  
  cVar1 = ResilienceTutorial::IsPlayingResilienceTutorialIntro();
  if (cVar1 != '\0') {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,0x4e);
    if (cVar1 == '\0') {
      return;
    }
  }
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>(param_1);
  Sexy::SexyVector3::operator=((SexyVector3 *)(param_1 + 0x828),(SexyVector3 *)(pZVar2 + 0x234));
  bumpingBack();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::doImpact() */

void __thiscall ZombieBumperCar::doImpact(ZombieBumperCar *this)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onImpactAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayImpact(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_Impact(ZombieState) */

void ZombieBumperCar::onEnterState_Impact(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onImpactAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayImpact(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_Preparing(ZombieState) */

void ZombieBumperCar::onEnterState_Preparing(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onPreparingAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayPreparing(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_PrepareBumping(ZombieState) */

void ZombieBumperCar::onEnterState_PrepareBumping(ZombieVan *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  float fVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl(param_1,true,fVar1);
  Zombie::GetAnimRig((Zombie *)param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onPrepareBumpingAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayPrepareBumping(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_PrepareCharge(ZombieState) */

void ZombieBumperCar::onEnterState_PrepareCharge(ZombieVan *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  float fVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl(param_1,true,fVar1);
  Zombie::GetAnimRig((Zombie *)param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onPrepareChargedAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayPrepareBumping(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_SpinStart(ZombieState) */

void ZombieBumperCar::onEnterState_SpinStart(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  float fVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpinStartAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlaySpinStart(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl((ZombieVan *)param_1,true,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_SpinEnd(ZombieState) */

void ZombieBumperCar::onEnterState_SpinEnd(Zombie *param_1)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig(param_1);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onSpinEndAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlaySpinEnd(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::doBumpingImpact() */

void __thiscall ZombieBumperCar::doBumpingImpact(ZombieBumperCar *this)

{
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetAnimRig((Zombie *)this);
  nop();
  if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onBumpingImpactAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    ZombieAnimRig_BumperCar::PlayBumpingImpact(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::onEnterState_BumpingImpact(ZombieState) */

void ZombieBumperCar::onEnterState_BumpingImpact(ZombieVan *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl(param_1,true,fVar1);
  doBumpingImpact((ZombieBumperCar *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_Entering(ZombieState) */

void ZombieBumperCar::onEnterState_Entering(Zombie *param_1)

{
  char cVar1;
  long *plVar2;
  ZombieAnimRig *this;
  ZombieBumperCarProps *pZVar3;
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
    pZVar3 = Zombie::GetProps<ZombieBumperCarProps>(param_1);
    ZombieAnimRig::SetDesiredWalkVelocity(this,*(float *)(pZVar3 + 0x210));
  }
  std::string::string(asStack_58,"Play_Zomb_DarkAges_Knight_Rush_Ready");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_58,0.0);
  std::string::~string(asStack_58);
  nop();
  *(undefined4 *)(param_1 + 0x838) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::ZombieBumperCar() */

void __thiscall ZombieBumperCar::ZombieBumperCar(ZombieBumperCar *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  *(undefined ***)this = &PTR_GetClass_066199e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBumperCar_0661a548;
  DVec3::DVec3((DVec3 *)(this + 0x800));
  Sexy::Point::Point((Point *)(this + 0x818));
  DVec3::DVec3((DVec3 *)(this + 0x828));
  DVec3::DVec3((DVec3 *)(this + 0x83c));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x860));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x890));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x8c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x8f0));
  this[0x80c] = (ZombieBumperCar)0x0;
  *(undefined4 *)(this + 0x810) = 0;
  this[0x820] = (ZombieBumperCar)0x0;
  *(undefined4 *)(this + 0x824) = 0;
  *(undefined4 *)(this + 0x814) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x84c) = 0;
  this[0x858] = (ZombieBumperCar)0x0;
  *(undefined4 *)(this + 0x85c) = 0;
  *(undefined4 *)(this + 0x908) = 0;
  *(undefined4 *)(this + 0x850) = 0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x834) = uVar1;
  *(undefined4 *)(this + 0x848) = uVar1;
  *(undefined4 *)(this + 0x838) = uVar1;
  return;
}


/* ZombieBumperCar::StaticNew() */

ZombieBumperCar * ZombieBumperCar::StaticNew(void)

{
  ZombieBumperCar *this;
  
  this = ::operator_new(0x910);
  ZombieBumperCar(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::checkBumpingCollision() */

void __thiscall ZombieBumperCar::checkBumpingCollision(ZombieBumperCar *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  RealObject *this_00;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int local_c8;
  int local_c4;
  Point aPStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  Vec3 aVStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  calcHitRect();
  uVar2 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,auStack_90
             ,uVar2,uVar2);
  uVar8 = local_80;
  lVar4 = FUN_033d3ad8(local_80,local_78);
  if (lVar4 != 0) {
    do {
      FUN_033d3ae4(uVar8,uVar7);
      nop();
      iVar3 = (**(code **)(*(long *)this_00 + 0x180))();
      if ((((1 < iVar3) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0')) &&
          (cVar1 = Plant::CanBeTargeted((Plant *)this_00), cVar1 != '\0')) &&
         (cVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00), cVar1 != '\0')) {
        uVar8 = 1;
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_b0 = *puVar6;
        local_a8 = *(undefined4 *)(puVar6 + 1);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_c8,(TPoint *)aDStack_68);
        EATextSquish::Vec3::Vec3(aVStack_a0,(float)local_c8,(float)local_c4,0.0);
        createImpactEffect((SexyVector3 *)this);
        pcVar9 = *(code **)(*(long *)this_00 + 0x120);
        Sexy::Point::Point(aPStack_c0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_b8,local_b4,aDStack_68,this,aPStack_c0,0);
        (*pcVar9)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        goto LAB_033d96ec;
      }
      uVar8 = local_80;
      uVar7 = uVar7 + 1;
      uVar5 = FUN_033d3ad8(local_80,local_78);
    } while (uVar7 < uVar5);
  }
  uVar8 = 0;
LAB_033d96ec:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* ZombieBumperCar::checkBumpingEdge(bool) */

ulong __thiscall ZombieBumperCar::checkBumpingEdge(ZombieBumperCar *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar3 = checkBumpingCollision(this);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    BoardConstants::NUMBER_OF_COLUMNS();
  }
  else {
    uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 + -1 <= (int)uVar1) {
      return 2;
    }
  }
  return (ulong)((uint)param_1 < uVar1 >> 0x1f);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateBumpingBackEdge() */

void __thiscall ZombieBumperCar::updateBumpingBackEdge(ZombieBumperCar *this)

{
  int iVar1;
  ZombieAnimRig_BumperCar *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = checkBumpingEdge(this,true);
  if (iVar1 != 0) {
    resetBumping(this);
    Zombie::GetAnimRig((Zombie *)this);
    nop();
    if (extraout_x0 != (ZombieAnimRig_BumperCar *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onBumpingBackStopAnimDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      ZombieAnimRig_BumperCar::PlayStop(extraout_x0,aRStack_50);
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


/* ZombieBumperCar::updateState_RecoveryResilienceHorizon() */

void __thiscall ZombieBumperCar::updateState_RecoveryResilienceHorizon(ZombieBumperCar *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  float fVar3;
  
  cVar1 = ResilienceTutorial::IsPlayingResilienceTutorialIntro();
  if (cVar1 != '\0') {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar2,0x4e);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0,0);
      return;
    }
  }
  if (*(float *)(this + 0x828) == 0.0) {
    return;
  }
  updateBumpingBackEdge(this);
  fVar3 = (float)PVZ_Dt();
  updateBumpingBack(fVar3);
  return;
}


/* ZombieBumperCar::updateBumpingEdge() */

void __thiscall ZombieBumperCar::updateBumpingEdge(ZombieBumperCar *this)

{
  int iVar1;
  
  iVar1 = checkBumpingEdge(this,false);
  if (iVar1 == 0) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x26,0);
  return;
}


/* ZombieBumperCar::updateState_Bumping() */

void __thiscall ZombieBumperCar::updateState_Bumping(ZombieBumperCar *this)

{
  float fVar1;
  
  if (*(float *)(this + 0x828) == 0.0) {
    return;
  }
  updateBumpingEdge(this);
  fVar1 = (float)PVZ_Dt();
  updateBumping(fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::checkEnterCollision() */

void __thiscall ZombieBumperCar::checkEnterCollision(ZombieBumperCar *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  PlantGroup *this_00;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  calcHitRect();
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,0x10,
             auStack_90,uVar3,uVar3);
  uVar10 = local_80;
  lVar6 = FUN_033d3ad8(local_80,local_78);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_033d3ae4(uVar10,uVar9);
      bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)*puVar7);
      uVar10 = local_80;
      if (bVar1) {
        FUN_033d3ae4(local_80,uVar9);
        nop();
        if (((this_00 != (PlantGroup *)0x0) &&
            (cVar2 = PlantGroup::Empty(this_00), uVar10 = local_80, cVar2 == '\0')) &&
           (cVar2 = PlantGroup::CanBeTargetedBy(this_00,(BoardEntity *)this,false),
           uVar10 = local_80, cVar2 != '\0')) {
          iVar4 = FUN_033d38e0(*(undefined4 *)(this_00 + 0xa4));
          iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
          uVar10 = local_80;
          if (iVar4 == iVar5 + -1) {
            pcVar11 = *(code **)(*(long *)this_00 + 0x120);
            Sexy::Point::Point(aPStack_a0,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)0x0,local_98,local_94,aDStack_68,0x200000,this,aPStack_a0,0);
            (*pcVar11)(this_00,aDStack_68);
            DamageInfo::~DamageInfo(aDStack_68);
            uVar10 = local_80;
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar8 = FUN_033d3ad8(uVar10,local_78);
    } while (uVar9 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::dropAllProjectiles() */

void __thiscall ZombieBumperCar::dropAllProjectiles(ZombieBumperCar *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  GridItemPoolEntry *pGVar2;
  long *plVar3;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x8f0);
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1) {
    pGVar2 = (GridItemPoolEntry *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    GridItemPoolEntry::GridItemPoolEntry((GridItemPoolEntry *)aRStack_18,pGVar2);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      (**(code **)(*plVar3 + 0x48))();
    }
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_28);
  }
  std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::clear
            ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::~ZombieBumperCar() */

void __thiscall ZombieBumperCar::~ZombieBumperCar(ZombieBumperCar *this)

{
  *(undefined ***)this = &PTR_GetClass_066199e0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieBumperCar_0661a548;
  std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::~vector
            ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)(this + 0x8f0));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x8c0));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x890));
  std::
  set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
  ::~set((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
          *)(this + 0x860));
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieBumperCar::~ZombieBumperCar() */

void __thiscall ZombieBumperCar::~ZombieBumperCar(ZombieBumperCar *this)

{
  ~ZombieBumperCar(this + -0x10);
  return;
}


/* ZombieBumperCar::~ZombieBumperCar() */

void __thiscall ZombieBumperCar::~ZombieBumperCar(ZombieBumperCar *this)

{
  ~ZombieBumperCar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieBumperCar::~ZombieBumperCar() */

void __thiscall ZombieBumperCar::~ZombieBumperCar(ZombieBumperCar *this)

{
  ~ZombieBumperCar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::getChargeVelocity() */

void __thiscall ZombieBumperCar::getChargeVelocity(ZombieBumperCar *this)

{
  char cVar1;
  int iVar2;
  ZombieBumperCarProps *pZVar3;
  int *piVar4;
  long lVar5;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar3 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  std::vector<ChargeInfo,std::allocator<ChargeInfo>>::vector
            ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20,(vector *)(pZVar3 + 0x2e8));
  cVar1 = std::vector<ChargeInfo,std::allocator<ChargeInfo>>::empty
                    ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20);
  if (cVar1 == '\0') {
    local_40 = FUN_033d38d4(*(undefined4 *)(this + 0x84c));
    iVar2 = FUN_033d3a48(local_20,local_18);
    local_30 = CONCAT44(local_30._4_4_,iVar2 + -1);
    piVar4 = eastl::min_alt<int>(&local_40,(int *)&local_30);
    lVar5 = FUN_033d3a70(local_20,(long)*piVar4);
    local_30 = *(undefined8 *)(lVar5 + 4);
    local_28 = *(undefined4 *)(lVar5 + 0xc);
  }
  else {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_40,0.0,0.0,0.0);
    local_30 = CONCAT44(uStack_3c,local_40);
    local_28 = local_38;
  }
  std::vector<ChargeInfo,std::allocator<ChargeInfo>>::~vector
            ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((int)local_30,local_30._4_4_,local_28);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::moveToDestination(float, float, float) */

void __thiscall
ZombieBumperCar::moveToDestination(ZombieBumperCar *this,float param_1,float param_2,float param_3)

{
  SexyVector3 *pSVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  uVar4 = 0;
  fVar6 = *(float *)pSVar1;
  fVar5 = *(float *)(pSVar1 + 4);
  fVar3 = param_3 - fVar5;
  EATextSquish::Vec3::Vec3(aVStack_48,param_2 - fVar6,fVar3,0.0);
  local_38 = Sexy::SexyVector3::Normalize((SexyVector3 *)aVStack_48);
  local_34 = fVar3;
  local_30 = uVar4;
  local_28 = (float)getChargeVelocity(this);
  local_24 = fVar3;
  local_20 = uVar4;
  fVar3 = (float)Sexy::SexyMath::Fabs(local_28);
  EATextSquish::Vec3::operator*=((Vec3 *)&local_38,fVar3 * param_1);
  DVec3::DVec3((DVec3 *)&local_18);
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar1);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_18,(Vec3 *)&local_38);
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
  if (param_2 <= fVar6) {
    if (*(float *)pSVar1 <= param_2) {
      iVar2 = 1;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar1);
      local_18 = param_2;
      (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
      goto LAB_033da7a4;
    }
    if (param_2 < fVar6) goto LAB_033da7ec;
LAB_033da6f4:
    iVar2 = 1;
    Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar1);
    local_18 = param_2;
    (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
    fVar3 = *(float *)(pSVar1 + 4);
    if (param_3 <= fVar5) goto LAB_033da728;
LAB_033da7b0:
    if (fVar3 < param_3) goto LAB_033da738;
  }
  else {
    if (param_2 <= *(float *)pSVar1) goto LAB_033da6f4;
LAB_033da7ec:
    iVar2 = 0;
LAB_033da7a4:
    fVar3 = *(float *)(pSVar1 + 4);
    if (fVar5 < param_3) goto LAB_033da7b0;
LAB_033da728:
    if ((param_3 < fVar3) && (param_3 < fVar5)) goto LAB_033da738;
  }
  iVar2 = iVar2 + 1;
  Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar1);
  local_14 = param_3;
  (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_18);
LAB_033da738:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 2);
}


/* ZombieBumperCar::updateChargeReturn(float) */

void __thiscall ZombieBumperCar::updateChargeReturn(ZombieBumperCar *this,float param_1)

{
  char cVar1;
  
  cVar1 = moveToDestination(this,param_1,*(float *)(this + 0x83c),*(float *)(this + 0x840));
  if (cVar1 == '\0') {
    return;
  }
  Zombie::setZombieState((Zombie *)this,0x2b,0);
  return;
}


/* ZombieBumperCar::updateState_ReturnNormal() */

void __thiscall ZombieBumperCar::updateState_ReturnNormal(ZombieBumperCar *this)

{
  float fVar1;
  
  if (*(float *)(this + 0x828) != 0.0) {
    updateBumpingBackEdge(this);
    fVar1 = (float)PVZ_Dt();
    updateBumpingBack(fVar1);
    return;
  }
  if ((*(float *)(this + 0x83c) == 0.0) && (*(float *)(this + 0x840) == 0.0)) {
    return;
  }
  fVar1 = (float)PVZ_Dt();
  updateChargeReturn(this,fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::getChargeDamage() */

void __thiscall ZombieBumperCar::getChargeDamage(ZombieBumperCar *this)

{
  char cVar1;
  ZombieBumperCarProps *pZVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  std::vector<ChargeInfo,std::allocator<ChargeInfo>>::vector
            ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20,(vector *)(pZVar2 + 0x2e8));
  cVar1 = std::vector<ChargeInfo,std::allocator<ChargeInfo>>::empty
                    ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20);
  if (cVar1 == '\0') {
    local_28 = FUN_033d38d4(*(undefined4 *)(this + 0x84c));
    local_24 = FUN_033d3a48(local_20,local_18);
    local_24 = local_24 + -1;
    piVar3 = eastl::min_alt<int>(&local_28,&local_24);
    puVar4 = (undefined4 *)FUN_033d3a70(local_20,(long)*piVar3);
    uVar5 = *puVar4;
  }
  std::vector<ChargeInfo,std::allocator<ChargeInfo>>::~vector
            ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::checkCollision() */

void __thiscall ZombieBumperCar::checkCollision(ZombieBumperCar *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  RealObject *this_00;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  DamageInfo *pDVar11;
  float fVar10;
  int local_c8;
  int local_c4;
  Point aPStack_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  float local_a0;
  float local_9c;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  calcHitRect();
  SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  EntityFinder::GetEntitiesTouchingRectangleWithoutGrid
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,1,auStack_90
            );
  uVar8 = local_80;
  lVar3 = FUN_033d3ad8(local_80,local_78);
  if (lVar3 != 0) {
    do {
      FUN_033d3ae4(uVar8,uVar7);
      nop();
      iVar2 = (**(code **)(*(long *)this_00 + 0x180))();
      if ((((1 < iVar2) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)this), cVar1 != '\0')) &&
          (cVar1 = Plant::CanBeTargeted((Plant *)this_00), cVar1 != '\0')) &&
         ((cVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00), cVar1 != '\0' &&
          (cVar1 = Plant::HasCondition(this_00,0x2a), cVar1 == '\0')))) {
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_b0 = *puVar5;
        local_a8 = *(undefined4 *)(puVar5 + 1);
        Sexy::TRect<int>::GetCenter();
        Sexy::Point::Point((Point *)&local_c8,(TPoint *)aDStack_68);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_a0,(float)local_c8,(float)local_c4,0.0);
        createImpactEffect((SexyVector3 *)this);
        Plant::ApplyCondition(0x40000000,0,this_00,0x2a);
        iVar2 = FUN_033d38d4(*(undefined4 *)(this + 0x84c));
        if (iVar2 == 0) {
          pcVar9 = *(code **)(*(long *)this_00 + 0x120);
          Sexy::Point::Point(aPStack_c0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
          DamageInfo::DamageInfo((DamageInfo *)0x0,local_b8,local_b4,aDStack_68,this,aPStack_c0,0);
          (*pcVar9)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        else {
          pcVar9 = *(code **)(*(long *)this_00 + 0x110);
          pDVar11._0_4_ = (DamageInfo *)getChargeDamage(this);
          Sexy::Point::Point(aPStack_c0,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_b8,1.0,0.0);
          DamageInfo::DamageInfo(pDVar11._0_4_,local_b8,local_b4,aDStack_68,this,aPStack_c0,0);
          (*pcVar9)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        fVar10 = *(float *)(this_00 + 0xd8);
        FUN_033d38c4(this + 0x84c);
        if (0.0 < fVar10) {
          if (local_a0 < (float)local_b0) {
            if (*(float *)(this + 0x804) <= 0.0) {
              uVar6 = 2;
              if (local_b0._4_4_ <= local_9c) {
                uVar6 = 3;
              }
            }
            else {
              uVar6 = 4;
              if (local_b0._4_4_ <= local_9c) {
                uVar6 = 2;
              }
            }
          }
          else if (*(float *)(this + 0x804) <= 0.0) {
            uVar6 = 3;
            if (local_9c < local_b0._4_4_) {
              uVar6 = 1;
            }
          }
          else {
            uVar6 = 4;
            if (local_b0._4_4_ <= local_9c) {
              uVar6 = 1;
            }
          }
          goto LAB_033daa54;
        }
        break;
      }
      uVar8 = local_80;
      uVar7 = uVar7 + 1;
      uVar4 = FUN_033d3ad8(local_80,local_78);
    } while (uVar7 < uVar4);
  }
  uVar6 = 0;
LAB_033daa54:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* ZombieBumperCar::checkEdge() */

int __thiscall ZombieBumperCar::checkEdge(ZombieBumperCar *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = checkCollision(this);
  if (iVar1 == 0) {
    iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar3 = SharkMinion::getRow((SharkMinion *)this);
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 < iVar4) {
      if ((iVar3 < 0) && (*(int *)(this + 0x81c) != iVar3)) {
        *(int *)(this + 0x81c) = iVar3;
        return 3;
      }
    }
    else if (*(int *)(this + 0x81c) != iVar3) {
      *(int *)(this + 0x81c) = iVar3;
      return 4;
    }
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 < iVar4) {
      if (iVar2 < 0) {
        if (*(int *)(this + 0x818) != iVar2) {
          *(int *)(this + 0x818) = iVar2;
          return 1;
        }
      }
      else if (*(int *)(this + 0x818) != iVar2) {
        *(int *)(this + 0x818) = iVar2;
        iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar1 = 0;
        if (iVar2 <= *(int *)(this + 0x818)) {
          iVar1 = 2;
        }
      }
    }
    else if (*(int *)(this + 0x818) != iVar2) {
      *(int *)(this + 0x818) = iVar2;
      return 2;
    }
    if (*(int *)(this + 0x81c) != iVar3) {
      *(int *)(this + 0x81c) = iVar3;
      if (iVar3 < 0) {
        iVar1 = 3;
      }
      else {
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        if (iVar2 <= *(int *)(this + 0x81c)) {
          iVar1 = 4;
        }
      }
    }
  }
  return iVar1;
}


/* ZombieBumperCar::updateEdge() */

void __thiscall ZombieBumperCar::updateEdge(ZombieBumperCar *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = checkEdge(this);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 2) {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    if (iVar2 <= iVar3) {
      Zombie::setZombieState((Zombie *)this,0x2a,0);
      return;
    }
  }
  *(int *)(this + 0x824) = iVar1;
  Zombie::setZombieState((Zombie *)this,0x25,0);
  return;
}


/* ZombieBumperCar::updateState_Charging() */

void __thiscall ZombieBumperCar::updateState_Charging(ZombieBumperCar *this)

{
  float fVar1;
  
  if (*(float *)(this + 0x814) == 0.0) {
    return;
  }
  updateEdge(this);
  fVar1 = (float)PVZ_Dt();
  updateCharge(fVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::getDegreeIndex(float) */

void __thiscall ZombieBumperCar::getDegreeIndex(ZombieBumperCar *this,float param_1)

{
  ZombieBumperCarProps *pZVar1;
  ulong uVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::vector
            ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20,
             (vector *)(pZVar1 + 0x2d0));
  uVar2 = FUN_033d3a78(local_20,local_18);
  if (uVar2 != 0) {
    do {
      pfVar3 = (float *)FUN_033d3aa0(local_20,uVar4);
      if ((*pfVar3 <= param_1) && (param_1 <= pfVar3[1])) goto LAB_033daffc;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  uVar4 = 0xffffffff;
LAB_033daffc:
  std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::~vector
            ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 & 0xffffffff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::fixDegree(float&) */

void __thiscall ZombieBumperCar::fixDegree(ZombieBumperCar *this,float *param_1)

{
  char cVar1;
  int iVar2;
  ZombieBumperCarProps *pZVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = getDegreeIndex(this,*param_1);
  if (iVar2 == -1) {
    pZVar3 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
    std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::vector
              ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20,
               (vector *)(pZVar3 + 0x2d0));
    cVar1 = std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::empty
                      ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20);
    if (cVar1 == '\0') {
      iVar2 = FUN_033d3a78(local_20,local_18);
      fVar6 = *param_1;
      pfVar4 = (float *)FUN_033d3aa0(local_20,0);
      if (fVar6 < *pfVar4) {
        *param_1 = fVar6 + 180.0;
      }
      else {
        lVar5 = FUN_033d3aa0(local_20,(long)(iVar2 + -1));
        if (*(float *)(lVar5 + 4) < fVar6) {
          *param_1 = fVar6 - 180.0;
        }
      }
    }
    fixDegree(this,param_1);
    std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::~vector
              ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::charge(float, ZombieBumperCar::ChargeDirection) */

void ZombieBumperCar::charge
               (float param_1,undefined4 param_2,undefined4 param_3,ZombieBumperCar *param_4,
               int param_5)

{
  SexyVector3 *this;
  ZombieBumperCar ZVar1;
  undefined4 uVar2;
  SexyTransform2D *this_00;
  RtObject *this_01;
  ZombieAnimRig_BumperCar *pZVar3;
  float fVar4;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  SexyMatrix3 aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (SexyVector3 *)(param_4 + 0x800);
  local_40 = (float)getChargeVelocity(param_4);
  local_3c = param_2;
  local_38 = param_3;
  Sexy::SexyVector3::operator=(this,(SexyVector3 *)&local_40);
  *(int *)(param_4 + 0x810) = param_5;
  *(float *)(param_4 + 0x814) = param_1;
  fVar4 = (float)Sexy::SexyMath::DegToRad(param_1);
  this_00 = (SexyTransform2D *)Zombie::SetFacing((Zombie *)param_4,param_5 != 0);
  Sexy::SexyTransform2D::CreateRotation(this_00,fVar4);
  local_40 = (float)Sexy::SexyMatrix3::operator*(aSStack_30,this);
  local_3c = param_2;
  local_38 = param_3;
  Sexy::SexyVector3::operator=(this,(SexyVector3 *)&local_40);
  local_40 = *(float *)(param_4 + 0x814);
  if (param_5 == 1) {
    if (*(int *)(param_4 + 0x824) == 1) {
      local_40 = 180.0 - local_40;
    }
    if (*(int *)(param_4 + 0x824) - 3U < 2) {
      local_40 = -local_40;
    }
  }
  fixDegree(param_4,&local_40);
  this_01 = (RtObject *)Zombie::GetAnimRig((Zombie *)param_4);
  pZVar3 = Sexy::RtObject::Cast<ZombieAnimRig_BumperCar>(this_01);
  ZVar1 = param_4[0x820];
  uVar2 = getDegreeIndex(param_4,local_40);
  ZombieAnimRig_BumperCar::PlayCharging(pZVar3,param_5,ZVar1,uVar2);
  if (param_4[0x820] != (ZombieBumperCar)0x0) {
    param_4[0x820] = (ZombieBumperCar)0x0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBumperCar::updateCollision() */

void __thiscall ZombieBumperCar::updateCollision(ZombieBumperCar *this)

{
  int iVar1;
  
  iVar1 = checkCollision(this);
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
      charge(180.0 - *(float *)(this + 0x814),this,1);
      return;
    case 2:
      charge(180.0 - *(float *)(this + 0x814),this,0);
      return;
    case 3:
    case 4:
      charge(-*(float *)(this + 0x814),this,*(undefined4 *)(this + 0x810));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onEnterState_Charging(ZombieState) */

void ZombieBumperCar::onEnterState_Charging(ZombieBumperCar *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ZombieBumperCarProps *pZVar5;
  float *pfVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x824) == 0) {
    resetCharge(param_1);
    pZVar5 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
    std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::vector
              ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20,
               (vector *)(pZVar5 + 0x2d0));
    cVar2 = std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::empty
                      ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20);
    if (cVar2 == '\0') {
      iVar4 = FUN_033d3a78(local_20,local_18);
      pfVar6 = (float *)FUN_033d3aa0(local_20,0);
      lVar7 = FUN_033d3aa0(local_20,(long)(iVar4 + -1));
      iVar8 = (int)*pfVar6;
      iVar4 = ((int)*(float *)(lVar7 + 4) - iVar8) + 1;
    }
    else {
      iVar4 = 0x79;
      iVar8 = -0xf0;
    }
    iVar3 = (**(code **)(*(long *)param_1 + 0x2f8))(param_1);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = iVar3 / iVar4;
    }
    charge((float)((iVar3 - iVar1 * iVar4) + iVar8),param_1,0);
    std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::~vector
              ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)&local_20);
  }
  else {
    switch(*(int *)(param_1 + 0x824)) {
    case 1:
      charge(180.0 - *(float *)(param_1 + 0x814),param_1,1);
      break;
    case 2:
      charge(180.0 - *(float *)(param_1 + 0x814),param_1,0);
      break;
    case 3:
    case 4:
      charge(-*(float *)(param_1 + 0x814),param_1,*(undefined4 *)(param_1 + 0x810));
    }
    *(undefined4 *)(param_1 + 0x824) = 0;
  }
  fVar9 = (float)PVZ_EOT();
  ZombieVan::setImmuneControl((ZombieVan *)param_1,true,fVar9);
  uVar10 = PVZ_T();
  *(undefined4 *)(param_1 + 0x854) = uVar10;
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::updateJunggle() */

void __thiscall ZombieBumperCar::updateJunggle(ZombieBumperCar *this)

{
  long lVar1;
  RtWeakPtr *this_00;
  ResourceInfo *this_01;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar3 = (float)PVZ_Dt();
  fVar4 = (float)Zombie::getStateMachineTimeScale((Zombie *)this);
  uVar2 = *(undefined8 *)(this + 0x8f0);
  fVar3 = *(float *)(this + 0x908) + fVar3 * fVar4;
  *(float *)(this + 0x908) = fVar3;
  lVar1 = FUN_033d3aa8(uVar2,*(undefined8 *)(this + 0x8f8));
  if ((lVar1 != 0) &&
     (this_00 = (RtWeakPtr *)FUN_033d3ad0(uVar2,0), *(float *)(this_00 + 8) < fVar3)) {
    this_01 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    if (this_01 != (ResourceInfo *)0x0) {
      (**(code **)(*(long *)this_01 + 0x80))(this_01,0);
      Projectile::SetPaused((Projectile *)this_01,false);
      launchProjectile((Projectile *)this);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x8f0));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::erase
              ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)(this + 0x8f0),
               local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::updateState_Spinning() */

void __thiscall ZombieBumperCar::updateState_Spinning(ZombieBumperCar *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ZombieLaneChangingSubsystem *pZVar4;
  ZombieBumperCarProps *pZVar5;
  float fVar6;
  ZombieLaneChangingSubsystem *pZVar7;
  
  fVar6 = (float)PVZ_T();
  if (*(float *)(this + 0x848) <= fVar6) {
    pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
    cVar1 = ZombieLaneChangingSubsystem::IsZombieChangingLanes((Zombie *)pZVar4);
    if (cVar1 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x29);
      return;
    }
  }
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar3 + -1 == iVar2) {
      iVar3 = iVar3 + -2;
    }
    else {
      fVar6 = (float)(**(code **)(*(long *)this + 0x308))(0x3f800000,this);
      iVar3 = iVar2 + -1;
      if (fVar6 < 0.5) {
        iVar3 = iVar2 + 1;
      }
    }
  }
  pZVar4 = Board::GetGameSubSystem<ZombieLaneChangingSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  pZVar5 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
                    /* WARNING: Load size is inaccurate */
  pZVar7._0_4_ = *(ZombieLaneChangingSubsystem **)(pZVar5 + 0x24c);
  pZVar5 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  ZombieLaneChangingSubsystem::ForceLaneChange
            (pZVar7._0_4_,*(undefined4 *)(pZVar5 + 0x250),pZVar4,this,iVar3,4);
  updateJunggle(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::isProjectileArrivingAtCatchableAngle(Projectile*) */

void ZombieBumperCar::isProjectileArrivingAtCatchableAngle(Projectile *param_1)

{
  bool bVar1;
  float extraout_w0;
  int iVar2;
  float extraout_var;
  SexyVector3 *this;
  SexyVector3 *pSVar3;
  ZombieBumperCarProps *pZVar4;
  Projectile *in_x1;
  float fVar5;
  float fVar6;
  double dVar7;
  float in_s1;
  ProjectilePropertySheet *local_28;
  undefined8 local_20;
  float local_18;
  float fStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = (ProjectilePropertySheet *)Projectile::GetProps(in_x1);
  local_20 = std::
             set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
             ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                     *)(param_1 + 0x8c0),&local_28);
  std::map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::end
            ((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)(param_1 + 0x8c0));
  local_18 = extraout_w0;
  fStack_14 = extraout_var;
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_20,(rbtree_iterator *)&local_18);
  if (!bVar1) {
    this = (SexyVector3 *)Projectile::GetVelocity(in_x1);
    pSVar3 = (SexyVector3 *)Projectile::GetVelocityScale(in_x1);
    fVar5 = (float)Sexy::SexyVector3::operator*(this,pSVar3);
    local_18 = fVar5;
    fStack_14 = in_s1;
    fVar6 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
    if (fVar6 < 0.0 != 0.0 < fVar5) {
      iVar2 = FloatApproxEqual(0.0,fVar5);
      if (iVar2 == 0) {
        dVar7 = atan((double)(ABS(fStack_14) / ABS(fVar5)));
        fVar5 = (float)dVar7;
      }
      else {
        fVar5 = 1.5707964;
      }
      pZVar4 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)param_1);
      bVar1 = fVar5 < *(float *)(pZVar4 + 0x284) * 0.008726646;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::canJuggleProjectile(Projectile*) */

void __thiscall ZombieBumperCar::canJuggleProjectile(ZombieBumperCar *this,Projectile *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x328))();
  if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
      (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) &&
     (cVar1 = FUN_033d5864(*(undefined4 *)(this + 0x70)), cVar1 == '\0')) {
    cVar1 = Zombie::isInState((Zombie *)this,0x2b);
    bVar2 = false;
    if (((cVar1 != '\0') || (cVar1 = Zombie::isInState((Zombie *)this,0x28), cVar1 != '\0')) &&
       ((cVar1 = Zombie::isInState((Zombie *)this,0x2b), cVar1 == '\0' ||
        (fVar4 = (float)PVZ_T(), *(float *)(this + 0x838) <= fVar4)))) {
      uVar3 = FUN_033d38a4(*(undefined4 *)(param_1 + 0x24));
      cVar1 = RealObject::IsOnOpposingTeam(this,uVar3);
      if ((cVar1 != '\0') &&
         (cVar1 = isProjectileArrivingAtCatchableAngle((Projectile *)this), cVar1 != '\0')) {
        local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
        local_18 = std::
                   set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                   ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                           *)(this + 0x860),&local_20);
        local_10 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)(this + 0x860));
        bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
      }
    }
  }
  else {
    bVar2 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::canThrowProjectile(Projectile*) */

void __thiscall ZombieBumperCar::canThrowProjectile(ZombieBumperCar *this,Projectile *param_1)

{
  char cVar1;
  undefined1 uVar2;
  ProjectilePropertySheet *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = (ProjectilePropertySheet *)Projectile::GetProps(param_1);
  cVar1 = canJuggleProjectile(this,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_18 = std::
               set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
               ::find((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
                       *)(this + 0x890),&local_20);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 0x890));
    uVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::buildProjectileSets() */

void __thiscall ZombieBumperCar::buildProjectileSets(ZombieBumperCar *this)

{
  bool bVar1;
  ZombieBumperCarProps *pZVar2;
  string *psVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  wstring awStack_30 [8];
  RtWeakPtr aRStack_28 [8];
  ResourceInfo *local_20;
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  local_40 = FUN_033d63a4(*(undefined8 *)(pZVar2 + 0x288));
  local_38 = FUN_033d63f4(*(undefined8 *)(pZVar2 + 0x290));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x860),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  local_40 = FUN_033d63a4(*(undefined8 *)(pZVar2 + 0x2a0));
  local_38 = FUN_033d63f4(*(undefined8 *)(pZVar2 + 0x2a8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x890),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  pZVar2 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  local_40 = FUN_033d63a4(*(undefined8 *)(pZVar2 + 0x2b8));
  local_38 = FUN_033d63f4(*(undefined8 *)(pZVar2 + 0x2c0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_30);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar4,0xc,aRStack_18);
    local_20 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_28);
    std::
    set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
    ::insert((set<ProjectilePropertySheet_const*,std::less<ProjectilePropertySheet_const*>,std::allocator<ProjectilePropertySheet_const*>>
              *)(this + 0x8c0),(ProjectilePropertySheet **)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::storeProjectileInJuggleLimbo(Projectile*) */

void __thiscall
ZombieBumperCar::storeProjectileInJuggleLimbo(ZombieBumperCar *this,Projectile *param_1)

{
  ZombieBumperCarProps *pZVar1;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  FishingZombieInitData aFStack_18 [8];
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  Projectile::SetPaused(param_1,true);
  FishingZombieInitData::FishingZombieInitData(aFStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)aFStack_18,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  fVar2 = *(float *)(this + 0x908);
  pZVar1 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
  local_10 = *(float *)(pZVar1 + 0x27c) + fVar2;
  std::vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>>::push_back
            ((vector<RiftProjectileTimer,std::allocator<RiftProjectileTimer>> *)(this + 0x8f0),
             (RiftProjectileTimer *)aFStack_18);
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::StaticClassInit() */

void ZombieBumperCar::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieBumperCar");
      (*pcVar4)(plVar1,asStack_150,FUN_033dd950,0x910,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_ENTERING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_PREPARING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_PREPARE_BUMPING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa58);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa60);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_BUMPING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x22,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa68);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa70);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa78);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_PREPARE_CHARGE");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x23,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa80);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa88);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa90);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_CHARGING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x24,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa98);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa0);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaa8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_IMPACT");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x25,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xab8);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_BUMPING_IMPACT");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x26,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xac8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad0);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xad8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_START_SPIN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x27,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xae8);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf0);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_SPINNING");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x28,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xaf8);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb00);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb08);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_END_SPIN");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x29,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb10);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb18);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_RETURN_NORMAL");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2a,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb28);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb30);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_NORMAL");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2b,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb40);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb48);
  Sexy::Delegate0::Delegate0<ZombieBumperCar,void(ZombieBumperCar::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xb50);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieBumperCar,void(ZombieBumperCar::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_BUMPERCAR_RECOVERY_RESILIENCE_HORIZON");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x2c,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_033dcca0(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieBumperCar::StaticGetClass() */

long * ZombieBumperCar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBumperCar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCar::GetClass() const */

long * ZombieBumperCar::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieBumperCar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCar::onZombieInitialize() */

void __thiscall ZombieBumperCar::onZombieInitialize(ZombieBumperCar *this)

{
  Zombie::onZombieInitialize((Zombie *)this);
  buildProjectileSets(this);
  return;
}


/* ZombieBumperCar::onPostLoad() */

void __thiscall ZombieBumperCar::onPostLoad(ZombieBumperCar *this)

{
  Zombie::onPostLoad((Zombie *)this);
  buildProjectileSets(this);
  return;
}


/* ZombieBumperCar::OverrideProjectileCollision(Projectile*) */

ulong __thiscall
ZombieBumperCar::OverrideProjectileCollision(ZombieBumperCar *this,Projectile *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ZombieBumperCarProps *pZVar4;
  
  uVar1 = canJuggleProjectile(this,param_1);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
    return uVar3;
  }
  uVar2 = canThrowProjectile(this,param_1);
  if ((uVar2 & 0xff) != 0) {
    uVar3 = FUN_033d3aa8(*(undefined8 *)(this + 0x8f0),*(undefined8 *)(this + 0x8f8));
    pZVar4 = Zombie::GetProps<ZombieBumperCarProps>((Zombie *)this);
    if (uVar3 < (ulong)(long)*(int *)(pZVar4 + 0x278)) {
      storeProjectileInJuggleLimbo(this,param_1);
      return (ulong)(uVar2 & 0xff);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return (ulong)(uVar1 & 0xff);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCar::onPlaceOnBoard() */

void ZombieBumperCar::onPlaceOnBoard(void)

{
  Zombie *in_x0;
  long lVar1;
  code *pcVar2;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onPlaceOnBoard(in_x0);
  local_18[0] = getChargeVelocity((ZombieBumperCar *)in_x0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(in_x0 + 0x800),(SexyVector3 *)local_18);
  Zombie::setZombieState();
  pcVar2 = *(code **)(*(long *)in_x0 + 0x78);
  lVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)in_x0);
  EATextSquish::Vec3::Vec3((Vec3 *)local_18,920.0,*(float *)(lVar1 + 4),*(float *)(lVar1 + 8));
  (*pcVar2)();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCar::onUpdate() */

void __thiscall ZombieBumperCar::onUpdate(ZombieBumperCar *this)

{
  Zombie::onUpdate((Zombie *)this);
  updateDamageState(this);
  checkEnterCollision(this);
  return;
}

