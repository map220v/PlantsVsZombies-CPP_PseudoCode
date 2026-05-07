// Class: SnowballProjectile


/* SnowballProjectile::~SnowballProjectile() */

void __thiscall SnowballProjectile::~SnowballProjectile(SnowballProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0690e9e0;
  *(undefined ***)(this + 0x10) = &PTR__SnowballProjectile_0690ebd0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SnowballProjectile::~SnowballProjectile() */

void __thiscall SnowballProjectile::~SnowballProjectile(SnowballProjectile *this)

{
  ~SnowballProjectile(this + -0x10);
  return;
}


/* SnowballProjectile::~SnowballProjectile() */

void __thiscall SnowballProjectile::~SnowballProjectile(SnowballProjectile *this)

{
  ~SnowballProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SnowballProjectile::~SnowballProjectile() */

void __thiscall SnowballProjectile::~SnowballProjectile(SnowballProjectile *this)

{
  ~SnowballProjectile(this + -0x10);
  return;
}


/* SnowballProjectile::SnowballProjectile() */

void __thiscall SnowballProjectile::SnowballProjectile(SnowballProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690e9e0;
  *(undefined ***)(this + 0x10) = &PTR__SnowballProjectile_0690ebd0;
  return;
}


/* SnowballProjectile::StaticNew() */

SnowballProjectile * SnowballProjectile::StaticNew(void)

{
  SnowballProjectile *this;
  
  this = ::operator_new(0x1a8);
  SnowballProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowballProjectile::StaticClassInit() */

void SnowballProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnowballProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04913594,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SnowballProjectile::StaticGetClass() */

long * SnowballProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SnowballProjectile::GetClass() const */

long * SnowballProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SnowballProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SnowballProjectile::damageEntity(BoardEntity*) */

void __thiscall SnowballProjectile::damageEntity(SnowballProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  Zombie *this_00;
  RtWeakPtr<Sexy::ResourceInfo> *this_01;
  long lVar2;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  (**(code **)(*(long *)this + 0x178))(this,aDStack_68,0);
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    nop();
    this_01 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(this_00);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_01);
    local_60 = *(float *)(lVar2 + 0x2c) * local_60;
  }
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

