// Class: ArtifactVase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::StaticClassInit() */

void ArtifactVase::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactVase");
    (*pcVar2)(plVar1,asStack_10,FUN_03747574,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactVase::StaticGetClass() */

long * ArtifactVase::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVase::GetClass() const */

long * ArtifactVase::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVase::GetSpawnLevel() */

undefined4 __thiscall ArtifactVase::GetSpawnLevel(ArtifactVase *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_03723bb0(*(undefined4 *)(this + 0x1c));
  uVar2 = 1;
  if ((8 < iVar1 - 1U) && (uVar2 = 2, 9 < iVar1 - 10U)) {
    if (9 < iVar1 - 0x14U) {
      uVar2 = 4;
      if (iVar1 < 0x1e) {
        uVar2 = 1;
      }
      return uVar2;
    }
    uVar2 = 3;
  }
  return uVar2;
}


/* ArtifactVase::ArtifactVase() */

void __thiscall ArtifactVase::ArtifactVase(ArtifactVase *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668b3e0;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)(this + 0x40));
  return;
}


/* ArtifactVase::StaticNew() */

ArtifactVase * ArtifactVase::StaticNew(void)

{
  ArtifactVase *this;
  
  this = ::operator_new(0x78);
  ArtifactVase(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::GetRandomGrids(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&) */

void __thiscall ArtifactVase::GetRandomGrids(ArtifactVase *this,vector *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  Point aPStack_10 [8];
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar3 + 0xfc)) {
    do {
      iVar4 = 4;
      if (4 < *(int *)(lVar3 + 0xf8)) {
        do {
          while( true ) {
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            cVar2 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
            if (cVar2 == '\0') break;
            iVar1 = iVar4 + 1;
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
            lVar3 = *(long *)(gLawnApp + 0x9f0);
            iVar4 = iVar1;
            if (*(int *)(lVar3 + 0xf8) <= iVar1) goto LAB_0376c2f8;
          }
          iVar4 = iVar4 + 1;
          lVar3 = *(long *)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(lVar3 + 0xf8));
      }
LAB_0376c2f8:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar3 + 0xfc));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactVase::~ArtifactVase() */

void __thiscall ArtifactVase::~ArtifactVase(ArtifactVase *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b3e0;
  ProbabilitySet<ArtifactVaseConfigProperties>::~ProbabilitySet
            ((ProbabilitySet<ArtifactVaseConfigProperties> *)(this + 0x40));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactVase::~ArtifactVase() */

void __thiscall ArtifactVase::~ArtifactVase(ArtifactVase *this)

{
  ~ArtifactVase(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, TeamFlags, Sexy::RtWeakPtr<BoardEntity>)
    */

void ArtifactVase::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
               RtWeakPtrBase *param_10,undefined4 param_11,RtWeakPtr *param_12)

{
  bool bVar1;
  Projectile *this;
  ArtifactVaseProjectile *this_00;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_20 = SUB84(param_1,0);
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_10);
  this = (Projectile *)Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_30,param_7,param_8);
  FUN_03723aac(this + 0x24,param_11);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_12);
  if (bVar1) {
    Projectile::SetTarget(this,param_12);
  }
  this_00 = Sexy::RtObject::Cast<ArtifactVaseProjectile>((RtObject *)this);
  ArtifactVaseProjectile::Initialize(this_00,(ProbabilitySet *)(param_9 + 0x40));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::LaunchToGrid(Sexy::Point) */

void __thiscall ArtifactVase::LaunchToGrid(ArtifactVase *this,int *param_2)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  Vec3 aVStack_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(extraout_x0 + 0x150));
  if (cVar1 != '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_48,0.0,0.0,0.0);
    iVar2 = BoardTransforms::GridToBoardSpaceX(*param_2);
    local_48 = (float)iVar2;
    iVar2 = BoardTransforms::GridToBoardSpaceY(param_2[1]);
    uVar3 = 0;
    uVar4 = 0x43110000;
    local_44 = (float)iVar2;
    EATextSquish::Vec3::Vec3(aVStack_38,-10.0,0.0,145.0);
    uVar5 = *(undefined4 *)(extraout_x0 + 0x198);
    uVar6 = *(undefined4 *)(extraout_x0 + 0x19c);
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_38,1.0);
    local_24 = uVar3;
    local_20 = uVar4;
    local_18 = Sexy::SexyVector3::operator+
                         ((SexyVector3 *)(extraout_x0 + 0x158),(SexyVector3 *)&local_28);
    local_14 = uVar3;
    local_10 = uVar4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              (aRStack_58,(RtWeakPtrBase *)(extraout_x0 + 0x150));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_50);
    launchProjectile(local_18,local_14,local_10,local_48,local_44,local_40,uVar5,uVar6,this,
                     aRStack_58,1,a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::LaunchVases(bool) */

void __thiscall ArtifactVase::LaunchVases(ArtifactVase *this,bool param_1)

{
  bool bVar1;
  long extraout_x0;
  undefined8 uVar2;
  undefined8 uVar3;
  TPoint *pTVar4;
  int iVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = 1;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  GetRandomGrids(this,(vector *)aRStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)aRStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)aRStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  Sexy::Rand(1.0);
  if (!param_1) {
    iVar6 = *(int *)(extraout_x0 + 0x1a0);
  }
  iVar5 = 0;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    iVar5 = iVar5 + 1;
    pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::Point::Point(aPStack_28,pTVar4);
    LaunchToGrid(this,aPStack_28);
    if (iVar6 == iVar5) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactVase::DoTrigger() */

void __thiscall ArtifactVase::DoTrigger(ArtifactVase *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  LaunchVases(this,false);
  return;
}


/* ArtifactVase::Update() */

void __thiscall ArtifactVase::Update(ArtifactVase *this)

{
  char cVar1;
  float fVar2;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (((cVar1 != '\0') && (0.0 < *(float *)(this + 0x74))) &&
     (fVar2 = (float)PVZ_T(), *(float *)(this + 0x70) <= fVar2)) {
    LaunchVases(this,true);
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x70) = fVar2 + *(float *)(this + 0x74);
    return;
  }
  return;
}


