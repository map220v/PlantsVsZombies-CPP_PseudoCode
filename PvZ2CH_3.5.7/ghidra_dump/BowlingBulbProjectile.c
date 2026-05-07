// Class: BowlingBulbProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbProjectile::moveThroughTime(float) */

void __thiscall BowlingBulbProjectile::moveThroughTime(BowlingBulbProjectile *this,float param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  Point aPStack_20 [4];
  int local_1c;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Projectile::moveThroughTime((Projectile *)this,param_1);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(pfVar3[1]);
  Sexy::Point::Point(aPStack_20,iVar1,iVar2);
  if (local_1c < 0) {
    puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_10 = *(undefined4 *)(puVar4 + 1);
    fStack_14 = (float)((ulong)*puVar4 >> 0x20);
    local_18 = (undefined4)*puVar4;
    _local_18 = CONCAT44(ABS(fStack_14),local_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
  }
  else if (4 < local_1c) {
    puVar4 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
    local_10 = *(undefined4 *)(puVar4 + 1);
    fStack_14 = (float)((ulong)*puVar4 >> 0x20);
    local_18 = (undefined4)*puVar4;
    _local_18 = CONCAT44(-ABS(fStack_14),local_18);
    Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBulbProjectile::~BowlingBulbProjectile() */

void __thiscall BowlingBulbProjectile::~BowlingBulbProjectile(BowlingBulbProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06806fd0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBulbProjectile_068071c8;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BowlingBulbProjectile::~BowlingBulbProjectile() */

void __thiscall BowlingBulbProjectile::~BowlingBulbProjectile(BowlingBulbProjectile *this)

{
  ~BowlingBulbProjectile(this + -0x10);
  return;
}


/* BowlingBulbProjectile::~BowlingBulbProjectile() */

void __thiscall BowlingBulbProjectile::~BowlingBulbProjectile(BowlingBulbProjectile *this)

{
  ~BowlingBulbProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BowlingBulbProjectile::~BowlingBulbProjectile() */

void __thiscall BowlingBulbProjectile::~BowlingBulbProjectile(BowlingBulbProjectile *this)

{
  ~BowlingBulbProjectile(this + -0x10);
  return;
}


/* BowlingBulbProjectile::BowlingBulbProjectile() */

void __thiscall BowlingBulbProjectile::BowlingBulbProjectile(BowlingBulbProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_06806fd0;
  *(undefined ***)(this + 0x10) = &PTR__BowlingBulbProjectile_068071c8;
  *(undefined4 *)(this + 0x1ac) = 0x7fffffff;
  DailySignActivityWidget::setIsCanAwardToday((DailySignActivityWidget *)this,true);
  return;
}


/* BowlingBulbProjectile::StaticNew() */

BowlingBulbProjectile * BowlingBulbProjectile::StaticNew(void)

{
  BowlingBulbProjectile *this;
  
  this = ::operator_new(0x1b8);
  BowlingBulbProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbProjectile::StaticClassInit() */

void BowlingBulbProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingBulbProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041f6b8c,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBulbProjectile::StaticGetClass() */

long * BowlingBulbProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingBulbProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbProjectile::GetClass() const */

long * BowlingBulbProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"BowlingBulbProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbProjectile::incrementZombieDeathCountAndCheckForAchievement() */

void __thiscall
BowlingBulbProjectile::incrementZombieDeathCountAndCheckForAchievement(BowlingBulbProjectile *this)

{
  *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
  return;
}


/* BowlingBulbProjectile::onSplashDamageHitEntity(BoardEntity*) */

void __thiscall
BowlingBulbProjectile::onSplashDamageHitEntity(BowlingBulbProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *pZVar2;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar2 != (Zombie *)0x0)) &&
     (cVar1 = (**(code **)(*(long *)pZVar2 + 0x328))(), cVar1 != '\0')) {
    incrementZombieDeathCountAndCheckForAchievement(this);
    return;
  }
  return;
}


/* BowlingBulbProjectile::onProjectileInitialized() */

void __thiscall BowlingBulbProjectile::onProjectileInitialized(BowlingBulbProjectile *this)

{
  RtObject *this_00;
  BowlingBulbProjectileProps *pBVar1;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pBVar1 = Sexy::RtObject::Cast<BowlingBulbProjectileProps>(this_00);
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(pBVar1 + 0x1e8);
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* BowlingBulbProjectile::dropLoot(BoardEntity*) */

void BowlingBulbProjectile::dropLoot(BoardEntity *param_1)

{
  RtObject *this;
  BowlingBulbProjectileProps *pBVar1;
  undefined8 uVar2;
  
  this = (RtObject *)Projectile::GetProps((Projectile *)param_1);
  pBVar1 = Sexy::RtObject::Cast<BowlingBulbProjectileProps>(this);
  uVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_1);
  LootHelpers::Drop(*(undefined4 *)(pBVar1 + 0x1f0),uVar2);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(pBVar1 + 0x1ec);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbProjectile::OnCollideEntity(BoardEntity*) */

void BowlingBulbProjectile::OnCollideEntity(BoardEntity *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  RtObject *this;
  BowlingBulbProjectileProps *pBVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  RtObject *in_x1;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)Projectile::GetProps((Projectile *)param_1);
  pBVar5 = Sexy::RtObject::Cast<BowlingBulbProjectileProps>(this);
  BoardEntity::CalcGridPosition();
  if (local_54 == *(int *)(param_1 + 0x1a8)) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1a8) = local_54;
    if (((in_x1 != (RtObject *)0x0) && (bVar2 = Sexy::RtObject::IsA<Zombie>(in_x1), bVar2)) &&
       (iVar1 = *(int *)(param_1 + 0x1ac), *(int *)(param_1 + 0x1ac) = iVar1 + -1, iVar1 + -1 < 1))
    {
      (**(code **)(*(long *)param_1 + 0x1e0))(param_1);
    }
    puVar6 = (undefined8 *)Projectile::GetVelocity((Projectile *)param_1);
    uVar8 = *puVar6;
    local_48 = *(undefined4 *)(puVar6 + 1);
    local_50._4_4_ = (float)((ulong)uVar8 >> 0x20);
    bVar2 = local_50._4_4_ == 0.0;
    fVar9 = local_50._4_4_;
    local_50 = uVar8;
    if (bVar2) {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      Sexy::SexyTransform2D::RotateRad(aSStack_30,-*(float *)(pBVar5 + 0x1e0));
      local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,(SexyVector3 *)&local_50)
      ;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)local_40);
      if (local_54 == 1) {
        fVar9 = (float)GrapeshotProjectile::determineBounceDirection(*(float *)(pBVar5 + 0x1e4));
        fVar9 = fVar9 * local_50._4_4_;
      }
      else if (local_54 == 3) {
        fVar9 = (float)GrapeshotProjectile::determineBounceDirection
                                 (1.0 - *(float *)(pBVar5 + 0x1e4));
        fVar9 = fVar9 * local_50._4_4_;
      }
      else {
        fVar9 = (float)GrapeshotProjectile::determineBounceDirection(0.5);
        fVar9 = fVar9 * local_50._4_4_;
      }
    }
    fVar10 = 1.0;
    if (local_54 != 0) {
      if (local_54 == 4) {
        fVar10 = -1.0;
      }
      else {
        fVar10 = -1.0;
        if (fVar9 <= 0.0) {
          fVar10 = 1.0;
        }
      }
    }
    local_50 = CONCAT44(fVar10 * ABS(fVar9),(undefined4)local_50);
    Projectile::SetVelocity((Projectile *)param_1,(SexyVector3 *)&local_50);
    uVar3 = Projectile::OnCollideEntity((Projectile *)param_1,(BoardEntity *)in_x1);
    if (((in_x1 != (RtObject *)0x0) &&
        (pZVar7 = Sexy::RtObject::Cast<Zombie>(in_x1), pZVar7 != (Zombie *)0x0)) &&
       (cVar4 = (**(code **)(*(long *)pZVar7 + 0x328))(), cVar4 != '\0')) {
      incrementZombieDeathCountAndCheckForAchievement((BowlingBulbProjectile *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

