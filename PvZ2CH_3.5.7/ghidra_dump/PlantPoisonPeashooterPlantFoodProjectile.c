// Class: PlantPoisonPeashooterPlantFoodProjectile


/* PlantPoisonPeashooterPlantFoodProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::OnCollideEntity
          (PlantPoisonPeashooterPlantFoodProjectile *this,BoardEntity *param_1)

{
  (**(code **)(*(long *)this + 0x1e0))();
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}


/* PlantPoisonPeashooterPlantFoodProjectile::onProjectileInitialized() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::onProjectileInitialized
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  this[0x1a5] = (PlantPoisonPeashooterPlantFoodProjectile)0x1;
  return;
}


/* PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699c7f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterPlantFoodProjectile_0699c9f0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodProjectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::~PlantPoisonPeashooterPlantFoodProjectile
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  ~PlantPoisonPeashooterPlantFoodProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::StaticClassInit() */

void PlantPoisonPeashooterPlantFoodProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPoisonPeashooterPlantFoodProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc858c,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooterPlantFoodProjectile::StaticGetClass() */

long * PlantPoisonPeashooterPlantFoodProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooterPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterPlantFoodProjectile::GetClass() const */

long * PlantPoisonPeashooterPlantFoodProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantPoisonPeashooterPlantFoodProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterPlantFoodProjectile::PlantPoisonPeashooterPlantFoodProjectile() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::PlantPoisonPeashooterPlantFoodProjectile
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a6] = (PlantPoisonPeashooterPlantFoodProjectile)0x0;
  *(undefined ***)this = &PTR_GetClass_0699c7f0;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterPlantFoodProjectile_0699c9f0;
  *(undefined4 *)(this + 0x1a8) = 1;
  return;
}


/* PlantPoisonPeashooterPlantFoodProjectile::StaticNew() */

PlantPoisonPeashooterPlantFoodProjectile * PlantPoisonPeashooterPlantFoodProjectile::StaticNew(void)

{
  PlantPoisonPeashooterPlantFoodProjectile *this;
  
  this = ::operator_new(0x1d8);
  PlantPoisonPeashooterPlantFoodProjectile(this);
  return this;
}


/* PlantPoisonPeashooterPlantFoodProjectile::damageEntity(BoardEntity*) */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::damageEntity
          (PlantPoisonPeashooterPlantFoodProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<GridItemFireWall>((RtObject *)param_1);
    if (bVar1) {
      return;
    }
  }
  Projectile::damageEntity((Projectile *)this,param_1);
  return;
}


/* PlantPoisonPeashooterPlantFoodProjectile::InitializeValues(float, float, float, float, float,
   float, float, float, float, float) */

void PlantPoisonPeashooterPlantFoodProjectile::InitializeValues
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10)

