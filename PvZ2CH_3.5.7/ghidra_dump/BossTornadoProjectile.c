// Class: BossTornadoProjectile


/* BossTornadoProjectile::onProjectileInitialized() */

void __thiscall BossTornadoProjectile::onProjectileInitialized(BossTornadoProjectile *this)

{
  this[0x1a5] = (BossTornadoProjectile)0x0;
  return;
}


/* BossTornadoProjectile::~BossTornadoProjectile() */

void __thiscall BossTornadoProjectile::~BossTornadoProjectile(BossTornadoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068c48e0;
  *(undefined ***)(this + 0x10) = &PTR__BossTornadoProjectile_068c4ad0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BossTornadoProjectile::~BossTornadoProjectile() */

void __thiscall BossTornadoProjectile::~BossTornadoProjectile(BossTornadoProjectile *this)

{
  ~BossTornadoProjectile(this + -0x10);
  return;
}


/* BossTornadoProjectile::~BossTornadoProjectile() */

void __thiscall BossTornadoProjectile::~BossTornadoProjectile(BossTornadoProjectile *this)

{
  ~BossTornadoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BossTornadoProjectile::~BossTornadoProjectile() */

void __thiscall BossTornadoProjectile::~BossTornadoProjectile(BossTornadoProjectile *this)

{
  ~BossTornadoProjectile(this + -0x10);
  return;
}


/* BossTornadoProjectile::BossTornadoProjectile() */

void __thiscall BossTornadoProjectile::BossTornadoProjectile(BossTornadoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068c48e0;
  *(undefined ***)(this + 0x10) = &PTR__BossTornadoProjectile_068c4ad0;
  return;
}


/* BossTornadoProjectile::StaticNew() */

BossTornadoProjectile * BossTornadoProjectile::StaticNew(void)

{
  BossTornadoProjectile *this;
  
  this = ::operator_new(0x1a8);
  BossTornadoProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossTornadoProjectile::StaticClassInit() */

void BossTornadoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BossTornadoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04729950,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BossTornadoProjectile::StaticGetClass() */

long * BossTornadoProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BossTornadoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BossTornadoProjectile::GetClass() const */

long * BossTornadoProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BossTornadoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BossTornadoProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BossTornadoProjectile::OnCollideEntity(BossTornadoProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  PlantGroup *this_00;
  long lVar2;
  RtObject *this_01;
  BossTornadoProjectileProps *pBVar3;
  long *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    if (this[0x1a5] == (BossTornadoProjectile)0x0) goto LAB_0472d9e8;
  }
  else {
    bVar1 = Sexy::RtObject::IsA<PlantGroup>((RtObject *)param_1);
    if (bVar1) {
      this_00 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)param_1);
      PlantGroup::GetTopPlant(this_00);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      Plant::GetType();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      bVar1 = std::operator==((string *)(lVar2 + 8),"doublesamara");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      if (bVar1) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        (**(code **)(*(long *)this + 0x48))(this);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        bVar1 = true;
        goto LAB_0472d944;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
    }
    if (this[0x1a5] == (BossTornadoProjectile)0x0) {
      bVar1 = Sexy::RtObject::IsA<GridItemAirship>((RtObject *)param_1);
      if (bVar1) {
        bVar1 = false;
        this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
        pBVar3 = Sexy::RtObject::Cast<BossTornadoProjectileProps>(this_01);
        nop();
        DamageInfo::DamageInfo((DamageInfo *)aRStack_68);
        local_60 = *(undefined4 *)(pBVar3 + 0x1e0);
        (**(code **)(*extraout_x0 + 0x110))(extraout_x0,(DamageInfo *)aRStack_68);
        this[0x1a5] = (BossTornadoProjectile)0x1;
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
        goto LAB_0472d944;
      }
LAB_0472d9e8:
      bVar1 = false;
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      goto LAB_0472d944;
    }
    bVar1 = Sexy::RtObject::IsA<GridItemAirship>((RtObject *)param_1);
    if (!bVar1) {
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      goto LAB_0472d944;
    }
  }
  bVar1 = false;
LAB_0472d944:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

