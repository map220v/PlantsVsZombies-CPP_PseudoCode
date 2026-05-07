// Class: GridItemFlowerPot


/* GridItemFlowerPot::GetGroundEffect() */

EntityComponent_GroundEffect * GridItemFlowerPot::GetGroundEffect(void)

{
  long in_x0;
  EntityComponent_GroundEffect *in_x8;
  
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            (in_x8,(EntityComponent_GroundEffect *)(in_x0 + 0x1a8));
  return in_x8;
}


/* GridItemFlowerPot::CalcRenderOrder() const */

void __thiscall GridItemFlowerPot::CalcRenderOrder(GridItemFlowerPot *this)

{
  int iVar1;
  
  iVar1 = FUN_03d7034c(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,2);
  return;
}


/* non-virtual thunk to GridItemFlowerPot::CalcRenderOrder() const */

void __thiscall GridItemFlowerPot::CalcRenderOrder(GridItemFlowerPot *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemFlowerPot::GridItemFlowerPot() */

void __thiscall GridItemFlowerPot::GridItemFlowerPot(GridItemFlowerPot *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (GridItemFlowerPot)0x0;
  *(undefined ***)this = &PTR_GetClass_0676f420;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFlowerPot_0676f6d8;
  EntityComponent_GroundEffect::EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1a8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1c8));
  return;
}


/* GridItemFlowerPot::StaticNew() */

GridItemFlowerPot * GridItemFlowerPot::StaticNew(void)