{
  Projectile PVar1;
  undefined4 uVar2;
  Projectile *in_x0;
  Plant *this;
  
  *(float *)(in_x0 + 0x1b0) = param_1;
  *(float *)(in_x0 + 0x1b4) = param_2;
  *(float *)(in_x0 + 0x1b8) = param_3;
  *(float *)(in_x0 + 0x1d0) = param_9;
  *(float *)(in_x0 + 0x1bc) = param_4;
  *(float *)(in_x0 + 0x1c0) = param_5;
  *(float *)(in_x0 + 0x1c4) = param_6;
  *(float *)(in_x0 + 0x1c8) = param_7;
  *(float *)(in_x0 + 0x1cc) = param_8;
  *(float *)(in_x0 + 0x1d4) = param_10;
  Projectile::GetInstigator(in_x0);
  nop();
  if (this != (Plant *)0x0) {
    PVar1 = (Projectile)Plant::GetAvatarEnable(this);
    in_x0[0x1a6] = PVar1;
    uVar2 = FUN_04cc6f84(*(undefined4 *)(this + 0x50));
    *(undefined4 *)(in_x0 + 0x1a8) = uVar2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::addPoisonTileToBoard(Sexy::Point&) */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::addPoisonTileToBoard
          (PlantPoisonPeashooterPlantFoodProjectile *this,Point *param_1)

{
  undefined4 uVar1;
  RtObject *this_00;
  PoisonGridItem *this_01;
  PopAnimRig *pPVar2;
  string *psVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_40,"poison_tile");
  this_00 = (RtObject *)
            Board::AddGridItemUnbounded
                      (psVar3,(int)asStack_40,*(int *)param_1,*(int *)(param_1 + 4));
  this_01 = Sexy::RtObject::Cast<PoisonGridItem>(this_00);
  std::string::~string(asStack_40);
  nop();
  fVar4 = (float)FUN_04cc6fb0();
  PoisonMistGridItem::InitializeValues
            ((PoisonMistGridItem *)this_01,*(float *)(this + 0x1c8),*(float *)(this + 0x1cc),
             *(float *)(this + 0x1d0),*(float *)(this + 0x1d4),fVar4);
  FUN_04cc6fbc(this_01 + 0x1ac,this[0x1a6]);
  uVar1 = FUN_04cc6f74(*(undefined4 *)(this + 0x24));
  FUN_04cc6f78(this_01 + 0x24,uVar1);
  if (this[0x1a6] == (PlantPoisonPeashooterPlantFoodProjectile)0x0) {
    if (this[0x1a5] == (PlantPoisonPeashooterPlantFoodProjectile)0x0) {
      Sexy::RtObject::Cast<GridItemAnimation>((RtObject *)this_01);
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"ANIMATION2");
      Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      PopAnimRig::PlayAndStop(pPVar2,asStack_40,0,aDStack_38);
      std::string::~string(asStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
  }
  else {
    if (this[0x1a5] == (PlantPoisonPeashooterPlantFoodProjectile)0x0) {
      Sexy::RtObject::Cast<GridItemAnimation>((RtObject *)this_01);
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"ANIMATION4");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    else {
      Sexy::RtObject::Cast<GridItemAnimation>((RtObject *)this_01);
      GridItemAnimation::GetAnimRig();
      pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      std::string::string(asStack_40,"ANIMATION3");
      Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    }
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::spawnOrRefreshPoisonTiles() */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::spawnOrRefreshPoisonTiles
          (PlantPoisonPeashooterPlantFoodProjectile *this)

{
  char cVar1;
  SexyVector3 *pSVar2;
  PoisonMistGridItem *this_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_18 = *(undefined8 *)pSVar2;
  local_10 = *(undefined4 *)(pSVar2 + 8);
  auVar8 = Projectile::GetProps((Projectile *)this);
  local_18 = CONCAT44(local_18._4_4_,(float)local_18 + *(float *)(auVar8._0_8_ + 0x120));
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&local_18,auVar8._8_8_);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&local_20);
  if (cVar1 == '\0') {
    this_00 = (PoisonMistGridItem *)FUN_04ccb6e4(local_20,local_1c);
    lVar3 = FUN_04ccb7c8(local_20,local_1c);
    lVar4 = FUN_04ccb8ac(local_20,local_1c);
    lVar5 = FUN_04ccb990(local_20,local_1c);
    lVar6 = FUN_04ccba74(local_20,local_1c);
    lVar7 = FUN_04ccbb58(local_20,local_1c);
    if (this_00 == (PoisonMistGridItem *)0x0) {
      if ((((lVar3 == 0) && (lVar4 == 0)) && (lVar7 == 0)) && (lVar5 == 0 && lVar6 == 0)) {
        addPoisonTileToBoard(this,(Point *)&local_20);
        this[0x1a5] = (PlantPoisonPeashooterPlantFoodProjectile)0x0;
      }
    }
    else {
      PoisonMistGridItem::ResetTimer(this_00);
    }
  }
  else {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)0x0);
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::onUpdate(float) */

void PlantPoisonPeashooterPlantFoodProjectile::onUpdate(float param_1)

{
  char cVar1;
  SexyVector3 *pSVar2;
  PoisonMistGridItem *this;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  undefined1 auVar8 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  pSVar2 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(in_x0);
  uStack_18 = *(undefined8 *)pSVar2;
  uStack_10 = *(undefined4 *)(pSVar2 + 8);
  auVar8 = Projectile::GetProps((Projectile *)in_x0);
  uStack_18 = CONCAT44(uStack_18._4_4_,(float)uStack_18 + *(float *)(auVar8._0_8_ + 0x120));
  BoardTransforms::BoardSpaceToGridUnbounded((BoardTransforms *)&uStack_18,auVar8._8_8_);
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(Point *)&uStack_20);
  if (cVar1 == '\0') {
    this = (PoisonMistGridItem *)FUN_04ccb6e4(uStack_20,uStack_1c);
    lVar3 = FUN_04ccb7c8(uStack_20,uStack_1c);
    lVar4 = FUN_04ccb8ac(uStack_20,uStack_1c);
    lVar5 = FUN_04ccb990(uStack_20,uStack_1c);
    lVar6 = FUN_04ccba74(uStack_20,uStack_1c);
    lVar7 = FUN_04ccbb58(uStack_20,uStack_1c);
    if (this == (PoisonMistGridItem *)0x0) {
      if ((((lVar3 == 0) && (lVar4 == 0)) && (lVar7 == 0)) && (lVar5 == 0 && lVar6 == 0)) {
        addPoisonTileToBoard((PlantPoisonPeashooterPlantFoodProjectile *)in_x0,(Point *)&uStack_20);
        in_x0[0x1a5] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        )0x0;
      }
    }
    else {
      PoisonMistGridItem::ResetTimer(this);
    }
  }
  else {
    Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar2,(BoardEntity *)0x0);
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::PoisonExplode(Zombie*) */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::PoisonExplode
          (PlantPoisonPeashooterPlantFoodProjectile *this,Zombie *param_1)

{
  int iVar1;
  long extraout_x0;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  iVar1 = *(int *)(this + 0x1a8);
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  Projectile::GetProps((Projectile *)this);
  nop();
  local_60 = ((float)(iVar1 + -1) * 0.5 + 1.0) * *(float *)(extraout_x0 + 0x1e0);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterPlantFoodProjectile::applyConditions(BoardEntity*) */

void __thiscall
PlantPoisonPeashooterPlantFoodProjectile::applyConditions
          (PlantPoisonPeashooterPlantFoodProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  Zombie *this_00;
  string *psVar4;
  float *pfVar5;
  ZombieTosserSubSystem *pZVar6;
  float fVar7;
  ZombieTosserSubSystem *pZVar10;
  undefined4 uVar8;
  undefined4 uVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d0 [8];
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b8 [72];
  string asStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar2)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    cVar3 = Zombie::HasCondition(this_00,0x33);
    if (cVar3 == '\0') {
      cVar3 = Zombie::HasCondition(this_00,0x30);
    }
    else {
      Zombie::EndCondition(this_00,0x33);
      cVar3 = Zombie::HasCondition(this_00,0x30);
    }
    if (cVar3 != '\0') {
      Zombie::EndCondition(this_00,0x30);
    }
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_70,"poisonpeashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
    std::string::~string(asStack_70);
    nop();
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),0,this_00,0x30,1);
    iVar1 = *(int *)(this + 0x1a8);
    uVar9 = 0x3f800000;
    fVar7 = (float)FUN_04cc6f80(*(undefined4 *)(this + 0x180));
    fVar7 = fVar7 * ((float)(iVar1 + -1) * 0.5 + 1.0);
    if (this[0x1a6] == (PlantPoisonPeashooterPlantFoodProjectile)0x0) {
      Zombie::SetConditionTracker(fVar7 * *(float *)(this + 0x1b0),this_00,0x30);
    }
    else {
      Zombie::SetConditionTracker(*(float *)(this + 0x1b0) * 1.5 * fVar7,this_00,0x30);
    }
    uVar8 = 0;
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1b8),this_00,0x33,1);
    local_c8 = (float)ZombieTosserSubSystem::CaculateTargetButNotOffScreen
                                (this_00,*(float *)(this + 0x1bc));
    local_c4 = uVar8;
    local_c0 = uVar9;
    cVar3 = Zombie::IsBoss(this_00);
    if (((cVar3 == '\0') &&
        (cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar3 == '\0')) &&
       (cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0')) {
      Zombie::GetCurrentTitleStatus();
      TitleStatus::~TitleStatus((TitleStatus *)asStack_70);
      fVar7 = local_c8;
      if ((local_58 == '\0') &&
         (pfVar5 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_00), *pfVar5 < fVar7)) {
        pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
        pZVar10._0_4_ = *(ZombieTosserSubSystem **)(this + 0x1c4);
        uVar9 = *(undefined4 *)(this + 0x1c0);
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b8);
        ZombieTosserSubSystem::LaunchZombie
                  (pZVar10._0_4_,uVar9,pZVar6,this_00,&local_c8,aRStack_b8,0);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b8);
      }
    }
    (**(code **)(*(long *)this + 0x1e8))(this,this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

