// Class: StickybombRiceProjectile


/* StickybombRiceProjectile::Initialize(float, float, float, float) */

void __thiscall
StickybombRiceProjectile::Initialize
          (StickybombRiceProjectile *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x1a8) = param_1;
  *(float *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1b0) = param_3;
  *(float *)(this + 0x1b4) = param_4;
  return;
}


/* StickybombRiceProjectile::~StickybombRiceProjectile() */

void __thiscall StickybombRiceProjectile::~StickybombRiceProjectile(StickybombRiceProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_068225e0;
  *(undefined ***)(this + 0x10) = &PTR__StickybombRiceProjectile_068227d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to StickybombRiceProjectile::~StickybombRiceProjectile() */

void __thiscall StickybombRiceProjectile::~StickybombRiceProjectile(StickybombRiceProjectile *this)

{
  ~StickybombRiceProjectile(this + -0x10);
  return;
}


/* StickybombRiceProjectile::~StickybombRiceProjectile() */

void __thiscall StickybombRiceProjectile::~StickybombRiceProjectile(StickybombRiceProjectile *this)

{
  ~StickybombRiceProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StickybombRiceProjectile::~StickybombRiceProjectile() */

void __thiscall StickybombRiceProjectile::~StickybombRiceProjectile(StickybombRiceProjectile *this)

{
  ~StickybombRiceProjectile(this + -0x10);
  return;
}


/* StickybombRiceProjectile::StickybombRiceProjectile() */

void __thiscall StickybombRiceProjectile::StickybombRiceProjectile(StickybombRiceProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined4 *)(this + 0x1a8) = 0x40a00000;
  this[0x1a5] = (StickybombRiceProjectile)0x0;
  *(undefined ***)(this + 0x10) = &PTR__StickybombRiceProjectile_068227d0;
  *(undefined ***)this = &PTR_GetClass_068225e0;
  *(undefined4 *)(this + 0x1ac) = 0x3f800000;
  *(undefined4 *)(this + 0x1b0) = 0x42c80000;
  *(undefined4 *)(this + 0x1b4) = 0x3dcccccd;
  return;
}


/* StickybombRiceProjectile::StaticNew() */

StickybombRiceProjectile * StickybombRiceProjectile::StaticNew(void)

{
  StickybombRiceProjectile *this;
  
  this = ::operator_new(0x1b8);
  StickybombRiceProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombRiceProjectile::StaticClassInit() */

void StickybombRiceProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"StickybombRiceProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04278418,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StickybombRiceProjectile::StaticGetClass() */

long * StickybombRiceProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StickybombRiceProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StickybombRiceProjectile::GetClass() const */

long * StickybombRiceProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"StickybombRiceProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombRiceProjectile::hitZombie(BoardEntity*) */

void __thiscall
StickybombRiceProjectile::hitZombie(StickybombRiceProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  CthulhuSubSystem *this_01;
  undefined8 uVar3;
  StickybombBomb *this_02;
  BasePowerup *pBVar4;
  RtObject *this_03;
  StickybombBomb *this_04;
  code *pcVar5;
  float fVar6;
  Zombie *pZVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    std::string::string(asStack_18,"stickybomb");
    this_01 = (CthulhuSubSystem *)Zombie::GetAttachedBoardEntity(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if ((this_01 == (CthulhuSubSystem *)0x0) ||
       (cVar2 = CthulhuSubSystem::Update(this_01), cVar2 == '\0')) {
      uVar3 = Sexy::RtClass::StaticGetClassNamed("StickybombBomb");
      GameObject::Create(uVar3,0x28);
      nop();
      StickybombBomb::SetAvatarEnable(this_02,(bool)this[0x1a5]);
      fVar6 = (float)FUN_04277e64(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      StickybombBomb::IncrementBombCount
                (this_02,*(float *)(this + 0x1b0),*(float *)(this + 0x1a8),*(float *)(this + 0x1ac),
                 *(float *)(this + 0x1b4),fVar6);
      PVPSeedBankModule::GetPVPSkillEnergyUI();
      StickybombBomb::SetInstigator(this_02,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
      CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_02,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::string(asStack_18,"stickybomb");
      pBVar4 = (BasePowerup *)Zombie::GetOrCreateAttachedBoardEntity(this_00,asStack_18);
      std::string::~string(asStack_18);
      nop();
      ToolPacketData::GetProps();
      BasePowerup::SetPowerupType(pBVar4,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      pcVar5 = *(code **)(*(long *)pBVar4 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,-10.0,0.0,20.0);
      (*pcVar5)(pBVar4,this_00,asStack_18,1);
      cVar2 = Zombie::IsBoss(this_00);
      if ((((cVar2 != '\0') ||
           (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar1)) ||
          (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')) ||
         (((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0' ||
           (cVar2 = Zombie::IsBerserk(this_00), cVar2 != '\0')) ||
          (cVar2 = Zombie::HasFogImmune(this_00), cVar2 != '\0')))) {
        StickybombBomb::ExplodeImmediately(this_02);
      }
      else {
        pZVar7._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar7._0_4_,0,this_00,0x57,1);
      }
    }
    else {
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_01 + 0x10));
      this_04 = Sexy::RtObject::Cast<StickybombBomb>(this_03);
      StickybombBomb::SetAvatarEnable(this_04,(bool)this[0x1a5]);
      fVar6 = (float)FUN_04277e64(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      StickybombBomb::IncrementBombCount
                (this_04,*(float *)(this + 0x1b0),*(float *)(this + 0x1a8),*(float *)(this + 0x1ac),
                 *(float *)(this + 0x1b4),fVar6);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StickybombRiceProjectile::handleImpact(BoardEntity*) */

void __thiscall
StickybombRiceProjectile::handleImpact(StickybombRiceProjectile *this,BoardEntity *param_1)

{
  hitZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StickybombRiceProjectile::onSplashDamageHitEntity(BoardEntity*) */

void __thiscall
StickybombRiceProjectile::onSplashDamageHitEntity
          (StickybombRiceProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  CthulhuSubSystem *this_01;
  undefined8 uVar3;
  StickybombBomb *this_02;
  BasePowerup *pBVar4;
  RtObject *this_03;
  StickybombBomb *this_04;
  code *pcVar5;
  float fVar6;
  Zombie *pZVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    std::string::string(asStack_18,"stickybomb");
    this_01 = (CthulhuSubSystem *)Zombie::GetAttachedBoardEntity(this_00,asStack_18);
    std::string::~string(asStack_18);
    nop();
    if ((this_01 == (CthulhuSubSystem *)0x0) ||
       (cVar2 = CthulhuSubSystem::Update(this_01), cVar2 == '\0')) {
      uVar3 = Sexy::RtClass::StaticGetClassNamed("StickybombBomb");
      GameObject::Create(uVar3,0x28);
      nop();
      StickybombBomb::SetAvatarEnable(this_02,(bool)this[0x1a5]);
      fVar6 = (float)FUN_04277e64(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      StickybombBomb::IncrementBombCount
                (this_02,*(float *)(this + 0x1b0),*(float *)(this + 0x1a8),*(float *)(this + 0x1ac),
                 *(float *)(this + 0x1b4),fVar6);
      PVPSeedBankModule::GetPVPSkillEnergyUI();
      StickybombBomb::SetInstigator(this_02,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_18,(RtWeakPtrBase *)aRStack_20);
      CthulhuEyeballEffect::SetCthulhuEasyButton((CthulhuEyeballEffect *)this_02,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
      std::string::string(asStack_18,"stickybomb");
      pBVar4 = (BasePowerup *)Zombie::GetOrCreateAttachedBoardEntity(this_00,asStack_18);
      std::string::~string(asStack_18);
      nop();
      ToolPacketData::GetProps();
      BasePowerup::SetPowerupType(pBVar4,asStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
      pcVar5 = *(code **)(*(long *)pBVar4 + 0x18);
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,-10.0,0.0,20.0);
      (*pcVar5)(pBVar4,this_00,asStack_18,1);
      cVar2 = Zombie::IsBoss(this_00);
      if ((((cVar2 != '\0') ||
           (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00), bVar1)) ||
          (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')) ||
         (((cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0' ||
           (cVar2 = Zombie::IsBerserk(this_00), cVar2 != '\0')) ||
          (cVar2 = Zombie::HasFogImmune(this_00), cVar2 != '\0')))) {
        StickybombBomb::ExplodeImmediately(this_02);
      }
      else {
        pZVar7._0_4_ = (Zombie *)PVZ_EOT();
        Zombie::ApplyCondition(pZVar7._0_4_,0,this_00,0x57,1);
      }
    }
    else {
      this_03 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_01 + 0x10));
      this_04 = Sexy::RtObject::Cast<StickybombBomb>(this_03);
      StickybombBomb::SetAvatarEnable(this_04,(bool)this[0x1a5]);
      fVar6 = (float)FUN_04277e64(*(undefined4 *)(this + 0x170),*(undefined4 *)(this + 0x17c),
                                  *(undefined4 *)(this + 0x180),*(undefined4 *)(this + 0x184));
      StickybombBomb::IncrementBombCount
                (this_04,*(float *)(this + 0x1b0),*(float *)(this + 0x1a8),*(float *)(this + 0x1ac),
                 *(float *)(this + 0x1b4),fVar6);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

