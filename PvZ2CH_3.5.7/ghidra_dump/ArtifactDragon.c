// Class: ArtifactDragon


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::StaticClassInit() */

void ArtifactDragon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactDragon");
    (*pcVar2)(plVar1,asStack_10,FUN_03738834,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragon::StaticGetClass() */

long * ArtifactDragon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDragon::GetClass() const */

long * ArtifactDragon::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDragon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::GetSelfPosition() */

void ArtifactDragon::GetSelfPosition(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardTransforms::GridToBoardSpaceX(-1);
  iVar5 = BoardTransforms::GridToBoardSpaceY(2);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)iVar4,(float)iVar5,0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* ArtifactDragon::~ArtifactDragon() */

void __thiscall ArtifactDragon::~ArtifactDragon(ArtifactDragon *this)

{
  *(undefined ***)this = &PTR_GetClass_066940c0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactDragon::~ArtifactDragon() */

void __thiscall ArtifactDragon::~ArtifactDragon(ArtifactDragon *this)

{
  ~ArtifactDragon(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float, float, TeamFlags, Sexy::RtWeakPtr<BoardEntity>)
    */

void ArtifactDragon::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,float param_8,undefined8 param_9,
               RtWeakPtrBase *param_10,undefined4 param_11,RtWeakPtr *param_12)

{
  bool bVar1;
  Projectile *this;
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::onNotifyWidenDragon() */

void __thiscall ArtifactDragon::onNotifyWidenDragon(ArtifactDragon *this)

{
  bool bVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + *(float *)(extraout_x0 + 0x178);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::LaunchToGrid(Sexy::Point) */

void __thiscall ArtifactDragon::LaunchToGrid(ArtifactDragon *this,int *param_2)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  float local_58;
  float local_54;
  undefined4 local_50;
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
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
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(extraout_x0 + 0x168));
  if (cVar1 != '\0') {
    EATextSquish::Vec3::Vec3((Vec3 *)&local_58,0.0,0.0,0.0);
    iVar2 = BoardTransforms::GridToBoardSpaceX(*param_2);
    local_58 = (float)iVar2;
    iVar2 = BoardTransforms::GridToBoardSpaceY(param_2[1]);
    uVar3 = 0;
    uVar4 = 0x43110000;
    local_54 = (float)iVar2;
    EATextSquish::Vec3::Vec3(aVStack_48,-10.0,0.0,145.0);
    uVar5 = *(undefined4 *)(extraout_x0 + 0x170);
    uVar6 = *(undefined4 *)(extraout_x0 + 0x174);
    local_38 = GetSelfPosition();
    local_34 = uVar3;
    local_30 = uVar4;
    local_28 = Sexy::SexyVector3::operator*((SexyVector3 *)aVStack_48,1.0);
    local_24 = uVar3;
    local_20 = uVar4;
    local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
    local_14 = uVar3;
    local_10 = uVar4;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              (aRStack_68,(RtWeakPtrBase *)(extraout_x0 + 0x168));
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    launchProjectile(local_18,local_14,local_10,local_58,local_54,local_50,uVar5,uVar6,this,
                     aRStack_68,1,a_Stack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDragon::ArtifactDragon() */

void __thiscall ArtifactDragon::ArtifactDragon(ArtifactDragon *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066940c0;
  return;
}


/* ArtifactDragon::StaticNew() */

ArtifactDragon * ArtifactDragon::StaticNew(void)

{
  ArtifactDragon *this;
  
  this = ::operator_new(0x68);
  ArtifactDragon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::CanLaunchBalls() */

void __thiscall ArtifactDragon::CanLaunchBalls(ArtifactDragon *this)

{
  bool bVar1;
  long extraout_x0;
  undefined8 *puVar2;
  uint uVar3;
  float fVar4;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_EOT();
  if (*(float *)(this + 0x44) != fVar4) {
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
    EntityFinder::GetEntitiesOnBoard(aRStack_20,4);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aRStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
         (bVar1 = Sexy::RtObject::IsA<GridItemBall>((RtObject *)*puVar2), bVar1)) {
        uVar3 = uVar3 + 1;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    uVar3 = (uint)((int)uVar3 <= *(int *)(extraout_x0 + 0x180));
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ArtifactDragon::IsGridValid(Sexy::Point) */

bool __thiscall ArtifactDragon::IsGridValid(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_03758984(*param_2,param_2[1]);
  return lVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::GetRandomGrids(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&) */

void __thiscall ArtifactDragon::GetRandomGrids(ArtifactDragon *this,vector *param_1)

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
      iVar4 = 0;
      if (0 < *(int *)(lVar3 + 0xf8)) {
        do {
          while( true ) {
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            cVar2 = IsGridValid(this,aPStack_10);
            if (cVar2 == '\0') break;
            iVar1 = iVar4 + 1;
            Sexy::Point::Point(aPStack_10,iVar4,iVar5);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
            lVar3 = *(long *)(gLawnApp + 0x9f0);
            iVar4 = iVar1;
            if (*(int *)(lVar3 + 0xf8) <= iVar1) goto LAB_0376d058;
          }
          iVar4 = iVar4 + 1;
          lVar3 = *(long *)(gLawnApp + 0x9f0);
        } while (iVar4 < *(int *)(lVar3 + 0xf8));
      }
LAB_0376d058:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar3 + 0xfc));
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::LaunchBalls(bool) */

void __thiscall ArtifactDragon::LaunchBalls(ArtifactDragon *this,bool param_1)

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
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar5 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetRandomGrids(this,(vector *)avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
            (uVar2,uVar3);
  iVar6 = 5;
  if (param_1) {
    iVar6 = 1;
  }
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    iVar5 = iVar5 + 1;
    pTVar4 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::Point::Point(aPStack_28,pTVar4);
    LaunchToGrid(this,aPStack_28);
    if (iVar5 == iVar6) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::Activate() */

void __thiscall ArtifactDragon::Activate(ArtifactDragon *this)

{
  undefined *this_00;
  char cVar1;
  long extraout_x0;
  ArtifactMgr *pAVar2;
  ArtifactDragonSubsystem *pAVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  fVar4 = (float)PVZ_EOT();
  *(float *)(this + 0x44) = fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(float *)(this + 0x48) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar5 * fVar6;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(int *)(this + 0x4c) = (int)fVar5;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  *(float *)(this + 0x40) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar5 * fVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x30) = 0;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    *(float *)(this + 0x30) = fVar5 * 0.01;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  }
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x54) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x54) = *(float *)(this + 0x54) - fVar5 * fVar6;
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar5 + *(float *)(this + 0x54);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 == '\0') {
    *(undefined4 *)(this + 0x58) = 0;
  }
  else {
    fVar5 = (float)ValueRange::GetRandomValue((ValueRange *)(extraout_x0 + 0x15c));
    *(float *)(this + 0x58) = fVar5;
    if (0.0 < fVar5) {
      fVar4 = (float)PVZ_T();
      fVar4 = fVar4 + *(float *)(this + 0x58);
    }
  }
  *(float *)(this + 0x5c) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(float *)(this + 0x60) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar4 * fVar5;
  pAVar3 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  FUN_03723c88(*(undefined4 *)(extraout_x0 + 0x17c),pAVar3 + 0x34);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyWidenDragon);
  Sexy::Delegate0::Delegate0<ArtifactDragon,void(ArtifactDragon::*)()>(aDStack_38,aRStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::NotifyWidenDragon,aDStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::GenerateUltraDragon() */

void ArtifactDragon::GenerateUltraDragon(void)

{
  long in_x0;
  long extraout_x0;
  ArtifactDragonSubsystem *pAVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  GetSelfPosition();
  local_18[0] = 0xc1200000;
  pAVar1 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactDragonSubsystem::DragonTest
            (*(undefined4 *)(extraout_x0 + 0x154),*(undefined4 *)(in_x0 + 0x48),pAVar1,
             *(undefined4 *)(in_x0 + 0x4c),(RtWeakPtr<Sexy::ResourceInfo> *)local_18,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::DoTrigger() */

void __thiscall ArtifactDragon::DoTrigger(ArtifactDragon *this)

{
  ArtifactDragonSubsystem *pAVar1;
  long extraout_x0;
  UIWidget *this_00;
  float fVar2;
  undefined4 uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  pAVar1 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactDragonSubsystem::RemoveDragon(pAVar1,0);
  GenerateUltraDragon();
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x44) = fVar2 + *(float *)(this + 0x40);
  if (0.0 < *(float *)(this + 0x58)) {
    uVar3 = ValueRange::GetRandomValue((ValueRange *)(extraout_x0 + 0x15c));
    *(undefined4 *)(this + 0x58) = uVar3;
    fVar2 = (float)PVZ_T();
    *(float *)(this + 0x5c) = fVar2 + *(float *)(this + 0x58);
  }
  std::string::string((string *)aRStack_10,"UIArtifactIcon");
  this_00 = (UIWidget *)UIWidget::GetWidgetBySheetName((string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  if (this_00 != (UIWidget *)0x0) {
    UIWidget::SetClickable(this_00,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::GenerateMinorDragon() */

void ArtifactDragon::GenerateMinorDragon(void)

{
  long in_x0;
  long extraout_x0;
  ArtifactDragonSubsystem *pAVar1;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  local_18[0] = GetSelfPosition();
  pAVar1 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  ArtifactDragonSubsystem::DragonTest
            (*(undefined4 *)(extraout_x0 + 0x154),*(undefined4 *)(in_x0 + 0x60),pAVar1,
             *(undefined4 *)(extraout_x0 + 0x158),(RtWeakPtr<Sexy::ResourceInfo> *)local_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDragon::Update() */

void __thiscall ArtifactDragon::Update(ArtifactDragon *this)

{
  char cVar1;
  ArtifactDragonSubsystem *pAVar2;
  long extraout_x0;
  float fVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    if ((0.0 < *(float *)(this + 0x54)) &&
       (fVar3 = (float)PVZ_T(), *(float *)(this + 0x50) <= fVar3)) {
      pAVar2 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactDragonSubsystem::RemoveDragon(pAVar2,1);
      GenerateMinorDragon();
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x50) = fVar3 + *(float *)(this + 0x54);
    }
    if (((0.0 < *(float *)(this + 0x58)) &&
        (fVar3 = (float)PVZ_T(), *(float *)(this + 0x5c) <= fVar3)) &&
       (cVar1 = CanLaunchBalls(this), cVar1 != '\0')) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      LaunchBalls(this,true);
      uVar4 = ValueRange::GetRandomValue((ValueRange *)(extraout_x0 + 0x15c));
      *(undefined4 *)(this + 0x58) = uVar4;
      fVar3 = (float)PVZ_T();
      *(float *)(this + 0x5c) = fVar3 + *(float *)(this + 0x58);
    }
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x44) <= fVar3) {
      pAVar2 = Board::GetGameSubSystem<ArtifactDragonSubsystem>(*(Board **)(gLawnApp + 0x9f0));
      ArtifactDragonSubsystem::DragonExit(pAVar2);
      uVar4 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar4;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

