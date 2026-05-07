// Class: ArtifactMeteor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::StaticClassInit() */

void ArtifactMeteor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMeteor");
    (*pcVar2)(plVar1,asStack_10,FUN_0372b768,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMeteor::StaticGetClass() */

long * ArtifactMeteor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMeteor::GetClass() const */

long * ArtifactMeteor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMeteor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::OnNotifyMeteorCursor(int, int) */

void __thiscall ArtifactMeteor::OnNotifyMeteorCursor(ArtifactMeteor *this,int param_1,int param_2)

{
  long lVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_10,param_1,param_2);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x74) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMeteor::~ArtifactMeteor() */

void __thiscall ArtifactMeteor::~ArtifactMeteor(ArtifactMeteor *this)

{
  *(undefined ***)this = &PTR_GetClass_0668bbc0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactMeteor::~ArtifactMeteor() */

void __thiscall ArtifactMeteor::~ArtifactMeteor(ArtifactMeteor *this)

{
  ~ArtifactMeteor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, Sexy::RtWeakPtr<BoardEntity>) */

void ArtifactMeteor::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
               RtWeakPtrBase *param_10,RtWeakPtr *param_11)

{
  bool bVar1;
  Projectile *this;
  ArtifactMeteorProjectile *this_00;
  undefined8 uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_40 = SUB84(param_1,0);
  local_3c = (undefined4)param_2;
  local_38 = (undefined4)param_3;
  local_50 = param_4;
  local_4c = param_5;
  local_48 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_30,param_10);
  this = (Projectile *)
         Board::AddProjectile
                   (param_1,param_2,param_3,uVar2,(RtWeakPtr<Sexy::SoundResource> *)&local_30,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_50,param_7,param_8);
  FUN_03723aac(this + 0x24,1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_11);
  if (bVar1) {
    Projectile::SetTarget(this,param_11);
  }
  ArtifactMeteorProjectileInfo::ArtifactMeteorProjectileInfo
            ((ArtifactMeteorProjectileInfo *)&local_30);
  local_28 = *(undefined4 *)(param_9 + 0x50);
  local_2c = *(undefined4 *)(param_9 + 0x4c);
  local_1c = *(undefined4 *)(param_9 + 0x5c);
  local_18 = *(undefined4 *)(param_9 + 0x60);
  local_20 = *(undefined4 *)(param_9 + 0x58);
  local_30 = *(undefined4 *)(param_9 + 0x48);
  local_24 = *(undefined4 *)(param_9 + 0x54);
  local_14 = *(undefined4 *)(param_9 + 0x6c);
  local_10 = *(undefined4 *)(param_9 + 0x70);
  local_c = FUN_03723bb0(*(undefined4 *)(param_9 + 0x1c));
  this_00 = Sexy::RtObject::Cast<ArtifactMeteorProjectile>((RtObject *)this);
  ArtifactMeteorProjectile::SetInfo(this_00,(ArtifactMeteorProjectileInfo *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::LaunchToGrid(Sexy::Point) */

void __thiscall ArtifactMeteor::LaunchToGrid(ArtifactMeteor *this,int *param_2)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(extraout_x0 + 0x150));
  if (cVar1 != '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,0.0,0.0,0.0);
    iVar2 = BoardTransforms::GridToBoardSpaceX(*param_2);
    local_38 = (float)iVar2;
    iVar2 = BoardTransforms::GridToBoardSpaceY(param_2[1]);
    local_34 = (float)iVar2;
    DVec3::DVec3((DVec3 *)&local_28);
    fVar6 = *(float *)(extraout_x0 + 0x15c);
    uVar7 = *(undefined4 *)(extraout_x0 + 0x168);
    fVar8 = ABS(fVar6) + local_34;
    local_24 = fVar6;
    fVar3 = (float)Sexy::SexyMath::DegToRad(*(float *)(extraout_x0 + 0x164));
    fVar9 = ABS(fVar8);
    dVar4 = sin((double)fVar3);
    dVar5 = cos((double)fVar3);
    local_28 = local_38 - (float)(((double)fVar8 / dVar5) * dVar4);
    fVar3 = local_38;
    local_20 = fVar9;
    local_18 = Sexy::SexyVector3::operator*((SexyVector3 *)&local_28,1.0);
    local_14 = fVar3;
    local_10 = fVar6;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              (aRStack_48,(RtWeakPtrBase *)(extraout_x0 + 0x150));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    launchProjectile(local_18,local_14,local_10,local_38,local_34,local_30,fVar9,uVar7,this,
                     aRStack_48,a_Stack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMeteor::ArtifactMeteor() */

void __thiscall ArtifactMeteor::ArtifactMeteor(ArtifactMeteor *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668bbc0;
  Sexy::Point::Point((Point *)(this + 0x74));
  return;
}


/* ArtifactMeteor::StaticNew() */

ArtifactMeteor * ArtifactMeteor::StaticNew(void)

{
  ArtifactMeteor *this;
  
  this = ::operator_new(0x80);
  ArtifactMeteor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::IsGridValid(Sexy::Point) */

void __thiscall ArtifactMeteor::IsGridValid(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,*param_2,param_2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
        cVar2 = '\0', bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if (((pZVar4 != (Zombie *)0x0) &&
        (cVar2 = (**(code **)(*(long *)pZVar4 + 0x328))(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*(long *)pZVar4 + 0x330))(pZVar4), cVar2 == '\0')) {
      cVar2 = RealObject::IsOnTeam(pZVar4,2);
      if (cVar2 != '\0') break;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::GetRandomGrids(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&,
   Sexy::Point) */

void __thiscall
ArtifactMeteor::GetRandomGrids
          (ArtifactMeteor *this,vector<Sexy::Point,std::allocator<Sexy::Point>> *param_1,
          int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int local_18;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*param_3 == -1) || (param_3[1] == -1)) {
    iVar9 = 0;
    lVar8 = *(long *)(gLawnApp + 0x9f0);
    if (0 < *(int *)(lVar8 + 0xfc)) {
      do {
        iVar7 = 4;
        if (4 < *(int *)(lVar8 + 0xf8)) {
          do {
            while( true ) {
              Sexy::Point::Point((Point *)local_10,iVar7,iVar9);
              cVar4 = IsGridValid(this,(Point *)local_10);
              if (cVar4 == '\0') break;
              iVar2 = iVar7 + 1;
              Sexy::Point::Point((Point *)local_10,iVar7,iVar9);
              std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                        (param_1,(Point *)local_10);
              lVar8 = *(long *)(gLawnApp + 0x9f0);
              iVar7 = iVar2;
              if (*(int *)(lVar8 + 0xf8) <= iVar2) goto LAB_0376c534;
            }
            iVar7 = iVar7 + 1;
            lVar8 = *(long *)(gLawnApp + 0x9f0);
          } while (iVar7 < *(int *)(lVar8 + 0xf8));
        }
LAB_0376c534:
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(lVar8 + 0xfc));
    }
  }
  else {
    iVar7 = *(int *)(this + 0x40);
    local_10[0] = 0;
    iVar3 = *param_3 - iVar7 / 2;
    iVar6 = param_3[1] - iVar7 / 2;
    local_18 = iVar3;
    local_14 = iVar6;
    piVar5 = eastl::max_alt<int>(&local_18,local_10);
    iVar2 = *piVar5;
    local_10[0] = 0;
    piVar5 = eastl::max_alt<int>(&local_14,local_10);
    iVar9 = *piVar5;
    local_10[0] = iVar7 + iVar3;
    lVar8 = *(long *)(gLawnApp + 0x9f0);
    piVar5 = eastl::min_alt<int>(local_10,(int *)(lVar8 + 0xf8));
    iVar3 = *piVar5;
    local_10[0] = iVar7 + iVar6;
    piVar5 = eastl::min_alt<int>(local_10,(int *)(lVar8 + 0xfc));
    iVar7 = *piVar5;
    if (iVar9 < iVar7) {
      do {
        iVar6 = iVar2;
        if (iVar2 < iVar3) {
          do {
            iVar1 = iVar6 + 1;
            Sexy::Point::Point((Point *)local_10,iVar6,iVar9);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      (param_1,(Point *)local_10);
            iVar6 = iVar1;
          } while (iVar1 != iVar3);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar7);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMeteor::LaunchMeteor(bool) */

void __thiscall ArtifactMeteor::LaunchMeteor(ArtifactMeteor *this,bool param_1)

{
  bool bVar1;
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
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
  if (param_1) {
    iVar6 = 1;
    Sexy::Point::Point(aPStack_28,-1,-1);
    GetRandomGrids(this,aRStack_20,aPStack_28);
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
  }
  else {
    Sexy::Point::Point(aPStack_28,(TPoint *)(this + 0x74));
    GetRandomGrids(this,aRStack_20,aPStack_28);
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
    iVar6 = *(int *)(this + 0x44);
  }
  iVar5 = 0;
  uVar2 = 0;
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar1) {
LAB_0376c670:
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)aRStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    iVar5 = iVar5 + 1;
    pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::Point::Point(aPStack_28,pTVar4);
    LaunchToGrid(this,aPStack_28);
    if (iVar6 == iVar5) {
      uVar2 = 1;
      goto LAB_0376c670;
    }
    uVar2 = 1;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* ArtifactMeteor::DoTrigger() */

void __thiscall ArtifactMeteor::DoTrigger(ArtifactMeteor *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  LaunchMeteor(this,false);
  return;
}


/* ArtifactMeteor::Update() */

void __thiscall ArtifactMeteor::Update(ArtifactMeteor *this)

{
  char cVar1;
  float fVar2;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if ((((cVar1 != '\0') && (0.0 < *(float *)(this + 0x68))) &&
      (fVar2 = (float)PVZ_T(), *(float *)(this + 100) <= fVar2)) &&
     (cVar1 = LaunchMeteor(this,true), cVar1 != '\0')) {
    fVar2 = (float)PVZ_T();
    *(float *)(this + 100) = fVar2 + *(float *)(this + 0x68);
  }
  return;
}


/* ArtifactMeteor::Activate() */

void __thiscall ArtifactMeteor::Activate(ArtifactMeteor *this)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  ArtifactMgr *pAVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Artifact::Activate((Artifact *)this);
  iVar5 = 0;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = FUN_03723bb0(*(undefined4 *)(this + 0x1c));
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,0);
    iVar5 = (int)fVar9;
  }
  *(int *)(this + 0x40) = iVar5;
  iVar5 = 0;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,1);
    iVar5 = (int)fVar9;
  }
  *(int *)(this + 0x44) = iVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar6 = 0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar4,0,4);
  }
  *(undefined4 *)(this + 0x48) = uVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar9 = 0.0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,3);
  }
  *(float *)(this + 0x4c) = fVar9;
  iVar5 = 0;
  fVar7 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) + fVar9 * fVar7;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,2);
    iVar5 = (int)fVar9;
  }
  *(int *)(this + 0x50) = iVar5;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar6 = 0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar4,0,5);
  }
  *(undefined4 *)(this + 0x54) = uVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar9 = 0.0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,6);
  }
  *(float *)(this + 0x58) = fVar9;
  fVar7 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  fVar8 = 0.0;
  *(float *)(this + 0x58) = *(float *)(this + 0x58) + fVar9 * fVar7;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    if (iVar3 < 0x14) {
      if (iVar3 < 10) {
        pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,7);
      }
      else {
        pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
      }
    }
    else {
      pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
      fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,1);
    }
  }
  *(float *)(this + 0x5c) = fVar8;
  fVar9 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar7 = 0.0;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar8 * fVar9;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,8);
  }
  *(float *)(this + 0x60) = fVar7;
  fVar9 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  fVar8 = 0.0;
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar7 * fVar9;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,2,0);
  }
  *(float *)(this + 0x68) = fVar8;
  fVar9 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  fVar7 = 0.0;
  *(float *)(this + 0x68) = *(float *)(this + 0x68) - fVar8 * fVar9;
  fVar9 = (float)PVZ_T();
  *(float *)(this + 100) = fVar9 + *(float *)(this + 0x68);
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,3,0);
  }
  *(float *)(this + 0x6c) = fVar7;
  fVar9 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x6c) = *(float *)(this + 0x6c) + fVar7 * fVar9;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar6 = 0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar4,3,1);
  }
  *(undefined4 *)(this + 0x70) = uVar6;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyMeteorCursor);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<ArtifactMeteor,void(ArtifactMeteor::*)(int,int)>>
            ((MessageRouter *)puVar1,Message::NotifyMeteorCursor,&local_40);
  return;
}

