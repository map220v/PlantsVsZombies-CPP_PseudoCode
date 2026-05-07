// Class: MagnifyingGrassProjectile


/* MagnifyingGrassProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void MagnifyingGrassProjectile::fillDamageInfo(DamageInfo *param_1,BoardEntity *param_2)

{
  Projectile::fillDamageInfo(param_1,param_2);
  Projectile::getProps((Projectile *)param_1);
  if (param_1[0x1a5] != (DamageInfo)0x0) {
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * *(float *)(param_1 + 0x1a8);
  }
  return;
}


/* MagnifyingGrassProjectile::~MagnifyingGrassProjectile() */

void __thiscall
MagnifyingGrassProjectile::~MagnifyingGrassProjectile(MagnifyingGrassProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067bd770;
  *(undefined ***)(this + 0x10) = &PTR__MagnifyingGrassProjectile_067bd960;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MagnifyingGrassProjectile::~MagnifyingGrassProjectile() */

void __thiscall
MagnifyingGrassProjectile::~MagnifyingGrassProjectile(MagnifyingGrassProjectile *this)

{
  ~MagnifyingGrassProjectile(this + -0x10);
  return;
}


/* MagnifyingGrassProjectile::~MagnifyingGrassProjectile() */

void __thiscall
MagnifyingGrassProjectile::~MagnifyingGrassProjectile(MagnifyingGrassProjectile *this)

{
  ~MagnifyingGrassProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MagnifyingGrassProjectile::~MagnifyingGrassProjectile() */

void __thiscall
MagnifyingGrassProjectile::~MagnifyingGrassProjectile(MagnifyingGrassProjectile *this)

{
  ~MagnifyingGrassProjectile(this + -0x10);
  return;
}


/* MagnifyingGrassProjectile::MagnifyingGrassProjectile() */

void __thiscall
MagnifyingGrassProjectile::MagnifyingGrassProjectile(MagnifyingGrassProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (MagnifyingGrassProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067bd770;
  *(undefined ***)(this + 0x10) = &PTR__MagnifyingGrassProjectile_067bd960;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  return;
}


/* MagnifyingGrassProjectile::StaticNew() */

MagnifyingGrassProjectile * MagnifyingGrassProjectile::StaticNew(void)

{
  MagnifyingGrassProjectile *this;
  
  this = ::operator_new(0x1b0);
  MagnifyingGrassProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MagnifyingGrassProjectile::StaticClassInit() */

void MagnifyingGrassProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MagnifyingGrassProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04041298,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MagnifyingGrassProjectile::StaticGetClass() */

long * MagnifyingGrassProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MagnifyingGrassProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnifyingGrassProjectile::GetClass() const */

long * MagnifyingGrassProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"MagnifyingGrassProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MagnifyingGrassProjectile::SetChargeAttack(bool, float) */

void __thiscall
MagnifyingGrassProjectile::SetChargeAttack
          (MagnifyingGrassProjectile *this,bool param_1,float param_2)

{
  *(float *)(this + 0x1a8) = param_2;
  this[0x1a5] = (MagnifyingGrassProjectile)param_1;
  return;
}

