// Class: ArtifactMeteorProjectile


/* ArtifactMeteorProjectile::~ArtifactMeteorProjectile() */

void __thiscall ArtifactMeteorProjectile::~ArtifactMeteorProjectile(ArtifactMeteorProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b870;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactMeteorProjectile_0668ba60;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactMeteorProjectile::~ArtifactMeteorProjectile() */

void __thiscall ArtifactMeteorProjectile::~ArtifactMeteorProjectile(ArtifactMeteorProjectile *this)

{
  ~ArtifactMeteorProjectile(this + -0x10);
  return;
}


/* ArtifactMeteorProjectile::~ArtifactMeteorProjectile() */

void __thiscall ArtifactMeteorProjectile::~ArtifactMeteorProjectile(ArtifactMeteorProjectile *this)

{
  ~ArtifactMeteorProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactMeteorProjectile::~ArtifactMeteorProjectile() */

void __thiscall ArtifactMeteorProjectile::~ArtifactMeteorProjectile(ArtifactMeteorProjectile *this)

{
  ~ArtifactMeteorProjectile(this + -0x10);
  return;
}


/* ArtifactMeteorProjectile::SetInfo(ArtifactMeteorProjectileInfo const&) */

void __thiscall
ArtifactMeteorProjectile::SetInfo
          (ArtifactMeteorProjectile *this,ArtifactMeteorProjectileInfo *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1a8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1b0) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x1c0) = uVar1;
  *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(param_1 + 0x20);
  return;
}


/* ArtifactMeteorProjectile::ArtifactMeteorProjectile() */

void __thiscall ArtifactMeteorProjectile::ArtifactMeteorProjectile(ArtifactMeteorProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0668b870;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactMeteorProjectile_0668ba60;
  ArtifactMeteorProjectileInfo::ArtifactMeteorProjectileInfo
            ((ArtifactMeteorProjectileInfo *)(this + 0x1a8));
  return;
}


/* ArtifactMeteorProjectile::StaticNew() */

ArtifactMeteorProjectile * ArtifactMeteorProjectile::StaticNew(void)

