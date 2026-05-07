// Class: SquidProjectile


/* SquidProjectile::~SquidProjectile() */

void __thiscall SquidProjectile::~SquidProjectile(SquidProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068844f0;
  *(undefined ***)(this + 0x10) = &PTR__SquidProjectile_068846e0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SquidProjectile::~SquidProjectile() */

void __thiscall SquidProjectile::~SquidProjectile(SquidProjectile *this)

{
  ~SquidProjectile(this + -0x10);
  return;
}


/* SquidProjectile::~SquidProjectile() */

void __thiscall SquidProjectile::~SquidProjectile(SquidProjectile *this)

{
  ~SquidProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SquidProjectile::~SquidProjectile() */

void __thiscall SquidProjectile::~SquidProjectile(SquidProjectile *this)

{
  ~SquidProjectile(this + -0x10);
  return;
}


/* SquidProjectile::StaticGetClass() */

long * SquidProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SquidProjectile",uVar2,StaticNew);
  return sClass;
}


/* SquidProjectile::GetClass() const */

long * SquidProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SquidProjectile",uVar2,StaticNew);
  return sClass;
}


/* SquidProjectile::SquidProjectile() */

void __thiscall SquidProjectile::SquidProjectile(SquidProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068844f0;
  *(undefined ***)(this + 0x10) = &PTR__SquidProjectile_068846e0;
  return;
}


/* SquidProjectile::StaticNew() */

SquidProjectile * SquidProjectile::StaticNew(void)

{
  SquidProjectile *this;
  
  this = ::operator_new(0x1a8);
  SquidProjectile(this);
  return this;
}


/* SquidProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall SquidProjectile::OnCollideEntity(SquidProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  PlantGroup *pPVar2;
  undefined1 auVar3 [16];
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (pPVar2 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1), pPVar2 != (PlantGroup *)0x0))
     && (cVar1 = PlantGroup::CanBeRangeTargeted(), cVar1 != '\0')) {
    auVar3 = PVZ_EOT();
    PlantGroup::ApplyConversionCondition((PlantGroup *)auVar3,0x3f000000,pPVar2,1);
    (**(code **)(*(long *)this + 0x168))(this,pPVar2);
  }
  return 1;
}

