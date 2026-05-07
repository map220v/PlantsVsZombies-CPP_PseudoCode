// Class: PlantDusklobber


/* PlantDusklobber::ApplyPlantfood() */

void __thiscall PlantDusklobber::ApplyPlantfood(PlantDusklobber *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantDusklobber::PlantDusklobber() */

void __thiscall PlantDusklobber::PlantDusklobber(PlantDusklobber *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0673c6d0;
  return;
}


/* PlantDusklobber::StaticNew() */

PlantDusklobber * PlantDusklobber::StaticNew(void)

{
  PlantDusklobber *this;
  
  this = ::operator_new(0x30);
  PlantDusklobber(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::StaticClassInit() */

void PlantDusklobber::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDusklobber");
    (*pcVar2)(plVar1,asStack_10,FUN_03bd4da0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDusklobber::StaticGetClass() */

long * PlantDusklobber::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDusklobber",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDusklobber::GetClass() const */

long * PlantDusklobber::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantDusklobber",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDusklobber::isStunByPossibility() */

bool __thiscall PlantDusklobber::isStunByPossibility(PlantDusklobber *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_03bd4314(*(undefined8 *)(this + 0x10));
  if (iVar2 == 2) {
    iVar2 = PlantFramework::Rand((PlantFramework *)this);
    bVar1 = (float)iVar2 * 4.656613e-10 <= *(float *)(this + 0x2c) + 0.1;
  }
  else {
    bVar1 = false;
    if (2 < iVar2) {
      iVar2 = PlantFramework::Rand((PlantFramework *)this);
      bVar1 = (float)iVar2 * 4.656613e-10 <= *(float *)(this + 0x2c) + 0.2;
    }
  }
  return bVar1;
}


/* PlantDusklobber::GetPlantAttackRect(PlantWeapon) */

long PlantDusklobber::GetPlantAttackRect(long param_1,PlantShadowvanilla *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  PlantFramework::GetPlantAttackRect();
  cVar1 = PlantShadowvanilla::IsBoosted(param_2);
  if ((cVar1 != '\0') && (param_3 == 0)) {
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 0xc) = iVar2 * 3;
  }
  return param_1;
}


/* PlantDusklobber::~PlantDusklobber() */

void __thiscall PlantDusklobber::~PlantDusklobber(PlantDusklobber *this)

{
  *(undefined ***)this = &PTR_GetClass_0673c6d0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantDusklobber::~PlantDusklobber() */

void __thiscall PlantDusklobber::~PlantDusklobber(PlantDusklobber *this)

{
  ~PlantDusklobber(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantDusklobber::FindTargetAndFire(PlantDusklobber *this,int param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 1) {
    bVar1 = PlantFramework::FindTargetAndFire();
    goto LAB_03bd7760;
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  iVar4 = (int)this;
  PlantDragonBruit::getTargetInRow(iVar4);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  if (bVar1 == 0) {
    cVar2 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
    if (cVar2 != '\0') {
      PlantDragonBruit::getTargetInRow(iVar4);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
      PlantDragonBruit::getTargetInRow(iVar4);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      bVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
      bVar1 = bVar1 | bVar3;
      if (bVar1 != 0) goto LAB_03bd7744;
    }
  }
  else {
LAB_03bd7744:
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
LAB_03bd7760:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* PlantDusklobber::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantDusklobber::launchProjectileAt
          (PlantDusklobber *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_03bd89f0(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_03bd89f0(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_03bd89f0(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_03bd89f0(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantDusklobber::launchSpecialProjectile
               (float param_1,float param_2,undefined4 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  Projectile *this;
  long lVar5;
  GridItemCardGameZombie *this_00;
  long extraout_x0;
  float *pfVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  Plant *pPVar9;
  Board *pBVar10;
  int local_30;
  int local_2c;
  Vec3 aVStack_28 [16];
  float local_18 [4];
  long local_8;
  
  pPVar9 = *(Plant **)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined4 *)(pPVar9 + 0x110);
  *(undefined4 *)(pPVar9 + 0x150) = 1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,param_5);
  Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)local_18,uVar2,1);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::Point::Point((Point *)&local_30);
  local_30 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(param_1);
  local_2c = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)local_18,"dusklobberflower");
  lVar5 = Board::GetGridItemAt(pBVar10,(string *)local_18,local_30,local_2c);
  std::string::~string((string *)local_18);
  nop();
  if (lVar5 == 0) {
    pBVar10 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_18,"dusklobberflower");
    lVar5 = Board::AddGridItem(pBVar10,(string *)local_18,local_30,local_2c,1);
    std::string::~string((string *)local_18);
    nop();
  }
  uVar2 = FUN_03bd4210(*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x24));
  FUN_03bd4214(lVar5 + 0x24,uVar2);
  nop();
  if (this_00 != (GridItemCardGameZombie *)0x0) {
    GridItemCardGameZombie::PickCardStart(this_00,1);
    bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
    BossProgressMeter::SetEliminateModule((BossProgressMeter *)this_00,bVar1);
    Projectile::GetProps(this);
    nop();
    if (extraout_x0 != 0) {
      GridItemPlantCrackerFlower::SetSplashDamageProps
                ((GridItemPlantCrackerFlower *)this_00,*(float *)(extraout_x0 + 0x1ec),
                 *(float *)(extraout_x0 + 0x1e8));
      GridItemPlantCrackerFlower::SetShrapnelProps
                ((GridItemPlantCrackerFlower *)this_00,*(float *)(extraout_x0 + 0x1e4),
                 *(float *)(extraout_x0 + 0x1e0));
    }
    BombProjectile::SetOwningRocket((ZombossCrosshair *)this);
  }
  iVar3 = PlantFramework::Rand(param_4,0x14);
  iVar4 = PlantFramework::Rand(param_4,0x14);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_4 + 0x10));
  EATextSquish::Vec3::Vec3
            (aVStack_28,(float)(iVar3 + -10) + *pfVar6,(float)(iVar4 + -0xf) + pfVar6[1],pfVar6[2]);
  (**(code **)(*(long *)this + 0x78))(this,aVStack_28);
  local_18[1] = -200.0;
  local_18[2] = (float)param_3;
  local_18[0] = param_1;
  puVar7 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(param_4 + 0x10));
  local_18[0] = (float)*puVar7;
  uVar8 = FUN_03bd42ec(*(undefined8 *)(this + 0xe0));
  uVar8 = operator|(uVar8,0x2000);
  FUN_03bd42f0(this + 0xe0,uVar8);
  launchProjectileAt((PlantDusklobber *)param_4,this,(SexyVector3 *)local_18,1.0,0.15);
  Projectile::SetTarget(this,param_6);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::launchSpecialAvatarProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantDusklobber::launchSpecialAvatarProjectile
               (float param_1,float param_2,undefined4 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,RtWeakPtr *param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  Projectile *this;
  long lVar5;
  GridItemCardGameZombie *this_00;
  long extraout_x0;
  float *pfVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  Plant *pPVar9;
  Board *pBVar10;
  int local_30;
  int local_2c;
  Vec3 aVStack_28 [16];
  float local_18 [4];
  long local_8;
  
  pPVar9 = *(Plant **)(param_4 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined4 *)(pPVar9 + 0x110);
  *(undefined4 *)(pPVar9 + 0x150) = 1;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_18,param_5);
  Plant::Fire(pPVar9,(RtWeakPtr<Sexy::SoundResource> *)local_18,uVar2,2);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  Sexy::Point::Point((Point *)&local_30);
  local_30 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(param_1);
  local_2c = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
  pBVar10 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)local_18,"dusklobberflowerAvatar");
  lVar5 = Board::GetGridItemAt(pBVar10,(string *)local_18,local_30,local_2c);
  std::string::~string((string *)local_18);
  nop();
  if (lVar5 == 0) {
    pBVar10 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)local_18,"dusklobberflowerAvatar");
    lVar5 = Board::AddGridItem(pBVar10,(string *)local_18,local_30,local_2c,1);
    std::string::~string((string *)local_18);
    nop();
  }
  uVar2 = FUN_03bd4210(*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x24));
  FUN_03bd4214(lVar5 + 0x24,uVar2);
  nop();
  if (this_00 != (GridItemCardGameZombie *)0x0) {
    GridItemCardGameZombie::PickCardStart(this_00,2);
    bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
    BossProgressMeter::SetEliminateModule((BossProgressMeter *)this_00,bVar1);
    Projectile::GetProps(this);
    nop();
    if (extraout_x0 != 0) {
      GridItemPlantCrackerFlower::SetSplashDamageProps
                ((GridItemPlantCrackerFlower *)this_00,*(float *)(extraout_x0 + 0x1ec),
                 *(float *)(extraout_x0 + 0x1e8));
      GridItemPlantCrackerFlower::SetShrapnelProps
                ((GridItemPlantCrackerFlower *)this_00,*(float *)(extraout_x0 + 0x1e4),
                 *(float *)(extraout_x0 + 0x1e0));
    }
    BombProjectile::SetOwningRocket((ZombossCrosshair *)this);
  }
  iVar3 = PlantFramework::Rand(param_4,0x14);
  iVar4 = PlantFramework::Rand(param_4,0x14);
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(param_4 + 0x10));
  EATextSquish::Vec3::Vec3
            (aVStack_28,(float)(iVar3 + -10) + *pfVar6,(float)(iVar4 + -0xf) + pfVar6[1],pfVar6[2]);
  (**(code **)(*(long *)this + 0x78))(this,aVStack_28);
  local_18[1] = -200.0;
  local_18[2] = (float)param_3;
  local_18[0] = param_1;
  puVar7 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(param_4 + 0x10));
  local_18[0] = (float)*puVar7;
  uVar8 = FUN_03bd42ec(*(undefined8 *)(this + 0xe0));
  uVar8 = operator|(uVar8,0x2000);
  FUN_03bd42f0(this + 0xe0,uVar8);
  launchProjectileAt((PlantDusklobber *)param_4,this,(SexyVector3 *)local_18,1.0,0.15);
  Projectile::SetTarget(this,param_6);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::updateRigLayers() */

