// Class: ThreepeaterProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThreepeaterProjectile::moveThroughTime(float) */

void __thiscall ThreepeaterProjectile::moveThroughTime(ThreepeaterProjectile *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] != (ThreepeaterProjectile)0x0) goto LAB_040538f0;
  puVar1 = (undefined8 *)Projectile::GetVelocity((Projectile *)this);
  local_10 = *(undefined4 *)(puVar1 + 1);
  local_18._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_18._0_4_ = (undefined4)*puVar1;
  if (local_18._4_4_ < 0.0) {
    local_18._4_4_ = local_18._4_4_ + param_1 * 350.0;
    if (0.0 <= local_18._4_4_) goto LAB_04053928;
  }
  else {
    local_18._4_4_ = local_18._4_4_ - param_1 * 350.0;
    if (local_18._4_4_ <= 0.0) {
LAB_04053928:
      local_18 = local_18 & 0xffffffff;
    }
  }
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_18);
LAB_040538f0:
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThreepeaterProjectile::~ThreepeaterProjectile() */

void __thiscall ThreepeaterProjectile::~ThreepeaterProjectile(ThreepeaterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067c7e60;
  *(undefined ***)(this + 0x10) = &PTR__ThreepeaterProjectile_067c8050;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ThreepeaterProjectile::~ThreepeaterProjectile() */

void __thiscall ThreepeaterProjectile::~ThreepeaterProjectile(ThreepeaterProjectile *this)

{
  ~ThreepeaterProjectile(this + -0x10);
  return;
}


/* ThreepeaterProjectile::~ThreepeaterProjectile() */

void __thiscall ThreepeaterProjectile::~ThreepeaterProjectile(ThreepeaterProjectile *this)

{
  ~ThreepeaterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ThreepeaterProjectile::~ThreepeaterProjectile() */

void __thiscall ThreepeaterProjectile::~ThreepeaterProjectile(ThreepeaterProjectile *this)

{
  ~ThreepeaterProjectile(this + -0x10);
  return;
}


/* ThreepeaterProjectile::ThreepeaterProjectile() */

void __thiscall ThreepeaterProjectile::ThreepeaterProjectile(ThreepeaterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067c7e60;
  *(undefined ***)(this + 0x10) = &PTR__ThreepeaterProjectile_067c8050;
  return;
}


/* ThreepeaterProjectile::StaticNew() */

ThreepeaterProjectile * ThreepeaterProjectile::StaticNew(void)

{
  ThreepeaterProjectile *this;
  
  this = ::operator_new(0x1a8);
  ThreepeaterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThreepeaterProjectile::StaticClassInit() */

void ThreepeaterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThreepeaterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04073214,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThreepeaterProjectile::StaticGetClass() */

long * ThreepeaterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThreepeaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThreepeaterProjectile::GetClass() const */

long * ThreepeaterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ThreepeaterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

