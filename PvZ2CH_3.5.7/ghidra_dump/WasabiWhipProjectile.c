// Class: WasabiWhipProjectile


/* WasabiWhipProjectile::~WasabiWhipProjectile() */

void __thiscall WasabiWhipProjectile::~WasabiWhipProjectile(WasabiWhipProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_066db050;
  *(undefined ***)(this + 0x10) = &PTR__WasabiWhipProjectile_066db240;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to WasabiWhipProjectile::~WasabiWhipProjectile() */

void __thiscall WasabiWhipProjectile::~WasabiWhipProjectile(WasabiWhipProjectile *this)

{
  ~WasabiWhipProjectile(this + -0x10);
  return;
}


/* WasabiWhipProjectile::~WasabiWhipProjectile() */

void __thiscall WasabiWhipProjectile::~WasabiWhipProjectile(WasabiWhipProjectile *this)

{
  ~WasabiWhipProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WasabiWhipProjectile::~WasabiWhipProjectile() */

void __thiscall WasabiWhipProjectile::~WasabiWhipProjectile(WasabiWhipProjectile *this)

{
  ~WasabiWhipProjectile(this + -0x10);
  return;
}


/* WasabiWhipProjectile::WasabiWhipProjectile() */

void __thiscall WasabiWhipProjectile::WasabiWhipProjectile(WasabiWhipProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_066db050;
  *(undefined ***)(this + 0x10) = &PTR__WasabiWhipProjectile_066db240;
  return;
}


/* WasabiWhipProjectile::StaticNew() */

WasabiWhipProjectile * WasabiWhipProjectile::StaticNew(void)

{
  WasabiWhipProjectile *this;
  
  this = ::operator_new(0x1a8);
  WasabiWhipProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WasabiWhipProjectile::StaticClassInit() */

void WasabiWhipProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"WasabiWhipProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0397f8bc,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WasabiWhipProjectile::StaticGetClass() */

long * WasabiWhipProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WasabiWhipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WasabiWhipProjectile::GetClass() const */

long * WasabiWhipProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"WasabiWhipProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WasabiWhipProjectile::zombieIsBlacklisted(Zombie const*) const */

bool __thiscall
WasabiWhipProjectile::zombieIsBlacklisted(WasabiWhipProjectile *this,Zombie *param_1)

{
  ZombieGargantuar *pZVar1;
  ZombieZombossMech *pZVar2;
  ZombieAgileBronze *pZVar3;
  ZombieStrongBronze *pZVar4;
  ZombieMagicBronze *pZVar5;
  ZombieSkyCityTwinsPlane *pZVar6;
  ZombieZombossBlade *pZVar7;
  ZombieZombossExplosive *pZVar8;
  ZombieZombossQigong *pZVar9;
  ZombieCavalry *pZVar10;
  ZombieModernSolarTruck *pZVar11;
  
  if (param_1 == (Zombie *)0x0) {
    return false;
  }
  pZVar1 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1);
  if ((((((pZVar1 == (ZombieGargantuar *)0x0) &&
         (pZVar2 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)param_1),
         pZVar2 == (ZombieZombossMech *)0x0)) &&
        (pZVar3 = Sexy::RtObject::Cast<ZombieAgileBronze>((RtObject *)param_1),
        pZVar3 == (ZombieAgileBronze *)0x0)) &&
       ((pZVar4 = Sexy::RtObject::Cast<ZombieStrongBronze>((RtObject *)param_1),
        pZVar4 == (ZombieStrongBronze *)0x0 &&
        (pZVar5 = Sexy::RtObject::Cast<ZombieMagicBronze>((RtObject *)param_1),
        pZVar5 == (ZombieMagicBronze *)0x0)))) &&
      ((pZVar6 = Sexy::RtObject::Cast<ZombieSkyCityTwinsPlane>((RtObject *)param_1),
       pZVar6 == (ZombieSkyCityTwinsPlane *)0x0 &&
       ((pZVar7 = Sexy::RtObject::Cast<ZombieZombossBlade>((RtObject *)param_1),
        pZVar7 == (ZombieZombossBlade *)0x0 &&
        (pZVar8 = Sexy::RtObject::Cast<ZombieZombossExplosive>((RtObject *)param_1),
        pZVar8 == (ZombieZombossExplosive *)0x0)))))) &&
     ((pZVar9 = Sexy::RtObject::Cast<ZombieZombossQigong>((RtObject *)param_1),
      pZVar9 == (ZombieZombossQigong *)0x0 &&
      (pZVar10 = Sexy::RtObject::Cast<ZombieCavalry>((RtObject *)param_1),
      pZVar10 == (ZombieCavalry *)0x0)))) {
    pZVar11 = Sexy::RtObject::Cast<ZombieModernSolarTruck>((RtObject *)param_1);
    return pZVar11 != (ZombieModernSolarTruck *)0x0;
  }
  return true;
}


/* WasabiWhipProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
WasabiWhipProjectile::fillDamageInfo
          (WasabiWhipProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  Zombie *pZVar2;
  
  Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
  if (((param_2 != (BoardEntity *)0x0) &&
      (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_2), pZVar2 != (Zombie *)0x0)) &&
     (cVar1 = zombieIsBlacklisted(this,pZVar2), cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 8) = 0x461c4000;
  }
  return;
}

