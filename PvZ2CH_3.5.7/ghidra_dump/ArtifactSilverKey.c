// Class: ArtifactSilverKey


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::StaticClassInit() */

void ArtifactSilverKey::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSilverKey");
    (*pcVar2)(plVar1,asStack_10,FUN_03736ee8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSilverKey::StaticGetClass() */

long * ArtifactSilverKey::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSilverKey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSilverKey::GetClass() const */

long * ArtifactSilverKey::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSilverKey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSilverKey::~ArtifactSilverKey() */

void __thiscall ArtifactSilverKey::~ArtifactSilverKey(ArtifactSilverKey *this)

{
  *(undefined ***)this = &PTR_GetClass_06693420;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSilverKey::~ArtifactSilverKey() */

void __thiscall ArtifactSilverKey::~ArtifactSilverKey(ArtifactSilverKey *this)

{
  ~ArtifactSilverKey(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::GenerateTentacle(int, int, Sexy::RtWeakPtr<Zombie>) */

void __thiscall
ArtifactSilverKey::GenerateTentacle
          (undefined8 param_1_00,int param_1,int param_2,RtMixedPtrBase *param_4)

{
  char cVar1;
  RtObject *this;
  GridItemCthulhuActiniaTentacleArtifact *pGVar2;
  Board *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"griditem_cthulhuactinia_tentacle_artifact");
  this = (RtObject *)Board::AddGridItem(this_00,asStack_10,param_1,param_2,1);
  pGVar2 = Sexy::RtObject::Cast<GridItemCthulhuActiniaTentacleArtifact>(this);
  std::string::~string(asStack_10);
  nop();
  if ((pGVar2 != (GridItemCthulhuActiniaTentacleArtifact *)0x0) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid(param_4), cVar1 != '\0')) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)param_4);
    GridItemCthulhuActiniaTentacle::SetTargetZombie
              ((GridItemCthulhuActiniaTentacle *)pGVar2,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSilverKey::ArtifactSilverKey() */

void __thiscall ArtifactSilverKey::ArtifactSilverKey(ArtifactSilverKey *this)

{
  undefined4 uVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06693420;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x48) = 3;
  *(undefined4 *)(this + 0x50) = 6;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x4c) = 0x40466666;
  return;
}


/* ArtifactSilverKey::StaticNew() */

ArtifactSilverKey * ArtifactSilverKey::StaticNew(void)

