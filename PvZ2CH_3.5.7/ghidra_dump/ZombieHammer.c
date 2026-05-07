// Class: ZombieHammer


/* ZombieHammer::CancelZombieFood() */

void __thiscall ZombieHammer::CancelZombieFood(ZombieHammer *this)

{
  this[0x138] = (ZombieHammer)0x0;
  return;
}


/* ZombieHammer::ApplyZombieFood() */

void __thiscall ZombieHammer::ApplyZombieFood(ZombieHammer *this)

{
  this[0x138] = (ZombieHammer)0x1;
  Zombie::setZombieState((Zombie *)this,0x21,0);
  return;
}


/* ZombieHammer::~ZombieHammer() */

void __thiscall ZombieHammer::~ZombieHammer(ZombieHammer *this)

{
  *(undefined ***)this = &PTR_GetClass_068cce60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHammer_068cd8c0;
  Zombie::~Zombie((Zombie *)this);
  return;
}


/* non-virtual thunk to ZombieHammer::~ZombieHammer() */

void __thiscall ZombieHammer::~ZombieHammer(ZombieHammer *this)

{
  ~ZombieHammer(this + -0x10);
  return;
}


/* ZombieHammer::~ZombieHammer() */

void __thiscall ZombieHammer::~ZombieHammer(ZombieHammer *this)

{
  ~ZombieHammer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieHammer::~ZombieHammer() */

void __thiscall ZombieHammer::~ZombieHammer(ZombieHammer *this)

{
  ~ZombieHammer(this + -0x10);
  return;
}


/* ZombieHammer::onBlockEnd(Zombie*) */

void ZombieHammer::onBlockEnd(Zombie *param_1)

{
  return;
}


/* ZombieHammer::onRestEnd(Zombie*) */

void ZombieHammer::onRestEnd(Zombie *param_1)

{
  return;
}


/* ZombieHammer::startBlockAnimation() */

void __thiscall ZombieHammer::startBlockAnimation(ZombieHammer *this)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x330))();
  if (((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
       (fVar2 = (float)FUN_0475c798(*(undefined4 *)(this + 0x280)), 0.0 < fVar2)) &&
      ((this[0x801] == (ZombieHammer)0x0 && (cVar1 = Zombie::HasCondition(this,3), cVar1 == '\0'))))
     && ((cVar1 = Zombie::HasCondition(this,4), cVar1 == '\0' &&
         ((cVar1 = Zombie::HasCondition(this,2), cVar1 == '\0' &&
          (cVar1 = Zombie::HasCondition(this,1), cVar1 == '\0')))))) {
    cVar1 = Zombie::HasCondition(this,0);
    if (cVar1 != '\0') {
      Zombie::EndCondition((Zombie *)this,0);
    }
    this[0x800] = (ZombieHammer)0x0;
    *(undefined4 *)(this + 0x80c) = 0x40400000;
    Zombie::setZombieState((Zombie *)this,0x1f,0);
    return;
  }
  return;
}


/* ZombieHammer::CalcAttackRect(Sexy::TRect<int> const&) */

void ZombieHammer::CalcAttackRect(TRect *param_1)

