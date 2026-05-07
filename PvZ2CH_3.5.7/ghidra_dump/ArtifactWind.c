// Class: ArtifactWind


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWind::StaticClassInit() */

void ArtifactWind::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactWind");
    (*pcVar2)(plVar1,asStack_10,FUN_0372a440,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWind::StaticGetClass() */

long * ArtifactWind::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWind::GetClass() const */

long * ArtifactWind::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactWind::ResetValues() */

void __thiscall ArtifactWind::ResetValues(ArtifactWind *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x40) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = uVar1;
  return;
}


/* ArtifactWind::~ArtifactWind() */

void __thiscall ArtifactWind::~ArtifactWind(ArtifactWind *this)

{
  *(undefined ***)this = &PTR_GetClass_0668ae60;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactWind::~ArtifactWind() */

void __thiscall ArtifactWind::~ArtifactWind(ArtifactWind *this)

{
  ~ArtifactWind(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWind::GenerateRandomWind() */

void __thiscall ArtifactWind::GenerateRandomWind(ArtifactWind *this)

{
  int iVar1;
  int iVar2;
  ArtifactMgr *pAVar3;
  HeianWindSubsystem *pHVar4;
  float fVar5;
  float fVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,1);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar6 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_20);
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  local_18 = Sexy::Rand(iVar2);
  local_20 = 999;
  local_14 = 0x3fc00000;
  fStack_1c = (float)iVar1 * fVar5 + fVar6 * (float)iVar1 * fVar5;
  pHVar4 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  local_30 = local_10;
  local_40 = CONCAT44(fStack_1c,local_20);
  uStack_38 = CONCAT44(local_14,local_18);
  HeianWindSubsystem::Generate(pHVar4,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWind::ArtifactWind() */

void __thiscall ArtifactWind::ArtifactWind(ArtifactWind *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668ae60;
  return;
}


/* ArtifactWind::StaticNew() */

ArtifactWind * ArtifactWind::StaticNew(void)

{
  ArtifactWind *this;
  
  this = ::operator_new(0x58);
  ArtifactWind(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWind::GenerateTornado() */

void __thiscall ArtifactWind::GenerateTornado(ArtifactWind *this)

{
  long extraout_x0;
  long lVar1;
  GridItemArtifactTornado *pGVar2;
  ArtifactMgr *pAVar3;
  RtObject *this_00;
  Board *this_01;
  float fVar4;
  float fVar5;
  int local_18;
  int local_14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::Point::Point((Point *)&local_18,*(int *)(extraout_x0 + 0x154),*(int *)(extraout_x0 + 0x158))
  ;
  if ((local_18 != -1) && (local_14 != -1)) {
    lVar1 = FUN_03754d00();
    if (lVar1 != 0) goto LAB_03755064;
    pGVar2 = (GridItemArtifactTornado *)FUN_03754de4(local_18,local_14);
    lVar1 = FUN_03754ec8(local_18,local_14);
    if (pGVar2 == (GridItemArtifactTornado *)0x0) {
      if (lVar1 == 0) {
        pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
        fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
        fVar5 = (float)Artifact::GetBoostValue((Artifact *)this,2);
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)aRStack_10,"artifact_tornado");
        this_00 = (RtObject *)Board::AddGridItem(this_01,(string *)aRStack_10,local_18,local_14,1);
        pGVar2 = Sexy::RtObject::Cast<GridItemArtifactTornado>(this_00);
        std::string::~string((string *)aRStack_10);
        nop();
        FUN_03723bc0(fVar4 + fVar4 * fVar5,pGVar2 + 0x1b0);
        FUN_03723aac(pGVar2 + 0x24,1);
        GridItemArtifactTornado::SetIdle(pGVar2);
      }
    }
    else {
      GridItemArtifactTornado::ResetTimer(pGVar2);
    }
  }
  *(undefined4 *)(this + 0x40) = 2;
LAB_03755064:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWind::Update() */

void __thiscall ArtifactWind::Update(ArtifactWind *this)

{
  char cVar1;
  float fVar2;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    if ((*(int *)(this + 0x40) == 1) && (fVar2 = (float)PVZ_T(), *(float *)(this + 0x44) <= fVar2))
    {
      GenerateTornado(this);
    }
    if ((0.0 < *(float *)(this + 0x4c)) &&
       (fVar2 = (float)PVZ_T(), *(float *)(this + 0x48) <= fVar2)) {
      GenerateRandomWind(this);
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x48) = fVar2 + *(float *)(this + 0x4c);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactWind::GenerateWind() */

void __thiscall ArtifactWind::GenerateWind(ArtifactWind *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ArtifactMgr *pAVar4;
  HeianWindSubsystem *pHVar5;
  long extraout_x0;
  undefined8 uVar6;
  long *plVar7;
  Zombie *pZVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar9;
  ZombieBlowerSubSystem *pZVar10;
  ResourceInfo *pRVar11;
  int extraout_w1;
  float fVar12;
  float fVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_98 [8];
  RtId aRStack_90 [8];
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [32];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pAVar4 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar12 = (float)ArtifactMgr::CalculateFieldValue(pAVar4,0,0);
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar13 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  HeianWindRecord::HeianWindRecord((HeianWindRecord *)&local_88);
  local_78 = *(undefined4 *)(this + 0x50);
  local_80 = 0xffffffff;
  local_88 = 999;
  local_7c = 0x3fc00000;
  fStack_84 = (float)iVar3 * fVar12 + fVar13 * (float)iVar3 * fVar12;
  pHVar5 = Board::GetGameSubSystem<HeianWindSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  local_c0 = CONCAT44(fStack_84,local_88);
  uStack_b8 = CONCAT44(local_7c,local_80);
  local_b0 = local_78;
  HeianWindSubsystem::Generate(pHVar5,&local_c0);
  *(undefined4 *)(this + 0x40) = 1;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  fVar12 = (float)PVZ_T();
  *(float *)(this + 0x44) = fVar12 + *(float *)(extraout_x0 + 0x15c);
  uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aRStack_70,uVar6,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)aRStack_70), bVar1) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)aRStack_70);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_98,(RtWeakPtrBase *)aRStack_90);
    Sexy::RtId::~RtId(aRStack_90);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
    cVar2 = (**(code **)(*plVar7 + 0x328))();
    if (cVar2 == '\0') {
      plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
      cVar2 = (**(code **)(*plVar7 + 1000))();
      if (cVar2 != '\0') {
        pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
        cVar2 = Zombie::IsOnGround(pZVar8);
        if (cVar2 == '\0') {
          pZVar8 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_98);
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar8);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          FUN_05475d88(aRStack_90,lVar9 + 8);
          bVar1 = std::operator==((string *)aRStack_90,"wave_airbubble");
          if (bVar1) {
            pZVar10 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_98);
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieBlowerSubSystem::BlowZombie
                      ((ZombieBlowerSubSystem *)0x42c80000,0,pZVar10,0,pRVar11,aRStack_50);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
          std::string::~string((string *)aRStack_90);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_98);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)aRStack_70,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactWind::DoTrigger() */

void __thiscall ArtifactWind::DoTrigger(ArtifactWind *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  ResetValues(this);
  GenerateWind(this);
  return;
}


/* ArtifactWind::Activate() */

void __thiscall ArtifactWind::Activate(ArtifactWind *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  Artifact::Activate((Artifact *)this);
  ResetValues(this);
  *(undefined4 *)(this + 0x48) = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
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
  *(float *)(this + 0x4c) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x4c) = *(float *)(this + 0x4c) - fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,3,0);
    fVar3 = fVar3 * 0.01;
  }
  *(float *)(this + 0x50) = fVar3;
  return;
}

