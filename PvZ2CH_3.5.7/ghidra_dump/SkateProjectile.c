// Class: SkateProjectile


/* SkateProjectile::~SkateProjectile() */

void __thiscall SkateProjectile::~SkateProjectile(SkateProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a770;
  *(undefined ***)(this + 0x10) = &PTR__SkateProjectile_0669a960;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SkateProjectile::~SkateProjectile() */

void __thiscall SkateProjectile::~SkateProjectile(SkateProjectile *this)

{
  ~SkateProjectile(this + -0x10);
  return;
}


/* SkateProjectile::~SkateProjectile() */

void __thiscall SkateProjectile::~SkateProjectile(SkateProjectile *this)

{
  ~SkateProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SkateProjectile::~SkateProjectile() */

void __thiscall SkateProjectile::~SkateProjectile(SkateProjectile *this)

{
  ~SkateProjectile(this + -0x10);
  return;
}


/* SkateProjectile::SkateProjectile() */

void __thiscall SkateProjectile::SkateProjectile(SkateProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0669a770;
  *(undefined ***)(this + 0x10) = &PTR__SkateProjectile_0669a960;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* SkateProjectile::StaticNew() */

SkateProjectile * SkateProjectile::StaticNew(void)

{
  SkateProjectile *this;
  
  this = ::operator_new(0x1b0);
  SkateProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateProjectile::StaticClassInit() */

void SkateProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SkateProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_037dc38c,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SkateProjectile::StaticGetClass() */

long * SkateProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SkateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SkateProjectile::GetClass() const */

long * SkateProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SkateProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateProjectile::onProjectileInitialized() */

void __thiscall SkateProjectile::onProjectileInitialized(SkateProjectile *this)

{
  undefined4 uVar1;
  ArtifactMgr *pAVar2;
  NameMapperBase *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_037dbe54(this + 0x24);
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  std::string::string(asStack_10,"artifact_skateboard");
  uVar1 = NameMapperBase::GetIdForName(this_00,asStack_10);
  uVar1 = ArtifactMgr::GetBoostValue(pAVar2,uVar1,1);
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SkateProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall SkateProjectile::OnCollideEntity(SkateProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  ZombieZombossMech *pZVar2;
  Board *this_01;
  code *pcVar3;
  float fVar4;
  int local_80;
  int local_7c;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  string asStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (((((this_00 != (Zombie *)0x0) && (cVar1 = RealObject::IsOnTeam(this_00,2), cVar1 != '\0'))
         && (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
        ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
         (cVar1 = FUN_037dcb14(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')))) &&
       (cVar1 = Zombie::IsInvisible(this_00), cVar1 == '\0')) {
      cVar1 = Zombie::IsBoss(this_00);
      if (((cVar1 == '\0') &&
          (pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
          pZVar2 == (ZombieZombossMech *)0x0)) &&
         ((cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0' &&
          ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
           (cVar1 = Zombie::CanTakeFatalDamage(this_00), cVar1 != '\0')))))) {
        Zombie::TakeFatalDamage(this_00,(BoardEntity *)0x0);
      }
      else {
        fVar4 = *(float *)(this + 0x1a8);
        pcVar3 = *(code **)(*(long *)this_00 + 0x110);
        Sexy::Point::Point(aPStack_78,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)((fVar4 + 1.0) * 500.0),local_70,local_6c,(DamageInfo *)asStack_68,
                   1,aPStack_78,0);
        (*pcVar3)(this_00,(DamageInfo *)asStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)asStack_68);
      }
    }
    BoardEntity::CalcGridPosition();
    cVar1 = FUN_037defbc((TPoint<int> *)&local_80,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_037defbc((TPoint<int> *)&local_80,1);
      if (cVar1 == '\0') {
        Sexy::Point::Point(aPStack_78,1,0);
        Sexy::TPoint<int>::operator+((TPoint<int> *)&local_80,(TPoint *)aPStack_78);
        Sexy::Point::Point((Point *)asStack_68,(TPoint *)&local_70);
        cVar1 = FUN_037defbc((Point *)asStack_68,1);
        if (cVar1 == '\0') {
          Sexy::Point::Point(aPStack_78,1,0);
          Sexy::TPoint<int>::operator-((TPoint<int> *)&local_80,(TPoint *)aPStack_78);
          Sexy::Point::Point((Point *)asStack_68,(TPoint *)&local_70);
          cVar1 = FUN_037defbc((Point *)asStack_68,1);
          if (cVar1 == '\0') goto LAB_037e0e54;
          this_01 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_68,"skate_griditem");
          local_80 = local_80 + -1;
        }
        else {
          this_01 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string(asStack_68,"skate_griditem");
          local_80 = local_80 + 1;
        }
      }
      else {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_68,"skate_griditem");
      }
      Board::AddGridItem(this_01,asStack_68,local_80,local_7c,1);
      std::string::~string(asStack_68);
      nop();
    }
  }
LAB_037e0e54:
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

