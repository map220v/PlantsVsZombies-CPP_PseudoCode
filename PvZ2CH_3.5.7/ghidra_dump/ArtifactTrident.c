// Class: ArtifactTrident


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::StaticClassInit() */

void ArtifactTrident::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactTrident");
    (*pcVar2)(plVar1,asStack_10,FUN_0375f9d4,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTrident::StaticGetClass() */

long * ArtifactTrident::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactTrident",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactTrident::GetClass() const */

long * ArtifactTrident::GetClass(void)

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
  (*pcVar3)(plVar1,"ArtifactTrident",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::SpawnHole(Sexy::Point) */

void __thiscall ArtifactTrident::SpawnHole(undefined8 param_1,int *param_2)

{
  long lVar1;
  Board *pBVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"WaterHole");
  lVar1 = Board::GetGridItemAt(pBVar2,asStack_10,*param_2,param_2[1]);
  std::string::~string(asStack_10);
  nop();
  if (lVar1 == 0) {
    pBVar2 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"WaterHole");
    Board::AddGridItem(pBVar2,asStack_10,*param_2,param_2[1],1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTrident::~ArtifactTrident() */

void __thiscall ArtifactTrident::~ArtifactTrident(ArtifactTrident *this)

{
  *(undefined ***)this = &PTR_GetClass_06694ae0;
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactTrident::~ArtifactTrident() */

void __thiscall ArtifactTrident::~ArtifactTrident(ArtifactTrident *this)

{
  ~ArtifactTrident(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactTrident::DisplayPassiveSkill(float) */

void __thiscall ArtifactTrident::DisplayPassiveSkill(ArtifactTrident *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 100) = fVar1 + param_1;
  return;
}


/* ArtifactTrident::SetState(ArtifactTridentState) */

void __thiscall ArtifactTrident::SetState(ArtifactTrident *this,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  *(int *)(this + 0x6c) = param_2;
  if (param_2 == 1) {
    uVar2 = PVZ_T();
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = uVar2;
    return;
  }
  if ((param_2 == 2) && (iVar1 = FUN_03723bb4(*(undefined4 *)(this + 0x20)), 3 < iVar1)) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x70) = fVar3 + 1.3;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::DoTrigger() */

void __thiscall ArtifactTrident::DoTrigger(ArtifactTrident *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  PopAnim *pPVar2;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  SetState(this,1);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 / 2);
  Sexy::Point::Point((Point *)&local_30,0,(int)(float)iVar1);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_30,(float)(local_2c + -10),0.0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_TRIDENT_EFFECT");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string((string *)aRStack_20,"hw");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
  FUN_03723aa0(this_00 + 0x1c,0x65131);
  Effect_PopAnim::SetCentered(this_00,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::FireWaterSpout() */

void __thiscall ArtifactTrident::FireWaterSpout(ArtifactTrident *this)

{
  int iVar1;
  RtObject *pRVar2;
  ArtifactTridentProperties *pAVar3;
  ArtifactWaterSpoutProjectile *pAVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  pRVar2 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar3 = Sexy::RtObject::Cast<ArtifactTridentProperties>(pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1 / 2);
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)(pAVar3 + 0x150));
  pRVar2 = (RtObject *)Board::AddProjectile((Board *)0x0,(float)iVar1,0,uVar5,aRStack_10,0,0);
  pAVar4 = Sexy::RtObject::Cast<ArtifactWaterSpoutProjectile>(pRVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_03726e2c(pAVar4 + 0x188);
  SetState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTrident::ArtifactTrident() */

void __thiscall ArtifactTrident::ArtifactTrident(ArtifactTrident *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_06694ae0;
  return;
}


/* ArtifactTrident::StaticNew() */

ArtifactTrident * ArtifactTrident::StaticNew(void)

{
  ArtifactTrident *this;
  
  this = ::operator_new(0x78);
  ArtifactTrident(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::SpawnTrident(Sexy::Point const&) */

void __thiscall ArtifactTrident::SpawnTrident(ArtifactTrident *this,Point *param_1)

{
  long lVar1;
  undefined8 uVar2;
  GridItemCthulhuActiniaTentacle *extraout_x0;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(int *)param_1 == -1) || (*(int *)(param_1 + 4) == -1)) ||
     (lVar1 = FUN_03759c9c(), lVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_10,"Trident_water");
    Board::AddGridItem(this_00,asStack_10,*(int *)param_1,*(int *)(param_1 + 4),1);
    std::string::~string(asStack_10);
    nop();
    nop();
    FUN_03723d18(extraout_x0 + 0x1ac,*(undefined4 *)(this + 0x44));
    FUN_03723d20(extraout_x0 + 0x1b0,(int)*(float *)(this + 0x48));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
    GridItemCthulhuActiniaTentacle::SetOwnerPlant(extraout_x0,asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar2 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::DamageFlyZombie(Zombie*) */

void __thiscall ArtifactTrident::DamageFlyZombie(ArtifactTrident *this,Zombie *param_1)

{
  int iVar1;
  float fVar2;
  Zombie *pZVar3;
  DamageInfo aDStack_68 [8];
  float local_60;
  long local_8;
  
  fVar2 = *(float *)(this + 0x54);
                    /* WARNING: Load size is inaccurate */
  pZVar3._0_4_ = *(Zombie **)(this + 0x48);
  local_8 = ___stack_chk_guard;
  iVar1 = Zombie::GetSizeType(param_1);
  if (iVar1 == 2) {
    fVar2 = fVar2 * 0.5;
    pZVar3._0_4_ = (Zombie *)((float)pZVar3._0_4_ * 0.5);
  }
  DamageInfo::DamageInfo(aDStack_68);
  local_60 = fVar2;
  Zombie::ApplyCondition(pZVar3._0_4_,0,param_1,2,1);
  (**(code **)(*(long *)param_1 + 0x110))(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::GetValidTargets(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&) */

void ArtifactTrident::GetValidTargets(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  Zombie *this;
  vector<Sexy::Point,std::allocator<Sexy::Point>> *in_x1;
  int iVar8;
  ulong in_x4;
  int iVar9;
  BoardTransforms *this_00;
  Point *pPVar10;
  Board *pBVar11;
  double dVar12;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)0x0;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  if (0 < iVar3) {
    do {
      iVar3 = 0;
      while( true ) {
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        iVar8 = (int)in_x4;
        iVar9 = (int)this_00;
        if (iVar4 <= iVar3) break;
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
        BoardTransforms::GridToBoardSpaceRect(this_00,iVar3,1,1,iVar8);
        dVar12 = (double)(int)local_48[0];
        iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
        local_48[0] = (uint)(dVar12 - (double)iVar4 * 0.3);
        in_x4 = (ulong)local_48[0];
        EntityFinder::GetEntitiesInRectangle
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
                   local_48);
        lVar5 = FUN_03724708(local_38,local_30);
        if (lVar5 != 0) {
          pPVar10 = *(Point **)(gLawnApp + 0x9f0);
          Sexy::Point::Point((Point *)&local_20,iVar9,iVar3);
          lVar5 = Board::GetPlantGroupAt(pPVar10);
          if (lVar5 == 0) {
            pBVar11 = *(Board **)(gLawnApp + 0x9f0);
            Sexy::Point::Point((Point *)&local_50,iVar9,iVar3);
            cVar1 = Board::IsPitOfDoom(pBVar11,(Point *)&local_50);
            if (cVar1 == '\0') {
              pBVar11 = *(Board **)(gLawnApp + 0x9f0);
              Sexy::Point::Point((Point *)&local_20,iVar9,iVar3);
              cVar1 = Board::IsShallowWater(pBVar11,(Point *)&local_20);
              if (cVar1 == '\0') {
                if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
                   (lVar5 = Board::GetStage(*(Board **)(gLawnApp + 0x9f0)), lVar5 != 0)) {
                  plVar6 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
                  if (*(code **)(*plVar6 + 0xb8) == StageModule::CanGraveStoneSpawnAt) {
                    cVar1 = StageModule::CanGraveStoneSpawnAt((int)plVar6,iVar9);
                  }
                  else {
                    cVar1 = (**(code **)(*plVar6 + 0xb8))(plVar6,this_00,iVar3);
                  }
                  if (cVar1 == '\0') goto LAB_0376d2b4;
                }
                std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                          ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_20);
                Board::GetGridItemsAt(*(Board **)(gLawnApp + 0x9f0),iVar9,iVar3,(vector *)&local_20)
                ;
                lVar5 = FUN_037246fc(local_20,local_18);
                if (lVar5 == 0) {
LAB_0376d460:
                  local_60 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                      *)&local_38);
                  local_58 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)&local_38);
                  while (bVar2 = __gnu_cxx::operator!=
                                           ((__normal_iterator *)&local_60,
                                            (__normal_iterator *)&local_58), bVar2) {
                    puVar7 = (undefined8 *)
                             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60)
                    ;
                    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
                    if ((((((this != (Zombie *)0x0) &&
                           (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this), !bVar2)) &&
                          (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), !bVar2)
                          ) && ((cVar1 = (**(code **)(*(long *)this + 0x4d8))(this), cVar1 == '\0'
                                && (cVar1 = (**(code **)(*(long *)this + 0x508))(this),
                                   cVar1 == '\0')))) &&
                        ((cVar1 = Zombie::HasFogImmune(this), cVar1 == '\0' &&
                         ((cVar1 = Zombie::IsBerserk(this), cVar1 == '\0' &&
                          (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 == '\0'))))))
                       && ((cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0' &&
                           ((cVar1 = Zombie::CanBeLaunchedByPlantsExtra(this), cVar1 != '\0' &&
                            (iVar4 = Zombie::GetSizeType(this), iVar4 != 2)))))) {
                      Sexy::Point::Point((Point *)&local_50,iVar9,iVar3);
                      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                                (in_x1,(Point *)&local_50);
                      std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                                ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
                      goto LAB_0376d2b4;
                    }
                    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
                  }
                }
                else {
                  local_58 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                      *)&local_20);
                  local_50 = std::
                             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)&local_20);
                  while (bVar2 = __gnu_cxx::operator!=
                                           ((__normal_iterator *)&local_58,
                                            (__normal_iterator *)&local_50), bVar2) {
                    puVar7 = (undefined8 *)
                             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
                    ;
                    bVar2 = Sexy::RtObject::IsA<GridItemScoreTile>((RtObject *)*puVar7);
                    if (bVar2) goto LAB_0376d460;
                    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
                  }
                }
                std::vector<GridItem*,std::allocator<GridItem*>>::~vector
                          ((vector<GridItem*,std::allocator<GridItem*>> *)&local_20);
              }
            }
          }
        }
