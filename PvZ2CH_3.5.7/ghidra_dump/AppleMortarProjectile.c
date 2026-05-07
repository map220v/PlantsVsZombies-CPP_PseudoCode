// Class: AppleMortarProjectile


/* AppleMortarProjectile::shouldStun(BoardEntity*) */

bool __thiscall AppleMortarProjectile::shouldStun(AppleMortarProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  if (((param_1 != (BoardEntity *)0x0) && (0.0 < *(float *)(extraout_x0 + 0x1e0))) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1);
    return !bVar1;
  }
  return false;
}


/* AppleMortarProjectile::~AppleMortarProjectile() */

void __thiscall AppleMortarProjectile::~AppleMortarProjectile(AppleMortarProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067fc880;
  *(undefined ***)(this + 0x10) = &PTR__AppleMortarProjectile_067fca70;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AppleMortarProjectile::~AppleMortarProjectile() */

void __thiscall AppleMortarProjectile::~AppleMortarProjectile(AppleMortarProjectile *this)

{
  ~AppleMortarProjectile(this + -0x10);
  return;
}


/* AppleMortarProjectile::~AppleMortarProjectile() */

void __thiscall AppleMortarProjectile::~AppleMortarProjectile(AppleMortarProjectile *this)

{
  ~AppleMortarProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AppleMortarProjectile::~AppleMortarProjectile() */

void __thiscall AppleMortarProjectile::~AppleMortarProjectile(AppleMortarProjectile *this)

{
  ~AppleMortarProjectile(this + -0x10);
  return;
}


/* AppleMortarProjectile::AppleMortarProjectile() */

void __thiscall AppleMortarProjectile::AppleMortarProjectile(AppleMortarProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (AppleMortarProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_067fc880;
  *(undefined ***)(this + 0x10) = &PTR__AppleMortarProjectile_067fca70;
  return;
}


/* AppleMortarProjectile::StaticNew() */

AppleMortarProjectile * AppleMortarProjectile::StaticNew(void)

{
  AppleMortarProjectile *this;
  
  this = ::operator_new(0x1a8);
  AppleMortarProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AppleMortarProjectile::StaticClassInit() */

void AppleMortarProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"AppleMortarProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04196644,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AppleMortarProjectile::StaticGetClass() */

long * AppleMortarProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AppleMortarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AppleMortarProjectile::GetClass() const */

long * AppleMortarProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"AppleMortarProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AppleMortarProjectile::stunZombie(BoardEntity*) */

void __thiscall AppleMortarProjectile::stunZombie(AppleMortarProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  long lVar1;
  RtObject *pRVar2;
  Plant *pPVar3;
  float fVar4;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  lVar1 = Projectile::GetInstigator((Projectile *)this);
  if (lVar1 != 0) {
    pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
    if (pPVar3 != (Plant *)0x0) {
      pRVar2 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      pPVar3 = Sexy::RtObject::Cast<Plant>(pRVar2);
      fVar4 = (float)Plant::GetZombieConditionExtendRate(pPVar3,2);
      goto LAB_0419740c;
    }
  }
  fVar4 = 1.0;
LAB_0419740c:
  nop();
  Zombie::ApplyCondition((Zombie *)(fVar4 * *(float *)(extraout_x0 + 0x1e0)),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AppleMortarProjectile::hitZombie(BoardEntity*) */

void __thiscall AppleMortarProjectile::hitZombie(AppleMortarProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  string *psVar2;
  PlantType *this_01;
  RtObject *this_02;
  AppleMortarProps *pAVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = shouldStun(this,param_1);
    if (cVar1 != '\0') {
      stunZombie(this,param_1);
    }
    if ((this[0x1a5] != (AppleMortarProjectile)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_10,"applemortar");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      std::string::~string(asStack_10);
      nop();
      this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      this_02 = (RtObject *)PlantType::GetProps(this_01);
      pAVar3 = Sexy::RtObject::Cast<AppleMortarProps_const>(this_02);
      if (pAVar3 != (AppleMortarProps *)0x0) {
        uVar4 = Zombie::GetConditionTracker(this_00);
        fVar5 = (float)FUN_04196130(*(undefined4 *)(this + 0x180));
        ZombieConditionTracker::SetAdditionalValue
                  ((ZombieConditionTracker *)(fVar5 * *(float *)(pAVar3 + 700)),uVar4,0x2f);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(pAVar3 + 0x2b8),0,this_00,0x2f,1);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AppleMortarProjectile::onSplashDamageHitEntity(BoardEntity*) */

void __thiscall
AppleMortarProjectile::onSplashDamageHitEntity(AppleMortarProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  string *psVar2;
  PlantType *this_01;
  RtObject *this_02;
  AppleMortarProps *pAVar3;
  undefined8 uVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = shouldStun(this,param_1);
    if (cVar1 != '\0') {
      stunZombie(this,param_1);
    }
    if ((this[0x1a5] != (AppleMortarProjectile)0x0) &&
       (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
      psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string(asStack_10,"applemortar");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
      std::string::~string(asStack_10);
      nop();
      this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      this_02 = (RtObject *)PlantType::GetProps(this_01);
      pAVar3 = Sexy::RtObject::Cast<AppleMortarProps_const>(this_02);
      if (pAVar3 != (AppleMortarProps *)0x0) {
        uVar4 = Zombie::GetConditionTracker(this_00);
        fVar5 = (float)FUN_04196130(*(undefined4 *)(this + 0x180));
        ZombieConditionTracker::SetAdditionalValue
                  ((ZombieConditionTracker *)(fVar5 * *(float *)(pAVar3 + 700)),uVar4,0x2f);
                    /* WARNING: Load size is inaccurate */
        Zombie::ApplyCondition(*(Zombie **)(pAVar3 + 0x2b8),0,this_00,0x2f,1);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AppleMortarProjectile::handleImpact(BoardEntity*) */

void __thiscall
AppleMortarProjectile::handleImpact(AppleMortarProjectile *this,BoardEntity *param_1)

{
  hitZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

