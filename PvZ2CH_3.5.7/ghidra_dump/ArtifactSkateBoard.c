// Class: ArtifactSkateBoard


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkateBoard::StaticClassInit() */

void ArtifactSkateBoard::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSkateBoard");
    (*pcVar2)(plVar1,asStack_10,FUN_03730454,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSkateBoard::StaticGetClass() */

long * ArtifactSkateBoard::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSkateBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSkateBoard::GetClass() const */

long * ArtifactSkateBoard::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactSkateBoard",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSkateBoard::~ArtifactSkateBoard() */

void __thiscall ArtifactSkateBoard::~ArtifactSkateBoard(ArtifactSkateBoard *this)

{
  *(undefined ***)this = &PTR_GetClass_0668fe70;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSkateBoard::~ArtifactSkateBoard() */

void __thiscall ArtifactSkateBoard::~ArtifactSkateBoard(ArtifactSkateBoard *this)

{
  ~ArtifactSkateBoard(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactSkateBoard::DisplayPassiveSkill(float) */

void __thiscall ArtifactSkateBoard::DisplayPassiveSkill(ArtifactSkateBoard *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkateBoard::DoTrigger() */

void __thiscall ArtifactSkateBoard::DoTrigger(ArtifactSkateBoard *this)

{
  int iVar1;
  int iVar2;
  SkateBoardMower *this_00;
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  std::string::string(asStack_38,"starfruit");
  nop();
  std::string::string(asStack_30,"homingthistle");
  nop();
  std::string::string(asStack_28,"electricblueberry");
  nop();
  std::string::string(asStack_20,"pinkstarfruit");
  nop();
  std::string::string(asStack_18,"nekotail");
  nop();
  std::string::string(asStack_10,"citron");
  nop();
  this_00 = GameObject::Create<SkateBoardMower>();
  iVar1 = FUN_03723bb4(*(undefined4 *)(this + 0x20));
  if (iVar1 < 4) {
    iVar1 = RandRangeInt(0,2);
    iVar2 = FUN_03723bb0(*(undefined4 *)(this + 0x1c));
    SkateBoardMower::InitSkatePlant(this_00,asStack_38 + (long)iVar1 * 8,iVar2);
  }
  else {
    iVar1 = RandRangeInt(0,2);
    iVar2 = FUN_03723bb0(*(undefined4 *)(this + 0x1c));
    SkateBoardMower::InitSkatePlant(this_00,asStack_20 + (long)iVar1 * 8,iVar2);
  }
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSkateBoard::ArtifactSkateBoard() */

void __thiscall ArtifactSkateBoard::ArtifactSkateBoard(ArtifactSkateBoard *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_0668fe70;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0x42c80000;
  return;
}


/* ArtifactSkateBoard::StaticNew() */

ArtifactSkateBoard * ArtifactSkateBoard::StaticNew(void)

{
  ArtifactSkateBoard *this;
  
  this = ::operator_new(0x48);
  ArtifactSkateBoard(this);
  return this;
}


/* ArtifactSkateBoard::Activate() */

void __thiscall ArtifactSkateBoard::Activate(ArtifactSkateBoard *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  
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
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 == '\0') {
    fVar3 = 99999.0;
  }
  else {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x44) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x44) = *(float *)(this + 0x44) - fVar3 * fVar4;
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x40) = fVar3 + *(float *)(this + 0x44);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSkateBoard::Update() */

void __thiscall ArtifactSkateBoard::Update(ArtifactSkateBoard *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  ulong uVar9;
  BoardEntity **ppBVar10;
  ulong uVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Update((Artifact *)this);
  fVar12 = (float)PVZ_T();
  if (*(float *)(this + 0x40) < fVar12) {
    uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar11 = 0;
    std::string::string((string *)&local_50,"SkateProjectile");
    Sexy::ToWString((string *)&local_50);
    Sexy::RtName::RtName((RtName *)&local_20,(wstring *)&local_38);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_60,uVar4,0xc,(RtName *)&local_20);
    Sexy::RtName::~RtName((RtName *)&local_20);
    FUN_05476c50((Point *)&local_38);
    std::string::~string((string *)&local_50);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    EntityFinder::GetEntitiesOnBoard((string *)&local_50,2);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_50);
    Sexy::Point::Point((Point *)&local_38,0,2);
    EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
              ((BoardEntitySorter_ClosestByColumn *)&local_20,(Point *)&local_38);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
              (uVar4,uVar5,(RtName *)&local_20);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    uVar4 = local_50;
    lVar6 = FUN_03724708(local_50,local_48);
    if (lVar6 != 0) {
      do {
        puVar7 = (undefined8 *)FUN_03724714(uVar4,uVar11);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        cVar1 = RealObject::IsOnTeam(this_00,2);
        if ((((cVar1 != '\0') &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
           (cVar1 = FUN_0373c80c(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')) {
          iVar2 = SharkMinion::getRow((SharkMinion *)this_00);
          for (uVar8 = 0; uVar4 = local_38, uVar9 = FUN_03724708(local_38,local_30), uVar8 < uVar9;
              uVar8 = uVar8 + 1) {
            puVar7 = (undefined8 *)FUN_03724714(uVar4,uVar8);
            iVar3 = SharkMinion::getRow((SharkMinion *)*puVar7);
            if (iVar2 == iVar3) goto LAB_037944cc;
          }
          ppBVar10 = (BoardEntity **)FUN_03724714(local_50,uVar11);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,ppBVar10);
LAB_037944cc:
          uVar8 = FUN_03724708(local_20,local_18);
          if (uVar8 < 3) {
            ppBVar10 = (BoardEntity **)FUN_03724714(local_50,uVar11);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,ppBVar10);
          }
          uVar8 = FUN_03724708(local_38,local_30);
          if (2 < uVar8) goto LAB_03794350;
        }
        uVar4 = local_50;
        uVar11 = uVar11 + 1;
        uVar8 = FUN_03724708(local_50,local_48);
      } while (uVar11 < uVar8);
    }
    uVar8 = FUN_03724708(local_38,local_30);
    if (uVar8 < 3) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::operator=
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38,(vector *)&local_20)
      ;
      uVar8 = FUN_03724708(local_38,local_30);
    }
LAB_03794350:
    for (uVar11 = 0; uVar11 < uVar8; uVar11 = uVar11 + 1) {
      uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
      iVar2 = RandRangeInt(-0x1e,0x1e);
      puVar7 = (undefined8 *)FUN_03724714(local_38,uVar11);
      iVar3 = SharkMinion::getRow((SharkMinion *)*puVar7);
      iVar3 = BoardTransforms::GridToBoardSpaceY(iVar3);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      Board::AddProjectile
                ((Board *)(float)(iVar2 + 200),(float)iVar3,0x41200000,uVar4,aRStack_58,0,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      uVar8 = FUN_03724708(local_38,local_30);
    }
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    if (cVar1 == '\0') {
      fVar12 = (float)PVZ_T();
      *(float *)(this + 0x40) = fVar12 + *(float *)(this + 0x44);
    }
    else {
      fVar12 = (float)PVZ_T();
      *(float *)(this + 0x40) = fVar12 + 3.0;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