{
  ArtifactMeteorProjectile *this;
  
  this = ::operator_new(0x1d0);
  ArtifactMeteorProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::StaticClassInit() */

void ArtifactMeteorProjectile::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactMeteorProjectileInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03724088,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactMeteorProjectile");
    (*pcVar3)(plVar2,asStack_10,FUN_037481f4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMeteorProjectile::StaticGetClass() */

long * ArtifactMeteorProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMeteorProjectile::GetClass() const */

long * ArtifactMeteorProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMeteorProjectile::fillMeteorInfo(GridItemMeteor*) */

void __thiscall
ArtifactMeteorProjectile::fillMeteorInfo(ArtifactMeteorProjectile *this,GridItemMeteor *param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  undefined1 uVar2;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = *(int *)(this + 0x1cc);
  FUN_03723bc8(*(undefined4 *)(this + 0x1b8),param_1 + 0x1b0);
  FUN_03723bd0(*(undefined4 *)(this + 0x1bc),param_1 + 0x1b4);
  FUN_03723bd8(*(undefined4 *)(this + 0x1c0),param_1 + 0x1b8);
  FUN_03723be0(*(undefined4 *)(this + 0x1c4),param_1 + 0x1bc);
  FUN_03723be8(*(undefined4 *)(this + 0x1c8),param_1 + 0x1c0);
  uVar2 = 2;
  if (iVar1 < 0x14) {
    uVar2 = 9 < iVar1;
  }
  FUN_03723bf0(param_1 + 0x1c4,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::spawnMeteor(Sexy::Point const&) */

void __thiscall ArtifactMeteorProjectile::spawnMeteor(ArtifactMeteorProjectile *this,Point *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  GridItemMeteor *pGVar4;
  RtObject *this_00;
  Board *this_01;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
  if ((((cVar1 == '\0') &&
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
      (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 == '\0')) &&
     (((*(int *)param_1 != -1 && (*(int *)(param_1 + 4) != -1)) &&
      (lVar3 = FUN_03754d00(), lVar3 == 0)))) {
    pGVar4 = (GridItemMeteor *)FUN_03755814(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    lVar3 = FUN_03754ec8(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4));
    if (pGVar4 == (GridItemMeteor *)0x0) {
      if (lVar3 == 0) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string(asStack_10,"meteor");
        this_00 = (RtObject *)
                  Board::AddGridItem(this_01,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
        pGVar4 = Sexy::RtObject::Cast<GridItemMeteor>(this_00);
        std::string::~string(asStack_10);
        nop();
        uVar2 = FUN_03723aa8(*(undefined4 *)(this + 0x24));
        FUN_03723aac(pGVar4 + 0x24,uVar2);
        fillMeteorInfo(this,pGVar4);
        GridItemMeteor::SetIdle(pGVar4);
      }
    }
    else {
      GridItemMeteor::ResetTimer(pGVar4);
      fillMeteorInfo(this,pGVar4);
      GridItemMeteor::SetIdle(pGVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::spawnMeteor() */

void __thiscall ArtifactMeteorProjectile::spawnMeteor(ArtifactMeteorProjectile *this)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar3[1]);
  Sexy::Point::Point(aPStack_10,iVar1,iVar2);
  spawnMeteor(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::affectSubEntities(Sexy::SexyVector3) */

void ArtifactMeteorProjectile::affectSubEntities(float param_1,float param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *this;
  int in_w4;
  FastCurve aFStack_48 [4];
  float local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_24;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_48,param_1,param_2);
  iVar3 = FUN_03723ae0(*(undefined4 *)(param_3 + 0xa8));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)0x0,iVar3,1,1,in_w4);
  local_44 = (float)(local_2c + local_24 / 2);
  iVar3 = (int)*(float *)(param_3 + 0x1a8) / 2;
  iVar4 = FUN_03723ae0(*(undefined4 *)(param_3 + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar5 * SQRT(*(float *)(param_3 + 0x1a8)),avStack_20,2,aFStack_48,iVar4 - iVar3,
             iVar3 + iVar4);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
    if (((((((this != (Zombie *)0x0) &&
            (cVar2 = (**(code **)(*(long *)this + 0x328))(), cVar2 == '\0')) &&
           (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), !bVar1)) &&
          ((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this), !bVar1 &&
           (cVar2 = (**(code **)(*(long *)this + 0x4d8))(this), cVar2 == '\0')))) &&
         ((bVar1 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this), !bVar1 &&
          ((bVar1 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this), !bVar1 &&
           (bVar1 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this), !bVar1)))))) &&
        (bVar1 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this), !bVar1)) &&
       (((((bVar1 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this), !bVar1 &&
           (bVar1 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this), !bVar1)) &&
          (bVar1 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this), !bVar1)) &&
         (((bVar1 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this), !bVar1 &&
           (cVar2 = FUN_0373c274(*(undefined4 *)(this + 0x28)), cVar2 == '\0')) &&
          ((cVar2 = Zombie::HasFogImmune(this), cVar2 == '\0' &&
           ((cVar2 = (**(code **)(*(long *)this + 0x508))(this), cVar2 == '\0' &&
            (cVar2 = Zombie::IsBerserk(this), cVar2 == '\0')))))))) &&
        (cVar2 = RealObject::IsOnTeam(this,1), cVar2 == '\0')))) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(param_3 + 0x1b4),0,this,2,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::damageEntity(Zombie*) */

