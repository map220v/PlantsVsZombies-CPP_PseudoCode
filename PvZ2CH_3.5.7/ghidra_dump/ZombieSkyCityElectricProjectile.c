// Class: ZombieSkyCityElectricProjectile


/* ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile() */

void __thiscall
ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile
          (ZombieSkyCityElectricProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068e0680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityElectricProjectile_068e0870;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile() */

void __thiscall
ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile
          (ZombieSkyCityElectricProjectile *this)

{
  ~ZombieSkyCityElectricProjectile(this + -0x10);
  return;
}


/* ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile() */

void __thiscall
ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile
          (ZombieSkyCityElectricProjectile *this)

{
  ~ZombieSkyCityElectricProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile() */

void __thiscall
ZombieSkyCityElectricProjectile::~ZombieSkyCityElectricProjectile
          (ZombieSkyCityElectricProjectile *this)

{
  ~ZombieSkyCityElectricProjectile(this + -0x10);
  return;
}


/* ZombieSkyCityElectricProjectile::ZombieSkyCityElectricProjectile() */

void __thiscall
ZombieSkyCityElectricProjectile::ZombieSkyCityElectricProjectile
          (ZombieSkyCityElectricProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_068e0680;
  *(undefined ***)(this + 0x10) = &PTR__ZombieSkyCityElectricProjectile_068e0870;
  return;
}


/* ZombieSkyCityElectricProjectile::StaticNew() */

ZombieSkyCityElectricProjectile * ZombieSkyCityElectricProjectile::StaticNew(void)

{
  ZombieSkyCityElectricProjectile *this;
  
  this = ::operator_new(0x1a8);
  ZombieSkyCityElectricProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityElectricProjectile::StaticClassInit() */

void ZombieSkyCityElectricProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityElectricProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_047a6b78,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityElectricProjectile::StaticGetClass() */

long * ZombieSkyCityElectricProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProjectile::GetClass() const */

long * ZombieSkyCityElectricProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieSkyCityElectricProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityElectricProjectile::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
ZombieSkyCityElectricProjectile::OnCollideEntity
          (ZombieSkyCityElectricProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Plant *this_00;
  RtObject *this_01;
  ZombieSkyCityElectricProjectileProps *pZVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_1 == (BoardEntity *)0x0) {
    return 1;
  }
  this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
  if (this_00 == (Plant *)0x0) {
    return 1;
  }
  cVar1 = Plant::CanBeRangeTargeted(this_00);
  if (cVar1 == '\0') {
    return 1;
  }
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pZVar2 = Sexy::RtObject::Cast<ZombieSkyCityElectricProjectileProps>(this_01);
  if (*(int *)(pZVar2 + 0x1e0) == 0) {
    cVar1 = Plant::HasCondition(this_00,9);
    if (cVar1 != '\0') {
      Plant::EndCondition(this_00,9);
      uVar4 = PVZ_EOT();
      Plant::ApplyCondition(uVar4,0,this_00,0xc);
      goto LAB_047a777c;
    }
    uVar3 = 9;
    cVar1 = Plant::HasCondition(this_00,10);
    if (cVar1 == '\0') goto LAB_047a783c;
    uVar3 = 10;
  }
  else {
    cVar1 = Plant::HasCondition(this_00,9);
    if (cVar1 == '\0') {
      uVar3 = 10;
      cVar1 = Plant::HasCondition(this_00,10);
      if (cVar1 != '\0') {
        Plant::EndCondition(this_00,10);
        Plant::ApplyCondition(0x41a00000,0,this_00,0xb);
        goto LAB_047a777c;
      }
LAB_047a783c:
      cVar1 = Plant::HasCondition(this_00,0xb);
      if ((((cVar1 == '\0') && (cVar1 = Plant::HasCondition(this_00,0xd), cVar1 == '\0')) &&
          (cVar1 = Plant::HasCondition(this_00,0xc), cVar1 == '\0')) &&
         (cVar1 = ThunderSubSystem::CanbeThundered(this_00), cVar1 != '\0')) {
        uVar4 = PVZ_EOT();
        Plant::ApplyCondition(uVar4,0,this_00,uVar3);
      }
      goto LAB_047a777c;
    }
    uVar3 = 9;
  }
  Plant::EndCondition(this_00,uVar3);
  uVar4 = PVZ_EOT();
  Plant::ApplyCondition(uVar4,0,this_00,0xd);
LAB_047a777c:
  (**(code **)(*(long *)this + 0x168))(this,this_00);
  return 1;
}

