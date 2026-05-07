// Class: ArtifactGashapon


/* ArtifactGashapon::onDestroy() */

void __thiscall ArtifactGashapon::onDestroy(ArtifactGashapon *this)

{
  if (*(ArtifactGashaponSubSystem **)(this + 0x40) != (ArtifactGashaponSubSystem *)0x0) {
    ArtifactGashaponSubSystem::setState(*(ArtifactGashaponSubSystem **)(this + 0x40),3);
    PlantWaterRabbit::unregisterForEvents(*(PlantWaterRabbit **)(this + 0x40));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashapon::StaticClassInit() */

void ArtifactGashapon::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactGashapon");
    (*pcVar2)(plVar1,asStack_10,FUN_037318a8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactGashapon::StaticGetClass() */

long * ArtifactGashapon::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashapon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashapon::GetClass() const */

long * ArtifactGashapon::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactGashapon",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactGashapon::~ArtifactGashapon() */

void __thiscall ArtifactGashapon::~ArtifactGashapon(ArtifactGashapon *this)

{
  *(undefined ***)this = &PTR_GetClass_06690bf0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactGashapon::~ArtifactGashapon() */

void __thiscall ArtifactGashapon::~ArtifactGashapon(ArtifactGashapon *this)

{
  ~ArtifactGashapon(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactGashapon::ArtifactGashapon() */

void __thiscall ArtifactGashapon::ArtifactGashapon(ArtifactGashapon *this)

{
  ArtifactGashaponSubSystem *this_00;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06690bf0;
  this_00 = Board::GetGameSubSystem<ArtifactGashaponSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactGashaponSubSystem **)(this + 0x40) = this_00;
  ArtifactGashaponSubSystem::registerHandTouchEvents(this_00);
  return;
}


/* ArtifactGashapon::StaticNew() */

ArtifactGashapon * ArtifactGashapon::StaticNew(void)

{
  ArtifactGashapon *this;
  
  this = ::operator_new(0x48);
  ArtifactGashapon(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactGashapon::DoTrigger() */

void __thiscall ArtifactGashapon::DoTrigger(ArtifactGashapon *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long extraout_x0;
  ArtifactGashaponSubSystem *pAVar3;
  long lVar4;
  string asStack_38 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  if (*(long *)(this + 0x40) == 0) {
    pAVar3 = Board::GetGameSubSystem<ArtifactGashaponSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    *(ArtifactGashaponSubSystem **)(this + 0x40) = pAVar3;
    if (pAVar3 == (ArtifactGashaponSubSystem *)0x0) goto LAB_03772780;
  }
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  pAVar3 = *(ArtifactGashaponSubSystem **)(this + 0x40);
  FUN_05475d88(asStack_38,extraout_x0 + 0x150);
  FUN_05475d88(aRStack_20,extraout_x0 + 0x158);
  ArtifactGashaponSubSystem::setPamAndLabel(pAVar3,asStack_38,aRStack_20);
  std::string::~string((string *)aRStack_20);
  std::string::~string(asStack_38);
  lVar4 = *(long *)(this + 0x40);
  uVar1 = FUN_03723bb0(*(undefined4 *)(this + 0x1c));
  uVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
  FUN_03723d4c(lVar4 + 0x58,lVar4 + 0x5c,uVar1,uVar2);
  pAVar3 = *(ArtifactGashaponSubSystem **)(this + 0x40);
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)asStack_38,(vector *)(extraout_x0 + 0x160));
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)aRStack_20,(vector *)(extraout_x0 + 0x178));
  ArtifactGashaponSubSystem::setPossibility(pAVar3,asStack_38,aRStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)aRStack_20);
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)asStack_38);
  ArtifactGashaponSubSystem::Start(*(ArtifactGashaponSubSystem **)(this + 0x40));
LAB_03772780:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ArtifactGashapon::Activate() */

void __thiscall ArtifactGashapon::Activate(ArtifactGashapon *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  
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
  return;
}

