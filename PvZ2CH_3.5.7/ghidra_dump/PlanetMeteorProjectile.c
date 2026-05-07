// Class: PlanetMeteorProjectile


/* PlanetMeteorProjectile::onInitialized() */

void __thiscall PlanetMeteorProjectile::onInitialized(PlanetMeteorProjectile *this)

{
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0xffffffff;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::StaticClassInit() */

void PlanetMeteorProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlanetMeteorProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4d2dc,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlanetMeteorProjectile::StaticGetClass() */

long * PlanetMeteorProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlanetMeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlanetMeteorProjectile::GetClass() const */

long * PlanetMeteorProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlanetMeteorProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlanetMeteorProjectile::isInvalidRegion(Sexy::SexyVector3 const&) */

undefined1 __thiscall
PlanetMeteorProjectile::isInvalidRegion(PlanetMeteorProjectile *this,SexyVector3 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_1);
  if (((cVar1 != '\0') ||
      (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_1), cVar1 != '\0')) ||
     (cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_1), uVar2 = 0, cVar1 != '\0'))
  {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::SetEndCol(int) */

void __thiscall PlanetMeteorProjectile::SetEndCol(PlanetMeteorProjectile *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int local_14 [2];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14[0] = param_1;
  local_c = BoardConstants::NUMBER_OF_COLUMNS();
  local_c = local_c + -1;
  piVar2 = eastl::min_alt<int>(local_14,&local_c);
  lVar1 = ___stack_chk_guard;
  *(int *)(this + 0x1cc) = *piVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::canPushZombie(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall
PlanetMeteorProjectile::canPushZombie(undefined8 param_1,RtMixedPtr<Sexy::Image> *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  RtObject *this;
  Zombie *pZVar4;
  long *plVar5;
  long lVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(param_2);
  if (cVar1 == '\0') {
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    bVar2 = Sexy::RtObject::IsA<Zombie>(this);
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      pZVar4 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      iVar3 = Zombie::GetSizeType(pZVar4);
      bVar2 = false;
      if (iVar3 != 2) {
        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
        cVar1 = (**(code **)(*plVar5 + 0x328))();
        if (cVar1 == '\0') {
          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          cVar1 = (**(code **)(*plVar5 + 0x330))();
          if (cVar1 == '\0') {
            pZVar4 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
            cVar1 = Zombie::IsInvisible(pZVar4);
            if (cVar1 == '\0') {
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
              cVar1 = FUN_04d49eb0(*(undefined4 *)(lVar6 + 0x28));
              bVar2 = cVar1 == '\0';
            }
          }
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      goto LAB_04d4a3c0;
    }
  }
  bVar2 = false;
LAB_04d4a3c0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* PlanetMeteorProjectile::PlanetMeteorProjectile() */

void __thiscall PlanetMeteorProjectile::PlanetMeteorProjectile(PlanetMeteorProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b1c40;
  *(undefined ***)(this + 0x10) = &PTR__PlanetMeteorProjectile_069b1e30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* PlanetMeteorProjectile::StaticNew() */

PlanetMeteorProjectile * PlanetMeteorProjectile::StaticNew(void)

{
  PlanetMeteorProjectile *this;
  
  this = ::operator_new(0x1d0);
  PlanetMeteorProjectile(this);
  return this;
}


/* PlanetMeteorProjectile::canPlaceMoltenPool(Sexy::Point) */

byte __thiscall PlanetMeteorProjectile::canPlaceMoltenPool(undefined8 param_1,Point *param_2)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_04d4bc4c(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4));
  if (((lVar3 == 0) &&
      (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),param_2), cVar1 == '\0')) &&
     (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),param_2), cVar1 == '\0')) {
    bVar2 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),param_2);
    return bVar2 ^ 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::createMoltenPool() */

void __thiscall PlanetMeteorProjectile::createMoltenPool(PlanetMeteorProjectile *this)

