// Class: ArtifactArcade


/* ArtifactArcade::onDestroy() */

void __thiscall ArtifactArcade::onDestroy(ArtifactArcade *this)

{
  if (*(ArtifactArcadeSubSystem **)(this + 0x48) != (ArtifactArcadeSubSystem *)0x0) {
    ArtifactArcadeSubSystem::setState(*(ArtifactArcadeSubSystem **)(this + 0x48),4);
    PlantWaterRabbit::unregisterForEvents(*(PlantWaterRabbit **)(this + 0x48));
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactArcade::StaticClassInit() */

void ArtifactArcade::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactArcade");
    (*pcVar2)(plVar1,asStack_10,FUN_0372fa30,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactArcade::StaticGetClass() */

long * ArtifactArcade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactArcade::GetClass() const */

long * ArtifactArcade::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactArcade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactArcade::~ArtifactArcade() */

void __thiscall ArtifactArcade::~ArtifactArcade(ArtifactArcade *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fb10;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactArcade::~ArtifactArcade() */

void __thiscall ArtifactArcade::~ArtifactArcade(ArtifactArcade *this)

{
  ~ArtifactArcade(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactArcade::DoTrigger() */

void __thiscall ArtifactArcade::DoTrigger(ArtifactArcade *this)

{
  ArtifactArcadeSubSystem *this_00;
  
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  this_00 = *(ArtifactArcadeSubSystem **)(this + 0x48);
  if (this_00 == (ArtifactArcadeSubSystem *)0x0) {
    this_00 = Board::GetGameSubSystem<ArtifactArcadeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    *(ArtifactArcadeSubSystem **)(this + 0x48) = this_00;
    if (this_00 == (ArtifactArcadeSubSystem *)0x0) {
      return;
    }
  }
  ArtifactArcadeSubSystem::Start(this_00);
  return;
}


/* ArtifactArcade::ArtifactArcade() */

void __thiscall ArtifactArcade::ArtifactArcade(ArtifactArcade *this)

{
  ArtifactArcadeSubSystem *this_00;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668fb10;
  this_00 = Board::GetGameSubSystem<ArtifactArcadeSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactArcadeSubSystem **)(this + 0x48) = this_00;
  ArtifactArcadeSubSystem::registerHandTouchEvents(this_00);
  return;
}


/* ArtifactArcade::StaticNew() */

ArtifactArcade * ArtifactArcade::StaticNew(void)

{
  ArtifactArcade *this;
  
  this = ::operator_new(0x50);
  ArtifactArcade(this);
  return this;
}


/* ArtifactArcade::Activate() */

void __thiscall ArtifactArcade::Activate(ArtifactArcade *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  Artifact::Activate((Artifact *)this);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  }
  *(float *)(this + 0x44) = fVar4;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) + fVar4 * fVar3;
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
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar4 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x40) = fVar4;
  fVar3 = (float)Artifact::GetBoostValue((Artifact *)this,2);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar4 * fVar3;
  return;
}

