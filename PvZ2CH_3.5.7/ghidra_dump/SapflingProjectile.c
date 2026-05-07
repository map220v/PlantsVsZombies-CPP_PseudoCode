// Class: SapflingProjectile


/* SapflingProjectile::~SapflingProjectile() */

void __thiscall SapflingProjectile::~SapflingProjectile(SapflingProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067cff70;
  *(undefined ***)(this + 0x10) = &PTR__SapflingProjectile_067d0160;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SapflingProjectile::~SapflingProjectile() */

void __thiscall SapflingProjectile::~SapflingProjectile(SapflingProjectile *this)

{
  ~SapflingProjectile(this + -0x10);
  return;
}


/* SapflingProjectile::~SapflingProjectile() */

void __thiscall SapflingProjectile::~SapflingProjectile(SapflingProjectile *this)

{
  ~SapflingProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SapflingProjectile::~SapflingProjectile() */

void __thiscall SapflingProjectile::~SapflingProjectile(SapflingProjectile *this)

{
  ~SapflingProjectile(this + -0x10);
  return;
}


/* SapflingProjectile::SapflingProjectile() */

void __thiscall SapflingProjectile::SapflingProjectile(SapflingProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067cff70;
  *(undefined ***)(this + 0x10) = &PTR__SapflingProjectile_067d0160;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}


/* SapflingProjectile::StaticNew() */

SapflingProjectile * SapflingProjectile::StaticNew(void)

{
  SapflingProjectile *this;
  
  this = ::operator_new(0x1b8);
  SapflingProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SapflingProjectile::StaticClassInit() */

void SapflingProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SapflingProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0409b438,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SapflingProjectile::StaticGetClass() */

long * SapflingProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SapflingProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SapflingProjectile::GetClass() const */

long * SapflingProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SapflingProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SapflingProjectile::OnCollideGround() */

void __thiscall SapflingProjectile::OnCollideGround(SapflingProjectile *this)

{
  BoardTransforms *pBVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  GridItemSap *pGVar6;
  RtObject *pRVar7;
  SapflingProjectileProps *pSVar8;
  int local_10;
  int local_c;
  
  pBVar1 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  if (((local_10 != -1) && (local_c != -1)) && (lVar5 = FUN_0409caa4(), lVar5 == 0)) {
    iVar3 = FUN_0409a1ec(*(undefined4 *)(this + 0x70));
    pGVar6 = (GridItemSap *)FUN_0409cb88(local_10,local_c);
    lVar5 = FUN_0409cc6c(local_10,local_c);
    if (pGVar6 == (GridItemSap *)0x0) {
      if (lVar5 == 0) {
        pRVar7 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pSVar8 = Sexy::RtObject::Cast<SapflingProjectileProps>(pRVar7);
        pRVar7 = (RtObject *)
                 Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pSVar8 + 0x1e0),
                                    local_10,local_c,iVar3);
        uVar4 = FUN_0409a13c(*(undefined4 *)(this + 0x24));
        FUN_0409a140(pRVar7 + 0x24,uVar4);
        pGVar6 = Sexy::RtObject::Cast<GridItemSap>(pRVar7);
        FUN_0409a210(*(undefined4 *)(this + 0x1b4),pGVar6 + 0x1b0);
      }
    }
    else {
      GridItemSap::ResetTimer(pGVar6);
      (**(code **)(*(long *)pGVar6 + 0x198))(pGVar6,iVar3);
      pGVar6 = Sexy::RtObject::Cast<GridItemSap>((RtObject *)pGVar6);
      FUN_0409a210(*(undefined4 *)(this + 0x1b4),pGVar6 + 0x1b0);
    }
  }
  uVar2 = Projectile::OnCollideGround((Projectile *)this);
  if (pBVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

