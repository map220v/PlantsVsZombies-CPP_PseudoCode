// Class: PepperpultPlantfoodProjectile


/* PepperpultPlantfoodProjectile::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float,
   float) */

void __thiscall
PepperpultPlantfoodProjectile::launchProjectileAt
          (PepperpultPlantfoodProjectile *this,Projectile *param_1,SexyVector3 *param_2,
          float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Sexy::Rand(param_3 * 300.0);
  fVar2 = (float)Sexy::Rand(param_4 * 0.6);
  Projectile::LaunchAt(param_1,param_2,fVar1 + 300.0,fVar2 + 0.6);
  return;
}


/* PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile() */

void __thiscall
PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile(PepperpultPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067d4460;
  *(undefined ***)(this + 0x10) = &PTR__PepperpultPlantfoodProjectile_067d4650;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile() */

void __thiscall
PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile(PepperpultPlantfoodProjectile *this)

{
  ~PepperpultPlantfoodProjectile(this + -0x10);
  return;
}


/* PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile() */

void __thiscall
PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile(PepperpultPlantfoodProjectile *this)

{
  ~PepperpultPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile() */

void __thiscall
PepperpultPlantfoodProjectile::~PepperpultPlantfoodProjectile(PepperpultPlantfoodProjectile *this)

{
  ~PepperpultPlantfoodProjectile(this + -0x10);
  return;
}


/* PepperpultPlantfoodProjectile::PepperpultPlantfoodProjectile() */

void __thiscall
PepperpultPlantfoodProjectile::PepperpultPlantfoodProjectile(PepperpultPlantfoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d4460;
  *(undefined ***)(this + 0x10) = &PTR__PepperpultPlantfoodProjectile_067d4650;
  return;
}


/* PepperpultPlantfoodProjectile::StaticNew() */

PepperpultPlantfoodProjectile * PepperpultPlantfoodProjectile::StaticNew(void)

{
  PepperpultPlantfoodProjectile *this;
  
  this = ::operator_new(0x1a8);
  PepperpultPlantfoodProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PepperpultPlantfoodProjectile::StaticClassInit() */

void PepperpultPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PepperpultPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_040b1a48,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PepperpultPlantfoodProjectile::StaticGetClass() */

long * PepperpultPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PepperpultPlantfoodProjectile::GetClass() const */

long * PepperpultPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PepperpultPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PepperpultPlantfoodProjectile::launchSpecialProjectile(Sexy::SexyVector3) */

void PepperpultPlantfoodProjectile::launchSpecialProjectile
               (undefined4 param_1,float param_2,undefined4 param_3,
               PepperpultPlantfoodProjectile *param_4)

{
  int iVar1;
  undefined8 uVar2;
  Projectile *pPVar3;
  char *__s;
  Board *pBVar5;
  undefined4 uVar4;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  string asStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 < 0.0) {
    local_3c = 0.0;
  }
  else {
    local_3c = param_2;
    if (600.0 < param_2) {
      local_3c = 600.0;
    }
  }
  local_40 = param_1;
  local_38 = param_3;
  iVar1 = FUN_040b165c(*(undefined4 *)(param_4 + 0x70));
  if (iVar1 < 3) {
    __s = "PepperpultPlantfoodSecondary";
  }
  else {
    __s = "PepperpultAdvancedPlantfoodSecondary";
  }
  std::string::string(asStack_30,__s);
  nop();
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_28,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  uVar4 = *(undefined4 *)(param_4 + 0x1c);
  pBVar5._0_4_ = (Board *)FUN_040b1694(*(undefined4 *)(param_4 + 0x18),uVar4,
                                       *(undefined4 *)(param_4 + 0x20));
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
  pPVar3 = (Projectile *)Board::AddProjectile(pBVar5._0_4_,uVar4,0x42700000,uVar2,aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  uVar4 = FUN_040b1634(*(undefined4 *)(param_4 + 0x24));
  FUN_040b1638(pPVar3 + 0x24,uVar4);
  launchProjectileAt(param_4,pPVar3,(SexyVector3 *)&local_40,1.0,0.15);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PepperpultPlantfoodProjectile::handleImpact(BoardEntity*) */

void __thiscall
PepperpultPlantfoodProjectile::handleImpact
          (PepperpultPlantfoodProjectile *this,BoardEntity *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  fVar4 = *(float *)(this + 0x1c);
  local_8 = ___stack_chk_guard;
  fVar1 = (float)FUN_040b1694(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
  fVar2 = (float)Sexy::Rand(55.0);
  fVar3 = (float)Sexy::Rand(55.0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(fVar1 - fVar2) - 20.0,(fVar4 - fVar3) - 20.0,0.0);
  launchSpecialProjectile(local_18,local_14,local_10,this);
  fVar2 = (float)Sexy::Rand(55.0);
  fVar3 = (float)Sexy::Rand(55.0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar2 + fVar1 + 20.0,(fVar4 - fVar3) - 20.0,0.0);
  launchSpecialProjectile(local_18,local_14,local_10,this);
  fVar2 = (float)Sexy::Rand(55.0);
  fVar3 = (float)Sexy::Rand(55.0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,(fVar1 - fVar2) - 20.0,fVar3 + fVar4 + 20.0,0.0);
  launchSpecialProjectile(local_18,local_14,local_10,this);
  fVar2 = (float)Sexy::Rand(55.0);
  fVar3 = (float)Sexy::Rand(55.0);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,fVar2 + fVar1 + 20.0,fVar3 + fVar4 + 20.0,0.0);
  launchSpecialProjectile(local_18,local_14,local_10,this);
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

