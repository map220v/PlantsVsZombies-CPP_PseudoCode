// Class: ArtifactMagichat


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichat::StaticClassInit() */

void ArtifactMagichat::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMagichat");
    (*pcVar2)(plVar1,asStack_10,FUN_0373429c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagichat::StaticGetClass() */

long * ArtifactMagichat::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagichat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagichat::GetClass() const */

long * ArtifactMagichat::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagichat",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagichat::~ArtifactMagichat() */

void __thiscall ArtifactMagichat::~ArtifactMagichat(ArtifactMagichat *this)

{
  *(undefined ***)this = &PTR_GetClass_066917c0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactMagichat::~ArtifactMagichat() */

void __thiscall ArtifactMagichat::~ArtifactMagichat(ArtifactMagichat *this)

{
  ~ArtifactMagichat(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichat::SpawnEffect(Zombie*, std::string) */

void __thiscall
ArtifactMagichat::SpawnEffect
          (undefined8 param_1_00,
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *param_1,undefined8 param_3)

{
  int iVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  float *pfVar3;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ARTIFACT_MAGICHAT_SMOKE");
  nop();
  GetPAMByName(asStack_20);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(param_1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,*pfVar3,pfVar3[1] - 40.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aRStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 200))(param_1);
  FUN_03723aa0(this + 0x1c,iVar1 + 1);
  Effect_PopAnim::SetCentered(this,true);
  Effect_PopAnim::PlaySingleAnimation(this,param_3,0);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagichat::ArtifactMagichat() */

void __thiscall ArtifactMagichat::ArtifactMagichat(ArtifactMagichat *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066917c0;
  return;
}


/* ArtifactMagichat::StaticNew() */

ArtifactMagichat * ArtifactMagichat::StaticNew(void)

{
  ArtifactMagichat *this;
  
  this = ::operator_new(0x60);
  ArtifactMagichat(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichat::SummonMagicZombies(int) */

void __thiscall ArtifactMagichat::SummonMagicZombies(ArtifactMagichat *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  ZombieType *this_00;
  SexyVector3 *this_01;
  ZombieCarnieMagicianArtifact *this_02;
  Board *pBVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)&local_30,"carnie_magician_artifact");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
  std::string::~string((string *)&local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_29 = 1;
  local_30 = *(undefined4 *)(this + 0x40);
  local_2c = 0;
  local_2b = 0;
  pBVar6 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_50);
  this_01 = (SexyVector3 *)
            Board::AddZombieInRow(pBVar6,aRStack_40,param_1,0xfffffffb,(string *)&local_30,1,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  RealObject::JoinTeam((RealObject *)this_01,1);
  Zombie::SetFacing((Zombie *)this_01,1);
  iVar2 = BoardTransforms::GridToBoardSpaceX(0);
  iVar3 = BoardTransforms::GridToBoardSpaceY(param_1);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,(float)iVar2 - (float)iVar4,(float)iVar3,0.0);
  BoardEntity::PlaceOnBoard(this_01);
  this_02 = Sexy::RtObject::Cast<ZombieCarnieMagicianArtifact>((RtObject *)this_01);
  if (this_02 != (ZombieCarnieMagicianArtifact *)0x0) {
    ZombieCarnieMagicianArtifact::SetRecoveryTime(this_02,*(int *)(this + 0x4c));
    bVar1 = (bool)Artifact::IsFieldActivated((Artifact *)this,1);
    ZombieCarnieMagicianArtifact::SetEnableDove(this_02,bVar1);
    bVar1 = (bool)Artifact::IsFieldActivated((Artifact *)this,3);
    ZombieCarnieMagicianArtifact::SetPassiveField3(this_02,bVar1);
    ZombieCarnieMagicianArtifact::SetMagichatParams
              (this_02,*(float *)(this + 0x58),*(float *)(this + 0x5c));
    std::string::string(asStack_48,"idle");
    SpawnEffect(this,this_02,asStack_48);
    std::string::~string(asStack_48);
    nop();
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagichat::SummonMagicZombies() */

void __thiscall ArtifactMagichat::SummonMagicZombies(ArtifactMagichat *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = BoardConstants::NUMBER_OF_ROWS();
    if (iVar1 <= iVar2) break;
    SummonMagicZombies(this,iVar2);
    iVar2 = iVar2 + 1;
  }
  return;
}


/* ArtifactMagichat::DoTrigger() */

void __thiscall ArtifactMagichat::DoTrigger(ArtifactMagichat *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  SummonMagicZombies(this);
  return;
}


/* ArtifactMagichat::Activate() */

void __thiscall ArtifactMagichat::Activate(ArtifactMagichat *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  Artifact::Activate((Artifact *)this);
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  iVar3 = 0;
  fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  fVar4 = (float)std::ceil(fVar4);
  *(int *)(this + 0x40) = (int)fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    iVar3 = (int)fVar4;
  }
  fVar4 = 0.0;
  *(int *)(this + 0x4c) = iVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x48) = fVar4;
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) - fVar4 * fVar5;
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x44) = fVar4 + *(float *)(this + 0x48);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  iVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    iVar3 = (int)fVar4;
  }
  *(int *)(this + 0x50) = iVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  iVar3 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,2);
    iVar3 = (int)fVar4;
  }
  *(int *)(this + 0x54) = iVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar6 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  *(undefined4 *)(this + 0x58) = uVar6;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar6 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,3,1);
  }
  *(undefined4 *)(this + 0x5c) = uVar6;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagichat::UpdateSummonZombieRandom() */

void __thiscall ArtifactMagichat::UpdateSummonZombieRandom(ArtifactMagichat *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  int local_24;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar8 = (float)PVZ_T();
  if (*(float *)(this + 0x44) < fVar8) {
    *(float *)(this + 0x44) = *(float *)(this + 0x48) + *(float *)(this + 0x44);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    local_24 = 0;
    while (iVar1 = BoardConstants::NUMBER_OF_ROWS(), local_24 < iVar1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)local_20,&local_24);
      local_24 = local_24 + 1;
    }
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar2,uVar3);
    iVar1 = *(int *)(this + 0x50);
    if (0 < iVar1) {
      iVar5 = *(int *)(this + 0x54);
      lVar7 = 0;
      do {
        if (0 < iVar5) {
          iVar1 = 0;
          do {
            iVar1 = iVar1 + 1;
            piVar4 = (int *)FUN_03724788(local_20[0],lVar7);
            SummonMagicZombies(this,*piVar4);
            iVar5 = *(int *)(this + 0x54);
          } while (iVar1 < iVar5);
          iVar1 = *(int *)(this + 0x50);
        }
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 1;
      } while (iVar6 + 1 < iVar1);
    }
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagichat::Update() */

void __thiscall ArtifactMagichat::Update(ArtifactMagichat *this)

{
  char cVar1;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 == '\0') {
    return;
  }
  UpdateSummonZombieRandom(this);
  return;
}