{
  int iVar1;
  int iVar2;
  Insets *in_x1;
  Insets *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  Sexy::Insets::Insets(in_x8,in_x1);
  fVar6 = *(float *)(param_1 + 0x1c);
  fVar3 = (float)FUN_0475c7a8(*(undefined4 *)(param_1 + 0x18),fVar6,*(undefined4 *)(param_1 + 0x20))
  ;
  iVar1 = *(int *)(in_x8 + 8);
  fVar4 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
  iVar2 = *(int *)in_x8;
  fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)param_1);
  *(int *)(in_x8 + 4) = (int)(((float)*(int *)(in_x8 + 4) + fVar6) - (float)*(int *)(in_x8 + 0xc));
  *(int *)in_x8 = (int)((fVar3 + (float)iVar2 * fVar5) - (float)iVar1 * fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::ShiftProjectile(Projectile*) */

void __thiscall ZombieHammer::ShiftProjectile(ZombieHammer *this,Projectile *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 uVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)Projectile::GetVelocity(param_1);
  uVar5 = *puVar3;
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18._4_4_ = (float)((ulong)uVar5 >> 0x20);
  if (local_18._4_4_ < 0.1) {
    local_18._0_4_ = (float)uVar5;
    if ((0.1 <= (float)local_18) || ((float)local_18 < 0.0)) {
      if ((-0.1 < (float)local_18) && ((float)local_18 < 0.0)) {
        local_18 = CONCAT44(local_18._4_4_,0xbdcccccd);
        uVar5 = local_18;
      }
    }
    else {
      local_18 = CONCAT44(local_18._4_4_,0x3dcccccd);
      uVar5 = local_18;
    }
  }
  local_18 = uVar5;
  Projectile::SetVelocity(param_1,(SexyVector3 *)&local_18);
  pfVar4 = (float *)Projectile::GetVelocityScale(param_1);
  Projectile::SetVelocityScale(param_1,-*pfVar4,-pfVar4[1],pfVar4[2]);
  bVar1 = FUN_0475c78c(param_1[0xd4]);
  FUN_0475c790(param_1 + 0xd4,bVar1 ^ 1);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  Projectile::SetTarget(param_1,(RtWeakPtr *)a_Stack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  uVar5 = operator|(0x40,0x80);
  uVar5 = operator|(uVar5,7);
  uVar5 = operator|(uVar5,0x100);
  iVar2 = operator|(uVar5,8);
  DangerRoomManager::SetMaxLevel((DangerRoomManager *)param_1,iVar2);
  Projectile::SetInstigator(param_1,(BoardEntity *)this);
  Projectile::NotifyDeflection((BoardEntity *)param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHammer::onAnimStopped(std::string const&) */

void __thiscall ZombieHammer::onAnimStopped(ZombieHammer *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"plantfood");
  if ((bVar1) && (cVar2 = Zombie::isInState((Zombie *)this,0x21), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0x4b8))(this);
    Zombie::setZombieState((Zombie *)this,0x20,0);
    return;
  }
  return;
}


/* ZombieHammer::CanTarget(BoardEntity*) */

byte __thiscall ZombieHammer::CanTarget(ZombieHammer *this,BoardEntity *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  Plant *this_00;
  long *extraout_x0;
  
  bVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)param_1);
  if (bVar1 != 0) {
    if (param_1 == (BoardEntity *)0x0) {
      return bVar1;
    }
    bVar2 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1);
    if (bVar2) {
      nop();
      cVar3 = Zombie::canTargetPlant((Zombie *)this,this_00);
      if (cVar3 != '\0') {
        bVar1 = Plant::IsInvincible(this_00,false);
        return bVar1 ^ 1;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if (!bVar2) {
        Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        return bVar1;
      }
      nop();
      cVar3 = (**(code **)(*extraout_x0 + 0x218))();
      if (cVar3 != '\0') {
        bVar1 = (**(code **)(*extraout_x0 + 0x1f8))(extraout_x0);
        return bVar1 ^ 1;
      }
    }
  }
  return 0;
}


/* ZombieHammer::ZombieHammer() */

void __thiscall ZombieHammer::ZombieHammer(ZombieHammer *this)

{
  undefined4 uVar1;
  
  Zombie::Zombie((Zombie *)this);
  this[0x803] = (ZombieHammer)0x0;
  *(undefined ***)this = &PTR_GetClass_068cce60;
  *(undefined ***)(this + 0x10) = &PTR__ZombieHammer_068cd8c0;
  this[0x801] = (ZombieHammer)0x0;
  this[0x802] = (ZombieHammer)0x1;
  uVar1 = PVZ_EOT();
  this[0x800] = (ZombieHammer)0x0;
  *(undefined4 *)(this + 0x804) = uVar1;
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x80c) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x810) = uVar1;
  return;
}


/* ZombieHammer::StaticNew() */

ZombieHammer * ZombieHammer::StaticNew(void)

