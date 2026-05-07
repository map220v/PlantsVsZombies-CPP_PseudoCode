// Class: ArtifactBlackhole


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackhole::StaticClassInit() */

void ArtifactBlackhole::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactBlackhole");
    (*pcVar2)(plVar1,asStack_10,FUN_03733978,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactBlackhole::StaticGetClass() */

long * ArtifactBlackhole::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBlackhole::GetClass() const */

long * ArtifactBlackhole::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactBlackhole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactBlackhole::~ArtifactBlackhole() */

void __thiscall ArtifactBlackhole::~ArtifactBlackhole(ArtifactBlackhole *this)

{
  *(undefined ***)this = &PTR_GetClass_06691610;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactBlackhole::~ArtifactBlackhole() */

void __thiscall ArtifactBlackhole::~ArtifactBlackhole(ArtifactBlackhole *this)

{
  ~ArtifactBlackhole(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactBlackhole::ArtifactBlackhole() */

void __thiscall ArtifactBlackhole::ArtifactBlackhole(ArtifactBlackhole *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06691610;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}


/* ArtifactBlackhole::StaticNew() */

ArtifactBlackhole * ArtifactBlackhole::StaticNew(void)

{
  ArtifactBlackhole *this;
  
  this = ::operator_new(0x70);
  ArtifactBlackhole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackhole::GenerateRandomPassiveBlackhole() */

void __thiscall ArtifactBlackhole::GenerateRandomPassiveBlackhole(ArtifactBlackhole *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  RtObject *this_00;
  GridItemArtifactBlackhole *this_01;
  Board *pBVar9;
  undefined8 local_60;
  string asStack_58 [8];
  undefined8 local_50;
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_60);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_48,iVar2 + -5,0,5,5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,aIStack_48
            );
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  lVar5 = FUN_03724708(local_38,local_30);
  if (lVar5 == 0) {
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar2 = iVar2 + -5;
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 < iVar3) {
      do {
        for (iVar3 = 0; iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar3 < iVar4; iVar3 = iVar3 + 1)
        {
          Sexy::Point::Point((Point *)&local_50,iVar2,iVar3);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,(Point *)&local_50)
          ;
        }
        iVar2 = iVar2 + 1;
        iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      } while (iVar2 < iVar3);
    }
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar6,uVar7);
    puVar8 = (undefined8 *)FUN_03724780(local_20[0],0);
    local_60 = *puVar8;
  }
  else {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar6,uVar7);
    FUN_03724714(local_38,0);
    BoardEntity::CalcGridPosition();
    local_60 = local_50;
  }
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_58,"griditem_artifact_blackhole");
  lVar5 = Board::GetGridItemAt(pBVar9,asStack_58,(int)local_60,local_60._4_4_);
  if (lVar5 == 0) {
    pBVar9 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_50,"griditem_artifact_blackhole_tile");
    lVar5 = Board::GetGridItemAt(pBVar9,(string *)&local_50,(int)local_60,local_60._4_4_);
    std::string::~string((string *)&local_50);
    nop();
    std::string::~string(asStack_58);
    nop();
    if (lVar5 == 0) goto LAB_0376c940;
  }
  else {
    std::string::~string(asStack_58);
    nop();
  }
  lVar5 = FUN_03724708(local_38,local_30);
  if (lVar5 == 0) {
    puVar8 = (undefined8 *)FUN_03724780(local_20[0],1);
    local_60 = *puVar8;
  }
  else {
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_38);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar6,uVar7);
    FUN_03724714(local_38,0);
    BoardEntity::CalcGridPosition();
    local_60 = local_50;
  }
LAB_0376c940:
  pBVar9 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)&local_50,"griditem_artifact_blackhole");
  this_00 = (RtObject *)
            Board::AddGridItem(pBVar9,(string *)&local_50,(int)local_60,local_60._4_4_,1);
  this_01 = Sexy::RtObject::Cast<GridItemArtifactBlackhole>(this_00);
  std::string::~string((string *)&local_50);
  nop();
  if (this_01 != (GridItemArtifactBlackhole *)0x0) {
    FUN_03723d5c(this_01 + 0x1b4,1);
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    GridItemArtifactBlackhole::SetZombieMass
              (this_01,*(float *)(this + 0x5c),*(float *)(this + 100),*(float *)(this + 0x60),
               *(float *)(this + 0x68));
    GridItemArtifactBlackhole::SetBigZombieDamage(this_01,*(float *)(this + 0x44));
    GridItemAnimController::SetDuration((GridItemAnimController *)this_01,*(float *)(this + 0x50));
    bVar1 = (bool)Artifact::IsFieldActivated((Artifact *)this,1);
    PoolDaylightStage::ShowGuides((PoolDaylightStage *)this_01,bVar1);
    GridItemProtectorShield::SetShieldHP((GridItemProtectorShield *)this_01,0.7);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactBlackhole::UpdatePassiveBlackhole() */

void __thiscall ArtifactBlackhole::UpdatePassiveBlackhole(ArtifactBlackhole *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x54)) {
    return;
  }
  *(float *)(this + 0x54) = *(float *)(this + 0x4c) + *(float *)(this + 0x54);
  GenerateRandomPassiveBlackhole(this);
  return;
}


