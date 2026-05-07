// Class: ArtifactCalabash


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabash::StaticClassInit() */

void ArtifactCalabash::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactCalabash");
    (*pcVar2)(plVar1,asStack_10,FUN_0373a36c,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCalabash::StaticGetClass() */

long * ArtifactCalabash::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCalabash::GetClass() const */

long * ArtifactCalabash::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactCalabash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactCalabash::GetMaxCapacity() */

undefined8 __thiscall ArtifactCalabash::GetMaxCapacity(ArtifactCalabash *this)

{
  undefined8 uVar1;
  
  if (*(ZMatchShopMgr **)(this + 0x40) != (ZMatchShopMgr *)0x0) {
    uVar1 = ZMatchShopMgr::getMatchTicket(*(ZMatchShopMgr **)(this + 0x40));
    return uVar1;
  }
  return 1;
}


/* ArtifactCalabash::GetUsedCapacity() */

void __thiscall ArtifactCalabash::GetUsedCapacity(ArtifactCalabash *this)

{
  if (*(ArtifactCalabashSubSystem **)(this + 0x40) != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::GetUsedCapacity(*(ArtifactCalabashSubSystem **)(this + 0x40));
    return;
  }
  return;
}


/* ArtifactCalabash::~ArtifactCalabash() */

void __thiscall ArtifactCalabash::~ArtifactCalabash(ArtifactCalabash *this)

{
  *(undefined ***)this = &PTR_GetClass_066953a0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactCalabash::~ArtifactCalabash() */

void __thiscall ArtifactCalabash::~ArtifactCalabash(ArtifactCalabash *this)

{
  ~ArtifactCalabash(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactCalabash::CanTriggerMain() */

ulong __thiscall ArtifactCalabash::CanTriggerMain(ArtifactCalabash *this)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = Artifact::CanTriggerMain((Artifact *)this);
  if ((*(ArtifactCalabashSubSystem **)(this + 0x40) != (ArtifactCalabashSubSystem *)0x0) &&
     (bVar1 != 0)) {
    uVar2 = ArtifactCalabashSubSystem::CanUse(*(ArtifactCalabashSubSystem **)(this + 0x40));
    return uVar2;
  }
  return (ulong)bVar1;
}


/* ArtifactCalabash::DoTrigger() */

void __thiscall ArtifactCalabash::DoTrigger(ArtifactCalabash *this)

{
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  if (*(ArtifactCalabashSubSystem **)(this + 0x40) != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::Trigger(*(ArtifactCalabashSubSystem **)(this + 0x40));
    return;
  }
  return;
}


/* ArtifactCalabash::onDestroy() */

void __thiscall ArtifactCalabash::onDestroy(ArtifactCalabash *this)

{
  ArtifactCalabashSubSystem *pAVar1;
  
  pAVar1 = Board::FindGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  if (pAVar1 != (ArtifactCalabashSubSystem *)0x0) {
    ArtifactCalabashSubSystem::Close(*(ArtifactCalabashSubSystem **)(this + 0x40));
    ArtifactCameraSubSystem::unregisterHandTouchEvents(*(ArtifactCameraSubSystem **)(this + 0x40));
    return;
  }
  return;
}


/* ArtifactCalabash::ArtifactCalabash() */

void __thiscall ArtifactCalabash::ArtifactCalabash(ArtifactCalabash *this)

{
  ArtifactCalabashSubSystem *this_00;
  
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066953a0;
  this_00 = Board::GetGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactCalabashSubSystem **)(this + 0x40) = this_00;
  ArtifactCalabashSubSystem::registerHandTouchEvents(this_00);
  return;
}


/* ArtifactCalabash::StaticNew() */

ArtifactCalabash * ArtifactCalabash::StaticNew(void)

{
  ArtifactCalabash *this;
  
  this = ::operator_new(0x48);
  ArtifactCalabash(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabash::AutoClick(int) */

void __thiscall ArtifactCalabash::AutoClick(ArtifactCalabash *this,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ArtifactCalabashSubSystem *this_00;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x3f] == (ArtifactCalabash)0x0) {
    if (param_1 == 3) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
      EntityFinder::GetEntitiesOnBoard
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
      uVar6 = 0;
      while( true ) {
        uVar1 = local_20;
        uVar5 = FUN_03724708(local_20,local_18);
        if (uVar5 <= uVar6) break;
        this_00 = *(ArtifactCalabashSubSystem **)(this + 0x40);
        puVar4 = (undefined8 *)FUN_03724714(uVar1,uVar6);
        iVar2 = SharkMinion::getRow((SharkMinion *)*puVar4);
        puVar4 = (undefined8 *)FUN_03724714(local_20,uVar6);
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar4);
        Sexy::Point::Point(aPStack_28,iVar2,iVar3);
        ArtifactCalabashSubSystem::ApplyThunderElixir(this_00,aPStack_28);
        uVar6 = uVar6 + 1;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    }
    else if (*(ArtifactCalabashSubSystem **)(this + 0x40) != (ArtifactCalabashSubSystem *)0x0) {
      ArtifactCalabashSubSystem::SetZombieSizeType(*(ArtifactCalabashSubSystem **)(this + 0x40),0);
      ArtifactCalabashSubSystem::SetState(*(ArtifactCalabashSubSystem **)(this + 0x40),3);
    }
    this[0x3f] = (ArtifactCalabash)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCalabash::Activate() */

void __thiscall ArtifactCalabash::Activate(ArtifactCalabash *this)

{
  char cVar1;
  undefined4 uVar2;
  long extraout_x0;
  ArtifactMgr *pAVar3;
  NameMapperBase *pNVar4;
  ArtifactCalabashSubSystem *this_00;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_44;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  long local_8;
  
  uVar14 = 0;
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  *(undefined4 *)(this + 0x34) = 0;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar14 = ArtifactMgr::CalculateFieldValue(pAVar3,0,0);
  }
  uVar13 = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar13 = ArtifactMgr::CalculateFieldValue(pAVar3,0,1);
  }
  fVar12 = 0.0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar12 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,2);
  }
  fVar11 = 0.0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar11 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,3);
  }
  fVar10 = 0.0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar10 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,4);
  }
  fVar9 = 0.0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,0);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,0,5);
  }
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar5 = 0.0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,1,0);
    fVar5 = fVar5 * 0.01;
  }
  *(float *)(this + 0x30) = fVar5;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  local_44 = 0;
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    local_44 = ArtifactMgr::CalculateFieldValue(pAVar3,2,0);
  }
  fVar5 = 0.0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar5 = (float)ArtifactMgr::CalculateFieldValue(pAVar3,2,1);
    fVar5 = fVar5 * 0.01;
  }
  uVar6 = 0;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,3);
  if (cVar1 != '\0') {
    pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    uVar6 = ArtifactMgr::CalculateFieldValue(pAVar3,3,0);
  }
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
  std::string::string((string *)&local_30,"artifact_calabash");
  uVar2 = NameMapperBase::GetIdForName(pNVar4,(string *)&local_30);
  fVar7 = (float)ArtifactMgr::GetBoostValue(pAVar3,uVar2,1);
  std::string::~string((string *)&local_30);
  nop();
  pAVar3 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  pNVar4 = (NameMapperBase *)ArtifactMapper::GetInstance();
  std::string::string((string *)&local_30,"artifact_calabash");
  uVar2 = NameMapperBase::GetIdForName(pNVar4,(string *)&local_30);
  fVar8 = (float)ArtifactMgr::GetBoostValue(pAVar3,uVar2,2);
  std::string::~string((string *)&local_30);
  nop();
  fVar8 = fVar8 + 1.0;
  local_28 = fVar8 * fVar12;
  local_20 = fVar8 * fVar10;
  local_1c = fVar8 * fVar9;
  local_24 = (fVar7 + 1.0) * fVar11;
  local_c = (fVar7 + 1.0) * 500.0;
  local_18 = local_44;
  local_30 = uVar14;
  local_2c = uVar13;
  local_14 = fVar5;
  local_10 = uVar6;
  this_00 = Board::GetGameSubSystem<ArtifactCalabashSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  *(ArtifactCalabashSubSystem **)(this + 0x40) = this_00;
  ArtifactCalabashSubSystem::Init(this_00,(ParamAdaptor *)&local_30);
  ArtifactCalabashSubSystem::SetZombieBlackList
            (*(ArtifactCalabashSubSystem **)(this + 0x40),(vector *)(extraout_x0 + 0x150));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