void __thiscall PlantDusklobber::updateRigLayers(PlantDusklobber *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = FUN_03bd938c(*(undefined8 *)(this + 0x10));
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    puVar4 = &k_boostedOffLayerSetName;
  }
  else {
    puVar4 = &k_boostedOnLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar4);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  this_00 = *(Plant **)(this + 0x10);
  bVar2 = (bool)PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  Plant::setShowShadowBoost(this_00,bVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::Initialize() */

void __thiscall PlantDusklobber::Initialize(PlantDusklobber *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  RtObject *this_03;
  DusklobberBoostRate *pDVar4;
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  updateRigLayers(this);
  *(undefined4 *)(this + 0x2c) = 0;
  iVar3 = FUN_03bd4314(*(undefined8 *)(this + 0x10));
  if (1 < iVar3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    std::string::string(asStack_10,"dusklobber_new_avatar_1");
    iVar3 = NameMapperBase::GetIdForName(this_02,asStack_10);
    std::string::~string(asStack_10);
    nop();
    cVar1 = PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar3);
    if (cVar1 != '\0') {
      NewAvatar::GetAvatarInfoByAvatarId(iVar3);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
      if (bVar2) {
        NewAvatar::GetAvatarInfoByAvatarId(iVar3);
        this_03 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
        pDVar4 = Sexy::RtObject::Cast<DusklobberBoostRate>(this_03);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        if (pDVar4 != (DusklobberBoostRate *)0x0) {
          *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pDVar4 + 100);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::UpdateActions() */

void __thiscall PlantDusklobber::UpdateActions(PlantDusklobber *this)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  Plant *this_00;
  string asStack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uVar3 = FUN_03bd938c(*(undefined8 *)(this + 0x10));
  cVar1 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  if (cVar1 == '\0') {
    puVar4 = &k_boostedOffLayerSetName;
  }
  else {
    puVar4 = &k_boostedOnLayerSetName;
  }
  FUN_05475d88(asStack_10,puVar4);
  PlantAnimRig_DragonBruit::ShowBoostedLayerSet(uVar3,asStack_10);
  std::string::~string(asStack_10);
  this_00 = *(Plant **)(this + 0x10);
  bVar2 = (bool)PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
  Plant::setShowShadowBoost(this_00,bVar2);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::getNextPFTarget(std::multimap<int, Sexy::Point, std::less<int>,
   std::allocator<std::pair<int const, Sexy::Point> > >) */

void PlantDusklobber::getNextPFTarget
               (Point *param_1,PlantFramework *param_2,
               map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
               *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  arStack_30 [8];
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar4 = 0;
  std::
  map<int,Sexy::TypedKey<Sexy::Color>,std::less<int>,std::allocator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
  ::rbegin(param_3);
  while( true ) {
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    rend((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
          *)param_3);
    bVar2 = std::operator!=((reverse_iterator *)arStack_30,(reverse_iterator *)&local_28);
    if ((!bVar2) ||
       ((iVar4 != 0 &&
        (piVar6 = (int *)std::
                         reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         ::operator->(arStack_30), *piVar6 != iVar4)))) break;
    lVar7 = std::
            reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::operator->(arStack_30);
    uVar1 = *(undefined4 *)(lVar7 + 4);
    lVar7 = std::
            reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
            ::operator->(arStack_30);
    lVar7 = FUN_03bd9c2c(uVar1,*(undefined4 *)(lVar7 + 8));
    if (((lVar7 == 0) &&
        (piVar6 = (int *)std::
                         reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         ::operator->(arStack_30), 0 < *piVar6)) &&
       ((iVar4 == 0 ||
        (piVar6 = (int *)std::
                         reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                         ::operator->(arStack_30), *piVar6 == iVar4)))) {
      lVar7 = std::
              reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
              ::operator->(arStack_30);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(Point *)(lVar7 + 4));
      piVar6 = (int *)std::
                      reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::TypedKey<Sexy::Color>>>>
                      ::operator->(arStack_30);
      iVar4 = *piVar6;
    }
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::Point>>>::operator++
              ((reverse_iterator<std::_Rb_tree_iterator<std::pair<int_const,Sexy::Point>>> *)
               arStack_30);
  }
  Sexy::Point::Point(param_1);
  lVar7 = FUN_03bd43d0(local_20,local_18);
  if (lVar7 == 0) {
    do {
      do {
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar4 = PlantFramework::Rand(param_2,iVar4);
        iVar5 = BoardConstants::NUMBER_OF_ROWS();
        iVar5 = PlantFramework::Rand(param_2,iVar5);
        Sexy::Point::Point((Point *)&local_28,iVar4,iVar5);
        *(ulong *)param_1 = local_28;
        lVar7 = FUN_03bd9c2c(local_28 & 0xffffffff,local_28 >> 0x20);
      } while (lVar7 != 0);
      cVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1);
    } while (cVar3 != '\0');
  }
  else {
    iVar4 = PlantFramework::Rand(param_2,(int)lVar7);
    puVar8 = (undefined8 *)
             std::vector<Sexy::Point,std::allocator<Sexy::Point>>::at
                       ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,(long)iVar4);
    *(undefined8 *)param_1 = *puVar8;
    while (cVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1), cVar3 != '\0') {
      do {
        iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar4 = PlantFramework::Rand(param_2,iVar4);
        iVar5 = BoardConstants::NUMBER_OF_ROWS();
        iVar5 = PlantFramework::Rand(param_2,iVar5);
        Sexy::Point::Point((Point *)&local_28,iVar4,iVar5);
        *(ulong *)param_1 = local_28;
        lVar7 = FUN_03bd9c2c(local_28 & 0xffffffff,local_28 >> 0x20);
      } while (lVar7 != 0);
    }
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::getPFTargetLocs() */

void PlantDusklobber::getPFTargetLocs(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long in_x0;
  int *piVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  Zombie *this;
  GridItem *pGVar13;
  TRect *extraout_x1;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  *in_x8;
  int iVar14;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  Insets aIStack_40 [16];
  int local_30 [4];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar14 = 0;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(in_x8);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar5) {
    do {
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if (*(int *)(*(long *)(in_x0 + 0x10) + 0x114) <= iVar5 + -1) {
        uVar6 = operator|(2,4);
        iVar5 = iVar5 + -1;
LAB_03bdc338:
        iVar2 = iVar5 + -1;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        local_50 = 0;
        local_30[0] = iVar2;
        piVar10 = eastl::max_alt<int>((int *)&local_50,local_30);
        iVar1 = *piVar10;
        iVar7 = BoardConstants::NUMBER_OF_COLUMNS();
        iVar8 = 2;
        if (iVar7 + -1 != iVar5) {
          iVar8 = 3;
        }
        Sexy::Insets::Insets(aIStack_40,iVar1,iVar14,iVar8,1);
        BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)aIStack_40,extraout_x1);
        EntityFinder::GetEntitiesTouchingRectangle
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar6,
                   local_30,0xffffffff,0xffffffff);
        local_58 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
LAB_03bdc408:
        uVar11 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
        local_50 = (undefined4)uVar11;
        uStack_4c = (undefined4)((ulong)uVar11 >> 0x20);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50)
        ;
        do {
          if (!bVar3) {
            std::pair<int,Sexy::Point>::pair((pair<int,Sexy::Point> *)&local_50);
            local_50 = FUN_03bd43c4(local_20,local_18);
            Sexy::Point::Point((Point *)&local_58,iVar5,iVar14);
            uStack_4c = (undefined4)local_58;
            uStack_48 = (undefined4)((ulong)local_58 >> 0x20);
            std::
            multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
            ::insert<std::pair<int,Sexy::Point>&,void>
                      ((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                        *)in_x8,(pair *)&local_50);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
            iVar5 = iVar2;
            if (*(int *)(*(long *)(in_x0 + 0x10) + 0x114) <= iVar2) goto LAB_03bdc338;
            break;
          }
          puVar12 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar12);
          puVar12 = (undefined8 *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
          pGVar13 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar12);
          if (this != (Zombie *)0x0) {
            uVar11 = operator|(1,8);
            uVar9 = operator|(uVar11,4);
            cVar4 = Zombie::MatchesAny(this,uVar9,*(undefined8 *)(in_x0 + 0x10));
            if ((cVar4 != '\0') || (cVar4 = Zombie::IsTargetable(this), cVar4 == '\0'))
            goto LAB_03bdc3ec;
          }
          if ((pGVar13 != (GridItem *)0x0) &&
             ((cVar4 = RealObject::IsOnTeam(pGVar13,1), cVar4 != '\0' ||
              (cVar4 = (**(code **)(*(long *)pGVar13 + 0x200))(pGVar13), cVar4 == '\0'))))
          goto LAB_03bdc3ec;
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
          uVar11 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
          local_50 = (undefined4)uVar11;
          uStack_4c = (undefined4)((ulong)uVar11 >> 0x20);
          bVar3 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
        } while( true );
      }
      iVar14 = iVar14 + 1;
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar14 < iVar5);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_03bdc3ec:
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_50,(__normal_iterator *)&local_58);
  local_58 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                       ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,
                        CONCAT44(uStack_4c,local_50));
  goto LAB_03bdc408;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::DoSpecial(int) */

