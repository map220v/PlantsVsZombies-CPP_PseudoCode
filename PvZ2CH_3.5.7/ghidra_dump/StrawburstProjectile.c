// Class: StrawburstProjectile


/* StrawburstProjectile::SetJamFlag(bool) */

void __thiscall StrawburstProjectile::SetJamFlag(StrawburstProjectile *this,bool param_1)

{
  this[0x1a5] = (StrawburstProjectile)param_1;
  return;
}


/* StrawburstProjectile::~StrawburstProjectile() */

void __thiscall StrawburstProjectile::~StrawburstProjectile(StrawburstProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681ee00;
  *(undefined ***)(this + 0x10) = &PTR__StrawburstProjectile_0681eff0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StrawburstProjectile::~StrawburstProjectile() */

void __thiscall StrawburstProjectile::~StrawburstProjectile(StrawburstProjectile *this)

{
  ~StrawburstProjectile(this + -0x10);
  return;
}


/* StrawburstProjectile::~StrawburstProjectile() */

void __thiscall StrawburstProjectile::~StrawburstProjectile(StrawburstProjectile *this)

{
  ~StrawburstProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StrawburstProjectile::~StrawburstProjectile() */

void __thiscall StrawburstProjectile::~StrawburstProjectile(StrawburstProjectile *this)

{
  ~StrawburstProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StrawburstProjectile::StaticClassInit() */

void StrawburstProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StrawburstProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04268c3c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StrawburstProjectile::StaticGetClass() */

long * StrawburstProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstProjectile::GetClass() const */

long * StrawburstProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"StrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StrawburstProjectile::StrawburstProjectile() */

void __thiscall StrawburstProjectile::StrawburstProjectile(StrawburstProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (StrawburstProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0681ee00;
  *(undefined ***)(this + 0x10) = &PTR__StrawburstProjectile_0681eff0;
  return;
}


/* StrawburstProjectile::StaticNew() */

StrawburstProjectile * StrawburstProjectile::StaticNew(void)

{
  StrawburstProjectile *this;
  
  this = ::operator_new(0x1a8);
  StrawburstProjectile(this);
  return this;
}

