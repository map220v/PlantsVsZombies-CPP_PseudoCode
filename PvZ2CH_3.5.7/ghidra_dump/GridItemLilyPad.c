// Class: GridItemLilyPad


/* GridItemLilyPad::onTakeDamage(DamageInfo const&) */

void GridItemLilyPad::onTakeDamage(DamageInfo *param_1)

{
  (**(code **)(*(long *)param_1 + 0x288))(0x3e800000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::CanBeShoveled() */

void GridItemLilyPad::CanBeShoveled(void)

{
  long lVar1;
  Board *this;
  int local_18;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GetGridLocation();
  this = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"");
  lVar1 = Board::GetPlantAt(this,local_18,local_14,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 == 0);
}


/* GridItemLilyPad::~GridItemLilyPad() */

void __thiscall GridItemLilyPad::~GridItemLilyPad(GridItemLilyPad *this)

{
  *(undefined ***)this = &PTR_GetClass_06807c10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLilyPad_06807ec8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemLilyPad::~GridItemLilyPad() */

void __thiscall GridItemLilyPad::~GridItemLilyPad(GridItemLilyPad *this)

{
  ~GridItemLilyPad(this + -0x10);
  return;
}


/* GridItemLilyPad::~GridItemLilyPad() */

void __thiscall GridItemLilyPad::~GridItemLilyPad(GridItemLilyPad *this)

{
  ~GridItemLilyPad(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemLilyPad::~GridItemLilyPad() */

void __thiscall GridItemLilyPad::~GridItemLilyPad(GridItemLilyPad *this)

{
  ~GridItemLilyPad(this + -0x10);
  return;
}


/* GridItemLilyPad::CalcRenderOrder() const */

void __thiscall GridItemLilyPad::CalcRenderOrder(GridItemLilyPad *this)

{
  int iVar1;
  
  iVar1 = FUN_041f9f90(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,2);
  return;
}


/* non-virtual thunk to GridItemLilyPad::CalcRenderOrder() const */

void __thiscall GridItemLilyPad::CalcRenderOrder(GridItemLilyPad *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemLilyPad::GridItemLilyPad() */

void __thiscall GridItemLilyPad::GridItemLilyPad(GridItemLilyPad *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  this[0x1a5] = (GridItemLilyPad)0x0;
  *(undefined ***)this = &PTR_GetClass_06807c10;
  *(undefined ***)(this + 0x10) = &PTR__GridItemLilyPad_06807ec8;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x1b0));
  return;
}


/* GridItemLilyPad::StaticNew() */

GridItemLilyPad * GridItemLilyPad::StaticNew(void)

{
  GridItemLilyPad *this;
  
  this = ::operator_new(0x1b8);
  GridItemLilyPad(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::StaticClassInit() */

void GridItemLilyPad::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemLilyPad");
    (*pcVar2)(plVar1,asStack_10,FUN_041fa4a8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLilyPad::StaticGetClass() */

long * GridItemLilyPad::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLilyPad",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLilyPad::GetClass() const */

long * GridItemLilyPad::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemLilyPad",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemLilyPad::Heal() */

void __thiscall GridItemLilyPad::Heal(GridItemLilyPad *this)

{
  GridItem::ApplyCondition((GridItem *)0x3f400000,this,1);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_041f9f88(this + 0x128);
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_041f9f88(this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::onPlantSmashed(Plant*) */

void GridItemLilyPad::onPlantSmashed(Plant *param_1)

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
/* GridItemLilyPad::CanBeTargetedBy(BoardEntity const*) const */

void __thiscall GridItemLilyPad::CanBeTargetedBy(GridItemLilyPad *this,BoardEntity *param_1)

{
  byte bVar1;
  char cVar2;
  ZombieGargantuar *pZVar3;
  Plant *this_00;
  Zombie *this_01;
  Board *this_02;
  Point aPStack_28 [8];
  int local_20;
  int local_14;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  cVar2 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
  if (cVar2 == '\0') {
    if (param_1 == (BoardEntity *)0x0) {
      bVar1 = 0;
    }
    else {
      pZVar3 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)param_1);
      bVar1 = pZVar3 != (ZombieGargantuar *)0x0;
    }
    goto LAB_041fafc8;
  }
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
      goto LAB_041fafc8;
    }
    cVar2 = Plant::CanBeTargeted(this_00);
    if (cVar2 != '\0') {
      bVar1 = Plant::CanBeTargetedBy((BoardEntity *)this_00);
      bVar1 = bVar1 ^ 1;
      goto LAB_041fafc8;
    }
  }
  bVar1 = 1;
LAB_041fafc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* GridItemLilyPad::onKilled() */

void __thiscall GridItemLilyPad::onKilled(GridItemLilyPad *this)

{
  MessageRouter::Broadcast<GridItemLilyPad*,GridItemLilyPad*>
            ((MessageRouter *)gMessageRouter,Message::LilyPadDied,this);
  return;
}


/* GridItemLilyPad::getRenderOffset() */

undefined4 __thiscall GridItemLilyPad::getRenderOffset(GridItemLilyPad *this)

{
  GridItemAnimationProps *pGVar1;
  undefined4 uVar2;
  
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  uVar2 = Sexy::SexyVector2::operator-((SexyVector2 *)(pGVar1 + 0xa8),(SexyVector2 *)(this + 0x1b0))
  ;
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::ApplyPlantfood() */

void __thiscall GridItemLilyPad::ApplyPlantfood(GridItemLilyPad *this)

{
  Point *pPVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  PlayerInfo *this_00;
  string *psVar5;
  StrawburstProjectile *this_01;
  long lVar6;
  GridItemLilyPad *this_02;
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
    std::string::string(asStack_60,"lilypad");
    iVar3 = PlayerInfo::GetEquipAvatarID(this_00,asStack_60);
    std::string::~string(asStack_60);
    nop();
    iVar4 = 8;
    if (iVar3 == -1) {
      iVar4 = 4;
    }
  }
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
  std::string::string(asStack_60,"lilypad");
  pPVar1 = this_04 + ((ulong)(iVar4 - 1) + 1) * 8;
  ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_60);
  nop();
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_60,"lilypad");
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
      lVar6 = FUN_041fb598(local_68,local_64);
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
      Heal((GridItemLilyPad *)this_01);
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
  fVar9 = (float)FUN_041f9fc8(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                              *(undefined4 *)(this + 0x20));
  fVar10 = *(float *)(this + 0x1c);
  FUN_041f9fc8(*(undefined4 *)(this + 0x18),fVar10,*(undefined4 *)(this + 0x20));
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,fVar9 - 98.0,fVar10 - 250.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,(SexyVector3 *)asStack_60,-1);
  iVar4 = (**(code **)(*(long *)this + 0x170))(this);
  FUN_041f9f78(this_03 + 0x1c,iVar4 + -1);
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
/* GridItemLilyPad::Shovel() */

void __thiscall GridItemLilyPad::Shovel(GridItemLilyPad *this)

{
  string *psVar1;
  long lVar2;
  undefined4 uVar3;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (GridItemLilyPad)0x0) {
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"lilypad");
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
/* GridItemLilyPad::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemLilyPad::GatherPlantingRestrictions
          (GridItemLilyPad *this,PlantType *param_1,vector *param_2)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  GridItemLilyPadProps *pGVar4;
  undefined4 local_c;
  long local_8;
  
  psVar1 = (string *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  bVar2 = std::operator==(psVar1,"lilypad");
  if (bVar2) {
    local_c = 0x35;
    std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
              ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
               (PlantingReason *)&local_c);
  }
  else {
    bVar2 = std::operator==(psVar1,"tanglekelp");
    if (bVar2) {
      local_c = 0x36;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                 (PlantingReason *)&local_c);
    }
    else {
      pGVar4 = GridItem::GetProps<GridItemLilyPadProps>();
      cVar3 = StringRestrictionSet::IsIncluded((StringRestrictionSet *)(pGVar4 + 0xd0),psVar1);
      if (cVar3 != '\0') {
        local_c = 0xc;
        std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                  ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
                   (PlantingReason *)&local_c);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::onGridItemInitialize() */

void __thiscall GridItemLilyPad::onGridItemInitialize(GridItemLilyPad *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  RtObject *this_00;
  GridItemAnimRig_LilyPad *this_01;
  NameMapperBase *this_02;
  undefined8 uVar4;
  long lVar5;
  PlayerInfo *this_03;
  PopAnimRig *this_04;
  int extraout_w1;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_01 = Sexy::RtObject::Cast<GridItemAnimRig_LilyPad>(this_00);
  GridItemAnimRig_LilyPad::PlayIdle(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  RealObject::JoinTeam((RealObject *)this,1);
  this_02 = (NameMapperBase *)PlantNameMapper::GetInstance();
  std::string::string((string *)aRStack_10,"lilypad");
  uVar2 = NameMapperBase::GetIdForName(this_02,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar6 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar2,4,0);
  uVar4 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
  fVar7 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar4,uVar2,5,0);
  GridItem::GetProps();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  fVar7 = (float)(int)fVar7 + *(float *)(lVar5 + 0x10);
  FUN_041f9f80(fVar6 * fVar7 + fVar7,this + 300);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_041f9f88(this + 0x128);
  this_03 = (PlayerInfo *)ProfileUtils::Profile();
  if (this_03 != (PlayerInfo *)0x0) {
    std::string::string((string *)aRStack_10,"lilypad");
    iVar3 = PlayerInfo::GetEquipAvatarID(this_03,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
    if (iVar3 != -1) {
      GridItemAnimation::GetAnimRig();
      this_04 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      std::string::string((string *)aRStack_10,"custom_01");
      PopAnimRig::SetLayerVisibility(this_04,(string *)aRStack_10,true);
      std::string::~string((string *)aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar6 + 5.0;
  *(undefined4 *)(this + 0x1ac) = 0;
  GeneEnhancement::GetGeneByID((GeneEnhancement *)0x11da2,extraout_w1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_10);
  if (bVar1) {
    iVar3 = GeneEnhancement::GetGeneLevel(0x11da2);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    uVar2 = GeneBoost::GetFormulaValue((GeneBoost *)(lVar5 + 0x20),iVar3,1);
    *(undefined4 *)(this + 0x1ac) = uVar2;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemLilyPad::registerForEvents() */

void __thiscall GridItemLilyPad::registerForEvents(GridItemLilyPad *this)

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
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemLilyPad,void(GridItemLilyPad::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantSmashedToDeath,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::onUpdate() */

void __thiscall GridItemLilyPad::onUpdate(GridItemLilyPad *this)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar4) {
    fVar4 = (float)PVZ_T();
    lVar3 = *(long *)this;
    pcVar2 = *(code **)(lVar3 + 0x1d8);
    *(float *)(this + 0x1a8) = fVar4 + 5.0;
    if (pcVar2 == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar4 = (float)(*pcVar2)();
      lVar3 = *(long *)this;
    }
    if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
      pcVar2 = GridItem::GetMaxHitpoints;
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
      pcVar2 = *(code **)(*(long *)this + 0x1e0);
    }
    local_10 = fVar4 + *(float *)(this + 0x1ac) * fVar5;
    if (pcVar2 == GridItem::GetMaxHitpoints) {
      local_c = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      local_c = (float)(*pcVar2)();
    }
    pfVar1 = eastl::min_alt<float>(&local_10,&local_c);
    if (local_8 == ___stack_chk_guard) {
      FUN_041f9f88(*pfVar1,this + 0x128);
      return;
    }
  }
  else if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemLilyPad::onDestroy() */

void __thiscall GridItemLilyPad::onDestroy(GridItemLilyPad *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  Plant *pPVar7;
  code *pcVar8;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  uVar3 = SharkMinion::getRow((SharkMinion *)this);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  uVar4 = operator|(4,1);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar4,uVar2,
             uVar3);
  lVar5 = FUN_041f9fbc(local_80,local_78);
  if (lVar5 != 0) {
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pPVar7 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
      if (pPVar7 != (Plant *)0x0) {
        pcVar8 = *(code **)(*(long *)pPVar7 + 0x120);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo((DamageInfo *)0x0,local_88,local_84,aDStack_68,4,aPStack_90,0);
        (*pcVar8)(pPVar7,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
  }
  GridItem::onDestroy((GridItem *)this);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

