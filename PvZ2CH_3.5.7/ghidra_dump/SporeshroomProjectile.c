// Class: SporeshroomProjectile


/* SporeshroomProjectile::~SporeshroomProjectile() */

void __thiscall SporeshroomProjectile::~SporeshroomProjectile(SporeshroomProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f49b0;
  *(undefined ***)(this + 0x10) = &PTR__SporeshroomProjectile_067f4ba0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to SporeshroomProjectile::~SporeshroomProjectile() */

void __thiscall SporeshroomProjectile::~SporeshroomProjectile(SporeshroomProjectile *this)

{
  ~SporeshroomProjectile(this + -0x10);
  return;
}


/* SporeshroomProjectile::~SporeshroomProjectile() */

void __thiscall SporeshroomProjectile::~SporeshroomProjectile(SporeshroomProjectile *this)

{
  ~SporeshroomProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SporeshroomProjectile::~SporeshroomProjectile() */

void __thiscall SporeshroomProjectile::~SporeshroomProjectile(SporeshroomProjectile *this)

{
  ~SporeshroomProjectile(this + -0x10);
  return;
}


/* SporeshroomProjectile::SporeshroomProjectile() */

void __thiscall SporeshroomProjectile::SporeshroomProjectile(SporeshroomProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f49b0;
  *(undefined ***)(this + 0x10) = &PTR__SporeshroomProjectile_067f4ba0;
  return;
}


/* SporeshroomProjectile::StaticNew() */

SporeshroomProjectile * SporeshroomProjectile::StaticNew(void)

{
  SporeshroomProjectile *this;
  
  this = ::operator_new(0x1a8);
  SporeshroomProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomProjectile::StaticClassInit() */

void SporeshroomProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SporeshroomProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0416ec14,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SporeshroomProjectile::StaticGetClass() */

long * SporeshroomProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SporeshroomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SporeshroomProjectile::GetClass() const */

long * SporeshroomProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"SporeshroomProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SporeshroomProjectile::isZombieValidToKill(BoardEntity*) */

void __thiscall
SporeshroomProjectile::isZombieValidToKill(SporeshroomProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  Zombie *pZVar3;
  string *psVar4;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (BoardEntity *)0x0) {
    pZVar3 = (Zombie *)0x0;
  }
  else {
    pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
  }
  psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"sporeshroom");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  PlantImitater::GetImitatedPlant();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (((pZVar3 == (Zombie *)0x0) ||
      (cVar1 = (**(code **)(*(long *)pZVar3 + 0x330))(pZVar3), cVar1 != '\0')) ||
     (cVar1 = (**(code **)(*(long *)pZVar3 + 0x328))(pZVar3), cVar1 != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = ZombieRestrictionSet::IsIncluded((ZombieRestrictionSet *)(extraout_x0 + 0x2e8),pZVar3);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* SporeshroomProjectile::OnCollideEntity(BoardEntity*) */

undefined4 __thiscall
SporeshroomProjectile::OnCollideEntity(SporeshroomProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined4 uVar2;
  Zombie *extraout_x0;
  SporeshroomSubsystem *pSVar3;
  
  cVar1 = isZombieValidToKill(this,param_1);
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  if (cVar1 != '\0') {
    nop();
    cVar1 = PrimalRafflesiaProjectile::hasZombieBeenKilled
                      ((PrimalRafflesiaProjectile *)this,extraout_x0);
    if (cVar1 != '\0') {
      pSVar3 = Board::GetGameSubSystem<SporeshroomSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      SporeshroomSubsystem::ReplaceZombieWithShroom((Zombie *)pSVar3);
      PrimalRafflesiaProjectile::removeMarkedForDeathFromTargetedZombie
                ((PrimalRafflesiaProjectile *)this);
      return uVar2;
    }
  }
  PrimalRafflesiaProjectile::removeMarkedForDeathFromTargetedZombie
            ((PrimalRafflesiaProjectile *)this);
  return uVar2;
}