void __thiscall
ArtifactMeteorProjectile::damageEntity(ArtifactMeteorProjectile *this,Zombie *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  DamageInfo *pDVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
                    /* WARNING: Load size is inaccurate */
  pDVar3._0_4_ = *(DamageInfo **)(this + 0x1ac);
  local_8 = ___stack_chk_guard;
  pcVar2 = *(code **)(*(long *)param_1 + 0x110);
  uVar1 = Projectile::GetInstigator((Projectile *)this);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo(pDVar3._0_4_,local_70,local_6c,aDStack_68,0x400,uVar1,aPStack_78,0);
  (*pcVar2)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteorProjectile::affectMainEntities() */

void __thiscall ArtifactMeteorProjectile::affectMainEntities(ArtifactMeteorProjectile *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  GridItem *pGVar10;
  undefined8 *puVar11;
  long *extraout_x0;
  Zombie *this_00;
  RtObject *this_01;
  code *pcVar12;
  DamageInfo *pDVar14;
  int iVar13;
  FastCurve aFStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  iVar1 = *(int *)(this + 0x1b0);
  iVar13 = 0;
  local_8 = ___stack_chk_guard;
  pfVar8 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  Sexy::FastCurve::SetOutRange(aFStack_a8,*pfVar8,pfVar8[1]);
  uVar4 = BoardTransforms::BoardSpaceToGridX(*pfVar8);
  uVar5 = BoardTransforms::BoardSpaceToGridY(pfVar8[1]);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar9 = operator|(2,1);
  uVar6 = operator|(uVar9,4);
  EntityFinder::GetEntitiesAtGridSquare(avStack_80,uVar6,uVar4,uVar5);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (!bVar2) {
      affectSubEntities(*pfVar8,pfVar8[1],pfVar8[2],this);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar11 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_01 = (RtObject *)*puVar11;
    nop();
    if ((extraout_x0 != (long *)0x0) && (0.0 < *(float *)(extraout_x0 + 0x1b))) {
      pcVar12 = *(code **)(*extraout_x0 + 0x120);
      uVar9 = Projectile::GetInstigator((Projectile *)this);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,2,uVar9,aPStack_90,0);
      (*pcVar12)(extraout_x0,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
    }
    this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
    if ((((this_00 == (Zombie *)0x0) ||
         (cVar3 = (**(code **)(*(long *)this_00 + 0x328))(), cVar3 != '\0')) ||
        (cVar3 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar3 != '\0')) ||
       (cVar3 = RealObject::IsOnTeam(this_00,2), cVar3 == '\0')) {
LAB_0376a4bc:
      pGVar10 = Sexy::RtObject::Cast<GridItem>(this_01);
      if (pGVar10 != (GridItem *)0x0) {
                    /* WARNING: Load size is inaccurate */
        pDVar14._0_4_ = *(DamageInfo **)(this + 0x1ac);
        pcVar12 = *(code **)(*(long *)pGVar10 + 0x110);
        uVar9 = Projectile::GetInstigator((Projectile *)this);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo(pDVar14._0_4_,local_88,local_84,aDStack_68,0x400,uVar9,aPStack_90,0);
        (*pcVar12)(pGVar10,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_00);
      if (((((!bVar2) && (bVar2 = Sexy::RtObject::IsA<ZombieMech>((RtObject *)this_00), !bVar2)) &&
           ((bVar2 = Sexy::RtObject::IsA<ZombieGargantuar>((RtObject *)this_00), !bVar2 &&
            ((bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_00), !bVar2 &&
             (bVar2 = Sexy::RtObject::IsA<ZombieAgileBronze>((RtObject *)this_00), !bVar2)))))) &&
          ((bVar2 = Sexy::RtObject::IsA<ZombieStrongBronze>((RtObject *)this_00), !bVar2 &&
           (((bVar2 = Sexy::RtObject::IsA<ZombieMagicBronze>((RtObject *)this_00), !bVar2 &&
             (bVar2 = Sexy::RtObject::IsA<ZombieLionDance>((RtObject *)this_00), !bVar2)) &&
            (bVar2 = Sexy::RtObject::IsA<ZombieWealthGod>((RtObject *)this_00), !bVar2)))))) &&
         (((bVar2 = Sexy::RtObject::IsA<ZombieSkyCityTwinsPlane>((RtObject *)this_00), !bVar2 &&
           (bVar2 = Sexy::RtObject::IsA<ZombieInvisiblePlane>((RtObject *)this_00), !bVar2)) &&
          (((bVar2 = Sexy::RtObject::IsA<ZombiePirateCannon>((RtObject *)this_00), !bVar2 &&
            ((cVar3 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar3 == '\0' &&
             (cVar3 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar3 == '\0')))) &&
           (cVar3 = Zombie::CanTakeFatalDamage(this_00), cVar3 != '\0')))))) {
        iVar7 = Zombie::GetSizeType(this_00);
        if (((iVar7 == 0) || (iVar7 = Zombie::GetSizeType(this_00), iVar7 == 1)) && (iVar13 < iVar1)
           ) {
          pcVar12 = *(code **)(*(long *)this_00 + 0x120);
          iVar13 = iVar13 + 1;
          uVar9 = Projectile::GetInstigator((Projectile *)this);
          Sexy::Point::Point(aPStack_90,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
          DamageInfo::DamageInfo
                    ((DamageInfo *)0x0,local_88,local_84,aDStack_68,4,uVar9,aPStack_90,0);
          (*pcVar12)(this_00,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
        else {
          damageEntity(this,this_00);
        }
        goto LAB_0376a4bc;
      }
      damageEntity(this,this_00);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  } while( true );
}


/* ArtifactMeteorProjectile::handleImpact(BoardEntity*) */

void __thiscall
ArtifactMeteorProjectile::handleImpact(ArtifactMeteorProjectile *this,BoardEntity *param_1)

{
  affectMainEntities(this);
  spawnMeteor(this);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