LAB_0376d2b4:
        iVar3 = iVar3 + 1;
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
      }
      this_00 = (BoardTransforms *)(ulong)(iVar9 + 1U);
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    } while ((int)(iVar9 + 1U) < iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::Passive1() */

void __thiscall ArtifactTrident::Passive1(ArtifactTrident *this)

{
  int iVar1;
  bool bVar2;
  TPoint *pTVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  Point aPStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  GetValidTargets((vector *)this);
  iVar1 = *(int *)(this + 0x5c);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar2) {
    iVar4 = iVar4 + 1;
    pTVar3 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    Sexy::Point::Point(aPStack_28,pTVar3);
    SpawnHole(this,aPStack_28);
    if (iVar4 == iVar1) break;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0 < iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::ConfirmZombieTarget(int) */

void ArtifactTrident::ConfirmZombieTarget(int param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ProbabilityBucket *pPVar6;
  int in_w1;
  int in_w4;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  uint uVar7;
  int iVar8;
  double dVar9;
  Point aPStack_68 [8];
  ulong local_60;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar8 = 0;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar2) {
    do {
      for (uVar7 = 0; iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), (int)uVar7 < iVar2;
          uVar7 = uVar7 + 1) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
        BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)uVar7,iVar8,1,1,in_w4);
        dVar9 = (double)(int)local_48[0];
        iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
        local_48[0] = CONCAT44(local_48[0]._4_4_,(int)(dVar9 - (double)iVar2 * 0.3));
        EntityFinder::GetEntitiesInRectangle
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,2,
                   (__normal_iterator *)local_48);
        lVar3 = FUN_03724708(local_20,local_18);
        if (lVar3 != 0) {
          Sexy::Point::Point(aPStack_68,uVar7,iVar8);
          local_60 = FUN_03724708(local_20,local_18);
          std::pair<Sexy::Point,int>::pair<Sexy::Point,unsigned_long,void>
                    ((pair<Sexy::Point,int> *)local_58,aPStack_68,&local_60);
          std::vector<std::pair<Sexy::Point,int>,std::allocator<std::pair<Sexy::Point,int>>>::
          push_back((vector<std::pair<Sexy::Point,int>,std::allocator<std::pair<Sexy::Point,int>>> *
                    )avStack_38,(pair *)local_58);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      }
      iVar8 = iVar8 + 1;
      iVar2 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar8 < iVar2);
  }
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_38);
  FUN_03784138(uVar4,uVar5);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_58[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_38);
  local_48[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
  if (in_w1 < 1) {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_58,(__normal_iterator *)local_48), bVar1) {
      pPVar6 = (ProbabilityBucket *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
      ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)&local_20,pPVar6);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)local_58);
    }
  }
  else {
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_58,(__normal_iterator *)local_48), bVar1) {
      pPVar6 = (ProbabilityBucket *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
      ProbabilitySet<Sexy::Point>::ProbabilityBucket::ProbabilityBucket
                ((ProbabilityBucket *)&local_20,pPVar6);
      std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)in_x8,(Point *)&local_20);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)local_58);
    }
  }
  std::vector<std::pair<Sexy::Point,int>,std::allocator<std::pair<Sexy::Point,int>>>::~vector
            ((vector<std::pair<Sexy::Point,int>,std::allocator<std::pair<Sexy::Point,int>>> *)
             avStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::GenerateTrident() */

void __thiscall ArtifactTrident::GenerateTrident(ArtifactTrident *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  TPoint *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  Point aPStack_48 [8];
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  iVar9 = 0;
  ConfirmZombieTarget((int)this);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::operator=
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,(vector *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_38);
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20)
        , bVar1) {
    pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    Sexy::Point::Point(aPStack_48,pTVar5);
    cVar2 = SpawnTrident(this,aPStack_48);
    if (cVar2 != '\0') {
      iVar9 = iVar9 + 1;
      if (*(int *)(this + 0x40) <= iVar9) goto LAB_03784524;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  while (iVar9 < *(int *)(this + 0x40)) {
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar3 = Sexy::Rand(iVar3 + -1);
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    iVar4 = Sexy::Rand(iVar4 + -1);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)avStack_38);
    uVar7 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_38);
    Sexy::Point::Point(aPStack_48,iVar3,iVar4);
    local_40 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                         (uVar6,uVar7,aPStack_48);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_38);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
    if (bVar1) {
      Sexy::Point::Point((Point *)local_20,iVar3,iVar4);
      cVar2 = SpawnTrident(this,(Point *)local_20);
      if (cVar2 != '\0') {
        iVar9 = iVar9 + 1;
        Sexy::Point::Point((Point *)local_20,iVar3,iVar4);
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38,(Point *)local_20);
      }
    }
  }
  pcVar8 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar8,"Play_Plant_TangleKelp_Attack_Start");
