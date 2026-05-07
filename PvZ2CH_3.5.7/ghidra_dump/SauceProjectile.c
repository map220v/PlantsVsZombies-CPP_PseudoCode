// Class: SauceProjectile


/* SauceProjectile::~SauceProjectile() */

void __thiscall SauceProjectile::~SauceProjectile(SauceProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0b480;
  *(undefined ***)(this + 0x10) = &PTR__SauceProjectile_06a0b670;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SauceProjectile::~SauceProjectile() */

void __thiscall SauceProjectile::~SauceProjectile(SauceProjectile *this)

{
  ~SauceProjectile(this + -0x10);
  return;
}


/* SauceProjectile::~SauceProjectile() */

void __thiscall SauceProjectile::~SauceProjectile(SauceProjectile *this)

{
  ~SauceProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SauceProjectile::~SauceProjectile() */

void __thiscall SauceProjectile::~SauceProjectile(SauceProjectile *this)

{
  ~SauceProjectile(this + -0x10);
  return;
}


/* SauceProjectile::StaticGetClass() */

long * SauceProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SauceProjectile",uVar2,StaticNew);
  return sClass;
}


/* SauceProjectile::GetClass() const */

long * SauceProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SauceProjectile",uVar2,StaticNew);
  return sClass;
}


/* SauceProjectile::SauceProjectile() */

void __thiscall SauceProjectile::SauceProjectile(SauceProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06a0b480;
  *(undefined ***)(this + 0x10) = &PTR__SauceProjectile_06a0b670;
  return;
}


/* SauceProjectile::StaticNew() */

SauceProjectile * SauceProjectile::StaticNew(void)

{
  SauceProjectile *this;
  
  this = ::operator_new(0x1a8);
  SauceProjectile(this);
  return this;
}


/* SauceProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall SauceProjectile::OnCollideEntity(SauceProjectile *this,BoardEntity *param_1)

{
  Plant *pPVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != (BoardEntity *)0x0) {
    pPVar1 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    if (pPVar1 != (Plant *)0x0) {
      auVar2 = PVZ_EOT();
      Plant::ApplyCondition(auVar2,0,pPVar1,0x10);
      (**(code **)(*(long *)this + 0x168))(this,param_1);
    }
  }
  return 1;
}

