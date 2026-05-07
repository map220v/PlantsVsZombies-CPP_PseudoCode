// Class: GumnutPlantfoodProjectile


/* GumnutPlantfoodProjectile::OnCollideGround() */

undefined8 __thiscall GumnutPlantfoodProjectile::OnCollideGround(GumnutPlantfoodProjectile *this)

{
  (**(code **)(*(long *)this + 0x48))();
  return 0;
}


/* GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile() */

void __thiscall
GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile(GumnutPlantfoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06821ee0;
  *(undefined ***)(this + 0x10) = &PTR__GumnutPlantfoodProjectile_068220d0;
  std::string::~string((string *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile() */

void __thiscall
GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile(GumnutPlantfoodProjectile *this)

{
  ~GumnutPlantfoodProjectile(this + -0x10);
  return;
}


/* GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile() */

void __thiscall
GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile(GumnutPlantfoodProjectile *this)

{
  ~GumnutPlantfoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile() */

void __thiscall
GumnutPlantfoodProjectile::~GumnutPlantfoodProjectile(GumnutPlantfoodProjectile *this)

{
  ~GumnutPlantfoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutPlantfoodProjectile::GumnutPlantfoodProjectile() */

void __thiscall
GumnutPlantfoodProjectile::GumnutPlantfoodProjectile(GumnutPlantfoodProjectile *this)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = ___stack_chk_guard;
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06821ee0;
  *(undefined ***)(this + 0x10) = &PTR__GumnutPlantfoodProjectile_068220d0;
  std::string::string((string *)(this + 0x1a8),"gum");
  nop();
  bVar2 = lVar1 == ___stack_chk_guard;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0x47c35000;
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GumnutPlantfoodProjectile::StaticNew() */

GumnutPlantfoodProjectile * GumnutPlantfoodProjectile::StaticNew(void)

{
  GumnutPlantfoodProjectile *this;
  
  this = ::operator_new(0x1c0);
  GumnutPlantfoodProjectile(this);
  return this;
}


/* GumnutPlantfoodProjectile::InitializeGumValues(std::string, float, float, float) */

void GumnutPlantfoodProjectile::InitializeGumValues
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  thunk_FUN_05475e00(param_4 + 0x1a8);
  *(undefined4 *)(param_4 + 0x1b0) = param_1;
  *(undefined4 *)(param_4 + 0x1b4) = param_2;
  *(undefined4 *)(param_4 + 0x1b8) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutPlantfoodProjectile::StaticClassInit() */

void GumnutPlantfoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GumnutPlantfoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04274e28,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GumnutPlantfoodProjectile::StaticGetClass() */

long * GumnutPlantfoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GumnutPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GumnutPlantfoodProjectile::GetClass() const */

long * GumnutPlantfoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"GumnutPlantfoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GumnutPlantfoodProjectile::calcGumHitpoints(Sexy::RtWeakPtr<Zombie>) */

undefined4 __thiscall
GumnutPlantfoodProjectile::calcGumHitpoints
          (GumnutPlantfoodProjectile *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  Zombie *this_00;
  float fVar1;
  undefined4 uVar2;
  
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  fVar1 = (float)Zombie::GetTotalHitpoints(this_00);
  uVar2 = NEON_fminnm(*(float *)(this + 0x1b0) + fVar1 * *(float *)(this + 0x1b4) * 0.01,
                      *(undefined4 *)(this + 0x1b8));
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutPlantfoodProjectile::gumZombie(Sexy::RtWeakPtr<Zombie>) */

void __thiscall
GumnutPlantfoodProjectile::gumZombie
          (GumnutPlantfoodProjectile *this,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  Zombie *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = Zombie::IsInWater(this_00);
  if (cVar1 == '\0') {
    uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    FUN_05475d88(asStack_10,this + 0x1a8);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)param_2);
    uVar4 = calcGumHitpoints(this,aRStack_18);
    uVar3 = Projectile::GetInstigator((Projectile *)this);
    Zombie::Gum(uVar4,uVar2,asStack_10,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutPlantfoodProjectile::isInBlackList(Zombie*) */

void __thiscall
GumnutPlantfoodProjectile::isInBlackList(GumnutPlantfoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  string *psVar3;
  string *psVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  uVar7 = 0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  Sexy::RtName::RtName(aRStack_18,L"GumnutDefault");
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,5,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  while( true ) {
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    uVar6 = FUN_042746e8(*(undefined8 *)(lVar5 + 0x2e8),*(undefined8 *)(lVar5 + 0x2f0));
    if (uVar6 <= uVar7) break;
    psVar3 = (string *)Zombie::GetTypeName(param_1);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    psVar4 = (string *)FUN_042746fc(*(undefined8 *)(lVar5 + 0x2e8),uVar7);
    cVar1 = std::operator==(psVar3,psVar4);
    if (cVar1 != '\0') goto LAB_04276588;
    uVar7 = uVar7 + 1;
  }
  cVar1 = '\0';
LAB_04276588:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* GumnutPlantfoodProjectile::canAffectZombie(Zombie*) */

char __thiscall
GumnutPlantfoodProjectile::canAffectZombie(GumnutPlantfoodProjectile *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1);
  if (((((((cVar1 != '\0') || (cVar1 = Zombie::HasCondition(param_1,1), cVar1 != '\0')) ||
         (cVar1 = Zombie::HasCondition(param_1,3), cVar1 != '\0')) ||
        ((cVar1 = Zombie::HasCondition(param_1,4), cVar1 != '\0' ||
         (cVar1 = Zombie::HasCondition(param_1,0x55), cVar1 != '\0')))) ||
       (((cVar1 = Zombie::HasCondition(param_1,0x3f), cVar1 != '\0' ||
         ((cVar1 = Zombie::HasCondition(param_1,0x11), cVar1 != '\0' ||
          (cVar1 = (**(code **)(*(long *)param_1 + 0x2a8))(param_1), cVar1 != '\0')))) ||
        (cVar1 = (**(code **)(*(long *)param_1 + 0x338))(param_1), cVar1 != '\0')))) ||
      ((((cVar1 = Zombie::HasFogImmune(param_1), cVar1 != '\0' ||
         (cVar1 = Zombie::IsBerserk(param_1), cVar1 != '\0')) ||
        (cVar1 = Zombie::IsFlying(param_1), cVar1 != '\0')) ||
       (((bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar2 ||
         (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1), bVar2)) ||
        ((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 != '\0' ||
         ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 != '\0' ||
          (cVar1 = FUN_02fd4354(*(undefined4 *)(param_1 + 0xcc)), cVar1 != '\0')))))))))) ||
     ((cVar1 = RealObject::IsOnTeam(param_1,1), cVar1 != '\0' ||
      ((cVar1 = (**(code **)(*(long *)param_1 + 0x410))(param_1), cVar1 == '\0' ||
       (cVar3 = isInBlackList(this,param_1), cVar3 != '\0')))))) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutPlantfoodProjectile::handleImpact(BoardEntity*) */

void __thiscall
GumnutPlantfoodProjectile::handleImpact(GumnutPlantfoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      nop();
      cVar2 = canAffectZombie(this,extraout_x0);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        gumZombie(this,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        (**(code **)(*(long *)this + 0x48))(this);
        goto LAB_042767cc;
      }
    }
  }
  cVar2 = '\0';
LAB_042767cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

