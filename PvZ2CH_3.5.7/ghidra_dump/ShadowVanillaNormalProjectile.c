// Class: ShadowVanillaNormalProjectile


/* ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile() */

void __thiscall
ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile(ShadowVanillaNormalProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069a0ac0;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaNormalProjectile_069a0cb0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile() */

void __thiscall
ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile(ShadowVanillaNormalProjectile *this)

{
  ~ShadowVanillaNormalProjectile(this + -0x10);
  return;
}


/* ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile() */

void __thiscall
ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile(ShadowVanillaNormalProjectile *this)

{
  ~ShadowVanillaNormalProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile() */

void __thiscall
ShadowVanillaNormalProjectile::~ShadowVanillaNormalProjectile(ShadowVanillaNormalProjectile *this)

{
  ~ShadowVanillaNormalProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaNormalProjectile::StaticClassInit() */

void ShadowVanillaNormalProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowVanillaNormalProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cded30,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaNormalProjectile::StaticGetClass() */

long * ShadowVanillaNormalProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaNormalProjectile::GetClass() const */

long * ShadowVanillaNormalProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ShadowVanillaNormalProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowVanillaNormalProjectile::ShadowVanillaNormalProjectile() */

void __thiscall
ShadowVanillaNormalProjectile::ShadowVanillaNormalProjectile(ShadowVanillaNormalProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 1;
  *(undefined ***)this = &PTR_GetClass_069a0ac0;
  *(undefined ***)(this + 0x10) = &PTR__ShadowVanillaNormalProjectile_069a0cb0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  return;
}


/* ShadowVanillaNormalProjectile::StaticNew() */

ShadowVanillaNormalProjectile * ShadowVanillaNormalProjectile::StaticNew(void)

{
  ShadowVanillaNormalProjectile *this;
  
  this = ::operator_new(0x1b8);
  ShadowVanillaNormalProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowVanillaNormalProjectile::onSetInstigator(BoardEntity*) */

void __thiscall
ShadowVanillaNormalProjectile::onSetInstigator
          (ShadowVanillaNormalProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  Plant *this_00;
  RtObject *this_01;
  PlantShadowVanillaProps *pPVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1), this_00 != (Plant *)0x0)) {
    uVar1 = FUN_04cde2c4(*(undefined4 *)(this_00 + 0x50));
    *(undefined4 *)(this + 0x1a8) = uVar1;
    Plant::GetProps();
    this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pPVar2 = Sexy::RtObject::Cast<PlantShadowVanillaProps_const>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (pPVar2 != (PlantShadowVanillaProps *)0x0) {
      fVar4 = *(float *)(pPVar2 + 0x2f4);
      fVar3 = (float)Plant::GetGeneSkillBoost(this_00);
      *(undefined4 *)(this + 0x1b0) = *(undefined4 *)(pPVar2 + 0x2f8);
      *(float *)(this + 0x1ac) = fVar3 * fVar4 + fVar4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowVanillaNormalProjectile::OnCollideEntity(BoardEntity*) */

undefined4 __thiscall
ShadowVanillaNormalProjectile::OnCollideEntity
          (ShadowVanillaNormalProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Zombie *pZVar3;
  
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  if ((((param_1 != (BoardEntity *)0x0) && (*(int *)(this + 0x1a8) == 5)) &&
      (pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar3 != (Zombie *)0x0)) &&
     (cVar1 = Zombie::HasCondition(pZVar3,0x51), cVar1 != '\0')) {
    Zombie::EndCondition(pZVar3,0x51);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1b0),0,pZVar3,0x51,1);
    Zombie::SetConditionTracker(*(undefined4 *)(this + 0x1ac),pZVar3,0x51);
    Zombie::PlayEnhancedShadowMistAnimation((int)pZVar3);
    return uVar2;
  }
  return uVar2;
}