/* ArtifactVase::SetBucket(ProbabilitySet<ArtifactVaseConfigProperties> const&) */

void __thiscall ArtifactVase::SetBucket(ArtifactVase *this,ProbabilitySet *param_1)

{
  ProbabilitySet<ArtifactVaseConfigProperties>::operator=
            ((ProbabilitySet<ArtifactVaseConfigProperties> *)(this + 0x40),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::EnsureResourceGroupsLoaded() */

void ArtifactVase::EnsureResourceGroupsLoaded(void)

{
  bool bVar1;
  long extraout_x0;
  long lVar2;
  long lVar3;
  string *psVar4;
  ZombieType *pZVar5;
  int iVar6;
  Board *pBVar7;
  undefined8 local_20;
  undefined8 local_18;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::EnsureResourceGroupsLoaded();
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0x168));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0x168));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1) {
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar3 = FUN_05474184();
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar2 + 8);
      if (iVar6 == 0) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupForGameplay(pBVar7,(string *)(lVar3 + 0x10));
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupsForGameplay(pBVar7,(vector *)(lVar3 + 0x80));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        lVar3 = FUN_05474184(lVar2);
        if (lVar3 == 0) goto LAB_03775b60;
        iVar6 = *(int *)(lVar2 + 8);
      }
      if (iVar6 == 1) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        pZVar5 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        ZombieType::EnsureResourceGroupsLoaded(pZVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
LAB_03775b60:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(extraout_x0 + 0x180));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(extraout_x0 + 0x180));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,(__normal_iterator *)&local_18);
    if (!bVar1) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    lVar3 = FUN_05474184();
    if (lVar3 != 0) {
      iVar6 = *(int *)(lVar2 + 8);
      if (iVar6 == 0) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupForGameplay(pBVar7,(string *)(lVar3 + 0x10));
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        Board::LoadResourceGroupsForGameplay(pBVar7,(vector *)(lVar3 + 0x80));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        lVar3 = FUN_05474184(lVar2);
        if (lVar3 == 0) goto LAB_03775c4c;
        iVar6 = *(int *)(lVar2 + 8);
      }
      if (iVar6 == 1) {
        psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
        ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar4);
        pZVar5 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
        ZombieType::EnsureResourceGroupsLoaded(pZVar5);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
    }
LAB_03775c4c:
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_20);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVase::InitConfigs() */

void __thiscall ArtifactVase::InitConfigs(ArtifactVase *this)

{
  vector *pvVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long extraout_x0;
  ZombossRobotSpawnZombieInfo *pZVar6;
  undefined8 local_78;
  undefined8 local_70;
  vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>> avStack_68 [24];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_50 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)aRStack_38);
  cVar3 = Artifact::IsFieldActivated((Artifact *)this,3);
  pvVar1 = (vector *)(extraout_x0 + 0x168);
  if (cVar3 != '\0') {
    pvVar1 = (vector *)(extraout_x0 + 0x180);
  }
  std::vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>>::vector
            (avStack_68,pvVar1);
  local_78 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_68);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_68);
  do {
    bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
    if (!bVar4) {
      SetBucket(this,(ProbabilitySet *)aRStack_38);
      std::vector<ArtifactVaseConfigProperties,std::allocator<ArtifactVaseConfigProperties>>::
      ~vector(avStack_68);
      ProbabilitySet<ArtifactVaseConfigProperties>::~ProbabilitySet
                ((ProbabilitySet<ArtifactVaseConfigProperties> *)aRStack_38);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pZVar6 = (ZombossRobotSpawnZombieInfo *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    iVar2 = *(int *)(pZVar6 + 8);
    if (iVar2 == 0) {
      uVar5 = GetSpawnLevel(this);
      *(undefined4 *)(pZVar6 + 0x10) = uVar5;
LAB_03792870:
      ZombossRobotSpawnZombieInfo::ZombossRobotSpawnZombieInfo
                ((ZombossRobotSpawnZombieInfo *)apStack_50,pZVar6);
      ProbabilitySet<ArtifactVaseConfigProperties>::AddItem
                ((ProbabilitySet<ArtifactVaseConfigProperties> *)aRStack_38,apStack_50,
                 *(undefined4 *)(pZVar6 + 0xc));
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_50);
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) goto LAB_03792870;
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_78);
  } while( true );
}


/* ArtifactVase::Activate() */

void __thiscall ArtifactVase::Activate(ArtifactVase *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x30) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x74) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x74) = *(float *)(this + 0x74) - fVar3 * fVar4;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x70) = fVar3 + *(float *)(this + 0x74);
  InitConfigs(this);
  return;
}


/* ArtifactVase::onPostLoad() */

void __thiscall ArtifactVase::onPostLoad(ArtifactVase *this)

{
  Artifact::onPostLoad((Artifact *)this);
  InitConfigs(this);
  return;
}