{
  GridItemFlowerPot *this;
  
  this = ::operator_new(0x1d0);
  GridItemFlowerPot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::StaticClassInit() */

void GridItemFlowerPot::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFlowerPot");
    (*pcVar2)(plVar1,asStack_10,FUN_03d71188,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlowerPot::StaticGetClass() */

long * GridItemFlowerPot::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlowerPot::GetClass() const */

long * GridItemFlowerPot::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlowerPot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlowerPot::Heal() */

void __thiscall GridItemFlowerPot::Heal(GridItemFlowerPot *this)

{
  GridItem::ApplyCondition((GridItem *)0x3f400000,this,1);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_03d70344(this + 0x128);
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_03d70344(this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::onPlantSmashed(Plant*) */

void GridItemFlowerPot::onPlantSmashed(Plant *param_1)

{
  char cVar1;
  TPoint<int> aTStack_18 [8];
  TPoint aTStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardEntity::CalcGridPosition();
  cVar1 = Sexy::TPoint<int>::operator==(aTStack_18,aTStack_10);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)param_1 + 0x230))(param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::onGridItemInitialize() */

void __thiscall GridItemFlowerPot::onGridItemInitialize(GridItemFlowerPot *this)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this_00;
  GridItemAnimRig_FlowerPot *pGVar3;
  NameMapperBase *this_01;
  undefined8 uVar4;
  long lVar5;
  PlayerInfo *this_02;
  PopAnimRig *this_03;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pGVar3 = Sexy::RtObject::Cast<GridItemAnimRig_FlowerPot>(this_00);
  TwinsRedStarProjectile::damageEntity((BoardEntity *)pGVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  RealObject::JoinTeam((RealObject *)this,1);
  this_01 = (NameMapperBase *)PlantNameMapper::GetInstance();
  std::string::string((string *)aRStack_10,"flowerpot");
  uVar1 = NameMapperBase::GetIdForName(this_01,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar6 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar1,4,0);
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar7 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar1,5,0);
  GridItem::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar7 = (float)(int)fVar7 + *(float *)(lVar5 + 0x10);
  FUN_03d7033c(fVar6 * fVar7 + fVar7,this + 300);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03d70344(this + 0x128);
  this_02 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_02 != (PlayerInfo *)0x0) {
    std::string::string((string *)aRStack_10,"flowerpot");
    iVar2 = PlayerInfo::GetEquipAvatarID(this_02,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    if (iVar2 != -1) {
      GridItemAnimation::GetAnimRig();
      this_03 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      std::string::string((string *)aRStack_10,"custom_01");
      PopAnimRig::SetLayerVisibility(this_03,(string *)aRStack_10,true);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::CanBeTargetedBy(BoardEntity const*) const */

void __thiscall GridItemFlowerPot::CanBeTargetedBy(GridItemFlowerPot *this,BoardEntity *param_1)

{
  byte bVar1;
  char cVar2;
  Plant *this_00;
  Zombie *this_01;
  Board *this_02;
  int local_20;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  GridItem::GetGridLocation();
  GridItem::GetGridLocation();
  std::string::string(asStack_10,"");
  this_00 = (Plant *)Board::GetPlantAt(this_02,local_20,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (this_00 != (Plant *)0x0) {
    if ((param_1 != (BoardEntity *)0x0) &&
       (this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_01 != (Zombie *)0x0)) {
      bVar1 = Zombie::WillTargetPlant(this_01,this_00);
      bVar1 = bVar1 ^ 1;
      goto LAB_03d716a8;
    }
    cVar2 = Plant::CanBeTargeted(this_00);
    if (cVar2 != '\0') {
      bVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00);
      bVar1 = bVar1 ^ 1;
      goto LAB_03d716a8;
    }
  }
  bVar1 = 1;
LAB_03d716a8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* GridItemFlowerPot::getRenderOffset() */

undefined4 __thiscall GridItemFlowerPot::getRenderOffset(GridItemFlowerPot *this)

{
  GridItemAnimationProps *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  uVar2 = Sexy::SexyVector2::operator-((SexyVector2 *)(pGVar1 + 0xa8),(SexyVector2 *)(this + 0x1c8))
  ;
  return uVar2;
}


/* GridItemFlowerPot::onKilled() */

void __thiscall GridItemFlowerPot::onKilled(GridItemFlowerPot *this)

{
  MessageRouter::Broadcast<GridItemFlowerPot*,GridItemFlowerPot*>
            ((MessageRouter *)gMessageRouter,Message::FlowerPotDied,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::ApplyPlantfood() */

void __thiscall GridItemFlowerPot::ApplyPlantfood(GridItemFlowerPot *this)

{
  Point *pPVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PlayerInfo *this_00;
  string *psVar5;
  StrawburstProjectile *this_01;
  long lVar6;
  GridItemFlowerPot *this_02;
  Effect_PopAnim *this_03;
  ResourceInfo *pRVar7;
  Point *this_04;
  Board *pBVar8;
  float fVar9;
  float fVar10;
  TPoint<int> aTStack_80 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  string asStack_60 [24];
  Point aPStack_48 [8];
  Point aPStack_40 [8];
  Point aPStack_38 [8];
  Point aPStack_30 [8];
  Point aPStack_28 [8];
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_04 = aPStack_48;
  GridItem::GetGridLocation();
  Sexy::Point::Point(this_04,0,-1);
  Sexy::Point::Point(aPStack_40,0,1);
  Sexy::Point::Point(aPStack_38,1,0);
  Sexy::Point::Point(aPStack_30,-1,0);
  Sexy::Point::Point(aPStack_28,1,1);
  Sexy::Point::Point(aPStack_20,1,-1);
  Sexy::Point::Point(aPStack_18,-1,-1);
  Sexy::Point::Point(aPStack_10,-1,1);
  this_00 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_00 == (PlayerInfo *)0x0) {
    iVar4 = 4;
  }
  else {
    std::string::string(asStack_60,"flowerpot");
    iVar3 = PlayerInfo::GetEquipAvatarID(this_00,asStack_60);
    std::string::~string(asStack_60);
    nop();
    iVar4 = 8;
    if (iVar3 == -1) {
      iVar4 = 4;
    }
  }
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_60,"flowerpot");
  pPVar1 = this_04 + ((ulong)(iVar4 - 1) + 1) * 8;
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_60);
  nop();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_60,"flowerpot");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_60);
  nop();
  do {
    Sexy::TPoint<int>::operator+(aTStack_80,(TPoint *)this_04);
    Sexy::Point::Point((Point *)&local_68,(TPoint *)asStack_60);
    pBVar8 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)aRStack_70);
    cVar2 = Board::CanPlantAt(pBVar8,(Point *)&local_68,asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
    if (cVar2 == '\0') {
      lVar6 = FUN_03d71c84(local_68,local_64);
      if (lVar6 != 0) {
        nop();
        Heal(this_02);
      }
    }
    else {
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_60,(RtWeakPtrBase *)aRStack_78);
      Board::AddGridItem(pBVar8,asStack_60,local_68,local_64,1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
      nop();
      StrawburstProjectile::SetJamFlag(this_01,true);
      Heal((GridItemFlowerPot *)this_01);
    }
    this_04 = this_04 + 8;
  } while (this_04 != pPVar1);
  Heal(this);
  std::string::string(asStack_60,"Play_FoodApply");
  RealObject::PlayPositionalSound((RealObject *)this,asStack_60,0.0);
  std::string::~string(asStack_60);
  nop();
  this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_68,"POPANIM_EFFECTS_PLANTFOOD_FX");
  GetPAMByName((string *)&local_68);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  std::string::~string((string *)&local_68);
  nop();
  fVar9 = (float)FUN_03d70378(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar10 = *(float *)(this + 0x1c);
  FUN_03d70378(*(undefined4 *)(this + 0x18),fVar10,*(undefined4 *)(this + 0x20));
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,fVar9 - 98.0,fVar10 - 250.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,(SexyVector3 *)asStack_60,-1);
  iVar4 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_03d70334(this_03 + 0x1c,iVar4 + -1);
  (**(code **)(*(long *)this_03 + 0x80))(0x3fc00000,this_03);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)asStack_60);
  std::string::string((string *)&local_68,"plantfood_on");
  AnimationSequence::AddSingleAnimation(asStack_60,(Point *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  std::string::string((string *)&local_68,"plantfood");
  AnimationSequence::AddLoopingAnimation(0x3f000000,asStack_60,(Point *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  std::string::string((string *)&local_68,"plantfood_on");
  AnimationSequence::AddSingleAnimation(asStack_60,(Point *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  Effect_PopAnim::PlayAnimationSequence(this_03,(AnimationSequence *)asStack_60);
  AnimationSequence::~AnimationSequence((AnimationSequence *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::Shovel() */

void __thiscall GridItemFlowerPot::Shovel(GridItemFlowerPot *this)

{
  string *psVar1;
  long lVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (GridItemFlowerPot)0x0) {
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"flowerpot");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar2 + 0x28));
    uVar3 = *(undefined4 *)(lVar2 + 0x18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
    nop();
  }
  (**(code **)(*(long *)this + 0x230))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlowerPot::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemFlowerPot::GatherPlantingRestrictions
          (GridItemFlowerPot *this,PlantType *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  GridItemFlowerPotProps *pGVar3;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==((string *)(param_1 + 8),"flowerpot");
  if (bVar1) {
    local_c = 0x69;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  else {
    pGVar3 = GridItem::GetProps<GridItemFlowerPotProps>();
    cVar2 = StringRestrictionSet::IsIncluded
                      ((StringRestrictionSet *)(pGVar3 + 0xd0),(string *)(param_1 + 8));
    if (cVar2 != '\0') {
      local_c = 0x68;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlowerPot::~GridItemFlowerPot() */

void __thiscall GridItemFlowerPot::~GridItemFlowerPot(GridItemFlowerPot *this)

{
  *(undefined ***)this = &PTR_GetClass_0676f420;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFlowerPot_0676f6d8;
  EntityComponent_GroundEffect::~EntityComponent_GroundEffect
            ((EntityComponent_GroundEffect *)(this + 0x1a8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemFlowerPot::~GridItemFlowerPot() */

void __thiscall GridItemFlowerPot::~GridItemFlowerPot(GridItemFlowerPot *this)

{
  ~GridItemFlowerPot(this + -0x10);
  return;
}


/* GridItemFlowerPot::~GridItemFlowerPot() */

void __thiscall GridItemFlowerPot::~GridItemFlowerPot(GridItemFlowerPot *this)

{
  ~GridItemFlowerPot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFlowerPot::~GridItemFlowerPot() */

void __thiscall GridItemFlowerPot::~GridItemFlowerPot(GridItemFlowerPot *this)

{
  ~GridItemFlowerPot(this + -0x10);
  return;
}


/* GridItemFlowerPot::onDestroy() */

void __thiscall GridItemFlowerPot::onDestroy(GridItemFlowerPot *this)

{
  GridItem::onDestroy((GridItem *)this);
  EntityComponent_GroundEffect::Destroy((EntityComponent_GroundEffect *)(this + 0x1a8));
  return;
}


/* GridItemFlowerPot::registerForEvents() */

void __thiscall GridItemFlowerPot::registerForEvents(GridItemFlowerPot *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItem::registerForEvents((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantSmashed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemFlowerPot,void(GridItemFlowerPot::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantSmashedToDeath,&local_40);
  return;
}