{
  ZombieHammer *this;
  
  this = ::operator_new(0x818);
  ZombieHammer(this);
  return this;
}


/* ZombieHammer::CanShiftProjectile(Projectile*) */

char __thiscall ZombieHammer::CanShiftProjectile(ZombieHammer *this,Projectile *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = Projectile::CanBeBlocked(param_1);
  if ((((cVar1 != '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')) &&
     ((cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0' &&
      (cVar1 = FUN_0475cd70(*(undefined4 *)(this + 0x70)), cVar1 == '\0')))) {
    uVar2 = FUN_0475c714(*(undefined4 *)(param_1 + 0x24));
    cVar1 = RealObject::IsOnOpposingTeam(this,uVar2);
    if ((cVar1 != '\0') &&
       (iVar3 = Zombie::getZombieStateSerialization((Zombie *)this), iVar3 != 0x21)) {
      if (this[0x800] != (ZombieHammer)0x0) {
        return cVar1;
      }
      iVar3 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar3 == 0x1f) {
        return cVar1;
      }
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::onEnterState_Block(ZombieState) */

void ZombieHammer::onEnterState_Block(Zombie *param_1)

{
  long lVar1;
  ZombieHydraHeadAnimRig *pZVar2;
  undefined4 uVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
  (**(code **)(*(long *)pZVar2 + 0x270))();
  std::string::string(asStack_10,"Play_Zomb_Kongfu_Hammer_Swing");
  RealObject::PlayPositionalSound((RealObject *)param_1,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  uVar3 = PVZ_T();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(param_1 + 0x810) = uVar3;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::CreateChargeAttackEffect(RenderLayer) */

void __thiscall ZombieHammer::CreateChargeAttackEffect(ZombieHammer *this,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined4 uVar6;
  string asStack_40 [8];
  float local_38 [4];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  long local_8;
  
  uVar6 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3((Vec3 *)local_38,-100.0,-20.0,0.0);
  fVar5 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  local_38[0] = fVar5 * local_38[0];
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = Board::MakeRenderOrder(param_2,uVar1,(int)(float)local_28);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_40,"POPANIM_EFFECTS_ZOMBIE_KONGFU_HAMMER_BOOM");
  GetPAMByName(asStack_40);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::string::~string(asStack_40);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  local_18[0] = Sexy::SexyVector3::operator+((SexyVector3 *)&local_28,(SexyVector3 *)local_38);
  local_10 = uVar6;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)local_18,iVar2);
  iVar2 = Zombie::GetFacing((Zombie *)this);
  if (iVar2 == 1) {
    fVar5 = (float)Sexy::SexyMath::DegToRad(180.0);
    Effect_PopAnim::SetOrientation(this_00,fVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::PlayChargeAttackEffect() */

void __thiscall ZombieHammer::PlayChargeAttackEffect(ZombieHammer *this)

{
  Effect_PopAnim *pEVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (Effect_PopAnim *)CreateChargeAttackEffect(this,0x64960);
  std::string::string(asStack_10,"idle");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  pEVar1 = (Effect_PopAnim *)CreateChargeAttackEffect(this,0x61e68);
  std::string::string(asStack_10,"idle2");
  Effect_PopAnim::PlaySingleAnimation(pEVar1,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHammer::onApplyCondition(ZombieConditions) */

void __thiscall ZombieHammer::onApplyCondition(ZombieHammer *this,undefined8 param_2)

{
  int iVar1;
  ZombieHammerProps *pZVar2;
  float fVar3;
  
  iVar1 = (int)param_2;
  if (iVar1 == 4) {
LAB_0475d43c:
    iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
    if (iVar1 != 0x1f) {
      return;
    }
LAB_0475d51c:
    Zombie::EndCondition((Zombie *)this,param_2);
    return;
  }
  if (iVar1 < 5) {
    if (iVar1 != 1) {
      if (iVar1 < 2) {
        if (iVar1 != 0) {
          return;
        }
        iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
        if (iVar1 != 0x1f) {
          return;
        }
        goto LAB_0475d51c;
      }
      if (iVar1 == 2) goto LAB_0475d490;
      if (iVar1 != 3) {
        return;
      }
      goto LAB_0475d43c;
    }
  }
  else if (iVar1 != 0x25) {
    if (iVar1 < 0x26) {
      if (iVar1 != 0x18) {
        return;
      }
LAB_0475d490:
      iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
      if (iVar1 != 0x1f) {
        return;
      }
      Zombie::setZombieState((Zombie *)this,1,0);
      goto LAB_0475d4b4;
    }
    if ((iVar1 != 0x27) && (iVar1 != 0x65)) {
      return;
    }
  }
  iVar1 = Zombie::getZombieStateSerialization((Zombie *)this);
  if (iVar1 != 0x1f) {
    return;
  }
  Zombie::setZombieState((Zombie *)this,1,0);
  pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
  *(undefined4 *)(this + 0x808) = *(undefined4 *)(pZVar2 + 0x214);
LAB_0475d4b4:
  pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
  fVar3 = *(float *)(pZVar2 + 0x210);
  pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
  *(float *)(this + 0x804) = fVar3 - *(float *)(pZVar2 + 0x214);
  return;
}


/* ZombieHammer::onExitState_Block(ZombieState) */

void ZombieHammer::onExitState_Block(Zombie *param_1)

{
  char cVar1;
  ZombieHammerProps *pZVar2;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
  {
    pZVar2 = Zombie::GetProps<ZombieHammerProps>(param_1);
    *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(pZVar2 + 0x214);
    return;
  }
  return;
}


/* ZombieHammer::onEnterState_Rest(ZombieState) */

void ZombieHammer::onEnterState_Rest(Zombie *param_1)

{
  char cVar1;
  ZombieHammerProps *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
  {
    pZVar2 = Zombie::GetProps<ZombieHammerProps>(param_1);
    *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(pZVar2 + 0x214);
    pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>(param_1);
    (**(code **)(*(long *)pZVar3 + 0x268))();
    return;
  }
  return;
}


/* ZombieHammer::updateState_Rest() */

void __thiscall ZombieHammer::updateState_Rest(ZombieHammer *this)

{
  char cVar1;
  ZombieHammerProps *pZVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)PVZ_Dt();
  fVar4 = *(float *)(this + 0x808);
  *(float *)(this + 0x808) = fVar4 - fVar3;
  if (((fVar4 - fVar3 <= 0.0) && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0')
      ) && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,1);
    pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
    fVar3 = *(float *)(pZVar2 + 0x210);
    pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
    *(float *)(this + 0x804) = fVar3 - *(float *)(pZVar2 + 0x214);
  }
  return;
}


/* ZombieHammer::AdvanceSpin() */

ZombieHammerProps __thiscall ZombieHammer::AdvanceSpin(ZombieHammer *this)

{
  ZombieHammerProps *pZVar1;
  
  pZVar1 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
  return pZVar1[0x230];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::UpdateSpinPosition() */

void __thiscall ZombieHammer::UpdateSpinPosition(ZombieHammer *this)

{
  int iVar1;
  ZombieHammerProps *pZVar2;
  EntityConditionTracker<Creature,CreatureConditions> *this_00;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
  fVar7 = *(float *)(pZVar2 + 0x234);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar4 = (float)Zombie::GetFacingMultiplier((Zombie *)this);
  this_00 = (EntityConditionTracker<Creature,CreatureConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar5 = (float)EntityConditionTracker<Creature,CreatureConditions>::GetSpeedModifier(this_00);
  fVar6 = (float)PVZ_Dt();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar3 + 1);
  local_18 = (float)*puVar3;
  _local_18 = CONCAT44((int)((ulong)*puVar3 >> 0x20),
                       local_18 + (float)iVar1 * fVar4 * fVar5 * -fVar7 * fVar6);
  (**(code **)(*(long *)this + 0x78))(this,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::onEnterState_ChargeAttack(ZombieState) */

void ZombieHammer::onEnterState_ChargeAttack(Zombie *param_1)

{
  long *plVar1;
  code *pcVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_1[0x800] = (Zombie)0x0;
  plVar1 = (long *)Zombie::GetAnimRig(param_1);
  pcVar2 = *(code **)(*plVar1 + 0x170);
  std::string::string(asStack_58,"plantfood");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_60,"onAnimStopped");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  (*pcVar2)(plVar1,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_58);
  nop();
  std::string::string(asStack_58,"Play_Zomb_PVP_Hammer_Skill");
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
/* ZombieHammer::DamageTarget(BoardEntity*, float) */

void __thiscall ZombieHammer::DamageTarget(ZombieHammer *this,BoardEntity *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  BoardEntity *this_00;
  Plant *pPVar3;
  GridItem *pGVar4;
  EntityConditionTracker<Zombie,ZombieConditions> *this_01;
  float *pfVar5;
  undefined8 uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  DamageInfo *pDVar10;
  Point aPStack_78 [8];
  float local_70;
  undefined4 local_6c;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pGVar4 = (GridItem *)0x0;
    pPVar3 = (Plant *)0x0;
    this_00 = (BoardEntity *)0x0;
  }
  else {
    this_00 = (BoardEntity *)Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
  }
  fVar8 = (float)Zombie::GetExtraDPSmodifier((Zombie *)this);
  this_01 = (EntityConditionTracker<Zombie,ZombieConditions> *)
            Zombie::GetConditionTracker((Zombie *)this);
  fVar9 = (float)EntityConditionTracker<Zombie,ZombieConditions>::GetDPSModifier(this_01);
  local_68[0] = 0;
  local_70 = fVar8 * fVar9 * param_2;
  pfVar5 = eastl::max_alt<float>(&local_70,(float *)local_68);
                    /* WARNING: Load size is inaccurate */
  pDVar10._0_4_ = *(DamageInfo **)pfVar5;
  if (pGVar4 == (GridItem *)0x0) {
    if (pPVar3 == (Plant *)0x0) {
      if (this_00 != (BoardEntity *)0x0) {
        pcVar7 = *(code **)(*(long *)this_00 + 0x110);
        iVar1 = BoardEntity::CalcColumnPosition(this_00);
        iVar2 = SharkMinion::getRow((SharkMinion *)this);
        Sexy::Point::Point(aPStack_78,iVar1,iVar2);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,this,aPStack_78,0);
        (*pcVar7)(this_00,(DamageInfo *)local_68);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
    else {
      pcVar7 = *(code **)(*(long *)pPVar3 + 0x110);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,this,aPStack_78,0);
      (*pcVar7)(pPVar3,(DamageInfo *)local_68);
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      if (*(float *)(pPVar3 + 0xd8) <= 0.0) {
        std::string::string((string *)local_68,"Play_Gulp");
        RealObject::PlayPositionalSound((RealObject *)this,(string *)local_68,0.0);
        std::string::~string((string *)local_68);
        nop();
      }
    }
  }
  else {
    pcVar7 = *(code **)(*(long *)pGVar4 + 0x110);
    if (*(code **)(*(long *)this + 0x910) == Zombie::getEatingDamageType) {
      uVar6 = Zombie::getEatingDamageType();
    }
    else {
      uVar6 = (**(code **)(*(long *)this + 0x910))(this);
    }
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              (pDVar10._0_4_,local_70,local_6c,(DamageInfo *)local_68,uVar6,this,aPStack_78,0);
    (*pcVar7)(pGVar4,(DamageInfo *)local_68);
    DamageInfo::~DamageInfo((DamageInfo *)local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::DamageTarget(Sexy::TRect<int> const&, float) */

void __thiscall ZombieHammer::DamageTarget(ZombieHammer *this,TRect *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  uVar3 = operator|(uVar4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,param_1,0xffffffff,0xffffffff);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    cVar2 = CanTarget(this,(BoardEntity *)*puVar5);
    if (cVar2 != '\0') {
      DamageTarget(this,(BoardEntity *)*puVar5,param_2);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
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
/* ZombieHammer::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&)
    */

void ZombieHammer::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  ZombieHammerProps *pZVar2;
  TRect aTStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"charge_attack_damage");
  if (bVar1) {
    PlayChargeAttackEffect((ZombieHammer *)param_1);
    Zombie::GetProps<ZombieHammerProps>((Zombie *)param_1);
    CalcAttackRect((TRect *)param_1);
    pZVar2 = Zombie::GetProps<ZombieHammerProps>((Zombie *)param_1);
    DamageTarget((ZombieHammer *)param_1,aTStack_18,*(float *)(pZVar2 + 0x21c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::GetSpinAttackTarget() */

void ZombieHammer::GetSpinAttackTarget(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *in_x0;
  undefined8 uVar4;
  BoardEntity **ppBVar5;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::GetProps<ZombieHammerProps>(in_x0);
  CalcAttackRect((TRect *)in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar4 = operator|(1,4);
  uVar3 = operator|(uVar4,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,auStack_30,0xffffffff,0xffffffff);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    ppBVar5 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    cVar2 = CanTarget((ZombieHammer *)in_x0,*ppBVar5);
    if (cVar2 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,ppBVar5);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
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
/* ZombieHammer::updateState_Block() */

void __thiscall ZombieHammer::updateState_Block(ZombieHammer *this)

{
  char cVar1;
  bool bVar2;
  ZombieHammerProps *pZVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_30;
  undefined8 local_28;
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0.0 < *(float *)(this + 0x80c)) {
    fVar5 = (float)PVZ_Dt();
    fVar7 = *(float *)(this + 0x80c);
    *(float *)(this + 0x80c) = fVar7 - fVar5;
    if (0.0 < fVar7 - fVar5) goto LAB_0475dee8;
  }
  cVar1 = (**(code **)(*(long *)this + 0x330))(this);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0')) {
    Zombie::setZombieState((Zombie *)this,0x20);
  }
LAB_0475dee8:
  fVar5 = (float)PVZ_T();
  if (0.3 < fVar5 - *(float *)(this + 0x810)) {
    std::string::string((string *)avStack_20,"Play_Zomb_Kongfu_Hammer_Swing");
    RealObject::PlayPositionalSound((RealObject *)this,(string *)avStack_20,0.0);
    std::string::~string((string *)avStack_20);
    nop();
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0x810) = uVar6;
  }
  cVar1 = AdvanceSpin(this);
  if ((cVar1 != '\0') && (cVar1 = Zombie::IsSuspended((Zombie *)this), cVar1 == '\0')) {
    GetSpinAttackTarget();
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty(avStack_20);
    if (cVar1 == '\0') {
      pZVar3 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
      fVar7 = *(float *)(pZVar3 + 0x238);
      fVar5 = (float)PVZ_Dt();
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar2) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        DamageTarget(this,(BoardEntity *)*puVar4,fVar5 * fVar7);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    }
    else {
      UpdateSpinPosition(this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::StaticClassInit() */

void ZombieHammer::StaticClassInit(void)

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
      std::string::string(asStack_150,"ZombieHammer");
      (*pcVar4)(plVar1,asStack_150,FUN_0475e43c,0x818,0);
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
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa10);
  Sexy::Delegate0::Delegate0<ZombieHammer,void(ZombieHammer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa18);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hammer_Block");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x1f,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0475e088(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa20);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa28);
  Sexy::Delegate0::Delegate0<ZombieHammer,void(ZombieHammer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa30);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hammer_Rest");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x20,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0475e088(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa38);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_138,aCStack_180);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa40);
  Sexy::Delegate0::Delegate0<ZombieHammer,void(ZombieHammer::*)()>(aDStack_108,aCStack_168);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)0x0,(_func_void *)0xa48);
  Sexy::Delegate1<ZombieState>::Delegate1<ZombieHammer,void(ZombieHammer::*)(ZombieState)>
            (aDStack_d8,asStack_150);
  std::string::string(asStack_188,"ZS_Hammer_ChargeAttack");
  StateDefinition<ZombieState>::StateDefinition
            (aSStack_a8,0x21,aDStack_138,aDStack_108,aDStack_d8,asStack_188);
  FUN_0475e088(pSVar3,aSStack_a8);
  StateDefinition<CardGameState>::~StateDefinition(aSStack_a8);
  std::string::~string(asStack_188);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ZombieHammer::StaticGetClass() */

long * ZombieHammer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHammer::GetClass() const */

long * ZombieHammer::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieHammer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieHammer::onZombieInitialize() */

void __thiscall ZombieHammer::onZombieInitialize(ZombieHammer *this)

{
  undefined4 uVar1;
  
  Zombie::onZombieInitialize((Zombie *)this);
  this[0x803] = (ZombieHammer)0x0;
  this[0x802] = (ZombieHammer)0x1;
  this[0x801] = (ZombieHammer)0x0;
  uVar1 = PVZ_EOT();
  this[0x800] = (ZombieHammer)0x0;
  *(undefined4 *)(this + 0x804) = uVar1;
  *(undefined4 *)(this + 0x808) = 0;
  *(undefined4 *)(this + 0x80c) = 0;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x810) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieHammer::onUpdate() */

void __thiscall ZombieHammer::onUpdate(ZombieHammer *this)

{
  ZombieHammer ZVar1;
  char cVar2;
  ZombieHammerProps *pZVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::onUpdate((Zombie *)this);
  if (this[0x803] == (ZombieHammer)0x0) {
    cVar2 = BoardEntity::IntersectsGrid((BoardEntity *)this);
    if (cVar2 == '\0') {
      ZVar1 = this[0x803];
    }
    else {
      this[0x803] = (ZombieHammer)0x1;
      pZVar3 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
      fVar4 = *(float *)(pZVar3 + 0x210);
      pZVar3 = Zombie::GetProps<ZombieHammerProps>((Zombie *)this);
      *(float *)(this + 0x804) = fVar4 - *(float *)(pZVar3 + 0x214);
      std::string::string(asStack_10,"Play_Prospector_Sizzle");
      RealObject::PlayPositionalSound((RealObject *)this,asStack_10,0.0);
      std::string::~string(asStack_10);
      nop();
      ZVar1 = this[0x803];
    }
    if (ZVar1 == (ZombieHammer)0x0) goto LAB_0475ecf0;
  }
  if ((((this[0x802] != (ZombieHammer)0x0) &&
       (cVar2 = (**(code **)(*(long *)this + 0x330))(this), cVar2 == '\0')) &&
      (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')) &&
     ((cVar2 = Zombie::IsSuspended((Zombie *)this), cVar2 == '\0' &&
      (cVar2 = Zombie::IsOnGround((Zombie *)this), cVar2 != '\0')))) {
    fVar4 = *(float *)(this + 0x804);
    if (0.0 < fVar4) {
      fVar4 = (float)PVZ_Dt();
      fVar4 = *(float *)(this + 0x804) - fVar4;
      *(float *)(this + 0x804) = fVar4;
    }
    if ((fVar4 <= 0.0) && (-999.0 < fVar4)) {
      this[0x800] = (ZombieHammer)0x1;
      *(undefined4 *)(this + 0x804) = 0xc61c3c00;
    }
  }
LAB_0475ecf0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieHammer::OverrideProjectileCollision(Projectile*) */

ulong __thiscall ZombieHammer::OverrideProjectileCollision(ZombieHammer *this,Projectile *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = CanShiftProjectile(this,param_1);
  if (bVar1 == 0) {
    uVar2 = Zombie::OverrideProjectileCollision((Zombie *)this,param_1);
    return uVar2;
  }
  if (this[0x800] == (ZombieHammer)0x0) {
    ShiftProjectile(this,param_1);
    return (ulong)bVar1;
  }
  startBlockAnimation(this);
  ShiftProjectile(this,param_1);
  return (ulong)bVar1;
}

