// Class: PepperpultProjectile


/* PepperpultProjectile::~PepperpultProjectile() */

void __thiscall PepperpultProjectile::~PepperpultProjectile(PepperpultProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d4240;
  *(undefined ***)(this + 0x10) = &PTR__PepperpultProjectile_067d4430;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PepperpultProjectile::~PepperpultProjectile() */

void __thiscall PepperpultProjectile::~PepperpultProjectile(PepperpultProjectile *this)

{
  ~PepperpultProjectile(this + -0x10);
  return;
}


/* PepperpultProjectile::~PepperpultProjectile() */

void __thiscall PepperpultProjectile::~PepperpultProjectile(PepperpultProjectile *this)

{
  ~PepperpultProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PepperpultProjectile::~PepperpultProjectile() */

void __thiscall PepperpultProjectile::~PepperpultProjectile(PepperpultProjectile *this)

{
  ~PepperpultProjectile(this + -0x10);
  return;
}


/* PepperpultProjectile::StaticGetClass() */

long * PepperpultProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultProjectile",uVar2,StaticNew);
  return sClass;
}


/* PepperpultProjectile::GetClass() const */

long * PepperpultProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultProjectile",uVar2,StaticNew);
  return sClass;
}


/* PepperpultProjectile::PepperpultProjectile() */

void __thiscall PepperpultProjectile::PepperpultProjectile(PepperpultProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d4240;
  *(undefined ***)(this + 0x10) = &PTR__PepperpultProjectile_067d4430;
  return;
}


/* PepperpultProjectile::StaticNew() */

PepperpultProjectile * PepperpultProjectile::StaticNew(void)

{
  PepperpultProjectile *this;
  
  this = ::operator_new(0x1a8);
  PepperpultProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PepperpultProjectile::BurnZombie(Zombie*, float, float, ZombieConditions) */

void __thiscall
PepperpultProjectile::BurnZombie
          (float param_2,Zombie *param_2_00,undefined8 param_3,long param_1,undefined4 param_5)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::ApplyCondition(param_2_00._0_4_,0,param_1,param_5,1);
  fVar2 = (float)PVZ_T();
  *(float *)(param_1 + 0x3c) = fVar2 + (float)param_2_00._0_4_;
  if (*(int *)(param_1 + 0x30) < 1) {
    *(undefined4 *)(param_1 + 0x30) = 2;
    *(int *)(param_1 + 0x34) = (int)param_2;
    uVar3 = PVZ_T();
    *(undefined4 *)(param_1 + 0x38) = uVar3;
  }
  else if (*(int *)(param_1 + 0x30) != 2) {
    local_c = (int)param_2;
    piVar1 = eastl::max_alt<int>(&local_c,(int *)(param_1 + 0x34));
    *(int *)(param_1 + 0x34) = *piVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PepperpultProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void PepperpultProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  int iVar1;
  RtObject *this;
  PepperpultProjectileProps *pPVar2;
  
  Projectile::fillDamageInfo(param_1,param_2);
  this = (RtObject *)Projectile::GetProps((Projectile *)param_1);
  pPVar2 = Sexy::RtObject::Cast<PepperpultProjectileProps>(this);
  if (((0.0 < *(float *)(pPVar2 + 0x1e4)) && (0.0 < *(float *)(pPVar2 + 0x1e0))) &&
     (iVar1 = FUN_040b165c(*(undefined4 *)(param_1 + 0x70)), 1 < iVar1)) {
    *(undefined4 *)(param_2 + 0x54) = 0x41200000;
  }
  return;
}


/* PepperpultProjectile::handleImpact(BoardEntity*) */

void __thiscall PepperpultProjectile::handleImpact(PepperpultProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  RtObject *this_00;
  PepperpultProjectileProps *pPVar4;
  Zombie *this_01;
  float fVar5;
  
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pPVar4 = Sexy::RtObject::Cast<PepperpultProjectileProps>(this_00);
  if (((((0.0 < *(float *)(pPVar4 + 0x1e4)) && (0.0 < *(float *)(pPVar4 + 0x1e0))) &&
       (iVar2 = FUN_040b165c(*(undefined4 *)(this + 0x70)), 1 < iVar2)) &&
      ((param_1 != (BoardEntity *)0x0 &&
       (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)))) &&
     ((cVar1 = (**(code **)(*(long *)this_01 + 0x328))(), cVar1 == '\0' &&
      ((cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0' &&
       (cVar1 = Zombie::IsIgnoringAllDamage(this_01), cVar1 == '\0')))))) {
    uVar3 = 0x36;
    if (iVar2 == 2) {
      uVar3 = 0x35;
    }
    fVar5 = (float)FUN_040b164c(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
    BurnZombie((PepperpultProjectile *)(fVar5 * *(float *)(pPVar4 + 0x1e4)),
               *(undefined4 *)(pPVar4 + 0x1e0),this,this_01,uVar3);
    Projectile::handleImpact((Projectile *)this,param_1);
    return;
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

