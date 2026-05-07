// Class: PomegranateJewelerBigProjectile


/* PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile() */

void __thiscall
PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile
          (PomegranateJewelerBigProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699d6e0;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerBigProjectile_0699d8d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile() */

void __thiscall
PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile
          (PomegranateJewelerBigProjectile *this)

{
  ~PomegranateJewelerBigProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile() */

void __thiscall
PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile
          (PomegranateJewelerBigProjectile *this)

{
  ~PomegranateJewelerBigProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile() */

void __thiscall
PomegranateJewelerBigProjectile::~PomegranateJewelerBigProjectile
          (PomegranateJewelerBigProjectile *this)

{
  ~PomegranateJewelerBigProjectile(this + -0x10);
  return;
}


/* PomegranateJewelerBigProjectile::PomegranateJewelerBigProjectile() */

void __thiscall
PomegranateJewelerBigProjectile::PomegranateJewelerBigProjectile
          (PomegranateJewelerBigProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 3;
  *(undefined ***)this = &PTR_GetClass_0699d6e0;
  *(undefined ***)(this + 0x10) = &PTR__PomegranateJewelerBigProjectile_0699d8d0;
  return;
}


/* PomegranateJewelerBigProjectile::StaticNew() */

PomegranateJewelerBigProjectile * PomegranateJewelerBigProjectile::StaticNew(void)

{
  PomegranateJewelerBigProjectile *this;
  
  this = ::operator_new(0x1b0);
  PomegranateJewelerBigProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PomegranateJewelerBigProjectile::StaticClassInit() */

void PomegranateJewelerBigProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PomegranateJewelerBigProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cce090,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PomegranateJewelerBigProjectile::StaticGetClass() */

long * PomegranateJewelerBigProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerBigProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PomegranateJewelerBigProjectile::GetClass() const */

long * PomegranateJewelerBigProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PomegranateJewelerBigProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