{
  char cVar1;
  undefined4 uVar2;
  RtObject *this_00;
  GridItemMoltenPool *pGVar3;
  Board *this_01;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_04d484b8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar5 = *(float *)(this + 0x1c);
  FUN_04d484b8(*(undefined4 *)(this + 0x18),fVar5,*(undefined4 *)(this + 0x20));
  BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(long)(int)fVar5,fVar4,fVar5);
  if ((local_18 != -1) && (local_14 != -1)) {
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    cVar1 = canPlaceMoltenPool(this,aPStack_10);
    if (cVar1 != '\0') {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aPStack_10,"moltenpool");
      this_00 = (RtObject *)Board::AddGridItem(this_01,(string *)aPStack_10,local_18,local_14,1);
      std::string::~string((string *)aPStack_10);
      nop();
      if (this_00 != (RtObject *)0x0) {
        uVar2 = FUN_04d48208(*(undefined4 *)(this + 0x24));
        FUN_04d4820c(this_00 + 0x24,uVar2);
        pGVar3 = Sexy::RtObject::Cast<GridItemMoltenPool>(this_00);
        if (pGVar3 != (GridItemMoltenPool *)0x0) {
          FUN_04d482f8(*(undefined4 *)(this + 0x1c4),*(undefined4 *)(this + 0x1c8),pGVar3 + 0x1ac,
                       pGVar3 + 0x1b0);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlanetMeteorProjectile::~PlanetMeteorProjectile() */

void __thiscall PlanetMeteorProjectile::~PlanetMeteorProjectile(PlanetMeteorProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b1c40;
  *(undefined ***)(this + 0x10) = &PTR__PlanetMeteorProjectile_069b1e30;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlanetMeteorProjectile::~PlanetMeteorProjectile() */

void __thiscall PlanetMeteorProjectile::~PlanetMeteorProjectile(PlanetMeteorProjectile *this)

{
  ~PlanetMeteorProjectile(this + -0x10);
  return;
}


/* PlanetMeteorProjectile::~PlanetMeteorProjectile() */

void __thiscall PlanetMeteorProjectile::~PlanetMeteorProjectile(PlanetMeteorProjectile *this)

{
  ~PlanetMeteorProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlanetMeteorProjectile::~PlanetMeteorProjectile() */

void __thiscall PlanetMeteorProjectile::~PlanetMeteorProjectile(PlanetMeteorProjectile *this)

{
  ~PlanetMeteorProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::doExplosion() */

void __thiscall PlanetMeteorProjectile::doExplosion(PlanetMeteorProjectile *this)

{
  char cVar1;
  int iVar2;
  RtWeakPtrBase *pRVar3;
  Zombie *pZVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 0x1a8);
  lVar6 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04d48374(uVar7,*(undefined8 *)(this + 0x1b0));
  if (0 < iVar2) {
    do {
      pRVar3 = (RtWeakPtrBase *)FUN_04d48380(uVar7,lVar6);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,pRVar3);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
      if (cVar1 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      else {
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Zombie::EndCondition(pZVar4,0x18);
        pZVar4 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        Zombie::SetIsControlled(pZVar4,false);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      lVar6 = lVar6 + 1;
      uVar7 = *(undefined8 *)(this + 0x1a8);
      iVar2 = FUN_04d48374(uVar7,*(undefined8 *)(this + 0x1b0));
    } while ((int)lVar6 < iVar2);
  }
  (**(code **)(*(long *)this + 0x168))(this,0);
  pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar5,"Play_General_Explo_01");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::moveThroughTime(float) */

void __thiscall PlanetMeteorProjectile::moveThroughTime(PlanetMeteorProjectile *this,float param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  SexyVector3 *pSVar5;
  RtWeakPtrBase *pRVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar13 = *(float *)pSVar5;
  ProjectileHelpers::Integrate((Projectile *)this,param_1);
  uVar9 = *(undefined8 *)(this + 0x1a8);
  fVar14 = *(float *)pSVar5;
  iVar4 = FUN_04d48374(uVar9,*(undefined8 *)(this + 0x1b0));
  uVar1 = iVar4 - 1;
  if (-1 < (int)uVar1) {
    lVar10 = (long)(int)uVar1 + -1;
    lVar2 = lVar10;
    lVar12 = (long)(int)uVar1;
    while( true ) {
      lVar11 = lVar2;
      pRVar6 = (RtWeakPtrBase *)FUN_04d48380(uVar9,lVar12);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_30,pRVar6);
      cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_30);
      if (cVar3 == '\0') {
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0x1a8));
        local_20 = __gnu_cxx::
                   __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                   ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                *)&local_28,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_20);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                   (this + 0x1a8),local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      else {
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_18._0_4_ = (float)*puVar7;
        local_10 = *(undefined4 *)(puVar7 + 1);
        local_18 = CONCAT44((int)((ulong)*puVar7 >> 0x20),(fVar14 - fVar13) + (float)local_18);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        (**(code **)(*plVar8 + 0x78))
                  (plVar8,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                           *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
      }
      if (lVar11 == lVar10 - (ulong)uVar1) break;
      uVar9 = *(undefined8 *)(this + 0x1a8);
      lVar2 = lVar11 + -1;
      lVar12 = lVar11;
    }
    fVar14 = *(float *)pSVar5;
  }
  iVar4 = BoardTransforms::BoardSpaceToGridX(fVar14);
  if ((0 < iVar4) && (*(int *)(this + 0x1c0) != iVar4)) {
    createMoltenPool(this);
    *(int *)(this + 0x1c0) = iVar4;
  }
  fVar14 = *(float *)pSVar5;
  iVar4 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x1cc));
  if (((float)iVar4 < fVar14) || (cVar3 = isInvalidRegion(this,pSVar5), cVar3 != '\0')) {
    doExplosion(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlanetMeteorProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PlanetMeteorProjectile::OnCollideEntity(PlanetMeteorProjectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  RealObject *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1);
    if (((bVar1) || (bVar1 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), bVar1)) ||
       (bVar1 = Sexy::RtObject::IsA<ZombieTowerDefendBasic>((RtObject *)param_1), bVar1)) {
      uVar3 = 0;
      goto LAB_04d4d85c;
    }
    bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar1) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      cVar2 = LawnApp::IsInModule(gLawnApp,4);
      if (cVar2 == '\0') {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0x1a8);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_20 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<Zombie>>
                             (uVar4,uVar5,aRStack_28);
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_18)
        ;
        if (bVar1) {
          pZVar6 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
          cVar2 = Zombie::IsControlled(pZVar6);
          if (cVar2 == '\0') {
            pZVar6 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            cVar2 = Zombie::CanBeLaunchedByPlants(pZVar6);
            if (cVar2 != '\0') {
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_28);
              cVar2 = canPushZombie(this,aRStack_10);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
              if (cVar2 != '\0') {
                std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::
                push_back((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *
                          )this_00,(RtWeakPtr *)aRStack_28);
                pZVar6 = (Zombie *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
                Zombie::SetIsControlled(pZVar6,true);
                uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
                Zombie::ApplyCondition((Zombie *)0x41200000,0,uVar4,0x18,1);
                Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),2,2,0.0);
                this_01 = (RealObject *)
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
                std::string::string((string *)aRStack_10,"Play_Bonk");
                RealObject::PlayPositionalSound(this_01,(string *)aRStack_10,0.0);
                std::string::~string((string *)aRStack_10);
                nop();
              }
            }
          }
        }
      }
      uVar3 = 0;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      goto LAB_04d4d85c;
    }
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
    uVar3 = 0;
    if (bVar1) goto LAB_04d4d85c;
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_04d4d85c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

