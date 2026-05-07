// Class: LavaGuavaProjectile


/* LavaGuavaProjectile::~LavaGuavaProjectile() */

void __thiscall LavaGuavaProjectile::~LavaGuavaProjectile(LavaGuavaProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067ea640;
  *(undefined ***)(this + 0x10) = &PTR__LavaGuavaProjectile_067ea830;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to LavaGuavaProjectile::~LavaGuavaProjectile() */

void __thiscall LavaGuavaProjectile::~LavaGuavaProjectile(LavaGuavaProjectile *this)

{
  ~LavaGuavaProjectile(this + -0x10);
  return;
}


/* LavaGuavaProjectile::~LavaGuavaProjectile() */

void __thiscall LavaGuavaProjectile::~LavaGuavaProjectile(LavaGuavaProjectile *this)

{
  ~LavaGuavaProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LavaGuavaProjectile::~LavaGuavaProjectile() */

void __thiscall LavaGuavaProjectile::~LavaGuavaProjectile(LavaGuavaProjectile *this)

{
  ~LavaGuavaProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LavaGuavaProjectile::StaticClassInit() */

void LavaGuavaProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LavaGuavaProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_041246fc,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LavaGuavaProjectile::StaticGetClass() */

long * LavaGuavaProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LavaGuavaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProjectile::GetClass() const */

long * LavaGuavaProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LavaGuavaProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LavaGuavaProjectile::LavaGuavaProjectile() */

void __thiscall LavaGuavaProjectile::LavaGuavaProjectile(LavaGuavaProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067ea640;
  *(undefined ***)(this + 0x10) = &PTR__LavaGuavaProjectile_067ea830;
  DVec3::DVec3((DVec3 *)(this + 0x1a8));
  return;
}


/* LavaGuavaProjectile::StaticNew() */

LavaGuavaProjectile * LavaGuavaProjectile::StaticNew(void)

{
  LavaGuavaProjectile *this;
  
  this = ::operator_new(0x1b8);
  LavaGuavaProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LavaGuavaProjectile::OnCollideGround() */

void __thiscall LavaGuavaProjectile::OnCollideGround(LavaGuavaProjectile *this)

{
  BoardTransforms *pBVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  RtObject *pRVar7;
  LavaGuavaProjectileProps *pLVar8;
  GridItemLava *pGVar9;
  int local_10;
  int local_c;
  
  pBVar1 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0x1a8),*(float *)(this + 0x1ac));
  if ((((local_10 != -1) && (local_c != -1)) && (lVar6 = FUN_04126730(), lVar6 == 0)) &&
     (lVar6 = FUN_04126514(local_10,local_c), lVar6 == 0)) {
    iVar4 = FUN_0412128c(*(undefined4 *)(this + 0x70));
    pRVar7 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pLVar8 = Sexy::RtObject::Cast<LavaGuavaProjectileProps>(pRVar7);
    pRVar7 = (RtObject *)
             Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(pLVar8 + 0x1e8),local_10,
                                local_c,iVar4);
    uVar5 = FUN_04121274(*(undefined4 *)(this + 0x24));
    FUN_04121278(pRVar7 + 0x24,uVar5);
    bVar3 = Sexy::RtObject::IsA<GridItemLava>(pRVar7);
    if ((bVar3) &&
       (pGVar9 = Sexy::RtObject::Cast<GridItemLava>(pRVar7), pGVar9 != (GridItemLava *)0x0)) {
      (**(code **)(*(long *)pGVar9 + 0x2b0))(*(undefined4 *)(pLVar8 + 0x1e0));
    }
  }
  uVar2 = Projectile::OnCollideGround((Projectile *)this);
  if (pBVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

