// Class: ArtifactPrismTower


/* ArtifactPrismTower::ActivateSpeciallyOnDisplayBoard(int) */

void ArtifactPrismTower::ActivateSpeciallyOnDisplayBoard(int param_1)

{
  *(undefined4 *)((ulong)(uint)param_1 + 0x48) = *(undefined4 *)((ulong)(uint)param_1 + 0x88);
  return;
}


/* ArtifactPrismTower::onDestroy() */

void __thiscall ArtifactPrismTower::onDestroy(ArtifactPrismTower *this)

{
  if (*(long *)(this + 0x40) != 0) {
    ArtifactPrismTowerSubSystem::SetLaserState(*(long *)(this + 0x40),0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTower::StaticClassInit() */

void ArtifactPrismTower::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactPrismTower");
    (*pcVar2)(plVar1,asStack_10,FUN_0376599c,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactPrismTower::StaticGetClass() */

long * ArtifactPrismTower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactPrismTower::GetClass() const */

long * ArtifactPrismTower::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactPrismTower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactPrismTower::~ArtifactPrismTower() */

void __thiscall ArtifactPrismTower::~ArtifactPrismTower(ArtifactPrismTower *this)

{
  *(undefined ***)this = &PTR_GetClass_06691100;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactPrismTower::~ArtifactPrismTower() */

void __thiscall ArtifactPrismTower::~ArtifactPrismTower(ArtifactPrismTower *this)

{
  ~ArtifactPrismTower(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTower::DpsCalculator(BoardEntity*, float) */

void __thiscall
ArtifactPrismTower::DpsCalculator(ArtifactPrismTower *this,BoardEntity *param_1,float param_2)

{
  Zombie *this_00;
  GridItem *this_01;
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_10;
  int local_c;
  long local_8;
  
  local_10 = (int)param_2;
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
    if (this_00 != (Zombie *)0x0) {
      fVar2 = (float)FUN_03723b94(*(undefined4 *)(this_00 + 0x284));
      fVar3 = (float)FUN_03723ba0(*(undefined4 *)(this_00 + 0x2ac));
      fVar4 = (float)Zombie::GetCurrentResilienceValue(this_00);
      if (fVar4 <= 0.0) {
        fVar4 = *(float *)(this + 0x58);
        fVar6 = *(float *)(this + 0x50);
        fVar7 = *(float *)(this + 0x8c);
        local_c = (int)((1.0 - fVar6) / (fVar4 * fVar7));
        piVar1 = eastl::min_alt<int>(&local_10,&local_c);
        fVar5 = (float)*piVar1;
      }
      else {
        fVar4 = *(float *)(this + 0x58);
        fVar6 = *(float *)(this + 0x50);
        fVar7 = *(float *)(this + 0x8c);
        fVar5 = 0.0;
      }
      fVar2 = *(float *)(this + 0x54) + (fVar3 + fVar2) * fVar6 +
              ((fVar3 + fVar2) * fVar4 + *(float *)(this + 0x5c)) * fVar5 * fVar7;
      goto LAB_03740424;
    }
    if (this_01 != (GridItem *)0x0) {
      if (*(code **)(*(long *)this_01 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fVar2 = (float)GridItem::GetMaxHitpoints(this_01);
      }
      else {
        fVar2 = (float)(**(code **)(*(long *)this_01 + 0x1e0))();
      }
      fVar5 = *(float *)(this + 0x50);
      fVar4 = *(float *)(this + 0x8c);
      fVar3 = *(float *)(this + 0x58);
      local_c = (int)((1.0 - fVar5) / (fVar3 * fVar4));
      piVar1 = eastl::min_alt<int>(&local_10,&local_c);
      fVar2 = *(float *)(this + 0x54) + fVar5 * fVar2 +
              fVar4 * (float)*piVar1 * (*(float *)(this + 0x5c) + fVar3 * fVar2);
      goto LAB_03740424;
    }
  }
  fVar2 = 0.0;
LAB_03740424:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* ArtifactPrismTower::SetState(ArtifactPrismTower::State) */

void __thiscall ArtifactPrismTower::SetState(ArtifactPrismTower *this,int param_2)

{
  BoardArtifactManager *pBVar1;
  long lVar2;
  RtObject *pRVar3;
  AnimateArtifactMowerWithPrismTower *pAVar4;
  ArtifactPrismTowerSubSystem *pAVar5;
  
  if (*(int *)(this + 0x4c) != param_2) {
    if (*(long *)(this + 0x40) == 0) {
      pAVar5 = Board::GetGameSubSystem<ArtifactPrismTowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      *(ArtifactPrismTowerSubSystem **)(this + 0x40) = pAVar5;
    }
    *(int *)(this + 0x4c) = param_2;
    if (param_2 == 2) {
      ArtifactPrismTowerSubSystem::SetLaserState(*(undefined8 *)(this + 0x40),2);
      pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
      lVar2 = BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
      if (lVar2 != 0) {
        pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
        pRVar3 = (RtObject *)BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
        pAVar4 = Sexy::RtObject::Cast<AnimateArtifactMowerWithPrismTower>(pRVar3);
        if (pAVar4 != (AnimateArtifactMowerWithPrismTower *)0x0) {
          AnimateArtifactMowerWithPrismTower::PlayPrismTowerAnimation(pAVar4,0);
          return;
        }
      }
    }
    else if (param_2 == 1) {
      ArtifactPrismTowerSubSystem::SetLaserState(*(undefined8 *)(this + 0x40),0);
      pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
      lVar2 = BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
      if (lVar2 != 0) {
        pBVar1 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
        pRVar3 = (RtObject *)BoardArtifactManager::GetAnimateArtifactMower(pBVar1);
        pAVar4 = Sexy::RtObject::Cast<AnimateArtifactMowerWithPrismTower>(pRVar3);
        if (pAVar4 != (AnimateArtifactMowerWithPrismTower *)0x0) {
          AnimateArtifactMowerWithPrismTower::PlayPrismTowerAnimation(pAVar4,1);
          return;
        }
      }
    }
  }
  return;
}


/* ArtifactPrismTower::DoTrigger() */

void __thiscall ArtifactPrismTower::DoTrigger(ArtifactPrismTower *this)

{
  ArtifactPrismTowerSubSystem *pAVar1;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  if (*(long *)(this + 0x40) == 0) {
    pAVar1 = Board::GetGameSubSystem<ArtifactPrismTowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    *(ArtifactPrismTowerSubSystem **)(this + 0x40) = pAVar1;
  }
  if (*(int *)(this + 0x4c) == 1) {
    if (0.0 < *(float *)(this + 0x48)) {
      SetState(this,2);
      return;
    }
  }
  else if (*(int *)(this + 0x4c) == 2) {
    SetState(this,1);
    return;
  }
  return;
}


/* ArtifactPrismTower::Update() */

void __thiscall ArtifactPrismTower::Update(ArtifactPrismTower *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x4c) == 1) {
      fVar3 = *(float *)(this + 0x84);
      fVar2 = (float)PVZ_Dt();
      fVar2 = *(float *)(this + 0x48) + fVar3 * fVar2;
      *(float *)(this + 0x48) = fVar2;
    }
    else if (*(int *)(this + 0x4c) == 2) {
      fVar3 = *(float *)(this + 0x80);
      fVar2 = (float)PVZ_Dt();
      fVar2 = *(float *)(this + 0x48) - fVar3 * fVar2;
      *(float *)(this + 0x48) = fVar2;
    }
    else {
      fVar2 = *(float *)(this + 0x48);
    }
    if (fVar2 < 0.0) {
      *(undefined4 *)(this + 0x48) = 0;
      SetState(this,1);
      return;
    }
    if (*(float *)(this + 0x88) < fVar2) {
      *(float *)(this + 0x48) = *(float *)(this + 0x88);
    }
  }
  return;
}


/* ArtifactPrismTower::ArtifactPrismTower() */

void __thiscall ArtifactPrismTower::ArtifactPrismTower(ArtifactPrismTower *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined ***)this = &PTR_GetClass_06691100;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0x3f800000;
  return;
}


/* ArtifactPrismTower::StaticNew() */

ArtifactPrismTower * ArtifactPrismTower::StaticNew(void)

{
  ArtifactPrismTower *this;
  
  this = ::operator_new(0x90);
  ArtifactPrismTower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTower::Activate() */

void __thiscall ArtifactPrismTower::Activate(ArtifactPrismTower *this)

{
  char cVar1;
  int iVar2;
  ArtifactPrismTowerSubSystem *pAVar3;
  ArtifactMgr *pAVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  LaserShooterProps aLStack_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x34) = 0;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x50) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar8 = 0.0;
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar5 * fVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,1);
  }
  *(float *)(this + 0x54) = fVar8;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar6 = 0.0;
  *(float *)(this + 0x54) = *(float *)(this + 0x54) + fVar8 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,2);
    fVar6 = fVar6 * 0.01;
  }
  *(float *)(this + 0x58) = fVar6;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  fVar8 = 0.0;
  *(float *)(this + 0x58) = *(float *)(this + 0x58) + fVar6 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,3);
  }
  *(float *)(this + 0x5c) = fVar8;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar8 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar4,0,4);
  }
  *(undefined4 *)(this + 0x60) = uVar7;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar4,0,5);
  }
  *(undefined4 *)(this + 100) = uVar7;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar4,0,6);
  }
  *(undefined4 *)(this + 0x68) = uVar7;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,7);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x6c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
  }
  *(float *)(this + 0x70) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,7);
  fVar8 = 0.0;
  *(float *)(this + 0x70) = *(float *)(this + 0x70) + fVar5 * fVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,1);
  }
  *(float *)(this + 0x74) = fVar8;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,7);
  *(float *)(this + 0x74) = *(float *)(this + 0x74) + fVar8 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,2,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x78) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,3,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x7c) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 100);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  *(float *)(this + 0x7c) = *(float *)(this + 0x7c) + fVar5 * fVar6;
  iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
  if (1 < iVar2) {
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0x84) = *(undefined4 *)(this + 0x74);
    if (iVar2 != 2) {
      *(float *)(this + 0x8c) = *(float *)(this + 0x78) + 1.0;
    }
  }
  uVar7 = 0;
  *(undefined4 *)(this + 0x48) = 0;
  pAVar3 = Board::GetGameSubSystem<ArtifactPrismTowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactPrismTowerSubSystem **)(this + 0x40) = pAVar3;
  if (pAVar3 != (ArtifactPrismTowerSubSystem *)0x0) {
    ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps(aLStack_48);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)aLStack_48,(RtWeakPtrBase *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    local_30 = *(undefined4 *)(this + 0x6c);
    iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    if (3 < iVar2) {
      uVar7 = *(undefined4 *)(this + 0x7c);
    }
    pAVar3 = *(ArtifactPrismTowerSubSystem **)(this + 0x40);
    local_2c = uVar7;
    ArtifactPrismTowerSubSystem::LaserShooterProps::LaserShooterProps
              ((LaserShooterProps *)aRStack_28,aLStack_48);
    ArtifactPrismTowerSubSystem::SetLaserProps(pAVar3,aRStack_28);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aRStack_28);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aLStack_48);
  }
  SetState(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

