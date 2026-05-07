// Class: ZombossSkyCityBarrageProjectile


/* ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile() */

void __thiscall
ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile
          (ZombossSkyCityBarrageProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3480;
  *(undefined ***)(this + 0x10) = &PTR__ZombossSkyCityBarrageProjectile_068c3670;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile() */

void __thiscall
ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile
          (ZombossSkyCityBarrageProjectile *this)

{
  ~ZombossSkyCityBarrageProjectile(this + -0x10);
  return;
}


/* ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile() */

void __thiscall
ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile
          (ZombossSkyCityBarrageProjectile *this)

{
  ~ZombossSkyCityBarrageProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile() */

void __thiscall
ZombossSkyCityBarrageProjectile::~ZombossSkyCityBarrageProjectile
          (ZombossSkyCityBarrageProjectile *this)

{
  ~ZombossSkyCityBarrageProjectile(this + -0x10);
  return;
}


/* ZombossSkyCityBarrageProjectile::ZombossSkyCityBarrageProjectile() */

void __thiscall
ZombossSkyCityBarrageProjectile::ZombossSkyCityBarrageProjectile
          (ZombossSkyCityBarrageProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068c3480;
  *(undefined ***)(this + 0x10) = &PTR__ZombossSkyCityBarrageProjectile_068c3670;
  return;
}


/* ZombossSkyCityBarrageProjectile::StaticNew() */

ZombossSkyCityBarrageProjectile * ZombossSkyCityBarrageProjectile::StaticNew(void)

{
  ZombossSkyCityBarrageProjectile *this;
  
  this = ::operator_new(0x1a8);
  ZombossSkyCityBarrageProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCityBarrageProjectile::StaticClassInit() */

void ZombossSkyCityBarrageProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCityBarrageProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04727f84,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCityBarrageProjectile::StaticGetClass() */

long * ZombossSkyCityBarrageProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCityBarrageProjectile::GetClass() const */

long * ZombossSkyCityBarrageProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSkyCityBarrageProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

