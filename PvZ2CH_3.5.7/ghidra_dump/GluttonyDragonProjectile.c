// Class: GluttonyDragonProjectile


/* GluttonyDragonProjectile::GluttonyDragonProjectile() */

void __thiscall GluttonyDragonProjectile::GluttonyDragonProjectile(GluttonyDragonProjectile *this)

{
  NekotailStab::NekotailStab((NekotailStab *)this);
  *(undefined ***)this = &PTR_GetClass_069aaf90;
  *(undefined ***)(this + 0x10) = &PTR__GluttonyDragonProjectile_069ab180;
  return;
}


/* GluttonyDragonProjectile::StaticNew() */

GluttonyDragonProjectile * GluttonyDragonProjectile::StaticNew(void)

{
  GluttonyDragonProjectile *this;
  
  this = ::operator_new(0x1e0);
  GluttonyDragonProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GluttonyDragonProjectile::StaticClassInit() */

void GluttonyDragonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GluttonyDragonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d23518,0x1e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GluttonyDragonProjectile::StaticGetClass() */

long * GluttonyDragonProjectile::StaticGetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"GluttonyDragonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyDragonProjectile::GetClass() const */

long * GluttonyDragonProjectile::GetClass(void)

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
  uVar2 = NekotailStab::StaticGetClass();
  (*pcVar3)(plVar1,"GluttonyDragonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GluttonyDragonProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
GluttonyDragonProjectile::OnCollideEntity(GluttonyDragonProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  undefined8 extraout_x0;
  RtObject *this_00;
  GluttonyProjectileProps *pGVar2;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    nop();
    this_00 = (RtObject *)Projectile::getProps((Projectile *)this);
    pGVar2 = Sexy::RtObject::Cast<GluttonyProjectileProps>(this_00);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(pGVar2 + 0x1e4),0,extraout_x0,0x32,1);
    Zombie::SetConditionTracker(*(undefined4 *)(pGVar2 + 0x1e8),extraout_x0,0x32);
  }
  NekotailStab::OnCollideEntity((BoardEntity *)this);
  return;
}


/* GluttonyDragonProjectile::~GluttonyDragonProjectile() */

void __thiscall GluttonyDragonProjectile::~GluttonyDragonProjectile(GluttonyDragonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069aaf90;
  *(undefined ***)(this + 0x10) = &PTR__GluttonyDragonProjectile_069ab180;
  NekotailStab::~NekotailStab((NekotailStab *)this);
  return;
}


/* non-virtual thunk to GluttonyDragonProjectile::~GluttonyDragonProjectile() */

void __thiscall GluttonyDragonProjectile::~GluttonyDragonProjectile(GluttonyDragonProjectile *this)

{
  ~GluttonyDragonProjectile(this + -0x10);
  return;
}


/* GluttonyDragonProjectile::~GluttonyDragonProjectile() */

void __thiscall GluttonyDragonProjectile::~GluttonyDragonProjectile(GluttonyDragonProjectile *this)

{
  ~GluttonyDragonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GluttonyDragonProjectile::~GluttonyDragonProjectile() */

void __thiscall GluttonyDragonProjectile::~GluttonyDragonProjectile(GluttonyDragonProjectile *this)

{
  ~GluttonyDragonProjectile(this + -0x10);
  return;
}