{
  ArtifactSilverKey *this;
  
  this = ::operator_new(0x58);
  ArtifactSilverKey(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::IsZombieBlacklisted(Sexy::RtWeakPtr<Zombie>, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
ArtifactSilverKey::IsZombieBlacklisted(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_037450a8(*param_3);
  uVar3 = FUN_037450f8(param_3[1]);
  local_18 = FUN_037667fc(uVar2,uVar3,param_2);
  local_10 = FUN_037450f8(param_3[1]);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::IsAbsorbTarget(Sexy::RtWeakPtr<Zombie> const&) */

void __thiscall ArtifactSilverKey::IsAbsorbTarget(ArtifactSilverKey *this,RtWeakPtr *param_1)

{
  char cVar1;
  byte bVar2;
  GameObject *this_00;
  undefined8 uVar3;
  long *plVar4;
  Zombie *pZVar5;
  long lVar6;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  BoardEntity::CalcGridPosition();
  this_00 = (GameObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = GameObject::IsDestroyed(this_00);
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    cVar1 = RealObject::IsOnTeam(uVar3,2);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
      cVar1 = Creature::IsOnBoard();
      if (cVar1 != '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
        cVar1 = (**(code **)(*plVar4 + 0x328))();
        if (cVar1 == '\0') {
          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
          cVar1 = (**(code **)(*plVar4 + 0x330))();
          if (cVar1 == '\0') {
            pZVar5 = (Zombie *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
            cVar1 = Zombie::HasHead(pZVar5);
            if (cVar1 != '\0') {
              pZVar5 = (Zombie *)
                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
              cVar1 = Zombie::IsControlled(pZVar5);
              if (cVar1 == '\0') {
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                cVar1 = FUN_0373c80c(*(undefined4 *)(lVar6 + 0xcc));
                if (cVar1 == '\0') {
                  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                  cVar1 = Zombie::HasCondition(uVar3,0x2e);
                  if (cVar1 == '\0') {
                    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                    cVar1 = Zombie::HasCondition(uVar3,0x5a);
                    if (cVar1 == '\0') {
                      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                (aRStack_10,(RtWeakPtrBase *)param_1);
                      EntityComponent_GroundEffect::GetEffect();
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
                      nop();
                      cVar1 = IsZombieBlacklisted(this,aRStack_10,extraout_x0 + 0x150);
                      bVar2 = 0;
                      if (cVar1 == '\0') {
                        pZVar5 = (Zombie *)
                                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                        cVar1 = Zombie::IsOnBoardOrClose(pZVar5,1);
                        if (cVar1 != '\0') {
                          plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                     ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                          cVar1 = (**(code **)(*plVar4 + 0x338))();
                          if (cVar1 == '\0') {
                            pZVar5 = (Zombie *)
                                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                               ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                            cVar1 = Zombie::HasFogImmune(pZVar5);
                            if (cVar1 == '\0') {
                              pZVar5 = (Zombie *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                 ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                              cVar1 = Zombie::IsBerserk(pZVar5);
                              if (cVar1 == '\0') {
                                plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                           ((RtWeakPtr<Sexy::ResourceInfo> *)param_1
                                                           );
                                cVar1 = (**(code **)(*plVar4 + 0x4d8))();
                                if (cVar1 == '\0') {
                                  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                             ((RtWeakPtr<Sexy::ResourceInfo> *)
                                                              param_1);
                                  cVar1 = (**(code **)(*plVar4 + 0x508))();
                                  if (cVar1 == '\0') {
                                    pZVar5 = (Zombie *)
                                             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                       ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                    cVar1 = Zombie::CanTakeFatalDamage(pZVar5);
                                    if (cVar1 != '\0') {
                                      pZVar5 = (Zombie *)
                                               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                                         ((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
                                      bVar2 = Zombie::IsParkourJumping(pZVar5);
                                      bVar2 = bVar2 ^ 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
                      goto LAB_03766914;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_03766914:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::DoTrigger() */

void __thiscall ArtifactSilverKey::DoTrigger(ArtifactSilverKey *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  RtObject *this_00;
  GridItemArtifactSilverkeyGate *this_01;
  long extraout_x0;
  long extraout_x0_00;
  char *pcVar6;
  Board *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [24];
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
    }
    else {
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_20,"artifact_silverkey_gate");
      this_00 = (RtObject *)Board::AddGridItem(this_02,asStack_20,iVar2,iVar1,1);
      this_01 = Sexy::RtObject::Cast<GridItemArtifactSilverkeyGate>(this_00);
      std::string::~string(asStack_20);
      nop();
      if (this_01 != (GridItemArtifactSilverkeyGate *)0x0) {
        GridItemArtifactSilverkeyGate::SetAbsorbRadius(this_01,*(float *)(this + 0x4c));
        GridItemZombiePortal::setSpawnZombiesNum
                  ((GridItemZombiePortal *)this_01,*(int *)(this + 0x50));
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        nop();
        std::vector<int,std::allocator<int>>::vector
                  ((vector<int,std::allocator<int>> *)asStack_20,(vector *)(extraout_x0 + 0x168));
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        nop();
        GridItemArtifactSilverkeyGate::SetSpawnGargantuarLevelConditions
                  (this_01,asStack_20,*(undefined4 *)(extraout_x0_00 + 0x180));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        bVar4 = (bool)Artifact::IsFieldActivated((Artifact *)this,3);
        GridItemArtifactSilverkeyGate::SetPassiveField3Enable(this_01,bVar4);
      }
      ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::AutoClick(int) */

void ArtifactSilverKey::AutoClick(int param_1)

{
  char cVar1;
  bool bVar2;
  Artifact *pAVar3;
  long lVar4;
  RtObject *this;
  GridItemArtifactSilverkeyGate *this_00;
  long extraout_x0;
  long extraout_x0_00;
  char *pcVar5;
  Board *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [24];
  long local_8;
  
  pAVar3 = (Artifact *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if ((pAVar3[0x3f] == (Artifact)0x0) &&
     (lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr(), lVar4 != 0)) {
    cVar1 = BoardTransforms::IsGridCoordinateOnBoard(1,1);
    if (cVar1 == '\0') {
      pcVar5 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar5,"Play_drop");
    }
    else {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_20,"artifact_silverkey_gate");
      this = (RtObject *)Board::AddGridItem(this_01,asStack_20,1,1,1);
      this_00 = Sexy::RtObject::Cast<GridItemArtifactSilverkeyGate>(this);
      std::string::~string(asStack_20);
      nop();
      if (this_00 != (GridItemArtifactSilverkeyGate *)0x0) {
        GridItemArtifactSilverkeyGate::SetAbsorbRadius(this_00,*(float *)(pAVar3 + 0x4c));
        GridItemZombiePortal::setSpawnZombiesNum
                  ((GridItemZombiePortal *)this_00,*(int *)(pAVar3 + 0x50));
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        nop();
        std::vector<int,std::allocator<int>>::vector
                  ((vector<int,std::allocator<int>> *)asStack_20,(vector *)(extraout_x0 + 0x168));
        EntityComponent_GroundEffect::GetEffect();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
        nop();
        GridItemArtifactSilverkeyGate::SetSpawnGargantuarLevelConditions
                  (this_00,asStack_20,*(undefined4 *)(extraout_x0_00 + 0x180));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_20)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        bVar2 = (bool)Artifact::IsFieldActivated(pAVar3,3);
        GridItemArtifactSilverkeyGate::SetPassiveField3Enable(this_00,bVar2);
      }
      pAVar3[0x3f] = (Artifact)0x1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::Activate() */

void __thiscall ArtifactSilverKey::Activate(ArtifactSilverKey *this)

{
  LawnApp *pLVar1;
  char cVar2;
  CthulhuSubSystem *pCVar3;
  ArtifactMgr *pAVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
    fVar6 = fVar6 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,1,0);
    fVar6 = fVar6 * 0.01;
  }
  *(float *)(this + 0x30) = fVar6;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar6 = 0.0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,2,0);
  }
  *(float *)(this + 0x40) = fVar6;
  fVar7 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) - fVar6 * fVar7;
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar2 != '\0') {
    fVar6 = (float)PVZ_T();
    *(float *)(this + 0x44) = fVar6 + *(float *)(this + 0x40);
  }
  cVar2 = Artifact::IsFieldActivated((Artifact *)this,2);
  iVar5 = 0;
  if (cVar2 != '\0') {
    pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,2,1);
    iVar5 = (int)fVar6;
  }
  *(int *)(this + 0x48) = iVar5;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantCthulhuActinia");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"PlantShrinkingViolet");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  cVar2 = (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0x328))(*(long **)(gLawnApp + 0x9f0));
  if (cVar2 == '\0') {
    pCVar3 = Board::GetGameSubSystem<CthulhuSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_10,"cthulhueyeball");
    CthulhuSubSystem::InitButton((CthulhuSubSystem *)0x3f800000,pCVar3,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar8 = ArtifactMgr::CalculateFieldValue(pAVar4,0,0);
  *(undefined4 *)(this + 0x4c) = uVar8;
  pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar6 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,1);
  *(int *)(this + 0x50) = (int)fVar6;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSilverKey::SpawnTentacle() */

void __thiscall ArtifactSilverKey::SpawnTentacle(ArtifactSilverKey *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  SilverkeyTentacleShadow *pSVar8;
  Point *extraout_x1;
  ulong uVar9;
  undefined8 local_68;
  undefined8 local_60;
  RtWeakPtr<Sexy::ResourceInfo> local_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntities(avStack_20,2);
  cVar2 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar2 == '\0') {
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      nop();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)&local_48);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
      cVar2 = IsAbsorbTarget(this,(RtWeakPtr *)aRStack_50);
      if (cVar2 != '\0') {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38,(Zombie **)local_58);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
    cVar2 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                      ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38);
    if (cVar2 == '\0') {
      uVar5 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)&local_38);
      uVar6 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_38);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
                (uVar5,uVar6);
      uVar5 = local_38;
      uVar7 = FUN_037247c8(local_38,local_30);
      uVar9 = 0;
      while (uVar9 < uVar7) {
        if ((int)uVar9 < *(int *)(this + 0x48)) {
          FUN_037247d4(uVar5,uVar9);
          BoardEntity::CalcGridPosition();
          pSVar8 = GameObject::Create<SilverkeyTentacleShadow>();
          DVec3::DVec3((DVec3 *)&local_48);
          Sexy::Point::Point((Point *)aRStack_50,0,2);
          BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aRStack_50,extraout_x1);
          iVar1 = (int)local_60;
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_48 = (float)(iVar1 - iVar4);
          local_44 = (float)local_60._4_4_;
          local_40 = 0;
          (**(code **)(*(long *)pSVar8 + 0x78))(pSVar8,(DVec3 *)&local_48);
          FUN_037247d4(local_38,uVar9);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)local_58);
          SilverkeyTentacleShadow::SetTarget(pSVar8,(Point *)aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(local_58);
          uVar5 = local_38;
          uVar7 = FUN_037247c8(local_38,local_30);
          uVar9 = uVar9 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
        }
      }
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)&local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSilverKey::Update() */

void __thiscall ArtifactSilverKey::Update(ArtifactSilverKey *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x44) < fVar1) {
    SpawnTentacle(this);
    fVar1 = (float)PVZ_T();
    *(float *)(this + 0x44) = fVar1 + *(float *)(this + 0x40);
  }
  return;
}