/* ArtifactBlackhole::Update() */

void __thiscall ArtifactBlackhole::Update(ArtifactBlackhole *this)

{
  char cVar1;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 == '\0') {
    return;
  }
  UpdatePassiveBlackhole(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackhole::DoTrigger() */

void __thiscall ArtifactBlackhole::DoTrigger(ArtifactBlackhole *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  RtObject *pRVar7;
  GridItemArtifactBlackhole *this_00;
  GridItemArtifactBlackholeTile *this_01;
  Board *pBVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x1c);
    iVar2 = *(int *)(lVar5 + 0x18);
    cVar3 = BoardTransforms::IsGridCoordinateOnBoard(iVar2,iVar1);
    if (cVar3 == '\0') {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_drop");
      goto LAB_0376f598;
    }
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"griditem_artifact_blackhole");
    lVar5 = Board::GetGridItemAt(pBVar8,asStack_10,iVar2,iVar1);
    std::string::~string(asStack_10);
    nop();
    if (lVar5 != 0) goto LAB_0376f598;
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"griditem_artifact_blackhole_tile");
    lVar5 = Board::GetGridItemAt(pBVar8,asStack_10,iVar2,iVar1);
    std::string::~string(asStack_10);
    nop();
    if (lVar5 != 0) goto LAB_0376f598;
    cVar3 = Artifact::IsFieldActivated((Artifact *)this,3);
    if (cVar3 != '\0') {
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_10,"griditem_artifact_blackhole_tile");
      pRVar7 = (RtObject *)Board::AddGridItem(pBVar8,asStack_10,iVar2,iVar1,1);
      this_01 = Sexy::RtObject::Cast<GridItemArtifactBlackholeTile>(pRVar7);
      std::string::~string(asStack_10);
      nop();
      if (this_01 != (GridItemArtifactBlackholeTile *)0x0) {
        GridItemAnimController::SetDuration
                  ((GridItemAnimController *)this_01,*(float *)(this + 0x58));
      }
    }
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"griditem_artifact_blackhole");
    pRVar7 = (RtObject *)Board::AddGridItem(pBVar8,asStack_10,iVar2,iVar1,1);
    this_00 = Sexy::RtObject::Cast<GridItemArtifactBlackhole>(pRVar7);
    std::string::~string(asStack_10);
    nop();
    if (this_00 != (GridItemArtifactBlackhole *)0x0) {
      FUN_03723d5c(this_00 + 0x1b4,0);
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      GridItemArtifactBlackhole::SetZombieMass
                (this_00,*(float *)(this + 0x5c),*(float *)(this + 100),*(float *)(this + 0x60),
                 *(float *)(this + 0x68));
      GridItemArtifactBlackhole::SetBigZombieDamage(this_00,*(float *)(this + 0x44));
      GridItemAnimController::SetDuration((GridItemAnimController *)this_00,*(float *)(this + 0x40))
      ;
      bVar4 = (bool)Artifact::IsFieldActivated((Artifact *)this,1);
      PoolDaylightStage::ShowGuides((PoolDaylightStage *)this_00,bVar4);
    }
  }
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
LAB_0376f598:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactBlackhole::Activate() */

void __thiscall ArtifactBlackhole::Activate(ArtifactBlackhole *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  fVar6 = 0.0;
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(float *)(this + 0x40) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(float *)(this + 0x44) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x4c) = fVar6;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) - fVar6 * fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(undefined4 *)(this + 0x50) = uVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(float *)(this + 0x58) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x58) = *(float *)(this + 0x58) + fVar3 * fVar4;
  if (0.0 < *(float *)(this + 0x4c)) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x54) = fVar3 + *(float *)(this + 0x4c);
  }
  else {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x54) = uVar5;
  }
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar6 = *(float *)(extraout_x0 + 0x150);
  *(float *)(this + 0x5c) = fVar6;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar4 = *(float *)(extraout_x0 + 0x158);
  *(float *)(this + 0x60) = fVar4;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) - fVar6 * fVar3;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar6 = *(float *)(extraout_x0 + 0x154);
  *(float *)(this + 100) = fVar6;
  *(float *)(this + 0x60) = *(float *)(this + 0x60) - fVar4 * fVar3;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar4 = *(float *)(extraout_x0 + 0x15c);
  *(float *)(this + 0x68) = fVar4;
  *(float *)(this + 100) = *(float *)(this + 100) - fVar6 * fVar3;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x68) = *(float *)(this + 0x68) - fVar4 * fVar3;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

