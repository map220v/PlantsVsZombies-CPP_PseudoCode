// Class: PrimalPeashooterProjectile


/* PrimalPeashooterProjectile::onProjectileInitialized() */

void __thiscall
PrimalPeashooterProjectile::onProjectileInitialized(PrimalPeashooterProjectile *this)

{
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectile::onProjectileConverted() */

void __thiscall PrimalPeashooterProjectile::onProjectileConverted(PrimalPeashooterProjectile *this)

{
  long lVar1;
  undefined4 auStack_18 [4];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetProps((Projectile *)this);
  auStack_18[0] = ProjectileHelpers::RandomizeVectorFromRange((vector *)(lVar1 + 0x78));
  Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)auStack_18);
  auStack_18[0] = ProjectileHelpers::RandomizeVectorFromRange((vector *)(lVar1 + 0x90));
  Projectile::SetAcceleration((Projectile *)this,(SexyVector3 *)auStack_18);
  auStack_18[0] = ProjectileHelpers::RandomizeVectorFromRange((vector *)(lVar1 + 0xa8));
  Projectile::SetVelocityScale((Projectile *)this,(SexyVector3 *)auStack_18);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 200));
  FUN_0434add4(this + 200);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 200));
  FUN_0434adb0(this + 0xc4);
  ValueRange::GetRandomValue((ValueRange *)(lVar1 + 0xd0));
  FUN_0434adb8(this + 0xcc);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterProjectile::~PrimalPeashooterProjectile() */

