// Class: HorseBeanProjectile


/* HorseBeanProjectile::GetRenderOrder() const */

undefined8 HorseBeanProjectile::GetRenderOrder(void)

{
  return 900000;
}


/* HorseBeanProjectile::~HorseBeanProjectile() */

void __thiscall HorseBeanProjectile::~HorseBeanProjectile(HorseBeanProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0680f830;
  *(undefined ***)(this + 0x10) = &PTR__HorseBeanProjectile_0680fa20;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to HorseBeanProjectile::~HorseBeanProjectile() */

void __thiscall HorseBeanProjectile::~HorseBeanProjectile(HorseBeanProjectile *this)

{
  ~HorseBeanProjectile(this + -0x10);
  return;
}


/* HorseBeanProjectile::~HorseBeanProjectile() */

void __thiscall HorseBeanProjectile::~HorseBeanProjectile(HorseBeanProjectile *this)

{
  ~HorseBeanProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to HorseBeanProjectile::~HorseBeanProjectile() */

void __thiscall HorseBeanProjectile::~HorseBeanProjectile(HorseBeanProjectile *this)

{
  ~HorseBeanProjectile(this + -0x10);
  return;
}


/* HorseBeanProjectile::HorseBeanProjectile() */

void __thiscall HorseBeanProjectile::HorseBeanProjectile(HorseBeanProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0680f830;
  *(undefined ***)(this + 0x10) = &PTR__HorseBeanProjectile_0680fa20;
  return;
}


/* HorseBeanProjectile::StaticNew() */

HorseBeanProjectile * HorseBeanProjectile::StaticNew(void)

{
  HorseBeanProjectile *this;
  
  this = ::operator_new(0x1a8);
  HorseBeanProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HorseBeanProjectile::StaticClassInit() */

void HorseBeanProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"HorseBeanProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_042275ac,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HorseBeanProjectile::StaticGetClass() */

long * HorseBeanProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HorseBeanProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HorseBeanProjectile::GetClass() const */

long * HorseBeanProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"HorseBeanProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

