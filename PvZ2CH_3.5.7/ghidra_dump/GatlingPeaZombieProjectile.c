// Class: GatlingPeaZombieProjectile


/* GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile() */

void __thiscall
GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile(GatlingPeaZombieProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06902100;
  *(undefined ***)(this + 0x10) = &PTR__GatlingPeaZombieProjectile_069022f0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile() */

void __thiscall
GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile(GatlingPeaZombieProjectile *this)

{
  ~GatlingPeaZombieProjectile(this + -0x10);
  return;
}


/* GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile() */

void __thiscall
GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile(GatlingPeaZombieProjectile *this)

{
  ~GatlingPeaZombieProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile() */

void __thiscall
GatlingPeaZombieProjectile::~GatlingPeaZombieProjectile(GatlingPeaZombieProjectile *this)

{
  ~GatlingPeaZombieProjectile(this + -0x10);
  return;
}


/* GatlingPeaZombieProjectile::GatlingPeaZombieProjectile() */

void __thiscall
GatlingPeaZombieProjectile::GatlingPeaZombieProjectile(GatlingPeaZombieProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06902100;
  *(undefined ***)(this + 0x10) = &PTR__GatlingPeaZombieProjectile_069022f0;
  return;
}


/* GatlingPeaZombieProjectile::StaticNew() */

GatlingPeaZombieProjectile * GatlingPeaZombieProjectile::StaticNew(void)

{
  GatlingPeaZombieProjectile *this;
  
  this = ::operator_new(0x1a8);
  GatlingPeaZombieProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GatlingPeaZombieProjectile::StaticClassInit() */

void GatlingPeaZombieProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GatlingPeaZombieProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0480f654,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GatlingPeaZombieProjectile::StaticGetClass() */

long * GatlingPeaZombieProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GatlingPeaZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GatlingPeaZombieProjectile::GetClass() const */

long * GatlingPeaZombieProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GatlingPeaZombieProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GatlingPeaZombieProjectile::handleImpact(BoardEntity*) */

void __thiscall
GatlingPeaZombieProjectile::handleImpact(GatlingPeaZombieProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), bVar1)) {
    MessageRouter::Post((_func_void *)gMessageRouter);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

