// Class: ArtifactWeatherMonkey


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkey::StaticClassInit() */

void ArtifactWeatherMonkey::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWeatherMonkey");
    (*pcVar2)(plVar1,asStack_10,FUN_03730bc4,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkey::StaticGetClass() */

long * ArtifactWeatherMonkey::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkey::GetClass() const */

long * ArtifactWeatherMonkey::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWeatherMonkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWeatherMonkey::~ArtifactWeatherMonkey() */

void __thiscall ArtifactWeatherMonkey::~ArtifactWeatherMonkey(ArtifactWeatherMonkey *this)

{
  *(undefined ***)this = &PTR_GetClass_066901d0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactWeatherMonkey::~ArtifactWeatherMonkey() */

void __thiscall ArtifactWeatherMonkey::~ArtifactWeatherMonkey(ArtifactWeatherMonkey *this)

{
  ~ArtifactWeatherMonkey(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactWeatherMonkey::ArtifactWeatherMonkey() */

void __thiscall ArtifactWeatherMonkey::ArtifactWeatherMonkey(ArtifactWeatherMonkey *this)

{
  undefined4 uVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066901d0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* ArtifactWeatherMonkey::StaticNew() */

ArtifactWeatherMonkey * ArtifactWeatherMonkey::StaticNew(void)

{
  ArtifactWeatherMonkey *this;
  
  this = ::operator_new(0x50);
  ArtifactWeatherMonkey(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkey::SpawnWeatherMonkey() */

void __thiscall ArtifactWeatherMonkey::SpawnWeatherMonkey(ArtifactWeatherMonkey *this)

{
  int iVar1;
  undefined4 uVar2;
  RtObject *pRVar3;
  ArtifactWeatherMonkeyProperties *pAVar4;
  GridItemArtifactWeatherMonkey *pGVar5;
  int iVar6;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar4 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProperties>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  iVar1 = *(int *)(this_00 + 0xfc);
  if (0 < iVar1) {
    iVar6 = 0;
    while( true ) {
      std::string::string((string *)aRStack_10,"artifact_weathermonkey");
      pRVar3 = (RtObject *)Board::AddGridItem(this_00,(string *)aRStack_10,-1,iVar6,1);
      pGVar5 = Sexy::RtObject::Cast<GridItemArtifactWeatherMonkey>(pRVar3);
      std::string::~string((string *)aRStack_10);
      nop();
      uVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(pAVar4 + 0x158));
      GridItemArtifactWeatherMonkey::setValues(pGVar5,uVar2,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      FUN_03723c54(*(undefined4 *)(this + 0x40),pGVar5 + 0x1b8);
      Artifact::GetBoostValue((Artifact *)this,3);
      FUN_03723c5c(pGVar5 + 0x1bc);
      if (iVar6 + 1 == iVar1) break;
      this_00 = *(Board **)(gLawnApp + 0x9f0);
      iVar6 = iVar6 + 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkey::DoTrigger() */

void __thiscall ArtifactWeatherMonkey::DoTrigger(ArtifactWeatherMonkey *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  SpawnWeatherMonkey(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkey::SpawnMissile() */

void __thiscall ArtifactWeatherMonkey::SpawnMissile(ArtifactWeatherMonkey *this)

{
  Board *pBVar19;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  RtObject *pRVar5;
  ArtifactWeatherMonkeyProperties *pAVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  long lVar9;
  ArtifactWeatherMonkeyProjectileSmall *this_00;
  ulong uVar10;
  RtWeakPtr *pRVar11;
  ResourceInfo *pRVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  Insets aIStack_48 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar5 = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  pAVar6 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProperties>(pRVar5);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,(RtWeakPtrBase *)(pAVar6 + 0x160));
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardConstants::NUMBER_OF_ROWS();
  Sexy::Insets::Insets(aIStack_48,0,0,iVar3,iVar4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  EntityFinder::GetEntitiesInGridSquares(avStack_38,2,aIStack_48);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_38);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
    if ((pZVar8 != (Zombie *)0x0) &&
       (cVar1 = ArtifactWeatherMonkeyProjectileSmall::CanBeTarget((BoardEntity *)pZVar8),
       cVar1 != '\0')) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_60);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 &local_20,(RtWeakPtr *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
  }
  lVar9 = FUN_03724760(local_20,local_18);
  if (lVar9 != 0) {
    uVar14 = 0;
    EntityComponent_GroundEffect::GetEffect();
    pRVar5 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    pAVar6 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProperties>(pRVar5);
    fVar18 = *(float *)(pAVar6 + 0x168);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    fVar16 = (float)PVZ_T();
    fVar17 = (float)Artifact::GetBoostValue((Artifact *)this,6);
    *(float *)(this + 0x48) = fVar16 + fVar18 * (1.0 - fVar17);
    do {
      DVec3::DVec3((DVec3 *)&local_58);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      local_58._0_4_ = (Board *)(200.0 - (float)iVar3 * 0.5);
      iVar3 = BoardTransforms::GridToBoardSpaceY(2);
      pBVar19._4_4_ = local_50;
      pBVar19._0_4_ = (Board *)local_58;
      uVar15 = *(undefined8 *)(gLawnApp + 0x9f0);
      local_58._4_4_ = (float)iVar3;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,(RtWeakPtrBase *)aRStack_78);
      pRVar5 = (RtObject *)
               Board::AddProjectile
                         (pBVar19._0_4_,(float)iVar3,pBVar19._4_4_,uVar15,
                          (RtWeakPtr<Sexy::SoundResource> *)aRStack_60,0,0);
      this_00 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProjectileSmall>(pRVar5);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      FUN_03723aac(this_00 + 0x24,1);
      FUN_03723c74(*(undefined4 *)(this + 0x44),this_00 + 0x1d8);
      ArtifactWeatherMonkeyProjectileSmall::start(this_00);
      uVar15 = local_20;
      uVar10 = FUN_03724760(local_20,local_18);
      uVar13 = uVar14;
      if (uVar14 < uVar10) {
LAB_0377e4fc:
        pRVar11 = (RtWeakPtr *)FUN_0372469c(uVar15,uVar13);
        pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar11);
        PineconePlantfoodProjectile::SetOverrideTarget
                  ((PineconePlantfoodProjectile *)this_00,(BoardEntity *)pRVar12);
      }
      else {
        pRVar11 = (RtWeakPtr *)FUN_0372469c(uVar15,0);
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar11);
        if (bVar2) {
          uVar15 = local_20;
          uVar13 = 0;
          goto LAB_0377e4fc;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 5);
  }
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWeatherMonkey::Update() */

void __thiscall ArtifactWeatherMonkey::Update(ArtifactWeatherMonkey *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = BoardConstants::NUMBER_OF_ROWS();
    Sexy::Insets::Insets(aIStack_30,0,0,iVar2,iVar3);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    if (((2 < iVar2) && (fVar6 = *(float *)(this + 0x48), fVar5 = (float)PVZ_T(), fVar6 < fVar5)) &&
       (lVar4 = FUN_03724708(local_20,local_18), lVar4 != 0)) {
      SpawnMissile(this);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWeatherMonkey::Activate() */

void __thiscall ArtifactWeatherMonkey::Activate(ArtifactWeatherMonkey *this)

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
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(float *)(this + 0x40) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x44) = fVar3;
  return;
}