void __thiscall
PrimalPeashooterProjectile::~PrimalPeashooterProjectile(PrimalPeashooterProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067f85e0;
  *(undefined ***)(this + 0x10) = &PTR__PrimalPeashooterProjectile_067f87d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PrimalPeashooterProjectile::~PrimalPeashooterProjectile() */

void __thiscall
PrimalPeashooterProjectile::~PrimalPeashooterProjectile(PrimalPeashooterProjectile *this)

{
  ~PrimalPeashooterProjectile(this + -0x10);
  return;
}


/* PrimalPeashooterProjectile::~PrimalPeashooterProjectile() */

void __thiscall
PrimalPeashooterProjectile::~PrimalPeashooterProjectile(PrimalPeashooterProjectile *this)

{
  ~PrimalPeashooterProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PrimalPeashooterProjectile::~PrimalPeashooterProjectile() */

void __thiscall
PrimalPeashooterProjectile::~PrimalPeashooterProjectile(PrimalPeashooterProjectile *this)

{
  ~PrimalPeashooterProjectile(this + -0x10);
  return;
}


/* PrimalPeashooterProjectile::PrimalPeashooterProjectile() */

void __thiscall
PrimalPeashooterProjectile::PrimalPeashooterProjectile(PrimalPeashooterProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067f85e0;
  *(undefined ***)(this + 0x10) = &PTR__PrimalPeashooterProjectile_067f87d0;
  return;
}


/* PrimalPeashooterProjectile::StaticNew() */

PrimalPeashooterProjectile * PrimalPeashooterProjectile::StaticNew(void)

{
  PrimalPeashooterProjectile *this;
  
  this = ::operator_new(0x1b0);
  PrimalPeashooterProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectile::StaticClassInit() */

void PrimalPeashooterProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalPeashooterProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04181f60,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalPeashooterProjectile::StaticGetClass() */

long * PrimalPeashooterProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterProjectile::GetClass() const */

long * PrimalPeashooterProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PrimalPeashooterProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalPeashooterProjectile::stunZombie(BoardEntity*) */

void __thiscall
PrimalPeashooterProjectile::stunZombie(PrimalPeashooterProjectile *this,BoardEntity *param_1)

{
  long extraout_x0;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  nop();
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 0x1e0),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectile::shouldKnockback(BoardEntity*) */

void __thiscall
PrimalPeashooterProjectile::shouldKnockback(PrimalPeashooterProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long extraout_x0;
  Zombie *this_03;
  RtObject *this_04;
  PrimalpeashooterBoostKnockbackChance *pPVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  std::string::string(asStack_10,"primalpeashooter_new_avatar_2");
  iVar4 = NameMapperBase::GetIdForName(this_02,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar4);
  if (cVar1 != '\0') {
    NewAvatar::GetAvatarInfoByAvatarId(iVar4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if (!bVar2) {
      fVar8 = 0.0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_04182d48;
    }
    NewAvatar::GetAvatarInfoByAvatarId(iVar4);
    this_04 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    pPVar5 = Sexy::RtObject::Cast<PrimalpeashooterBoostKnockbackChance>(this_04);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    if (pPVar5 != (PrimalpeashooterBoostKnockbackChance *)0x0) {
      fVar8 = *(float *)(pPVar5 + 100);
      goto LAB_04182d48;
    }
  }
  fVar8 = 0.0;
LAB_04182d48:
  Projectile::GetProps((Projectile *)this);
  nop();
  fVar6 = (float)Sexy::Rand(1.0);
  fVar7 = *(float *)(extraout_x0 + 0x1e4);
  if ((((((param_1 == (BoardEntity *)0x0) ||
         (this_03 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), fVar8 + fVar7 < fVar6)) ||
        (this_03 == (Zombie *)0x0)) ||
       ((*(float *)(extraout_x0 + 0x1e8) <= 0.0 ||
        (cVar1 = Zombie::CanBeLaunchedByPlants(this_03), cVar1 == '\0')))) ||
      ((cVar1 = Zombie::IsBerserk(this_03), cVar1 != '\0' ||
       ((cVar1 = Zombie::HasFogImmune(this_03), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*(long *)this_03 + 0x4d8))(this_03), cVar1 != '\0')))))) ||
     (cVar1 = (**(code **)(*(long *)this_03 + 0x508))(this_03), cVar1 != '\0')) {
    bVar3 = 0;
  }
  else {
    bVar3 = Zombie::HasCondition(this_03,0x18);
    bVar3 = bVar3 ^ 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectile::knockbackZombie(BoardEntity*) */

void PrimalPeashooterProjectile::knockbackZombie(BoardEntity *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  long extraout_x0;
  float *pfVar1;
  ZombieTosserSubSystem *pZVar2;
  Board *this_00;
  float fVar3;
  ZombieTosserSubSystem *pZVar5;
  undefined4 in_s1;
  undefined4 uVar4;
  float in_s2;
  undefined8 local_60;
  float local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  Projectile::GetProps((Projectile *)param_1);
  nop();
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  if (this_00[0x119] == (Board)0x0) {
    fVar3 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                             ((Zombie *)this,*(float *)(extraout_x0 + 0x1e8));
    local_60 = CONCAT44(in_s1,fVar3);
    local_58 = in_s2;
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    if (*pfVar1 < fVar3) {
      pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
      pZVar5._0_4_ = *(ZombieTosserSubSystem **)(extraout_x0 + 0x1f0);
      uVar4 = *(undefined4 *)(extraout_x0 + 0x1ec);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie(pZVar5._0_4_,uVar4,pZVar2,this,&local_60,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  else {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    if (*pfVar1 < 800.0) {
      local_58 = pfVar1[2];
      local_60._0_4_ = (float)*(undefined8 *)pfVar1;
      local_60 = CONCAT44((int)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                          *(float *)(extraout_x0 + 0x1e8) + (float)local_60);
      pZVar2 = Board::GetGameSubSystem<ZombieTosserSubSystem>(this_00);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      ZombieTosserSubSystem::LaunchZombie
                ((ZombieTosserSubSystem *)0x42480000,0x3f800000,pZVar2,this,&local_60,aRStack_50,1);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalPeashooterProjectile::doSplit(bool) */

void __thiscall PrimalPeashooterProjectile::doSplit(PrimalPeashooterProjectile *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  RtObject *this_00;
  PrimalPeashooterSplitTargetProjectile *this_01;
  ulong uVar6;
  undefined8 uVar7;
  Board *pBVar11;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  fVar10 = 0.0;
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  if (*(float *)(puVar4 + 1) <= 0.0) goto LAB_04183c34;
  uVar5 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"PrimalPeashooterSplitTarget");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName((RtName *)&local_18,(wstring *)aRStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar5,0xc,(RtName *)&local_18);
  Sexy::RtName::~RtName((RtName *)&local_18);
  FUN_05476c50(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  DVec3::DVec3((DVec3 *)&local_18);
  if (param_1) {
                    /* WARNING: Load size is inaccurate */
    local_18._0_4_ = *puVar4;
    iVar1 = -1;
    local_18._4_4_ = *(float *)((long)puVar4 + 4);
    local_10 = 0;
    pBVar11._0_4_ = (Board *)local_18;
    fVar8 = local_18._4_4_;
    goto LAB_04183ba4;
  }
                    /* WARNING: Load size is inaccurate */
  local_18._0_4_ = *puVar4;
  local_18._4_4_ = *(float *)((long)puVar4 + 4);
  local_10 = 0;
  iVar1 = Sexy::Rand(4);
  if (iVar1 == 0) {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_18._0_4_ = (Board *)((float)iVar2 + (float)(Board *)local_18);
    uVar6 = Sexy::Rand();
joined_r0x04183ccc:
    if ((uVar6 & 1) == 0) {
      iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar3 + -1 <= iVar2) goto LAB_04183cd0;
      iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
LAB_04183d3c:
      iVar2 = iVar2 + 1;
    }
    else {
LAB_04183cd0:
      iVar3 = FUN_04181280(*(undefined4 *)(this + 0xa8));
      iVar2 = 0;
      if (iVar3 == 0) goto LAB_04183d3c;
      iVar2 = iVar3 + -1;
    }
    iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar2);
    local_18._4_4_ = (float)iVar2;
                    /* WARNING: Load size is inaccurate */
    pBVar11._0_4_ = *puVar4;
    fVar8 = *(float *)((long)puVar4 + 4);
    fVar10 = 80.0;
  }
  else {
    if (iVar1 == 1) {
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      local_18._0_4_ = (Board *)((float)(Board *)local_18 - (float)iVar2);
      uVar6 = Sexy::Rand();
      goto joined_r0x04183ccc;
    }
    if (iVar1 == 2) {
      iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
      if (iVar2 == 0) {
        iVar2 = 1;
        iVar1 = 3;
      }
      else {
LAB_04183d7c:
        iVar2 = iVar2 + -1;
      }
      iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar2);
      local_18._4_4_ = (float)iVar2;
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *puVar4;
      fVar8 = *(float *)((long)puVar4 + 4);
      fVar10 = 80.0;
    }
    else if (iVar1 == 3) {
      iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar2 == iVar3 + -1) {
        iVar1 = 2;
        iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
        goto LAB_04183d7c;
      }
      iVar2 = FUN_04181280(*(undefined4 *)(this + 0xa8));
      iVar2 = BoardTransforms::GridToBoardSpaceYUnbounded(iVar2 + 1);
      local_18._4_4_ = (float)iVar2;
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *puVar4;
      fVar8 = *(float *)((long)puVar4 + 4);
      fVar10 = 80.0;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      pBVar11._0_4_ = *puVar4;
      fVar8 = *(float *)((long)puVar4 + 4);
      fVar10 = 80.0;
    }
  }
LAB_04183ba4:
  uVar9 = *(undefined4 *)(puVar4 + 1);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
  uVar5 = Projectile::GetInstigator((Projectile *)this);
  this_00 = (RtObject *)Board::AddProjectile(pBVar11._0_4_,fVar8,uVar9,uVar7,aRStack_20,uVar5,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  this_01 = Sexy::RtObject::Cast<PrimalPeashooterSplitTargetProjectile>(this_00);
  PrimalPeashooterSplitTargetProjectile::setStartDirect(this_01,iVar1);
  Projectile::LaunchAt((Projectile *)this_01,(SexyVector3 *)&local_18,fVar10,1.0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
LAB_04183c34:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PrimalPeashooterProjectile::onUpdate(float) */

void __thiscall PrimalPeashooterProjectile::onUpdate(PrimalPeashooterProjectile *this,float param_1)

{
  long extraout_x0;
  float fVar1;
  float fVar2;
  
  Projectile::GetProps((Projectile *)this);
  nop();
  if ((*(char *)(extraout_x0 + 500) != '\0') &&
     (fVar1 = *(float *)(this + 0x1a8), fVar2 = *(float *)(extraout_x0 + 0x1f8),
     *(float *)(this + 0x1a8) = param_1 + fVar1, fVar2 <= param_1 + fVar1)) {
    *(undefined4 *)(this + 0x1a8) = 0;
    doSplit(this,false);
    return;
  }
  return;
}


/* PrimalPeashooterProjectile::hitZombie(BoardEntity*) */

void __thiscall
PrimalPeashooterProjectile::hitZombie(PrimalPeashooterProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long extraout_x0;
  
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = shouldKnockback(this,param_1);
    if (cVar1 != '\0') {
      knockbackZombie((BoardEntity *)this);
    }
    cVar1 = AppleMortarProjectile::shouldStun((AppleMortarProjectile *)this,param_1);
    if (cVar1 != '\0') {
      stunZombie(this,param_1);
    }
    Projectile::GetProps((Projectile *)this);
    nop();
    if (*(char *)(extraout_x0 + 500) != '\0') {
      doSplit(this,true);
      return;
    }
  }
  return;
}


/* PrimalPeashooterProjectile::onSplashDamageHitEntity(BoardEntity*) */

void __thiscall
PrimalPeashooterProjectile::onSplashDamageHitEntity
          (PrimalPeashooterProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  long extraout_x0;
  
  if (param_1 != (BoardEntity *)0x0) {
    cVar1 = shouldKnockback(this,param_1);
    if (cVar1 != '\0') {
      knockbackZombie((BoardEntity *)this);
    }
    cVar1 = AppleMortarProjectile::shouldStun((AppleMortarProjectile *)this,param_1);
    if (cVar1 != '\0') {
      stunZombie(this,param_1);
    }
    Projectile::GetProps((Projectile *)this);
    nop();
    if (*(char *)(extraout_x0 + 500) != '\0') {
      doSplit(this,true);
      return;
    }
  }
  return;
}


/* PrimalPeashooterProjectile::handleImpact(BoardEntity*) */

void __thiscall
PrimalPeashooterProjectile::handleImpact(PrimalPeashooterProjectile *this,BoardEntity *param_1)

{
  hitZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

