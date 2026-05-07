// Class: GeishaSuperProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaSuperProjectile::getImpactPam() */

void GeishaSuperProjectile::getImpactPam(void)

{
  long lVar1;
  long in_x0;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(char *)(in_x0 + 0x1f2) == '\0') {
    Projectile::getImpactPam();
  }
  else {
    std::string::string(in_x8,"POPANIM_EFFECTS_GEISHA_DEFAULT");
    nop();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaSuperProjectile::~GeishaSuperProjectile() */

void __thiscall GeishaSuperProjectile::~GeishaSuperProjectile(GeishaSuperProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0674bbc0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaSuperProjectile_0674bdc8;
  GeishaProjectile::~GeishaProjectile((GeishaProjectile *)this);
  return;
}


/* non-virtual thunk to GeishaSuperProjectile::~GeishaSuperProjectile() */

void __thiscall GeishaSuperProjectile::~GeishaSuperProjectile(GeishaSuperProjectile *this)

{
  ~GeishaSuperProjectile(this + -0x10);
  return;
}


/* GeishaSuperProjectile::~GeishaSuperProjectile() */

void __thiscall GeishaSuperProjectile::~GeishaSuperProjectile(GeishaSuperProjectile *this)

{
  ~GeishaSuperProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GeishaSuperProjectile::~GeishaSuperProjectile() */

void __thiscall GeishaSuperProjectile::~GeishaSuperProjectile(GeishaSuperProjectile *this)

{
  ~GeishaSuperProjectile(this + -0x10);
  return;
}


/* GeishaSuperProjectile::GeishaSuperProjectile() */

void __thiscall GeishaSuperProjectile::GeishaSuperProjectile(GeishaSuperProjectile *this)

{
  GeishaProjectile::GeishaProjectile((GeishaProjectile *)this);
  this[0x1f2] = (GeishaSuperProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0674bbc0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaSuperProjectile_0674bdc8;
  return;
}


/* GeishaSuperProjectile::StaticNew() */

GeishaSuperProjectile * GeishaSuperProjectile::StaticNew(void)

{
  GeishaSuperProjectile *this;
  
  this = ::operator_new(0x1f8);
  GeishaSuperProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaSuperProjectile::StaticClassInit() */

void GeishaSuperProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaSuperProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2dad8,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaSuperProjectile::StaticGetClass() */

long * GeishaSuperProjectile::StaticGetClass(void)

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
  uVar2 = GeishaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaSuperProjectile::GetClass() const */

long * GeishaSuperProjectile::GetClass(void)

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
  uVar2 = GeishaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaSuperProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaSuperProjectile::CanBackstab(BoardEntity*) */

bool __thiscall GeishaSuperProjectile::CanBackstab(GeishaSuperProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *this_00;
  float *pfVar2;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    pfVar2 = (float *)Projectile::GetVelocity((Projectile *)this);
    if (*pfVar2 <= 0.0) {
      iVar1 = Zombie::GetFacing(this_00);
      return iVar1 == 0;
    }
    iVar1 = Zombie::GetFacing(this_00);
    return iVar1 == 1;
  }
  return false;
}


/* GeishaSuperProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
GeishaSuperProjectile::fillDamageInfo
          (GeishaSuperProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  GeishaSuperProjectile GVar1;
  RtObject *this_00;
  GeishaSuperProjectileProps *pGVar2;
  float fVar3;
  
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  GVar1 = (GeishaSuperProjectile)CanBackstab(this,param_2);
  this[0x1f2] = GVar1;
  if (GVar1 != (GeishaSuperProjectile)0x0) {
    fVar3 = *(float *)(param_1 + 8);
    this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
    pGVar2 = Sexy::RtObject::Cast<GeishaSuperProjectileProps>(this_00);
    *(float *)(param_1 + 8) = *(float *)(pGVar2 + 0x1e0) * fVar3;
  }
  return;
}


/* GeishaSuperProjectile::handleImpact(BoardEntity*) */

void __thiscall
GeishaSuperProjectile::handleImpact(GeishaSuperProjectile *this,BoardEntity *param_1)

{
  GeishaProjectile::handleImpact((GeishaProjectile *)this,param_1);
  this[0x1f2] = (GeishaSuperProjectile)0x0;
  return;
}

