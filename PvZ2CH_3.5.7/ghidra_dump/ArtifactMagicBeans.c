// Class: ArtifactMagicBeans


/* ArtifactMagicBeans::onDestroy() */

void __thiscall ArtifactMagicBeans::onDestroy(ArtifactMagicBeans *this)

{
  if (*(ArtifactArcadeSubSystem **)(this + 0x50) != (ArtifactArcadeSubSystem *)0x0) {
    ArtifactArcadeSubSystem::setState(*(ArtifactArcadeSubSystem **)(this + 0x50),4);
    PlantWaterRabbit::unregisterForEvents(*(PlantWaterRabbit **)(this + 0x50));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagicBeans::StaticClassInit() */

void ArtifactMagicBeans::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactMagicBeans");
    (*pcVar2)(plVar1,asStack_10,FUN_0373087c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagicBeans::StaticGetClass() */

long * ArtifactMagicBeans::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagicBeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagicBeans::GetClass() const */

long * ArtifactMagicBeans::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactMagicBeans",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactMagicBeans::~ArtifactMagicBeans() */

void __thiscall ArtifactMagicBeans::~ArtifactMagicBeans(ArtifactMagicBeans *this)

{
  *(undefined ***)this = &PTR_GetClass_06690020;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactMagicBeans::~ArtifactMagicBeans() */

void __thiscall ArtifactMagicBeans::~ArtifactMagicBeans(ArtifactMagicBeans *this)

{
  ~ArtifactMagicBeans(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactMagicBeans::ArtifactMagicBeans() */

void __thiscall ArtifactMagicBeans::ArtifactMagicBeans(ArtifactMagicBeans *this)

{
  ArtifactArcadeSubSystem *this_00;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined ***)this = &PTR_GetClass_06690020;
  this_00 = Board::GetGameSubSystem<ArtifactArcadeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactArcadeSubSystem **)(this + 0x50) = this_00;
  ArtifactArcadeSubSystem::registerHandTouchEvents(this_00);
  return;
}


/* ArtifactMagicBeans::StaticNew() */

ArtifactMagicBeans * ArtifactMagicBeans::StaticNew(void)

{
  ArtifactMagicBeans *this;
  
  this = ::operator_new(0x58);
  ArtifactMagicBeans(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagicBeans::AutoClick(int) */

void ArtifactMagicBeans::AutoClick(int param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  Plant *this;
  char *pcVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(uVar3 + 0x40)) {
    lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
    if (lVar4 != 0) {
      cVar1 = BoardTransforms::IsGridCoordinateOnBoard(3,1);
      if (cVar1 == '\0') {
        pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
        AudioMgr::SendEvent(pcVar6,"Play_drop");
        goto LAB_03774428;
      }
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string((string *)&local_10,"magicbeans");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      std::string::~string((string *)&local_10);
      nop();
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
      this = (Plant *)Board::AddPlant((Board *)0x0,uVar7,3,1,(string *)&local_10,1,1,0xffffffff,0,1,
                                      1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (this != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this,true);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_18);
        iVar2 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x114));
        local_18 = (float)iVar2;
        iVar2 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x110));
        uVar7 = *(undefined8 *)(this + 0xa8);
        local_14 = (float)iVar2;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,160.0,364.0);
        PlantMagicbeans::FlyThroughAir(local_10,local_c,local_18,local_14,uVar7);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
    *(int *)(uVar3 + 0x40) = *(int *)(uVar3 + 0x40) + -1;
  }
LAB_03774428:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactMagicBeans::DoTrigger() */

void __thiscall ArtifactMagicBeans::DoTrigger(ArtifactMagicBeans *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  Plant *this_00;
  char *pcVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  lVar4 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0x1c);
    iVar1 = *(int *)(lVar4 + 0x18);
    cVar2 = BoardTransforms::IsGridCoordinateOnBoard(iVar1,iVar3);
    if (cVar2 == '\0') {
      pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(pcVar6,"Play_drop");
    }
    else {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      std::string::string((string *)&local_10,"magicbeans");
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      std::string::~string((string *)&local_10);
      nop();
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)aRStack_20);
      this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar7,iVar1,iVar3,(string *)&local_10,1,1,
                                         0xffffffff,0,1,1,0,0,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      if (this_00 != (Plant *)0x0) {
        Plant::SetIsDuplicatePlant(this_00,true);
        ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                  ((ResistenceValueInfo *)&local_18);
        iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
        local_18 = (float)iVar3;
        iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
        uVar7 = *(undefined8 *)(this_00 + 0xa8);
        local_14 = (float)iVar3;
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,160.0,364.0);
        PlantMagicbeans::FlyThroughAir(local_10,local_c,local_18,local_14,uVar7);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactMagicBeans::Activate() */

void __thiscall ArtifactMagicBeans::Activate(ArtifactMagicBeans *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  fVar4 = 0.0;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(float *)(this + 0x48) = fVar4;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar4 * fVar3;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar4 = fVar4 * 0.01;
  }
  *(float *)(this + 0x30) = fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  uVar5 = 0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar5 = ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(undefined4 *)(this + 0x44) = uVar5;
  return;
}