void PlantDusklobber::DoSpecial(int param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_88;
  int local_80;
  int local_7c;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_78 [8];
  undefined8 local_70;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03bd89f0(*(undefined8 *)(uVar3 + 0x10));
  iVar1 = *(int *)(lVar4 + 0x2c0);
  if (iVar1 != 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_68);
    getPFTargetLocs();
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    operator=((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)amStack_68,
              (multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)&local_38);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    ~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)&local_38);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        Sexy::Point::Point((Point *)&local_88);
        std::
        multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
        multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                  *)&local_38,amStack_68);
        getNextPFTarget((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70,
                        uVar3,(multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                               *)&local_38);
        local_88 = local_70;
        std::
        multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
        ~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                   *)&local_38);
        BoardTransforms::GridToBoardSpace((Point *)&local_88);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_38,(float)local_80,(float)local_7c,0.0);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_78);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
        launchSpecialProjectile
                  (local_38,local_34,local_30,uVar3,a_Stack_78,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78)
        ;
        *(int *)(uVar3 + 0x28) = *(int *)(uVar3 + 0x28) + 1;
      } while (iVar5 != iVar1);
    }
    Sexy::Point::Point((Point *)&local_88);
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
              *)&local_38,amStack_68);
    getNextPFTarget((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70,
                    uVar3,(multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                           *)&local_38);
    local_88 = local_70;
    std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>::
    ~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
               *)&local_38);
    BoardTransforms::GridToBoardSpace((Point *)&local_88);
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(uVar3 + 0x10));
    if (cVar2 == '\0') {
      std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
      ::~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                   *)amStack_68);
    }
    else {
      EATextSquish::Vec3::Vec3((Vec3 *)&local_38,(float)local_80,(float)local_7c,0.0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_78);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
      launchSpecialAvatarProjectile
                (local_38,local_34,local_30,uVar3,a_Stack_78,
                 (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_78);
      std::multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
      ::~multimap((multimap<int,Sexy::Point,std::less<int>,std::allocator<std::pair<int_const,Sexy::Point>>>
                   *)amStack_68);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDusklobber::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantDusklobber::Fire
          (PlantDusklobber *this,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  RtObject *pRVar9;
  ToxicWaterPerfumeBottleProjectile *this_00;
  SexyVector3 *pSVar10;
  Zombie *this_01;
  Insets *pIVar11;
  ulong uVar12;
  Projectile *pPVar13;
  Plant *pPVar14;
  RealObject *this_02;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_58 [8];
  float local_50;
  float local_4c;
  undefined4 local_48;
  int local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)this + 0x180))();
  if (cVar3 == '\0') {
    iVar7 = -1;
    pPVar13 = (Projectile *)0x0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    fVar2 = _FUN_03bdd5d4;
    do {
      bVar4 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
      if ((iVar7 != 0) <= bVar4) {
        PlantDragonBruit::getTargetInRow((int)this);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
        if (cVar3 != '\0') {
          DVec3::DVec3((DVec3 *)&local_50);
          pRVar9 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
          bVar5 = Sexy::RtObject::IsA<Zombie>(pRVar9);
          if (bVar5) {
            pRVar9 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            this_01 = Sexy::RtObject::Cast<Zombie>(pRVar9);
            pIVar11 = (Insets *)(**(code **)(*(long *)this_01 + 0x178))();
            Sexy::Insets::Insets((Insets *)&local_30,pIVar11);
            fVar16 = (float)local_28;
            fVar15 = (float)local_30;
            lVar8 = std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this_01);
            EATextSquish::Vec3::Vec3
                      ((Vec3 *)&local_40,fVar15 + fVar16 * 0.5,(float)(local_2c + local_24),
                       *(float *)(lVar8 + 8));
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
          }
          else {
            pRVar9 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            bVar5 = Sexy::RtObject::IsA<GridItem>(pRVar9);
            if (!bVar5) goto LAB_03bdd408;
            pRVar9 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
            Sexy::RtObject::Cast<GridItem>(pRVar9);
            GridItem::GetGridLocation();
            BoardTransforms::GridToBoardSpace((Point *)&local_30);
            local_50 = (float)local_40;
            local_4c = (float)local_3c;
            local_48 = 0x41c80000;
          }
          lVar8 = *(long *)(this + 0x10);
          cVar3 = FUN_03bd431c(lVar8);
          if (cVar3 == '\0') {
            *(undefined4 *)(lVar8 + 0x150) = param_4;
          }
          else {
            cVar3 = PlantShadowvanilla::IsBoosted((PlantShadowvanilla *)this);
            if (cVar3 == '\0') {
              *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 5;
            }
            else {
              std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::push_back
                        ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)&local_20,
                         (SexyVector3 *)&local_50);
            }
          }
          cVar3 = std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::empty
                            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)
                             &local_20);
          if (cVar3 != '\0') {
            pPVar14 = *(Plant **)(this + 0x10);
            iVar6 = FUN_03bd4314(pPVar14);
            if ((iVar6 == 1) || (2 < iVar6 - 2U)) {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_2);
              pPVar13 = (Projectile *)Plant::Fire(pPVar14,(Point *)&local_30,param_3,param_4);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            }
            else {
              cVar3 = isStunByPossibility(this);
              pPVar14 = *(Plant **)(this + 0x10);
              if (cVar3 != '\0') {
                *(undefined4 *)(pPVar14 + 0x150) = 4;
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_2);
                pPVar13 = (Projectile *)Plant::Fire(pPVar14,(Point *)&local_30,param_3,4);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
              }
              else {
                *(undefined4 *)(pPVar14 + 0x150) = 3;
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_2);
                pPVar13 = (Projectile *)Plant::Fire(pPVar14,(Point *)&local_30,param_3,3);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
              }
              nop();
              if (this_00 != (ToxicWaterPerfumeBottleProjectile *)0x0) {
                iVar6 = FUN_03bd4314(*(undefined8 *)(this + 0x10));
                ToxicWaterPerfumeBottleProjectile::SetType(this_00,iVar6);
                DusklobberProjectile::setIsStun((DusklobberProjectile *)this_00,cVar3 != '\0');
              }
            }
            launchProjectileAt(this,pPVar13,(SexyVector3 *)&local_50,fVar2,fVar2);
          }
        }