LAB_03784524:
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactTrident::Update() */

void __thiscall ArtifactTrident::Update(ArtifactTrident *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_03723bb8(this[0x3d]);
  if (cVar1 != '\0') {
    if (this[0x3c] != (ArtifactTrident)0x0) {
      if (*(int *)(this + 0x6c) == 1) {
        if (*(int *)(this + 0x60) < *(int *)(this + 0x50)) {
          fVar4 = *(float *)(this + 0x68);
          fVar3 = (float)PVZ_T();
          if (fVar4 <= fVar3) {
            GenerateTrident(this);
            fVar3 = (float)PVZ_T();
            *(int *)(this + 0x60) = *(int *)(this + 0x60) + 1;
            *(float *)(this + 0x68) = fVar3 + 1.4;
          }
        }
        else {
          SetState(this,2);
        }
      }
      else if (((*(int *)(this + 0x6c) == 2) &&
               (iVar2 = FUN_03723bb4(*(undefined4 *)(this + 0x20)), 3 < iVar2)) &&
              (fVar4 = *(float *)(this + 0x70), fVar3 = (float)PVZ_T(), fVar4 < fVar3)) {
        FireWaterSpout(this);
      }
    }
    fVar3 = (float)PVZ_T();
    if ((*(float *)(this + 100) < fVar3) && (cVar1 = Passive1(this), cVar1 != '\0')) {
      fVar3 = (float)PVZ_T();
      *(float *)(this + 100) = fVar3 + *(float *)(this + 0x58);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactTrident::Activate() */

void __thiscall ArtifactTrident::Activate(ArtifactTrident *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(int *)(this + 0x40) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  *(int *)(this + 0x44) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,2);
  *(float *)(this + 0x48) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x48) = *(float *)(this + 0x48) + fVar3 * fVar4;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,3);
  *(int *)(this + 0x50) = (int)fVar3;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,0,4);
  *(float *)(this + 0x54) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,1);
  *(float *)(this + 0x54) = *(float *)(this + 0x54) + fVar3 * fVar4;
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
  fVar3 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x58) = fVar3;
  fVar4 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  *(float *)(this + 0x58) = *(float *)(this + 0x58) - fVar3 * fVar4;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar3 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    *(int *)(this + 0x5c) = (int)fVar3;
    if ((int)fVar3 != 0) goto LAB_03788474;
  }
  *(undefined4 *)(this + 0x5c) = 1;
LAB_03788474:
  if (0.0 < *(float *)(this + 0x58)) {
    fVar3 = (float)PVZ_T();
    *(float *)(this + 100) = fVar3 + *(float *)(this + 0x58);
    uVar5 = PVZ_EOT();
  }
  else {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 100) = uVar5;
  }
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = uVar5;
  *(undefined4 *)(this + 0x70) = uVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

