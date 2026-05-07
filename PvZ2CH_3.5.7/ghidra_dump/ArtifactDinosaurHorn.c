// Class: ArtifactDinosaurHorn


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::StaticClassInit() */

void ArtifactDinosaurHorn::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactDinosaurHorn");
    (*pcVar2)(plVar1,asStack_10,FUN_0373242c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDinosaurHorn::StaticGetClass() */

long * ArtifactDinosaurHorn::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDinosaurHorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDinosaurHorn::GetClass() const */

long * ArtifactDinosaurHorn::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactDinosaurHorn",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactDinosaurHorn::canTriggerDinosaurTread() */

byte ArtifactDinosaurHorn::canTriggerDinosaurTread(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = PVZ1ModeUtils::IsPlayingPVZ1Level();
  bVar2 = 1;
  if (cVar1 != '\0') {
    bVar2 = PVZ1ModeUtils::IsPoolStage();
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* ArtifactDinosaurHorn::~ArtifactDinosaurHorn() */

void __thiscall ArtifactDinosaurHorn::~ArtifactDinosaurHorn(ArtifactDinosaurHorn *this)

{
  *(undefined ***)this = &PTR_GetClass_066912b0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactDinosaurHorn::~ArtifactDinosaurHorn() */

void __thiscall ArtifactDinosaurHorn::~ArtifactDinosaurHorn(ArtifactDinosaurHorn *this)

{
  ~ArtifactDinosaurHorn(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactDinosaurHorn::DoTrigger() */

void __thiscall ArtifactDinosaurHorn::DoTrigger(ArtifactDinosaurHorn *this)

{
  float fVar1;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar1 + 2.0;
  return;
}


/* ArtifactDinosaurHorn::ActivateSpeciallyOnDisplayBoard(int) */

void ArtifactDinosaurHorn::ActivateSpeciallyOnDisplayBoard(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)((ulong)(uint)param_1 + 0x4c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::spawnMusicalNoteEffect() */

void ArtifactDinosaurHorn::spawnMusicalNoteEffect(void)

{
  int iVar1;
  long in_x0;
  BoardArtifactManager *this;
  AnimateArtifactMower *this_00;
  RtObject *this_01;
  ArtifactDinosaurHornProperties *pAVar2;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  string asStack_30 [8];
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
  this_00 = (AnimateArtifactMower *)BoardArtifactManager::GetAnimateArtifactMower(this);
  if ((this_00 != (AnimateArtifactMower *)0x0) &&
     (fVar5 = *(float *)(in_x0 + 0x38), fVar4 = (float)PVZ_T(), fVar5 <= fVar4)) {
    EntityComponent_GroundEffect::GetEffect();
    this_01 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    pAVar2 = Sexy::RtObject::Cast<ArtifactDinosaurHornProperties>(this_01);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    fVar5 = *(float *)(pAVar2 + 0x16c);
    fVar4 = *(float *)(pAVar2 + 0x170);
    local_18 = (float)AnimateArtifactMower::GetEffectPosition(this_00);
    local_18 = fVar5 + local_18;
    local_14 = fVar4 + in_s1;
    FUN_05475d88(asStack_30,pAVar2 + 0x178);
    FUN_05475d88(asStack_28,pAVar2 + 0x180);
    this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    GetPAMByName(asStack_30);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar3,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_02,(SexyVector3 *)&local_18,-1);
    iVar1 = Board::MakeRenderOrder(0x64d48,2,0);
    FUN_03723aa0(this_02 + 0x1c,iVar1 + 1);
    Effect_PopAnim::SetCentered(this_02,true);
    Effect_PopAnim::PlaySingleAnimation(this_02,asStack_28,0);
    std::string::~string(asStack_28);
    std::string::~string(asStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::triggerDinosaurTread() */

void __thiscall ArtifactDinosaurHorn::triggerDinosaurTread(ArtifactDinosaurHorn *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_DinoFootShadow_For_Artifact_Dinosaur_horn *this_00;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  Vec3 aVStack_18 [4];
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::Rand(3);
  iVar3 = Sexy::Rand(3);
  cVar1 = FUN_03723bbc(this[0x3e]);
  if (cVar1 == '\0') {
    iVar2 = iVar2 + 5;
    iVar3 = iVar3 + 1;
  }
  else {
    iVar3 = 1;
    iVar2 = Sexy::Rand(3);
    iVar2 = iVar2 + 3;
  }
  this_00 = Board::AddEffect<Effect_DinoFootShadow_For_Artifact_Dinosaur_horn>
                      (*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point((Point *)&local_28,iVar2,iVar3);
  iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(local_24);
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,(float)iVar3,0.0);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,0.0,local_14);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)&local_20,1000000);
  iVar3 = BoardTransforms::GridToBoardSpaceXUnbounded(local_28);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_20,(float)iVar3,local_14);
  Effect_DinoFootShadow::SetMoveEndPos(local_20,local_1c,this_00);
  Effect_DinoFootShadow::StartMove((Effect_DinoFootShadow *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactDinosaurHorn::ArtifactDinosaurHorn() */

void __thiscall ArtifactDinosaurHorn::ArtifactDinosaurHorn(ArtifactDinosaurHorn *this)

{
  undefined4 uVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066912b0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x4c) = uVar1;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = uVar1;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}


/* ArtifactDinosaurHorn::StaticNew() */

ArtifactDinosaurHorn * ArtifactDinosaurHorn::StaticNew(void)

{
  ArtifactDinosaurHorn *this;
  
  this = ::operator_new(0x78);
  ArtifactDinosaurHorn(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::showDinoRunAdvice() */

void ArtifactDinosaurHorn::showDinoRunAdvice(void)

{
  char *pcVar1;
  Board *pBVar2;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"[WARNING_DINO_RUN]");
  Sexy::ToWString(asStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,1);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Necromancy");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Plant_DragonRoar_PlantFood_Roar");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::showDinoTreadAdvice() */

void ArtifactDinosaurHorn::showDinoTreadAdvice(void)

{
  char *pcVar1;
  Board *pBVar2;
  string asStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ClearAdviceImmediately(*(Board **)(gLawnApp + 0x9f0));
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"[WARNING_DINO_TREAD]");
  Sexy::ToWString(asStack_18);
  Board::DisplayAdviceAgain(pBVar2,auStack_10,0x11,1);
  FUN_05476c50(auStack_10);
  std::string::~string(asStack_18);
  nop();
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Necromancy");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_Zomb_Zomboss_Dino_FS");
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),10,-5,1.25);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::triggerDinosaurRun() */

void __thiscall ArtifactDinosaurHorn::triggerDinosaurRun(ArtifactDinosaurHorn *this)

{
  int iVar1;
  int iVar2;
  long extraout_x0;
  Effect_DinoRun_For_Artifact_Dinosaur_horn *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  this_00 = Board::AddEffect<Effect_DinoRun_For_Artifact_Dinosaur_horn>
                      (*(Board **)(gLawnApp + 0x9f0));
  Sexy::FastCurve::SetOutRange((FastCurve *)aRStack_20,(float)(iVar1 * iVar2 + 200),300.0);
  StandaloneEffect::SetScreenSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector2 *)aRStack_20,1000000);
  std::
  vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
  ::vector((vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
            *)aRStack_20,(vector *)(extraout_x0 + 0x150));
  Effect_DinoRun_For_Artifact_Dinosaur_horn::spawnDinos
            (this_00,aRStack_20,*(undefined4 *)(this + 0x58));
  std::
  vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
  ::~vector((vector<ArtifactDinosaurHornProperties::TypeToSpawnDes,std::allocator<ArtifactDinosaurHornProperties::TypeToSpawnDes>>
             *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::Update() */

void __thiscall ArtifactDinosaurHorn::Update(ArtifactDinosaurHorn *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ArtifactDinosaurHornProperties *pAVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x40) < fVar4) {
      uVar5 = PVZ_EOT();
      *(undefined4 *)(this + 0x40) = uVar5;
      triggerDinosaurRun(this);
    }
    iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
    if (((2 < iVar2) && (*(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x60), iVar2 != 3))
       && (cVar1 = canTriggerDinosaurTread(), cVar1 != '\0')) {
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x4c) < fVar4) {
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x4c) = fVar4 + *(float *)(this + 100);
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x44) = fVar4 + 2.0;
      }
      fVar4 = (float)PVZ_T();
      if (*(float *)(this + 0x44) < fVar4) {
        uVar5 = PVZ_EOT();
        *(undefined4 *)(this + 0x44) = uVar5;
        triggerDinosaurTread(this);
      }
    }
    fVar4 = (float)PVZ_T();
    if (*(float *)(this + 0x50) < fVar4) {
      fVar4 = (float)PVZ_T();
      EntityComponent_GroundEffect::GetEffect();
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      pAVar3 = Sexy::RtObject::Cast<ArtifactDinosaurHornProperties>(this_00);
      *(float *)(this + 0x50) = fVar4 + *(float *)(pAVar3 + 0x168);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      spawnMusicalNoteEffect();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactDinosaurHorn::Activate() */

void __thiscall ArtifactDinosaurHorn::Activate(ArtifactDinosaurHorn *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  RtObject *this_00;
  ArtifactDinosaurHornProperties *pAVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  iVar4 = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
    iVar4 = (int)fVar5;
  }
  fVar5 = 0.0;
  *(int *)(this + 0x58) = iVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  }
  *(float *)(this + 0x5c) = fVar5;
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar8 = 0.0;
  *(float *)(this + 0x5c) = *(float *)(this + 0x5c) + fVar5 * fVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar8 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x60) = fVar8;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x60) = *(float *)(this + 0x60) + fVar8 * fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 100) = uVar7;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar2,3,1);
  }
  *(undefined4 *)(this + 0x68) = uVar7;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar7 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar7 = ArtifactMgr::CalculateFieldValue(pAVar2,3,2);
  }
  *(undefined4 *)(this + 0x6c) = uVar7;
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x5c);
  fVar5 = (float)PVZ_T();
  *(float *)(this + 0x4c) = fVar5 + *(float *)(this + 100);
  fVar5 = (float)PVZ_T();
  EntityComponent_GroundEffect::GetEffect();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar3 = Sexy::RtObject::Cast<ArtifactDinosaurHornProperties>(this_00);
  *(float *)(this + 0x50) = fVar5 + *(float *)(pAVar3 + 0x168);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar7 = Artifact::GetBoostValue((Artifact *)this,1);
  *(undefined4 *)(this + 0x70) = uVar7;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