LAB_03bdd408:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58)
        ;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 2);
    lVar8 = FUN_03bd4398(local_20,local_18);
    if (lVar8 != 0) {
      iVar7 = PlantFramework::Rand((PlantFramework *)this,(int)lVar8);
      fVar2 = _FUN_03bdd5d4;
      uVar12 = 0;
      do {
        if (iVar7 == (int)uVar12) {
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 5;
        }
        else {
          *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = param_4;
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_2);
        pPVar13 = (Projectile *)
                  Plant::Fire(*(Plant **)(this + 0x10),(RtWeakPtr<Sexy::SoundResource> *)&local_30,
                              param_3,*(undefined4 *)(*(Plant **)(this + 0x10) + 0x150));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        uVar1 = uVar12 + 1;
        pSVar10 = (SexyVector3 *)FUN_03bd43b8(local_20,uVar12);
        launchProjectileAt(this,pPVar13,pSVar10,fVar2,fVar2);
        lVar8 = FUN_03bd4398(local_20,local_18);
        uVar12 = uVar1;
      } while (uVar1 <= lVar8 - 1U);
    }
    if (pPVar13 != (Projectile *)0x0) {
      this_02 = *(RealObject **)(this + 0x10);
      std::string::string((string *)&local_30,"Play_Pepperpult_Throw");
      RealObject::PlayPositionalSound(this_02,(string *)&local_30,0.0);
      std::string::~string((string *)&local_30);
      nop();
    }
    std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
              ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)&local_20);
  }
  else {
    (**(code **)(*(long *)this + 0xa8))(this,0);
    pPVar13 = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar13);
}

