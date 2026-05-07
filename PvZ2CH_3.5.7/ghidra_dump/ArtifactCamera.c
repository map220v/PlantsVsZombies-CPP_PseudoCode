// Class: ArtifactCamera


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::StaticClassInit() */

void ArtifactCamera::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCamera");
    (*pcVar2)(plVar1,asStack_10,FUN_0373a6d8,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCamera::StaticGetClass() */

long * ArtifactCamera::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCamera",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCamera::GetClass() const */

long * ArtifactCamera::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCamera",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCamera::~ArtifactCamera() */

void __thiscall ArtifactCamera::~ArtifactCamera(ArtifactCamera *this)

{
  *(undefined ***)this = &PTR_GetClass_06695550;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactCamera::~ArtifactCamera() */

void __thiscall ArtifactCamera::~ArtifactCamera(ArtifactCamera *this)

{
  ~ArtifactCamera(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::IsInCapturePlantBlacklist(std::string const&) */

void __thiscall ArtifactCamera::IsInCapturePlantBlacklist(ArtifactCamera *this,string *param_1)

{
  undefined1 uVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)(extraout_x0 + 0x150),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::IsInThreatZombieBlacklist(std::string const&) */

void __thiscall ArtifactCamera::IsInThreatZombieBlacklist(ArtifactCamera *this,string *param_1)

{
  undefined1 uVar1;
  long extraout_x0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)(extraout_x0 + 0x178),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ArtifactCamera::CanTriggerMain() */

ulong __thiscall ArtifactCamera::CanTriggerMain(ArtifactCamera *this)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = Artifact::CanTriggerMain((Artifact *)this);
  if ((*(TextureInfo **)(this + 0x50) != (TextureInfo *)0x0) && (bVar1 != 0)) {
    uVar2 = EA::Text::GlyphCache_Memory::EndUpdate(*(TextureInfo **)(this + 0x50));
    return uVar2;
  }
  return (ulong)bVar1;
}


/* ArtifactCamera::DoTrigger() */

void __thiscall ArtifactCamera::DoTrigger(ArtifactCamera *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  if (*(long *)(this + 0x50) != 0) {
    ArtifactCameraSubSystem::Trigger();
    return;
  }
  return;
}


/* ArtifactCamera::AutoClick(int) */

void __thiscall ArtifactCamera::AutoClick(ArtifactCamera *this,int param_1)

{
  float fVar1;
  
  if (this[0x3f] == (ArtifactCamera)0x0) {
    if (param_1 == 0) {
      ArtifactCameraSubSystem::StunAllZombies(*(ArtifactCameraSubSystem **)(this + 0x50));
    }
    else if (param_1 == 2) {
      fVar1 = (float)PVZ_T();
      *(float *)(this + 0x40) = fVar1 + 5.0;
    }
    this[0x3f] = (ArtifactCamera)0x1;
  }
  return;
}


/* ArtifactCamera::onDestroy() */

void __thiscall ArtifactCamera::onDestroy(ArtifactCamera *this)

{
  ArtifactCameraSubSystem *pAVar1;
  
  pAVar1 = Board::FindGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (pAVar1 != (ArtifactCameraSubSystem *)0x0) {
    ArtifactCameraSubSystem::Close(*(ArtifactCameraSubSystem **)(this + 0x50));
    ArtifactCameraSubSystem::unregisterHandTouchEvents(*(ArtifactCameraSubSystem **)(this + 0x50));
    return;
  }
  return;
}


/* ArtifactCamera::ArtifactCamera() */

void __thiscall ArtifactCamera::ArtifactCamera(ArtifactCamera *this)

{
  ArtifactCameraSubSystem *this_00;
  undefined4 uVar1;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06695550;
  this_00 = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactCameraSubSystem **)(this + 0x50) = this_00;
  ArtifactCameraSubSystem::registerHandTouchEvents(this_00);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* ArtifactCamera::StaticNew() */

ArtifactCamera * ArtifactCamera::StaticNew(void)

{
  ArtifactCamera *this;
  
  this = ::operator_new(0x58);
  ArtifactCamera(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::GetExtraAttackRate(std::string const&) */

void ArtifactCamera::GetExtraAttackRate(string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = PlantRestrictionSet::IsIncluded
                    ((PlantRestrictionSet *)(lVar3 + 0x128),(PlantType *)pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::GetExtraHpRate(std::string const&) */

void ArtifactCamera::GetExtraHpRate(string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = PlantRestrictionSet::IsIncluded
                    ((PlantRestrictionSet *)(lVar3 + 0x128),(PlantType *)pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::Update() */

void __thiscall ArtifactCamera::Update(ArtifactCamera *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  ulong uVar5;
  long *plVar6;
  ZombieZombossMech *pZVar7;
  float *pfVar8;
  BoardArtifactManager *this_01;
  char *pcVar9;
  Effect_PopAnim *pEVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    fVar13 = (float)PVZ_T();
    if (*(float *)(this + 0x40) < fVar13) {
      *(float *)(this + 0x40) = *(float *)(this + 0x48) + *(float *)(this + 0x40);
      fVar13 = (float)PVZ_T();
      *(float *)(this + 0x44) = fVar13 + 0.7;
      this_01 = (BoardArtifactManager *)Board::GetArtifactManager(*(Board **)(gLawnApp + 0x9f0));
      lVar3 = BoardArtifactManager::GetAnimateArtifactMower(this_01);
      if (lVar3 != 0) {
        pcVar9 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar9,"Play_Artifact_Camera_Capture");
        AnimateArtifactMower::GetEffect();
        pEVar10 = (Effect_PopAnim *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        std::string::string((string *)&local_38,"trigger");
        std::string::string((string *)&local_20,"idle");
        PVZ_EOT();
        Effect_PopAnim::PlaySingleAndLoopingAnimation
                  (pEVar10,(string *)&local_38,(string *)&local_20,0);
        std::string::~string((string *)&local_20);
        nop();
        std::string::~string((string *)&local_38);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
    }
    fVar13 = (float)PVZ_T();
    if (*(float *)(this + 0x44) < fVar13) {
      uVar14 = PVZ_EOT();
      *(undefined4 *)(this + 0x44) = uVar14;
      uVar11 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
      EntityFinder::GetEntitiesOnBoard
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2);
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
      local_40 = 0;
      std::vector<Zombie*,std::allocator<Zombie*>>::vector
                ((ulong)&local_20,(Zombie **)(long)iVar2,(allocator *)&local_40);
      uVar12 = local_38;
      lVar3 = FUN_03724708(local_38,local_30);
      if (lVar3 != 0) {
        do {
          puVar4 = (undefined8 *)FUN_03724714(uVar12,uVar11);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          if ((((((this_00 != (Zombie *)0x0) &&
                 (cVar1 = RealObject::IsOnTeam(this_00,2), cVar1 != '\0')) &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
               ((cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0' &&
                (cVar1 = FUN_0373c80c(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')))) &&
              ((cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0' &&
               ((pZVar7 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)this_00),
                pZVar7 == (ZombieZombossMech *)0x0 &&
                (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')))))) &&
             ((cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0' &&
              ((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
               (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 1)))))) {
            iVar2 = SharkMinion::getRow((SharkMinion *)this_00);
            pfVar8 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)this_00);
            uVar12 = local_20;
            fVar13 = *pfVar8;
            uVar5 = FUN_037247c8(local_20,local_18);
            if ((ulong)(long)iVar2 < uVar5) {
              puVar4 = (undefined8 *)FUN_037247d4(uVar12,(long)iVar2);
              if (((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)*puVar4 ==
                   (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)0x0) ||
                 (pfVar8 = (float *)std::
                                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    ::_M_leftmost((
                                                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)*puVar4), fVar13 < *pfVar8)) {
                *puVar4 = this_00;
              }
            }
          }
          uVar12 = local_38;
          uVar11 = uVar11 + 1;
          uVar5 = FUN_03724708(local_38,local_30);
        } while (uVar11 < uVar5);
      }
      uVar12 = local_20;
      uVar11 = 0;
      uVar5 = FUN_037247c8(local_20,local_18);
      if (uVar5 != 0) {
        do {
          plVar6 = (long *)FUN_037247d4(uVar12,uVar11);
          if (*plVar6 != 0) {
                    /* WARNING: Load size is inaccurate */
            Zombie::ApplyCondition(*(Zombie **)(this + 0x4c),0,*plVar6,2,1);
            uVar12 = local_20;
            uVar5 = FUN_037247c8(local_20,local_18);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar5);
      }
      std::vector<Zombie*,std::allocator<Zombie*>>::~vector
                ((vector<Zombie*,std::allocator<Zombie*>> *)&local_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCamera::Activate() */

void __thiscall ArtifactCamera::Activate(ArtifactCamera *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  ArtifactCameraSubSystem *this_00;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  fVar7 = 0.0;
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar7 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  uVar6 = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  }
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
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(undefined4 *)(this + 0x48) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
  }
  *(undefined4 *)(this + 0x4c) = uVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    fVar3 = (float)PVZ_EOT();
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar3 = fVar3 + *(float *)(this + 0x48) * 0.5;
  }
  *(float *)(this + 0x40) = fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  uVar4 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar4 = ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
  }
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  local_18 = (fVar3 + 1.0) * fVar7;
  *(float *)(this + 0x48) = *(float *)(this + 0x48) * (1.0 - fVar5);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) * (fVar3 + 1.0);
  local_14 = uVar6;
  local_10 = uVar4;
  this_00 = Board::GetGameSubSystem<ArtifactCameraSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactCameraSubSystem **)(this + 0x50) = this_00;
  ArtifactCameraSubSystem::Init(this_00);
  ArtifactCameraSubSystem::LoadData
            (*(ArtifactCameraSubSystem **)(this + 0x50),(ParamAdaptor *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

